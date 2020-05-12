/*
Description
Invert a binary tree.

Example:

Input:

     4
   /   \
  2     7
 / \   / \
1   3 6   9
Output:

     4
   /   \
  7     2
 / \   / \
9   6 3   1

*/




class Solution {
    public TreeNode invertTree(TreeNode root) {
        
        if(root==null)
            return null;
        root.left=invertTree(root.left);
        root.right=invertTree(root.right);
        
        TreeNode temp = root.left;
        root.left=root.right;
        root.right=temp;
        return root;
    }
}

tc=O(n)
sc=o(n) for using intern stack
