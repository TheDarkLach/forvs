#include "dlist.h"

dlist::dlist() {
  head = NULL;
  tail = NULL;
}

dlist::~dlist() {
  while (head != NULL) {
    node* temp = head;
    head = head->next;
    delete temp;
  }
}

void dlist::build() {
  srand((unsigned)time(0));
  node* current = new node();
  current->data = (rand()%10 + 1);
  head = current;
  current->previous = NULL;
  node* previous = current;
  int additionalValues = (rand()&5);
  for (int a = 0; a < 15+additionalValues; a++) {
    current = new node();
    previous->next = current;
    current->previous = previous;
    current->data = (rand()%10 + 1);
    previous = current;
  }
  tail = current;
  current->next = NULL;
}

void dlist::display() {
  node* current = head;
  while (current != NULL) {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}

void dlist::removefl()
{
  node* temp = head;
  node* temp2 = tail;
  //remove first and last

  //base case
  if(temp != head && temp2 != tail)
  {
    //this if should mean they were deleted but temp is still set to head and tail above so during recursion im fucked
    
  }
  else
  {
    //see idk if i can do this in one 



    //recursion
    removefl();
  }
}
