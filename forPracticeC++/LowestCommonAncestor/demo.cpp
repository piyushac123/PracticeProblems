#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
  
    Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        Node *temp;
        temp=root;
        Node *vec1[10];
        Node *vec2[10];
        int count1=0,count2=0;
        while(temp->data!=v1){
            vec1[count1++]=temp;
            if(v1<=temp->data){
                temp=temp->left;
            }
            else{
                temp=temp->right;
            }
        }
        vec1[count1++]=temp;
        temp = root;
        while (temp->data != v2) {
          vec2[count2++]=temp;
          if (v2 <= temp->data) {
            temp = temp->left;
          }
          else {
            temp = temp->right;
          }
        }
        vec2[count2++] = temp;
        Node *vec;
        int cnt=0;
        /*for (int i = 0; i < count1; i++) {
          for (int j = 0; j < count2; j++) {
            cout << vec2[j]->data << " ";
          }
          cout << "\n" << vec1[i]->data << "\n";
        }*/
        for(int i=0;i<count1;i++){
            for(int j=0;j<count2;j++){
                if(vec2[j]->data==vec1[i]->data){
                    vec=vec1[i];
                    cnt++;
                    break;
                }
            }
        }
        if(cnt!=0){
            return vec;
        }
        return NULL;
    }

}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  	
  	int v1, v2;
  	std::cin >> v1 >> v2;
  
    Node *ans = myTree.lca(root, v1, v2);
    
  	std::cout << ans->data;

    return 0;
}

