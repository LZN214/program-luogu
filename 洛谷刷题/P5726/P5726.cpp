#include<bits/stdc++.h>
using namespace std;
int n,i,mi=11,ma=-1,a[1001];
double ans=0;
int main(){
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		scanf("%d",&a[i]);
		ans+=a[i];
		mi=min(mi,a[i]);
		ma=max(ma,a[i]);
	}
	printf("%0.2lf",(ans-mi-ma)/(n-2));
	return 0;
} 
