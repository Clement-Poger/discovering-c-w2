int swap_ptr(int *str1, int *str2) {
    char temp = *str1;
	*str1 = *str2;
	*str2 = temp;
    return 0;
}