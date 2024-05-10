int CountWord(FILE *f)
{
    int i=0;
    char c;
    int b=1;
    while(!feof(f))
    {
        c=fgetc(f);
        if(b==1&&isalpha(c))
        {
            i++;
            b=0;
        }
        else if(!isalpha(c))
            b=1;
    }
    return i;
}
