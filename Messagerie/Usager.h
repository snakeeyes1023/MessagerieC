/// <summary>
/// Usager membre du r�seau de messagerie
/// </summary>

#pragma once
#include "Include.h"


class Usager
{
public:

	/// <summary>
	/// Cr�er un usager
	/// </summary>
	/// <param name="nom">Nom de l'usager</param>
	/// <param name="prenom">Pr�nom de l'usager</param>
	/// <param name="prenom">Naissance de l'usager</param>
	Usager(std::string nom, std::string prenom, Date naissance);

	/// <summary>
	/// Contructeur de base d'un usager
	/// </summary>
	Usager();

	/// <summary>
	/// Ajouter un contact � l'usager
	/// </summary>
	/// <param name="usager">Uasger � ajouter</param>
	void ajouterContact(Usager& usager);

	#pragma region Accesseur

	/// <summary>
	/// Obtient le nom de l'usager
	/// </summary>
	/// <returns>Nom</returns>
	std::string obtenirNom();

	/// <summary>
	/// Obtient le pr�nom de l'usager
	/// </summary>
	/// <returns>Pr�nom</returns>
	std::string obtenirPrenom();

	/// <summary>
	/// Obtenir nom complet de l'usager
	/// </summary>
	/// <returns></returns>
	std::string obtenirNomComplet();

	/// <summary>
	/// Obtient la date de naissance de l'usager
	/// </summary>
	/// <returns>Pr�nom</returns>
	Date obtenirDateNaissance();


	/// <summary>
	/// Obtient l'identifiant de l'usager
	/// </summary>
	/// <returns>Pr�nom</returns>
	std::string obtenirId();

	/// <summary>
	/// Obtient la bo�te de reception
	/// </summary>
	/// <returns></returns>
	BoiteReception& obtenirBoiteReception();
	#pragma endregion

private:

	/// <summary>
	/// G�nerer l'identifant de l'utilisateur
	/// </summary>
	void genererIdentifiantUnique();

	#pragma region Propri�t�

	BoiteReception m_boiteReception;


	std::string m_nom;

	std::string m_prenom;

	Date m_naissance;

	/// <summary>
	/// Identifiant unique
	/// compos� de la premi�re lettre de son nom de famille suivi des 3 premi�res lettres de son pr�nom,
	/// sa date de naissance (aa/mm/jj) 
	/// puis un nombre al�atoire de 2 chiffres
	/// </summary>
	std::string m_idUnique;

	#pragma endregion
};

