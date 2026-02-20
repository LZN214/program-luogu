#include<bits/stdc++.h>
using namespace std;
int n,i,j,a[10001];
int main(){
	scanf("%d",&n);
	a[1]=n;i=1;
	while (n!=1){
		i++;
		if (n%2==0) n/=2;
		 else n=n*3+1;
		a[i]=n;
	}
	for (j=i;j>=1;j--)
	printf("%d ",a[j]);
	return 0;
}
