#include <iostream>
using namespace std;

int parent(int i) { return ( (i-1)/2); }

int left(int i){ return (2 * i + 1); }

int right(int i){ return (2 * i + 2); }

void heapify(int heap[], int n, int i){
	int l = left(i), r = right(i), s = i;
	if( l < n && heap[l] < heap[s] ){
		s = l;
	}
	if( r < n && heap[r] < heap[s] ){
		s = r;
	}
	
	if( s != i ) {
		swap(heap[s],heap[i]);
		heapify(heap,n,s);
	}
}
void build_heap(int heap[], int n){
	for(int j = (n-1)/2; j >= 0; j--){
		heapify(heap,n,j);
	}
}
int main()
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		build_heap(a,n);
		for (int i = 0; i < n; i++)
		{
			cout<<a[i]<<"\t";
		}
		
		
	}
}
