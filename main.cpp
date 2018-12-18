#include <iostream>

using namespace std;


int main() {
    cout << "hi\n";
#ifndef NDEBUG
    cout << "debug\n";
#else
    cout << "release\n";
#endif
    return 0;
}