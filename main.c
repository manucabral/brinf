#include "src/brinf.h"

int main(void)
{
    unsigned option = 1;
    Browser Browser;
    if (GetWindowsDefaultBrowser(&Browser) == EXIT_SUCCESS)
    {
        do
        {
            system("cls");
            printf("\n\t%s v%s\n\t  by %s\n\n", APPNAME, VERSION, AUTHOR);
            DisplayBroswerInfo(Browser);
            Notification("Info", "Select a option");
            DisplayOptions();
            option = GetOption();

            system("cls");
            if(option == 1)
                GetMostVisitedPages(Browser);
            if(option == 2)
                GetLastestVisitedPages(Browser);
                
            puts(" ");
            system("PAUSE");
        } while (option > 0 && option < 5);
    }
    return 0;
}
