#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[100];
    cin >> n;
    for(int i=1; i<= n; i++) {
        cin >> a[i];
    }

    for (int i=1; i<= n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
