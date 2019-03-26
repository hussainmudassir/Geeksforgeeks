// Question

// Prasun, a wanna be detective, has been assigned a case after his continuous failure at solving any. This is the murder 
// of Snehashis who was killed last night. Prasun has already made some guesses on who could be the murderer and it seems that 
// the two murderers are communicating via some strange arrangement of words. As prasun has been involved at solving cases of 
// such fashion, he is making some guesses on what the message could probably be. Though he is pretty smart (:P), you have to 
// help him by checking whether his guess is actually a possible one from the messages received.
    
// Constraints:

// Length of both message is less than 50 character.

// Line 1: Message Received.
// Line 2: Prasun's Guess.
    
// SAMPLE INPUT                                                       SAMPLE OUTPUT

// jogod #! siara.                                                     YES
// raja is good!

-----------------------------------------------------------------------------------------------------------------------------------

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
