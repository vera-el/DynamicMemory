#include "recursion.h"
#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian");  
    
    

    cout << "TIC TAC TOE: " << endl; 

    
    char table[3][3] = 

                       {{' ',' ',' '},
                        {' ',' ',' '},
                        {' ',' ',' '}}; /* */
    // Test:
    /* 
                        {{'o','x','x'},
                         {'x','x','o'},
                         {'o','o','o'}}; 
   */

    print_table(table);
    int row,col;

    while(true)
    {
        cout << "Enter a row and a column: ";
        cin >> row >> col;

        if(table[row][col] == ' ')
        {
            table[row-1][col-1] = 'x';
            print_table(table);
            if(validate_table(table))
            {
                break;
            }
            else
            {
                play_table(table);
                continue;
            }
        }
        else
        {
            print_table(table);
            cout << " position is not empty, please chose other! " << endl;
            continue;
        }
    }
    
}

