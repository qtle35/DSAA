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
void spiralorder(tree *root){
    vector<int> res;
    queue<tree*> q;
    q.push(root);
    int lv=0;
    while(!q.empty()){
        int k=q.size();
        while(k--){
            tree *tmp=q.front();q.pop();
            res.push_back(tmp->value);
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
            
        }
        if(lv%2==0) reverse(res.begin(),res.end());
        for(auto i:res) cout<<i<<" ";
        res.clear();
        lv++;
    }
}
main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        tree *root=buildtree();
        spiralorder(root);
        cout<<endl;
    }
}
