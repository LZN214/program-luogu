#include<bits/stdc++.h>
using namespace std;
int t,o,n,m,i,j,u,v,w,l,r,a[2001][2001][2],d[2001],f[10000000],ex[2001];
bool flag;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>t;
	for (o=1;o<=t;o++){
		cin>>n>>m;
		memset(a,0,sizeof(a));
		memset(d,60,sizeof(d));//采用的是二进制次数 很大 max用127 
		memset(ex,0,sizeof(ex));
		for (i=1;i<=m;i++){
			cin>>u>>v>>w;
			if (w>=0) {
				a[u][0][0]++;a[u][a[u][0][0]][0]=v;a[u][a[u][0][0]][1]=w;
				a[v][0][0]++;a[v][a[v][0][0]][0]=u;a[v][a[v][0][0]][1]=w;
			}else{
				a[u][0][0]++;a[u][a[u][0][0]][0]=v;a[u][a[u][0][0]][1]=w;
			}
			} 	//for (i=1;i<=n;i++) cout<<d[i]<<" ";
		//cout<<"\n";
		/*for (i=1;i<=n;i++){
			for (j=1;j<=a[i][0][0];j++)
			cout<<a[i][j][0]<<" "<<a[i][j][1]<<"$";
			cout<<"\n";
		}*/
		l=1;r=1;d[1]=0;f[1]=1;ex[1]=1;
		while (l<=r){
			flag=false;
			for (i=1;i<=a[f[l]][0][0];i++){
				if (d[f[l]]+a[f[l]][i][1]<d[a[f[l]][i][0]]){
					d[a[f[l]][i][0]]=d[f[l]]+a[f[l]][i][1];
					r++;f[r]=a[f[l]][i][0];ex[a[f[l]][i][0]]++;
					if (ex[a[f[l]][i][0]]>=n) {
						flag=true;break;
					}
				}
			}
			l++;if (flag) break;
	//	cout<<r<<"\n";
	//	for(i=1;i<=r;i++) cout<<f[i]<<" ";
	//	cout<<"\n" ;
		
		} if (flag) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
