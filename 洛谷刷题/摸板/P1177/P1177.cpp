#include<bits/stdc++.h>
int n,i,a[1000000];
using namespace std;
int main(){
	scanf("%d",&n);
	for (i=0;i<=n-1;i++)
	scanf("%d",&a[i]);
	sort(a,a+n);
	for (i=0;i<=n-1;i++)
	 printf("%d ",a[i]);
	return 0;
}
/*我们设我们排序的数组为 a，排序区间为 [l,r)（即所有满足 l≤x<r 的整数 x），且从小到大排序。
则调用方法为：sort(a + l, a + r)。对于本题，就可以通过 sort(a + 1, a + n + 1) 自动完成排序。
如果要使用这个函数，应当包含 <algorithm> 头文件。*/
