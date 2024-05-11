    int num = 0;
    char* a = NULL;
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            len = 0;
            str[i] = '\0';
        }
        else
        {
            if (len == 0)
            {
                pStr[num] = &str[i];
                num++;
            }
            len++;
        }
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j + 1 < num; j++)
        {
            if (strcmp(pStr[j], pStr[j + 1]) > 0)
            {
                a = pStr[j];
                pStr[j] = pStr[j + 1];
                pStr[j + 1] = a;
            }
        }
    }
    return num;
