//nhap vao x la so do cua 1 goc tinh bang phut
#include <bits/stdc++.h>
#define pi 3.14159
#define esp 1e-10
int main(){
	double x,rad;
	cin>>x;
	rad=(x/60)*(pi/180.0);
	//chuan hoa goc ve doan [0;2pi]
	rad = fmod(rad, 2*pi);
	if(rad < 0) rad += 2*pi;
	cout<<"cos(x)= "<<cos(rad)<<endl;
	if(rad<=pi/2-esp && rad>=esp) cout<<"Thuoc goc phan tu thu 1";// tu 0 toi pi/2
	else if(rad>pi/2+esp && rad<=pi-esp) cout<<"Thuoc goc phan tu thu 2";//tu pi/2 toi pi
	else if(rad>pi+esp && rad<=(3.0/2)*pi-esp) cout<<"Thuoc goc phan tu thu 3";//tu pi toi 3/4 pi
	else cout<<"Thuoc goc phan tu thu 4";
}
