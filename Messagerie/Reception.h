/// <summary>
/// Reception : Correspond as une liste de message qui appartient à un usager
/// Exemple : Une boîte de reception contient plusieurs reception
/// </summary>

#pragma once
#include "Include.h"


using namespace std;

class Reception
{
public:

	/// <summary>
	/// Constructeur de base pour un reception
	/// </summary>
	/// <param name="usager"></param>
	Reception(Usager usager);

	/// <summary>
	/// Ajouter un message à la reception
	/// </summary>
	/// <param name="text"></param>
	void ajouterUnMessage(string text);

	/// <summary>
	/// Vidée la liste des messages
	/// </summary>
	void vider();

	/// <summary>
	/// Obtenir l'usager origine des envoies
	/// </summary>
	/// <returns></returns>
	Usager obtenirUsager();
	
	/// <summary>
	/// Obtenir la liste de message
	/// </summary>
	/// <returns></returns>
	queue<Message>& ObtenirMessages();
private:

	queue<Message> m_messages;

	Usager m_usager;
};

