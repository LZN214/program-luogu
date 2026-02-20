#include<bits/stdc++.h>
using namespace std;
int n,i,j,a[101],ans;
int main(){
	scanf("%d",&n);
	for (i=1;i<=n;i++) scanf("%d",&a[i]);
	for (i=1;i<=n;i++){
		ans=0;
		for (j=1;j<=i-1;j++)
		 if (a[i]>a[j]) ans++;
		printf("%d ",ans);
	}
	return 0;
}
