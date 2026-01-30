//sap xep theo tang dan
#include <bits/stdc++.h>
#define ll long long
void swap(ll &a,ll &b){
	int tmp;
	tmp=a;a=b;b=tmp;
}
int main(){
	ll a,b,c;
	cin>>a>>b>>c;
	if(a>b) swap(a,b);
	if(a>c) swap(a,c);
	if(b>c) swap(b,c);
	cout<<a<<" "<<b<<" "<<c;
}
