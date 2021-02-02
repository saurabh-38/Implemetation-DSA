#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<iomanip>
#include<queue>
#include<cmath>
#include<stack>
#include <map> 
 
#define ll                   long long
#define skip                 cin>>ws;
#define vll                  vector<ll> 
#define vi                   vector<int>
#define vb                   vector<bool>
#define vpll                 vector<pair<ll,ll>>
#define vvll                 vector<vector<ll>>
#define vvi                  vector<vector<int>>
#define pll                  pair<ll,ll>
#define vs                   vector<string>
#define vvpll                vector<vector<pair<ll, ll>>>
#define pb                   push_back
#define pob                  pop_back()
#define MOD                  (ll)(1e9)
#define MOD2                 (ll)(998244353)
#define INF                  (ll)(1e18 + 5)
#define count1(n)            __builtin_popcountll(n)
#define test                 ll t; cin>>t; while(t--)
#define enter(a)             for(ll i=0;i<a.size();i++) cin>>a[i];
#define show(a)              for(ll e: a) cout<<e<<" "; cout<<"\n";
 
using namespace std;
 
ll mo(ll a){ return a%MOD;}
 
ll po(ll x, ll y, ll p)
{
    ll res = 1; x = x % p;   
    while (y > 0) { if (y & 1) res = (res * x) % p; y >>= 1; x = (x * x) % p; } 
    return res%p; 
}
 
 
struct dsu
{
    int n;
    vll a, rank, siz;
 
    void init(ll si)
    {
        n = si; 
        a.resize(n); rank.resize(n); siz.assign(n, 1);
        for(ll i=0;i<n;i++) 
        {
            rank[i] = 1; a[i] = i;
        }
    }
 
    ll get(ll i)
    {
        return a[i] = ((i==a[i])?i:get(a[i]));
    }
 
    void unio(ll i, ll j)
    {
        ll x = get(i), y = get(j);
        if(x==y) return;
        if(rank[x]==rank[y]) rank[x]++;
        if(rank[y]>rank[x]) swap(x, y);
        a[y] = x;
        siz[x] += siz[y];
    }
 
    ll get_size(ll i)
    {
        return siz[get(i)];
    }
};
 
struct ed
{
    ll x, y, w;
};
 
bool compare(ed a, ed b)
{
    return a.w>b.w;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n, m;
    cin>>n>>m;
 
    ll rem = 0;
    vector<ed> a(m);
 
    for(ll i=0;i<m;i++)
    {
        ll x, y, w;
        cin>>x>>y>>w;
        x--; y--;
        a[i] = {x, y, w};
        rem = mo(rem + w);
    }
 
    sort(a.begin(), a.end(), compare);
    dsu ds; ds.init(n);
 
    ll ans = 0;

 
    for(ll i=0;i<m;i++)
    {
        if(ds.get(a[i].x)!=ds.get(a[i].y))
        {
            ans = mo(ans + mo(mo(ds.get_size(a[i].x)*ds.get_size(a[i].y))*rem));
            ds.unio(a[i].x, a[i].y);
        }
        rem = mo(rem - a[i].w + MOD);
    }
 
    cout<<ans<<"\n";
 
    return 0;
} 