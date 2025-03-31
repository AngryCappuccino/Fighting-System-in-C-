#include "Enemy.h"
#include "Character.h"

Enemy::Enemy()
{

}

Enemy::Enemy(std::string Enemy, int EnemyHP, int EnemyExp)
{
	EnemyInfo.Enemy = Enemy;
	EnemyInfo.EnemyHP = EnemyHP;
	EnemyInfo.EnemyExp = EnemyExp;
}

Enemy::Enemy(int EnemyDamage, int EnemyArmor, int EnemyPrecision, int EnemyElusion)
{
	EnemyInfo.EnemyDamage = EnemyDamage;
	EnemyInfo.EnemyArmor = EnemyArmor;
	EnemyInfo.EnemyPrecision = EnemyPrecision;
	EnemyInfo.EnemyElusion = EnemyElusion;
}

//Setters
void Enemy::SetEnemyStat(EnemyType X)
{
	switch (X)
	{
	case EnemyType::Wolf: SetWolfStat();
		break;
	case EnemyType::Ghoul: SetGhoulStat();
		break;
	case EnemyType::Lich: SetLichStat();
		break;
	case EnemyType::Werewolf: SetWerewolfStat();
		break;
	}
}

void Enemy::SetWolfStat()
{
	EnemyInfo.Enemy = "Wolf";
	EnemyInfo.EnemyHP = EnemyLifePoints::WolfHP;
	EnemyInfo.EnemyExp = EnemyGivenExp::WolfEXP;
	EnemyInfo.EnemyDamage = EDamage::WolfDamage;
	EnemyInfo.EnemyArmor = EDefense::WolfDef;
	EnemyInfo.EnemyElusion = EElusion::WolfEl;
	EnemyInfo.EnemyPrecision = EPrecision::WolfPrec;
}

void Enemy::SetGhoulStat()
{
	EnemyInfo.Enemy = EnemyType::Ghoul;
	EnemyInfo.EnemyHP = EnemyLifePoints::GhoulHP;
	EnemyInfo.EnemyExp = EnemyGivenExp::GhoulEXP;
	EnemyInfo.EnemyDamage = EDamage::GhoulDamage;
	EnemyInfo.EnemyArmor = EDefense::GhoulDef;
	EnemyInfo.EnemyElusion = EElusion::GhoulEl;
	EnemyInfo.EnemyPrecision = EPrecision::GhoulPrec;
}

void Enemy::SetLichStat()
{
	EnemyInfo.Enemy = "Lich";
	EnemyInfo.EnemyHP = EnemyLifePoints::LichHP;
	EnemyInfo.EnemyExp = EnemyGivenExp::LichEXP;
	EnemyInfo.EnemyDamage = EDamage::LichDamage;
	EnemyInfo.EnemyArmor = EDefense::LichDef;
	EnemyInfo.EnemyElusion = EElusion::LichEl;
	EnemyInfo.EnemyPrecision = EPrecision::LichPrec;
}

void Enemy::SetWerewolfStat()
{
	EnemyInfo.Enemy = EnemyType::Werewolf;
	EnemyInfo.EnemyHP = EnemyLifePoints::WerewolfHP;
	EnemyInfo.EnemyExp = EnemyGivenExp::WerewolfEXP;
	EnemyInfo.EnemyDamage = EDamage::WerewolfDamage;
	EnemyInfo.EnemyArmor = EDefense::WerewolfDef;
	EnemyInfo.EnemyElusion = EElusion::WerewolfEl;
	EnemyInfo.EnemyPrecision = EPrecision::WerewolfPrec;
}

//Getters
std::string Enemy::GetEnemyType()
{
	return EnemyInfo.Enemy;
}

std::string Enemy::GetEnemyName()
{
	return EnemyInfo.Enemy;
}
float Enemy::GetEnemyHP()
{
	return EnemyInfo.EnemyHP;
}

float Enemy::GetEnemyExp()
{
	return EnemyInfo.EnemyExp;
}

int Enemy::GetEnemyDamage()
{
	return EnemyInfo.EnemyDamage;
}

int Enemy::GetEnemyArmor()
{
	return EnemyInfo.EnemyArmor;
}

int Enemy::GetEnemyElusion()
{
	return EnemyInfo.EnemyElusion;
}

int Enemy::GetEnemyPrecision()
{
	return EnemyInfo.EnemyPrecision;
}