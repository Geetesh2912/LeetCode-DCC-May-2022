//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/
//submission link: https://leetcode.com/submissions/detail/701561171/

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
    
    TreeNode* ans;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        //simple DFS- preorder traversing
        if (original==NULL)
            return ans;
        if (original==target)
        {
            ans=cloned;
            return ans;
        }   
        getTargetCopy(original->left, cloned->left, target);
        getTargetCopy(original->right, cloned->right, target);
        return ans;
    }
};
