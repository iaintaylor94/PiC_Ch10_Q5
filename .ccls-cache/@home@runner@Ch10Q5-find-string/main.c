// Program to find a string within a string

#include <stdio.h>
#include <string.h>

// Declare Function
int findString (const char [], const char []);

int main(void) {

  const char string1[] = "one two three four";
  const char string2[] = "three";
  const char string3[] = "seven";
  const char string4[] = "one";
  const char string5[] = "two";
  const char string6[] = "four";

  // Print string1
  printf ("string: %s\n", string1);

  // Find string2
  int location = findString (string2, string1);
  printf ("%s: %d\n\n", string2, location);

  // Find string3
  location = findString (string3, string1);
  printf ("%s: %d\n\n", string3, location);

  // Find string4
  location = findString (string4, string1);
  printf ("%s: %d\n\n", string4, location);

  // Find string5
  location = findString (string5, string1);
  printf ("%s: %d\n\n", string5, location);

  // Find string5
  location = findString (string6, string1);
  printf ("%s: %d\n\n", string6, location);
  
  return 0;
}

// Define Functions
int findString (const char find[], const char within[]) {
  int location = -1;
  int i, j;

  printf ("%s\n", find);
  for (i = 0; i < strlen(within); i++) {
    printf ("%2d: ", i);
    for (j = 0; j < strlen(find); j++) {
      printf ("%c", within[i + j]);
      if (find[j] != within[i + j])
        break;
    }
    if (j == strlen(find))
      location = i;
    printf ("\n");
  }
  return location;
}