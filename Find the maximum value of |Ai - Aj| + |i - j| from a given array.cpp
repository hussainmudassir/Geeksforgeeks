#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        vector<int> vm1,vm2;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            vm1.push_back(a[i]+i);
            vm2.push_back(a[i]-i);
        }
        int max1=0, min1=a[0],max2=0,min2=a[0];
        for (auto ir = vm1.crbegin(); ir != vm1.crend(); ++ir){
            if(*ir>max1){
                max1=*ir;
            }
            if(*ir<min1){
                min1=*ir;
            }
        }
        for (auto ir = vm2.crbegin(); ir != vm2.crend(); ++ir) 
            {
                if(*ir>max2){
                max2=*ir;
            }
            if(*ir<min2){
                min2=*ir;
            }
                
            }
            
            if((abs(max1-min1)) > (abs(max2-min2))){
                cout<<(abs(max1-min1))<<"\n";
            }
            else{
                cout<<(abs(max2-min2))<<"\n";
            }
        
        }
    
}
