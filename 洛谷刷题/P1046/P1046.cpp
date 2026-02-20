#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10],n,ans=0;
	for (int i=0;i<=9;i++) scanf("%d",&a[i]);
	scanf("%d",&n);
	for (int i=0;i<=9;i++)
	 if (a[i]<=n+30) ans++;
	printf("%d",ans);
	return 0;
} 
