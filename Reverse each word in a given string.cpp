#include <iostream>
#include <stack>
#include <queue>

using namespace std;


int main ()
{
  string s;
  cin >> s;
  int n = s.length ();
  stack < char >str;
  queue < char >q;


  for (int i = 0; i < n; i++)
    {

      if (s[i] != '.')
	str.push (s[i]);

      else
	{
	  while (!str.empty ())
	    {
	      cout << str.top ();
	      str.pop ();

	    }
	  cout << '.';
	}
    }
    //to print the last char
  while (!str.empty ())    
    {
      cout << str.top ();
      str.pop ();

    }

  return 0;
}
