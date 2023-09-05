#include <iostream>
#include <string>

using namespace std;

class info
{
private:
    string _first_name;
    string _second_name;
    int _age;

public:
    info()
    {
        cout << "I'm Class Constructor " << this << "\n";
    }

    // parameterized constructor
    info(string firstName, string secondName, int age)
    {
        cout << "I'm Class Constructor " << this << "\n";
        _second_name = secondName;
        _first_name = firstName;
        _age = age;
    }

    // copy constructor
    // info(info &old_obj)
    // {
    //     cout << "I'm Copy Constructor\n";
    //     this->_first_name = old_obj._first_name;
    //     this->_second_name = old_obj._second_name;
    //     this->_age = old_obj._age;
    // }

    void print()
    {
        cout << _first_name << " " << _second_name << " " << _age << " years old! " << this << "\n";
    }

    ~info()
    {
        cout << "I'm Destructor! " << this << "\n";
    }
};

void function1()
{
    info person("Bishoy", "Sedra", 20);
    person.print();
}

void function2(info obj)
{
    cout << "obj --> " << &obj << "\n";
    cout << "########################\n";

    info person3("Bishoy", "Sedra", 20);
    cout << "person3 --> " << &person3 << "\n";
    person3.print();
    cout << "########################\n";

    info person2 = obj;
    cout << "person2 --> " << &person2 << "\n";
    cout << "########################\n";

    info *person4 = new info;
    cout << "person4 --> " << person4 << "\n";
    delete person4;
}

int main()
{
    function1();
    cout << "########################\n";
    info temp;
    cout << "temp --> " << &temp << "\n";
    cout << "########################\n";
    function2(temp);
    // cout << "########################\n";
    return 0;
}