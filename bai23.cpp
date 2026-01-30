#include <iostream>
using namespace std;
int main(){
	long long n,sum = 0,j = 1;
	cin >> n;
	cout << " So hoan hao nho hon " << n<<": ";
	while(j < n){
		for (int i = 1; i < j; ++i){
			if( j % i == 0) sum += i;
		}
		if(j == sum) cout << j << " ";
		sum = 0;
		++j;
	}	
}