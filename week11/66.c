void fileRW(FILE *fin,FILE *fout)
{
    char s[114514],*p,c;
    int i=0,j=0;
    while(fgets(s,114514,fin))
    {
        i++;
        for(int i=0;s[i]!='\0';i++)
            if(s[i]!=' '&&s[i]!='\t')
            {
                p=s+i;
                break;
            }
        fprintf(fout,"%d:",i);
        fputs(p,fout);
    }
}
