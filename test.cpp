#include<bits/stdc++.h>
using namespace std;
/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */
class TrieNode{
    public:
        char letter;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char c){
            letter = c;
            for(int i=0;i<26;i++) children[i] = NULL;
            isTerminal = false;
        }
};

class Trie {

public:

    /** Initialize your data structure here. */
    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }
    

    void insertUtil(TrieNode* root,string word){
        if(word.size()==0){
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'a';
        TrieNode* child;

        if(root->children[index]!=NULL){
            child = root->children[index];
        }else{
             child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        insertUtil(child,word.substr(1));
    }
    /** Inserts a word into the trie. */
    void insert(string word) {
        insertUtil(root,word);
    }

    bool searchUtil(TrieNode* root,string word){
        if(word.size()==0){
            if(root->isTerminal) return true;
            else return false;
        }

        TrieNode* child;
        int index = word[0] - 'a';

        if(root->children[index]!=NULL){
            child = root->children[index];
        }else{
            return false;
        }
        return searchUtil(child,word.substr(1));
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        return searchUtil(root,word);
    }

    bool startsWithUtil(TrieNode* root,string word){
        if(word.size()==0){
             return true;
        }

        TrieNode* child ;
        int index = word[0] - 'a';

        if(root->children[index]!=NULL){
            child = root->children[index];
        }else{
            return false;
        }
        return startsWithUtil(child,word.substr(1));
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        return startsWithUtil(root,prefix);

    }
};
int main(){
    Trie* t= new Trie();
    cout<<"inserting the data\n";
    t->insert("abcd");
    cout<<"Present or not : ";
    cout<< t->search("abcd");
}