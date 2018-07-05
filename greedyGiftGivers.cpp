//UVa problem number 00119
//Greedy Gift Givers
//#include "/Users/Felipe/stdc++.h"
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	bool first = true;
	while(cin >> n){
		if(first){
			first = false;
			}
		else{
			cout << '\n';
		}
		map<string, int> personBucket;
		string names[n];	
		for(int i = 0; i < n; i++){
			cin >> names[i];
			personBucket[names[i]] = 0;
		}

		for(int i = 0; i < n; i++){
			string name;
			int money;
			int npeople;
			cin >> name >> money >> npeople;
			if(npeople != 0){
				personBucket[name]-= money;
				personBucket[name] += money%npeople;
			}
			for(int j = 0; j < npeople; j++){
				string gifted;
				cin >> gifted;
				if(npeople != 0){
					money = money - money%npeople;
				}
				personBucket[gifted] += money/npeople;
			}
		}
		for(int i = 0; i < n; i ++){
			cout << names[i] << " " << personBucket[names[i]]<<'\n';
			}
	}
}
