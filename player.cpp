class Player{
  public:
  void set_username(string newName){
    username = newName;
  }
  string get_username(){
    return username;
  }
  void set_rank(int newRank){
    rank = newRank;
  }
  int get_rank(){
    return rank;
  }
  float get_winRatio(){
  return wins/(wins+losses);
  }
  private:
    string username;
    int rank;
    int wins;
    int losses;
    int queueStatus;
    Role role;
}

class Role{
  public:
    void set_rolename(string newName){
    rolename = newName;
  }
  string get_rolename(){
    return rolename;
  }
  void joiningMainPlayer{
    mainQueueQuantity++;
  }
  void leavingMainPlayer{
    mainQueueQuantity--;
  }
  void joiningMainPlayer{
    mainQueueQuantity++;
  }
  void leavingMainPlayer{
    mainQueueQuantity--;
  }
  
  private:
    string rolename;
    int mainQueueQuantity;
    int secondaryQueueQuantity;
}

class Team{
  
}
