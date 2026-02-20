#include<bits/stdc++.h>
using namespace std;
int main(){
	int ans=0,x,n;//一定要初始化 
	int a[8]={0,1,1,1,1,1,0,0};
	scanf("%d%d",&x,&n);
	for (int i=x;i<=x+n-1;i++)
	 ans+=250*a[i%7];
	printf("%d",ans);
	return 0;
} 
