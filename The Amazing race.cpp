2                                                                    5
5                                                                    4
4 1 2 1 4
5 
5 1 2 4 1



//the output 5 and 4 are indexes.

//the heights of the different vehicles are given in an array. we have to find out how many other vehicles a particular vehicle can see infront and behind it.
//we gotta find x*p
//where x is the sum of number of vehicles a vehicle can see infront + behind
//p is the index of the vehicle.

//final output should index at which x*p would be maximum.








#include <bits/stdc++.h>
#include <algorithm>


using namespace std;


 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int arr[n+1];
        for(long int i=1;i<=n;i++){
            cin>>arr[i];
        }
        long int behind[n+1];
        stack<long int> index_st1;
        index_st1.push(1);
        behind[1]=0;
        for(long int i=2;i<=n;i++){
            while((!index_st1.empty()) && (arr[index_st1.top()] < arr[i])){
                index_st1.pop();
            }
            if(!index_st1.empty())
            {
                behind[i] = i - index_st1.top();
            }
            else{
                behind[i] = i-1;
            }
            index_st1.push(i);
        }
        
        long int infront[n+1];
        stack<long int> index_st2;
        index_st2.push(n);
        infront[n]=0;
        for(long int i=n;i>=1;i--){
            while((!index_st2.empty()) && (arr[index_st2.top()] < arr[i]))
            {
                index_st2.pop();
                
            }
            if(!index_st2.empty())
            {
                infront[i] = index_st2.top() - i;
                // cout<<infront[i];
            }
            else
            {
                infront[i]=n-i;
            }
            index_st2.push(i);
        }
        long int sum, index;
        long int mul,temp=INT_MIN,out;
        for(long int i=1;i<=n;i++){
            sum=infront[i]+ behind[i];
            index=i;
            mul=(sum*index) % 1000000007;
            if(temp<mul){
                temp=mul;
                out=index;
            }
            
            
        }
        cout<<out<<endl;
        
        
    }
}
 
  
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         int b[n]={1};
//         fill_n(b, n, 1);
 
//         for(int i=0;i<n-1;i++){
           
//             for(int j=i+1;j<n;j++){
//                 if(arr[i] > arr[j]){
//                     b[i]=b[i]+1;
//                 }
//                 else
//                 {
//                     break;
//                 }
                
//             }
            
//         }
//         for(int i=n-1;i>0;i--){
           
//             for(int j=i-1;j>=0;j--){
//                 if(arr[i] > arr[j]){
//                     b[i]=b[i]+1;
//                 }
//                 else
//                 {
//                     break;
//                 }
                
//             }
            
//         }
//         int max=0;
//         int index=0;
//         for(int i=0;i<n;i++){
//             if(b[i]*(i+1)>max){
//                 max=b[i]*(i+1);
//                 index=i+1;
//             }
            
            
//         }cout<<index<<endl;
        
//     }
// }
