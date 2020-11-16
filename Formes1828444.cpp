//But: Traiter et dessiner les formes.
//Auteur: Mathieu Soucy
//Date: 2020-10-30

#include "Formes1828444.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void traiterRectangle(int remplis)
{
	//Déclaration des variables
	string hauteur;
	string largeur;
	int hauteurVer;
	int largeurVer;

	//Demande de hauteur
	cout << "Indiquer la hauteur : ";
	getline(cin, hauteur, '\n'); 
	while (!(!hauteur.empty() && ((hauteur.front() >= '0' && hauteur.front() <= '9')
		|| (hauteur.length() > 1 && hauteur.front() == '-' && hauteur.at(1) >= '0' && hauteur.at(1) <= '9'))))
	{
		cout << "Erreur : Vous devez taper un nombre, pas un symbole." << endl;
		getline(cin, hauteur, '\n');
	}
	hauteurVer = stoi(hauteur);

	//Demande de largeur
	cout << "Indiquer la largeur : ";
	getline(cin, largeur, '\n');
	while (!(!largeur.empty() && ((largeur.front() >= '0' && largeur.front() <= '9')
		|| (largeur.length() > 1 && largeur.front() == '-' && largeur.at(1) >= '0' && largeur.at(1) <= '9'))))
	{
		cout << "Erreur : Vous devez taper un nombre, pas un symbole." << endl;
		getline(cin, largeur, '\n');
	}
	largeurVer = stoi(largeur);

	//On dessine le rectangle et laisse l'utilisateur l'admirer
	if (remplis == 1)
		cout << "Voici un rectangle remplis de " << hauteurVer << "x" << largeurVer << ":";
	else
		cout << "Voici un rectangle vide de " << hauteurVer << "x" << largeurVer << ":";
	dessinerRectangle(hauteurVer, largeurVer, remplis);
	system("pause");

}

void traiterCarre(int remplis)
{
	//Déclaration des variables
	string hauteur;
	int hauteurVer;

	//Demande de hauteur
	cout << "Indiquer la hauteur : ";
	getline(cin, hauteur, '\n');
	while (!(!hauteur.empty() && ((hauteur.front() >= '0' && hauteur.front() <= '9')
		|| (hauteur.length() > 1 && hauteur.front() == '-' && hauteur.at(1) >= '0' && hauteur.at(1) <= '9'))))
	{
		cout << "Erreur : Vous devez taper un nombre, pas un symbole." << endl;
		getline(cin, hauteur, '\n');
	}
	hauteurVer = stoi(hauteur);

	//On dessine le carré et laisse l'utilisateur l'admirer
	//Dans le cas du carré la largeur est la même que la hauteur
	//On peut donc tout simplement utiliser dessinerRectangle avec la hauteur comme largeur
	if (remplis == 1)
		cout << "Voici un carré remplis de " << hauteurVer << "x" << hauteurVer << ":";
	else
		cout << "Voici un carré vide de " << hauteurVer << "x" << hauteurVer << ":";
	dessinerRectangle(hauteurVer, hauteurVer, remplis);
	system("pause");

}

void traiterTriangle(int remplis)
{
	//Déclaration des variables
	string hauteur;
	int hauteurVer;
	int alea = genererNombreAleatoire(1, 4);

	//Demande de hauteur
	cout << "Indiquer la hauteur : ";
	getline(cin, hauteur, '\n');
	while (!(!hauteur.empty() && ((hauteur.front() >= '0' && hauteur.front() <= '9')
		|| (hauteur.length() > 1 && hauteur.front() == '-' && hauteur.at(1) >= '0' && hauteur.at(1) <= '9'))))
	{
		cout << "Erreur : Vous devez taper un nombre, pas un symbole." << endl;
		getline(cin, hauteur, '\n');
	}
	hauteurVer = stoi(hauteur);

	if (remplis == 1)
		cout << "Voici un triangle remplis de " << hauteurVer << "x" << hauteurVer << ":";
	else
		cout << "Voici un triangle vide de " << hauteurVer << "x" << hauteurVer << ":";

	//La direction du triangle est choisie aléatoirement
	switch (alea)
	{
	case 1:
		dessinerTriangle1(hauteurVer, remplis);
		system("pause");
		break;
	case 2:
		dessinerTriangle2(hauteurVer, remplis);
		system("pause");
		break;
	case 3:
		dessinerTriangle3(hauteurVer, remplis);
		system("pause");
		break;
	case 4:
		dessinerTriangle4(hauteurVer, remplis);
		system("pause");
		break;
	}
}

