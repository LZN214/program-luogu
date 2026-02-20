#include<bits/stdc++.h>
using namespace std;
int n,i,j,k,l,ans[10],f[10],a[1001][10];
int main(){
	scanf("%d",&n);
	for (i=0;i<=7;i++) ans[i]=0;
	for (i=1;i<=7;i++) scanf("%d",&f[i]);
	for (i=1;i<=n;i++){
		k=0;
		for (j=1;j<=7;j++){
			scanf("%d",&a[i][j]);
			for (l=1;l<=7;l++)
			 if (a[i][j]==f[l]) k++;
		}
		ans[k]++;
	}
	for (i=7;i>=1;i--)
	printf("%d ",ans[i]);
	return 0;
}
