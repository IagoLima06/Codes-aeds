#include <stdio.h>

int main() {
    int votos_candidatos[4] = {0};
    int votos_nulos = 0;
    int votos_brancos = 0;
    int voto;

    scanf("%d", &voto);

    while (voto != 0) {
        switch (voto) {
            case 1:
            case 2:
            case 3:
            case 4:
                votos_candidatos[voto - 1]++;
                break;
            case 5:
                votos_nulos++;
                break;
            case 6:
                votos_brancos++;
                break;
        }

        scanf("%d", &voto);
    }

    int total_votos = votos_nulos + votos_brancos;
    for (int i = 0; i < 4; i++) {
        total_votos += votos_candidatos[i];
    }


    printf("%d %d %d %d\n", votos_candidatos[0], votos_candidatos[1], votos_candidatos[2], votos_candidatos[3]);
    printf("%d\n", votos_nulos);
    printf("%.2f\n", (float)votos_brancos / total_votos * 100);
}