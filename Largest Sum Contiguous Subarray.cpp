#include<iostream>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    int temp=0;
    for(int i=0;i<n;i++){
       temp=temp+a[i];
       if(max<temp)
       max=temp;
       
       if(temp<0)
       temp=0;
       
    }
    cout<<max<<endl;
    
}