void traiterLosange(int remplis)
{
	//Déclaration des variables
	string hauteur;
	int hauteurVer = 0;

	cout << "Indiquer la hauteur : ";
	getline(cin, hauteur, '\n');

	while (hauteurVer % 2 == 0)
	{
		//Verification si c'est un chiffre
		while (!(!hauteur.empty() && ((hauteur.front() >= '0' && hauteur.front() <= '9')
			|| (hauteur.length() > 1 && hauteur.front() == '-' && hauteur.at(1) >= '0' && hauteur.at(1) <= '9'))))
		{
			cout << "Erreur : Vous devez taper un nombre, pas un symbole." << endl;
			getline(cin, hauteur, '\n');
		}
		hauteurVer = stoi(hauteur);

		if (hauteurVer % 2 == 0) //Il faut verifier que c'est un nombre impair.
		{
			cout << "Erreur : Le nombre doit être impair." << endl;
			getline(cin, hauteur, '\n'); //Getline est le cin pour les string.
		}

	}

	if (remplis == 1)
		cout << "Voici un losange remplis de " << hauteurVer << "x" << hauteurVer << ":";
	else
		cout << "Voici un losange vide de " << hauteurVer << "x" << hauteurVer << ":";
	dessinerLosange(hauteurVer, remplis);
	system("pause");

}

void dessinerRectangle(int hauteur, int largeur, int remplis)
{
	//On efface le menu
	system("cls");

	//Remplis ou pas?
	char symbole;
	if (remplis == 1)
		symbole = '#';
	else
		symbole = ' ';

	//On imprime la forme à l'écran
	for (int range = 0; range < hauteur; range++)
	{
		for (int ligne = 0; ligne < largeur; ligne++)
		{
			//Dessus/Dessous
			if (range == 0 || range == hauteur - 1)
				cout << "*";

			//Millieu
			if (range > 0 && range < hauteur - 1)
				if (ligne == 0 || ligne == largeur - 1)
					cout << "*";
				else
					cout << symbole;
		}
		cout << endl;
	}
}

void dessinerTriangle1(int hauteur, int remplis)
{
	//On efface le menu
	system("cls");

	//Remplis ou pas?
	char symbole;
	if (remplis == 1)
		symbole = '#';
	else
		symbole = ' ';

	//On imprime la forme à l'écran
	for (int range = 0; range < hauteur; range++)
	{
		for (int ligne = 0; ligne < range + 1; ligne++)
		{

			if (ligne == 0 || ligne == range || range == hauteur - 1)
				cout << "*";
			else
				cout << symbole;
			
		}
		cout << endl;
	}
}

void dessinerTriangle2(int hauteur, int remplis)
{
	//On efface le menu
	system("cls");

	//Remplis ou pas?
	char symbole;
	if (remplis == 1)
		symbole = '#';
	else
		symbole = ' ';

	//On imprime la forme à l'écran
	for (int range = 0; range < hauteur; range++)
	{
		for (int ligne = 0; ligne < hauteur - range; ligne++)
		{
			if (range == 0)
				cout << "*";
			else
			{
				if (ligne == 0 || ligne == hauteur - range - 1)
					cout << "*";
				else
					cout << symbole;
			}
		}
		cout << endl;
	}
}

void dessinerTriangle3(int hauteur, int remplis)
{
	//On efface le menu
	system("cls");

	//Remplis ou pas?
	char symbole;
	if (remplis == 1)
		symbole = '#';
	else
		symbole = ' ';

	//On imprime la forme à l'écran
	for (int range = 0; range < hauteur; range++)
	{
		for (int ligne = 0; ligne < hauteur; ligne++)
		{
			if (ligne < range)
				cout << " ";
			if (ligne == range || ligne == hauteur - 1 || range == 0)
				cout << "*";
			if (range != 0 && ligne != hauteur - 1 && ligne > range )
				cout << symbole;
		}
		cout << endl;
	}
}

void dessinerTriangle4(int hauteur, int remplis)
{
	//On efface le menu
	system("cls");

	//Remplis ou pas?
	char symbole;
	if (remplis == 1)
		symbole = '#';
	else
		symbole = ' ';

	//On imprime la forme à l'écran
	for (int range = 0; range < hauteur; range++)
	{
		for (int ligne = 0; ligne < hauteur; ligne++)
		{
			if (ligne + range < hauteur - 1)
				cout << " ";
			if (ligne + range == hauteur - 1 || range == hauteur - 1 || ligne == hauteur - 1)
				cout << "*";
			if (ligne + range > hauteur - 1 && range != hauteur - 1 && ligne != hauteur - 1)
				cout << symbole;
		}
		cout << endl;
	}
}

void dessinerLosange(int hauteur, int remplis)
{
	//On efface le menu
	system("cls");

	//Remplis ou pas?
	char symbole;
	if (remplis == 1)
		symbole = '#';
	else
		symbole = ' ';

	
	//On imprime la forme à l'écran
	for (int y = 0; y < hauteur; y++)
	{
		for (int x = 0; x < hauteur; x++)
		{
			cout << "Erreur: Veuillez acheter la version complète du produit pour avoir accès au losanges." << endl;
			//IL M'ÉNÈRVE LE LOSANGE.
		}
		cout << endl;
	}
	
}

int genererNombreAleatoire(int min, int max)
{
	//Voici la formule qui permet de choisir un chiffre entre min et max
	return rand() % (max - min + 1) + min;
}
