#include <stdio.h>
#include <locale.h>

int main() {
    int idade;
    setlocale ( LC_ALL, "Potuguese");
    printf("Digite a idade do nadador:\n>>");
    scanf("%i", &idade);
    if (idade<=10){
        printf("Sua categoria � infantil");
    } else if (idade<=17){
        printf("Sua categoria � juvenil");
    } else {
        printf("Sua categoria � s�nior");
    }
    return 0;
    }

