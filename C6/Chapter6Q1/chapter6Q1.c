#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int A = 0x60;
    unsigned int B = 0x13;
    unsigned int R;
    R=A&B;
    printf("A&B=%x\n",R);
    R = A||B;
    printf("A||B=%x\n",R);
    R=A^B;
    printf("A^B=%x\n",R);
    R=~A;
    printf("~A=%x\n",R);
    R=A<<2;
    printf("A<<2=%x\n",R);
    R=A>>2;
    printf("A>>2=%x\n",R);
    return(0);
}