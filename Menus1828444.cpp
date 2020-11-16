#include "Menus1828444.h"
#include <iostream>
#include <string> //Besoin de cette bibliothèque pour Getline.

using namespace std; 

void afficherMenu1() //Menu des formes.
{ 
	cout << "1. Rectangle" << endl;
	cout << "2. Triangle" << endl;
	cout << "3. Carré" << endl;
	cout << "4. Losange" << endl;
	cout << "5. Quitter" << endl;
	cout << "Votre Choix -->";
}

void afficherMenu2() //Menu de remplissage.
{
	cout << "1. Forme pleine" << endl;
	cout << "2. Forme vide" << endl;
	cout << "3. Retour au menu précédent " << endl;
	cout << "Votre Choix -->";
}

int validerMenu(int menuActuel, int nombreChoix)
{
	string choix; 
	int choixVerif = 0;
	/*Ici, le string est le choix brut et le int est 
	le choix après avoir été vérifier qu'il est
	bel et bien un chiffre.*/


		if (menuActuel == 1) //Si on est dans le menu de formes...
		{
			system("cls");
			afficherMenu1(); //Affichage du menu et demande à l'utilisateur d'entrer un chiffre.
			getline(cin, choix, '\n'); //Getline est le cin pour les string.
			while (choixVerif <= 0 || choixVerif > nombreChoix)
			{
				//Verification si c'est un chiffre
				while (!(!choix.empty() && ((choix.front() >= '0' && choix.front() <= '9')
					|| (choix.length() > 1 && choix.front() == '-' && choix.at(1) >= '0' && choix.at(1) <= '9'))))
				{
					cout << "Erreur : Vous devez taper un chiffre, pas un symbole." << endl;
					system("pause");
					system("cls");
					afficherMenu1(); //Affichage du menu et demande à l'utilisateur d'entrer un chiffre.
					getline(cin, choix, '\n'); //Getline est le cin pour les string.
				}

				choixVerif = stoi(choix); //Choix est un nombre, nous pouvons en faire un int sans tout casser.

				if (choixVerif <= 0 || choixVerif > nombreChoix) //Il faut verifier que c'est un choix du menu.
				{
					cout << "Erreur : Votre choix doit etre compris entre 1 et 5 " << endl;
					system("pause");
					system("cls");
					afficherMenu1(); //Affichage du menu et demande à l'utilisateur d'entrer un chiffre.
					getline(cin, choix, '\n'); //Getline est le cin pour les string.
				}

			}
		}

		if (menuActuel == 2) //Si on est dans le menu de formes...
		{
			system("cls");
			afficherMenu2(); //Affichage du menu et demande à l'utilisateur d'entrer un chiffre.
			getline(cin, choix, '\n'); //Getline est le cin pour les string.
			while (choixVerif <= 0 || choixVerif > nombreChoix)
			{
				//Verification si c'est un chiffre
				while (!(!choix.empty() && ((choix.front() >= '0' && choix.front() <= '9')
					|| (choix.length() > 1 && choix.front() == '-' && choix.at(1) >= '0' && choix.at(1) <= '9'))))
				{
					cout << "Erreur : Vous devez taper un chiffre, pas un symbole." << endl;
					system("pause");
					system("cls");
					afficherMenu2(); //Affichage du menu et demande à l'utilisateur d'entrer un chiffre.
					getline(cin, choix, '\n'); //Getline est le cin pour les string.
				}

				choixVerif = stoi(choix); //Choix est un nombre, nous pouvons en faire un int sans tout casser.

				if (choixVerif <= 0 || choixVerif > nombreChoix) //Il faut verifier que c'est un choix du menu.
				{
					cout << "Erreur : Votre choix doit etre compris entre 1 et 3." << endl;
					system("pause");
					system("cls");
					afficherMenu2(); //Affichage du menu et demande à l'utilisateur d'entrer un chiffre.
					getline(cin, choix, '\n'); //Getline est le cin pour les string.
				}

			}
		}

	return choixVerif; //Fiou, finalement on retourne le chiffre valide!
}