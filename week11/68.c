void fun(FILE *fin,FILE *fout)
{
    ST s;
    while(fscanf(fin,"%s %s %d %d %lf",s.name,s.id,&s.gender,&s.age,&s.scored)!=EOF)
        output(&s,fout);
}
