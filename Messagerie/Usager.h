/// <summary>
/// Usager membre du réseau de messagerie
/// </summary>

#pragma once
#include "Include.h"


class Usager
{
public:

	/// <summary>
	/// Créer un usager
	/// </summary>
	/// <param name="nom">Nom de l'usager</param>
	/// <param name="prenom">Prénom de l'usager</param>
	/// <param name="prenom">Naissance de l'usager</param>
	Usager(std::string nom, std::string prenom, Date naissance);

	/// <summary>
	/// Contructeur de base d'un usager
	/// </summary>
	Usager();

	/// <summary>
	/// Ajouter un contact à l'usager
	/// </summary>
	/// <param name="usager">Uasger à ajouter</param>
	void ajouterContact(Usager& usager);

	#pragma region Accesseur

	/// <summary>
	/// Obtient le nom de l'usager
	/// </summary>
	/// <returns>Nom</returns>
	std::string obtenirNom();

	/// <summary>
	/// Obtient le prénom de l'usager
	/// </summary>
	/// <returns>Prénom</returns>
	std::string obtenirPrenom();

	/// <summary>
	/// Obtenir nom complet de l'usager
	/// </summary>
	/// <returns></returns>
	std::string obtenirNomComplet();

	/// <summary>
	/// Obtient la date de naissance de l'usager
	/// </summary>
	/// <returns>Prénom</returns>
	Date obtenirDateNaissance();


	/// <summary>
	/// Obtient l'identifiant de l'usager
	/// </summary>
	/// <returns>Prénom</returns>
	std::string obtenirId();

	/// <summary>
	/// Obtient la boîte de reception
	/// </summary>
	/// <returns></returns>
	BoiteReception& obtenirBoiteReception();
	#pragma endregion

private:

	/// <summary>
	/// Génerer l'identifant de l'utilisateur
	/// </summary>
	void genererIdentifiantUnique();

	#pragma region Propriété

	BoiteReception m_boiteReception;


	std::string m_nom;

	std::string m_prenom;

	Date m_naissance;

	/// <summary>
	/// Identifiant unique
	/// composé de la première lettre de son nom de famille suivi des 3 premières lettres de son prénom,
	/// sa date de naissance (aa/mm/jj) 
	/// puis un nombre aléatoire de 2 chiffres
	/// </summary>
	std::string m_idUnique;

	#pragma endregion
};

