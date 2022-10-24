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
	//On prend l'élément x de la liste
	//Si la valeur de x >= valeur du pivot
		//Ajoute un case après la case du pivot
		//La de x deviens la case avant celle du pivot deviens 
		//La case avant le pivot est supprimé

	for (int i = 0; i < pivotIndex; )
	{
		if (numbers->at(i) >= pivotPoint)
		{
			
			numbers->emplace(numbers->begin() + pivotIndex+1 ,numbers->at(i));//Rajoute une case avec la valeur de i après le pivot
			pivotIndex--;	//Comme on à rajouté un case après, le pivot est plus loin
			numbers->erase(numbers->begin() + i);	//On enlève la case où était i 

			

			float tempNum = numbers->at(pivotIndex - 1);	//On va stoquer la valeur de la case avant celle du pivot
			numbers->erase(numbers->begin() + pivotIndex - 1);	//On va supprimer cette case

			numbers->emplace(numbers->begin() + i, tempNum);


		}
		else
		{
			i++;
		}

	}
	Display(numbers, pivotIndex);
	


}

