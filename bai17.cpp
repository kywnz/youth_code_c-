#include <iostream>
#include <iomanip>
using namespace std;
int ngaytrongthang(int m,int y){
	switch(m){
		case 4:case 6:case 9:case 11: return 30;break;
		case 2: return ( 28 + ( ( y % 4 == 0 && y % 100 != 0) || ( y % 400 == 0) ) );break; 
		case 0: return 0;break;
		default: return 31;break;
	}
}
void phancong(int n){
	switch (n){
		case 1:cout<<"[A]";break;
		case 2:cout<<"[B]";break;
		case 3:cout<<"[C]";break;
		case 4:cout<<"[D]";break;
		case 5:cout<<"[E]";break;
	}
}
int main(){
	int nam,thang,thudautiencuanam,thudautiencuathang,
	tongngaytrongcacthangtruoc = 0,tongChuNhatdaqua = 0,chukiphancong5nguoi = 0;
	cin >> nam;
	cin >> thudautiencuanam;
	cin >> thang;
	cout <<"     SUN     MON     TUE     WED     THU     FRI     SAT" << endl;
	for (int i = 0; i < thang ; ++i ){ 
		tongChuNhatdaqua += (ngaytrongthang(i,nam) +(thudautiencuanam + 6) % 7 ) / 7;
		thudautiencuanam = (thudautiencuanam + ngaytrongthang(i,nam)) % 7 ;
		tongngaytrongcacthangtruoc += ngaytrongthang(i,nam);
	} 
	tongngaytrongcacthangtruoc -= tongChuNhatdaqua; 
	chukiphancong5nguoi = tongngaytrongcacthangtruoc % 5 + 1 ;
	thudautiencuathang = thudautiencuanam;
	for ( int i = 0; i < thudautiencuathang; ++i) cout<<"        ";
	for (int i= 1; i <= ngaytrongthang(thang,nam); ++i){
		int a = (14 - thang) / 12;
		int y = nam - a;
		int m = thang + 12 * a	- 2;
		int dow = ( i + y + y / 4 -  y / 100 + y / 400 + ( 31 * m) / 12 ) % 7;
		cout << setw(5) << i;
		if(dow == 0) cout<<"[ ]";
		else{
			phancong(chukiphancong5nguoi);
			if ( (thudautiencuathang+ i) % 7 == 0 ) putchar('\n');
			if(chukiphancong5nguoi == 5 ) chukiphancong5nguoi = 1;
			else chukiphancong5nguoi++;
		}
	}


}