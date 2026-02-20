#include<bits/stdc++.h>
using namespace std;
int n,i,j,x[10001],y[10001],a[40][40];
int main(){
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	 for (j=1;j<=n;j++)
	  a[i][j]=0;
	a[1][n/2+1]=1;x[1]=1;y[1]=n/2+1;
	for (i=2;i<=n*n;i++){
		if (x[i-1]==1&&y[i-1]!=n){
			x[i]=n;y[i]=y[i-1]+1;a[x[i]][y[i]]=i;
		} else
		if (y[i-1]==n&&x[i-1]!=1){
			y[i]=1;x[i]=x[i-1]-1;a[x[i]][y[i]]=i;
		} else
		if (x[i-1]==1&&y[i-1]==n){
			x[i]=2;y[i]=n;a[x[i]][y[i]]=i;
		} else
		if (a[x[i-1]-1][y[i-1]+1]==0){
			x[i]=x[i-1]-1;y[i]=y[i-1]+1;a[x[i]][y[i]]=i;
		}else{
			x[i]=x[i-1]+1;y[i]=y[i-1];a[x[i]][y[i]]=i;
		}
	}
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++)
		 printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
} 
