#include <iostream>
#include <cstdio>

using namespace std;

void Tower(int n , string Rod_1, string temporary_rod, string Rod_2 ){
	if(n==1){
		cout<<Rod_1<<" -> "<<Rod_2<<endl;
		return;
	}
	// Bring n-1 dish from cot_1 to cot_2 with cot_3 is temporary
	Tower(n-1,Rod_1,Rod_2,temporary_rod);
    // Bring the biggest dish from cot_1 to cot_3;
	Tower(1,Rod_1,temporary_rod,Rod_2);
	// bring n-1 dish from cot_1 to cot_3 with cot_1 is temporary
	Tower(n-1,temporary_rod,Rod_1,Rod_2);
	}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	string a="Cot_1" , b="Cot_2", c="Cot_3";
	int n;
	cin>>n;
	Tower(n,a,b,c);
}
