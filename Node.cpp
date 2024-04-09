#include "Node.h"

Node::Node(int val)
{
    data = val;
    link = nullptr;
}

int Node::getData()
{
    return data;
}

void Node::setData(int val)
{
    data = val;
}

Node* Node::getLink()
{
    return link;
}

void Node::setLink(Node* next)
{
    link = next;
}   