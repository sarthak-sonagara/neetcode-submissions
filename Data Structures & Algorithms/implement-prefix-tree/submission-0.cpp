class Node {
    public:
    Node* next[26]={0};
    bool end;
};

class PrefixTree {
    Node* root;

public:
    PrefixTree() {
        root = new Node();
    }
    
    void insert(string word) {
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
        Node *head = root;
        for(char c : word) {
            int t = c - 'a';
            if((head->next)[t])
                head = (head->next)[t];
            else
                return false;
        }
        return head->end;
    }
    
    bool startsWith(string prefix) {
        Node *head = root;
        for(char c : prefix) {
            int t = c - 'a';
            if((head->next)[t])
                head = (head->next)[t];
            else
                return false;
        }
        return true;
    }
};
