#include <stdio.h>

void NotenArray ();

void ZweiDimensionalerArray1 ();

void ZweiDimensionalerArray2 ();

int main(void)
{
    int aufgabe;
    printf( "Waehle (1) fuer Notenaufgabe\n"
                  "Waehle (2) fuer Schachbrett1\n"
                  "Waehle (3) fuer Schachbrett2\n");

    scanf("%d)",&aufgabe);

    if (aufgabe==1) {
        NotenArray ();
    }
    else if (aufgabe == 2) {
        ZweiDimensionalerArray1 ();
    }
    else if (aufgabe == 3) {
        ZweiDimensionalerArray2 ();
    }
    else {
        printf("ungueltioge eingabe, das Programm mus neu gestartet werden");
    }
    return 0;
}

void NotenArray(){
    // Hier soll die Notenaufgabe stehen:
    int Summe = 0;
    float Durchschnitt;
    int Noten[10] ;

    for (int i=0; i<10; i++) {
        printf("Geben sie die %d. Note ein :", i+1 );
        scanf("%d", &Noten[i]);

        if (Noten[i]>6) {
            printf("Eine Note wurde falsch eingegeben, bitte starte erneut!");
            return 1 ;
        }
        Summe += Noten[i];
    }
    Durchschnitt = Summe /10.0;

    printf("Die Summe der Noten betraegt: %d\n", Summe);
    printf("Der Durchschnitt betraegt: %.2f\n", Durchschnitt);
}

void ZweiDimensionalerArray1(){
        // Hier soll die Schachbrettaufgabe stehen

        int zahlen [5] [5] = {0};
            zahlen[0][0] = 1;
            zahlen[0][4] = 1;
            zahlen[1][1] = 1;
            zahlen[1][3] = 1;
            zahlen[2][2] = 1;
            zahlen[3][2] = 1;
            zahlen[4][0] = 1;
            zahlen[4][4] = 1;

        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                printf("%d ", zahlen[i][j]);
            }
            printf("\n");
        }
    }
        void ZweiDimensionalerArray2() {
    // 2. Schachbrettaufgabe

    int werte [4] = {5, 0, 1, 2, 0};

    for (int i = 0; i>5; i++) {
        for (int j = 0; j>5; j++) {
            if(j < werte[i]){
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
    } printf("\n");

    return 0;
}