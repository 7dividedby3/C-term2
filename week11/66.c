void fileRW(FILE *fin,FILE *fout)
{
    char s[114514],*p,c;
    int i=0,j=0;
    while(fgets(s,114514,fin)!=NULL)
    {
        i++;
        for(int j=0;s[j]!='\0';j++)
            if(s[j]!=' '&&s[j]!='\t')
            {
                p=s+j;
                break;
            }
        fprintf(fout,"%d:%s",i,p);
    }
}
