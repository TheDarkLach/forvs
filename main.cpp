#include "dlist.h"


int main()
{
    node* head = NULL;

    dlist object;
    object.build();
    object.display();

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    object.reverse();

    object.display();

    return 0;
}
