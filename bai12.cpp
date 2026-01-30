#include <bits/stdc++.h>
float det(float a1,float b1
		  ,float a2,float b2){
	return a1*b2-a2*b1;
}
int main(){
	float a1,a2,b1,b2,c1,c2,x,y;
	cout<<"Nhap vao a1 b1 c1: ";
	cin>>a1>>b1>>c1;
	cout<<"Nhap vao a2 b2 c2: ";
	cin>>a2>>b2>>c2;
	x=det(c1,b1,c2,b2)/det(a1,b1,a2,b2);
	y=det(a1,c1,a2,c2)/det(a1,b1,a2,b2);
	cout<<fixed<<setprecision(2)<<x<<fixed<<setprecision(2)<<y;
	
}
