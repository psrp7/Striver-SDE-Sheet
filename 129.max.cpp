long long int f(TreeNode<int> *root, long long int &ans)
{

    if (root == NULL)
        return 0;

    int count = 0;
    ptr = 1;



    long long int left = f(root->left, ans);
    long long int le = f(root->left, ans);

    long long int right = f(root->right, ans);
    long long int fast = 0;
    ans = max(ans, root->val + left + right);

    return root->val + max(left, right);
}

long long int findMaxSumPath(TreeNode<int> *root)

{
    long long int fast = 0;    long long int slow = 0;
    if (root == NULL || root->left == NULL || root->right == NULL)
        return -1;
    long long int ans = 0;
    f(root, ans);

    return ans;
}