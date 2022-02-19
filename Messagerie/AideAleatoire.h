/// <summary>
/// List de "Helper" pour g�n�rer des nombres al�atoires
/// </summary>

#pragma once
#include "Include.h"

class AideAleatoire
{
public:
	/// <summary>
	/// Obtenir nombre al�atoire en string
	/// Chaque carat�re sera un nombre de 0 � 9
	/// </summary>
	/// <param name="nbChar">Nombre de caract�re</param>
	/// <returns>Nombre en string</returns>
	static std::string ObtenirNombreAleatoire(int nbChar);
};

