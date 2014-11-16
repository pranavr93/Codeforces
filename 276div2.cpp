/* Author : Pranav
BITS PILANI Hyderabad Campus */
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <bitset>
//#include <sstream>
using namespace std;

#define sz(a) int((a).size())
#define pb push_back
#define pop pop_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define fr(i,n) for(i=0; i<n; i++)
#define N 10005
#define oo 1<<35
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)

typedef long long ll;


int main(){
    ll n, m, x,y,i,j,k;
    ios::sync_with_stdio(0);

    cin>>n;
    while(n--){
        cin>>x>>y;
        if(x==y){
            cout<<y<<endl;continue;
        }
        bitset<70> ff(x);
        bitset<70> ss(y);
        ll posff = -1,posss = -1;
        for(i=0;i<70;i++){
            if(ff[i]==1)
                posff = i;
            if(ss[i] == 1)
                posss = i;
        }
      //  cout<<posss<<endl;
       // cout<<posff<<" "<<posss<<endl;
        if(posss>posff){
            if(ss.count() == posss+1 ){
                cout<<y;goto lab;
            }
            else{
                cout<<((ll)1<<posss) -1;goto lab;
            }
        }
        else{
            for(j=posss-1;j>=0;j--){
                if(ss[j]==1&&ff[j]==0){
                    for(k=j;k>=0;k--)
                        if(ss[k]==0)
                            break;
                    if(k==-1){
                        cout<<y;goto lab;
                    }
                    else{
                        ss[j]=0;
                        for(k=j-1;k>=0;k--){
                            ss[k]=1;
                        }
                        cout<<ss.to_ullong();goto lab;
                    }
                }

            }
        }
        lab:
            cout<<endl;
    }
    return 0;
}
