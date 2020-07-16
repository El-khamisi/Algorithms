#include <iostream>



//Big O() for Marge Sort is O(n * log n)
using namespace std;

void marge_sort(int a[], int left, int right);
void marge(int a[], int  left, int right, int mid);

int main()
{



   cout<<"Enter The Length of Array: ";
    int n; cin>>n;

  int arr[n];
  cout<<"Enter The Array Elements: ";

    for (int i = 0; i < n; ++i)
        cin>>arr[i];

    marge_sort(arr, 0, n-1);
    for (int j = 0; j < n; ++j) {
        cout<<arr[j]<<" ";
    }




    return 0;
}




void marge_sort(int a[], int left ,int right)
{
    if (left < right)
    {
        int mid = (left + right ) / 2;

        marge_sort(a, left,mid );
        marge_sort(a,mid+1,right);

        marge(a, left, right, mid);


    }
}




void marge(int a[], int  left, int right, int mid)
{
   int i=left,j=mid+1, k=0, temp[right-left + 1];
  while (i<= mid && j <= right)
  {
      if (a[i] < a[j])
          temp[k++]= a[i++];
      else
          temp[k++]= a[j++];
  }
  while (i<=mid) temp[k++]= a[i++];
  while (j<=right) temp[k++]= a[j++];

    for (int l = left; l <=right ; ++l)
        a[l]=temp[l-left];

}