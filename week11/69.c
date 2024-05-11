void FailStudent(FILE* in, FILE* out)
{
    char f1[13],f2[11];int f3,f4,f5;
    while(fscanf(in,"%s %s %d %d %d",f1,f2,&f3,&f4,&f5)!=EOF){
        if(f3<60)
            fprintf(out,"%s %s Math\n",f1,f2);
        if(f4<60)
            fprintf(out,"%s %s English\n",f1,f2);
        if(f5<60)
            fprintf(out,"%s %s C\n",f1,f2);
   }
}
