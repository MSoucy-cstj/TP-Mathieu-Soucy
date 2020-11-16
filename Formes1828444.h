//But: D�clarer les fonctions requise pour dessiner les formes.
//Auteur: Mathieu Soucy
//Date: 2020-10-30

#include <string>
#pragma once

//La liste des fonctions qui permettent de dessiner les formes
//Ces fonctions, selon la forme, demandent les dimensions de la forme, affichent la phrase de pr�sentation de la forme avec les bonnes dimensions et finalement appellent la fonction dessinant la forme.Il y aura donc 4 versions de cette fonction : traiterRectangle(), traiterCarre(), traiterTriangle(), traiterLosange().
void traiterRectangle(int remplis);
void traiterCarre(int remplis);
void traiterTriangle(int remplis);
void traiterLosange(int remplis);

void dessinerRectangle(int hauteur, int largeur, int remplis); // Fonction qui dessine un rectangle ou un carr� dont la hauteur, la largeur et le mode de remplissage sont pass�s en param�tre.
void dessinerTriangle1(int hauteur, int remplis); // Fonction qui dessine un triangle dans la position 1 dont la hauteur et le mode de remplissage sont pass�s en param�tre.
void dessinerTriangle2(int hauteur, int remplis); // Fonction qui dessine un triangle dans la position 2 dont la hauteur et le mode de remplissage sont pass�s en param�tre.
void dessinerTriangle3(int hauteur, int remplis); // Fonction qui dessine un triangle dans la position 3 dont la hauteur et le mode de remplissage sont pass�s en param�tre.
void dessinerTriangle4(int hauteur, int remplis); // Fonction qui dessine un triangle dans la position 4 dont la hauteur et le mode de remplissage sont pass�s en param�tre.
void dessinerLosange(int hauteur, int remplis);  // Fonction qui dessine un losange dont la hauteur et le mode de remplissage sont pass�s en param�tre.
int genererNombreAleatoire(int min, int max);  //Fonction qui retourne un nombre al�atoire compris entre min et max pass�s en param�tre.