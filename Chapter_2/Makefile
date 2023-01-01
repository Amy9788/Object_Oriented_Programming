# Test hello.cpp file
printHello: hello.o
	g++ hello.o -o printHello

hello.o: hello.cpp
	g++ -c hello.cpp

cleanHello:
	rm *.o printHello

# Test  print_input_from_user.cpp file
printInput: print_input_from_user.o
	g++ print_input_from_user.o -o printInput

print_input_from_user.o: print_input_from_user.cpp	
	g++ -c print_input_from_user.cpp

cleanInput:
	rm *.o printInput