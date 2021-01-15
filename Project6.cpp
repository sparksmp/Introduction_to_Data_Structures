#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *left, *middle, *right;
};

class TernaryTree{
    private:
        Node *root;
        void insert_h(int, Node*);
        void traverse_h(Node*);
        int leaf_count_h(Node*);
        int degree_h(Node*);

    public:
        TernaryTree(){
            root = NULL;
        }
        void insert(int);
        void construct_tree(int a[], int n);
        void traverse_LMRW();
        int leaf_count();
        int degree_one_nodes_count();
};

void TernaryTree::insert_h(int value, Node *leaf){
    if(value < leaf -> data){
        if(leaf -> left != NULL)
            insert_h(value, leaf -> left);
        else {
            leaf -> left = new Node;
            leaf -> left -> data = value;
            leaf -> left -> left = NULL;
            leaf -> left -> middle = NULL;
            leaf -> left -> right = NULL;
        }
    }    
    else if(value == leaf -> data){
        if(leaf -> middle != NULL)
            insert_h(value, leaf -> middle);
        else{
            leaf -> middle = new Node;
            leaf -> middle -> data = value;
            leaf -> middle -> left = NULL;  
            leaf -> middle -> middle = NULL;
            leaf -> middle -> right = NULL;
        }
    }
    else if(value > leaf -> data){
        if(leaf -> right != NULL)
            insert_h(value, leaf -> right);
        else {
            leaf -> right = new Node;
            leaf -> right -> data = value;
            leaf -> right -> left = NULL;
            leaf -> right -> middle = NULL;  
            leaf -> right -> right= NULL;
    }
    }
}

void TernaryTree::insert(int value){
    if(root == NULL){
        root = new Node;
        root -> data = value;
        root -> left = NULL;
        root -> middle = NULL;
        root -> right = NULL;
    }
    else
        insert_h(value, root);
}

void TernaryTree::construct_tree(int A[], int n){
    for(int i = 0; i < n; i++){
        insert(A[i]);
    }     
}

void TernaryTree::traverse_h(Node *current){
    if(current != NULL){
        traverse_h(current -> left);
        traverse_h(current -> middle);
        traverse_h(current -> right);
        cout << current -> data << endl;
    }
}

void TernaryTree::traverse_LMRW(){
    traverse_h(root);
}

int TernaryTree::leaf_count_h(Node *current){
    static int count = 0;
    if(current != NULL){
        if((current -> left == NULL) and (current -> middle == NULL) and (current -> right == NULL))
            count += 1;
            leaf_count_h(current -> left);
            leaf_count_h(current -> middle);
            leaf_count_h(current -> right);
    }
    return count;
}

int TernaryTree::leaf_count(){
    return leaf_count_h(root);
}

int TernaryTree::degree_h(Node *current){
    static int count = 0;
    if(current != NULL){
        if((current -> left == NULL) and (current -> middle == NULL) and (current -> right != NULL))
            count += 1;
        else if((current -> left == NULL) and (current -> middle != NULL) and (current -> right == NULL))
            count += 1;
        else if((current -> left != NULL) and (current -> middle == NULL) and (current -> right == NULL))
            count += 1;
            degree_h(current -> left);
            degree_h(current -> middle);
            degree_h(current -> right);
    }
    return count;
}

int TernaryTree::degree_one_nodes_count(){
    return degree_h(root);
}



int main(){
    int A[14] = {7, 4, 2, 2, 3, 1, 8, 4, 0, 6, 5, 9, 4, 6};
    int n = sizeof(A)/sizeof(A[0]);
    TernaryTree T;
    T.construct_tree(A, n);
    T.traverse_LMRW();
    // 0 1 2 3 2 4 4 5 6 6 4 9 8 7
    cout << T.leaf_count() << endl;
    // 7
    cout << T.degree_one_nodes_count() << endl;
    // 3
    return 0;
}