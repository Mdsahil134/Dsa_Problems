/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void findPath(TreeNode* root, TreeNode* p,vector<TreeNode*>& path){
        if(root==NULL)return;
        path.push_back(root);
         if (root == p) return;
        if(root->val > p->val){
            findPath(root->left,p,path);
        }
        else{
             findPath(root->right,p,path);
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)return NULL;
        vector<TreeNode*> p_path;
        vector<TreeNode*> q_path;
        findPath(root,p,p_path);
        findPath(root,q,q_path);
        int n=min(p_path.size(),q_path.size());
        
        for(int i=0;i<n;i++){
            if(p_path[i] != q_path[i]){
                return p_path[i-1];
            }
        }
        return (p_path.size()< q_path.size()?p_path.back():q_path.back());
    }
};