#include<bits/stdc++.h>
using namespace std;

#define sz(n)				(int) n.size()
#define endl               	"\n"
#define int                 long long
#define ll                  long long
#define vi                  vector<int>
 
#define forn(x,n) 			for(int i = x; i < n; i++)
#define frev(x,n) 			for(int i = n-1; i >= x; i--)

#define debug(x)            cout<<#x"="<<(x)<<endl
#define pb(x)				push_back(x)
#define all(x)				x.begin(),x.end()
#define YES					cout << "YES" << endl;
#define NO 					cout << "NO" << endl;
const int mod=1e9+7;
const int mxn=1e5+9;
const int eps=1e-9;

bool sortbysec(const pair <int, int> &a, const pair <int, int> &b){
	return (a.first > b.first);
}

int ceil(int x, int y){
	return (x - 1) / y + 1;
}
int sum (int n){
	return (n * (n + 1))/2;
}
struct info{
	int point;
	int index;
	int weight;
};
struct hight{
	ll element;
	ll pSum;
};
bool comp(const info &a, const info &b){
	return a.point < b.point;
}
bool cmp(const info &a, const info &b){
	return a.weight < b.weight;
}




int LCM(int n, int m){
	return ((n * m)/ __gcd(n,m));
}


bool isPrime(int n){
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
bool OK(void){
	return true;
}	
int bigMod(int b, int p, int m){
	if(p == 0) return 1;
	if(p % 2 == 0){
		int x = bigMod(b, p/2, m);
		return (x * x) % m;
	}
	else return ((b%m)*(bigMod(b,p-1,m))) % m;
}
void solve (){
	int n;
	cin >>  n;
	map<int,int> mp;
	for(int i =  0; i < n; i++){
		int x; 
		cin >> x;
		mp[x]++;
	}
	int  set = 0;
	auto el = mp.begin();
	int val = el->first;
	while(!mp.empty()){
		if(mp.find(val+1) != mp.end()){
			mp[val]--;
			mp[val+1]--;
			if(mp[val+1] == 0) mp.erase(val+1);
			if(mp[val] == 0) {
				mp.erase(val);
				el = mp.begin();
				val = el->first;
			}
			val++;
		}
		else{
			mp[val]--;
			if(mp[val] == 0){
				mp.erase(val);
				el = mp.begin();
				val = el->first;
			}
			set++;
		}
	}
	cout << set << endl;
}

	

int32_t main(){
	int t = 1;
	cin >> t; 
	while(t--)
	solve();
}

