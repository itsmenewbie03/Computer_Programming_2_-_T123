#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    printf("Enter any string: ");
    scanf("%[^\n]s", string);
    printf("Reverse ordered words\n");
    int lastIndex = strlen(string) - 1;
    while (lastIndex >= 0)
    {
        char temp = string[lastIndex];
        if (temp == ' ')
        {
            int forwardCounter = lastIndex + 1;
            int flag = 1;
            while (flag)
            {
                char forwardCharacter = string[forwardCounter];
                if (forwardCharacter == ' ' || forwardCharacter == '\0')
                {
                    flag = 0;
                }
                else
                {
                    printf("%c", forwardCharacter);
                    forwardCounter++;
                }
            }
            printf(" ");
            lastIndex--;
        }
        else if (lastIndex == 0)
        {
            int forwardCounter = lastIndex;
            int flag = 1;
            while (flag)
            {
                char forwardCharacter = string[forwardCounter];
                if (forwardCharacter == ' ' || forwardCharacter == '\0')
                {
                    flag = 0;
                }
                else
                {
                    printf("%c", forwardCharacter);
                    forwardCounter++;
                }
            }
            lastIndex--;
        }
        else
        {
            lastIndex--;
        }
    }
    return 0;
}
/*
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@%%%%%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@%%%%%%#%%%#%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@%%##%%%%%%%%%%%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@%#%%%%%%%%%%%%%%%%%%%%#%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@%%%%%%%#%%%%%#%%%%%%%%%%#%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@%%%%%#%%%%%%%%%%%%%%%#%%%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@%%%%%%%#%%%#%%%##%%%%%%%%%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@%%%%%%%%%%#%@@@@@@%#%%%%%%%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@#%%%%%%%%#%@@@@@@@@#%%%%%%%%##%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@%%%%%#%%%%%@@@@@@@@@#%%%%%%%%%#%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@#%%%%%%%%%%@@@@@@@@@%%%###%%%%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@%%%%%%%%%%%%@@@@@@@@@%#%%%%%%%%%%%@@@@#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@##@@@@@@@@@#@@@@@@@@@@@@@@@#**#@@@@%***@@@@@
@@@%%%##%%%#%%#@@@@@@@@@@%%%%%%%%%%%%@@@@#@@@@@@%#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*+@@@@@@@@@#@@@@@@@@@@@@@@#****#@@%*****@@@@
@@@%%%%%%%%%%##@@@@@@@@@@%%%%%%%%%%%%%@@@@@@@@@@#+@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+@@@@@@@@@@@@@@@@@@@@@@@@+@@@%+@@%%@@@+%@@@
@@@%%%%%%%%%%%%#@@@@@@@@@%%%%%%%%%%%%%@#++@@@@@++=++%@@@*+++*@@+#%+%#+%@@@*+*@@@%+%#+%@@@@@++*@@#++%#%*+*@%+%+#@@@@*+*@@@@@@%++#@@@@+%@@%+@@@@@@@+%@@@
@@@%%%%%##%%%%%#%@@@@@@@@@%%%%%%%%%%%%@%%=%@@@@%*+%%@@@*#%%%#*@*=**=#+%@*+#%#+*@@*=#%*%@@++%%#+#@+*@+%%=#@%=*%#+#@@%%=%@@@@+*%%*+%@@+%@@%+@@@@#++#@@@@
@@%%%%%%%%%%%%%%#@@@@@@@@%#%%%%%%%%%%%@@@+%@@@@@%*@@@@@+%@@@@%@%+@#*@+%@+#@@@#+@@#*@@+%@@=%@@@*+@*#*#*%+@@%+%@@**@@@@+%@@@%=%@@@+#@@+%@@%+@@@@@%%*%@@@
@@%%%%%#%%%%%%%%%@@@@@@###%%%%%%%%%%%%@@@+%@@@@@#+@@@@@@*++++@@#+@**@+%@+++++++@@**@@+%@@=+++++*@*#+%+%+@@%+@@@#*@@@@+%@@@%=++++=#@@+%@@%+@@@@@@@+%@@@
@@@%%%%%%%%#%%#%@@@@@@@@%%#%%%%%%%%%%%@@@+%@@@@@#+@@@@@@@@@@%+@%+@**@+%@+#@@@%%@@**@@+%@@=%@@@%@@*#*%*%+@@%+@@@**@@@@+@@@@%+%@@%%@@@+@@@%+@@@@@@@+%@@@
@@@#%%%%%%%%##%@@@@@@@@@@@@#%%%%%%%%%%@@%+#%@@@@%*%%*#@*#%%%%+@#+@**@+#@++%%%+*@@**@@+#@@++%%#+#@@*#@@+%@@#=*%#+#@@@%=#%@@%+*%%#+%@@+%%%#*@@%*%%%*%@@@
@@@%%%%%%%%%#@@@@@@@@@@@@@@%#%%%#%%%%@@#++++@@@@@%++#@@@*++++@%++##+%#+%@@++*@@@%++%#++@@@@++*@@@@#%@@*@@@+*%+#@@@@*++++@@@@%++#@@@@@*++*@@@@#+++%@@@@
@@@%#%%%%#%#%@@@@@@@@@@@@@@@#%%%%%%%#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@%%%%%%%%%@@@@@@@@@@@@@@@@#%%%%%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@%#%%%%#@@@@@@@@@@@@@@@@@%%%%%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@%%%%%%%@@@@@@@@@@@@@@@@@%%%%%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@%%%%%%@@@@@@@@@@@@@@@@@%%%%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@%%%%%@@@@@@@@@@@@@@@@@%%%%#%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@%%%%%@@@@@@@@@@@@@@@@@@#%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@%%%%@@@@@@@@@@@@@@@@@@#%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@%#%@@@@@@@@@@@@@@@@@@#%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@%%@@@@@@@@@@@@@@@@@@#%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@%#%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/
