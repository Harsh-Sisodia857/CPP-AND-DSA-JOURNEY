#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public :
        char data;
        TrieNode *children[26];
        bool isTerminal;
        int childCount;
        TrieNode(char ch){
            data = ch;
            for (int i = 0; i < 26;i++){
                children[i] = NULL;
            }
            isTerminal = false;
            childCount = 0;
        }
};

class Trie{
    public :
        TrieNode *root;
        Trie(){
            root = new TrieNode('\0');
        }

        void insertUtils(TrieNode *root,string word){
            if(word.length() == 0)
            {
                root->isTerminal = true;
                return;
            }
            // assuming small letters only
            int index = word[0] - 'a';

            TrieNode *child;
            // present
            if(root->children[index] != NULL){
                child = root->children[index];
            }
            // absent
            else{
                child = new TrieNode(word[0]);
                root->children[index] = child;
                root->childCount++;
            }

            // recursion
            insertUtils(child, word.substr(1));
        }

        void insertWord(string word){
            insertUtils(root, word);
        }

        int searchUtils(TrieNode *root,string word){
            if(word.length() == 0){
                if(root->isTerminal == true)
                    return 1;
                return 0;
            }

            int index = word[0] - 'a';
            TrieNode *child;
            if(root->children[index] != NULL){
                child = root->children[index];
            }
            else{
                child = new TrieNode(word[0]);
                root->children[index] = child;
            }
            searchUtils(child, word.substr(1));
        }

        int searchWord(string word){
            return searchUtils(root, word);
        }

        void deleteUtils(TrieNode *root,string word){
            if(word.length() == 0){
                root->isTerminal = false;
                return;
            }
            int index = word[0] - 'a';
            TrieNode *child;
            if(root->children[index] == NULL){
                return;
            }
            else{
                child = root->children[index];
            }
            deleteUtils(child, word.substr(1));
        }

        void deleteWord(string word){
            deleteUtils(root, word);
        }

        // Longest common prefix
        void prefixUtils(string &ans,TrieNode *root,string word){
            for (int i = 0; i < word.size(); i++){
                char ch = word[i];
                int index = ch - 'a';
                if(root->childCount == 1){
                    ans.push_back(ch);
                    root = root->children[index];
                }
                else{
                    cout << ans;
                    break;
                }
                if (root->childCount == 0)
                {
                    cout << ans;
                    return;
                }
            }
        }
        void prefixLength(string &ans,string word){
            prefixUtils(ans, root, word);
        }
};

int main()
  {
        Trie *t = new Trie();
        t->insertWord("apc");
        t->insertWord("apple");
        t->insertWord("accenture");
        
        cout << "PRESENT OR NOT : " << t->searchWord("abc") << endl;
        t->deleteWord("abc");
        cout << "PRESENT OR NOT : " << t->searchWord("abc") << endl;
        string ans = "";
        t->prefixLength(ans,"abc");
        return 0;
  }