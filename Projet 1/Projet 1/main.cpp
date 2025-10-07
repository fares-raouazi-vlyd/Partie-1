#include <iostream>

void TailleFichier()
{
    int size;

    std::cout << "What is the size of your file in kilo-bytes ?" << std::endl;
    std::cin >> size;
    int bytes = size * 1024;
    int bits = bytes * 8;
    std::cout << "Size of your file in bytes : " << bytes << std::endl;
    std::cout << "Size of your file in bits : " << bits << std::endl;

}
void MoyenneAchatJeux()
{
    float amount;
    int nb_jeu;

    std::cout << "Quel est le montant total depense ?" << std::endl;
    std::cin >> amount;
    std::cout << "Combien de jeux ont ete achetes ?" << std::endl;
    std::cin >> nb_jeu;

    float prix_moyen = amount / nb_jeu;

    std::cout << "Prix moyen par jeu : " << prix_moyen << std::endl;
}
void Ascii() 
{
    
    std::cout << "Saisir un charactere : " << std::endl;
    char c;
    std::cin >> c;
    std::cout << "Code ASCII du caractere " << c << " : " << (int) c << std::endl;

    std::cout << "Entrer un nombre entre 0 et 127 : " << std::endl;
    int i;
    std::cin >> i;
    std::cout << "Caractere correspondant au code ASCII " << i << " : " << (char)i << std::endl;
}
void Classement()
{
    std::cout << "Taux de reussite : " << std::endl;
    int percent;
    std::cin >> percent;
    if (percent >= 0 and percent < 50)
    {
        std::cout << "Bronze" << std::endl;
    }
    else if (percent >= 50 and percent < 70)
    {
        std::cout << "Argent" << std::endl;
    }
    else if (percent >= 70 and percent < 90)
    {
        std::cout << "Or" << std::endl;
    }
    else if (percent >= 90 and percent <= 100)
    {
        std::cout << "Legende" << std::endl;
    }
}
void NombreNegatif()
{
    for (int n = -1; n < 0;)
    {
		std::cout << "Nombre ?" << std::endl;
		std::cin >> n;
    }
}
void ScoreTotal()
{
	int mission;
	int score_total = 0;
	std::cout << "Nombre de missions ?" << std::endl;
	std::cin >> mission;
    for (int i = 0; i < mission; i++)
    {
		int score;
		std::cout << "Score de la mission " << i+1 << " ?" << std::endl;
		std::cin >> score;
		score_total += score;
    }
	std::cout << "Score total : " << score_total << std::endl;
}
int BarreProgression(int pourcentage)
{
	int x = pourcentage / 10;
    std::cout << "[";
    for (int i = 0; i < 10; i++)
    {
        if (i < x)
        {
            std::cout << "#";
        }
        else
        {
            std::cout << ".";
        }
	}
    std::cout << "]" << std::endl;
    return 0;
}
int ScoreManche(int kill, int death)
{
    int scoreManche = (kill * 50) - (death * 30);
if (scoreManche < 0) scoreManche = 0;
if (scoreManche > 1000) scoreManche = 1000;

        return scoreManche;
}
void Manche()
{
    std::cout << "Kills (manche 1) ? " << std::endl;
    int km1;
    std::cin >> km1;
    std::cout << "Deaths (manche 1) ? " << std::endl;
    int dm1;
    std::cin >> dm1;
    std::cout << "Kills (manche 2) ? " << std::endl;
    int km2;
    std::cin >> km2;
    std::cout << "Deaths (manche 2) ? " << std::endl;
    int dm2;
    std::cin >> dm2;
    int m1 = ScoreManche(km1, dm1);
    int m2 = ScoreManche(km2, dm2);
    std::cout << "Score total: " << m1 + m2<< std::endl;
}
void EmpruntBibliotheque()
{
    int premium;
    int emprunt;
    std::cout << "Nombre d'emprunts en cours ? " << std::endl;
    std::cin >> emprunt;
    std::cout << "Carte premium ? " << std::endl;
    std::cin >> premium;
    if (emprunt < 3 || premium == 1 && emprunt < 5)
    {
        std::cout << "Autorise" << std::endl;
    }
    else
    {
        std::cout << "Refuse" << std::endl;
    }
}
void Calculatrice()
{
    int v1;
    int v2;
    char operateur;
    std::cout << "a ? " << std::endl;
    std::cin >> v1;
    std::cout << "b ? " << std::endl;
    std::cin >> v2;
    std::cout << "operateur (+ - * /) ? " << std::endl;
    std::cin >> operateur;
    int ope = (int)operateur;
    if (ope == 47 && v1 == 0 || v2 == 0)
    {
        std::cout << "Impossible de diviser par 0" << std::endl;
    }
    else
    {
        switch (ope)
        {
        case 43:
            std::cout << v1 << " " << operateur << " " << v2 << " = " << v1 + v2 << std::endl;
            break;
        case 45:
            std::cout << v1 << " " << operateur << " " << v2 << " = " << v1 - v2 << std::endl;
            break;
        case 42:
            std::cout << v1 << " " << operateur << " " << v2 << " = " << v1 * v2 << std::endl;
            break;
        case 47:
            std::cout << v1 << " " << operateur << " " << v2 << " = " << v1 / v2 << std::endl;
            break;
        default:
            std::cout << "Operateur inconnu" << std::endl;
            break;
        }
    }
}
int main()
{
    return 0;
}