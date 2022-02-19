#include "AssistantMessagerie.h"

AssistantMessagerie::AssistantMessagerie()
{
	m_nbContact = 0;
	m_usagers = vector<Usager>();
}

void AssistantMessagerie::creeUsager()
{
	std::string prenom = obtenirValeurConsole("Prenom ?");
	std::string nom = obtenirValeurConsole("Nom ?");

	// Obtient la date de naissance en console
	std::string annee = obtenirValeurConsole("Annee ?");
	std::string mois = obtenirValeurConsole("Mois ?");
	std::string jour = obtenirValeurConsole("Jour ?");

	Date naissance = Date(stoi(annee), stoi(mois), stoi(jour));


	Usager usager = Usager(nom, prenom, naissance);
	
	m_usagers.push_back(usager);
	m_nbContact++;
}

void AssistantMessagerie::creeLienUtilisateur()
{
	if (m_nbContact < 2)
	{
		cout << "Ajouter des contacts avant";
		return;
	}

	afficherUtilisateurs();

	while (true)
	{
		int valA = stoi(obtenirValeurConsole("No contact 1 : "));
		int valB = stoi(obtenirValeurConsole("No contact 2 : "));

		if (m_usagers[valA].obtenirId() != m_usagers[valB].obtenirId())
		{
			m_usagers[valA].ajouterContact(m_usagers[valB]);
			m_usagers[valB].ajouterContact(m_usagers[valA]);
			return;
		}
	}
}

void AssistantMessagerie::afficherUtilisateurs()
{
	for (int i = 0; i < m_usagers.size(); i++)
	{
		cout << "[" << i << "] " << m_usagers[i].obtenirNomComplet() << "\n";
	}
}

void AssistantMessagerie::afficherContactUtilisateur(vector<Reception>& recept)
{
	for (int i = 0; i < recept.size(); i++)
	{
		cout << "[" << i << "] " << recept[i].obtenirUsager().obtenirNomComplet() << "\n";
	}
}

void AssistantMessagerie::envoyerMessage()
{
	if (m_usagers.size() == 0)
	{
		return;
	}

	afficherUtilisateurs();

	int valA = stoi(obtenirValeurConsole("Choisir provenance : "));
	BoiteReception btRecpt = m_usagers[valA].obtenirBoiteReception();

	
	if (btRecpt.obtenirReceptions().size() == 0)
	{
		return;
	}

	afficherContactUtilisateur(btRecpt.obtenirReceptions());
	
	int valB = stoi(obtenirValeurConsole("Choisir destinataire : "));
	std::string id = obtenirIdUtilisateurs(btRecpt, valB);
	int index = rechercherUtilisateur(id);

	if (index == -1)
	{
		return;
	}

	bool resultat = false;

	while (!resultat )
	{
		std::string message = obtenirValeurConsole("Message : ");

		resultat = m_usagers[valA]
			.obtenirBoiteReception()
			.ajouterMessage(message, m_usagers[index]);
	}
}

void AssistantMessagerie::executerActionMenu(std::string action)
{
	if (action == "0")
	{
		creeUsager();
	}

	if (action == "1")
	{
		creeLienUtilisateur();
	}
	if (action == "2")
	{
		envoyerMessage();
	}
	if (action == "3")
	{
		lireMessage();
	}
}

void AssistantMessagerie::lireMessage()
{
	//Choix du contact
	afficherUtilisateurs();

	int valA = stoi(obtenirValeurConsole("Choisir provenance : "));

	BoiteReception btRecpt = m_usagers[valA].obtenirBoiteReception();

	//Choix du contact à lire les messages
	afficherContactUtilisateur(btRecpt.obtenirReceptions());

	int valB = stoi(obtenirValeurConsole("Choisir destinataire : "));
	std::string id = obtenirIdUtilisateurs(btRecpt, valB);
	int index = rechercherUtilisateur(id);
	
	
	int indexBtRecpt = btRecpt.rechercherDestinataire(m_usagers[index].obtenirId());
	if (indexBtRecpt != -1)
	{
		Reception recpt = btRecpt.obtenirReceptions()[indexBtRecpt];

		afficherReception(recpt);
		//Vider la boite de réception
		btRecpt.obtenirReceptions()[indexBtRecpt].vider();
	}
}

void AssistantMessagerie::afficherReception(Reception& recept)
{
	queue<Message> messages = recept.ObtenirMessages();

	while (!messages.empty()) {
		cout <<  messages.front().m_texte  <<'\n';
		messages.pop();
	}
}

Usager AssistantMessagerie::obtenirUsager(int index)
{
	return m_usagers[index];
}

void AssistantMessagerie::afficherOptionMenu()
{
	std::cout << std::string('\n', 10);
	std::cout << "[0] cr" << "\x82" << "er des utilisateurs" << "\n";
	std::cout << "[1] cr"<< "\x82" << "er un lien entre utilisateurs" << "\n";
	std::cout << "[2] envoyer un message" << "\n";
	std::cout << "[3] lire les messages" << "\n";
}

std::string AssistantMessagerie::obtenirValeurConsole(std::string textAfficher)
{
	std::cout << '\n';

	std::string val = "";

	std::cout << textAfficher;

	std::cout << '\n';

	while (val.length() == 0)
	{
		std::getline(std::cin, val);
	}

	return val;
}

std::string AssistantMessagerie::obtenirIdUtilisateurs(BoiteReception& btRecept, int index)
{
	vector<Reception> recp = btRecept.obtenirReceptions();
	if (index >= recp.size())
	{
		return "";
	}
	return recp[index].obtenirUsager().obtenirId();
}

int AssistantMessagerie::rechercherUtilisateur(std::string id)
{
	for (int i = 0; i < m_usagers.size(); i++)
	{
		if (id == m_usagers[i].obtenirId())
		{
			return i;
		}
	}
	return -1;
}
