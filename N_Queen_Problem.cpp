#include <iostream>
#define n 4  //Board Of n x n




using namespace std;
int row[n],dig[2*n],digg[2*n],arr[n][n];


bool backtracking(int col);
void Print_Solution();



int main()
{


    if (backtracking(0))
        Print_Solution();
    else
        cout<<"The Solution Doesn't Exist\n";
    



    return 0;
}



bool backtracking(int col)
{
    if(col == n)
        return true;
    
        for (int i = 0; i < n; ++i) {
            if (row[i] || dig[col+i] || digg[i - col + n - 1]);

            else {
                row[i] = dig[col + i] = digg[i - col + n - 1] = 1;
                arr[i][col] = 1;
                if(backtracking(col + 1))return true;
                arr[i][col] = 0;
                row[i] = dig[col + i] = digg[i - col + n - 1] = 0;
            }
        }
    return false;
}


void Print_Solution()
{
    for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout<<arr[i][j]<<"  ";
            }
            cout<<endl;
        }
        cout<<"\n\n";
}