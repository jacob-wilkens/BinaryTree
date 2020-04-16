class BinaryTree
{
    private:
        int payload;
        BinaryTree* leftChild;
        BinaryTree* rightChild;
    
    public:
        BinaryTree(int payload);
        void add(int payload);
        void displayInOrder(BinaryTree* tree);
        void displayPreOrder(BinaryTree* tree);
        void displayPostOrder(BinaryTree* tree);
};