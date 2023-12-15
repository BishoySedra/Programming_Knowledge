#include <iostream>
#include <string>

using namespace std;

class item
{
private:
public:
    static int _counter;
    item()
    {
        _counter++;
    }

    void print_counter()
    {
        cout << _counter << "\n";
    }
};

int item::_counter = 0;

int main()
{
    cout << item::_counter << "\n";
    item t1;
    // t1.print_counter();
    cout << item::_counter << "\n";
    item t2;
    // t2.print_counter();
    cout << item::_counter << "\n";
    item t3;
    t3.print_counter();

    t1._counter = 500;
    t1.print_counter();
    t2.print_counter();
    t3.print_counter();

    return 0;
}