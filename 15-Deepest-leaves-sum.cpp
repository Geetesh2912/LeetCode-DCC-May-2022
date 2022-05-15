//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/deepest-leaves-sum/
//submission link: https://leetcode.com/submissions/detail/700094399/

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
    int deepestLeavesSum(TreeNode* root) {
        //we can break this particular question in two parts find the height of binary tree h and then find nodes at distance h from root;
        int h = height(root);
        int ans = sumAtDist(root, h-1);
        return ans;
    }
    
    int height(TreeNode* root)      //recursive height func
    {
        if (root==NULL)
            return 0;
        else
            return max(height(root->left) , height(root->right))+1;
    }
    
    int sum=0;
    int sumAtDist(TreeNode* root, int h)    //same as print nodes at dist k question
    {
        
        if (root==NULL)     
            return sum;
        if (h==0)
            sum=sum+(root->val);              //just instead print we do sum
        else
        {
            sumAtDist(root->left, h-1);
            sumAtDist(root->right, h-1);
        }
        return sum;
    }
    
};
