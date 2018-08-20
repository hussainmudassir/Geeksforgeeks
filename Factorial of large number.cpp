#include<iostream>
 
using namespace std;
 
int main(){
    int a[1000];
    int n,p;
    cin>>n;
    int carry=0;
    int size=1;
    a[0]=1;
    for(int i=1;i<=n;i++){
        int x=i;
        for(int i=0;i<size;i++){
           p=a[i]*x+carry;
           a[i]=p%10;
           carry=p/10;
        }
        while(carry!=0){
            a[size]=carry%10;
            carry=carry/10;
            size++;
        }
    }
    for(int i=size-1;i>=0;i--){
        cout<<a[i];
    }
}
