typedef int inteiro;

typedef enum _TMes {
    janeiro, fevereiro, dezembro
} TMes;

typedef struct _TData_ {
    inteiro dia, ano;
    TMes mes;
} TData;


main() {
    TData data;
}