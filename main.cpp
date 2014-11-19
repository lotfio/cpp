#include <iostream>
#include "src/headers/io.h"

using namespace std;
using namespace IO;

int main()
{
    Input inp;
    inp.command();
    cout << "\n";
    inp.subCommand();
    cout << "\n";
    int a[2] = {10, 12};
    cout << inp.params(a);
    return 0;
}