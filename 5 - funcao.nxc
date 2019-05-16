
// Funcao Abstrata de nome "mover", sem retorno de valor e que requer dois valores passados em sua chamada.
void mover(int forca, int delay);

// Tarefa principal.
task main(){
    // Chamando a funcao "mover" e passando os devidos valores requeridos.
    mover(65, 1000);
}

// Implementacao real da funcao "mover".
void mover(int forca, int delay){
    // A funcao "OnFwd" direciona o motor no sentido horario, neste caso os motores "B" e "C" com a respectiva forca informada na chamada da funcao.
    OnFwd(OUT_BC, forca);
    // A funcao "Wait" bloqueia o fluxo de execucao do programa por um determinado tempo.
    Wait(delay);
    // A funcao "OnRev" direciona o motor no sentido anti-horario, neste caso os motores "B" e "C" com a respectiva forca informada na chamada da funcao.
    OnRev(OUT_BC, forca);
    // A funcao "Wait" bloqueia o fluxo de execucao do programa por um determinado tempo.
    Wait(delay);
    // A funcao "Off" desliga o motor, neste caso os motores "B" e "C".
    Off(OUT_BC);
    // A funcao "Wait" bloqueia o fluxo de execucao do programa por um determinado tempo.
    Wait(delay);
}
