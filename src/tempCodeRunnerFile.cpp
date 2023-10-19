#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <array>
#include <complex>
using namespace std;
int main(int argc, char const *argv[])
{
    int *pi;
    int ival = 1024;
    pi = &ival;
    cout << pi << endl;
    cout << *pi << endl;
    return 0;
}
