#include <iostream>
using namespace std;
void letternumbs()//Перевод каждой буквы слова в ее порядковый номер в алфавите.
{
	int i;// Счетчик.
	int j;// Счетчик.
	int z=0;//Количестао букв в слове.
	char word[50];//Строка для getline.
	string word2[50];//Перевод getline char в string.
	string word3={};//Корректный массив без мусора из памяти, соответствующий вводу getline.
	string alph[26] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};//Алфавит.
	cout << "Enter word: ";
	cin.getline (word, 51);//Эта функция почему-то записывает на один символ меньше обозначенного в скобках.
	for (i=0; i<50; i++) word2[i]=word[i];//Перевод char в string.
	for (i=0; i<50; i++)//Подсчет букв в слове, т.е. без учета мусорных переменных массива.
		if (word3!=word)
		{
			word3=word3+word2[z];
			z++;
		}
	cout << "Your word with all letters, replaced by their alphabet numbers, is: ";//Сравнение каждой буквы слова с алфавитом и вывод ее номера, если найдено соответствие.
	for (i=0; i<=z; i++)
		for (j=0; j<26; j++)
			if (word2[i]==alph[j]) cout << j+1 << " ";
}
int main()
{
	letternumbs();
	return 0;
}
