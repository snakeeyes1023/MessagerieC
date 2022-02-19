#include "Include.h"


Reception::Reception(Usager usager)
{
	m_usager = Usager(usager);
	m_messages = queue<Message>();
}

void Reception::ajouterUnMessage(string text)
{
	Message msg = Message(text);
	m_messages.push(msg);
}

void Reception::vider()
{
	std::queue<Message> empty;
	std::swap(m_messages, empty);
}

Usager Reception::obtenirUsager()
{
	return m_usager;
}

queue<Message>& Reception::ObtenirMessages()
{
	return m_messages;
}
