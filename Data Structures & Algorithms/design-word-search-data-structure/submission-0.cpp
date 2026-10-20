class Node {
    public:
    Node* next[26]={0};
    bool end = false;
};

class WordDictionary {
    Node* root;

    bool search(string &word, int j, Node* root) {
        if(j==word.size())
            return root->end;
        if(word[j]=='.') {
            for(int i=0; i<26; i++){
                if(root->next[i] && search(word,j+1,root->next[i]))
                    return true;
            }
            return false;
        }
        int t = word[j] - 'a';
        if(root->next[t])
            return search(word,j+1,root->next[t]);
        return false;
    }

public:
    WordDictionary() {
        root = new Node();
    }
    
    void addWord(string word) {
        Node *head = root;
        for(char c : word) {
            int t = c - 'a';
            if(!(head->next)[t])
                (head->next)[t] = new Node();
            head = (head->next)[t];
        }
        head->end = true;        
    }
    
    bool search(string word) {
        return search(word,0,root);
    }
};
