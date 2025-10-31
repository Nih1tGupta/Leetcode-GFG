/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
   string serialize(TreeNode* root) {
        if (!root) return "";
        string s = "";
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* curNode = q.front();
            q.pop();
            if (curNode == nullptr) {
                s += "#,";
            } else {
                s += to_string(curNode->val) + ",";
                q.push(curNode->left);
                q.push(curNode->right);
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.empty())return nullptr;
        stringstream ss(data);
        string str; 
        getline(ss,str,',');
        TreeNode*root= new TreeNode(stoi(str)); queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode*node=q.front(); q.pop();
            getline(ss,str,',');
            if(str!="#"){TreeNode*left=new TreeNode(stoi(str));node->left=left;q.push(left);}
            getline(ss,str,',');
            if(str!="#"){TreeNode*right=new TreeNode(stoi(str));node->right=right;q.push(right);}
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));