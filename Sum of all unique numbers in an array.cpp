#include <iostream>

using namespace std;

int main ()
{   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if((a[i]!=a[i+1] && a[i]==a[i-1]) || (a[i]==a[i+1] && a[i]!=a[i-1]) || (a[i]==a[i+1] && a[i]==a[i-1])){
        continue;
        }
        else
        sum+=a[i];
    }  
 `  cout<< sum;
}
