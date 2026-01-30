#include <bits/stdc++.h>
int main(){
	double xc,yc,R,xm,ym,d;
	cin>>xc>>yc>>R>>xm>>ym;
	d=sqrt(pow((xm-xc),2)+pow((ym-yc),2));
	if(d<R) cout<<"M nam trong duong tron";
	else if(d==R) cout<<"M nam tren duong tron";
	else cout<<"M nam ngoai duong tron";
}
