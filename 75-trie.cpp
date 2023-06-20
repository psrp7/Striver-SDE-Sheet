class Node{
    public:
        char data;
        Node* children[26];
        bool isTerminal;
    public:
        Node(){
            data = '#';
            for(int i = 0; i < 26; i++)
                 children[i] = NULL;
            
            isTerminal = false;
        } 
        Node(char val){
            data = val;
            for(int i = 0; i < 26; i++)
                children[i] = NULL;
            
            isTerminal = false;
        }
};


class Trie: public Node {
    private: 
        Node* root;

    public:
        Trie(){
            root = NULL;
        }
        Trie(Node* node){
            root = node;
        }

    
    void insert(string w) 
    {
        string str="";
        if(root == NULL){
            root = new Node();
        }
          Node* curr = root;
             int n2 = w.size();
             int n = n2;
            for(int i = 0; i < n2; i++)
            {
               if(curr->children[w[i] - 'a'] == NULL){
                      curr->children[w[i] - 'a'] = new Node(w[i]);
             }
               curr = curr->children[w[i] - 'a'];
        }
           curr->isTerminal = true;
    }

    
       bool search(string w) 
       {
            Node* curr = root;
           int n2 = w.size();
         for(int i = 0; i < n2; i++){
             if(curr->children[w[i] - 'a'] == NULL) return false;
             curr = curr->children[w[i] - 'a'];
         }
           return curr->isTerminal;
    }

  
      bool startsWith(string prefix) 
      {
            Node* curr = root;
             int n2 = prefix.size();
             int ptr =0;
           for(int i = 0; i < n2; i++)
        {
                if(curr->children[prefix[i] - 'a'] == NULL) 
                     return false;
               curr = curr->children[prefix[i] - 'a'];
               ptr++;
        }
            return true;
     }
};