#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include "NameCard.h"

NameCard::NameCard(const char *name, const char *company, const char *phone, int rank)
	:Rank(rank)
{
	int nameLen = strlen(name) + 1;
	int companyLen = strlen(company) + 1;
	int phoneLen = strlen(phone) + 1;

	Name = new char[nameLen];
	strcpy(Name, name);

	CompanyName = new char[companyLen];
	strcpy(CompanyName, company);

	PhoneNumber = new char[phoneLen];
	strcpy(PhoneNumber, phone);

	Position = new char[3];

	switch (rank)
	{
	case 1:
		Position = "���";
		break;
	case 2:
		Position = "����";
		break;
	case 3:
		Position = "�븮";
		break;
	case 4:
		Position = "����";
		break;
	default:
		break;
	}
}

void NameCard::ShowNameCardInfo() const
{
	std::cout << "name: " << Name << std::endl;
	std::cout << "company: " << CompanyName << std::endl;
	std::cout << "phone: " << PhoneNumber << std::endl;
	std::cout << "rank: " << Position << std::endl << std::endl;
}

NameCard::~NameCard()
{
	delete []Name;
	delete []CompanyName;
	delete []PhoneNumber;
}