#include<bits/stdc++.h>
using namespace std;
int n,i,j,x,y,dx,dy,a[11][11];
int main(){
	scanf("%d",&n);
	for (i=0;i<=10;i++)
	 for (j=0;j<=10;j++)
	  a[i][j]=0;
	for (i=0;i<=n+1;i++){
		a[0][i]=-1;a[i][0]=-1;
		a[n+1][i]=-1;a[i][n+1]=-1;
	}
	dx=0;dy=1;a[1][1]=1;x=1;y=1;
	for (i=2;i<=n*n;i++){
		if (a[x+dx][y+dy]==0){
			x+=dx;y+=dy;
		} else{
			if (dx==0&&dy==1){
				dx=1;dy=0;
			} else if (dx==1&&dy==0){
				dx=0;dy=-1;
			} else if (dx==0&&dy==-1){
				dx=-1;dy=0;
			} else if (dx==-1&&dy==0){
				dx=0;dy=1;
			}
			x+=dx;y+=dy;
		}
		a[x][y]=i;
	}
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++)
		 if (a[i][j]<10) printf("  %d",a[i][j]);
		   else printf(" %d",a[i][j]);
		printf("\n");
	}
	return 0;
} 
