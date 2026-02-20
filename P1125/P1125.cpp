#include<bits/stdc++.h>
using namespace std;
int i,j,ma,mi,a[300];
string s;
bool f[101];
int main(){
	for (i=1;i<=100;i++) f[i]=true;
	f[1]=false;f[0]=false;
	for (i=2;i<=100;i++)
	 if (f[i]){
	    j=i*2;
	 	while (j<=100){
	 		f[j]=false;j+=i;
		 }
	 }
	cin>>s;
	for (i=0;i<=200;i++)a[i]=0;
	for (i=0;i<=s.length()-1;i++)a[s[i]]++;
	ma=-1;mi=1000000;
	for (i=97;i<=122;i++){
	 ma=max(ma,a[i]);
	 if (a[i]!=0) mi=min(mi,a[i]);
	}
	if (f[ma-mi]){
		printf("Lucky Word\n%d",ma-mi);
	} else{
		printf("No Answer\n0");
	}
	return 0;
} 
