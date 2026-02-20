#include<bits/stdc++.h>
using namespace std;
int ans=0,i,save=0,a[13];
int main(){
	for (i=1;i<=12;i++){
		scanf("%d",&a[i]);
		ans+=300-a[i];
		if (ans<0) {
			printf("-%d",i);
			return 0;
		}
		save+=ans/100*100;
		ans=ans%100;
	}
	printf("%d",int(save*1.2+ans));
	return 0;
} 
