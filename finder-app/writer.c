#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>
int main(int argc,char *argv[]) {
  if (argc != 3){
    printf("Usage: ./writer file input_str");
    return 1;
}

  openlog("writer_c",LOG_PID,LOG_USER);

  char *file=argv[1];
  char *input_str=argv[2];
  FILE* fptr;
  fptr=fopen(file,"w+");

  if (fptr==NULL){
    syslog(LOG_ERR,"The file can't be created");
  }

  fprintf(fptr,"%s",input_str);

  syslog(LOG_INFO,"Writing %s to %s",input_str,file);

  fclose(fptr);
  closelog();
  return 0;
}
