#include <iostream>
using namespace std;

struct event
{
    string name;
    int data;
    short school;

};
event NewYear12 = {"NewYearOld" , 202123, 21}
event NewYear[] =
{
    {"NewYear" , 201224, 28},
    {"NewYear2025" , 271225 , 28} ,
    {"NewYear2024" , 251224 , 12} ,
    {"NewYear3026" , 231226 , 17} ,
    
};

void struct_print(event *e)
{
    for (int i = 0; i < 4; i++)
    {
        cout << e[i].name << e[i].data << e[i].school << endl;
    }
};

int main()
{
    struct_print(NewYear);
    return 0;
}