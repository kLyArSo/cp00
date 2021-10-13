#include <iostream>

char    *fix_argv(char *str)
{
    int i = 0;
    int j = 0;
    int len = strlen(str);
    char    *ret = new char[len];
    if (ret == NULL)
        return (NULL);
    while(str[i] == ' ')
        i++;
    while (str[i] != 0)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            ret[j] = str[i] - 32;
        else
            ret[j] = str[i];
        j++;
        i++;
    }
    ret[j] = 0;
    while (ret[--j] == ' ')
        ret[j] = 0;
    return (ret);
}

int     main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        int i = 1;
        char *ret;
        while (i < argc - 1)
        {
            //ret = fix_argv(argv[i]);
            //if (ret == NULL)
            //    return (1);
            //std::cout << ret << " ";
            //delete(ret);
            std::cout << argv[i];
            i++;
        }
        ret = fix_argv(argv[i]);
        std::cout << ret << std::endl;
        delete(ret);
    }
    return (0);
}