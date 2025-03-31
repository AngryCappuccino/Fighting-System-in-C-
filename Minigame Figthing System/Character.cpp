#include "Character.h"

//Constructors
Character::Character()
{

}

Character::Character(std::string Name, int Age, int Level, float LifePoints, float Exp)
{
	CharInfo.Name = Name;
	CharInfo.Age = Age;
	CharInfo.Level = Level;
	CharInfo.LifePoints = LifePoints;
	CharInfo.Exp = Exp;
}

Character::Character(char Choice, int Damage, int Precision, int Elusion, int Defense)
{
	CharStats.Choice = Choice;
	CharStats.Damage = Damage;
	CharStats.Precision = Precision;
	CharStats.Elusion = Elusion;
	CharStats.Defense = Defense;
}

//Set Character Info
void Character::NewCharName()
{
	std::cout << "Inser the Character's Name:" << std::endl;
	std::cin >> CharInfo.Name;
	if (!std::cin)
	{
		std::cout << "It is not a Word!" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		system("pause");
		system("CLS");
		NewCharName();
	}

	NewCharAge();
}

void Character::NewCharAge()
{
	std::cout << "Insert Character Age: " << std::endl;
	std::cin >> CharInfo.Age;
	if (!CharInfo.Age)
	{
		std::cout << "It is not a Number!" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		system("pause");
		system("CLS");
		NewCharAge();
	}

	SetDefaultCharInfo();
}

void Character::SetDefaultCharInfo()
{
	CharInfo.Level = 1;
	CharInfo.LifePoints = 100;
	CharInfo.Exp = 0;
}


//Getters
std::string Character::GetPlayerName()
{
	return CharInfo.Name;
}

float Character::GetPlayerHP()
{
	return CharInfo.LifePoints;
}

float Character::GetPlayerExp()
{
	return CharInfo.Exp;
}

int Character::GetPlayerAge()
{
	return CharInfo.Age;
}

int Character::GetPlayerLevel()
{
	return CharInfo.Level;
}

int Character::GetPlayerDamage()
{
	return CharStats.Damage;
}

int Character::GetPlayerDefense()
{
	return CharStats.Defense;
}

int Character::GetPlayerPrecision()
{
	return CharStats.Precision;
}

int Character::GetPlayerElusion()
{
	return CharStats.Elusion;
}

//Setters
void Character::SetPlayerName(std::string Name)
{
	this->CharInfo.Name = Name;
}

void Character::SetPlayerHP(float LifePoints)
{
	this->CharInfo.LifePoints = LifePoints;
}

void Character::SetPlayerExp(float Exp)
{
	this->CharInfo.Exp = Exp;
}

void Character::SetPlayerAge(int Age)
{
	this->CharInfo.Age = Age;
}

void Character::SetPlayerLevel(int Level)
{
	this->CharInfo.Level = Level;
}

void Character::SetPlayerDamage(int Damage)
{
	this->CharStats.Damage = Damage;
}

void Character::SetPlayerDefense(int Defense)
{
	this->CharStats.Defense = Defense;
}

void Character::SetPlayerPrecision(int Precision)
{
	this->CharStats.Precision = Precision;
}

void Character::SetPlayerElusion(int Elusion)
{
	this->CharStats.Elusion = Elusion;
}

//Set Character Stats
void Character::SetMageStat()
{
	CharStats.Damage = Damage::MageDamage;
	CharStats.Precision = Precision::MagePrecision;
	CharStats.Elusion = Elusion::MageElusion;
	CharStats.Defense = Defense::MageDefense;
}

void Character::SetWarriorStat()
{
	CharStats.Damage = Damage::WarriorDamage;
	CharStats.Precision = Precision::WarriorPrecision;
	CharStats.Elusion = Elusion::WarriorElusion;
	CharStats.Defense = Defense::WarriorDefense;
}

void Character::SetAssassinStat()
{
	CharStats.Damage = Damage::AssassinDamage;
	CharStats.Precision = Precision::AssassinPrecision;
	CharStats.Elusion = Elusion::AssassinElusion;
	CharStats.Defense = Defense::AssassinDefense;
}

void Character::SetCharStat()
{
	std::cout << "Choose your specialization:" << std::endl
		<< "0. [M]age" << std::endl
		<< "1. [W]arrior" << std::endl
		<< "2. [A]ssassin" << std::endl;
	std::cin >> CharStats.Choice;

	switch (CharStats.Choice)
	{
	case '0': case 'M': case 'm': SetMageStat();
		break;
	case '1': case 'W': case 'w': SetWarriorStat();
		break;
	case '2': case 'A': case 'a': SetAssassinStat();
		break;
	
	default: std::cout << "Invalid choice, try again.\n";
		system("pause");
		system("CLS");
		return SetCharStat();
	}

}

//ShowInfo
void Character::ShowPlayerInfo()
{
	std::cout << "Your Character Infos are: " << std::endl
		<< "Name: " << CharInfo.Name << std::endl
		<< "Age: " << CharInfo.Age << std::endl
		<< "Level: " << CharInfo.Level << std::endl
		<< "LifePoints: " << CharInfo.LifePoints << std::endl
		<< "Exp: " << CharInfo.Exp << std::endl;
}

void Character::ShowPlayerStats()
{
	std::cout << std::endl << "Your Character Stats are: " << std::endl
		<< "Damage: " << CharStats.Damage << std::endl
		<< "Precision: " << CharStats.Precision << std::endl
		<< "Elusion: " << CharStats.Elusion << std::endl
		<< "Defense: " << CharStats.Defense << std::endl;
}

//Actions
void Character::LevelUp()
{
	std::cout << "Congrats, Level Up!" << std::endl;
	
	CharInfo.Level++;
	switch (CharStats.Choice)
	{
	case '0': case 'M': case 'm':
		CharStats.Damage += 2;
		CharStats.Precision += 4;
		CharStats.Elusion += 2;
		CharStats.Defense++;
		break;
	case '1': case 'W': case 'w':
		CharStats.Damage += 2;
		CharStats.Precision++;
		CharStats.Elusion += 2;
		CharStats.Defense += 4;
		break;
	case '2': case 'A': case 'a':
		CharStats.Damage += 3;
		CharStats.Precision++;
		CharStats.Elusion += 4;
		CharStats.Defense++;
		break;
	}

	system("pause");
	system("CLS");
}

void Character::ReceiveDamage()
{
	std::cout << "BONK!!!" << std::endl
		<< std::endl
		<< "Oh no! You have been attacked by something and you lost 10 HP." << std::endl;
	CharInfo.LifePoints -= 10;
	
	system("pause");
	system("CLS");
}
