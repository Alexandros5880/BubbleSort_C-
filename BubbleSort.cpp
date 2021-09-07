#include "bits-stdc++.h"
#include <string> 
using namespace std;
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int len) 
{ 
    int i, j; 
    for (i = 0; i < len-1; i++)     
      
    // Last i elements are already in place 
    for (j = 0; j < len-i-1; j++) 
        if (arr[j] > arr[j+1]) 
            swap(&arr[j], &arr[j+1]); 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int arr_length  = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, arr_length); 
    cout << "Sorted array: \n"; 
    printArray(arr, arr_length); 
    return 0; 
} 