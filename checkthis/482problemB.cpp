#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define N 100010
#define For(i,x,y) for (i=x;i<=y;i++)
using namespace std;
struct ww {
	int l,r,x;
} a[N];
int i,j,k,n,m,u;
int f[N],h[N],an[N];
inline void fail() {
	printf("NO\n");
	exit(0);
}
int main() {
	scanf("%d%d",&n,&m);
	For(i,1,m) scanf("%d%d%d",&a[i].l,&a[i].r,&a[i].x);
	For(u,0,30) {
		memset(f,0,sizeof(f));
		For(i,1,m) if ((a[i].x>>u)&1) {
			f[a[i].l]++,f[a[i].r+1]--;
		}
		For(i,1,n) {
			f[i]+=f[i-1];
			h[i]=h[i-1]+(f[i]>0);
			an[i]+=(1<<u)*(f[i]>0);
		}
		For(i,1,m) if (!((a[i].x>>u)&1)) {
			int A=h[a[i].r]-h[a[i].l-1];
			if (A==a[i].r-a[i].l+1) fail();
		}
	}
	printf("YES\n");
	For(i,1,n) printf("%d ",an[i]);
	printf("\n");
	return 0;
}
