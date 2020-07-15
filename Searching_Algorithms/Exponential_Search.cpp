#include <iostream>


using namespace std;


int Binary_Search(int x[],int left,int right,int value);
int Exponential_Search(int arr[],int n,int key);



int main() {

    int X[]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49};

    cout<<"Enter What Are You Looking For: ";
        int key;cin>>key;
        int Ans=Exponential_Search(X,sizeof(X)/sizeof(X[0]),key);

        if(Ans != -1)
            cout<<"The Value does Exists  "<<Ans;
        else
            cout<<"The Value does not Exists  "<<Ans;
        cout<<'\n';




    return 0;
}


int Exponential_Search(int arr[],int n,int key) //Expand The Range Of Searching By Exponentially
{
    if (arr[0] == key) return key;  //Check For The First Element Of Index 0

    int i=1;
    while (i < n && arr[i] <= key)
        i*=2;

    //Start Binary Search From i/2 Because we could not find a greater value in previous iteration
    return Binary_Search(arr, i/2, min(i,n-1), key);
}




int Binary_Search(int x[],int left,int right,int value)
{
    while (left<=right)
    {
        int mid=(left+right)/2;
        if (value == x[mid])
            return value;
        if (value > x[mid])
            left=mid+1;
        else
            right=mid-1;
    }
    return -1;
}

