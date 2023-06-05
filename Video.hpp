#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <list>

class Video {
public:
    int ano;
    std::string nome;
    std::string genero;
    std::list<int> avaliacoes;

    Video(std::string nome, int ano, std::string genero);
    virtual ~Video(); // Destrutor virtual
    virtual void print_info(int id) = 0;
    float get_media_avaliacao();
    void avaliar(int nota);
};

#endif
