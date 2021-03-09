#include <bits/stdc++.h> 

using namespace std; 

void arrangeOddAndEven(int arr[], int n) 

{ 

   int oddInd = 1; 

    int evenInd = 0; 

    while (true) 

    { 

        while (evenInd < n && arr[evenInd] % 2 == 0) 

            evenInd += 2; 

              

        while (oddInd < n && arr[oddInd] % 2 == 1) 

            oddInd += 2; 

              

        if (evenInd < n && oddInd < n) 

            swap (arr[evenInd], arr[oddInd]); 

              

        else 

            break; 

    } 

} 


void printArray(int arr[], int n) 

{ 

    for (int i = 0; i < n; i++) 

        cout << arr[i] << " "; 

} 

  

// Driver program to test above 

int main() 

{ 

    int arr[] = { 1,2,6,5,9,8 }; 

    int n = sizeof(arr) / sizeof(arr[0]); 

  

    cout << "\nOriginal Array: "; 

    printArray(arr, n); 

  

    arrangeOddAndEven(arr, n); 

  

    cout << "\nModified Array: "; 

    printArray(arr, n); 

  

    return 0; 

} 

