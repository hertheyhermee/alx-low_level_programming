#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_DIGITS 1000

void multiply(char* num1, char* num2);
void reverse(char* str);
int is_valid_number(char* str);

int main(int argc, char* argv[]) {
  if (argc != 3) {
    printf("Error\n");
    exit(98);
  }
  
  char* num1 = argv[1];
  char* num2 = argv[2];

  if (!is_valid_number(num1) || !is_valid_number(num2)) {
    printf("Error\n");
    exit(98);
  }

  multiply(num1, num2);

  return 0;
}

// Multiplies two positive numbers and prints the result
void multiply(char* num1, char* num2) {
  int len1 = strlen(num1);
  int len2 = strlen(num2);

  int* result = calloc(len1 + len2, sizeof(int));

  int i, j, k;

  for (i = len1 - 1; i >= 0; i--) {
    for (j = len2 - 1; j >= 0; j--) {
      int digit1 = num1[i] - '0';
      int digit2 = num2[j] - '0';
      int product = digit1 * digit2;

      int pos1 = i + j;
      int pos2 = i + j + 1;

      int sum = product + result[pos2];
      result[pos2] = sum % 10;
      result[pos1] += sum / 10;
    }
  }

  char* str_result = calloc(len1 + len2 + 1, sizeof(char));

  for (i = 0; i < len1 + len2; i++) {
    str_result[i] = result[i] + '0';
  }

  reverse(str_result);

  printf("%s\n", str_result);

  free(result);
  free(str_result);
}

// Reverses a string
void reverse(char* str) {
  int len = strlen(str);

  for (int i = 0; i < len / 2; i++) {
    char temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }
}

// Checks if a string represents a valid number
int is_valid_number(char* str) {
  int len = strlen(str);

  for (int i = 0; i < len; i++) {
    if (!isdigit(str[i])) {
      return 0;
    }
  }

  return 1;
}

