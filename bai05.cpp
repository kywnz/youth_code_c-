#include <bits/stdc++.h>
#define esp 1e-10
double S_tg(double xa,double ya,double xb,double yb,double xc,double yc){
	return 1.0/2*fabs(xa*(yb-yc) - ya*(xb-xc) + (xb*yc-xc*yb));
}
int main(){
	double xa,ya,xb,yb,xc,yc,xm,ym,S_ABC,S_ABM,S_ACM,S_BCM;
	cin>>xa>>ya>>xb>>yb>>xc>>yc>>xm>>ym;
	S_ABC=S_tg(xa,ya,xb,yb,xc,yc);
	S_ABM=S_tg(xa,ya,xb,yb,xm,ym);
	S_ACM=S_tg(xa,ya,xc,yc,xm,ym);
	S_BCM=S_tg(xm,ym,xb,yb,xc,yc);
	double allSm=(S_ABM+S_ACM+S_BCM);
	if(fabs(S_ABC-allSm)<=esp) cout<<"M nam tren tam giac ABC";
	else if(S_ABC>=allSm+esp) cout<<"M nam ngoai tam giac ABC";
	else cout<<"M nam trong tam giac ABC";
}
