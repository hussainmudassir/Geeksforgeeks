#include <iostream>
using namespace std;
#include <string.h>
#include<bits/stdc++.h> 

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int flag=0;
    //char str[n];
     //char* p;
    
   
    for(int i=0;i<n;i++){
    
        string str=" ";
       
        str = std::to_string(arr[i]);
        
        int len = str.length();
        
        for(int j=0;j<len/2;j++){
            if(str[j]!=str[len-1-j])
                flag=1;
                break;
        }
    }
    
        if(flag==1){
            cout<<"NOT PALINDROME";
        }
        else
            cout<<"PALINDROME";
        
}

//     *p = (char)*(arr+8);
        // int array[4] = {1, 2, 3, 4};
        // char* c = reinterpret_cast<char*>(array);
        // cout<<c<<" ";
        
        // str[i]=arr[i];
        // s=str[i];
        // str[i] = arr[i] + '0';
        // cout<<str[i]<<" ";
        // N=arr[i];
         // cout<<str;
        // int len = str.length();