#include <iostream>

using namespace std;

string validateAge(int age)
{
    if (age >= 18 && age <= 45)
    {
        return "Valid Age";
    }

    return "Invalid Age";
}

int readAge()
{
    int age;
    cout << "Enter Your Age: ";
    cin >> age;
    return age;
}

void readUntilAgeBetween()
{
    do
    {
        string status = validateAge(readAge());

        if (status == "Invalid Age")
        {
            cout << "Please Enter a valid age!\n";
            continue;
        }

        cout << status;
        return;

    } while (true);
}

int main()
{
    // readUntilAgeBetween();
    // cout << validateAge(19);
    system("pause>0");
    return 0;
}