#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},y,m;
	scanf("%d%d",&y,&m);
	if (m!=2) printf("%d",a[m]);
	 else if ((y%100==0)&&(y%400==0)||(y%100!=0)&&(y%4==0)) printf("29");
	  else printf("28");
	return 0;
} 
