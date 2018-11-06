#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

void main()
{
    char prompt[256] ;
    char commande[256];

    strcpy(prompt, "EXIA>");        
    *commande = 0 ;               

    while (strcmp(commande, "exit") != 0)
    {
        printf("%s", prompt);           
        fgets(commande, 256, stdin);           
        printf("%s\n",commande);
        commande[strcspn(commande,"\n")]='\0';  
    }

    puts("Bye");
}   