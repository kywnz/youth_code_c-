#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int iy,a,m,y,month,dow,d,top;
	cin>>iy;
	for (month = 1; month <= 12; ++month){
		cout<<"Thang "<<month<<endl;
		switch(month){
      		case 2: top = 28 + (( iy % 4 == 0 && iy % 100 != 0 ) || iy % 400 == 0);break;
      		case 4:case 6: case 9:case 11: top = 30;break;
      		default: top = 31;break;
    	}
		a = ( 14 - month ) / 12;
		y = iy - a;
		m = month + 12 * a -2;
		dow = ( 1 + y + y / 4 - y / 100 + y / 400 + ( 31 * m ) / 12 ) % 7;
		cout<<"  S  M  T  W  T  F  S"<<endl;
		for ( d = 0; d < dow; d++){
			cout<<"   ";
		}
		for( d = 1; d <= top; d++){
			cout<<setw(3)<<d;
			if((dow + d) % 7 == 0) putchar('\n');
		} putchar('\n');
	}
}