#include "../Chapter 4/structNode.hpp"
#include "../Chapter 5/queue.hpp"
#include "../Chapter 5/stacks.hpp"
// a general tree
template <class T>
class Gtree{
    T id;
    Gtree<T>** children;
};
// an Nary tree
template <class T>
class Ntree : private Gtree<T>{
    public:
    Ntree(int N){
        if(N > 0)Gtree<T>::children = new Ntree*[N];
    }
};
//
// notice that binary trees are basically doubly linked lists
//

// inorder traversal of binary trees
template <class T>
void inorder(Bnode<T>* node, ostream& out = cout){
    if(!node)return;
    inorder(node->prev);
    displayD(node, out);
    inorder(node->next);
}
template <class T>
void inorder(Bnode<T>* node, fstream& ofs){
    if(!node)return;
    inorder(node->prev);
    displayDF(node, ofs);
    inorder(node->next);
}
template <class T>
void rev_inorder(Bnode<T>* node, ostream& os = cout){
    if(!node)return;
    inorder(node->next);
    displayD(node, os);
    inorder(node->prev);
}
template <class T>
void rev_inorder(Bnode<T>* node, fstream& ofs){
    if(!node)return;
    inorder(node->next);
    displayDF(node, ofs);
    inorder(node->prev);
}
// makes a Binary Search tree and returns the index of the root
template <class T>
int makeBST(Bnode<T>**& list, int size){
    if(!list || !list[0])return -1;
    int start = 1, add = 4;
    while(true){
        int index = start;
        while(index < size){
            list[index]->prev = list[index - add / 4];
            int rindex = index + add / 4;
            int counter = 0;
            while(true){
                if(rindex >= size){
                    if(rindex % 2 == 0)break;
                    counter++;
                    rindex -= add / (4 * (counter + 1));
                }
                else {
                    list[index]->next = list[rindex];
                    break;
                }
            }
            index += add;
        }
        start += add / 2;
        if(start >= size){
            return start - add / 2;
        }
        add *= 2;
    }
}
template <class T>
Bnode<T>* searchBST(Bnode<T>* tree, T key){
    return (tree ? (tree->id == key ? tree : (tree->id > key ? searchBST(tree->prev, key) : searchBST(tree->next, key))) : NULL);
}
template <class T>
Bnode<T>* sortedArrayToBST(Bnode<T>** list, int start, int end) {
    if (start > end) return nullptr;

    int mid = (start + end) / 2;
    Bnode<T>* root = list[mid];

    root->prev = sortedArrayToBST(list, start, mid - 1);
    root->next = sortedArrayToBST(list, mid + 1, end);

    return root;
}

template <class T>
Bnode<T>* A_BST(Bnode<T>** list, int size) {
    if (!list || size == 0) return nullptr;
    return sortedArrayToBST(list, 0, size - 1);
}
