#include<bits/stdc++.h>
using namespace std;

struct  Node{
	int data;
	Node *next;
};

Node *head = NULL;

void insert(int data){

	Node *ptr = new Node();
	ptr->data = data;
	ptr->next = head;
	head = ptr;
}

void display(){

	Node *ptr = head;
	if(ptr == NULL) cout<<"NULL\n";
	while(ptr != NULL){
		cout<<"["<<ptr->data<<"]\n";
		ptr = ptr->next;
	}
}

void search(int val){
	Node *ptr = head;
	int flag = 0;
	while(ptr != NULL){
		if(val == ptr->data){
			flag = 1;
			break;
		}
		else{
			ptr = ptr->next;
		}
		if(flag) cout<<"Found"<<endl;
		else{
			cout<<"Not Found "<<endl;
		}
	}
}

void deletenode(int val){
	Node *ptr = head;
	Node *prev = NULL;

	if(ptr != NULL and ptr->data == val){
		head = ptr->next;
		delete ptr;
		cout<<"deleted"<<endl;
		return;
	}
	while(ptr != NULL and ptr ->data != val){
		prev = ptr;
		ptr = ptr->next;
	}
	if(ptr == NULL){
		cout<<"NOT found"<<endl;
		return ;
	}

	prev->next = ptr->next;
	delete ptr;
	cout<<"deleted"<<endl;
}

int main(){
int x,value,cross = 1;
while(cross != 0){
	cout<<"1.insert\n2.display\n3.search\n4.exit\n";
	cin>>x;
	switch(x){
	case 1:
		cin>>value;
		insert(value);
		break;
	case 2:
		display();
		break;
	case 3:
		cin >>value;
		search(value);
		break;
	case 4:
		cin>>value;
		deletenode(value);
		break;
	default:cout<<"NO"<<endl;
		break;
	}

}
return 0;}