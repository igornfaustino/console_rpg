#include "Enemy.h"

Enemy::Enemy(int level)
{
	this->level = level;
	this->hpMax = level * 10;
	this->hp = this->hpMax;
	this->damageMin = level * 4;
	this->damageMax = level * 5;
	this->dropChance = rand() % 100;
	this->defence = rand() % 100;
	this->accuracy = rand() % 100;
}

Enemy::~Enemy()
{
}

std::string Enemy::getAsString() const
{
	return "Level: " + std::to_string(this->level) + "\n" +
		   "Hp: " + std::to_string(this->hp) + "/" + std::to_string(this->hpMax) + "\n" +
		   "Damage: " + std::to_string(this->damageMin) + "-" + std::to_string(this->damageMax) + "\n" +
		   "Defence: " + std::to_string(this->defence) + "\n" +
		   "Accuracy: " + std::to_string(this->accuracy) + "\n" +
		   "Drop chance: " + std::to_string(this->dropChance);
}