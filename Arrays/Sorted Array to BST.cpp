#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

    
TreeNode* sortedArrayToBST(int nums[], int s, int e) {
    
    if(s > e){
        return NULL;
    }

    int mid = (s + e ) / 2;

    TreeNode* root = new TreeNode(nums[mid]);

    TreeNode* leftTree = sortedArrayToBST(nums, s, mid-1);

    TreeNode* rightTree = sortedArrayToBST(nums, mid+1, e);

    root->left = leftTree;
    root->right = rightTree;

    return root;
}

void print(TreeNode* root){
    if (root == NULL)
    return;

    queue<TreeNode*> q;

    q.push(root);

    while (q.empty() == false) {
    TreeNode* node = q.front();
    cout << node->data << " ";
    q.pop();

    if (node->left != NULL)
        q.push(node->left);

    if (node->right != NULL)
        q.push(node->right);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    TreeNode* root = sortedArrayToBST(arr, 0, n-1);
    print(root);
    return 0;
}