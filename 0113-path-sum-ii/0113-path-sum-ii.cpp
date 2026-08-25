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
    void findpath(TreeNode* root, int t,vector<vector<int>>& ans,vector<int>& path){
        if(root==NULL )return;
         path.push_back(root->val);
        if(root->left==NULL && root->right==NULL && root->val==t){
            ans.push_back(path);
        }
        
        findpath(root->left,t-root->val,ans,path);
       
        findpath(root->right,t-root->val,ans,path);
         path.pop_back();
        

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int >>ans;
        vector<int> path;
        findpath(root,targetSum,ans,path);
        return ans;
    }
};