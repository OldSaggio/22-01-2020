1)Nel file inversione.c implementare la definizione della seguente funzione:

    extern bool inverti_case(const char* nomefilein, const char* nomefileout);

La funzione accetta come parametro un nome di file di input (stringa C zero terminata) da aprire in modalità lettura tradotta (testo) e un nome di file di output (stringa C zero terminata) da aprire in modalità scrittura tradotta (testo). La funzione deve produrre un file di output con tutti i caratteri di quello di input, ma se i caratteri sono minuscoli deve renderli maiuscoli e viceversa.

Ad esempio, dato in input il file:

    abc123ABC!!!

in output produrrà

    ABC123abc!!!

La funzione ritorna false se non riesce ad aprire il file di input o di output.


2)Nel file stampa_a.c implementare la definizione della funzione:

    extern void stampa_a(uint8_t n);

La funzione stampa su stdout una lettera A maiuscola, costruita nel seguente modo:

    il lato obliquo sinistro è composto da n caratteri /.
    il lato obliquo destro è composto da n caratteri \.
    la linea orizzontale attraversa la riga centrale della figura ed è costituita da caratteri -.

Ad esempio, invocando la funzione con n=5, essa deve stampare

        /\    
       /  \   
      /----\  
     /      \ 
    /        \

Se n è un numero pari, o se è minore di 3, la funzione non stampa nulla.

3) Creare i file matrix.h e matrix.c che consentano di utilizzare la seguente struttura:

    struct matrix {
        size_t rows, cols;
        double *data;
    };

e la funzione:

    extern struct matrix *mat_delete_col(const struct matrix *m, size_t i);

La struct consente di rappresentare matrici di dimensioni arbitraria, dove rows è il numero di righe, cols è il numero di colonne e data è un puntatore a rows×cols valori di tipo double memorizzati per righe.
Consideriamo ad esempio la matrice

A=(123456)A=(14​25​36​)

questo corrisponderebbe ad una variabile struct matrix A, con A.rows = 2, A.cols = 3 e A.data che punta ad un'area di memoria contenente i valori { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 }.

La funzione accetta come parametri un puntatore ad una matrice m e un indice di colonna i e deve restituire un puntatore a una nuova matrice allocata dinamicamente. La matrice è ottenuta copiando i dati di quella di input ad eccezione della colonna i-esima, con i=0 per la prima colonna. Se i specifica una colonna non valida, se m ha una sola colonna, o se m è NULL, la funzione restituisce NULL.
Ad esempio, data la matrice

(123456789)⎝⎜⎛​147​258​369​⎠⎟⎞​

la funzione, chiamata con il parametro i uguale a 11, restituisce la nuova matrice

(134679)⎝⎜⎛​147​369​⎠⎟⎞​

4) Nel file somma_stringhe.c implementare la definizione della funzione:

    extern char *somma_stringhe(const char *a, const char *b);

La funzione riceve in input due puntatori a stringhe C a e b, ciascuna delle quali contiene la rappresentazione ASCII di un numero naturale composto da una quantità variabile di cifre, anche molto elevata.

La funzione deve restituire un puntatore ad una nuova stringa C allocata dinamicamente nella memoria heap, che rappresenta la somma di a e b. Il risultato non deve contenere zeri superflui prima della cifra più significativa.

Ad esempio, date le stringhe

    a = "12345"
    b = "111"

La funzione deve restituire la stringa

    "12456"

Se a e b rappresentano entrambe il numero "0", la funzione restituisce "0".

Se a o b valgono NULL, la funzione restituisce NULL.

Le stringhe di input saranno sempre correttamente formattate.


