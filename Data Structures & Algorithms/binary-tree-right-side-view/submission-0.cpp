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
    int maxheight(TreeNode *root){
        if(root==NULL) return 0;
        return 1+max(maxheight(root->left),maxheight(root->right));
    }
    vector<int> rightSideView(TreeNode* root) {

        vector<int> ans;
        if(root==NULL) return ans;
        queue<TreeNode *> q;
        q.push(root);

        while(!q.empty()){
            
            int size=q.size();

            for(int i=0;i<size;i++){
                TreeNode *r=q.front();
                q.pop();
                if(i+1==size){
                    ans.push_back(r->val);
                }
                if(r->left) q.push(r->left);
                if(r->right) q.push(r->right);

            }
        }
       
        return ans;

          

    }
};
