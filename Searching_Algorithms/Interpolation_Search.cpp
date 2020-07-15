#include <iostream>


using namespace std;
int Interpolation_Search(int arr[],int n,int key);



int main() {

  int X[]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49}; // Array Of uniformly distributed Values
  
  
    cout<<"What Are You Looking For: ";
    int value;cin>>value;



  int Ans= Interpolation_Search(X,sizeof(X)/sizeof(X[0]),value);
  
    if (Ans != -1)
      cout<< " The Value is Exists "<<Ans;
    else
        cout<< "The Value is not Exists";
    



    return 0;
}



int Interpolation_Search(int arr[],int n,int key)
{
    int low = 0, high = n - 1;

    while (low <= high && arr[low] <= key && key <= arr[high])
    {
        int pos = low + ((key - arr[low]) * (high - low) / (arr[high] - arr[low]));//Formula to move pos iterator

        if (low == high )
        {
            if (key == arr[low] ) return arr[low];
            return -1;
        }
        if (key == arr[pos])
            return arr[pos];
        else if ( key < arr[pos])
            high=pos-1;
        else
            low=pos +1;

    }
    return -1;
}


