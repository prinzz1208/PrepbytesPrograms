#include <bits/stdc++.h>
using namespace std;

class node {
	public:
		int val;
		node* next;
		
		node() {
			this->val = 0;
			this->next = NULL;
		}
		
		node(int val) {
			this->val = val;
			this->next = NULL;
		}
		
		node(node* temp) {
			this->val = temp->val;
			this->next = temp->next;		
		}
	
	
};
class s_list {
	
	public:
		node* head;
		node* temp;
		int size = 0;
		s_list(){
			head = NULL;
		}
		
		s_list(int val) {
			this->head = new node(val);
			size++;
		}
		
		node* last(){
			temp = head;
			while( temp->next != NULL )
				temp = temp->next;
			return temp;
		}
		
		int get(int index){
			temp = head;
			int count = 0;
			while(temp != NULL){
				if ( count == index ){
					return temp->val;
				}
				temp = temp->next;
				count++;
			}
			return -1;
		}
		
		node* get_node(int index){
			temp = head;
			int count = 0;
			while(temp != NULL){
				if ( count == index ){
					return temp;
				}
				temp = temp->next;
				count++;
			}
			return NULL;
		}
		
		int find(int val){
			temp = head;
			int count = 0;
			while(temp != NULL){
				if ( temp->val == val ){
					return count;
				}
				temp = temp->next;
				count++;
			}
			return -1;
		}
		
		void add(int val){
			last();
			temp->next = new node(val); 		
			size++;
		}
		
		void printAll(){
			temp = head;
			while( temp != NULL ){
				cout << temp->val << "\t";
				temp = temp->next;
			}
		}

		void last_to_front(){
			if ( size > 2 ){
				temp = get_node(size - 2);
				node* next = new node(temp->next);
				temp->next = NULL;
				next->next = head;
				head = temp;
			}
			else if ( size == 2 ){
				last();
				head->next = NULL;
				temp->next = head;
			}
			
		}

};

int main()
{
	int t,n,x; cin >> t;
	while(t--){ 
		cin >> n;
		s_list l;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			l.add(x);
		}
		l.last_to_front();
		l.printAll();
		
	}
}


