/// <summary>
/// La boite de recptions gère tous les listes de message de chaque utilisateur 
/// Lorsqu'on ajoute un utilisateur on ajoute un nouvelle reception dans celle-ci
/// </summary>

#pragma once

#include "Include.h"

class Usager;

class BoiteReception
{
public:

	/// <summary>
	/// Contructeur de base d'une boîte de réception
	/// </summary>
	BoiteReception();

	/// <summary>
	/// Parcours tous les contacts pour vérifier s'il existe déjà
	/// </summary>
	/// <returns>True : L'usager existe</returns>
	//bool verifierContact(Usager contact);

	void ajouterContact(Usager& usager);

	/// <summary>
	/// Rercherche Un destinataire à partir de son identifiant
	/// </summary>
	/// <param name="id">Identifiant</param>
	/// <returns>L'index dans le tableau</returns>
	int rechercherDestinataire(std::string id);

	/// <summary>
	/// Obtient tous les receptions
	/// </summary>
	/// <returns>Vecteur des receptions</returns>
	std::vector<Reception>& obtenirReceptions();

	/// <summary>
	/// Ajouter un message dans la receptions de l'usager correspondant
	/// </summary>
	/// <param name="message">Message à ajouter \ doit contenir maximum *** caractères</param>
	/// <param name="destinataire">Dist</param>
	/// <returns>Si l'insertion à bien fontionné</returns>
	bool ajouterMessage(std::string message, Usager& destinataire);


private:	
	std::vector<Reception> m_receptions;
};

