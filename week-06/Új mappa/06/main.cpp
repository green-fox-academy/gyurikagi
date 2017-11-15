#include <iostream>
#include <vector>

using namespace std;

// Create a linked list using classes.
// If you are not similar whit linked lists look it up on the internet.
// Feel free to walk through some tutorials, get familiar with your implementation.

class LinkedList{

    struct Node{
        int num;
        Node *next;
    };
private: Node *head;
public:
    LinkedList(){
     head = NULL;
    }

    void addValue (int val){
        Node *n = new Node();
        n->num = val;
        n->next = head;
        head = n;
    }

    int popValue(){
        Node *n = head;
        int ret = n->num;
        head = head->next;
        delete n;
        return ret;
    }
};

int main()
{
    LinkedList lst;
    lst.addValue(5);
    lst.addValue(10);
    lst.addValue(20);

    for (int i = 0; i < 3; i++){
         cout <<lst.popValue() << endl;
    }


    return 0;
}
