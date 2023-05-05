#include <bits/stdc++.h>
using namespace std;
int n;
struct tree{
    int value;
    tree *left,*right;
};
tree *newnode(int val){
    tree *temp=new tree;
    temp->left=temp->right=NULL;
    temp->value=val;
    return temp;
}
tree *buildtree(){
    map<int,tree*> mp;
    tree *root=NULL;
    while(n--){
        int a,b;
        char x;
        cin>>a>>b>>x;
        tree *cha=newnode(a);
        if(mp.find(a)==mp.end()){
            mp[a]=cha;
            if(root==NULL) root=cha;
        }
        else cha=mp[a];
        tree *con=newnode(b);
        if(x=='L') cha->left=con;
        else cha->right=con;
        mp[b]=con;
    }
    return root;
}
void levelorder(tree *root){
    if(root==NULL) return;
    queue<tree*> q;
    q.push(root);
    while(!q.empty()){
        tree *t=q.front();q.pop();
        cout<<t->value<<" ";
        if(t->left!=NULL) q.push(t->left);
        if(t->right!=NULL) q.push(t->right);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        tree *root=buildtree();
        levelorder(root);
        cout<<endl;
    }
}