#include <iostream>
#include <math.h>
#include <algorithm>




using namespace std;

void counting_sort(int a[],int n, int minn, int maxx);

int main()
{

    cout<<"Enter The Length of Array: ";
    int n; cin>>n;

  int arr[n+1],maxx=0,minn=999999;
  cout<<"Enter The Array Elements: ";

    for (int i = 1; i <= n; ++i)
    {
         cin >> arr[i];
        minn=min(minn,arr[i]);maxx=max(maxx,arr[i]);
    }


    counting_sort(arr,n, minn, maxx);
    for (int j = 1; j <= n; ++j) 
        cout<<arr[j]<<" ";
    




    return 0;
}


void counting_sort(int a[],int n, int minn, int maxx)
{
  int sum[maxx+1],temp[n+1];
    for (int m = 0; m < maxx+1; ++m) //Set sum[] to Zero
        sum[m]=0;
    for (int l = 1; l <= n ;++l)
        temp[l]=a[l];


    for (int i = 1; i<= n ; ++i)
        sum[a[i]]++;

    for (int j = minn; j <= maxx; ++j)
        sum[j]+=sum[j-1];


    for (int k = 1; k <= n; ++k)
        a[sum[temp[k]]]=temp[k],sum[temp[k]]--;



}