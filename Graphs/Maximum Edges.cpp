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
	public:
		graph(int nodes){
			this->nodes = nodes;
			adj = new vi[nodes];
			visited = new bool[nodes];
			FOR(i,0,nodes) {visited[i] = false; adj[i] = vi();}
			
		}
		
		void add_node(int u, int v){
			adj[u].pb(v);
			adj[v].pb(u);
		}
		int con_components(){
			vi v;
			FOR(i,0,nodes){
				if(!visited[i]){
					v.pb(DFS(i,0,i)/2);
					//NL;

				}
			}
			//FEI(el,v)
				//print(el)<<TAB;
			//NL;
			return *max_element(v.begin(),v.end());
		}
		int DFS(int node,int count, int prev) {
			//print(node)<<TAB;
			visited[node] = true;
			vi neighbours = adj[node];
			
			FEI(i,neighbours) {
				if(i != prev && !visited[i]){
					count = DFS(i,count,node);
				}
			}
			//test("temp:",temp)<<TAB;
			return count+neighbours.size();
		
		}
};
int main()
{
	sync;
	int t,v,e; cin >> t;
	while (t--)
	{
		cin >> v >> e;
		graph g = graph(v);
		FOR(i,0,e){
			int x,y;
			cin >> x >> y;
			g.add_node(x,y);
		}
		//NL;
		print(g.con_components());
		NL;
	}
	
}


