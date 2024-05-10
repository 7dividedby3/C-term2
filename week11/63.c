void WriteLetter(FILE *f)
{
    char c;
    while((c=getchar())!=EOF)
    {
        if(c>='a'&&c<='z')c-=32;
        fputc(c,f);
    }
}
