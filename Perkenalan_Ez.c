#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_INPUT 100
void Problem(int *key);
void takeInput(char value[MAX_INPUT]);
void floatAnswer(char value[MAX_INPUT]);
void intAnswer(char value[MAX_INPUT]);
void stringAnswer(char value[MAX_INPUT]);
void unknownAnswer(char value[MAX_INPUT]);

int getRandom();
char pass_1[MAX_INPUT] = "";
char pass_2[MAX_INPUT] = "";
char pass_3[MAX_INPUT] = "";
char pass_4[MAX_INPUT] = "";
char pass_5[MAX_INPUT] = "";
char pass_6[MAX_INPUT] = "";
char pass_7[MAX_INPUT] = "";
char pass_8[MAX_INPUT] = "";
char pass_9[MAX_INPUT] = "";
char pass_0[MAX_INPUT] = "";
#define INT_FORMAT "%d"
#define FLOAT_FORMAT "%f"
#define DOUBLE_FORMAT "%lf"

#define CONVERT(FORMAT, VARIABLE, LOCATION) \
  sprintf(LOCATION, FORMAT, VARIABLE);

////Ju5t s0me bas1c stuff, n0thing to look 'ere
/*
#############################################
#############################################
##############   WELCOME TO   ###############
###############    LockGame  ###############
################    by Lock_RR   ###########
#############################################
#############################################
*/

int main()
{

  runLoop();

  return 0;
}

void Problem(int *key)
{
  /////!!!!!!!!!!!!!Solve this problem (hint, try run and see the output) !!!!!!!!!!!!!//////

  ///     YOU CAN ONLY CHANGE THIS CODE  ///
  int A = 43;
  float B = 33.0878;
  char C[] = "578346";
  char D = "d";
  char E[] = "Lock_RR";
  int F = 7772;
  int G[] = {43, 3, 4, 4};
  float H = 2.3442;
  float I = 43.01;
  int J = 543;
  CONVERT(INT_FORMAT, A, pass_1);
  CONVERT(INT_FORMAT, B, pass_2);
  CONVERT(INT_FORMAT, C, pass_3);
  CONVERT(INT_FORMAT, D, pass_7);
  CONVERT(INT_FORMAT, E, pass_5);
  CONVERT(INT_FORMAT, F, pass_4);
  CONVERT(INT_FORMAT, G, pass_8);
  CONVERT(INT_FORMAT, H, pass_6);
  CONVERT(INT_FORMAT, I, pass_0);
  CONVERT(INT_FORMAT, J, pass_9);

  takeInput(pass_1);
  takeInput(pass_2);
  takeInput(pass_3);
  takeInput(pass_4);
  takeInput(pass_5);
  takeInput(pass_6);
  takeInput(pass_7);
  takeInput(pass_8);
  takeInput(pass_9);
  takeInput(pass_0);
  *key += 6;
  printf("\n");
  getchar();
  ///@!@@!@@!@!@!@!@!@!@!@!@!@!@!@@!@!@!@!@!@!@///
}

void takeInput(char value[MAX_INPUT])
{
  // To store numeric value of input if a
  // number (float or integer)
  double temp;

  // To store integral value of input
  int n;

  // To store string value of input
  char str[MAX_INPUT] = "";

  // Precision for integer checking
  double val = 1e-12;

  // fgets(value, 100, stdin); // Read input

  // Check for integers.
  if (sscanf(value, "%lf", &temp) == 1)
  {
    n = (int)temp; // typecast to int.
    if (fabs(temp - n) / temp > val)
      floatAnswer(value);
    else
      intAnswer(value);
  }

  // Check for string
  else if (sscanf(value, "%s", str) == 1)
    stringAnswer(value);

  else                    // No match.
    unknownAnswer(value); // process 3 if not recognized
}

void floatAnswer(char value[MAX_INPUT])
{
  switch (getRandom())
  {
  case 0:
    printf("Error: requires integer input, but recieves a type of float instead. At argument '%s'.\n ", value);
    break;
  case 1:
    printf("");
    break;
  case 2:
    printf("");
    break;
  case 3:
    printf("Error: can't accept float. At argument '%s'.\n ", value);
    break;
  default:
    printf(" ");
    break;
  }
}
void intAnswer(char value[MAX_INPUT])
{
  switch (getRandom())
  {
  case 0:
    printf("Error: requires float input, but recieves a type of integer instead. At argument '%s'.\n ", value);
    break;
  case 1:
    printf("Error: requires a type of int* input, but found a type of int instead. At argument '%s'.\n ", value);
    break;
  case 2:
    printf("");
    break;
  case 3:
    printf("Error: can't accept int. At argument '%s'.\n ", value);
    break;
  default:
    printf("");
    break;
  }
}
void stringAnswer(char value[MAX_INPUT])
{
  switch (getRandom())
  {
  case 0:
    printf("Error: requires integer input, but recieves a type of char[] instead. At argument '%s'.\n ", value);
    break;
  case 1:
    printf("");
    break;
  case 2:
    printf("Error: conflicting types for `unknownAnswer`; have char[] input. At argument '%s'.\n ", value);
    break;
  case 3:
    printf("Error: can't accept char[] for argument '%s'.\n ", value);
    break;
  default:
    printf("");
    break;
  }
}
void unknownAnswer(char value[MAX_INPUT])
{

  printf("Error: can't define type of '%s'.\n ", value);
}
int getRandom()
{
  int r = rand() % 5;
  return r;
}
void runLoop()
{
  int key = 5;
  printf("Testing answer..........\n");
  do
  {
    Problem(&key);
    key -= 6;
  } while (key > 0);
  printf("Run completed. 0 error found");
}