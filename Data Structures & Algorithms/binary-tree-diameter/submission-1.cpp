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
    int maxheight(TreeNode * root){
        if(root==NULL) return 0;
        return 1+max(maxheight(root->left),maxheight(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int lefth=maxheight(root->left);
        int righth=maxheight(root->right);
        int ans=0;
        int ans1=0;
        ans=max(ans,lefth+righth);
        int left=diameterOfBinaryTree(root->left);
        int right=diameterOfBinaryTree(root->right);
        ans1=max(ans1,left+right);

        return max(ans,ans1);
    }
};
