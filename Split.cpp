#include <iostream>
using namespace std;

void FillRand (int arr[], const int n);
void Print (int arr[], const int n);
void even_numbers (int arr[], const int n);
void odd_numbers (int arr[], const int n);

# define DYNAMIC_MEMORY_1
# define DYNAMIC_MEMORY_2

int main()
{
    setlocale (LC_ALL, "Russian"); 
    const int n = 10;
    int arr[n];

    FillRand (arr,n);
    Print (arr,n);
    even_numbers (arr,n);
    odd_numbers (arr,n);

}

void FillRand (int arr[], const int n)
{
    for (int i=0;i < n;i++)
    {
        // operator razimenovania vozvrasiaet po adresu
        *(arr + i) = rand()%100;
    }
}

void Print (int arr[], const int n)
{
    for (int i=0;i < n;i++)
    {
        
        cout << arr[i]<< endl;
    }
    cout << endl;
}

void even_numbers (int arr[],const int n)
{
    for (int i=0;i < n;i++)
    {
        if (arr[i] %2 == 0) 
        cout << arr[i]<< " ";
    }
    cout << endl;
}

void odd_numbers (int arr[],const int n)
{
    for (int i=0;i < n;i++)
    {
        if (arr[i] % 2 ==1) 
        cout << arr[i]<< " ";
    }
    cout << endl;
}