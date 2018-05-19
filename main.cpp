#include <iostream>
#include <locale>

using namespace std;

void tabuleiro(char pecastab[9][9]){

       cout << "     a   b   c   d   e   f   g   h  " << endl;
       cout << "   |---|---|---|---|---|---|---|---|" << endl;
       cout << "1  ||||| "<<pecastab[1][2]<<" ||||| "<<pecastab[1][4]<<" ||||| "<<pecastab[1][6]<<" ||||| "<<pecastab[1][8]<<" |" << endl;
       cout << "   |---|---|---|---|---|---|---|---|" << endl;
       cout << "2  | "<<pecastab[2][1]<<" ||||| "<<pecastab[2][3]<<" ||||| "<<pecastab[2][5]<<" ||||| "<<pecastab[2][7]<<" |||||" << endl;
       cout << "   |---|---|---|---|---|---|---|---|" << endl;
       cout << "3  ||||| "<<pecastab[3][2]<<" ||||| "<<pecastab[3][4]<<" ||||| "<<pecastab[3][6]<<" ||||| "<<pecastab[3][8]<<" |" << endl;
       cout << "   |---|---|---|---|---|---|---|---|" << endl;
       cout << "4  | "<<pecastab[4][1]<<" ||||| "<<pecastab[4][3]<<" ||||| "<<pecastab[4][5]<<" ||||| "<<pecastab[4][7]<<" |||||" << endl;
       cout << "   |---|---|---|---|---|---|---|---|" << endl;
       cout << "5  ||||| "<<pecastab[5][2]<<" ||||| "<<pecastab[5][4]<<" ||||| "<<pecastab[5][6]<<" ||||| "<<pecastab[5][8]<<" |" << endl;
       cout << "   |---|---|---|---|---|---|---|---|" << endl;
       cout << "6  | "<<pecastab[6][1]<<" ||||| "<<pecastab[6][3]<<" ||||| "<<pecastab[6][5]<<" ||||| "<<pecastab[6][7]<<" |||||" << endl;
       cout << "   |---|---|---|---|---|---|---|---|" << endl;
       cout << "7  ||||| "<<pecastab[7][2]<<" ||||| "<<pecastab[7][4]<<" ||||| "<<pecastab[7][6]<<" ||||| "<<pecastab[7][8]<<" |" << endl;
       cout << "   |---|---|---|---|---|---|---|---|" << endl;
       cout << "8  | "<<pecastab[8][1]<<" ||||| "<<pecastab[8][3]<<" ||||| "<<pecastab[8][5]<<" ||||| "<<pecastab[8][7]<<" |||||" << endl;
       cout << "   |---|---|---|---|---|---|---|---|" << endl;
       cout << "     a   b   c   d   e   f   g   h  " << endl;


}

void jogador2(char pecastab[9][9], bool &fim_de_jogo){
       bool posicao_correta = false;
       char coluna, nova_coluna;
       int linha, colunaint, nova_colunaint, nova_linha;
       cout << endl << "Vez do Jogador 2" << endl;

       do{
       cout << "Digite  a posi��o da pe�a que deseja mover (Exemplo: b 2):" << endl;
       cin >> coluna >> linha;
       colunaint = (int)coluna - 96;

       if(colunaint == 2||4||6||8 && linha == 1||3||5||7){
             if(pecastab[linha-1][colunaint-1]==' ' || pecastab[linha+1][colunaint+1] ==' '){
                posicao_correta = true;
             }
             else{
                cout << "Posi��o inv�lida" << endl;
             }
       }
       else{
         if(colunaint == 1||3||5||7 && linha == 2||4||6||8){
             if(pecastab[linha-1][colunaint-1]==' ' || pecastab[linha-1][colunaint+1] ==' '){
                posicao_correta = true;
             }
             else{
                cout << "Posi��o inv�lida" << endl;
             }
         }
       }
       }while(posicao_correta == false);

       do{
       cout << "Digite a posi��o final da pe�a (Exemplo: d 4):" << endl;
       cin >> nova_coluna >> nova_linha;
       nova_colunaint = (int)nova_coluna - 96;

       if(colunaint == 1||3||5||7 && linha == 2||4||6||8){
             if(pecastab[nova_linha+1][nova_colunaint-1]==' ' || pecastab[nova_linha+1][nova_colunaint+1] ==' '){
                posicao_correta = false;
                cout << "Posi��o final inv�lida" << endl;
             }
             else{
                posicao_correta = true;
             }
       }
       else{
         if(colunaint == 2||4||6||8 && linha == 1||3||5||7){
             if(pecastab[nova_linha-1][nova_colunaint-1]==' ' || pecastab[nova_linha-1][nova_colunaint+1] ==' '){
                posicao_correta = false;
                cout << "Posi��o final inv�lida" << endl;
             }
             else{
                posicao_correta = true;
             }
         }
       }
       }while(posicao_correta == false);


       pecastab[linha][colunaint] = ' ';
       pecastab[nova_linha][nova_colunaint] = 'o';

       tabuleiro(pecastab);
       fim_de_jogo = false;


}

