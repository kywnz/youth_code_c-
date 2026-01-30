#include <bits/stdc++.h>
#define pi 3.141592654
using namespace std;

int main(){
    double a, b, c, p, S;
    cin >> a >> b >> c;
    if(a+b>c && b+c>a && a+c>b){
        double cosA = (b*b + c*c - a*a) / (2*b*c);
        if(cosA > 1e-9)
            cout << "Tam giac nhon\n";
        else if(fabs(cosA) < 1e-9)
            cout << "Tam giac vuong\n";
        else
            cout << "Tam giac tu\n";
        p = (a+b+c)/2.0;
        S = sqrt(p * (p-a) * (p-b) * (p-c));
        cout << "Dien tich: " << S;
    }
    else {
        cout << "Khong phai tam giac";
    }
    return 0;
}

