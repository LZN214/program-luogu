#include<bits/stdc++.h>
using namespace std;
bool f[21][21][21];
int w,x,h,i,j,k,ans,q,l,x1,x2,y10,y2,z1,z2;
int main(){
	scanf("%d%d%d",&w,&x,&h);
	for (i=1;i<=w;i++){
		for (j=1;j<=x;j++){
			for (k=1;k<=h;k++)
			 f[i][j][k]=true;
		}
	}
	scanf("%d",&q);
	for (l=1;l<=q;l++){
		scanf("%d%d%d%d%d%d",&x1,&y10,&z1,&x2,&y2,&z2);
		for (i=x1;i<=x2;i++){
			for (j=y10;j<=y2;j++){
				for (k=z1;k<=z2;k++)
				 f[i][j][k]=false;
			}
		}
	}
	ans=0;
	for (i=1;i<=w;i++){
		for (j=1;j<=x;j++){
			for (k=1;k<=h;k++)
			 if (f[i][j][k]) ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
