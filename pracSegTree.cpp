#include <iostream>
#include <vector>
#include <cmath>
#include<cstdio>

using namespace std;

#define pii pair<int,int>
#define ff first
#define ss second

int n;
int dp[1005];

pii segtree[200005];
void build(int node,int start,int end)
{

    if(start==end){segtree[node].ff=start;segtree[node].ss=start;return;}
    else
    {
        int mid=(start+end)/2;
        segtree[node].ff=start;segtree[node].ss=end;
        build(2*node,start,mid);build(2*node+1,mid+1,end);

    }
}
long long pow2roundup (long long x)
{
    if (x < 0)
        return 0;
    --x;
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    x |= x >> 32;
    return x+1;
}

int main() {
    //FILE *fp;
    //fp=fopen("input.txt","r");
    //fscanf(fp,"%d",&n);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;

    cout<<ceil(log2(n))<<endl;

    build(1,1,pow2roundup(n));
       // cout<<segtree[6].ff<<" "<<segtree[6].ss<<endl;return 0;
    cout<<(n+1)/2<<" ";

    for(int i=1;i<=(n+1)/2;++i)
    cout<<i<<" ";cout<<endl;

    for(int po=2;po<=(int)(ceil(log2(n)));++po)
    {
        vector<int> ans;
        for(int i=(1<<po);i<(1<<(po+1));i+=2)
        {
            for(int j=segtree[i].ff;j<=segtree[i].ss&&j<=n;++j)
            {ans.push_back(j);}
            //cout<<endl;
        }
        cout<<ans.size()<<" ";
        for(int i=0;i<ans.size();++i)
        cout<<ans[i]<<" ";cout<<endl;
    }

    return 0;
}
