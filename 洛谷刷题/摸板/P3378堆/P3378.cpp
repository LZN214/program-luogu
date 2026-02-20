#include<bits/stdc++.h>
using namespace std;
int n,i,l,r,x,op;
long long a[3000001]; 
int main(){
	scanf("%d",&n);l=0;
	for (i=0;i<=3000000;i++) a[i]=-1; 
	for (i=1;i<=n;i++){
		scanf("%d",&op);
		if (op==1){
			scanf("%d",&x);
			l++;a[l]=x;r=l;
			while (r!=1){
				if (a[r]<a[r/2]) swap(a[r],a[r/2]);
				 else break; 
				r/=2;
			}
		} else if (op==2){
			printf("%d\n",a[1]);
		}else{
			swap(a[1],a[l]);l--;/*
			while (!(a[r*2]==-1&&a[r*2+1]==-1)){
				if (a[r*2]==-1) {a[r]=a[r*2+1];break;}else
				if (a[r*2+1]==-1){a[r]=a[r*2];break;}else
				if (a[r*2]>a[r*2+1]){
				    a[r]=a[r*2+1];r=r*2+1; 
				}else{
					a[r]=a[r*2];r=r*2; 直接采用首尾互换的原则保证
					其为一个完全二叉树 用上l的性质 
				}*/
			r=1;
			while (r*2<=l){
				if (r*2==l){
					if (a[r]>=a[r*2]) swap(a[r],a[r*2]);
					break;
				}else if (a[r]<=a[r*2]&&a[r]<=a[r*2+1]) break;
				else if (a[r*2]<a[r*2+1]){
					swap(a[r],a[r*2]);r*=2;
				}else {
					swap(a[r],a[r*2+1]);r=r*2+1;
				}
			}
			}
	}
	return 0;
}
