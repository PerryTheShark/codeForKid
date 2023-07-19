#include <iostream>
#include <cstdio>

using namespace std;

void ChangeNumber1 (int a)
 {
    a = 5;
}

void ChangeNumber2 (int &a) {
    a = 5;
}

int main()
{
    int a = 6;
    ChangeNumber1(a);
    cout <<  "after changeNumber1: " << a;

    int b = 6;
    ChangeNumber2(b);
    cout << "\n" << "after changeNumber2: " << b;

    return 0;
}
