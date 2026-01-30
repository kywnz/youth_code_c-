//giai pt bac 2
#include <bits/stdc++.h>
#define esp 1e-10
int main(){
	double a,b,c,delta;
	cin>>a>>b>>c;
	if(fabs(a)<=esp{	// if(a) trong if 0 la sai !=0 la dung
		if(fabs(b)<=esp){
			if(fabs(c)<=esp) cout<<"Phuong trinh co vo so nghiem";
			else cout<<"Phuong trinh vo nghiem";
		}
		else cout<<"Phuong trinh co nghiem x="<<-c/b;
	}
	else{
			delta=b*b-4*a*c;
			if(fabs(delta)<=esp) cout<<"Phuong trinh co nghiem kep x= "<<-b/(2*a);
			else if(delta<0) cout<<"Phuong trinh vo nghiem";
			else{
				cout<<"Phuong trinh co 2 nghiem phan biet:\nx1= "<<((-b+sqrt(delta))/(2*a))<<endl;
				cout<<"x2= "<<((-b-sqrt(delta))/(2*a))<<endl;
			}
	 	}
}
