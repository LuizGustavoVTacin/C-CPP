#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f;
    f = fopen("arquivo.txt", "w");
    // fputc
    fputc('a',f);
    // fputs
    fputc('\n',f);
    fputs("ola classe!\n", f);
    fclose(f);
    // fgetc
    char c;
    f = fopen("arquivo.txt", "r");
    while((c = fgetc(f)) != EOF)
        printf("%c", c);
    printf("\n");
    fclose(f);
    // fgets
    char str[81];
    f = fopen("arquivo.txt", "r");
    if(f == NULL) {
        exit(1);
    }
    while(fgets(str, 80, f) != NULL)
        printf("%s", str);
    fclose(f);
    // fprint
    char titulo[30] = "Vidas secas";
    int regnum = 123;
    float preco = 19.90;
    f = fopen("arquivo.txt", "w");
    fprintf(f, "%s %d %.2f\n", titulo, regnum, preco);
    fclose(f);
    // fscanf
    f = fopen("arquivo.txt", "r");
    if(fscanf(f, "%s %d %f", titulo, &regnum, &preco) != EOF)
        printf("%s %d %.2f\n", titulo, regnum, preco);
    fclose(f);
    // fread e fwrite
    char orig[] = "origem.txt";
    char dest[] = "destino.txt";
    unsigned char buffer[1024];
    FILE *f_orig, *f_dest;
    int bytes_lidos;
    if((f_orig = fopen(orig, "rb")) == NULL) exit(1);
    if((f_dest = fopen(dest, "wb")) == NULL) exit(1);
    do {
        bytes_lidos = fread(buffer, sizeof(char), sizeof(buffer), f_orig);
        fwrite(buffer, sizeof(char), bytes_lidos, f_dest);
    } while(bytes_lidos);
    fclose(f_orig);
    fclose(f_dest);
}