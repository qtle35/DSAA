#include<bits/stdc++.h>
using namespace std;

int a[100], b[100]={0}, n, k;
vector< vector < string > > v;
vector < string > res;
int kt(){
	for(int i = 1; i < k; i++) if(a[b[i+1]] < a[b[i]]) return 0;
	return 1;
}
void ql(int i){
	for(int j = b[i-1] + 1; j <= n - k + i; j++){
		b[i] = j;
		if(i == k){
			if(kt()){
				string s = "";
				for(int j = 1; j <= k; j++){ 
					s += to_string(a[b[j]]);
					s += " ";
				}
				res.push_back(s);
				v.push_back(res);
				res.clear();
				s = "";
			}
		}else ql(i + 1);
	}
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(k = 2; k <= n; k++)	ql(1);
	sort(v.begin(), v.end());
	for(auto x : v){
		for(int i = 0; i < x.size(); i++) cout << x[i];
		cout << endl;
	}
}