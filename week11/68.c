void fun(FILE *fin,FILE *fout)
{
    ST s;
    while(!feof(fin))
    {
        fscanf(fin,"%s %s %d %d %lf",s.name,s.id,&s.gender,&s.age,&s.scored);
        output(&s,fout);
    }
}
