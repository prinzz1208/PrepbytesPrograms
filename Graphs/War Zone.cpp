#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define fop first
#define sop second
#define ll long long int
#define vi vector<ll>
#define vs vector<string>
#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'


class graph{
	int nodes = 0;
	vi *adj;
	bool *visited;
	int l;
	public:
		bool *bomb;
		graph(int nodes,int l){
			this->l = l;
			this->nodes = nodes;
			adj = new vi[nodes];
			visited = new bool[nodes];
			bomb = new bool[nodes];
			FOR(i,0,nodes) {
				visited[i] = false;
				adj[i] = vi();
				bomb[i] = false;
			}
			
		}
		
		void add_edge(int u, int v){
			adj[u].pb(v);
			adj[v].pb(u);
		}
		int save_soldiers(int node, int soldiers,int health , int prev) {
			//print(node)<<TAB;
			if(visited[node]) 
				return 0;

			visited[node] = true;

			if(bomb[node])
				health--;
			else
				health = l;
			
			if(health == 0)
					return 0;
			vi neighbours = adj[node];
			bool leaf = true;
			FEI(el,neighbours){
				if(el != prev)
					leaf = false;
			}
			if(leaf){
				return 1;
			}

			int temp = soldiers;
			FEI(i,neighbours) {
				if(i != prev)
					temp += save_soldiers(i, soldiers, health, node);
			};				
				
			return temp;
		}
};

int main()
{
	sync;
	int n,l,u,v; cin >> n >> l;
	graph g(n,l+1);
	FOR(i,0,n){
		cin >> u;
		if(u) g.bomb[i] = true;
	}
	FOR(i,0,n-1){
		cin >> u >> v;
		g.add_edge(u,v);
	}
	//NL;
	print(g.save_soldiers(0,0,l+1,0));
	
}

