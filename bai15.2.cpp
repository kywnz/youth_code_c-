#include <bits/stdc++.h>
int main(){
	//		01/01/1900 la ngay thu hai 
	// vay co bao nhieu ngay chu nhat roi vao dau thang trong the ky XX tu 1/1/1901 den 31/12/2000
	int d=1,m=1,y=1900,c=0;	//thu hai
	while(y<2001){
		switch(m){
			case 4:case 6:case 9:case 11: d+=30;break;
			case 2: d+=28+ ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);break;
			default: d+=31;break;
		}
		if(d % 7 == 0 && y >1900) c++;
		m=( m + 1) % 12;
		if (m == 1) y++;
	}
	cout<<c;
}
