//The snail, UVa problem number 573
#include "/Users/Felipe/stdc++.h"
//#include <bits/stdc++.h>

using namespace std;

int main(){
	int H, U, D, F;
	while(cin >> H){
		if (H == 0) break;
		cin >> U >> D >> F;
		float act = 0;
		int days = 0;
		float rate = F/100;
		float climb = U;
		bool success = true;
		while(true){
			days++;
			act += climb;
			if(act > H) break;
			act -= (float) D;
			climb *= rate;
			if(act < 0){
				success = false;
				break;
			}
		}
		if(success){
			cout << "success on day " << days << '\n';
		}
		else{
			cout << "failure on day " << days << '\n';
		}
	}
}
