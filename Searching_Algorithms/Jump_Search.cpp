#include <iostream>
#include <math.h>
#include <algorithm>


using namespace std;
#define length 16

int arr[length]={3, 5, 5, 7, 4, 13, 0, 2, 4, 84, 6, 310, 3, 16, 57, 65};


void Jump_Search(int key);


int main()
{

    cout<<"Entre The Value"<<'\n';
    sort(arr,arr+length);   //Sort a Container Before Searching
    
    int key;cin>>key;
    Jump_Search(key);


    return 0;

}





void Jump_Search(int key)
{
    int left=0;
    int right=sqrt(length);
    int result=-1;

    while (arr[right] <= key && right < length) //Divides The Search Workplace Into Sections
    {
        left=right;
        right+=sqrt(length);
        if(right> length- 1)
            right=length;
    }



    for (int i = left; i <right; ++i) //Search In A Section Where Possibly Element Has Exists
        if (key == arr[i])
        {
            result = key;
            break;
        }



    if (result == key)
        cout << "Find " << result;
    else
        cout<<"Can't Find The Element";

    cout<<endl;

}