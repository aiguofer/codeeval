#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LINE_SIZE 1024
int main(int argc, char **argv)
{
  FILE *f;
  char line[LINE_SIZE], *p;
  int i,a,b,n;

  // Open file passed as argument
  if (argc < 2 || !(f = fopen(argv[1], "r"))) {
    fprintf(stderr, "Unable to open file argument\n");
    return 1;
  }

  // Read lines from file
  while (fgets(line, LINE_SIZE, f)) {
    // You may want to remove the trailing '\n'
    if ((p = strchr(line, '\n'))) { *p = '\0'; }

    // Skip empty lines
    if (line[0] == '\0') { continue; }

    // Do something with the line
    a=atoi(strtok(line, " "));
    b=atoi(strtok(NULL, " "));
    n=atoi(strtok(NULL, " "));
    
    for(i=1; i<=n; i++){
      if(i%a == 0 && i%b == 0) 
	printf("FB ");
      else if(i%a == 0) 
	printf("F ");
      else if(i%b == 0)
	printf("B ");
      else
	printf("%d ",i);
    }
    printf("\n"); 
  }

  // Paranoid check
  if (ferror(f)) {
    perror("I/O Error");
 p }

  return 0;
}
