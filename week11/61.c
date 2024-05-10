void ReadArticle(FILE *f)
{
    char ch;
    while((ch=fgetc(f))!=EOF)
        putchar(ch);
}
