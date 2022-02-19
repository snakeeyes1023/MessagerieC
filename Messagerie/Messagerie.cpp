#include "Include.h"


int main()
{
    std::cout << "Bienvenue dans la meilleur messagerie en ligne de commande!\n";

    AssistantMessagerie messagerie = AssistantMessagerie();

    bool quitter = false;

    while (!quitter)
    {
        messagerie.afficherOptionMenu();

        std::string val = messagerie.obtenirValeurConsole("Entrez votre choix :");

        messagerie.executerActionMenu(val);     
    }
}
