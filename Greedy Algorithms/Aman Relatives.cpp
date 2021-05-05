#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define fop first
#define sop second
#define ll long long int
#define vi vector<ll>
#
#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FEI(el,s) for(ll el : s)
#define FOR(index,a,n) for (ll index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'

struct Edge {
	ll vertex1;
	ll vertex2;
	ll weight;
	Edge(ll v1, ll v2, ll w):vertex1(v1), vertex2(v2), weight(w) {}
};

struct Graph {
	vector<ll> vertices;
	vector<Edge> edges;
	
	vector<pair<ll,Edge>> adjacent(ll u) {
		vector<pair<ll,Edge>> res;
		for (Edge e : edges) {
			if (e.vertex1 == u) {
				res.push_back( make_pair(e.vertex2, e));
			} 
			else if (e.vertex2 == u) {
				res.push_back( make_pair(e.vertex1, e));
			}
		}
		return res;
	}
};

ll prim(Graph& g, ll root) 
{
	unordered_map<ll, ll> res;
	unordered_map<ll, ll> PARENT;
	unordered_map<ll, ll> KEY;
	ll sum = 0;

	for (auto c : g.vertices) {
		PARENT[c] = INT_MAX;
		KEY[c] = INT_MAX;
	}
	KEY[root] = 0;
	vector<ll> Q = g.vertices;

	while (!Q.empty()) {    // O(V)
		ll u = *(min_element(Q.begin(), Q.end(), [&](ll x, ll y) {return KEY[x] < KEY[y];}));  // O(v) returns an iterator to the element

		vector<ll>::iterator itr = remove(Q.begin(), Q.end(), u);  // O(V) retruns an iterator to the element which was following the removed eleAment

		Q.erase(itr, Q.end());  // erase() following remove()

		if (PARENT[u] != INT_MAX) {
			res[u] = PARENT[u];   // This is one edge of MST
			//cout<<"\nres[u]:"<<res[u]<<"\tPARENT[u]:"<<PARENT[u];
		}
		vector< pair<ll, Edge> > adj = g.adjacent(u);   // O(E)
		for (pair<ll, Edge> v : adj) {
			if (find(Q.begin(), Q.end(), v.first) != Q.end()) {   // O(V)
				if (v.second.weight < KEY[v.first]) {
					PARENT[v.first] = u;
					KEY[v.first] = v.second.weight;
					//sum += v.second.weight;
				}
			}	
		}

	}

	for( pair<ll,ll> t: res){
		//print(t.first)<<TAB;
		sum+=KEY[t.first];
	}
	//NL;
	return sum;
}

int main() {

	sync;
	ll nodes,v1,v2,w;
	cin>>nodes;
	ll m;
	cin >> m;
	Graph g;
	g.vertices = vector<ll>(nodes);
	
	for(ll i=1; i<=nodes; i++)
	{
	  g.vertices.pb(i);
	}
	for(ll i=0; i<m; i++)
	{
		cin >> v1 >> v2 >> w;
		g.edges.push_back(Edge(v1,v2,w));
	
	}

	vi ans;

	for (ll i = 1; i <=nodes; i++)
	{
		ans.pb(prim(g,i));
		//NL;
	}
	print(*min_element(ans.begin(),ans.end()));
	//print(prim(g,1));
	return 0;
}
