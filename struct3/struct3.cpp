#include <iostream>
using namespace std;

struct worker
{
    string name;
    int age;
    string email;
    string phone_number;
    string education;
};

worker Litvin = {"Mixa" , 22 , "mixalitvinov@gmail.com" , "86054632144" , "МОУ СОШ"};

void printworker(worker*p)
{
    cout << p-> name << p ->phone_number << p-> age << p -> education << p-> email << endl;
}
int main()
{
    printworker(&Litvin);
    return 0;
}