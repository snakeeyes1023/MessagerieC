/// <summary>
/// List de "Helper" pour générer des nombres aléatoires
/// </summary>

#pragma once
#include "Include.h"

class AideAleatoire
{
public:
	/// <summary>
	/// Obtenir nombre aléatoire en string
	/// Chaque caratère sera un nombre de 0 à 9
	/// </summary>
	/// <param name="nbChar">Nombre de caractère</param>
	/// <returns>Nombre en string</returns>
	static std::string ObtenirNombreAleatoire(int nbChar);
};

