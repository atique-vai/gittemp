#include<bits/stdc++.h>
using namespace std;
int bigMod(int b, int p, int m){
	if(p == 0) return 1;
	if(p % 2 == 0){
		int x = bigMod(b, p/2, m);
		return (x * x) % m;
	}
	else return (b%m * bigMod(b,p-1,m)) % m;   
}
int main(){
	int b,p,m;
	while(cin >> b >> p >> m){
		cout << bigMod(b,p,m) << endl;
	}
	return 0;
} 
