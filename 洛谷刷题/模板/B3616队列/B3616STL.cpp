#include<bits/stdc++.h>
using namespace std;
queue<int> q; 
int n,i,j,x;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>j;
		if (j==1){
			cin>>x;
			q.push(x);
		} else if (j==2){
			if (q.empty()) cout<<"ERR_CANNOT_POP\n";
			 else q.pop();
		} else if (j==3){
			if (q.empty()) cout<<"ERR_CANNOT_QUERY\n";
			 else cout<<q.front()<<"\n";
		} else {
			cout<<q.size()<<"\n";
		}
	}
	return 0;
} 
