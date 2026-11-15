# Aide exterieure et references

Ce fichier recense les liens externes deja cites dans les commentaires des fichiers fournis. Les extraits ci-dessous montrent les elements de code associes dans ce fichier; ils sont courts et servent a en identifier l'usage. Certains ne sont pas rendu à 100% et passent par une session de bidouillage.

## References utilisees

| Lien | Quoi ? | Pourquoi ? |
|---|---|---|
| [Table de couleurs ANSI (Gist)](https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a) | Couleurs dans le Terminal. | Rendre les messages de succes, d'erreur et les titres plus faciles a distinguer dans le terminal. |
| [Repeat a string - C (Rosetta Code)](https://rosettacode.org/wiki/Repeat_a_string#C) | Répéter un caractère n fois. | Certaines "box" ont des textes centrés et necessite de calculer leur position. |
| [Algorithme Minimax (Medium)](https://medium.com/@mhhassaan.1/mini-max-algorithm-in-artificial-intelligence-e0a0da694b3b) | Algorithme d'optimisation d'une réponse. | Trouver le meilleur choix au morpion. |
| [Problème avec system() (Stack Overflow)](https://stackoverflow.com/questions/9150397/warning-ignoring-return-value-of-system-c) | Gestion de system(). | Considère le cas où la commande système failli. |

## Extraits associes

### Couleurs du terminal

```c
#define GRN "\033[0;32m"
#define RED "\033[0;31m"
#define CRESET "\033[0m"
```

La sequence ANSI choisit une couleur; la sequence de remise a zero evite que cette couleur ne deborde sur le texte suivant.

### Repetition d'un caractere

```c
memset(buffer, caractere, longueur);
buffer[longueur] = '\0';
```

Le tampon est rempli avec le caractere demande puis termine comme une chaine C.

### Algorithme Minimax

```c
int minimax(int board[3][3], int joueur, int profondeur) {
    if (victoire(board, joueur)) return 10 - profondeur;
    if (matchNul(board)) return 0;

    int meilleurScore = (joueur == IA) ? INT_MIN : INT_MAX;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == VIDE) {
                board[i][j] = joueur;
                int score = minimax(board, -joueur, profondeur + 1);
                board[i][j] = VIDE;

                meilleurScore = (joueur == IA)
                    ? max(meilleurScore, score)
                    : min(meilleurScore, score);
            }
        }
    }
    return meilleurScore;
}
```

L'idee est de simuler les coups possibles et de noter leur score. Le joueur IA cherche a maximiser le score, tandis que l'adversaire cherche a le minimiser.

### Gestion de system()

```c
if (system("clear") == -1) {
    fprintf(stderr, "Erreur : impossible de nettoyer le terminal.\n");
    return 1;
}
```

Le retour de `system()` est verifie pour eviter de supposer que la commande s'est executee correctement. Cela permet de gérer proprement un echec systeme ou une plateforme differente.

## Assignation de variable sous condition
Dans le programme, j'utilise des assignations de variables sous condition pour simplifier le code. Je n'ai pas trouvé cela depuis une source externe, dans le cours, ou par IA.
C'est une technique que j'ai decouverte en apprenant le language JavaScript, qui me semble très similaire au C dans sa structure et sa syntaxe. Cela consiste à assigner une valeur à une variable en fonction d'une condition, ce qui permet de réduire le nombre de lignes de code et d'améliorer la lisibilité. Par exemple, au lieu d'écrire :

```c
if (condition) {
    variable = valeur1;
} else {
    variable = valeur2;
}
```

On peut écrire :

```c
variable = condition ? valeur1 : valeur2;
```