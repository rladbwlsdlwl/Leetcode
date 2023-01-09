/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public var val: Int
 *     public var left: TreeNode?
 *     public var right: TreeNode?
 *     public init() { self.val = 0; self.left = nil; self.right = nil; }
 *     public init(_ val: Int) { self.val = val; self.left = nil; self.right = nil; }
 *     public init(_ val: Int, _ left: TreeNode?, _ right: TreeNode?) {
 *         self.val = val
 *         self.left = left
 *         self.right = right
 *     }
 * }
 */
class Solution {
    func preorder(_ root: TreeNode?, _ nodeArray: inout Array<Int>){
        guard let root = root else{
            return 
        }
        
        nodeArray.append(root.val)

        preorder(root.left, &nodeArray)
        preorder(root.right, &nodeArray)
        
    }

    func preorderTraversal(_ root: TreeNode?) -> [Int] {
        var ans: Array<Int> = []

        preorder(root, &ans)

        return ans
    }
}
