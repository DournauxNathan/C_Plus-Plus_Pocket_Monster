using namespace std;

class myTeam {
    private:
    int m_vie;
    int m_attaque1;
    int m_attaque2;
    int m_attaque3;
    int m_attaque4;
    
    public: 
    int getVie();
    int getAttaque();
    void setPv(int);
    myTeam();
};

class Monster {
    private:
    int m_vie;
    int m_attaque1;
    int m_attaque2;
    int m_attaque3;
    int m_attaque4;

    public: 
    int getVie();
    void setPv(int);
    Monster();
};
