/// <summary>
/// Un message contient seulement la date d'envoie et le texte
/// </summary>

#pragma once
#include "Include.h"


using namespace std;


struct Message
{
public:
	/// <summary>
	/// Création d'un message
	/// </summary>
	/// <param name="texte">Texte du message</param>
	Message(string texte);

	string m_texte;

	Date m_dateEnvoi;
};

