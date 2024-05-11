int frequency ( char* paragraph, char* from, char* to )
{
    int len=to-from+1;
    int sum=0;
    int ans=0;
    for(int i=0;i<strlen(paragraph)-len+1;i++)
        if(strncmp(paragraph+i,from,len)==0)
            ans++;
    return ans;
}
