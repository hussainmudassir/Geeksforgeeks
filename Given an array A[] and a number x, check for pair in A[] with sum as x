#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
  int n,num,num1, sum, flag = 0;
  cin >> n >> sum;
  int a[n];
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
  sort (a, a + n);

  int right = n - 1;
  int left = 0;
  while (left < right)
    {

      if (a[left] + a[right] == sum)
	{
	  flag = 1;
	  num=a[left];
	  num1=a[right];
	  break;
	}
      else
	{
	  if (a[left] + a[right] > sum)
	    right--;
	  else
	    left++;
	}


    }
  if (flag == 1)
    cout << "YES"<<endl<<"Elements are:"<<num<<" "<<num1;
  else
    cout << "NO";


  return 0;
}
