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
    vector<TreeNode*> generateTrees(int n) {
        return solve(1,n);
    }
     vector<TreeNode*> solve(int st,int end){
         vector<TreeNode*> ans;
         if(st>end){
            
             return {NULL};
         }
         for(int i=st;i<=end;i++){
             vector<TreeNode*> l=solve(st,i-1);
             vector<TreeNode*> r=solve(i+1,end);
             for(TreeNode* j:l){
                 for(TreeNode* k:r){
                     TreeNode* root=new TreeNode(i);
                     root->left=j;
                     root->right=k;
                    ans.push_back(root);
                 }
             }
         }
         return ans;
     }
};
