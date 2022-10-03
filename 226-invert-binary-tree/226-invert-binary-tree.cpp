/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   TreeNode* invertTree(TreeNode* root) {

    if(nullptr == root) return root;

    queue<TreeNode*> myQueue;   
    myQueue.push(root);         

    while(!myQueue.empty()){  
    
        TreeNode* node = myQueue.front(); 
    
        if(node){
            myQueue.push(node->left);
            myQueue.push(node->right);
            swap(node -> left, node -> right);
        }
    
        myQueue.pop();  

    }

    return root;
}
};