
// Tarefa principal.
task main(){

    // Variavel que guarda o valor do tempo que sera usado no delay (Wait).
    int delay = 500;

    // Declarando variavel que sera usada como contador.
    int i = 0;

    // Estrutura de repeticao "While" ou "enquanto".
    // Enquanto a condicao avaliada for verdadeira o "Loop" sera mantido.
    // Essa estrutura tem o teste logico no inicio.
    while(i < 10){
        // Limpa o display do LEGO NXT
        ClearScreen();
        // Imprime a mensagem "While: mais o valor do contador" no display do LEGO NXT.
        TextOut(0, LCD_LINE1,  "While: " + NumToStr(i));
        // Espera pelo tempo especificado na variavel "Delay".
        Wait(delay);
        // Incrementa o valor da variavel de um em um.
        i = i + 1;
    }

    // Atribuindo um novo valor a variavel "i".
    i = -1;
    // Estrutura de repeticao "Do While" ou "fazer enquanto".
    // Essa estrutura tem o teste logico no final.
    do{        
        // Incrementa o valor da variavel de um em um.
        i = i + 1;
        // Limpa o display do LEGO NXT.
        ClearScreen();
        // Imprime a mensagem "Do While: mais o valor do contador" no display do LEGO NXT.
        TextOut(0, LCD_LINE1, "Do While: " + NumToStr(i));
        // Espera pelo tempo especificado na variavel "Delay".
        Wait(delay);
        // Avalia a condicao, se "True" repete, se "False".
    }while(i < 9);

    // Estrutura "For" ou "para", em sua chamada e necessario declarar tres escopos.
    // Exemplo: "for(DECLARACAO DE VARIAVEL; TESTE LOGICO; INCREMENTO DE VARIAVEL)".
    for(i = 0; i < 10; i = i + 1){
        // Limpa o display do LEGO NXT.
        ClearScreen();
        // Imprime a mensagem "For: mais o valor do contador" no display do LEGO NXT.
        TextOut(0, LCD_LINE1, "For: " + NumToStr(i));
        // Espera pelo tempo especificado na variavel "Delay".
        Wait(delay);
    }

    // Atribuindo um novo valor a variavel "i".
    i = -1;
    // Estrutura de repeticao "Repeat" ou "repita".
    repeat(10){
        // Incrementa o valor da variavel de um em um.
        i = i + 1;
        // Limpa o display do LEGO NXT.
        ClearScreen();
        // Imprime a mensagem "Repeat: mais o valor do contador" no display do LEGO NXT.
        TextOut(0, LCD_LINE1, "Repeat: " + NumToStr(i));
        // Espera pelo tempo especificado na variavel "Delay".
        Wait(delay);
    }
}
