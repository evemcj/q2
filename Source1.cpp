#include <iostream>
#include <windows.h>
using namespace std;
void q2()
{
    string pin;
    cout << "Enter pin \n";
    cin >> pin;
    if (pin == "0000") system("color 2A");
    else system("color 4C");
}



int main() {

    q2();
    return 0;
}
