#include<bits/stdc++.h>
using namespace std;
int n,m,i,x,y,z,f[200001];
int find(int i){
	if (f[i]==i) return i;
	 else {
	 	f[i]=find(f[i]);
	 	return f[i];
	 }
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for (i=1;i<=n;i++) f[i]=i;
	for (i=1;i<=m;i++){
		cin>>z>>x>>y;
		if (z==1){
			if (find(x)!=find(y)) f[find(x)]=find(y); 
		} else if (z==2){
			if (find(x)==find(y)) cout<<"Y\n";
			 else cout<<"N\n";
		}
	} 
	return 0;
}
