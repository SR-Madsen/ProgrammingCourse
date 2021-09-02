#include "binarysearchtree.h"
#include <iostream>

BinarySearchTree::BinarySearchTree()
{
    root = nullptr;
}

TreeNode BinarySearchTree::getRoot()
{
    return *root;
}

void BinarySearchTree::treeWalk(TreeNode *Node)
{
    if (Node != nullptr)
    {
        treeWalk(Node->left);
        std::cout << "Key: " << Node->key << std::endl;
        treeWalk(Node->right);
    }
}

TreeNode BinarySearchTree::treeSearch(TreeNode *Node, int key)
{
    while (Node != nullptr && key != Node->key)
    {
        if (key < Node->key)
        {
            Node = Node->left;
        }
        else
        {
            Node = Node->right;
        }
    }
    return *Node;
}

TreeNode BinarySearchTree::treeMinimum(TreeNode *Node)
{
    while (Node->left != nullptr)
        Node = Node->left;
    return *Node;
}

TreeNode BinarySearchTree::treeMaximum(TreeNode *Node)
{
    while (Node->right != nullptr)
        Node = Node->right;
    return *Node;
}

TreeNode BinarySearchTree::treeSuccessor(TreeNode *Node)
{
    if (Node->right != nullptr)
        return treeMinimum(Node->right);
    TreeNode *tempNode = new TreeNode;
    tempNode = Node->parent;
    while (tempNode != nullptr && Node == tempNode->right)
    {
        Node = tempNode;
        tempNode = tempNode->parent;
    }
    return *tempNode;
}

TreeNode BinarySearchTree::treePredecessor(TreeNode *Node)
{
    if (Node->left != nullptr)
        return treeMaximum(Node->left);
    TreeNode *tempNode = new TreeNode;
    tempNode = Node->parent;
    while (tempNode != nullptr && Node == tempNode->left)
    {
        Node = tempNode;
        tempNode = tempNode->parent;
    }
    return *tempNode;
}

void BinarySearchTree::insertNode(BinarySearchTree T, TreeNode *z)
{
    TreeNode *NodeY = nullptr;
    *NodeY = treeSuccessor(z);
    TreeNode *NodeX = T.root;

    while (NodeX != nullptr)
    {
        NodeY = NodeX;
        if (z->key < NodeX->key)
        {
            NodeX = NodeX->left;
        }
        else
        {
            NodeX = NodeX->right;
        }
    }

    z->parent = NodeY;

    if (NodeY == nullptr)
    {
        T.root = z;
    }
    else
    {
        if (z->key < NodeY->key)
        {
            NodeY->left = z;
        }
        else
        {
            NodeY->right = z;
        }
    }

}

TreeNode BinarySearchTree::removeNode(BinarySearchTree T, TreeNode *z)
{
    TreeNode *NodeX = nullptr, *NodeY = nullptr;

    if (z->left == nullptr || z->right == nullptr)
    {
        NodeY = z;
    }
    else
    {
        *NodeY = treeSuccessor(z);
    }

    if (NodeY->left != nullptr)
    {
        NodeX = NodeY->left;
    }
    else
    {
        NodeX = NodeY->right;
    }

    if (NodeX != nullptr)
    {
        NodeX->parent = NodeY->parent;
    }

    if (NodeY->parent == nullptr)
    {
        T.root = NodeX;
    }
    else
    {
        if (NodeY == NodeY->parent->left)
        {
            NodeY->parent->left = NodeX;
        }
        else
        {
            NodeY->parent->right = NodeX;
        }

    }

    if (NodeY != z)
    {
        z->key = NodeY->key;
    }

    return *NodeY;
}
