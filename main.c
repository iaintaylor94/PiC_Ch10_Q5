// Program to find a string within a string

#include <stdio.h>
#include <string.h>

// Declare Function
int findString (const char [], const char []);

int main(void) {

  const char string1[] = "one two three four";
  const char string2[] = "three";
  const char string3[] = "seven";

  // Print string1
  printf ("string: %s\n", string1);

  // Find string2
  int location = findString (string2, string1);
  printf ("%s: %d\n", string2, location);

  // Find string3
  location = findString (string3, string1);
  printf ("%s: %d\n", string3, location);
  
  return 0;
}

// Define Functions
int findString (const char find[], const char within[]) {
  int location = -1;
  
  for (int i = 0; i < strlen(within); i++)
    for (int j = 0; j < strlen(find) || i + j < strlen(within); j++) {
      if (find[j] != within[i + j])
        break;
      location = i;
    }
  
  return location;
}