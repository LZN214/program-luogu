#include<bits/stdc++.h>
using namespace std;
int a[1001][6],n,i,ans,j;
int main(){
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		scanf("%d%d%d",&a[i][1],&a[i][2],&a[i][3]);
		a[i][4]=a[i][1]+a[i][2]+a[i][3];
	}
	ans=0;
	for (i=1;i<=n;i++){
		for (j=i+1;j<=n;j++)
		 if (abs(a[i][1]-a[j][1])<=5&&abs(a[i][2]-a[j][2])<=5&&abs(a[i][3]-a[j][3])<=5&&abs(a[i][4]-a[j][4])<=10)
		  ans++;
	}
	printf("%d",ans);
	return 0;
}
