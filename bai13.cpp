#include <bits/stdc++.h>
int ngaytrongthang(int month,int year){
	switch(month){
		case 1:case 3:case 5:case 7:case 8:case 10:case 12: return 31;break;
		case 4:case 6:case 9:case 11: return 30;break;
		case 2: return (28+ ( (year%4==0 && year %100!=-0) || year %400==0 ) ) ;break;
	}
}
int main(){
	int day,month,year;
	cout<<"Nhap vao ngay thang nam: ";
	cin>>day>>month>>year;
	if(day<=ngaytrongthang(month,year)) cout<<"Hop le!"<<endl;
	int a=(14-month)/12;
	int y=year - a;
	int m=month +12*a -2 ;
	int dayofweek =(day+y+y/4 -y/100 +y/400 + (31*m)/12) % 7;
	switch(dayofweek){
		case 0: cout<<"Chua nhat!";
		case 1: cout<<"Thu Hai";break;
		case 2: cout <<"Thu Ba";break;
		case 3: cout<<"Thu Tu";break;
		case 4: cout<<"Thu Nam";break;
		case 5:	cout<<"Thu Sau";break;
		case 6: cout<<"Thu Bay";break;
	}
}
