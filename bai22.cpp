#include <iostream>
#include <math.h>
using namespace std;
int main(){
    long long n,sum = 0,count = 0;
    cin >> n;
    cout <<"Cac uoc so: ";
    for (int i = 1; i <= n; ++i){
        if (n % i == 0){
            cout << i << " ";
            sum += i;
            count ++;
        }   
    }
    cout << endl <<"Co " << count <<" uoc so, tong la: "<<sum;
}