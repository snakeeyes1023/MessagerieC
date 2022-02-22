#include "Include.h"


Usager::Usager(std::string nom, std::string prenom, Date naissance)
{
	m_nom = std::string(nom);
	m_prenom = std::string(prenom);

	m_naissance = naissance;
	m_boiteReception = BoiteReception();
	genererIdentifiantUnique();
}

Usager::Usager()
{
	m_nom = std::string("");
	m_prenom = std::string("");

	m_naissance = Date(2000,01,02);
	m_boiteReception = BoiteReception();

	genererIdentifiantUnique();
}


void Usager::ajouterContact(Usager& usager)
{
	m_boiteReception.ajouterContact(usager);
}

std::string Usager::obtenirNom()
{
	return m_nom;
}

std::string Usager::obtenirPrenom()
{
	return m_prenom;
}

std::string Usager::obtenirNomComplet()
{
	return m_prenom + " " + m_nom;
}

Date Usager::obtenirDateNaissance()
{
	return m_naissance;
}

std::string Usager::obtenirId()
{
	return m_idUnique;
}


BoiteReception& Usager::obtenirBoiteReception()
{
	return m_boiteReception;
}

void Usager::genererIdentifiantUnique()
{
	std::string identifiantUnique = std::string();

	//première lettre de son nom de famille
	if (m_prenom.length() > 0)
	{
		identifiantUnique.push_back(m_nom[0]);
	}

	//3 premières lettres de son prénom
	//Vérifier si le prénom contient au moins trois lettres sinon ajoute toute le nom
	std::string troisLettrePrenom = m_nom.length() < 3 ? m_prenom : m_prenom.substr(0, 3);

	identifiantUnique.append(troisLettrePrenom);

	//date de naissance (aa/mm/jj) 
	std::string date = m_naissance.ObtenirDateFormatte();

	identifiantUnique.append(date);

	//nombre aléatoire de 2 chiffres
	identifiantUnique.append(AideAleatoire::ObtenirNombreAleatoire(2));

	m_idUnique = identifiantUnique;
}
