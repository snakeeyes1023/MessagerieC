#include "Include.h"

std::string AideAleatoire::ObtenirNombreAleatoire(int nbChar)
{
    std::string nombreAleatoire = std::string();
    for (int i = 0; i < nbChar; i++)
    {
        std::string str = std::to_string(rand() % 10);
        nombreAleatoire.append(str);
    }
    return nombreAleatoire;
}
