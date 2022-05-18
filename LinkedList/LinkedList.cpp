#include "LinkedList.h"
#include <iostream>

using namespace std;

// insets a character up front in our linked list
bool LinkedList::insertAtFront(char value)
{
    // makes a new node
    Node *temp = new Node;
    //writes new data into the new node and sets its pointer to the head pointer
    temp->data = value;
    temp->nextPtr = headPtr;

    //sets up the new head pointer
    headPtr = temp;
    //increases the size
    size++;
    // prints out the size
    cout << "Size is: " << size << endl;

    return true;

}//end insertAtPosition

//inserts a new node before the position picked by user
bool LinkedList::insertBeforePosition(char value, int index)
{
    //it works only if the users position is inside of the size and is bigger than one, it does not work with one
    if((size >= index) &&(index >1))
    {
        //makes a new node
        Node *old=new Node;
        //makes a current node
        Node *now;
        //makes a temporary node that can be replaced by what we have
        Node *temp=new Node;
        //sets up the current node equal to the headpointer, therefore letting the program go to the beginning of the list
        now=headPtr;
        //goes through the linked list until the desirable position
        for(int i=0;i<index-1;i++)
        {
            old=now;
            now=now->nextPtr;
        }//end of fore loop

        //inserts the new node into the linked list
        //makes the temporary node value eq to user input
        temp->data=value;
        //makes the old nodes next pointer point at the temporary node
        old->nextPtr=temp;
        //makes the temporary's nodes next pointer point at the position its supposed to be before
        temp->nextPtr=now;
        //increases the size
        size ++;
        //prints out the size
        cout << "Size is: " << size << endl;

        return true;
    }else
        {
            return false;
        }//end of else
}//end of insert before position

//insets user input in the back of the linked list
bool LinkedList::insertAtBack(char cha)
{
    //makes two more nodes newNode and temporary nde
    Node* t;
    Node* newNode = new Node;

    //makes the data of the new node equal to user input
    newNode->data = cha;
    //makes the next pointer of the new node equal to null, therefore making it last node
    newNode->nextPtr = nullptr;
    //if the list is not empty
    if(headPtr != nullptr)
    {
        //make the headpointer look at the temporary node
        t = headPtr;
        //goes the linked list until we hit the end with the temporary pointer
        while(t->nextPtr!= nullptr)
        {
            t=t->nextPtr;
        }
        //make temporary pointer point at the new node at the very end
        t->nextPtr = newNode;
        //make the size bigger
        size ++;
        //print out size
        cout << "Size is: " << size << endl;

        //if the linked list is empty
    } else
        {
            //make the head pointer point at the new node, therefore making it the first one
            headPtr = newNode;
            //make the size bigger
            size ++;
            //print out the size
            cout << "Size is: " << size << endl;
        }//end of else
    return true;
}//end of insert at back

//delets the first node in the linked list
bool LinkedList::deleteAtFront()
{
    //if the linked list is not empty
    if(headPtr!= nullptr)
    {
        //make a temporary node
        Node *temp = new Node;
        //make temporary nodes next pointer point at the headptr
        temp->nextPtr = headPtr;
        //make the temporary node point at the header pointer
        temp = temp->nextPtr;
        //prints out what data we are deleting from the linked list
        cout << "You are deleting: " << temp->data << endl;
        //make the headpointer point at the temporary nodes next pointer, making us skip the first node
                                    //removing the first element
        headPtr = temp->nextPtr;
        //delete the temporary node
        delete temp;
        //make size smaller
        size--;
        //print out the size
        cout << "Size is: " << size << endl;
        return true;
        //if the linked list is empty return false
    }else
        return false;
}//end of deleteFrom front

//delets the node at users position
bool LinkedList::deletePosition(int index)
{
    //if users position is 1 then we simply delete from the front and return true
    if(index == 1)
    {
        deleteAtFront();
        return true;
    }//end of if

    //if the user desired spot is between 1 and size, then delete there
    else if((size >= index) &&(index >1))
    {
        //makes a current and old node
        Node *now;
        Node *old = new Node;

        //put the current node at the beginning
        now = headPtr;
        //goes to the location desired by the user
        for(int i =0; i<index-1;i++)
        {
            //makes the old node equal new and updates the new node
            old = now;
            now = now->nextPtr;
        }
        //when the desirable position is reached, make the old's nods next pointer point at current nodes next pointer
                            //therefore making us skip the current node and removing it from the list
        old->nextPtr=now->nextPtr;
        //delete the current node at its location
        delete now;
        //make the size smaller
        size --;
        //print out the size
        cout << "Size is: " << size << endl;
        return true;

        //if the user input is outside of the linked list return false
    } else
        return false;
}//end of delete by position

//delets the last node in the linked list
bool LinkedList::deleteAtBack()
{
    //if the linked list is not empty
    if(headPtr != nullptr)
    {
        //make two nodes temporary and previous
        Node *t;
        Node *p;

        //put them both in the beginning
        t = headPtr;
        p = headPtr;

        //give the temporary node a start
        t=t->nextPtr;
        //untill temporary node reaches the limit keep moving along the linked list
        while(t->nextPtr!= nullptr)
        {
            t=t->nextPtr;
            p=p->nextPtr;
        }
        //when the end is reached delete the node with the head start
        delete t;
        //make the node without the head start point to nullptr, makin it the last node in the list
        p->nextPtr= nullptr;
        //make size smaller
        size --;
        //print out the size
        cout << "Size is: " << size << endl;
        return true;

        //if the linked list is empty, return false
    } else
    {
        return false;
    }
}//end of deletefromBack

//clears and deletes the whole linked list
void LinkedList::clear()
{
    //if size is bigger than 0
    if(size>0)
    {
        //and untill reached the end
    while(headPtr!= nullptr)
    {
        if(size == 1)
        {
            break;
        }
        //keep on deleting elements
        deleteAtBack();
    }
    //make the first pointer equal the nullptr, making it the first element in the linked list
    headPtr = nullptr;
    //make the size 0
    size --;
    //print out the size
    cout << "Size is: " << size << endl;
    }
}//end of clear