#include<bits/stdc++.h>
using namespace std;
int n,i,op,x;
int main(){
	priority_queue<int,vector<int>,greater<int> > p;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		scanf("%d",&op);
		if (op==1){
			scanf("%d",&x);
			p.push(x);
		}else if (op==2){
			printf("%d\n",p.top()); 
		}else{
			p.pop();
		}
	}
	return 0;
}
