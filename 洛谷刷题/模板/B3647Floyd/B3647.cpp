#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,k,u,v,w,a[101][101];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++)
		 if (i==j) a[i][j]=0; 
		  else a[i][j]=1000000000; 
	}
	for (i=1;i<=m;i++){
		cin>>u>>v>>w;
		a[u][v]=min(a[u][v],w);a[v][u]=min(a[u][v],w);
	} 
	for (k=1;k<=n;k++)
	 for (i=1;i<=n;i++)
	  for (j=1;j<=n;j++)
	   	a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++)
		cout<<a[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
} //对于Floyd的枚举，一定要先枚举中介点，不然会引发错误 
