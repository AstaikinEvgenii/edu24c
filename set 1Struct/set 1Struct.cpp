#include <iostream>
using namespace std;

struct student
{
    string name;
    int groupNumber;
    int averageGrade;
};

student nstudent[] =
{
{"misha" , 15, 5},
{"ivan" , 15, 5},
{"oleg" , 15, 4},
{"sanek" , 15, 3},
{"yarik" , 15, 3},
};

int result;
int arr[5] = {5, 5 , 4 , 3 , 3}

for (int i = 0; i < 5; i++)
{
    if arr[i] > arr [i + 1]
}


void total_score()
{
    for (int i = 0; i < 5; i++)
    {
        result = result + nstudent[i].averageGrade;

    }

    cout << "result " << result/5 << endl;
}

int main()
{
    total_score();
    return 0;
}