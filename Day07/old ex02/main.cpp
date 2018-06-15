	
    int     main(void)
    {
        Array<int> arr(5);
        std::cout << "a\n";
        for (unsigned int i = 0; i < arr.size(); i++){
            arr[i] = i;
        }
        std::cout << "b\n";
        for (unsigned int i = 0; i < arr.size(); i++){
            std::cout << arr[i] << ", ";
        }

        std::cout << '\n';

        try {
            std::cout << arr[69];
        }
        catch (std::exception &e){
            std::cout << e.what() << '\n';
        }


    	return 0;
}