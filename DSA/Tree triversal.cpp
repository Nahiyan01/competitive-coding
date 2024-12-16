#include<bits/stdc++.h>
using namespace std;

struct Tree{
	int data;
	Tree *left;
	Tree *right;

	Tree(int val){
		data = val;
		left = right = NULL;
	}
};

Tree insert(Tree* root,int data){
	if(root == NULL){
		return new Tree(data);
	}

	else{
		if(data <= root->data){
			root->left = insert(root->left,data);
		}
		else{
			root->right = insert(root->right,data);
		}
		return root;
	}
}

void inorder(Tree* root){
	if(root != NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->left);
	}
}

void preorder(Tree* root){
	if(root != NULL){
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(Tree* root){
	if(root != NULL){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
}

int main(){
	Tree* root = NULL;
	int choice ,value;
	while(true){
		cout<<"1. Insert\n2. In-order Traversal\n3. Pre-order Traversal\n4. Post-order Traversal\n5. Exit\n";
		cout<<"Enter your choice :";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter the value :";
				cin>>value;
				root = insert(root,value);
				break;
			case 2:
				cout<<"In-order";
				inorder(root);
				cout<<endl;
				break;
			case 3:
				cout<<"preorder";
				preorder(root);
				cout<<endl;
				break;
			case 4:
				cout<<"postorder";
				postorder(root);
				cout<<endl;
				break;
			case 5:
				return 0;
				break;
			default:
				break;

		}
	}
return 0;}