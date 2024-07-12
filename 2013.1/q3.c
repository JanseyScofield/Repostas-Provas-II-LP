int main()
{
    int num;
    int pri2Digitos, ult2Digitos;
    int somaDigitos, somaDigitosQuad;
    
    for(num = 0; num < 10000; num ++){
        pri2Digitos = num / 100;
        ult2Digitos = num % 100;
        somaDigitos = pri2Digitos + ult2Digitos;
        somaDigitosQuad = somaDigitos*somaDigitos;
        if(somaDigitosQuad == num)
            printf("%d ", num);
    }
    return 0;
}
