#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
#define sp(x) fixed << setprecision(x)
#define memo(a,b) memset(a,b,sizeof(a))

vector<pair<ll,ll>> arr[100005];
bool vis[100005];
bool path[100005];
ll val[100005];
ll cnt;


ll dis[100005];
bool dont_vis[100005];
void dfs_avoid(ll s)
{
cout<<"** "<<s<<endl;
dont_vis[s]=1;
dis[s]=-1e18;
for(auto v:arr[s])
if(!dont_vis[v.first]) dfs_avoid(v.first);
}


// i think it takes max 2n time
void dfs_cycle(ll s,ll sum) {
    vis[s] = 1;path[s] = 1;
    val[s]=sum;
    for (auto v : arr[s]) {
        if (!vis[v.first]) dfs_cycle(v.first,sum+v.second);
        else if (path[v.first]) {
        cout<<endl;
        cnt++;
        cout<<"Cycle "<<cnt<<" One if its point"<<endl;
        cout<<v.first<<endl;
        cout<<"Its total value "<<endl;
        cout<<sum+v.second-val[v.first]<<endl;
        cout<<endl;
        if((sum+v.second-val[v.first])<0) dfs_avoid(v.first);
        }// Back edge detected
    }
    path[s] = 0;
}


void dijkstra(ll s)
{
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
    if(dis[s]!=-1e18)
    {
    dis[s] = 0;
    pq.push({0, s});
    }
    while (!pq.empty())
    {
        auto x = pq.top();
        pq.pop();
        ll dist = x.first;
        ll node = x.second;
        if (dist > dis[node]) continue;
        for (auto eg : arr[node])
        {
            ll neighbor = eg.first;
            ll weight = eg.second;
            if (dis[neighbor]!=-1e18 && dis[node]+weight < dis[neighbor])
            {
                dis[neighbor] = dis[node] + weight;
                pq.push({dis[neighbor], neighbor});
            }
        }
    }
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    memo(vis, 0); memo(path, 0); memo(val,0);cnt = 0;
    memo(dont_vis,0);
    // its 1 indexed
    ll n, m; cin >>n>> m;
    for(ll i=1;i<=n;i++)dis[i]=1e18;
    for (ll i=0;i<m;i++) {
        ll u,v,w;cin>>u>>v>>w;
        arr[u].push_back({v,w});
    }
    // Handle disconnected components
    for (ll i = 1; i <= n; i++) {
        if (!vis[i]) dfs_cycle(i,0);
    }
    if(cnt==0)cout<<"NO cycle "<<endl;

     dijkstra(1);
     for(ll i=1;i<=n;i++)cout<<dis[i]<<" ";cout<<endl;

}
