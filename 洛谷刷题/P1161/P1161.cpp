#include<bits/stdc++.h>
using namespace std;
bool f[2000001];
int n,i,j,t;
double a;
int main(){
	scanf("%d",&n);
	for (i=1;i<=2000000;i++) f[i]=false;
	for (i=1;i<=n;i++){
		scanf("%lf%d",&a,&t);
		for (j=1;j<=t;j++){
			f[int(a*j)]=!f[int(a*j)];
		}
	}
	for (i=1;i<=2000000;i++)
	if (f[i]){
		printf("%d",i);
		return 0;
	}
	return 0;
} 
