#ifndef MURACH_DIE_H
#define MURACH_DIE_H

class Die 
{
    private:
        int value;
    
    public:
        Die();
        void roll();
        int getValue();
};

#endif // MURACH_DIE_H