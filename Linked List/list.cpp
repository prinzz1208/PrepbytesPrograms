#include <bits/stdc++.h>
using namespace std;

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a
#define NL cout<<"\n"
#define TAB '\t'
template <typename T>
class node {
	public:
		T val;
		node<T>* next;
		
		node() {
			this->val = 0;
			this->next = NULL;
		}
		
		node(int val) {
			this->val = val;
			this->next = NULL;
		}
		
		node(node<T>* temp) {
			this->val = temp->val;
			this->next = temp->next;		
		}
	
	
};

template <class T>
class s_list {
	
	public:
		node<T>* head;
		node<T>* temp;
		int size = 0;
		
		s_list(){
			head = NULL;
		}
		
		s_list(T val) {
			this->head = new node<T>(val);
			this->head->next = NULL;
			size++;
		}
		
		node<T>* last(){
			temp = head;
			while( temp->next != NULL )
				temp = temp->next;
			return temp;
		}
		
		T get(int index){
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
		
		node<T>* get_node(int index){
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
			if(head == NULL){
				head = new node<T>(val);
			}
			else{
				last();
				temp->next = new node<T>(val); 		
			}	
			size++;
		}
		
		void push_front(int val){
			size++;
			node<T>* newNode = new node<T>(val);
			if ( head != NULL ){
				newNode->next = head;
				head = newNode;
			}else{
				head = newNode;
			}
		}
		
		void printAll(){
			//temp = head;
			node<T>* temp2 = head;
			while( temp2 != NULL ){
				cout << temp2->val << "\t";
				temp2 = temp2->next;
			}
		}

		void last_to_front(){
			if ( size > 2 ){
				temp = get_node(size - 2);
				node<T>* next = new node<T>(temp->next);
				temp->next = NULL;
				next->next = head;
				head = next;
			}
			else if ( size == 2 ){
				last();
				head->next = NULL;
				temp->next = head;
			}
			
		}

		void remove_at(int index){
			if( index == 0 && size > 1){
				node<T>* temp2 = head;
				head = head -> next;
				delete temp2;
			}else if ( index == 0 && size == 0 ){
				head = NULL;
			}else{
				temp = get_node(index-1);
	
				node<T>* temp2 = temp->next;
				temp->next = temp->next->next;
				delete temp2;
				
			}
			size--;
		}
		
		void remove_dulicates() {
			temp = head;
			int count = 0;
			while(temp->next != NULL) {
				if ( temp->next->val == temp->val ){
					remove_at(count+1);
				}
				else{
					temp = temp->next;
					count++;
				}
			}
		}

		void insert(int index,int val) {
			insert(get_node(index),val);
		}
		
		void insert(node<T>* temp2,int val) {
			node<T>* newNode = new node<T>(val);
			newNode->next = temp2 -> next;
			temp2->next = newNode;
			size++;
		}
		
		void merge(s_list l2){
			if ( size > 0 ){
				temp = last();
				temp->next = l2.head;
				size += l2.size;
			}else{
				head = l2.head;
				size++;
			}
		}
	
		void reverse(){
			node<T>* prev;
			node<T>* next;
			temp = head;
			prev = head;
			while( temp != NULL ){
				next = temp->next;
				if ( temp != head ){
					temp->next = prev;
					prev = temp;
				}
				temp = next;
			}
			head->next = NULL;
			head = prev;
		}
		
		void clear(){
			temp = head;
			node<T>* current;
			while( temp != NULL ){
				current = temp;
				temp = temp->next;
				delete current;
			}
			head = NULL;
			size = 0;
		}
	
		void reverse2(int k, node<T>* point) {
			s_list l3;
			temp = point;
			while(temp != NULL){
				s_list l2;

				for (int i = 0; i < k && temp != NULL; i++)
				{
					l2.push_front(temp->val);
					temp = temp->next;
				}
				l2.printAll();
				NL;
				l3.merge(l2);
				//l2.clear();
			}
			l3.printAll();
			NL;
		}
		 
		void rotate_anti(int k){
			k = k & size;
			s_list l2;
			s_list l3;
			int i;
			for ( i = 0; i < k && temp != NULL; i++)
			{
				l2.push_front(temp->val);
				temp = temp->next;
			}
			for( ; i < size && temp != NULL; i++ )
			{
				l3.push_front(temp->val);
				temp = temp->next;
			}
			l2.merge(l3);
			l2.reverse();
			l2.printAll();
			
		}
};

int main()
{
	sync;
	int t,n; cin >> t;
	int x,k;
	//char x;
	while(t--){ 
		cin >> n;
		//s_list<char> l;
		s_list<int> l;
	
		cin >> k;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			l.add(x);
		}
		l.temp = l.head;
		l.rotate_anti(k);
		//cout << l.head->next->next->next->next->next->val;
		//l.reverse();
		cout<<endl;		

		
		
	}
	//s_list l(1);
	//l.add(2);
	//l.add(3);
	//l.reverse();
	//l.printAll();
	
}


