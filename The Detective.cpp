#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    
    string str1,str2;
    getline(cin, str1);
    getline(cin ,str2);
    
    map <char,int> str1_occ;
    map <char,int> str2_occ;
    
    for(int i=0;i<str1.length();i++){
        if (!((str1[i] >= 'a' && str1[i]<='z') || (str1[i] >= 'A' && str1[i]<='Z')) || str1[i] == ' '){
            continue;
        
        }else{
            str1_occ[toupper(str1[i])]++;
        }
    }
    for(int i=0;i<str2.length();i++){
        if (!((str2[i] >= 'a' && str2[i]<='z') || (str2[i] >= 'A' && str2[i]<='Z'))|| str2[i] == ' '){
            continue;
        }
        else{
        str2_occ[toupper(str2[i])]++;
        }
    }
    int flag=0;
      for(auto i = str1_occ.cbegin(), i_end = str1_occ.cend(),
        j = str2_occ.cbegin(), j_end = str2_occ.cend();
        i != i_end; ++i, ++j){
            if(i->second == j->second){
              flag=1;
              
            }
            else{
                flag=0;
                break;
            }
        
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
}
