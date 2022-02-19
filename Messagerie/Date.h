/// <summary>
/// Date Ann�e Mois Jour
/// </summary>

#pragma once
struct Date
{
public:
	/// <summary>
	/// Cr�ation d'une date
	/// </summary>
	/// <param name="annee">Ann�e</param>
	/// <param name="jour">Jour</param>
	/// <param name="mois">Mois</param>
	Date(int annee, int jour, int mois);
	Date();

	int m_annee;
	int m_mois;
	int m_jour;
};

