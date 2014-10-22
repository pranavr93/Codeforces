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
#define N 1234567
#define INF 1000000
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)


int main(){


      ll i,j;
      ll res=0;

      cin>>n>>m;

     // cout<<computeSolutions(1,5);
    //  return 0;
      cin>>x;
      cin>>y;
      for(i=0;i<strlen(y);i++){
        int pos=(int)y[i]-'a';
        v[pos].pb(i);
      }


      for(i=0;i<strlen(x);i++){
        int pos=(int)x[i]-'a';
        for(j=0;j<v[pos].size();j++){
            res+=computeSolutions(i,j);
        }
      }
      cout<<n*strlen(x)-res<<endl;

return 0;
}

