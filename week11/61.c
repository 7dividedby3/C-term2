void ReadArticle(FILE *f)
{
    char c;
    while((c=fgetc(f))!=EOF)
        putchar(c);
}
