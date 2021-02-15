#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian"); 
    int a = 2;
    int& ra = a; // reference to a;
                // & pokazuvaet, chto obiavliaemaia peremennaia eto ssulka
                // adres ssulki uznat ne vozmozhno, kompiliator skruvaet ego 
                // ssulki ispolzuytsia dlia peredachi parametrov funkcii. 
    ra +=3;
    cout << &a<< endl;  
    cout << &ra << endl;


}    