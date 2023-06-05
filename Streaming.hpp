#ifndef STREAMING_HPP
#define STREAMING_HPP

#include <vector>
#include "Video.hpp"

class Streaming {
public:
    std::vector<Video*> catalogo;

    void cadastrar_video(Video* v);
    void avaliacao(int id, int nota);
    void print_catalogo();

    ~Streaming(); // Destrutor
};

#endif
