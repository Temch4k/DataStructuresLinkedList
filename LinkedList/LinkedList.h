#include<iostream>
using namespace std;

//this file was borrowed from canvas

//this is the node that makes up the linked list
struct Node
{
    //the data it contains
	char data = 0;
	//its pointer that points to the next node, or null if its last
	Node* nextPtr = nullptr;
};
class LinkedList
{
private:
    //the first pointer of the linked list
	Node *headPtr;
public:
    //default constructor, setting the class's first pointer equal to nullptr
	LinkedList()
	{
		headPtr = nullptr;
	};
    //destructor of the class
	~LinkedList(){delete headPtr;           //Matthew Nguyen helped with this
	}
	//keeps track of the size of the linked list
    int size = 0;

	//inserts user's value in the first spot in linked list
	bool insertAtFront(char value);
	//insets users value in a position picked by the user
	bool insertBeforePosition(char value, int index);
    //inserts users input at the end of the linked list
	bool insertAtBack(char value);
	//deletes the first linked list item
	bool deleteAtFront();
	//deletes by position
	bool deletePosition(int index);
	//remove the last node of the linked list
	bool deleteAtBack();

	void clear(); //frees memory for entire list
	//lets the user print out the values inside of the linked list
	friend ostream& operator << (ostream &out, LinkedList &list)
    {
	    //makes new node
        Node *node;
        //puts the node in the beginning
        node=list.headPtr;
        out << "Your list is: ";
        //keep on going through thr linked list and print out items one by one
        while(node!= nullptr)
        {
            out<< node->data <<" ";
            node= node->nextPtr;
        }
        //print out the size
        out << endl << "Size is: " << list.size << endl;
    }
};
