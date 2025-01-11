#include <iostream>
#include <string>
using namespace std;

struct  Student
{
    string fullName;
    int groupNumber;
    string faculty;
};

Student allStudentMGU[]
{
    {"Golovina", 103, "IT security"},
    {"Ryabkov", 103, "IT security"},
    {"Astaikin", 103, "IT security"},
    {"Kurgaev", 101, "hogwarts"},
    {"Emelin", 110, "hogwarts"}
};

void studentSearch()
{
    while(1)
    {
    bool state;
    string textUser;
    cin >> textUser;

    for (Student st : allStudentMGU)
    {
        if (st.fullName.compare(textUser) == 0)
        {
            cout <<  st.fullName << " " <<  st.groupNumber << " " << st.faculty << endl;
        }
        else state = false;
    }
    if (state == false) cout << "Please re-enter data!" << endl;
    }
}

int main()
{
    studentSearch();
    return 0;
}