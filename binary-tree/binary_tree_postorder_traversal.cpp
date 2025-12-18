class Solution {
public:
    vector<int> ans;
        void post(TreeNode* root){
        if(root==NULL){
            return;
        }
        
        post(root->left);
        post(root->right);
        ans.push_back(root->val);

        }
    vector<int> postorderTraversal(TreeNode* root) {
        post(root);
        return ans;
        
    }
};