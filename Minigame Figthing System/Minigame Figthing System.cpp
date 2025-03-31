#include "Character.h"
#include "Enemy.h"
#include "FightSystem.h"
#include "CinCoutManagement.h"

void main()
{
	Character* Player1 = new Character;
	Enemy* Enemy1 = new Enemy;
	FightSystem* Fight1 = new FightSystem;

	Player1->NewCharName();

	system("pause");
	system("CLS");

	PlayerStats* Player1Stat = new PlayerStats;

	Player1->SetCharStat();

	system("CLS");

	Player1->ShowPlayerInfo();
	Player1->ShowPlayerStats();

	system("pause");
	system("CLS");

	Enemy1->SetEnemyStat(Wolf);

	Fight1->Encounter();

	system("pause");
	system("CLS");

	Player1->ReceiveDamage();
	Player1->LevelUp();
	Player1->ShowPlayerInfo();
	Player1->ShowPlayerStats();

	system("pause");
	system("CLS");

	Player1->ReceiveDamage();
	Player1->LevelUp();
	Player1->ShowPlayerInfo();
	Player1->ShowPlayerStats();
}
