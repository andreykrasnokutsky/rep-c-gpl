#include <iostream>
#include <unistd.h>//для rand
#include <algorithm>//для random_shuffle
#include <fstream>//для работы с файлами
using namespace std;

int main()
{
	srand(time(NULL));
	string  word[1000];//массив слов из input
	int i=0;//счетчик
	int j;
	int wordscount=0;//количество слов

	ifstream file ("/home/gef711/input_500_words");//открываем файл в конструкторе
	while (getline(file, word[i]) and wordscount<500)//запись данных из файла в массив
	{
		i++;
		wordscount++;
	}

	string word2=word[rand()%wordscount];//присвоение случайного слова переменной string word2
	
	string wordletters[word2.size()];
	for (i=0; i<word2.size(); i++)//присвоение массиву букв значений букв слова
		wordletters[i]=(char)word2[i];

	random_shuffle(wordletters, wordletters+word2.size());//смешивание букв wordletters
	
	string wordanagram;//переменная для слова-анаграммы
	for (i=0; i<word2.size(); i++)//запись отдельных букв в переменную
	{
		wordanagram+=wordletters[i];
	}
	
	cout<<"Anagram: "<<wordanagram<<"."<<endl<<"Enter original word (enter ? to show original word):"<<endl;
	string originalword;//слово для чтения
	getline(cin, originalword);//чтение слова
	if (originalword!=word2 and originalword!="?") cout<<"Incorrect."<<endl;
	else if (originalword==word2) cout<<"Success!"<<endl;
	else if (originalword=="?") cout<<"Original word: "<<word2<<endl;
	else cout<<"Error"<<endl;//на всякий случай
}
