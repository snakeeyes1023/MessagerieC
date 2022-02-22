/// <summary>
/// Assisant pour tous les actions qui touche � la console
/// L'assistant agit comme programme principale un peu
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
    /// Affiche toutes les options de menu
    /// </summary>
    void afficherOptionMenu();

    /// <summary>
    /// Demande une question et boucle tant que la r�ponse est vide
    /// </summary>
    std::string obtenirValeurConsole(std::string textAfficher);


private:
    /// <summary>
    /// Obtenir le ID de l'utilisateur
    /// </summary>
    /// <param name="btRecept">Boite de receptions</param>
    /// <param name="index">Index choisie dans la bo�te de receptions</param>
    /// <returns>Id de l'utilisateur</returns>
    std::string obtenirIdUtilisateurs(BoiteReception& btRecept, int index);

    /// <summary>
    /// Rechercher dans une utilisateur dans � partir de son ID
    /// </summary>
    /// <param name="id">Id de l'usager</param>
    /// <returns>Index dans le vecteur</returns>
    int rechercherUtilisateur(std::string id);

    /// <summary>
    /// Cr�er un usager � partir de la console
    /// </summary>
    void creeUsager();

    /// <summary>
    /// Cr�er un lien entre deux utilisateurs � partir de la console
    /// </summary>
    void creeLienUtilisateur();

    /// <summary>
    /// Afficher la liste des utilisateurs contenue dans le vecteur
    /// Place sous forme d'index [index] Utilisateur
    /// </summary>
    void afficherUtilisateurs();

    /// <summary>
    /// Afficher la liste des contact que l'usager �
    /// </summary>
    /// <param name="recept">Liste de tous les receptions</param>
    void afficherContactUtilisateur(vector<Reception>& recept);

    /// <summary>
    /// Envoyer un message � un autre utilisateur 
    /// Demande � la console de quel � quel utilisateur
    /// </summary>
    void envoyerMessage();

    /// <summary>
    /// Ex�cute l'action conrespondant � l'index du menu
    /// </summary>
    /// <param name="action"></param>
    void executerActionMenu(std::string action);

    /// <summary>
    /// Lire un message d'un utilisateur 
    /// ATTENTION : utilise la meme orde que lorsqu'on envoie un message (pour aller chercher un contact)
    /// Volontaire
    /// </summary>
    void lireMessage();

    /// <summary>
    /// Afficher une reception = Texte chaque message
    /// </summary>
    /// <param name="btRecept"></param>
    void afficherReception(Reception& btRecept);

    /// <summary>
    /// Obtenir l'usager correspondant � l'index
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    Usager obtenirUsager(int index);

	vector<Usager> m_usagers;

    int m_nbContact;
};

