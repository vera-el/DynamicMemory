#include <iostream>
using namespace std;

void Exchange (int& a, int& b);

int main()
{
    setlocale (LC_ALL, "Russian"); 
    
 int a=2 , b =3;
 cout << a << b << endl;
 Exchange (a,b);
  cout << a << b << endl;
    }

    void Exchange (int& a, int& b)
{
    int buffer = a;
    a = b;
    b = buffer;
    cout << a << b << endl;

// 
}