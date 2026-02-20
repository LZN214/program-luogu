#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[3];
	scanf("%d%d%d",&a[0],&a[1],&a[2]); 
	for (int i=0;i<=2;i++)
	 for (int j=i+1;j<=2;j++)
	  if (a[i]>a[j]) swap(a[i],a[j]);
	printf("%d %d %d",a[0],a[1],a[2]);
	return 0;
} 
