#include <bits/stdc++.h>
int main(){
	int sin,checkdigit;
	cin>>sin;//987654321
	while(sin!=0){
		int s1=0,s2=0;
		checkdigit=sin%10;
		sin/=10;	
		for(int i=2;i<=9;i++){
			int tmp=0;
			if(i%2 ==0){				
				tmp=sin%10;
				if(tmp*2>=10) s2+=(tmp*2)%10+(tmp*2)/10;
				else s2+=tmp*2;
			}
			else{
				tmp=sin%10;
				s1+=tmp;
			}
			sin/=10;
		}
		if((s1+s2+checkdigit)%10==0) cout<<"SIN HOP LE\n";
		else cout<<"SIN KHONG HOP LE\n";
		cin>>sin;
	}
}
