
// Variavel de controle da ordem de execucao das tarefas.
mutex ordemMutex;

// Definindo um tempo de espera em milissegundos (1s = 1000ms) para usar na funcao "Wait".
#define DELAY_TASKS 1000

// Criado uma "task" ou tarefa de nome "tarefa_1".
task tarefa_1(){
    // Estrutura de repeticao "While" ou enquanto
    // O valor "True" fara com que essa seja repetida infinitamente.
    while (true){
        // A funcao "Acquire" adquire a ordem de execucao.
        // Isso faz com que outras tarefas que usem a variavel "ordemMutex" esperem a liberacao do recurso adquirido.
        Acquire(ordemMutex);
        // Exibe uma mensagem na coluna 0 e na linha 1 do display LCD.
        TextOut(0, LCD_LINE1, "Tarefa 1");
        // Espere pelo tempo em milissegundos determinado em "DELAY_TASKS".
        Wait(DELAY_TASKS);
        // Libera o recurso adquirido anteriormente, fazendo com que outras tarefas possam ser executadas.
        Release(ordemMutex);
    }
}

// Semelhante ao anterior.
task tarefa_2(){
     while (true){
        Acquire(ordemMutex);
        TextOut(0, LCD_LINE1, "Tarefa 2");
        Wait(DELAY_TASKS);
        Release(ordemMutex);
    }
}

task tarefa_3(){
     while (true){
        Acquire(ordemMutex);
        TextOut(0, LCD_LINE1, "Tarefa 3");
        Wait(DELAY_TASKS);
        Release(ordemMutex);
    }
}

// Tarefa principal.
task main(){
    // A funcao "Precedes" define quais tarefas devem ser executadas.
    // Bastando informar o nome da tarefa como parametro da funcao.
    Precedes(tarefa_1, tarefa_2, tarefa_3);
}
