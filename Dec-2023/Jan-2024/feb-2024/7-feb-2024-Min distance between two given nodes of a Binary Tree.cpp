class Solution{
    public:
    bool visit(Node* root, int p,vector<int>&v){
        if(!root){
            return false;
        }
        v.push_back(root->data);
        if(root->data == p){
            return true;
        }
        if(visit(root->left,p,v) || visit(root->right,p,v)){
            return true;
        }
        
        v.pop_back();
        return false;
    }
    
    int findDist(Node* root, int a, int b) {
    vector<int> A, B;
    visit(root, a, A);
    visit(root, b, B);
    
    int ind = 0;
    while (ind < A.size() && ind < B.size() && A[ind] == B[ind]) {
        ++ind;
    }
    return A.size() + B.size() - 2 * ind;
}


};