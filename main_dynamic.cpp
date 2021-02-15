#include <iostream>
using namespace std;

void FillRand (int arr[], const int n);
void Print (int arr[], const int n);


int main()
{
    setlocale (LC_ALL, "Russian"); 
    int n;
    cout << "Enter s size of array"; cin >> n;
    int* arr = new int[n];
    FillRand (arr,n);
    Print (arr,n);

    int brr[5];
    FillRand (arr, n);
    Print (arr, n);
    

    void FillRand (int arr[], const int n);
    for (int i=0;i < n;i++)
    {
        // operator razimenovania vozvrasiaet po adresu
        *(arr + i) = rand()%100;
    }

    void Print (int arr[], const int n);
    for (int i=0;i < n;i++)
    {
        //[]operator razimenovania vozvrashaet po indeksu
        cout << arr[i]<< endl;
    }
    cout << endl;
}    