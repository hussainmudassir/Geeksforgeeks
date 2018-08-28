#include <iostream>
#include <queue>

using namespace std;

int main ()
{
  string str;
  cin >> str;
  int n = str.length ();
  queue < char >q;
  int freq[26] = { 0 };
  
  for (int i = 0; i < n; i++)
    {
      q.push (str[i]);
      freq[str[i] - 'a']++;

      while (!q.empty ())
	{

	  if (freq[q.front () - 'a'] > 1)
	    {
	      q.pop ();
	    }
	  else
	    {
	      cout << q.front () << " ";
	      break;
	    }
	}
      if (q.empty ())
	cout << -1 << " ";

    }
  cout << endl;
}
