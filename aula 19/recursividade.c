int somaNaturais(int n) {
    if(n == 0) return 0;
    else return (n + somaNaturais(n-1));
}

int fibo(int n) {
    if(n == 1) return 0;
    else if(n == 2) return 1;
        else return fibo(n-1) + fibo(n-2);
}