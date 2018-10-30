#include <stdio.h>
#include <string.h>

int main(void) {
  for (int i = 1; i <= 100; i++) {
  
    char output[9] = "";

    if (i % 3 == 0) strcat(output, "Fizz");
    if (i % 5 == 0) strcat(output, "Buzz");

    if (!strcmp(output, "")) sprintf(output, "%d", i);

    printf("%s\n", output);
    
  }
  return 0;
}