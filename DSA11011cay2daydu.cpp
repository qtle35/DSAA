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
tree *buildtree(){
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
bool isfulltree(tree *root){
    if(!root) return 1;
    if((!root->left&&root->right)||(root->left&&!root->right)) return 0;
    if(!isfulltree(root->left)) return 0;
    if(!isfulltree(root->right)) return 0;
    return 1;
}
main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        tree *root=buildtree();
        if(isfulltree(root)) cout<<1;
        else cout<<0;
        cout<<endl;
    }
}
