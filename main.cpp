#include "Streaming.hpp"
#include "Video.hpp"
#include <iostream>
#include <string>

int main() {
    Streaming ss;
    std::string t;

    while (std::cin >> t) {
        if (t == "Filme") {
            std::string nome, genero;
            int ano, duracao;
            std::cin >> genero >> ano >> duracao;
            std::getline(std::cin, nome);

            Video* v = new Video(nome, ano, genero, t, duracao, 0, 0);
            if (duracao >= 50) {
                ss.cadastrar_filme(v);
            } else {
                delete v;
            }
        } else if (t == "Serie") {
            std::string nome, genero;
            int ano, n_temp, total_ep;
            std::cin >> genero >> ano >> n_temp >> total_ep;
            std::getline(std::cin, nome);

            Video* v = new Video(nome, ano, genero, t, 0, n_temp, total_ep);
            if (n_temp >= 2) {
                ss.cadastrar_serie(v);
            } else {
                delete v;
            }
        } else if (t == "Nota") {
            int id, nota;
            std::cin >> id >> nota;
            if (nota >= 0 && nota <= 10) {
                ss.avaliacao(id, nota);
            }
        }
    }

    ss.print_catalogo();

    // Liberar memória dos vídeos
    for (Video* v : ss.catalogo) {
        delete v;
    }

    return 0;
}
