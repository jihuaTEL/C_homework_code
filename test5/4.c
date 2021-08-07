#include<stdio.h>
int main()
{
    char password[100]="Svool Dliow!",a;
    printf("解密前 psaaword=\"%s\"\n",password);
    for (int i = 0;password[i]!='\0'; i++)
    {
        if (password[i]>='a'&&password[i]<='z')
        {
            password[i]=219-password[i];
        }
        else if (password[i]>='A'&&password[i]<='Z')
        {
            password[i]=155-password[i];
        }
    }
    printf("解密后 psaaword=\"%s\"\n",password);
    return 0;
}