#ifndef NODE_H
#define NODE_H

class Node
{
    private:
        int data;
        Node* link;

    public:
    Node(int val);
    int getData();
    void setData(int val);
    Node* getLink();
    void setLink(Node* next);
};

#endif