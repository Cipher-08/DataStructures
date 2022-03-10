#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
};
Node* insertNodeAtBeginning(Node* node, int x)
{
   Node* temp = new Node();
   temp->data = x;
   temp->link = node;

   return temp;

}

void linkedListTraversal(Node* ptr){
    while(ptr != NULL){
        cout<<ptr->data<<"  ";
        ptr = ptr->link;
    }
    cout<<"\n";
}
int main()
{
    
    //  Below is the code to create the head of LinkedList
    Node* head = NULL;
    Node* temp = new Node();
    temp->data = 54;
    temp->link = NULL;
    head = temp;
    cout<<"h";

    cout<<"How many element you want to add in the linked list?\n";
    int n;
    cin>>n;

    // Below for loop is for inserting some values in the beginning of the linked list
    for(int i = 0; i<n; i++){
    cout<<"Enter element number "<<i+1<<"\n";
    int num;
    cin>>num;
    head = insertNodeAtBeginning(head, num);
    }

    // Below statement is the function call to traverse and print the LinkedList
    linkedListTraversal(head);
    
    return 0;
}
