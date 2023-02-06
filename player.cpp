class Player{
  public:
  void set_username(string name){
    username = name;
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
  
  private:
    string username;
    int rank;
}
