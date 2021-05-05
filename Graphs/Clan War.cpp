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

		int *color;
		int cycle = 0;
		graph(int nodes){
			this->nodes = nodes;
			adj = new vi[nodes];
			visited = new bool[nodes];
			color = new int[nodes];
			FOR(i,0,nodes) {
				visited[i] = false;
				adj[i] = vi();
				color[i] = -1;
			}
			
		}
		
		void add_node(int u, int v){
			adj[u].pb(v);
			adj[v].pb(u);
		}
		int con_components(){
			int count = 0;
			FOR(i,0,nodes){
				if(!visited[i]){
					count++;
					findCycle(i,i);
				}
			}
			return count;
		}
		bool isBipartite(){
			FOR(i,0,nodes){
				FEI(el,adj[i]){
					if(abs(color[el]-1) != color[i])
						return false;
				}
					
			}
			return true;
		}
		void colorGraph(int node, int prev, int c){
			if(visited[node]){
				return;
			}
			color[node] = c;
			c = abs(1-c);
			visited[node] = true;
			vi neighbours = adj[node];
			FEI(i, neighbours){
				if(i!=prev)
					colorGraph(i,node,c);
			}
		}
		
		bool isConnected(){
			FOR(i,0,nodes){
				if(!visited[i])
					return false;
			}
			return true;
		}

		void findCycle(int node,int prev){
			if(visited[node]){
				cycle++;
				return;
			}
			print(node)<<"->";

			visited[node] = true;
			vi neighbours = adj[node];
			FEI(i,neighbours){
				if(i != prev){
					findCycle(i,node);
				}
			}
		}

		void BFS(int node){ //start node and end node as arguments
			queue<int> q;
			q.push(node);
			
			visited[node] = true;
			while( !q.empty() ){
				int node = q.front();
				q.pop();
				vi neighbours = adj[node];
				
				FEI(el,neighbours){
					if(!visited[el]){
						q.push(el);
						visited[el] = true;
					}else{
						//hasCycle = true;
					}
				}
			}
		}
		
		void DFS(int node) {
			if(visited[node]){ 
				return;
			}
		// 	print(node)<<"->";

			visited[node] = true;
			vi neighbours = adj[node];
			FEI(i,neighbours) DFS(i);
		}

};
int main()
{
	sync;

	int t,v,e; 
	cin >> t;
	while (t--)
	{
		cin >> v >> e;
		graph g = graph(v);
		FOR(i,0,e){
			int x,y;
			cin >> x >> y;
			g.add_node(x,y);
		}
		//g.findCycle(0,0);
		g.colorGraph(0,0,0);
		vi red,black;
		
		FOR(i,0,v){
			if(g.color[i]){
				red.pb(i);
			}else
				black.pb(i);
		}
		//NL;
		
		g.colorGraph(0,0,0);
		//g.con_components();
		//print(g.cycle);
		//NL;
		(g.isBipartite()) ? print("Yes") : print("No");
		NL;
	}
}



