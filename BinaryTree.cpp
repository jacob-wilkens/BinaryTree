#include "BinaryTree.hpp"
#include "iostream"

using namespace std;

BinaryTree::BinaryTree(int payload)
{
    this->payload = payload;
    this->leftChild = 0;
    this->rightChild = 0;
}

void BinaryTree::displayInOrder(BinaryTree* tree)
{
    if(tree != 0){
        this->leftChild->displayInOrder(this->leftChild);
        cout << this->payload << " ";
        this->rightChild->displayInOrder(this->rightChild);
    }
}
        
void BinaryTree::displayPreOrder(BinaryTree* tree)
{
    if(tree != 0){
        cout << this->payload << " ";
        this->leftChild->displayPreOrder(this->leftChild);
        this->rightChild->displayPreOrder(this->rightChild);
    }
}

void BinaryTree::displayPostOrder(BinaryTree* tree)
{
    if(tree != 0){
        this->leftChild->displayPostOrder(this->leftChild);
        this->rightChild->displayPostOrder(this->rightChild);
        cout << this->payload << " ";
    }
}

void BinaryTree::add(int payload)
{
    if(payload <= this->payload)
    {
        //should go to my left
        if(!this->leftChild)
        {
            this->leftChild = new BinaryTree(payload);
        }
        else
        {
            this->leftChild->add(payload);
        }
    }
    else
    {
        //should go to my right
        if(!this->rightChild)
        {
            this->rightChild = new BinaryTree(payload);
        }
        else
        {
            this->rightChild->add(payload);
        } 
    } 
}