#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1000],i,mi=100000;
	scanf("%d",&n);
	for (i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
		mi=min(a[i],mi);
	}
	printf("%d\n",mi);
	return 0;
}
