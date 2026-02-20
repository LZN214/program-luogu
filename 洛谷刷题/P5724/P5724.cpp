#include<bits/stdc++.h>
using namespace std;
int i,n,a[1001],mi=100000,ma=-1;
int main(){
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		mi=min(mi,a[i]);
		ma=max(ma,a[i]);
	}
	printf("%d",ma-mi);
	return 0;
} 
