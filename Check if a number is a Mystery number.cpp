#include <bits/stdc++.h> 
using namespace std; 
  
// Finds reverse of given num x. 
int reverseNum(int x)  
{ 
    string s = to_string(x); 
    reverse(s.begin(), s.end()); //reversing the number
    stringstream ss(s);  
    int rev = 0;  
    ss >> rev; 
    return rev;  
} 
  
bool isMysteryNumber(int n) 
{ 
    for (int i=1; i <= n/2; i++)  
    { 
        // if found print the  pair, return  
        int j = reverseNum(i); 
        if (i + j == n)  
        { 
            cout << i << " " << j;  
            return true; 
        } 
    } 
  
    cout << "Not a Mystery Number"; 
    return false; 
} 
  
int main() 
{ 
    int n = 121; 
    isMysteryNumber(n); 
    return 0; 
} 

sample input -121
output 29 92
