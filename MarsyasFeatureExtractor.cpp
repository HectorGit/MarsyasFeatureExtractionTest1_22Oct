
#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "CentroidExtractor.h"

int main()
{
	CentroidExtractor* myCentroidExtractor = new CentroidExtractor();
	
	myCentroidExtractor->toy_with_centroid("file.wav");
	
	std::cin.get();

	return 0;
}