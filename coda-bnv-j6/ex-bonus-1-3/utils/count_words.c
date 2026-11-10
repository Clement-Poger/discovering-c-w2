int count_words(char *str) { 
    int i = 1;
    int wc = 0;
    while (str[i] != '\0') {
        if (str[i] == 32 && str[i-1] != 32) {
            wc++;
        }
        i++;
    }
    wc++;
    return wc;
}
