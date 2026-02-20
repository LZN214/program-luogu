#include<bits/stdc++.h>
using namespace std;
int m,n,i,j,a[10];
int main(){
	scanf("%d%d",&m,&n);
	for (i=0;i<=9;i++) a[i]=0;
	for (i=m;i<=n;i++){
		j=i;
		while (j!=0){
			a[j%10]++;
			j/=10;
		}
	}
	for (i=0;i<=9;i++) printf("%d ",a[i]);
	return 0;
}
