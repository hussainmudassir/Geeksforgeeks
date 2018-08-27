//bottom up approach

#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int min (int a, int b)
{
  if (a < b)
    return a;
  else
    return b;
}

int main ()
{
  string str;
  cin >> str;
  int n = str.length ();
  int table[n][n], l, h, gap; 
  memset (table, 0, sizeof (table)); //making all the entries as zero
  for (gap = 1; gap < n; gap++)
    {
      for (l = 0, h = gap; h < n; l++, h++)
	{
	  if (str[l] == str[h])   
	    table[l][h] = table[l + 1][h - 1];
	  else
	    table[l][h] = (min (table[l + 1][h], table[l][h - 1]) + 1); //
	}
    }
  cout << table[0][n - 1];
}
