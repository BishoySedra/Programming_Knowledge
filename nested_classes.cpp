// ProgrammingAdivces.com
// Mohammed Abu-Hadhoud
#include <iostream>
using namespace std;

class clsPerson
{
    class clsAddress
    {
    private:
        string _AddressLine1;
        string _AddressLine2;
        string _City;
        string _Country;

    public:
        clsAddress(string AddressLine1, string AddressLine2, string City, string Country)
        {
            this->_AddressLine1 = AddressLine1;
            this->_AddressLine2 = AddressLine2;
            this->_City = City;
            this->_Country = Country;
        }

        void print()
        {
            cout << "\nAddress:\n";
            cout << _AddressLine1 << endl;
            cout << _AddressLine2 << endl;
            cout << _City << endl;
            cout << _Country << endl;
        }
    };

private:
    string _FullName;
    clsAddress _Address;

public:
    clsPerson(string fullname, string AddressLine1, string AddressLine2, string City, string Country)
        : _Address(AddressLine1, AddressLine2, City, Country)
    {
        _FullName = fullname;
    }

    void print()
    {
        cout << "Full Name: " << _FullName;
        _Address.print();
    }
};

int main()

{

    clsPerson Person1("Abu Had-houd", "Building 10", "Queen Rania Street", "Amman", "Jordan");
    Person1.print();

    system("pause>0");
    return 0;
}