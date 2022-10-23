#ifndef __NAMECARD_H_
#define __NAMECARD_H_

class NameCard
{
private:
	char *Name;
	char *CompanyName;
	char *PhoneNumber;
	const char *Position;
	int Rank;

public:
	NameCard(const char *name, const char *company, const char *phone, int rank);
	void ShowNameCardInfo() const;
	~NameCard();
};
#endif // !__NAMECARD_H_
