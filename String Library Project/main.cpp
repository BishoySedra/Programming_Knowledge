#include <iostream>
#include "clsString/clsString.h"

using namespace std;

int main()
{
    clsString obj("bishoy sedra                   saber  sajdkfhjsdf");
    cout << obj.countWords();
}