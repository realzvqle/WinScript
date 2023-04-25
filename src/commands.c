#include "winsc.h"

void newline()
{
    printf("\n");
}

void echol(char string[], char input[])
{
    if(strcmp(string, "input") == 0)
{
    printf("%s", input);
}
            else {
                printf("%s", string);
            }  
            
}
void inputs(char string[], char input[])
{
    printf("%s", string);
    gets(input);
}
void echo(char string[], char input[])
{
    if(strcmp(string, "input") == 0)
    {
         printf("%s\n", input);
    }
    else{
      printf("%s\n", string);
    }
}
void start(char string[])
{
    STARTUPINFOA si = {0};
    PROCESS_INFORMATION pi = {0};

    if(ShellExecuteA(NULL, "open", string, NULL, NULL, SW_SHOWDEFAULT) == 0)
       printf("There was an error, error number\n");
}
void msgbox(char string[])
{
    if(MessageBox(NULL, string, "WinScript", MB_OKCANCEL | MB_ICONQUESTION) != IDOK)
    {
        exit(0);
    }

              
}

void sudo(char string[])
{
    STARTUPINFOA si = {0};
    PROCESS_INFORMATION pi = {0};

    if(ShellExecute(NULL, "runas", string, NULL, NULL, SW_SHOWDEFAULT) == 0)
        printf("There was an error, error number\n");
}
void about()
{
    if(MessageBox(NULL, "WinScript Version 0.1 Beta\nMade By zvqle\ngithub.com\\realzvqle\nyoutube.com\\zvqle\n", "WinScript", MB_OKCANCEL | MB_ICONQUESTION) != IDOK)
    {
        exit(0);
    }
}
void plus(char string[], char nextString[])
{
    strcpy(string, nextString);
    nextString = strtok(NULL, "\n");
    printf("Command Was %s, Arg Was %s", string, nextString);
}
void pause()
{
    system("pause");
}