#include <bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    struct Node * left;
    struct Node *right;
    struct Node *top;
};
struct Node* newNode(int data){
    Node* root =new Node;
    root->value=data;
    root->left=NULL;
    root->top=NULL;
    root->right=NULL;
    return root;
}
int main(){
    int n;
    cin>>n;
    vector<int > parents,values;
    for(int i=0;i<n;i++){int a;cin>>a;parents.push_back(a);}
    cin>>n;
    for(int i=0;i<n;i++){int a;cin>>a;values.push_back(a);}
    Node *root[n];

    for(int i=0;i<n;i++){
        root[i] = newNode(values[i]);
        if(parents[i]!=-1)
        root[i]->top=root[parents[i]];
        else{parents[i]=i;root[i]->top=root[i];}


    }
    int ans=0;
    for(int i=0;i<n;i++){
        // if(root[i]->top=root[i]){
        //     int sum=root[i]->value;
        //     ans=max(sum,ans);
        // }else{
        //     while
        // }
        int sum=0;
        Node *test = root[i];
        int counter =0;
        while(test->top!=test ){
            sum+=(test->value);
            // cout<<test->value<<" ";
            test=test->top;counter++;
            if(counter==n)break;
        }
        sum+=(test->value);
        // cout<<root[i]->value<<" "<<root[i]->top->value<<endl;
        ans=max(sum,ans);
    }
    cout<<ans;

}