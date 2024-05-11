void BatchAdd(FILE *in, FILE *out)
{
    double d1,d2;
    while(fscanf(in,"%lf %lf",&d1,&d2)!=EOF)
        fprintf(out,"%.2lf\n",d1+d2);
}
