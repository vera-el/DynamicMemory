#include <iostream>
using namespace std;

void FillRand (int arr[],  int n);
void Print (int arr[],  int n);
void push_back (int *&arr, int &n, const int value);
void pop_back (int *&arr, int &n);
void push_front (int *&arr, int &n, int value);
void insert (int *&arr, int &n,  int index, int value);
void pop_front (int *&arr, int &n);



int main()
{
    setlocale (LC_ALL, "Russian"); 
    int n = 5;
    int *arr = new int[n];


    FillRand (arr,n);
    Print (arr,n);
    push_back (arr,n,10);
    Print (arr,n);
    push_front (arr,n, 23);
    Print (arr,n);
    insert (arr, n, 3,  29);
    Print (arr,n);
    pop_front (arr,n);
    Print (arr,n);
}

void FillRand (int arr[], const int n)
{
    for (int i=0;i < n;i++)
    {
        *(arr + i) = rand()%10;
    }
}

void Print (int arr[], const int n)
{
    for (int i=0;i < n;i++)
    {
        
        cout << arr[i]<< "\t" << arr + i << endl;
        
    }
    cout << endl;
}

 void push_back (int *&arr, int &n, const int value)
{

    int *newArray = new int [n+1];
for (int i=0;i < n;i++)
    {
        
        newArray[i] = arr[i];   
    }
    newArray[n] = value;
    n++;
    delete [] arr;
    arr = newArray;
}

void pop_back (int *&arr, int &n)

{
n--;
int *newArray = new int[n];

for (int i=0;i < n;i++)
{
newArray[i] = arr[i];
}
delete[] arr;
arr = newArray;

}


void push_front (int *&arr, int &n, int value)
{
    
    int *newArray = new int[n+1];

    newArray[0] = value;

    for (int i=0;i < n;i++)
    {
        newArray[i+1] = arr[i];
    }
    delete[] arr;
    arr = newArray;

}

void insert (int *&arr, int &n,  int index, int value)
{
    if(index<0 || index>n)
    {
        cout << "please enter an index between: 0 and " << n << endl;
        return; 
    }

    int *newArray = new int[n+1];

    newArray[index] = value;

    for (int i=0;i < index; i++)
    {
        newArray[i] = arr[i];
    }

    for (int i=index+1;i < n+1; i++)
    {
        newArray[i] = arr[i];
    }

    delete[] arr;
    arr = newArray;
}

