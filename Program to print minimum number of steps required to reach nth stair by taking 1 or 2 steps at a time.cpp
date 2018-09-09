
// Program to print minimum number of steps required to reach nth stair by taking 1 or 2 steps at a time.
#define MAX_POINT 2
#define ARR_SIZE 100 
#include<stdio.h> 

int count=0; 
int m=0;

void printArray(int arr[], int arr_size); 

  
/* The function prints all combinations of numbers 1 and 2 that sum up to n. 
i is used in recursion keep track of index in arr[] where next 
element is to be added. Initital value of i must be passed as 0 */

void printCompositions(int n, int i) 
{ 
    
    /* array must be static as we want to keep track of values stored in arr[] using current calls of printCompositions() in function call stack*/

    static int arr[ARR_SIZE]; 

    if (n == 0) 

    { 
        if(i%2==0)
        printArray(arr, i); 

    } 

    else if(n > 0) 

    { 

        int k;  

        for (k = 1; k <= MAX_POINT; k++) 

        { 

        arr[i]= k; 

        printCompositions(n-k, i+1); 

        } 

    } 
} 

  

/* Utility function to print array arr[] */

void printArray(int arr[], int arr_size) 
{ 

    int i,sum=0; 

    for (i = 0; i < arr_size; i++) {
        
        sum+=arr[i];
        //printf("%d ", arr[i]); 

       //printf("\n"); 
    } 
    if(count<sum)
    m=arr_size;

}  


int main() 
{ 

    int n = 10; 
    printf("Minimum numbers of steps to reach %d by 1 and 2 steps each time are\n", n); 

    printCompositions(n, 0); 
    printf("%d",m);
    getchar(); 

    return 0; 
} 
