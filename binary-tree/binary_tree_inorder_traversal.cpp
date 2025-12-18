class Solution {
public:
    vector<int> ans;
        void ino(TreeNode* root){
        if(root==NULL){
            return;
        }
        
        ino(root->left);
        ans.push_back(root->val);
        ino(root->right);

        }
    vector<int> inorderTraversal(TreeNode* root) {
        ino(root);
    
         return ans;
    }
};