/// <summary>
/// Assisant pour toutes les actions qui touche à la console
/// </summary>
#pragma once

#include "Include.h"

class AssistantMessagerie
{
public:

	/// <summary>
	/// Contructeur de base
	/// </summary>
	AssistantMessagerie();

	/// <summary>
	/// Créer un usager à partir de la console
	/// </summary>
	void creeUsager();

    /// <summary>
    /// Créer un lien entre deux utilisateurs à partir de la console
    /// </summary>
    void creeLienUtilisateur();

    /// <summary>
    /// Afficher la liste des utilisateurs contenue dans le vecteur
    /// Place sous forme d'index [index] Utilisateur
    /// </summary>
    void afficherUtilisateurs();

    /// <summary>
    /// Afficher la liste des contact que l'usager à
    /// </summary>
    /// <param name="recept">Liste de tous les receptions</param>
    void afficherContactUtilisateur(vector<Reception>& recept);

    /// <summary>
    /// Envoyer un message à un autre utilisateur 
    /// Demande à la console de quel à quel utilisateur
    /// </summary>
    void envoyerMessage();

    /// <summary>
    /// Exécute l'action conrespondant à l'index du menu
    /// </summary>
    /// <param name="action"></param>
    void executerActionMenu(std::string action);

    /// <summary>
    /// Lire un message d'un utilisateur 
    /// ATTENTION : utilise la meme orde que lorsqu'on envoie un message
    /// Volontaire
    /// </summary>
    void lireMessage();

    /// <summary>
    /// Afficher une reception = Texte chaque message
    /// </summary>
    /// <param name="btRecept"></param>
    void afficherReception(Reception& btRecept);

    /// <summary>
    /// Obtenir l'usager correspondant à l'index
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    Usager obtenirUsager(int index);

    /// <summary>
    /// Affiche toutes les options de menu
    /// </summary>
    void afficherOptionMenu();

    /// <summary>
    /// Demande une question et boucle tant que la réponse est vide
    /// </summary>
    std::string obtenirValeurConsole(std::string textAfficher);

    /// <summary>
    /// Obtenir le ID de l'utilisateur
    /// </summary>
    /// <param name="btRecept">Boite de receptions</param>
    /// <param name="index">Index choisie dans la boîte de receptions</param>
    /// <returns>Id de l'utilisateur</returns>
    std::string obtenirIdUtilisateurs(BoiteReception& btRecept, int index);

    /// <summary>
    /// Rechercher dans une utilisateur dans à partir de son ID
    /// </summary>
    /// <param name="id">Id de l'usager</param>
    /// <returns>Index dans le vecteur</returns>
    int rechercherUtilisateur(std::string id);

private:

	vector<Usager> m_usagers;

    int m_nbContact;
};

