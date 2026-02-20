#include<bits/stdc++.h>
using namespace std;
bool f[100001];
int n,i,j,l,m,x,y,ans;
int main(){
	scanf("%d%d",&l,&m);
	for (i=0;i<=l;i++) f[i]=true;
	for (i=1;i<=m;i++){
		scanf("%d%d",&x,&y);
		for (j=x;j<=y;j++)
		f[j]=false;
	}
	ans=0;
	for (i=0;i<=l;i++)
	 if (f[i]) ans++;
	printf("%d",ans); 
	return 0;
} 
