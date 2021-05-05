#include <bits/stdc++.h>
using namespace std;


#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a


#define FOR(index,a,n) for (int index = a; index < n; index++)

#define NL cout<<"\n"
#define TAB '\t'

struct node {
	int gas;
	int cost;
	node* next;
	node(){
		cost = 0;
		gas = 0;
		next = NULL;
	}
	node(int gas, int cost){
		this->gas = gas;
		this->cost = cost;
		next = NULL;		
	}
};

class cq {
	
	public:
		node* front;
		node* temp;
		node* back;
		int size = 0;
		
		cq(){
			front = back = NULL;
		}
		cq(int gas, int cost){
			front = new node(gas,cost);
			back = front;
			size++;
		}
		
		bool is_empty(){
			return size == 0;
		}
		
		void push(int gas, int cost){
			if ( front == NULL ){
				front = new node(gas,cost);
				back = front;
			}
			else{
				temp = new node(gas,cost);
				back->next = temp;
				temp->next = front;
				back = temp;
			}
			size++;
		}
		
		void pop(){
			if ( front != NULL ){
				temp = front;
				front = front->next;
				delete temp;
			}
			else{
				throw ;
			}
			size--;
		}
	
	
};
int main()
{
	sync;
	cq q;
	int n;
	
	cin >> n;
	
	int gas[n], cost[n];
	
	FOR(i,0,n)
		cin >> gas[i];
	FOR(i,0,n)
		cin >> cost[i];
		
	FOR(i,0,n){
		q.push(gas[i],cost[i]);
	}
	

	//q.temp = q.front;
	//print(q.back->gas);
	//while(q.temp != q.back){
		//print(q.temp->cost)<<TAB;
		//q.temp = q.temp->next;
		
	//}
	//NL;
	
	bool possible = true;
	int index = 0;
	q.temp = q.front;
	node* start = q.temp;

	FOR(i,0,n){
		possible = true;
		int total_gas = q.temp->gas - q.temp->cost;
		q.temp = q.temp->next;
		while( q.temp != start && q.temp != NULL ){

			if (total_gas < 0 ){
				possible = false;
				break;
			}
			//test("total:",total_gas);
			total_gas += q.temp->gas - q.temp->cost;
		
			q.temp = q.temp->next;
		}
		
		if (possible){
			index = i;
			break;
		}
		q.temp = start->next;
		start = start->next;
		
	}
	//NL;
	possible ? print(index) : print(-1);
	
}

