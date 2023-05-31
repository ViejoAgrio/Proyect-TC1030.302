class Push{
    private:
    Chest chest[2];
    Deltoid deltoid[3];
    public:
    Push(Chest, Chest, Deltoid, Deltoid, Deltoid);
    Push();
    Chest getChest(int);
    Deltoid getDeltoid(int);
};

Push::Push(Chest chest1, Chest chest2, Deltoid deltoid1, Deltoid deltoid2, Deltoid deltoid3){
    chest[0]=chest1;
    chest[1]=chest2;
    deltoid[0]=deltoid1;
    deltoid[1]=deltoid2;
    deltoid[2]=deltoid3;
}

Push::Push(){
    Chest chest1("xxxx",0,0,0);
    Deltoid deltoid1("xxxx",0,0,0);
    chest[0]=chest1;
    chest[1]=chest1;
    deltoid[0]=deltoid1;
    deltoid[1]=deltoid1;
    deltoid[2]=deltoid1;
}

Chest Push::getChest(int n){
    return chest[n];
}

Deltoid Push::getDeltoid(int n){
    return deltoid[n];
}
