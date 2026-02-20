#include<bits/stdc++.h>
using namespace std;
int s1,s2,s3,pos,i,j,k,a[1001];
int main(){
	scanf("%d%d%d",&s1,&s2,&s3);
	for (i=0;i<=1000;i++) a[i]=0;
	for (i=1;i<=s1;i++){
		for (j=1;j<=s2;j++){
			for (k=1;k<=s3;k++)
			 a[i+j+k]++;
		}
	}
	pos=0;
	for (i=1;i<=1000;i++)
	 if (a[pos]<a[i]) pos=i;
	printf("%d",pos);
	return 0;
}
