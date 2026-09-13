#include <stdio.h>
#include <string.h>

int main() {
    char str[100], encrypted[100], decrypted[100];
    int i;
    FILE *fp;


    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

  
    if (str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';

    printf("Normal Text: %s\n", str);

    for (i = 0; str[i] != '\0'; i++) {
        encrypted[i] = str[i] + (i + 1); 
    }
    encrypted[i] = '\0';

    fp = fopen("Encrypted.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fputs(encrypted, fp);
    fclose(fp);
    printf("Encrypted Text inserted in file: %s\n", encrypted);

    fp = fopen("Encrypted.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    i = 0;
    while ((decrypted[i] = fgetc(fp)) != EOF) 
	{
        decrypted[i] = decrypted[i] - (i + 1);
        i++;
    }
    decrypted[i] = '\0';
    fclose(fp);

	printf("Decrypted Text Read then decoded from file: %s\n", decrypted);

    return 0;
}
