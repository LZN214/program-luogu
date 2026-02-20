#include<bits/stdc++.h>
int n,m,a[5000],b[5000],mi,i;
using namespace std;
int main(){
	scanf("%d%d",&n,&m);a[0]=b[0]=0;
	for (i=1;i<=n;i++){scanf("%d",&a[i]);b[i]=b[i-1]+a[i];}
	mi=1000000000;
	for (i=m;i<=n;i++){
		mi=min(mi,b[i]-b[i-m]);
	}
	printf("%d",mi);
	return 0;
} 
