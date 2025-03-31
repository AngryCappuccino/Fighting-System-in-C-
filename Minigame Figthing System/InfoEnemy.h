#pragma once
struct EnemyStats
{
	std::string Enemy;
	float EnemyHP;
	float EnemyExp;
	int EnemyDamage;
	int EnemyArmor;
	int EnemyElusion;
	int EnemyPrecision;
};

enum EnemyType
{
	Wolf,
	Ghoul,
	Lich,
	Werewolf
};

enum EnemyLifePoints
{
	WolfHP = 50,
	GhoulHP = 30,
	LichHP = 80,
	WerewolfHP = 100
};

enum EnemyGivenExp
{
	WolfEXP = 20,
	GhoulEXP = 30,
	LichEXP = 50,
	WerewolfEXP = 100
};

enum EDamage
{
	WolfDamage = 5,
	GhoulDamage = 10,
	LichDamage = 20,
	WerewolfDamage = 30
};

enum EDefense
{
	WolfDef = 5,
	GhoulDef = 10,
	LichDef = 20,
	WerewolfDef = 30
};

enum EElusion
{
	WolfEl = 15,
	GhoulEl = 5,
	LichEl = 30,
	WerewolfEl = 20
};

enum EPrecision
{
	WolfPrec = 15,
	GhoulPrec = 5,
	LichPrec = 30,
	WerewolfPrec = 30
};