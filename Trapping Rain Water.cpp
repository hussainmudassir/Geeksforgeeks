#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main()
 {
     long long int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int left=0;
        int right=n-1;
        int lm=0;
        int rm=0;
        int sum=0;
        while(left<=right){
            if(a[left]<a[right]){
                if(a[left]>lm)
                lm=a[left];
                else
                sum+=lm-a[left];
                left++;
            }
            else{
                if(a[right]>rm)
                rm=a[right];
                else
                sum+=rm-a[right];
                right--;
            }
        }
        cout<<sum<<endl;
        
    }
 }
