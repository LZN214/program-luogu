#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,v,t,hour,minute;
	scanf("%d%d",&s,&v);
	if (s%v==0) t=s/v+10;
	else t=s/v+11;
	if (t%60!=0) hour=7-t/60;
	 else hour=8-t/60;
	if (t%60!=0)minute=60-t%60;
	 else minute=0;
	if (hour<0) hour=hour+24;
    if (hour<=9) printf("%d%d",0,hour);
     else printf("%d",hour);
    printf(":");
    if (minute<=9) printf("%d%d",0,minute);
     else printf("%d",minute);
	return 0;
} 
