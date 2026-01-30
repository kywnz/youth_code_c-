#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	long long a,b,a0,b0,tmp;
	cin >> a >> b;
	a0 = a; b0 = b;
	// gcd(a,b) = gcd(b,a%b)
	while(b != 0){
		tmp = llabs(b);
		b = llabs(a % b);
		a = llabs(tmp);
	}
	if ( a0 < 0 && b0 < 0){
		a0 = -a0;
		b0 = -b0;
	}
	if ( b0 / a == 1 || b0 / a == -1) cout << (b0 / a ) * (a0 / a);
	else cout << a0 / a << " / "<< b0 / a;
}