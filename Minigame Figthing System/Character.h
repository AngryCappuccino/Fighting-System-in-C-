#pragma once
#include <iostream>
#include <string>
#include "InfoChar.h"

class Character
{
private: 
	PlayerInformations CharInfo;
	PlayerStats CharStats;

public:  //Constructors
	Character();
	Character(std::string Name, int Age, int Level, float LifePoints, float Exp);
	Character(char Choice, int Damage, int Precision, int Elusion, int Defense);

public: //Getters
	std::string GetPlayerName();
	float GetPlayerHP();
	float GetPlayerExp();
	int GetPlayerAge();
	int GetPlayerLevel();
	int GetPlayerDamage();
	int GetPlayerDefense();
	int GetPlayerPrecision();
	int GetPlayerElusion();

public: //Setters
	void SetPlayerName(std::string Name);
	void SetPlayerHP(float LifePoints);
	void SetPlayerExp(float Exp);
    void SetPlayerAge(int Age);
    void SetPlayerLevel(int Level);
    void SetPlayerDamage(int Damage);
    void SetPlayerDefense(int Defense);
    void SetPlayerPrecision(int Precision);
    void SetPlayerElusion(int Elusion);

public:  //ShowInfo
	void ShowPlayerInfo();
	void ShowPlayerStats();

public:  //Set Character Info
	void NewCharName();
	void NewCharAge();
	void SetDefaultCharInfo();
	void SetCharStat();
	void SetMageStat();
	void SetWarriorStat();
	void SetAssassinStat();

public:  //Actions
	void LevelUp();
	void ReceiveDamage();
};

