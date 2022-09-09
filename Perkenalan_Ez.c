#include <stdio.h> ////Ju5t s0me bas1c stuff, n0thing to look 'ere
void BolehDiubah(int *key);
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
  int key = 5;
  BolehDiubah(&key);
  printf("\n\n\n");

  return 0;
}
/////!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//////

///     BOLEH UBAH CODE DISINI   ///

void BolehDiubah(int *key)
{
  int opsi;

  if (*key > 0)
  {
    *key -= 1;
    printf("%d\n", *key);
    BolehDiubah(key);
  }
}

///@!@@!@@!@!@!@!@!@!@!@!@!@!@!@@!@!@!@!@!@!@///

char terjemahkanASCII(int num)
{
  char numInChar;
  numInChar = (char)num;
  return numInChar;
}