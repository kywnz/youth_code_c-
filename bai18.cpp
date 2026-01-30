#include <iostream>
using namespace std;
int main(){
	unsigned long input_hour,tuan,ngay;
	cin >> input_hour;
	tuan = input_hour / (7 * 24 ); input_hour -= tuan * 7 * 24;
	ngay = input_hour / 24; input_hour -= ngay * 24;
	cout<< tuan << " tuan, " << ngay << " ngay, " << input_hour << " gio";
}