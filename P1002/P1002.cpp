#include<bits/stdc++.h>
using namespace std;
long long a[100][100];
int l[9][2]={{0,0},{2,1},{1,2},{2,-1},{1,-2},{-1,2},{-2,1},{-1,-2},{-2,-1}};
int n,m,x,y;
int main(){
	scanf("%d%d%d%d",&n,&m,&x,&y);
	for (int i=0;i<=8;i++){
	if ((0<=x+l[i][0])&&(x+l[i][0]<=n)&&(0<=y+l[i][1])&&(y+l[i][1]<=m)) {
		a[x+l[i][0]][y+l[i][1]]=-1;
	}}
	a[0][0]=1;
	for (int i=1;i<=m;i++){
		if (a[0][i]!=-1){a[0][i]=a[0][i-1];
		}else{a[0][i]=0;
		}
	}
	for (int i=1;i<=n;i++){
		if (a[i][0]!=-1){
		a[i][0]=a[i-1][0];}else{a[i][0]=0;
		}
		for (int j=1;j<=m;j++){
			if (a[i][j]!=-1){
				a[i][j]=a[i-1][j]+a[i][j-1];
			}else {a[i][j]=0;
			}
		}
	}
	printf("%lld",a[n][m]);
	return 0;
} 
