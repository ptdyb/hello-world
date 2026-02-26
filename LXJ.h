#ifndef L_X_J
#define L_X_J
class magic_attribute{
	
};
class physics_attribute{
	
};
class enemy{
  public:
	enemy(int v):val(v){
		
	}
  private:
  	int val;
};
class Missli{
  private:
	int health_max;
	int health_now;
	int health_recovery;
	int stamina_max;
	int stamina_now;
	int stamina_recovery;
	int mana_max;
	int mana_now;
	int mana_recovery;
	int money;
  public:
  	Missli(int hmax,int hrec,int smax,int srec,int mmax,int mrec,int _money)
  		:health_max(hmax),health_now(hmax),health_recovery(hrec),
  		 stamina_max(smax),stamina_now(smax),stamina_recovery(srec),
  		 mana_max(mmax),mana_now(mmax),mana_recovery(mrec),money(_money)
	{
  		;
	}
  	bool hurted(const int damage);
  	bool buymoney(const int cost);
  	void round_end();
  	void round_begin();
}; 
#endif 
