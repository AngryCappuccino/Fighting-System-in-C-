#pragma once
struct PlayerInformations
{
		std::string Name;
		int Age;
		int Level;
		float LifePoints;
		float Exp;
};

struct PlayerStats
{
	char Choice;
	int Damage;
	int Precision;
	int Elusion;
	int Defense;
};

enum Specialization
{
	Mage,
	Warrior,
	Assassin
};

enum Damage
{
	WarriorDamage = 10,
	MageDamage = 20,
	AssassinDamage = 35
};

enum Defense
{
	MageDefense = 10,
	AssassinDefense = 20,
	WarriorDefense = 35
};

enum Elusion
{
	AssassinElusion = 100,
	WarriorElusion = 50,
	MageElusion = 20,
};

enum Precision
{
	MagePrecision = 100,
	AssassinPrecision = 50,
	WarriorPrecision = 20
};