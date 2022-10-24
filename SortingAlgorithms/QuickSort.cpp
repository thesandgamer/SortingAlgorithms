#include "QuickSort.h"

void Display(vector<float>* numbers, int pivotIndex)
{

	for (int i = 0; i < numbers->size(); i++)
	{
		if (i == pivotIndex)
		{
			std::cout << "(" << numbers->at(i) << ")" << " ";
		}
		else
		{
			std::cout << numbers->at(i) << " ";
		}
	}
	std::cout << std::endl;
}



void QuickSort::QuickSortVector(vector<float>* numbers)
{
	float pivotPoint = numbers->back();
	int pivotIndex = numbers->size() - 1;
	cout << pivotPoint << endl;

	//On prend le point de pivot
	//On prend l'�l�ment x de la liste
	//Si la valeur de x >= valeur du pivot
		//Ajoute un case apr�s la case du pivot
		//La de x deviens la case avant celle du pivot deviens 
		//La case avant le pivot est supprim�

	//First step: on d�coupe en deux
	for (int i = 0; i < pivotIndex; )
	{
		if (numbers->at(i) >= pivotPoint)//Check si la valeur est plus grande que celle du pivot 
		{
			numbers->emplace(numbers->begin() + pivotIndex+1 ,numbers->at(i));//Rajoute une case avec la valeur de i apr�s le pivot
			pivotIndex--;	//Comme on � rajout� un case apr�s, le pivot est plus loin
			float tempInum = numbers->at(pivotIndex - 1);
			numbers->at(i) = tempInum;	//La case i prend la valeur de celle avant le pivot
		    numbers->erase(numbers->begin() + pivotIndex - 1);//On enl�ve la case i 

		}
		else
		{
			i++;//On passe � la case suivante � check
		}

	}
	Display(numbers, pivotIndex);


}

