#include <iostream>
#include <vector>
#include <string>
using namespace std;
void func(vector<vector<int>> &v){
    v[2][2]= 34;
    v[3][6]=6;

}
int main(){
    // vector<int> arr;
    // arr.push_back(45);
    // arr.push_back(34);
    // cout << arr.size() << " " << arr[0] << " " << arr[1] << endl;
    // vector<int> b;   // it size can be dynamically change
    // b.push_back(1);
    // b.push_back(37);
    // // b.pop_back();
    // cout<<b[0]<<" "<<b.size()<<" "<<b[1]<<endl;
    // vector <pair<int,int>> v;
    // v.push_back(make_pair(3,80));
    // cout<<v[0].first <<" " <<v[0].second <<" " << v.size()<< endl;
    vector <vector<int>> s(4,vector<int >(8,-5));
    for(int i=0;i<4;i++){
        for(int j=0;j<8;j++){
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    auto t = s.begin();
    auto aj = s[0].begin();
    // cout<< t << " " << aj << " " << endl;
    func(s);
    for(int i=0;i<4;i++){
        for(int j=0;j<8;j++){
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    s[0].push_back(9);
    s[3].push_back(342);
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s[i].size();j++){
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    // bool isempty = !s.empty();
    cout << s.empty() << endl;
    s.resize(10);
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s[i].size();j++){
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}