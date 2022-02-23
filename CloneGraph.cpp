class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node)
            return NULL;
        if(m.find(node)==m.end()){
            m[node]=new Node(node->val);
            for(int i=0;i<node->neighbors.size();i++)
                m[node]->neighbors.push_back(cloneGraph(node->neighbors[i]));
        }
        
        return m[node];
    }
    
private:
    unordered_map<Node*,Node*>m;
};
