#include <stdio.h>
//用法：将要输出的字符画复制粘贴到in.txt，之后双击replace_run.bat, 程序会自动在本程序所在文件夹中生成一份能够正确输出该字符画的代码，文件名是out.c
int main()
{
    char ch;
    printf("#include <stdio.h>\n\n"
           "int main()\n"
           "{\n"
           "\tprintf(\"");

    while((ch = getchar()) != EOF)
    {
        if(ch == '\\' || ch == '\'' || ch == '\"')
        {
            putchar('\\');
            putchar(ch);
        }
        else if(ch == '%')
        {
            printf("%%%%");
        }
        else if(ch == '\n')
        {
            printf("\\n\"\n\t\t\"");
        }
        else
        {
            putchar(ch);
        }
    }

    printf("\");\n"
           "\treturn 0;\n"
           "}\n");
    return 0;
}
