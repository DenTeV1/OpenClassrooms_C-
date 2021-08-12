#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() 
{
	/*
	// Test avec OpenClassrooms
	
	int ageUtilisateur(16);
	int nombreAmis(3); // Amis de l'utilisateur

	double poidJambo(2.3);

	bool estMonAmi(true);

	char lettre('a');
	string pseudo("DenTe");

	cout << "Votre nom est : " << pseudo << " et votre age est : " << ageUtilisateur << endl;

	string& maVariable(pseudo);
	cout << maVariable << endl;
	cout << "Votre pseudo est " << maVariable << " et votre age est " << ageUtilisateur << endl;

	cout << "Quel est le nombre de velos ? : " ;

	int nombreDeVelo(0);
	cin >> nombreDeVelo;

	cout << "Il y a " << nombreDeVelo << " velos " << endl;



	// Test fait par moi même
	cout << "Avez vous un chien ? : ";

	string chien("");

	cin >> chien;

	if (chien == "oui")
	{
		cout << "Vous avez un chien ! " << endl;
	}
	else
	{
		cout << "Vous n'avez pas de chien ! " << endl; 
	}

int chat(3); 
	int dog(2); 
	int somme(chat + dog);
	cout << somme << endl;

	cout << "Bonjour " << pseudo << " ecris une lettre a la quel tu pense : ";  
	char alpha('a');
	cin >> alpha;
	cout << "Tu pense actuellement a la lettre (" << alpha << ")." << endl;
	



	// test avec la fonction getline()
	cout << "Quel est votre nom ?" << endl;
	string nomUtilisateur("Sans nom"); //On crée une case mémoire pour contenir une chaine de caractères

	getline(cin, nomUtilisateur); //On remplit cette case avec toute la ligne que l'utilisateur a écrit

	cout << "Combien vaut pi ?" << endl;
	double piUtilisateur(-1.); //On crée une case mémoire pour stockerun nombre réel
	cin >> piUtilisateur; //Et on remplit cette case avec ce qu'écritl'utilisateur

	cout << "Vous vous appelez " << nomUtilisateur << " et vous pensez que pi vaut " << piUtilisateur << "." << endl;
	

	 cout << "Combien de chiens avez vous ? : "; 
	int nombreChien(0);
	cin >> nombreChien;
	cin.ignore(); // Pour eviter que le programme fasse n'importe quoi au lieu de demander le nom (toujours apres le {cin >>} si on veut recuperer une ligne apres avec {getline(cin, nomDeLaFonction)}) ! 

	cout << "Quel est votre nom complet ? : ";
	string nomComplet("Sans nom"); 

	getline(cin, nomComplet); 

	cout << "Bienvenue " << nomComplet << " ! " << "Vous avez " <<  nombreChien << " chien(s) ! " << endl;
	

	
	// calcul et remplacement de valuer dans variablesS
	int nombre(5);

	cout << nombre << endl;

	nombre = 3;

	cout << nombre << endl; 
	
	int a(2), b(3);
	cout << a << endl;

	a = b * 3;
	cout << a << endl;

	a = b + 3;
	cout << a << endl;

		a = b - 3;
	cout << a << endl;

	a = b / 3;
	cout << a << endl;

	a = b;
	cout << a << endl;

	int c(1), d(2), resultat(0);
	resultat = c + d;
	
	cout << "resultat = " << resultat << endl;	
	
	// exercices du cours (coder uniquement par )
	double a(0), b(0), c(0);


	cout << "Veuillez entrer votre premier nombre svp : ";
	cin >> a;
	cin.ignore();

	cout << "Veuillez entrer votre deuxieme nombre svp : ";
	cin >> b;
	cin.ignore();

	cout << "Veuillez entrer votre troisieme nombre svp : ";
	cin >> c;
	cin.ignore();

	double result(a + b * c);

	cout << a << " + " << b << " x " << c << " = " << result << endl;
	

	// Raccourci math
	int nbJoueurs(4);
	++nbJoueurs; // C'est comme faire nbJoueurs += 1 en python
	--nbJoueurs; // C'est comme faire nbJoueurs = nbJoueurs - 1 en python ou C++
	nbJoueurs /= nbJoueurs; // Pas besoin d'expliquer
	nbJoueurs *= nbJoueurs; // Pas besoin d'expliquer nn plus 
	

	int nbEnfants(2);


	if (nbEnfants > 0)
	{
		cout << "Bravo vous avez des enfants" << endl;
	}

	else if (nbEnfants == 0)
	{
		cout << "Vous n'avez pas d'enfants" << endl;
	}

	cout << "Fin du programme ! " << endl;


	int nbEnfants(2);

	switch (nbEnfants)
	{
	case 0:
		cout << "Eh bien alors, vous n'avez pas d'enfant ?" << endl;
		break;

	case 1:
		cout << "Alors, c'est pour quand le deuxieme ?" << endl;
		break;

	case 2:
		cout << "Quels beaux enfants vous avez la !" << endl;
		break;

	default:
		cout << "Bon, il faut arreter de faire des gosses maintenant !" << endl;
		break;
	}


	int age(2);
	switch (age)
	{
	case 16:
		cout << "Vous avez le droit d'acceder au logiciel" << endl;
		break;

	case 2:
		cout << "Tu est serieux tu as 2 ans " << endl;

		break;

	case 5:
		cout << "Tu as encore 5 ans tu est trop jeune " << endl;
		
		break;
		
		
		
	}
	


	bool garcon(true);
	int nbEnfants(4);


	if (garcon && nbEnfants > 2)
	{
		cout << "vous etes un garcon ! " << endl;
	}

	else if (!garcon)
	{
		cout << "Vous n'etes pas un garcon !" << endl;
	}
	// ||||| Alt Gr + & (& = 1)

	*/

	double nb1(0), nb2(0), result(0);
	
	cout << "Veuillez choisir un premier nombre : ";
	cin >> nb1;

	cout << "Veuillez choisir un deuxieme nombre : ";
	cin >> nb2;

	int choix(0);
	cout << "1 = addition\n" << "2 = soustraction\n" << "3 = mutliplication\n" << "4 = division\n";
	cout << "Veuillez choisir une aoperation a effectuer : ";
	cin >> choix;
	
	/*if (choix == 1)
	{
		double result = nb1 + nb2;
		cout << nb1 << " + " << nb2 << " = " << result << endl;
	}*/

	switch (choix)
	{
	case 1:
		
		result = nb1 + nb2;
		cout << nb1 << " + " << nb2 << " = " << result << endl;
	
		break;

	case 2: 

		result = nb1 - nb2;
		cout << nb1 << " - " << nb2 << " = " << result << endl;
		
		break;

	case 3:

		result = nb1 * nb2;
		cout << nb1 << " x " << nb2 << " = " << result << endl;
		
		break;

	case 4: 

		result = nb1 / nb2;
		cout << nb1 << " : " << nb2 << " = " << result << endl;

		break;

	default:
		cout << "Selectionne un nombre entre 1 et 4 ! " << endl;
	}

	return 0;

	
}