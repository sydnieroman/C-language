// Program will encrypt and decrypt characters from user

#include<stdio.h>
void output(char *c, int size) 
{
  int index=0;
  while(index < size) 
  {
    printf("%c", c[index]);
    index++; 
  }

printf("\n");
  
}

int input(char* arr, int size){
int i=0;
while(i<size){
arr[i]=getchar();
if(arr[i]=='\n')return i;
i++;
  
}
return size;
  
}
void encrypt(char* arr, int size){
int i=0;
while(i<size){
arr[i]+=3;
i+=1;
}
  
}
void decrypt(char* arr, int size){
int i=0;
while(i<size){
arr[i]-=3;
i++;
}
  
}

int main(void)

{
  
  char arr[20];
  int size;
  printf("Enter unencrypted string:   "); size = input(arr, 20);
    encrypt(arr, size);           printf("Encrypted: ");
  output(arr, size);
  
  printf("Enter encrypted string:      "); size = input(arr, 20);
  decrypt(arr, size); printf("Decrypted: ");
  
  output(arr, size);
  return 0;
}