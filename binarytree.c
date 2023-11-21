#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* left;
struct Node* right;
};
struct Node* createNode(int data) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}
struct Node* constructTree(){
struct Node* root = createNode('A');
root->left = createNode('B');
root->right = createNode('C');
root->left->left = createNode('D');
root->left->right = createNode('E');
root->right->left = createNode('F');
root->right->right = createNode('G');
return root;
}
void inorderTraversal(struct Node* root){
if(root==NULL){
return;
}
inorderTraversal(root->left);
printf("%c ",root->data);
inorderTraversal(root->right);
}
void preorderTraversal(struct Node* root){
if(root==NULL){
return;
}
printf("%c ",root->data);
preorderTraversal(root->left);
preorderTraversal(root->right);
}
int main(){
struct Node* root = constructTree();
printf("inorder Traversal:\n");
inorderTraversal(root);
printf("\n");
printf("Preorder Traversal:\n");
preorderTraversal(root);
return 0;
