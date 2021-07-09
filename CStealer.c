#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "src/banner.h"

int main(void) {
            printf(
                LCyan"\n\n ██████╗███████╗████████╗███████╗ █████╗ ██╗     ███████╗██████╗\n"
                cyan"██╔════╝██╔════╝╚══██╔══╝██╔════╝██╔══██╗██║     ██╔════╝██╔══██╗\n"
                LCyan"██║     ███████╗   ██║   █████╗  ███████║██║     █████╗  ██████╔╝\n"
                cyan"██║     ╚════██║   ██║   ██╔══╝  ██╔══██║██║     ██╔══╝  ██╔══██╗\n"
                LCyan"╚██████╗███████║   ██║   ███████╗██║  ██║███████╗███████╗██║  ██║\n"
                cyan" ╚═════╝╚══════╝   ╚═╝   ╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝╚═╝  ╚═╝\n"
                orange"Generate Simple main.c!\n"
                orange"Version: 0.1v\n"
                orange"Created: @Mark662_\n\n"
                );

        printf(
        LMagenta"[1] Read README.md\n"
        LGreen"[2] Build main.c\n"
        LMagenta"[3] Read License.txt\n"
        LGreen"[4] Exit\n\n"
        );

    char option='O';
    printf(
        magenta"O que você deseja iniciar?: "
        reset""
        );
    scanf("%s", &option);

 switch (option)
    {
    case '1':
        system("cd assets; cat README.md");
        break;
    
    case '2':
        system("cd assets; cd build; python3 build.py");
        break;

    case '3':
        system("cd assets; cat License.txt");
        break;
    
    case '4':
        system("exit");
        break;
    }


    return(0);
}