#include <iostream>
#include <string>
using namespace std;

class Node
{
    public:
    int noMhs;
    Node *next;
    Node *prev;
};

class DoubleLinkedList
{
    private:
    Node *START;

    public:
    DoubleLinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "\nEnter the roll number of the student: ";
        cin >> nim;

        //step 1: Allocate memory for new node
        Node * newNode = new Node();

        //step 2: Assign value to the data fields
        newNode->noMhs = nim;

        //step 3: Insert at beginning if list is empty or nim is smallest
        if (START == NULL || nim <= START->noMhs)
        {
            if (START != NULL && nim == START->noMhs)
            {
                cout << "\nDuplicate number not allowed" << endl;
                return;
            }
            //step 4: newNode.next = START
            newNode->next = START;

            //step 5: START.prev = newNode (if START exists)
            if (START != NULL)
            START->prev = newNode;

            //step 6: newNode,prev = NULL
            newNode->prev == NULL;

            //step 7: START =newNode
            START = newNode;
            return;
        }

        //insert in between node
        //step 8: Locate position for inserttion
        Node *Current = START;
        while (Current->next != NULL && Current->next->noMhs < nim)
        {
            Current = Current->next;

        }
         
        if (Current->next != NULL && nim == Current->next->noMhs)
        {
            cout << "\nDuplicate roll number not allowed" <<endl;
            return;
        }

        //step 9: Insert between current and current->next
        newNode->next = Current->next;    //step 9a: newNode.next = current.next
        newNode->prev = Current;          //step 9b: newNode.prev = current

        //insert last node
        if(Current->next != NULL)
        Current->next->prev = newNode;  //step 9c: curremt.next.prev = newNode
        Current->next = newNode;        //step 9d: curremt.next = newNode

    }

    void hapus()
    {
        if (START == NULL)
        {
            cout << "\nList is empty" <<endl;
            return;
        }

        cout << "\nMasukkan NIM yang akan didalete";
        int rollNo;
        cin >> rollNo;

        Node *current = START;

        //Step 1: Tranverse the list to find the node
        while(current != NULL && current->noMhs != rollNo)
        {
            current = current->next;
        }

        if (current == NULL)
        {
            cout << "Record not found" << endl;
            return;
        }

        //step 2: If node is at the beginning
        if (current == START)
        {
            START =current->next; //step 2a: START = START.next
            if (START != NULL)
            {
                START->prev = NULL; //step 2b: START.prev = NULL
            }
        }

        else
        {
            //step 3: Link previos node to next of current
            current->prev->next = current->next;

            //step 4: if current is not the last node
            if (current->next != NULL)
            current->next->prev = current->prev;


        // Step 5: Delete the node
        delete current;
        cout << "Record with roll number " << rollNo << " deleted" << endl;
  }

void traverse() 
{
    if (START == NULL)
         {
            cout << "\nList is empty" << endl;
            return;
         }

         // Step 1: Mark first node as currentNode
         Node *currentNode = START;

         // Step 2: Repeat until currentNode == NULL
         cout << "\nRecords in ascending order of roll number are:\n";
         int i = 0;
         while (currentNode != NULL)
         {


             cout << i + 1 << ". " << currentNode->noMhs << " " << endl;

             // Step 3: Move to next node 
             currentNode = currentNode->next;
             i++;
         }
}


    void revtraverse()
    {
        if (START == NULL)
        {
            Cout << "\nList is empty" << endl;
            return;
        }
        
        // Step 1: Move to last node
        Node *currentNode = START;
        int i = 0;
        while (currentNode->next != NULL)
        {
            currentNode = currentNode->next;
            i++;
        }
        
        // Step 2: Traverse backward
        cout << "\nRecords in descending order of roll number are:\n";
        while (currentNoden != NULL)
        {
            cout << i + 1 << "." << currentNode->noMhs << " " << endl;

            //step 3: Move to text node
            currentNode = currentNode->next;
            i++;
        }
   }

   void revtraverse()
   {
        if (START == NULL)
        {
            cout << "\nList is empty" << endl;
            return;
        }
        
        // Step 1: Move to last node
        Node *currentNode = START;
        int i = 0;
        while (currentNode->next != NULL)
        { 
            currentNode = currentNode->next;
            i++;
        }

        // Step 2: Traverse backward
        cout << "\nRecords in descending order of roll number are:\n";
        while (currentNode != NULL)
        {
            cout << i + 1 << ". " << currentNode->noMhs << " " << endl;

            // Step 3: Move to previous node
            currentNode = currentNode->prev;
            i--;
        }
   }
   
   void searchData()
   {
        if (START == NULL)
        {
            cout << "\nList is empty" << endl;
            return;
        }
        
        int rollNo;
        cout << "\nEnter the roll number to search: ";
        cin >> rollNo;

        Node *current = START;

        // Step 1: Traverse to find matching roll number 
        while (current != NULL && current->noMhs != rollNo)
            current = current->next;
        
        // Step 2: Output result
        if (current == NULL)    
        {
            cout << "Record not found\n";
        }
        else
        {
            cout << "Record found\n";
            cout << "Roll Number: " << current->noMhs << endl;
        }
   }
};

int main()
{
    DoubleLinkedList list;
    char choice;

    do

    {

        cout << "\nMenu:\n";
        cout << "1. Add Record\n";
        cout << "2. Delete Record\n";
        cout << "3. View Ascending\n";
        cout << "4. View Descending\n";
        cout << "5. Search Record\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
        
    
    
    
}
         
        }    
        }


        }
        

    

        }
   }
    }
        

    
         }





          
         
    }


        }
    }


}
