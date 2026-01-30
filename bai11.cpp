/*#include <bits/stdc++.h>
#include <cstdlib> // Can cho srand() và rand()
#include <ctime>   // Can cho time()
int main(){
	// 1. Dùng time(0) de lay mot "seed" duy nhat
    //    Chi goi MOT LAN o dau chuong trình
    srand(time(0));
    //lay so ngau nhien 
    rand();
}*/
#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
//1: keo 
//2: bao
//3: da (BUA)
int main(){
	char human;int computer;
	int nguoiwin=0,maywin=0;
	do{
		srand(time(0));
		computer=rand()%3;
		cout<<"Moi ban chon keo(k)-bao(b)-da(d), nhap ly tu khac de thoat: "<<endl;;
		cin>>human;
		switch(computer){
					case 1:cout<<"Computer: k"<<endl;break;
					case 2:cout<<"Computer: b"<<endl;break;
					case 3:cout<<"Computer: d"<<endl;break;
		}
		switch (human){
			case 'k':{
				switch(computer){
					case 1:cout<<"BAN HOA!"<<endl;break;
					case 2:cout<<"BAN THANG!"<<endl;nguoiwin++;break;
					case 3:cout<<"BAN THUA!"<<endl;maywin++;break;
				}
			}break;
			case 'b':{
					switch(computer){
					case 1:cout<<"BAN THUA!"<<endl;maywin++;break;
					case 2:cout<<"BAN HOA!"<<endl;break;
					case 3:cout<<"BAN THANG!"<<endl;nguoiwin++;break;
				}
			}break;
			case 'd':{
				switch(computer){
					case 1:cout<<"BAN THANG!"<<endl;nguoiwin++;break;
					case 2:cout<<"BAN THUA!"<<endl;maywin++;break;
					case 3:cout<<"BAN HOA!"<<endl;break;
				}
			}break;
		}
		cout<<"Ty so ban "<<nguoiwin<<"-"<<maywin<<" may"<<endl;
	}while(human =='k'||human == 'b' || human == 'd');
}
