#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Criação da classe do jogo 
class JogoAdivinhacao {
    //Criação, no privado, das variaveis dos numeros que serão usados
    private:
    int numeroSecreto;
    int tentativas;
    
    //Cria, no publico, o construtor para ser usado
    public:
    JogoAdivinhacao() {
        //Seleciona um número aleatoriamente e começa com as tentativas no zero
        srand(time(0));
        numeroSecreto = rand() % 100 + 1;
        tentativas = 0;
    }
    //Método para jogar o jogo
    void jogar() {
        //Váriaves do palpites para o usuario fazer, vendo se acertou ou não e dando dicas para o usuario até ele acertar
        int palpites;
        do {
            cout << "Digite um numero de 1 à 100: ";
            cin >> palpites;
            tentativas++;
            
            if (palpites > numeroSecreto) {
                cout << "O número secreto é menor" << endl;
            }
            else if (palpites < numeroSecreto) {
                cout << "O número secreto é maior" << endl;
            }
            else {
                cout << "Parabéns, acertou o número correto em " << tentativas << " tentativas!" << endl;
            }
        } while (palpites != numeroSecreto);
    }
};
//Programa principal que vai rodar o jogo da adivinhação, chamando-o la de cima
int main() {
    JogoAdivinhacao jogo;
    jogo.jogar();

    return 0;
}

/* O construtor é um método especial que são invocados ao criar um objeto de classe para serem usados. Esses construtores são importantes para estabelecer padrões iniciais, por exemplo, em um jogo dá para estabelecer o valor de vida ou moedas ao iniciar o jogo */


