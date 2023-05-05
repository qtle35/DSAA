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
string ispf(tree *root){
    queue<tree*> q;
    q.push(root);
    int s=0,lv=0,tmp;
    while(!q.empty()){
        s=q.size();
        if(s!=int(pow(2,lv))) return "No";
        tmp=s;
        while(tmp--){
            tree *u=q.front(); q.pop();
            if(u->left) q.push(u->left);
            if(u->right) q.push(u->right);
        }
        lv++;
    }
    return "Yes";
}
main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        tree *root=buildtree();
        cout<<ispf(root)<<endl;
    }
}
