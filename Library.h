#include <iostream>
using namespace std;

class Node
{
    public:
    string data; 
    Node *next;

    Node(): data(0), next(nullptr) {} //if nothing, point next to null
    Node(string data): data(data), next(nullptr) {} //if integer in parameters, store data and next points to null
    Node(string data, Node *next): data(data), next(next) {}
};

class Library //basically a linkedlist
{
    private:
    Node *head;
    Node *tail;
    public:
    Library(): head(nullptr), tail(nullptr) {} //default .. points the head and tail to null
    ~Library(); 
    
    void append(string data);
    void prepend(string data);
    bool search(string data);
    bool remove(string data);
    void display(ostream &os);
    friend ostream &operator<<(ostream &os, Library &right);

};
