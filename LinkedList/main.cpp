#include <iostream>
#include "LinkedList.h"
using namespace std;


int main() {
    cout << "Hello welcome to the Linked List!" << endl;

    bool menu = true;
    int choice = 0;
    //makes the linked list
    LinkedList L;
    char var;
    int index;

    //while menu is true keep on running
    while(menu)
    {
        //prints out the menu options
        cout << " What would you like to do?" << endl;
        cout << " 1.Insert a value at the beginning" << endl;
        cout << " 2.Insert value before a position" << endl;
        cout << " 3.Insert a character in the back" << endl;
        cout << " 4.Delete at front" <<endl;
        cout << " 5.Delete at position" << endl;
        cout << " 6.Delete from the back" << endl;
        cout << " 7.Clear" << endl;
        cout << " 8.Print" << endl;
        cout << " 9.Exit" << endl;
        //lets the user input the choice inside the menu
        cin >> choice;
        //picks user's choice
        switch (choice)
        {
            case 1:
                    //if picked one, uses users input and inserts at the beginning of the linked list
                    cout << "What character would you like to be inserted at the beginning?" << endl;
                    cin >> var;
                    L.insertAtFront(var);
                    cout << endl ;
                break;
            case 2:
                    //if picked two then the user inputs what he wants to put into his linked list and
                                //also takes int the number, if the function returns true then everything went well
                    cout << "What character do you want to insert?" << endl;
                    cin >> var;

                    cout << "Which position would you like to be inserted before?" <<endl;
                    cin >> index;
                    if(L.insertBeforePosition(var,index))
                        cout << "completed successfully!"<<endl <<endl;
                    else
                        cout << "you chose a spot out of the list"<<endl<<endl;
                break;
            case 3:
                    //takes in user input and inserts a character at the end
                    cout << "What character would you like to be inserted at the end?" << endl;
                    cin >> var;
                    L.insertAtBack(var);
                    break;
            case 4:
                    //deletes a value in the front of the linked list, if successful then return true
                    if(L.deleteAtFront())
                        cout << "Deleted at front" << endl<<endl;
                    else
                    {
                        cout << "There is no front to delete" << endl<<endl;
                    }
                break;
            case 5:
                    //deletes a value at a position, takes in the users position, if successful returns true
                    cout << "What position do you want do delete?" << endl;
                    cin >> index;
                    if(L.deletePosition(index))
                        cout <<"Completed successfully" << endl << endl;
                    else
                    {
                        cout <<"Sorry we failed my master :(" << endl << endl;
                    }
                break;
            case 6:
                    //deletes the last element of the linked list if successful then returns true
                    cout <<"You chose to delete from the back" << endl;
                    if(L.deleteAtBack())
                        cout <<"You deleted it successfully" << endl <<endl;
                    else
                        cout <<"something failed" << endl << endl;
                break;
            case 7:
                    //clears the whole linked list
                    cout <<"You chose to clear" << endl;
                    L.clear();
                break;
            case 8:
                    //prints out the linked list using the overloaded operator
                cout << L;
                break;
            case 9:
                    //exits the program
                cout << "Thank You for using my linked list :)" << endl;
                menu = false;
                break;
                    //if the user inputs the wrong number choice then we go back to the top of the menu
            default:
                cout << "Wrong choice! try again!! "<< endl << endl;
        }//end of switch
    }//end of menu loop
    return 0;
}//end of main