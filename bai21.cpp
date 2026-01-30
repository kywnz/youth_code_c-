#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float diemchuan,mon1,mon2,mon3,doituong,diemthi;
	char khuvuc;
	cin >> diemchuan >> mon1 >> mon2 >> mon3 >> khuvuc >> doituong;
	diemthi = mon1 + mon2 + mon3;
	if ( khuvuc == 'A') diemthi += 2;
	else if ( khuvuc == 'B') diemthi += 1;
	else diemthi += 0.5;
	if ( doituong == 1) diemthi += 2.5;
	else if (doituong == 2 ) diemthi += 1.5;
	else diemthi += 1;
	if (diemthi >= diemchuan) cout<< "DAU!!!";
	else cout << "ROT!!!" << "["<<fixed << setprecision(2) <<diemthi << "]";
}