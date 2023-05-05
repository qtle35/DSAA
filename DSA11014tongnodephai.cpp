#include <bits/stdc++.h>
using namespace std;
int n;
struct tree{
    int value;
    tree  *left,*right;
};
tree *newnode(int val){
    tree *temp= new tree;
    temp->value=val;
    temp->left=temp->right=NULL;
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
int sumright(tree *root){
    if(!root) return 0;
    queue<tree*> q;
    q.push(root);
    int res=0;
    while(!q.empty()){
        tree *u=q.front();q.pop();
        if(u->left) q.push(u->left);
        if(u->right){
            tree *temp=u->right;
            q.push(temp);
            if(!temp->left&&!temp->right) res+=temp->value;
        }
    }
    return res;
}
main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        tree *root=buildtree();
        cout<<sumright(root)<<endl;
    }
}
