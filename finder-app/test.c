#include <stdio.h>

#include <string.h>
#include <stdlib.h>


int main(int argc,char *argv[]) {

    if (argc!=3){
      printf("usage ./testc <string>, <string>");
      return 1;
}
    char *str1=argv[1];
    char *str2=argv[2];

    printf("%s %s",str1,str2);


    return 0;

}