void jogador1(char pecastab[9][9], bool &fim_de_jogo){
       bool posicao_correta = false;
       char coluna, nova_coluna;
       int linha, colunaint, nova_colunaint, nova_linha, verificacao_linha, verificacao_coluna, verificacao_coluna2;
       cout << endl << "Vez do Jogador 1" << endl;

       do{
       cout << "Digite  a posi��o da pe�a que deseja mover (Exemplo: b 2):" << endl;
       cin >> coluna >> linha;
       colunaint = (int)coluna - 96;

       if(colunaint == 1||3||5||7 && linha == 2){
             if(pecastab[linha+1][colunaint-1]==' ' || pecastab[linha+1][colunaint+1] ==' '){
                posicao_correta = true;
             }
             else{
                cout << "Posi��o inv�lida" << endl;
             }
       }
       else{
         if(colunaint == 2||4||6||8 && linha == 1||3){
             if(pecastab[linha+1][colunaint-1]==' ' || pecastab[linha+1][colunaint+1] ==' '){
                posicao_correta = true;
             }
             else{
                cout << "Posi��o inv�lida" << endl;
             }
         }
       }
       }while(posicao_correta == false);

       do{
       cout << "Digite a posi��o final da pe�a (Exemplo: d 4):" << endl;
       cin >> nova_coluna >> nova_linha;
       nova_colunaint = (int)nova_coluna - 96;
       verificacao_coluna = nova_colunaint + 1;
       verificacao_coluna2 = nova_colunaint - 1;
       verificacao_linha = nova_linha + 1;

       if((nova_colunaint == verificacao_coluna-1 || nova_colunaint == verificacao_coluna2+1) && nova_linha == verificacao_linha-1){
         if(colunaint == 1||3||5||7 && linha == 2||4||6||8){
             if(pecastab[nova_linha-1][nova_colunaint-1]==' ' || pecastab[nova_linha-1][nova_colunaint+1] ==' '){
                posicao_correta = false;
                cout << "Posi��o final inv�lida" << endl;
             }
             else{
                posicao_correta = true;
             }
        }
       }
       else{
         if(colunaint == 2||4||6||8 && linha == 1||3||5||7){
             if(pecastab[nova_linha-1][nova_colunaint-1]==' ' || pecastab[nova_linha-1][nova_colunaint+1] ==' '){
                posicao_correta = false;
                cout << "Posi��o final inv�lida" << endl;
             }
             else{
                posicao_correta = true;
             }
         }
       }
       }while(posicao_correta == false);


       pecastab[linha][colunaint] = ' ';
       pecastab[nova_linha][nova_colunaint] = 'x';

       tabuleiro(pecastab);
       fim_de_jogo = false;

}

int main()
{
      setlocale(LC_ALL, "Portuguese");
      bool fim_de_jogo = false;
      int menu_choice;

      char pecastab[9][9]  =  {' ',' ',' ',' ',' ',' ',' ',' ',' ',
                               ' ',' ','x',' ','x',' ','x',' ','x',
                               ' ','x',' ','x',' ','x',' ','x',' ',
                               ' ',' ','x',' ','x',' ','x',' ','x',
                               '*',' ','*',' ','*',' ','*',' ','*',
                               ' ','*',' ','*',' ','*',' ','*',' ',
                               ' ','o',' ','o',' ','o',' ','o',' ',
                               ' ',' ','o',' ','o',' ','o',' ','o',
                               ' ','o',' ','o',' ','o',' ','o',' '};

      cout << "            MENU" << endl;
      cout << "Digite 1 para jogar contra outro jogador" << endl << "Digite 2 para jogar contra o computador" << endl << "Digite 3 para sair" << endl;
      cin >> menu_choice;
      if(menu_choice == 1){
          tabuleiro(pecastab);
          cout << " Jogador 1: pe�a x" << endl << " Jogador 2: pe�a o" << endl;
          do{
             jogador1(pecastab, fim_de_jogo);
             jogador2(pecastab, fim_de_jogo);
          }while(fim_de_jogo == false );
      }



      return 0;
}