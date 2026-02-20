#include<bits/stdc++.h>
using namespace std;
int a[1310][1310];//要设置成为全局变量不然会栈溢出 
int i,j,n;
int ans[1310];
int main(){
	for (i=0;i<=1300;i++){
		for (j=0;j<=1300;j++)
		 a[i][j]=0;
		ans[i]=0;
	} 
/*	for (i=0;i<=1300;i++){
		c[i]+=a[i]+b[i];
		c[i+1]+=c[i]/10;
		c[i]=c[i]%10;
	}
	for (i=0;i<=1300;i++){
		c[i]*=j;
		c[i+1]+=c[i]/10;
		c[i]=c[i]%10;
	}*/
	scanf("%d",&n);
	a[1][1]=1;
	for (j=2;j<=n;j++)
	{
		for (i=1;i<=1300;i++){
		a[j][i]+=a[j-1][i]*j;
		a[j][i+1]+=a[j][i]/10;
		a[j][i]=a[j][i]%10;
	}
	}
	for (i=1;i<=1300;i++){
		ans[i]+=a[1][i];
		for (j=2;j<=n;j++){
			ans[i]+=a[j][i];
			ans[i+1]+=ans[i]/10;
			ans[i]=ans[i]%10;
		}
	}
	bool flag=false;
	for (i=1300;i>=1;i--){
		if (ans[i]!=0) flag=true;
		if (flag) printf("%d",ans[i]);
	}
	return 0;
}
