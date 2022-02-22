/// <summary>
/// Date Année Mois Jour
/// </summary>

#pragma once
struct Date
{
public:
	/// <summary>
	/// Création d'une date
	/// </summary>
	/// <param name="annee">Année</param>
	/// <param name="jour">Jour</param>
	/// <param name="mois">Mois</param>
	Date(int annee, int jour, int mois);

	Date();

	/// <summary>
	/// Obtenir une date au format aa/mm/jj
	/// </summary>
	/// <returns>la date formatte en texte</returns>
	std::string ObtenirDateFormatte();

	int m_annee;
	int m_mois;
	int m_jour;
};

