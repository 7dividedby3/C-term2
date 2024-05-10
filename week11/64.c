void WriteLetter(FILE *f, int n)
{
    char c='A';
    for(int i=0;i<n;i++,c++)fprintf(f,"%c",c);
}
