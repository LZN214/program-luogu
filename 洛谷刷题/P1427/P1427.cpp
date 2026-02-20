#include<bits/stdc++.h>
using namespace std;
int i,j,a[101];
int main(){
	i=0;i++;scanf("%d",&a[i]);
	while (a[i]!=0){
		i++;scanf("%d",&a[i]);
	}
	for (j=i-1;j>=1;j--)
	printf("%d ",a[j]);
	return 0;
}
