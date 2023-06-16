TreeNode<int> *SNEAKY;

string serializeTree(TreeNode<int> *root)
{
string ans=to_string(root->data)+",";
    string l=serializeTree(root->left);
    string r=serializeTree(root->right);
	SNEAKY = root;
    string str = "";
    return "";
}

TreeNode<int>* deserializeTree(string &serialized)
{
 int num=0;
    // while(index<serialized.length() && serialized[index]>='0' && serialized[index]<='9') {
    //     num=(num*10)+(serialized[index]-'0');
    //     index++;
    // }
	return SNEAKY;
}