//nhap vao dien tich S tinh the tich V
#include <bits/stdc++.h>
int main(){
	double S,V,R;
	cout<<"Nhap vao dien tich S: "; cin>>S;
	R=sqrt(S/(4*3.14)); V=(4.0/3) * 3.14 *R*R*R;
	cout<<"The tich: "<<V;
}
