#include "QuickSort.h"


void QuickSort::DisplayQuickSort(vector<float>* numbers, int pivotIndex)
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



void QuickSort::QuickSortVector(vector<float>* numbers,int startPoint, int pivotIndex)
{
	//------------------PseudoCode------------------\\
	//On prend le point de pivot
	//On prend l'élément x de la liste
	//Si la valeur de x >= valeur du pivot
		//Ajoute un case après la case du pivot
		//La de x deviens la case avant celle du pivot deviens 
		//La case avant le pivot est supprimé
	//-----------------------------------------------\\
	
	DisplayQuickSort(numbers, pivotIndex);

	float pivotPoint = numbers->at(pivotIndex); //Stoque la valeur du point de pivot
	cout << "Pivot point: " << pivotPoint << endl;
	bool check = false;

	//First step: on découpe en deux l
	for (int i = startPoint; i < pivotIndex; )
	{
		if (numbers->at(i) > pivotPoint)//Check si la valeur est plus grande que celle du pivot 
		{
			if (pivotIndex > 1)
			{
				numbers->emplace(numbers->begin() + pivotIndex + 1, numbers->at(i));//Rajoute une case avec la valeur de i après le pivot
				float tempInum = numbers->at(pivotIndex - 1);
				numbers->at(i) = tempInum;	//La case i prend la valeur de celle avant le pivot
				numbers->erase(numbers->begin() + pivotIndex - 1);//On enlève la case i 
				pivotIndex--;	//Comme on à rajouté un case après, le pivot est plus loin

				check = true;
			}
			else
			{
				break;
			}



		}
		else
		{
			i++;//On passe à la case suivante à check
		}

	}
	DisplayQuickSort(numbers, pivotIndex);
	std::cout << std::endl;

	if (!check) return;
	QuickSortVector(numbers, 0, pivotIndex-1);
	QuickSortVector(numbers, pivotIndex, numbers->size() - 1);




}

