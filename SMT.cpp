#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
private:
	int health;
	int damage;

public:
	Player(int init_health) {
		if (init_health < 0)
			health = 100;
		else
			health = init_health;
	}

	void attack(Player &other) {
		if (health == 0) return; 
		damage = rand() % 50 + 1;

		if (health < 0) health = 0;
		other.health -= damage;
		cout<<"damage yang dilakukan "<<damage<<endl;
		if (other.health < 0) other.health = 0;
	}


	int get_health() {
		return health;
	}
};

int main() {
	int h1, h2;
	srand(time(0));

	std::cin >> h1 >> h2;

	Player player1(h1);
	Player player2(h2);

	std::cout << "Initial health" << std::endl;
	std::cout << "Player1: " << player1.get_health() << std::endl;
	std::cout << "Player2: " << player2.get_health() << std::endl << std::endl;
	while(1) {
    //Logika Serang dan kondisi menang isi disini


	}
	return 0;
}