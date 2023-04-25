#include "winsc.h"
#include "commands.c"


/******************************************************************************************************
 * WINSCRIPT SOURCE CODE
 * MADE BY ZVQLE
 * Check commands.c to see all commands codes
 * check winsc.h to see headers
*********************************************************************************************************/


int main(int argc, char *argv[])
{
    FILE * fp;
    char pri[255];
    char * word;
    char * nextWord;
    fp = fopen(argv[1], "r");
    char input[255];
    if(fp == NULL)
    {
        printf("Error, Cannot Open File\n");
        exit(2);
    }
    while(fgets(pri, 255, fp)){
        word = strtok(pri, " ");
        if (word != NULL)
        {
            
           char cmd[255];
           strcpy(cmd, word);
           word = strtok(NULL, "\n");
           
           if(strcmp(cmd, "+") == 0)
            {
                plus(word, nextWord);
            }
           if(strcmp(cmd, "input") == 0)
           {  
               inputs(word, input);
           } 
           if(strcmp(cmd, "echo") == 0)
           {
             echo(word, input);
           }
           if(strcmp(cmd, "echol") == 0)
           {
              echol(word, input);
           }
           if(strcmp(cmd, "start") == 0)
           {     
              start(word);
           }  
           if(strcmp(cmd, "sudo") == 0)
           {       
               sudo(word);
           }  
           if(strcmp(cmd, "cmd") == 0)
           {       
              system(word);
           } 
           if(strcmp(cmd, "msgbox") == 0)
           {       
              msgbox(word);
           }     
           if(strcmp(cmd, "msgbo") == 0)
           {       
              msgbox(word);
           }  
           if(strcmp(cmd, "about") == 0)
           {       
              about();
           } 
           if(strcmp(cmd, "newline") == 0)
           {   
              newline();
           } 
           if(strcmp(cmd, "pause") == 0)
           {   
              pause();
           } 
          
        }


    }

    fclose(fp);


    
}