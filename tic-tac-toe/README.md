# Tic-tac-toe en C

Ce projet est une version en ligne de commande du morpion, réalisée en C. Il
permet de jouer à deux ou contre un ordinateur, de configurer les couleurs des joueurs et de consulter des explications directement dans le jeu.

## Objectifs

Le projet met en pratique plusieurs notions de programmation en C :

- découpage d'un programme en fichiers source et en headers ;
- création, initialisation et libération dynamique d'un plateau ;
- validation des saisies utilisateur ;
- gestion de menus, de tours de jeu et de conditions de victoire ;
- utilisation de fonctions, de variables partagées et de chaînes ;
- recherche d'un coup par règles simples ou par l'algorithme Minimax ;
- affichage coloré dans un terminal compatible avec les séquences ANSI.

## Fonctionnalités

- **Joueur contre joueur** : deux joueurs jouent à tour de rôle.
- **Joueur contre ordinateur** : l'ordinateur choisit un coup selon le niveau
  sélectionné.
- **Trois niveaux de difficulté** :
  - *Facile* : choisit la première case libre ;
  - *Normal* : cherche à gagner, bloque une victoire imminente, puis privilégie
    le centre et les coins ;
  - *Hardcore* : explore les coups possibles avec Minimax.
- **Couleurs configurables** : chaque joueur peut choisir une couleur différente.
- **Explications intégrées** : rappels sur les positions du plateau, les couleurs
  et les niveaux de l'ordinateur.
- **Saisie contrôlée** : les choix de menu et les positions sont vérifiés avant
  d'être utilisés.

## Règles et commandes

Le plateau comporte neuf cases, numérotées de `0` à `8`, de gauche à droite et
de haut en bas :

```text
0 | 1 | 2
---------
3 | 4 | 5
---------
6 | 7 | 8
```

Entrez le numéro d'une case libre à votre tour. Une ligne gagnante est composée
de trois symboles identiques alignés horizontalement, verticalement ou en
diagonale. Une partie s'arrête lorsqu'un joueur gagne ou que toutes les cases
sont occupées.

Dans le menu principal :

1. **Jouer** : choisir le mode de jeu ;
2. **Configuration** : choisir les couleurs des joueurs ;
3. **Explications** : parcourir les écrans d'aide.

Dans le choix du mode, l'option `1` lance une partie contre l'ordinateur et
l'option `2` une partie à deux joueurs. Lors du choix des couleurs, les options
Dans le choix des couleurs, `1` et `3` changent respectivement la couleur du joueur 1 et du joueur 2 ; les options `2` et `4` confirment leur choix.

## Compilation et lancement

Depuis le dossier du projet :

```sh
make all
./tic_tac_toe
```

La commande `make all` compile les fichiers C avec les options `-Wall -Wextra -O3` et produit l'exécutable `tic_tac_toe`.

Commandes Makefile disponibles :

```sh
make re       # Nettoie puis recompile le projet
make fclean   # Supprime l'exécutable généré
```

## Organisation du projet

```text
tic-tac-toe/
├── header/            # Déclarations des fonctions et de l'état partagé
├── src/
│   ├── ai/            # Choix des coups et recherche Minimax
│   ├── board/         # Création, contrôle et analyse du plateau
│   ├── game/          # Sélection du mode et boucles de jeu
│   ├── input/         # Lecture et validation des saisies
│   ├── settings/      # Configuration des couleurs et de la difficulté
│   ├── ui/            # Affichage du plateau, des résultats et des explications
│   └── utils/         # Fonctions utilitaires sur les chaînes
├── main.c             # Menu principal et variables partagées
├── Makefile           # Compilation du projet
└── AIDE_EXTERIEURE.md # Références utilisées pendant le développement
```

## Remarque

Le plateau plein met fin à la partie. Le message d'égalité en mode deux joueurs
mérite toutefois une vérification : le code de résultat ne traite pas encore
cette valeur de fin de partie de la même façon que celle du mode contre
l'ordinateur.