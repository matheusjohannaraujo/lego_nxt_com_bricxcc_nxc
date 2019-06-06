
// Tarefa principal.
task main(){
    // Definindo as variaveis "A e B" do tipo inteiro.
    int a = 2, b = 1;

    // Estrutura Condicional do tipo "IF ELSE" (Se Senao).
    if(a > b){ // Se "A for maior que B" ou "True" (verdade) faca.
        TextOut(0, LCD_LINE1,  "A maior que B");
    }else if(a < b){ // Senao, Se "A for menor que B" ou "True" (verdade) faca.
        TextOut(0, LCD_LINE1,  "A menor que B");
    }else if(a == b){ // Senao, Se "A for igual a B" ou "True" (verdade) faca.
        TextOut(0, LCD_LINE1,  "A igual a B");
    }

    // Espera 2 segundos.
    Wait(2000);

    // Limpa o display LCD.
    ClearScreen();

    // Criando variavel do tipo "Char" para armazenar um unico caractere.
    char letra = 'B';

    // Definindo uma variavel do tipo "String" (cadeia de caracteres) para armazenar o resultado se a letra foi ou nao encontrada.
    string resposta = "";

    // Estrutura Condicional do tipo "Switch Case" (Interruptor de caso).
    switch(letra){
        // Caso seja "A" faca.
        case 'A':
            // Atribuindo a "String" a variavel resposta.
            resposta = "OK - Letra A";
            // Sai da estrutura "Switch".
            break;
        // Caso seja "B" faca.
        case 'B':
            // Atribuindo a "String" a variavel resposta.
            resposta = "OK - Letra B";
            // Sai da estrutura "Switch".
            break;
        // Caso seja "C" faca.
        case 'C':
            // Atribuindo a "String" a variavel resposta.
            resposta = "Ok - Letra C";
            // Sai da estrutura "Switch".
            break;
        // Se nenhuma das condicoes acima foi atendida, faca.
        default:
            // Atribuindo a "String" a variavel resposta.
            resposta = "Nao encontrada";
    }
    
    // Exibe no display a mensagem se a letra foi ou nao encontrada dentro da estrutura "Switch Case".
    TextOut(0, LCD_LINE2,  resposta);
    
    // Espera 5 segundos.
    Wait(5000);
}
