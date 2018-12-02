#include <iostream>
#include<math.h>
#include<vector>    

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
/*
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
*/

    void levelOrder(Node * root) {
        vector<Node* > a;
        vector<Node* > b;
        int check=0;
        int cnt=0;
        a.push_back(root);
        while(cnt!=1){
            cnt=0;
            if(check==0){
                for(int i=0;i<a.size();i++){
                    if(a[i]!=NULL){
                        cout<<a[i]->data<<" ";
                    }
                    if(a[i]->left!=NULL)
                        b.push_back(a[i]->left);
                    if(a[i]->right!=NULL)
                        //cnt++;
                        b.push_back(a[i]->right);
                }
                check=1;
                a.clear();
            }
            else{
                for (int i = 0; i < b.size(); i++) {
                    if (b[i] != NULL) {
                    cout << b[i]->data << " ";
                    }
                    if (b[i]->left != NULL)
                        //cnt++;
                        a.push_back(b[i]->left);
                    if (b[i]->right != NULL)
                        //cnt++;
                        a.push_back(b[i]->right);
                }
                check = 0;
                b.clear();
            }
            if(check==0){
                if(a.size()==0)
                    cnt=1;
            }
            else{
                if(b.size()==0)
                    cnt=1;
            }
        }
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
  
    myTree.levelOrder(root);
    return 0;
}
