#include "Include.h"

Date::Date(int annee, int jour, int mois)
{
	m_annee = annee;
	m_mois = mois;
	m_jour = jour;
}

Date::Date(){}

std::string Date::ObtenirDateFormatte()
{
	std::string annee = std::to_string(m_annee);
	std::string anneeFormat = annee.substr(annee.length() - 2);

	std::string mois = std::to_string(m_mois);
	std::string jour = std::to_string(m_jour);

	return anneeFormat + '/' + mois + '/' + jour;
}
