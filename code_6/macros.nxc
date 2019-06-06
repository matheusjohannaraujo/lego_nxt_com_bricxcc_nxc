
// Criando uma macro de nome "imprimirNoDisplay", que recebe um valor como parametro.
#define imprimirNoDisplay(valor){\
    ClearScreen();\
    TextOut(0, LCD_LINE1,  valor);\
}

// Tarefa principal.
task main(){
    // Chama a funcao (macro) passando um valor como parametro.
    imprimirNoDisplay("Hello World");
    // Espera 10 segundos.
    Wait(10000);
}
