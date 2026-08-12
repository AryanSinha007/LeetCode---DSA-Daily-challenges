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
    int maxheight(TreeNode* root,int& diameter){
        if(root==nullptr) return 0;
        int LHeight=maxheight(root->left,diameter);
        int RHeight=maxheight(root->right,diameter);
        diameter=max(diameter,LHeight+RHeight);
        return 1+max(LHeight,RHeight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        maxheight(root,diameter);
        return diameter;
    }
};