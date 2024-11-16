// Prak2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<string>
#include <iostream>
#include<algorithm>
#include<list>
#include<vector>

int main()
{
	srand(time(NULL));


   //massiv
	//Удалите все отрицательные элементы из одномерного массива.

	//int arr[5];
	//for (int i = 0; i < sizeof(arr[5]); i++)
	//{
	//	arr[i] = (rand() % 100) - 50;
	//}
	//for (int i = 0; i < sizeof(arr[5]); i++)
	//{
	//	if (arr[i] < 0)
	//	{
	//		arr[i] = 0;
	//	}
	//	std::cout << arr[i] << std::endl;
	//}

	//Double massiv
	// Удалите все столбцы с отрицательными элементами из двумерного массива.


	/*int matrix[5][5];
	std::cout << " Start arr \n";
	for (int i = 0; i < 5; i++)
	{
		
		for (int j = 0; j <5; j++)
		{
			matrix[i][j] = (rand() % 100) - 25;
			
			std::cout << matrix[i][j]<<"\t";
		}
		std::cout << "\n";
	}
	std::cout << "\n Changed arr \n";
	int temp = sizeof(matrix)+1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <5; j++)
		{
			if (matrix[i][j]<0 )
			{
				matrix[0][j] = 0;
				matrix[1][j] = 0;
				matrix[2][j] = 0;
				matrix[3][j] = 0;
				matrix[4][j] = 0;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << "\n";
	}*/
	 
	//Structurs
	//Создайте структуру "Student" с полями "name" (массив символов), "major" (массив символов) 
	// и "gpa" (вещественное число). Напишите программу на C++, которая выводит информацию о студентах в алфавитном порядке.

	
	//struct Student
	//{
	//public: char Name;
	//public: char Major;
	//public: double Gpa;
	//};

	//std::vector<Student> stud(4);
	////Create students
	//for (int k = 0; k < 4; k++)
	//{
	//	
	//	std::cout << "Write u name: ";
	//	std::cin >> stud[k].Name;
	//	std::cout << "Write u major: ";
	//	std::cin >> stud[k].Major;
	//	std::cout << "Write u Gpa: ";
	//	std::cin >> stud[k].Gpa;
	//}

	//
	//	std::sort(stud.begin(), stud.end(),[](const Student& a, const Student& b) {
	//		return a.Name < b.Name;
	//	});
	//	std::cout << "Отсортированные студенты:\n";
	//	for (const auto& student : stud) {
	//		std::cout << student.Name << " " << student.Major << " " << student.Gpa << std::endl;
	//	}




	 
	//Class
	//Создайте класс "HashTable" с приватным полем 
	// "buckets" (массив списков) и публичным методом для добавления и удаления элементов из хеш-таблицы.

	class HashTable
	{
		std::list<char> buckets;
	};


}
