#include<iostream>
#include<string>
#include"Date.h"
#include"Student.h"
using namespace std;
Student::Student(string n, Date b, int s) :birthDay(b) {
	name = n;
	score = s;
}
const string Student::getName() {
	return name;
}
const Date Student::getDate() {
	return birthDay;
}
const int Student::getScore() {
	return score;
}
void Student::setName(string n) {
	name = n;
}
void Student::setDate(Date b) {
	birthDay = b;
}
void Student::setScore(int s) {
	score = s;
}
void Student::print() {
	cout << name << " ";
	birthDay.print();
	cout << " " << score << endl;
}