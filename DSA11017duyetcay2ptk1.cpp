#include <bits/stdc++.h>
using namespace std;
struct tree{
    int value;
    tree  *left,*right;
    tree(){
        this->value=0;
        this->left=NULL;
        this->right=NULL;
    }
};
void postorder(tree *root){
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->value<<" ";
}
tree *buildpreorder(int *a,int n){
    int i;
    if(n<=0) return NULL;
    tree *root=new tree;
    root->value=a[0];
    for(i=1;i<n;i++){
        if(a[i]>a[0]) break;
    }
    root->left=buildpreorder(&a[1],i-1);
    root->right=buildpreorder(&a[i],n-i);
    return root;
}
main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        tree *root=buildpreorder(a,n);
        postorder(root);
        cout<<endl;
    }
}
