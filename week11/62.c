void WriteArticle(FILE *f)
{
    char c;
    while((c=getchar())!=EOF)
        fputc(c,f);
}
