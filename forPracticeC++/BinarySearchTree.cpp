#include<iostream>
using namespace std;
class node{
public:
	node *left,*right;
	int data;
};
class binary{
public:
	node *insert(node *root,int d){
		node *n=new node();
		n->data=d;
		n->left=NULL;
		n->right=NULL;
		if(!root){
			root=n;
		}
		else{
			int flag=0;
			node *temp=root;
			do{
			if(temp->data>=d){
				if(temp->left==NULL){
					temp->left=n;
					flag=1;
				}
				else{
					temp=temp->left;
				}
			}
			else{
				if(temp->right==NULL){
					temp->right=n;
					flag=1;
				}
				else{
					temp=temp->right;
				}
			}
			}while(flag==0);
		}
		return root;
	}
	void inorder(node *root1){
		if(root1){
			inorder(root1->left);
			cout<<root1->data;
			inorder(root1->right);
		}
	}
};
int main(){
	binary b;
	int data;
	char ch;
	node *root=NULL;
	while(1){
		cin>>data;
		root=b.insert(root,data);
		cout<<"More(y/n)";
		cin>>ch;
		if(ch=='n'){
			break;
		}
	}
	b.inorder(root);
	return 0;
}