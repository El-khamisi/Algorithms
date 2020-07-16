#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>


//Big O() for Bubble Sort is O(n^2)

using namespace std;

void bubble_sort(int *a, int n);

int main()
{

    cout<<"Enter The Length of Array: ";
    int n; cin>>n;

  int arr[n];
  cout<<"Enter The Array Elements: ";
  
    for (int i = 0; i < n; ++i)
        cin>>arr[i];

    bubble_sort(arr, n);
    for (int j = 0; j < n; ++j) {
        cout<<arr[j]<<" ";
    }




    return 0;
}




void bubble_sort(int *a, int n)
{
    for (int i = 1; i <= n; ++i)
        for (int j = 0; j < n-i; ++j)
            if (a[j] > a[j+1]) swap(a[j], a[j+1]);

}