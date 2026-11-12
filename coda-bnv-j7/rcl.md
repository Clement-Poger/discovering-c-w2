```c

char ** str_tab;

str_tab = &str_tab[0];
*str_tab = &str_tab[0][0];
**str_tab = str_tab[0][0];

```