

/****************************************

@_@
Cat Got Bored *_*
#_#
*****************************************/

#include <bits/stdc++.h>


#define loop(i,s,e) for(int i = s;i<=e;i++) //including end point

#define pb(a) push_back(a)

#define sqr(x) ((x)*(x))

#define CIN ios_base::sync_with_stdio(0); cin.tie(0);

#define ll long long

#define ull unsigned long long

#define SZ(a) int(a.size())

#define read() freopen("input.txt", "r", stdin)

#define write() freopen("output.txt", "w", stdout)


#define ms(a,b) memset(a, b, sizeof(a))

#define all(v) v.begin(), v.end()

#define PI acos(-1.0)

#define pf printf

#define sfi(a) scanf("%d",&a);

#define sfii(a,b) scanf("%d %d",&a,&b);

#define sfl(a) scanf("%lld",&a);

#define sfll(a,b) scanf("%lld %lld",&a,&b);

#define mp make_pair

#define paii pair<int, int>

#define padd pair<dd, dd>

#define pall pair<ll, ll>

#define fs first

#define sc second

#define CASE(t) printf("Case %d: ",++t) // t initialized 0

#define INF 1000000000   //10e9

#define EPS 1e-9


using namespace std;
ull arr[10009];
ull dp[10009];
bool dp_ms[10009];
int N;
ull rec(int i)
{
    if(i>N)
      return 0;
    if(dp_ms[i]==true)
    {
        return dp[i];
    }
    else
    {
        dp_ms[i] = true;
        return dp[i] = max( rec(i+2) + arr[i] , rec(i+1) );
    }


}
int main()
{

 int tc;int cas = 0;
 sfi(tc);
 while(tc--)
 {

     ms(dp_ms,false);
     sfi(N);
     loop(x,1,N)
     {
         scanf("%llu",&arr[x]);
     }
     ull ans = rec(1);
     CASE(cas);
     pf("%llu\n",ans);

 }


    return 0;
}
