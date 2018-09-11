#include <bits/stdc++.h>
using namespace std;
 
// Function to find special numbers
void divisibilityCheck(int arr[], int n)
{
    // Storing all array elements in a hash
    // and finding maximum element in array
    unordered_set<int> s;
    int max_ele = INT_MIN;
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
 
        // finding maximum element of array
        max_ele = max(max_ele, arr[i]);
    }
 
    // traversing array element and storing the array 
    // multiples that are present in s in res.
    unordered_set<int> res;
    for (int i = 0; i < n; i++) {
 
        // Check for non-zero values only
        if (arr[i] != 0)
 
            // checking the factor of current element
            for (int j = arr[i] * 2; j <= max_ele;
                                        j += arr[i])
             {
 
                // if factor is already part of array
                // element then store it
                if (s.find(j) != s.end())
                    res.insert(j);
            }
    }
 
    // displaying elements that are divisible by
    // at least one other in array
    for (auto x : res)
        cout << x << " ";
}
 
// Driver code
int main()
{
    int arr[] = { 2, 3, 8, 6, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    divisibilityCheck(arr, n);
    return 0;
}
