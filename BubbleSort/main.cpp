#include <iostream>
#include <cstdio>

using namespace std;

void swapInt(int &item1, int &item2) {
    int temp;
    temp = item1;
    item1 = item2;
    item2 = temp;
}

int main()
{
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    int a[100];
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    bool swapped = true;
    do {
        swapped = false;
        for (int i = 1; i < n; i++)
        if(a[i] > a[i+1]){
            swapInt(a[i], a[i+1]);
            swapped == true;
        }

    }
    while (swapped);

    for(int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
