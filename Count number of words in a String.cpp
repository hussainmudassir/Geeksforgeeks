#include <iostream>

using namespace std;

int main ()
{
  char str[100];
  gets(str);
  int flag=0;
  int count=1;
  for(int i=0;str[i]!='\0';i++){
     if(str[i]=='\t' || str[i]=='\n' || str[i]==' ')
        flag=1;
     else if(flag==1){
        flag=0;
        count++;
        }
    }
 cout<<count;
}
