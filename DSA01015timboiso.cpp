#include<bits/stdc++.h>
using namespace std;

int n, ok;
long long Min = 1e18;
void ql(long long x){
	if(x > Min) return;
	if(x % n == 0){
		Min = min(x, Min);
	}
	ql(x * 10);
	ql(x * 10 + 9);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ql(9);
		cout << Min << endl;
		Min = 1e18;
	}
}