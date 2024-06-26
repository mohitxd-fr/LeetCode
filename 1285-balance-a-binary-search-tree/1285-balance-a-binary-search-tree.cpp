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
    void inorderTraverse(TreeNode* root)
    {
        if(root == NULL)
        {
            return;
        }
        inorderTraverse(root-> left);
        v.push_back(root);
        inorderTraverse(root-> right);
    }
    TreeNode* sortedArrayToBST(int start,int end)
    {
        if(start > end)
        {
            return NULL;
        }
        int mid = (start + end) / 2;
        TreeNode* root = v[mid];
        root-> left = sortedArrayToBST(start,mid - 1);
        root-> right = sortedArrayToBST(mid + 1,end);
        return root;
    }
public:
    vector<TreeNode*> v;
    TreeNode* balanceBST(TreeNode* root) {
        inorderTraverse(root);
        return sortedArrayToBST(0,v.size() - 1);
    }
};