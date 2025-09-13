/*

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
 */

class Solution {
  public:
    void recursion(Node *root, int level, vector<int> &ans){
        if(root == nullptr) return;
        if(ans.size() == level) ans.push_back(root->data);
        recursion(root->left, level+1, ans); 
        recursion(root->right, level+1, ans); 
    }
    vector<int> leftView(Node *root) {
        vector<int>ans;
        recursion(root,0,ans);
        return ans;
        
        
    }
};