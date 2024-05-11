#include <stdio.h>
#include <string.h>
int main()
{
    char s[114];
    char chk[7]="secret";
    gets(s);
    int word=0,ccheck=0;
    for(int i=0;i<strlen(s);i++)
    {
        int check=1;
        if((!word&&s[i]!=' ')||(word&&s[i-1]==' '&&s[i]!=' '))
            word++; //数单词

        if(i>0&&s[i-1]!=' ')  //开头是否为空格
            check=0;
        for(int j=0;j<6;j++)  //中间是否为空格
        {
            if(s[i+j]!=chk[j])
                check=0;
        }
        if(i+6<strlen(s)&&s[i+6]!=' ')  //结尾是否为空格
            check=0;
        
        if(check)
        {
            printf("\"secret\" is pos %d\n",word);
            ccheck++;
        }
    }
    if(!ccheck)
        printf("No \"secret\"",word);
}
