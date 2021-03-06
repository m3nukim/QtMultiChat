#ifndef ROOM_H
#define ROOM_H


class Room
{
public:
    Room();
    void enter();
    void out();
    int getPeople();
    bool needFemale();
    bool needMale();
    void enterFemale();
    void enterMale();
    void outFemale();
    void outMale();

private:
    int numPeople;
   bool male;
   bool female;
};

#endif // ROOM_H
