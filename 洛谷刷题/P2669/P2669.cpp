#include<bits/stdc++.h>
using namespace std;
int k,i,j,l,ans=0;
int main(){
	scanf("%d",&k);
	i=j=l=1;
	for (i=1;i<=k;i++){
		ans+=l;
		if (l==j){
			j=1;l++;
		} else j+=1;
	}
	printf("%d",ans);
	return 0;
}
