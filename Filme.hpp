#ifndef FILME_HPP
#define FILME_HPP

#include "Video.hpp"

class Filme : public Video {
public:
    int duracao;

    Filme(std::string nome, int ano, std::string genero, int duracao);
    void print_info(int id) override;
};

#endif
