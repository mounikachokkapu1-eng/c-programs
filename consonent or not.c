// Online C compiler to run C program online
#include  <stdio.h>
void main()
{
    char ch;
    printf("Enter the charactere \n");
    scanf("%c",&ch);
    int res=!(ch>='A')||!(ch='E')||!(ch='I')||!(ch='O')||!(ch='U');
    printf("%c is a consonent i.e is :%d",ch,res);
}