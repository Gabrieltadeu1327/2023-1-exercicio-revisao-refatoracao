#include "Streaming.hpp"
#include "Filme.hpp"
#include "Serie.hpp"
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
            std::cin.ignore();
            std::getline(std::cin, nome);

            Filme* f = new Filme(nome, ano, genero, duracao);
            if (duracao >= 50) {
                ss.cadastrar_video(f);
            }
        }
        if (t == "Serie") {
            std::string nome, genero;
            int ano, n_temporadas, total_episodios;
            std::cin >> genero >> ano >> n_temporadas >> total_episodios;
            std::cin.ignore();
            std::getline(std::cin, nome);

            Serie* s = new Serie(nome, ano, genero, n_temporadas, total_episodios);
            if (n_temporadas >= 2) {
                ss.cadastrar_video(s);
            }
        }
        if (t == "Nota") {
            int id, nota;
            std::cin >> id >> nota;

            if (nota >= 0 && nota <= 10) {
                ss.avaliacao(id, nota);
            }
        }
    }
    ss.print_catalogo();

    return 0;
}
