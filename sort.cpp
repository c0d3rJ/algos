void bubbleSort(auto& Data) {
	bool swapped = true;
	int passes = 0;
	int temp;
	while (swapped) {
		swapped = false;
		passes++;
		for (int i = 0; i < Data.size() - passes; i++) {
			if (Data[i] > Data[i + 1]) {
				//swap values
				temp = Data[i];
				Data[i] = Data[i + 1];
				Data[i + 1] = temp;
				swapped = true;
			} //end if
		} //end for
	} //end while
} //end function
