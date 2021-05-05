#include <iostream>
using namespace std;
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int size = 0;

int parent( int i) { return ( (i-1)/2); }

int left( int i){ return (2 * i + 1); }

int right( int i){ return (2 * i + 2); }

void insert( int heap[],  int i,  int val){
	heap[i] = val;
	while( i!=0 && heap[parent(i)]<heap[i] ){
		swap(heap[parent(i)],heap[i]);
		i = parent(i);
	}
}
 int extractMin( int heap[]){
	 int root = heap[0];
	heap[0] = heap[size-1];
	size -= 1;
	return root;
}
 int extractMax( int heap[]){
	 int root = heap[0];
	heap[0] = heap[size-1];
	size -= 1;
	return root;
}
void decreaseKey( int heap[],  int i, int val){
	heap[i] = val;
	while(i != 0 && heap[parent(i)] > heap[i] ){
		swap(heap[parent(i)], heap[i]);
		i = parent(i);
	}
}
void heapify( int heap[],  int n,  int i){
	 int l = left(i), r = right(i), s = i;
	if( l < n && heap[l] > heap[s] ){
		s = l;
	}
	if( r < n && heap[r] > heap[s] ){
		s = r;
	}
	
	if( s != i ) {
		swap(heap[s],heap[i]);
		heapify(heap,n,s);
	}
}
int main()
{
	sync;
	 int t; cin >> t;
	while(t--){
		 int n; cin >> n;
		 int a[n],x;
		size = 0;
		for ( int i = 0; i < n; i++)
		{
			cin >> x;
			insert(a,i,x);
			size++;
		}
		long long int p,q,temp;
		long long int mod = (10^9) + 7;
		while(size > 1){
			for ( int i = 0; i < size; i++)
			{
				cout<<a[i]<<"\t";
			}
			cout << "\n";
			p = extractMax(a);
			heapify(a,size,0);
			q = extractMax(a);
			heapify(a,size,0);
			temp = ((p*3) % mod - (q*2) % mod) % mod;
			insert(a,size,temp);
			size++;
			
		}
		cout << a[0] << "\n";
		//for ( int i = 0; i < size; i++)
		//{
			//cout<<a[i]<<"\t";
		//}
		
	}
}



