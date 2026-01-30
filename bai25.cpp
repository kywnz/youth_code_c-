#include <iostream>
using namespace std;
int main(){
	unsigned long a,b,tmp,a0,b0;
	cin >> a >> b; a0 = a; b0 = b;
	// gcd(a,b) = gcd (b, a%b) and gcd ( a, 0) = a
	do{
		tmp = b;
		b = a % b;
		a = tmp;
	}while(b > 0);
	cout << "gcd(a,b)= " << a << endl;
	cout << "lcm(a,b)= "<< (a0 * b0 ) / (a); 
}