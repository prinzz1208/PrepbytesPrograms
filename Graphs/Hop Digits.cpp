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

int get_index(char s){
	return (s-'0');
}
int max3(int a,int b,int c=0){
	int mx = a;
	if(mx < b ) mx = b;
	if(mx < c ) mx = c;
	return mx;
}

class graph{
	public:
		int nodes = 0;
		vi *adj;

		bool *visited;
	
		int *dist;
		graph(int nodes){
			this->nodes = nodes;
			adj = new vi[nodes];
			visited = new bool[nodes];
			dist = new int[nodes];
			FOR(i,0,nodes) {visited[i] = false; adj[i] = vi(); dist[i] = INT_MAX;}
			
		}
		
		void add_node(int u, int v){
			adj[u].pb(v);
			adj[v].pb(u);
		}
		int DFS(int node,int dist) {
			if(visited[node]) return dist;
			//print(node)<<"->";
			visited[node] = true;
			vi neighbours = adj[node];
			sort(neighbours.begin(),neighbours.end(),greater<int>());
			//FEI(el,neighbours)
				//print(el)<<TAB;
			//NL;
			//int temp = dist;
			vi v;
			FEI(i,neighbours) {
				v.pb(DFS(i,dist+1));
			}
			//if(v.size() != 0)
				//return *min_element(v.begin(),v.end());
				
			
		}
		void BFS(int node){ //start node and end node as arguments
			queue<int> q;
			q.push(node);
			dist[node] = 0;
			visited[node] = true;
			while( !q.empty() ){
				int node = q.front();
				//print(node)<<"->";
				
				q.pop();
				vi neighbours = adj[node];
				//sort(neighbours.begin(),neighbours.end(),greater<int>());
				FEI(el,neighbours){
					if(!visited[el]){
						q.push(el);
						if(dist[el] > dist[node] + 1){
							dist[el] = dist[node] + 1;
						}
						visited[el] = true;
					}else{
						//hasCycle = true;
					}
				}
			}
		}

};
int main() 
{
	string s;
	cin >> s;
	int n = (int)s.length();
	vi a[27];
	FOR(i,0,27)
		a[i] = vi();
	graph g(n);

	FOR(i,0,n){
		if(a[s[i] -'0'].size() != 0){
			//print("else");
			FEI(el,a[s[i] -'0'])
				g.add_node(el,i);

		}
		
		if(i!= n-1)
			g.add_node(i,i+1);
		a[s[i] - '0'].pb(i);
		
	}

	g.BFS(0);
	//print(*min_element(g.dist,g.dist+g.nodes));
	print(g.dist[n-1]);
	//FOR(i,0,n){
		//print(g.dist[i])<<TAB;
	//}

}
