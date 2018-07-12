//#include "/Users/Felipe/stdc++.h"
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,q;
	cin >> n >> k >> q;
	vector<int> temps(200002,0); 
	for(int i =0; i < n; i++){
		int a, b;
		cin >> a >> b;
		temps[a]++;
		temps[b+1]--;
	}
	int sumador = 0;
	for(int i = 1; i < 200002; i++){
		sumador += temps[i];
		temps[i] = sumador;
	}
	for(int i = 1; i < 200002; i++){
		if ( temps[i] < k) temps[i] = 0;
		else temps[i] = 1;
	}
	for(int i = 1; i < 200002; i++){
		temps[i] = temps[i-1]+temps[i];
	}
	for(int i = 0; i < q; i++){
		int a, b;
		cin >> a >> b;
		cout << temps[b] - temps[a-1] << '\n';
	}
}
