#include<bits/stdc++.h>
using namespace std;
string s;
char s1[1000];
int i,n,j,x,y,mode;
int main(){
	scanf("%d",&n);//mode 1 plus 2 dec 3 cheng
	for (i=1;i<=n;i++){
		cin>>s;j=0;
		if (s[0]=='a') {mode=1;j=2;}
		if (s[0]=='b') {mode=2;j=2;}
		if (s[0]=='c') {mode=3;j=2;}
		x=0;y=0;if (j==2) {cin>>s;j=0;}
		while (j<=s.length()-1){
			x=x*10+s[j]-48;
			j++;
		}
		j=0;cin>>s;
		while (j<=s.length()-1){
			y=y*10+s[j]-48;
			j++;
		}
		memset(s1,0,sizeof(s1)); 
		if(mode==1)//sprintf
			sprintf(s1,"%d+%d=%d",x,y,x+y);
		else if(mode==2)
			sprintf(s1,"%d-%d=%d",x,y,x-y);
		else if(mode==3)
			sprintf(s1,"%d*%d=%d",x,y,x*y);
		printf("%s\n%d\n",s1,strlen(s1));
	}
	return 0;
}
