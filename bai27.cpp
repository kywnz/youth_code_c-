#include <iostream>
#include <math.h>
using namespace std;
int prime(long long n){
	if(n > 1){
		for(long long  i = 2; i < sqrt(n); ++i){
			if(n % i == 0) return 0;
		}
		return 1;
	}
	else return 0;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif
	long long n,cnt = 0;
	cin >> n;
	if(prime(n)) cout<<n;
	else{
		for(long long i = 2; i < n; ++i){
			if(prime(i)){

				if ( n % i == 0){
					++cnt;
					if(cnt == 1) cout << i;
					else cout << " * " << i;
				}
			}
		}
	}
}