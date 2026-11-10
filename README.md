# Découverte du C - Semaine 2

Ce dossier contient les projets de la deuxième semaine de découverte du C.

## Objectif

Approfondir les notions déjà vues en travaillant sur :
- les fonctions et leur séparation en fichiers,
- les chaînes de caractères,
- la modularisation du code,
- la gestion des opérations et des validations,
- la manipulation d'entrées utilisateur plus structurées.

## Projets présents

### 1. `coda-bnv-j5`
Ensemble d'exercices et de bonus centrés sur l'apprentissage de la programmation C.

#### Exercices
- `ex-1` : affichage d'une chaîne saisie par l'utilisateur,
- `ex-2` : utilisation de fonctions et calcul de moyenne,
- `ex-3` et `ex-4` : exercices de logique et d'organisation du code,
- `ex-5` : fonctions et calculs plus structurés.

#### Bonus
- `bonus-1` : calculatrice avec validation d'opérations et couleurs,
- `bonus-2` : exercices complémentaires de logique et de calcul.

### 2. `coda-bnv-j6`
#### Projet dédié aux chaînes de caractères et aux fonctions utilitaires.
- `str_len` : calcul de la longueur d'une chaîne,
- `str_rev` : inversion d'une chaîne,
- `str_cmp` : comparaison de deux chaînes,
- affichage des résultats dans le `main.c`.

#### Projet dédié aux pointeurs.
- `count_words` : calcul du nombre de mot d'une chaîne,
- `revert_words` : inversion d'une chaîne,
- `str_len` : calcul de la longueur d'une chaîne,
- `swap_ptr` : échange de deux variables,
- affichage des résultats dans le `main.c`.

#### Projet dédié aux listes et pointeurs.
- `sort_number` : trieur global,
- `sort_number_asc` : trier dans l'ordre croissant une liste de nombre,
- `sort_number_dsc` : trier dans l'ordre décroissant une liste de nombre,
- affichage des résultats dans le `main.c`.

### 3. `coda-bnv-j7`

### 4. `coda-bnv-j8`

## Compilation

Chaque dossier peut être compilé indépendamment avec :

```bash
gcc main.c -o programme
./programme
```

Pour les projets modulaires, il peut aussi être nécessaire de compiler plusieurs fichiers sources ensemble.

Lancez les commandes depuis le dossier du projet concerné. Si le projet contient plusieurs fichiers source, indiquez-les tous lors de la compilation, par exemple :

```bash
gcc main.c fonctions.c -o programme
```

Remplacez `fonctions.c` par le nom du fichier source à compiler avec `main.c`.

## Compétences couvertes

- fonctions séparées dans plusieurs fichiers,
- prototypes et headers,
- manipulations de chaînes,
- logique de validation,
- code plus lisible et réutilisable.

## Résumé

La semaine 2 met l'accent sur la structuration du code et sur les manipulations un peu plus avancées du langage C, en particulier via les fonctions et les chaînes de caractères.
