#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,i,j,k,ans=0;
	scanf("%d%d",&n,&x);
	for (i=1;i<=n;i++){
		j=i;
		while (j!=0){
			k=j%10;
			if (k==x) ans++;
			j/=10;
		}
	}
	printf("%d",ans);
	return 0;
} 
