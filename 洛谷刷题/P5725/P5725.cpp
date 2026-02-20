#include<bits/stdc++.h>
using namespace std;
int n,i,j,k=0;
int main(){
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			k++;if (k<10) printf("0");
			printf("%d",k);
		}
		printf("\n");
	}
	k=0;printf("\n");
	for (i=1;i<=n;i++){
		for (j=1;j<=n-i;j++)
		printf("  ");
		for (j=1;j<=i;j++){
			k++;if (k<10) printf("0");
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}
