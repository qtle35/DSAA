#include <bits/stdc++.h>
using namespace std;
int n;
struct tree{
    int value;
    tree *left, *right;
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
bool checkleaf(tree *root){
    if(root==NULL) return 1;
    queue<tree*> q;
    q.push(root);
    int level=0,res=INT_MAX;
    while(!q.empty()){
        int size=q.size();
        level++;
        while(size--){
            tree *temp=q.front();
            q.pop();
            if(temp->left!=NULL){
                q.push(temp->left);
                if(temp->left->right==NULL&&temp->left->left==NULL){
                    if(res==INT_MAX) res=level;
                    else if(res!=level) return 0;
                }
            }
            if(temp->right!=NULL){
                q.push(temp->right);
                if(temp->right->right==NULL&&temp->right->left==NULL){
                    if(res==INT_MAX) res=level;
                    else if(res!=level) return 0;
                }
            }
        }
    }
    return 1;
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        tree *root=buildtree();
        if(checkleaf(root)) cout<<1<<endl;
        else cout<<0<<endl;
    }
}
