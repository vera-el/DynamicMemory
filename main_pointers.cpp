#include <iostream>
using namespace std;
# define POINTERs_BASICS
# define POINTERS_AND_ARRAYS

int main()
{
    setlocale (LC_ALL, "Russian");  
 #ifdef POINTER_BASICS   
 int a = 2;
 int* pa = &a;

  cout << a << endl; 
  cout << &a << endl;
  cout << pa << endl;
  cout << *pa << endl;
return 0;
// pa - bukva p v nachale imeni pokazuvaet ukazatel na a. Pointer to a

int* pb; // Obiavliaem ukazatel pb
int b = 3; 
pb = &b;
// 1. zapisat adres peremennou b v pb
// 2. vuvesti  ukazatel pb;
// razimenovat ukazatel pb i vuvesti na ekran 
  cout << b << endl; 
  cout << &b << endl;
  cout << pb << endl;
  cout << *pb << endl;
// int* - ukazatel na int
#endif // POINTERS_BASICS

const int n =5;
int arr[5] = { 3,5,8,13,21};
cout << *arr << endl;
for (int i=0; i<n;i++)
{
    cout << *(arr+i)<< endl;
}
cout << endl;
int* p_arr = arr;
for (int i=0; i<n; i++)
{
    cout << *p_arr++<<endl;
}
cout << endl;
}   