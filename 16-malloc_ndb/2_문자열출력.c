#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *pc=NULL;
    int i=0;
    pc=(char*)malloc(100*sizeof(char));
    if (pc==NULL){
        printf("할당실패\n");
        exit(1);
    }
    for (i=0;i<26;i++){
        *(pc+i)='a'+i;
    }
    /*방법1*/
    // *(pc+i)=0; //i=26 마지막에 
    // printf("%s \n",pc);

    /*방법2*/
    for (i=0;i<26;i++){
        // printf("%c",*(pc+i));
        printf("%c",pc[i]);
    }
    free(pc);
	return 0;
}