#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
  char *comm;
  char *s[256];
  printf("What do you command?\n");
  comm = (char*)malloc(sizeof(char *));
  fgets(comm, 255, stdin);
  int i = 0;
  char *temp;
  temp = strstr(comm,"\n");
  int index;
  index = temp - comm;
  // printf("Temp is %d:\n",temp);
  // printf("Index is %d:\n",index);
  comm[index] = 0;
  while (comm){
    //printf("loop\n");
    //printf("%s",comm);

    s[i]=strsep(&comm, " ");
    //printf("s[%d] : %s\n",i,s[i]);
    i++;
  }
  
  s[i] = NULL;
  execvp(s[0], s);
  return 0;
}
