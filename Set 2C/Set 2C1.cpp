/*
Set 2C
student - Astaikin Evgenii
15112024
*/
#include <iostream>
using namespace std;

short k = 65;

int main()
{
    for(int a = 1; a <= 5; a += 1)
    {
        for (int j = 1; j <= 5; j += 1)
    {
        cout << (char)k << " ";
        k += 1;
    }
    cout << endl;
}
return 0;
}