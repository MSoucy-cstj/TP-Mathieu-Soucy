//But: Déclarer les fonctions requise pour les menus.
//Auteur: Mathieu Soucy
//Date: 2020-10-30

#pragma once

// La liste des prototypes des fonctions permettant d'afficher et de valider les choix faits dans les menus
void afficherMenu1(); //Fonction qui affiche le menu 1 
void afficherMenu2(); //Fonction qui affiche le menu 2 
int validerMenu(int menuActuel, int nombreChoix); //Fonction qui lit le choix de l’utilisateur et vérifie que le choix est bien parmi les choix offerts dans le menu, informations passées en paramètre.Cette fonction retourne le choix validé.L’utilisateur peut taper n’importe quoi au clavier, le programme ne part pas en boucle infinie.
