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

    for(int i = 1; i <= n-1; i++){

        int index = i;
        for (int j = i+1; j <= n; j++){
            if (a[index] > a[j]){
                index = j;
            }
        }
        swapInt(a[i], a[index]);
    }

    for(int i = 1; i <= n; i++) {
        cout << a[i] << ;
    }
    return 0;
}
