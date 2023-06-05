#include "Streaming.hpp"
#include <iostream>

void Streaming::cadastrar_filme(Video* v) {
    catalogo.push_back(v);
}

void Streaming::cadastrar_serie(Video* v) {
    catalogo.push_back(v);
}

void Streaming::avaliacao(int id, int nota) {
    if (id > 0 && id <= catalogo.size()) {
        catalogo[id - 1]->avaliar(nota);
    }
}

void Streaming::print_catalogo() {
    if (catalogo.empty()) {
        std::cout << "Sem vídeo cadastrado!" << std::endl;
    } else {
        std::cout << "Catálogo Streaming:" << std::endl;
        for (size_t i = 0; i < catalogo.size(); i++) {
            catalogo[i]->print_info(i + 1);
        }
    }
}

Streaming::~Streaming() {
    // Liberar memória dos vídeos
    for (Video* v : catalogo) {
        delete v;
    }
}
