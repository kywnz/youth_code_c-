#include <bits/stdc++.h>
int main(){
	int sum,i=1;
	cin>>sum;
	int ngaycacthang[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	do{
		if(sum>ngaycacthang[i]){
			sum-=ngaycacthang[i];
			i++;
		}
	}while(sum>ngaycacthang[i]);
	cout<<sum<<" "<<i;
}
