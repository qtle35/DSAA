#include <bits/stdc++.h>
using namespace std;
int n;
struct tree{
    int value;
    tree *left, *right;
};
tree *newnode(int val){
    tree *temp = new tree;
    temp->left=temp->right=NULL;
    temp->value=val;
    return temp;
}
tree *buildtree(int n){
    map<int,tree*> mp;
    tree *root=NULL;
    while(n--){
        int a,b; char c;
        cin>>a>>b>>c;
        tree *cha=newnode(a);
        if(mp.find(a)==mp.end()){
            mp[a]=cha;
            if(root==NULL) root=cha;
        }
        else cha=mp[a];
        tree *con=newnode(b);
        if(c=='L') cha->left=con;
        else cha->right=con;
        mp[b]=con;
    }
    return root;
}
void inorder(tree *root, vector<int>&path){
    if(root->left!=NULL) inorder(root->left,path);
    path.push_back(root->value);
    if(root->right!=NULL) inorder(root->right,path);
}
main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        tree *root1=buildtree(n);
        cin>>n;
        tree *root2=buildtree(n);
        vector<int> p1,p2;
        inorder(root1,p1);inorder(root2,p2);
        cout<<(p1==p2)<<endl;
    }
}
