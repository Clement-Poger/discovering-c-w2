#!/bin/bash

read -ep $'Entrez un nombre de minutes : \n' total

minutes=$((total % 60))
hours=$((total / 60))
echo "$total minutes c'est l'équivalent de $hours et $minutes minutes."