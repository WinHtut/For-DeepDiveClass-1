#include <stdio.h>



int main() {

    int normalVariable;
    int *firstPtr;
    int **secondPtr;

    int ***thirdPtr;

    normalVariable=95;

    firstPtr = &normalVariable;

    secondPtr=&firstPtr;


    thirdPtr = &secondPtr;

    printf("1: Address and value %x: -> %d\n",&normalVariable , normalVariable);

    printf("2: Address of First pointer :-> %x\n",&firstPtr);

    printf("3: Second pointer pointing to:-> %x\n",secondPtr);

    printf("4: Address of second pointer :->%x\n",&secondPtr);


    printf("4: Address of second pointer :->%x\n",&thirdPtr);

    printf(" size of pointer to pointer %d\n",sizeof (secondPtr));

    printf(" size of pointer to pointer %d\n",sizeof (thirdPtr));
}
