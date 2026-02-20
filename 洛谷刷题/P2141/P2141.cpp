#include<bits/stdc++.h>
using namespace std;
int ans,i,n,j,k,a[101];
bool flag;
int main(){
	scanf("%d",&n);ans=0;
	for (i=1;i<=n;i++) scanf("%d",&a[i]);
	for (i=1;i<=n;i++){
		flag=false;
		for (j=1;j<=n;j++)
		 for (k=j+1;k<=n;k++)
		  if (a[j]+a[k]==a[i]){
		  	flag=true;break;
		  }
		if (flag) ans++;
	}
	printf("%d",ans);
	return 0;
}
