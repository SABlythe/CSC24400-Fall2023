#include "IntBinaryTree.hpp"

using namespace std;

IntBinaryTreeNode* findHelper(IntBinaryTreeNode *inSubTree, int valToFind)
{
    if (!inSubTree)
        return nullptr;

    if (inSubTree->data() == valToFind)
        return inSubTree;

    if (inSubTree->data() < valToFind)
        return findHelper(inSubTree->right(), valToFind);

    // must be in left subtree (or we would already have returned)
    return findHelper(inSubTree->left(), valToFind);
}

IntBinaryTreeNode*
IntBinaryTree:: find(int valToFind) const
{
    return findHelper(_root, valToFind);
}

// intoSubTree -- the subtree into which we want to insert
// returns : updated version of subtree
IntBinaryTreeNode* insertHelper(IntBinaryTreeNode *intoSubTree, int valToAdd)
{
    if (intoSubTree == nullptr) // empty tree!
    {
        IntBinaryTreeNode *newTree = new IntBinaryTreeNode(valToAdd);
        return newTree;
    }
    if (valToAdd < intoSubTree->data() )
    {
        // want to insert in left subtree
        IntBinaryTreeNode *newSubTree = insertHelper(intoSubTree->left(), valToAdd);
        intoSubTree->left() = newSubTree;
        newSubTree->parent() = intoSubTree;
        return intoSubTree;
    }
    else if (valToAdd > intoSubTree->data() )
    {
        // want to insert into right subtree
        IntBinaryTreeNode *newSubTree = insertHelper(intoSubTree->right(), valToAdd);
        intoSubTree->right() = newSubTree;
        newSubTree->parent() = intoSubTree;
        return intoSubTree;
    }
    else // == ... so already found in subtree!!
    {
        return intoSubTree;
    }

}



void
IntBinaryTree::insert(int newVal)
{
    _root=insertHelper(_root, newVal);
}




void
IntBinaryTree::remove(int existingVal)
{

}


void inOrderPrint(IntBinaryTreeNode *currNode, ostream &os)
{
    if (currNode==nullptr)
        return;

    inOrderPrint(currNode->right(), os);

    // indent the node properly to display as tree
    for (int indentCount=0; indentCount<currNode->depth(); indentCount++)
        os << "    ";
    currNode->print(os);
    os << endl;

    inOrderPrint(currNode->left(), os);
}

std::ostream&
IntBinaryTree::print(std::ostream &someStream) const
{
    inOrderPrint(_root, someStream);
    return someStream;
}







