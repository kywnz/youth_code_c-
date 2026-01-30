#include <bits/stdc++.h>
int ngaytrongthang(int month,int year){
	switch(month){
		case 1:case 3:case 5:case 7:case 8:case 10:case 12: return 31;break;
		case 4:case 6:case 9:case 11: return 30;break;
		case 2: return (28+ ( (year%4==0 && year %100!=-0) || year %400==0 ) ) ;break;
	}
}
void ngaymai(int day,int month,int year){
	if(day == ngaytrongthang(month,year)){
		day = 1;
		if(month == 12){
			month = 1;
			year++;
		}else month++;
	}else day++;
	cout<<"Ngay mai: "<<day<<"/"<<month<<"/"<<"/"<<year<<endl;	
}
void ngayhomqua(int day,int month,int year){
	if(day == 1){
		day = ngaytrongthang(month,year);
		if(month == 1){
			month == 12;
			year--;
		}else month--;
	}else day--;
	cout<<"Ngay hom qua: "<<day<<"/"<<month<<"/"<<year<<endl;
}
int main(){
	int day,month,year;
	cout<<"Nhap vao ngay thang nam: ";
	cin>>day>>month>>year;
	ngaymai(day,month,year);
	ngayhomqua(day,month,year);
}
