#include "person.h"

float getMoney(person* target, float withdraw) {
	float loss = target->cash < withdraw ? target->cash : withdraw;

	(*target).cash -= loss;

	return loss;
}

void erasePerson(person** target) {
	 (*target) = nullptr;
}