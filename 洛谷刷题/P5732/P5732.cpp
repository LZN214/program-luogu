#include<bits/stdc++.h>
using namespace std;
int n,i,j,a[30][30];
int main(){
	scanf("%d",&n);
	a[1][1]=1;
	for (i=2;i<=n;i++){
		a[i][1]=1;a[i][i]=1;
		for (j=2;j<=i-1;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for (i=1;i<=n;i++){
		for (j=1;j<=i;j++)
		 printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
