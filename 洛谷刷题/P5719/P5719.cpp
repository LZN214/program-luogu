#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i1=0,i2=0;
	double ans1=0,ans2=0;
	scanf("%d%d",&n,&k);
	for (int i=1;i<=n;i++)
	 if (i%k==0) {ans1+=i;i1++;}
	  else {ans2+=i;i2++;}
	printf("%0.1lf %0.1lf",ans1/i1,ans2/i2);
	return 0;
}
