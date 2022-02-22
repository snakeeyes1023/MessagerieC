#include "Include.h"


BoiteReception::BoiteReception(){}


int BoiteReception::rechercherDestinataire(std::string id)
{
	for (int i = 0; i < m_receptions.size(); i++)
	{
		if (m_receptions[i].obtenirUsager().obtenirId() == id)
		{
			return i;
		}
	}
	return -1;
}

std::vector<Reception>& BoiteReception::obtenirReceptions()
{
	return m_receptions;
}

bool BoiteReception::ajouterMessage(std::string message, Usager& destinataire)
{
	int index = rechercherDestinataire(destinataire.obtenirId());
	if (index == -1)
	{
		return false;
	}
	if (message.length() == int{ 0 } || message.length() > int{280})
	{
		return false;
	}

	m_receptions[index].ajouterUnMessage(message);
	return true;
}

void BoiteReception::ajouterContact(Usager& usager)
{
	Reception reception = Reception(usager);
	m_receptions.push_back(reception);
}
