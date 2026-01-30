#include <iostream>
#include <math.h>
using namespace std;
struct thoidiem{
	float h,m,s;
};
int main(){
	struct thoidiem td[3];
	cin >> td[1].h >> td[1].m >> td[1].s;
	cin >> td[2].h >> td[2].m >> td[2].s;
	float time1 = td[1].h * 60 * 60 + td[1].m * 60 + td[1].s;
	float time2 = td[2].h * 60 * 60 + td[2].m * 60 + td[2].s;
	float time = abs(time2 - time1);
	float h,m,s,temp;
	h = time / 3600;
	temp = h - floor(h);
	m = temp * 60;
	temp = m -floor(m);
	s = temp * 60;
	cout << "Hieu hai gio " << (int)h << " gio " << (int)m << " phut " << (int)s << " giay";
}