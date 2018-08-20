#include<iostream>
 
using namespace std;
 
int main(){
    int n,a=0,b=0;
    cin>>n;
    int set[n];
    for(int i=0;i<n;i++){
        cin>>set[i];
    }
    int sum;
    cin>>sum;
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(set[i]+set[j]==sum){
            a=set[i];
            b=set[j];
            flag=1;
            break;
            }
        }
    }
    if(flag==1)
    cout<<"FOUND"<<" "<<a<<" "<<b<<endl;
    else
    cout<<"not found"<<endl;
    
} 
