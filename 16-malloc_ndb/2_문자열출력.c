#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *pc=NULL;
    int i=0;
    pc=(char*)malloc(100*sizeof(char));
    if (pc==NULL){
        printf("�Ҵ����\n");
        exit(1);
    }
    for (i=0;i<26;i++){
        *(pc+i)='a'+i;
    }
    /*���1*/
    // *(pc+i)=0; //i=26 �������� 
    // printf("%s \n",pc);

    /*���2*/
    for (i=0;i<26;i++){
        // printf("%c",*(pc+i));
        printf("%c",pc[i]);
    }
    free(pc);
	return 0;
}