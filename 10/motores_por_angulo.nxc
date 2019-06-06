
// Tarefa principal.
task main(){
     // Estrutura de repeticao "While" usado como loop infinito.
     while(true){
          // Ler o contador de rotacao em graus dos motores "B" e "C".
          int dmb = MotorRotationCount(OUT_B);
          int dmc = MotorRotationCount(OUT_C);
          // Exibe o angulo do motor "B" e "C" no display do NXT.
          TextOut(0, LCD_LINE1, "Motor B: " + NumToStr(dmb));
          TextOut(0, LCD_LINE3, "Motor C: " + NumToStr(dmc));
          // Rotaciona os motores "B" e "C" em 5 graus com forca de 60%, de maneira sincronizada e sem bloqueio.
          RotateMotorEx(OUT_BC, 60, 5, 0, true, false);
          // Define a variavel mr (Max Rotate) com o valor de 720 graus.
          int mr = 720;
          // Se o "dmb" ou "dmc" for maior ou igual ao "Max Rotate", resete o contador dos motores "B" e "C".
          if(dmb >= mr || dmc >= mr){
               // Reseta os motores "B" e "C".
               ResetRotationCount(OUT_BC);
               // Limpa o display do NXT.
               ClearScreen();
               // Imprime no display do NXT, que o motor foi resetado.
               TextOut(0, LCD_LINE1, "Motor resetado");
               // Espera dois segundos e meio.
               Wait(2500);
          }
     }
}
