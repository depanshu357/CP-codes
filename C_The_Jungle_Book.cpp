#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
struct TreeNode{
    int val;
    TreeNode *right,*up;
    TreeNode(int v){val = v;right=NULL;up=NULL;}
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int s,e;cin>>s>>e;
    map<int,TreeNode*> mp;
    map<int,TreeNode*> bach;
    for(int i=0;i<e;i++){
        int a,b;
        // a = v[i].first ;b = v[i].second;
        cin>>a>>b;
        if(mp.find(a)==mp.end() && mp.find(b)==mp.end()){
            TreeNode* node1 = new TreeNode(a);
            TreeNode* node2 = new TreeNode(b);
            node2->up = node1;
            mp[a] = node1;
            mp[b] = node2;
            bach[b] = node2;
        }else if(mp.find(a)==mp.end()){
            TreeNode* node = new TreeNode(a);
            mp[b]->up = node;
            mp[a] = node;
            // bach[b]=node;
            
        }else if(mp.find(b)==mp.end()){
            TreeNode* node = new TreeNode(b);
            node->up = mp[a];
            mp[b] = node;
            if(bach.find(a)!=bach.end()) bach.erase(a);
            bach[b] = node;
            // if(bach)
            // if(mp[a]->up==NULL) bach[a] = node;
        }else {
            mp[b]->up = mp[a];
            if(bach.find(a)!=bach.end()) bach.erase(a);
            // if(bach.find(b)==bach)
        }

    }
    int maxi = 0;
    for(auto it: mp){
        int count = 1;
        // cout<<it.first<<" ";
        TreeNode* node = it.second;
        // cout<<node->val<<" ";
        while(node->up) {node= node->up;count++;
        // cout<<node->val<<" ";
        }
        // cout<<'\n';
        maxi = max(maxi,count);
    }
    cout<<maxi;
}