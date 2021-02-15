#include "recursion.h"


void print_table(char table[3][3])
{
            cout << "     1 | 2 | 3 " << endl;
            cout << "---------------"  << endl;
            cout << " 1 | " << table[0][0] << " | " <<table[0][1] <<  " | " <<table[0][2] << endl;
            cout << "---------------"  << endl;
            cout << " 2 | " << table[1][0] << " | " <<table[1][1] <<  " | " <<table[1][2] << endl;
            cout << "---------------" << endl;
            cout << " 3 | " << table[2][0] << " | " <<table[2][1] <<  " | " <<table[2][2] << endl;
}


bool validate_table(char table[3][3])
{
    return false;
}
void play_table(char table[3][3])
{

}