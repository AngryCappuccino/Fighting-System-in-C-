#pragma once
#include <iostream>
#include <string>
#include "InfoEnemy.h"
#include "Character.h"

class Enemy
{
private:
	EnemyStats EnemyInfo;

public:
	Enemy();
	Enemy(std::string Enemy, int EnemyHP, int EnemyExp);
	Enemy(int EnemyDamage, int EnemyArmor, int EnemyPrecision, int EnemyElusion);

public:  //Set Enemy info & Stats
	void SetEnemyStat(EnemyType X);
	void SetWolfStat();
	void SetGhoulStat();
	void SetLichStat();
	void SetWerewolfStat();

public:  //Getters
	std::string GetEnemyType();
	std::string GetEnemyName();
	float GetEnemyHP();
	float GetEnemyExp();
	int GetEnemyDamage();
	int GetEnemyArmor();
	int GetEnemyElusion();
	int GetEnemyPrecision();
};

