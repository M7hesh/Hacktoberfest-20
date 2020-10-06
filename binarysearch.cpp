#include <bits/stdc++.h> 
using namespace std; 
  
int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        // Check if x is present at mid 
        if (arr[m] == x) 
            return m; 
  
        // If x greater, ignore left half 
        if (arr[m] < x) 
            l = m + 1; 
  
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
  
    return -1; 
} 
  
int main(void) 
{ 
    int arr[100],x,n;
    cout<<"Enter no. of elements";
    cin>>n;
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter no. to be found";
    cin>>x;
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
    return 0; 
} 
