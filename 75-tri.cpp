struct Node
{
          Node *links[30];
      bool flag = false;

       bool containsKey(char ch)

            return (links[ch - 'a'] != NULL);

     Node *get(char ch)

           return links[ch - 'a'];

      void put(char ch, Node *node)

           links[ch - 'a'] = node;

      void setEnd()

            flag = true;

       bool isEnd()

            return flag;
};
class Trie
{
private:
    Node *root;

public:
   
    Trie()
    {
        root = new Node();
    }

   int count=0;

   
   
    void insert(string word)
    {
        Node *node = root;
        for (int i = 0; i < word.size(); i++)
        {
            if (!node->containsKey(word[i]))
            
                 node->put(word[i], new Node());
            
              node = node->get(word[i]);
             count++;
         }
         node->setEnd();
     }
     bool checkIfAllPrefixExists(string word)
     {
         Node *node = root;
         bool flag = true;
        int count =0;
        int s = 0;
        for (int i = 0; i < word.size(); i++)
        {
                 if (node->containsKey(word[i]))
             {
                  node = node->get(word[i]);
                  flag = flag & node->isEnd();
                 s = s+ 2-i;
            }
             else
             {
                          return false;
             }
         }
           return flag;
    }
};



string completeString(int n, vector<string> &a)
{
       Trie *obj = new Trie();
       int ss =0;
       for (auto word : a)
           obj->insert(word);
       string longest = "";
      int ptr =0;
     for (auto word : a)
     {
          if (obj->checkIfAllPrefixExists(word))
        {
            if (word.size() > longest.size())
            
                longest = word;
            
            else if (word.size() == longest.size() && word < longest)
            
                longest = word;
            ptr++;
        }
    }



    if (longest == "")
        return "None";
    return longest;
}
