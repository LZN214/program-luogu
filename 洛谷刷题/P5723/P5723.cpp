#include<bits/stdc++.h>
using namespace std;
bool a[100001];
int i,j,k,l;
int main(){
	for (i=1;i<=100000;i++) a[i]=true;
	for (i=2;i<=100000;i++)
	 if (a[i]){
	 	j=i*2;
	 	while (j<=100000){
	 		a[j]=false;
	 		j+=i;
		 }
	 }
	scanf("%d",&l);k=0;
	for (i=2;i<=100000;i++){
		if (i>l) break;
		if (a[i]){
			k+=1;l-=i;
			printf("%d\n",i);
		}
	}
	printf("%d",k);
	return 0;
}
