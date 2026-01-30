#include <iostream>
#include <math.h>
using namespace std;
int main(){
	unsigned long n,i = 1,tmp,sum = 0;
	cin >> n; tmp = n;
	do{
		if( n / (unsigned long)pow(10,i) < 1) break;
		++i;
	}while (n / (unsigned long)pow(10,i) >= 1);
	cout << "So co " << i << " chu so " << endl;
	cout << "Chu so cuoi cung " << n % 10 <<endl;
	cout << "Chu so dau tien " << n / (unsigned long)pow(10,i-1) << endl;
	do{
		sum += tmp % 10;
		tmp /= 10;
	}while(tmp > 0);
	cout << "Tong cac chu so " << sum << endl;
	do{
		tmp = tmp * 10 + n % 10;
	}while (n /= 10);
	cout << "So dao nguoc " << tmp << endl;
}