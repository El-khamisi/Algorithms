#include <iostream>
using namespace std;



int Ternary_Search(int arr[],int l, int r, int key);             //declaration function 


int main()
{
int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };      //sample of array 

    int left=0, right=sizeof(arr)/sizeof(arr[0]),key=5;

int Ans=Ternary_Search(arr,left,right, key);
  
    if (Ans != -1)                  //check if the Searcing find the Element 
      cout<< " The Value "<<key<<" Exists at index "<<Ans;              
    else
        cout<< "The Value doesn't Exists";
        
        
        
    return 0;
}


int Ternary_Search(int arr[],int l, int r, int key)
{
    while (l<=r)
    {
        int mid1=l+(r-l)/3;
        int mid2=r-(r-l)/3;
        if(arr[mid1] == key || arr[mid2]==key)
            return (arr[mid1] == key ? mid1 : mid2);
        if(arr[mid2] < key)
        {
            l=mid2+1;
        }
        else if(arr[mid1] > key)
            r=mid1-1;
        else
        {
            l=mid1+1;
            r=mid2-1;
        }

    }
    return -1;
    
}