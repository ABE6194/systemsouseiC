#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[50];

    printf("Please Enter a Password \n");
    scanf("%49s", a);

    int result1 = 0;
    int result2 = 0 ;
    int result3 =0;
    int result4=0;
    int length = strlen(a);
    
    if(length>=8 && length<=16)
     {result4++;}
    for (int i = 0; i < length; i++)
      {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            result1++;
        }
        else if(a[i] >= 'a' && a[i] <= 'z')
        {
            result2++;
        }
        else{result3++;}
      }
    
    if (result1 > 0 && result2>0 && result3>0 && result4>0)
    {printf("条件を満たしています");}
    
    if(result1==0)
     {printf("大文字が含まれていません ");}
    if(result2==0)
     {printf("小文字が含まれていません ");}
    if(result3==0)
     {printf("その他の文字が含まれていません ");}
    if(result4==0)
     {printf("文字数が条件外です");}
    return 0;
    
}
