#!/bin/bash

read -ep $'Quel est le nom du projet (sans espace) ? \n' name

mkdir "./$name" && echo "Dossier du projet crée."
echo -e "#include <stdio.h>\n#include <stdlib.h>\n\nint main() {\n\nreturn 0;\n}" > "./$name/main.c" && echo "Fichier main.c crée."
echo -e "#ifndef __PROJECT_H__\n#define __PROJECT_H__\n\n\n#endif" > "./$name/$name.h" && echo "Fichier $name.h crée."

echo "Fini!"