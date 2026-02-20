#include<bits/stdc++.h>
using namespace std;
int n,m,k,i,j,x,y,ans;
bool a[200][200];
int dx1[12]={2,1,1,1,0,0,0,0,-1,-1,-1,-2},dy1[12]={0,1,0,-1,2,1,-1,-2,1,0,-1,0};
int dx2[24]={2,2,2,2,2,1,1,1,1,1,0,0,0,0,-1,-1,-1,-1,-1,-2,-2,-2,-2,-2};
int dy2[24]={2,1,0,-1,-2,2,1,0,-1,-2,2,1,-1,-2,2,1,0,-1,-2,2,1,0,-1,-2};
int main(){
	scanf("%d%d%d",&n,&m,&k);
	for (i=1;i<=n;i++)
	 for (j=1;j<=n;j++)
	  a[i][j]=false;
	for (i=1;i<=m;i++){
		scanf("%d%d",&x,&y);
		a[x][y]=true;
		for (j=0;j<=11;j++)
		 if (x+dx1[j]>0&&x+dx1[j]<=n&&y+dy1[j]>0&&y+dy1[j]<=n){
		 	a[x+dx1[j]][y+dy1[j]]=true;
		 }
	}
	for (i=1;i<=k;i++){
		scanf("%d%d",&x,&y);
		a[x][y]=true;
		for (j=0;j<=23;j++)
		 if (x+dx2[j]>0&&x+dx2[j]<=n&&y+dy2[j]>0&&y+dy2[j]<=n){
		 	a[x+dx2[j]][y+dy2[j]]=true;
		 }
	}
	ans=0;
	for (i=1;i<=n;i++)
	 for (j=1;j<=n;j++)
	  if (a[i][j]==false) ans++;
	printf("%d\n",ans); 
	return 0;
}
