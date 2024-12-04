class Solution {
    struct Node{
        int idx;
        map<char, Node*> child;
    };
    Node *root = new Node;

    void Insert(string& word,int index){
        Node* curr = root;
        for(int i=0;word[i];++i){
            if(!curr->child.count(word[i])){
                curr->child[word[i]] = new Node;
                curr->child[word[i]]->idx = index;
            }
            curr = curr->child[word[i]];
        }
    }
    int Search(string& word){
        Node* curr = root;
        for(int i=0;word[i];++i){
            if(!curr->child.count(word[i]))
                return -1;
            curr = curr->child[word[i]];
        }
        return curr->idx;
    }
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int idx = 1;
        for(int i=0; i<sentence.size(); i++){
            string w = "";
            while(i<sentence.size() && sentence[i] != ' '){
                w += sentence[i++];
            }
            Insert(w,idx);
            idx++;
        }
        return Search(searchWord);

    }
};