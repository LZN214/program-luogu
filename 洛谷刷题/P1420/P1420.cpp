#include<bits/stdc++.h>
using namespace std;
int a[100001],i,l,n,ma=-1;
int main(){
	scanf("%d",&n);scanf("%d",&a[1]);l=1;ma=1;
	for (i=2;i<=n;i++){
		scanf("%d",&a[i]);
		if (a[i]==a[i-1]+1) {
			l++;if (l>ma) ma=l;
		} else l=1;
	}
	printf("%d",ma);
	return 0;
}
