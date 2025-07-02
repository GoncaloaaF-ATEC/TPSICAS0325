#include <stdio.h>

typedef struct pessoa {
    char nome[50];
    int idade;
} Pessoa;
void savePessoa();
void loadPessoa();
void loadMultiPessoa();
void saveMultiPessoa();

int main(void) {
    //savePessoa();
  // loadPessoa();
   //  loadMultiPessoa();
    saveMultiPessoa();
    return 0;
}

void loadMultiPessoa() {
    Pessoa pessoa[3];

    FILE *myFile;

    myFile = fopen("../pessoa.bin", "rb");
    fread(&pessoa, sizeof(Pessoa), 3, myFile);

    fclose(myFile);

    printf("lista de pessoas");

    for (int i = 0; i < 3; i++) {
        printf("\npessoa %d:", i + 1);
        printf("\nNome: %s", pessoa[i].nome);
        printf("\nIdade: %d", pessoa[i].idade);
        printf("\n-------------\n");
    }

    printf("fim lista de pessoas");

}
void loadPessoa() {
    Pessoa pessoa;

    FILE *myFile;

    myFile = fopen("../pessoa.bin", "rb");

    fread(&pessoa, sizeof(Pessoa), 1, myFile);
    printf("Nome: %s\nidade: %d \n\n", pessoa.nome, pessoa.idade);

    fread(&pessoa, sizeof(Pessoa), 1, myFile);
    printf("Nome: %s\nidade: %d \n\n", pessoa.nome, pessoa.idade);

    fread(&pessoa, sizeof(Pessoa), 1, myFile);
    printf("Nome: %s\nidade: %d \n\n", pessoa.nome, pessoa.idade);

    fclose(myFile);
}
void saveMultiPessoa() {
    Pessoa pessoa[3] = {{"Maria", 19},
{"Rita", 19},
{"Ana", 19}
    };

    FILE *myFile;

    myFile = fopen("../pessoa2.bin", "ab");

    fwrite(&pessoa, sizeof(Pessoa), 3, myFile);

    fclose(myFile);


}
void savePessoa() {

    Pessoa pessoa = {"Maria", 19};

    FILE *myFile;

    myFile = fopen("../pessoa.bin", "ab");

    fwrite(&pessoa, sizeof(Pessoa), 1, myFile);

    fclose(myFile);

}