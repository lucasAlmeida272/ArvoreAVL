#ifndef INFORMACAO_H
#define INFORMACAO_H
#include <string>

class Informacao
{
    public:
        virtual int compareTo(Informacao*) = 0;
        virtual std::string toString() = 0;
    protected:

    private:
};

#endif // INFORMACAO_H
