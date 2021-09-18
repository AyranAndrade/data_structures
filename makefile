############################################# GENERAL #############################################
clean :
	find . -type f -name '*.out' -delete
	find . -type f -name '*.gch' -delete

############################################# LIST #############################################
list : compile_list test_list clean

compile_list : list/list.hpp list/list.cpp list/list_test.cpp
	g++ list/list.hpp list/list.cpp list/list_test.cpp -std=c++17 -lgtest -lpthread -o list/list.out

test_list :
	./list/list.out

############################################# LINKED LIST #########################################
linked_list : compile_linked_list run_linked_list clean

compile_linked_list : linked_list/*.cpp linked_list/*.hpp
	g++ linked_list/*.cpp linked_list/*.hpp -o linked_list.out

run_linked_list :
	./linked_list.out

############################################# LIST SET ############################################
list_set : compile_list_set run_list_set clean

compile_list_set : list_set/*.cpp list_set/*.hpp
	g++ list_set/*.cpp list_set/*.hpp -o list_set.out

run_list_set :
	./list_set.out

############################################# HASH SET ############################################
hash_set : compile_hash_set run_hash_set clean

compile_hash_set : hash_set/*.cpp hash_set/*.hpp
	g++ hash_set/*.cpp hash_set/*.hpp -o hash_set.out

run_hash_set :
	./hash_set.out

############################################# List Queue ##########################################
list_queue : compile_list_queue run_list_queue clean

compile_list_queue : list_queue/*.cpp list_queue/*.hpp
	g++ list_queue/*.cpp list_queue/*.hpp -o list_queue.out

run_list_queue :
	./list_queue.out

############################################# Binary Tree #########################################
binary_tree : compile_binary_tree run_binary_tree clean

compile_binary_tree : binary_tree/*.cpp binary_tree/*.hpp
	g++ binary_tree/*.cpp binary_tree/*.hpp -o binary_tree.out

run_binary_tree :
	./binary_tree.out

############################################# Binary Search Tree ##################################
bst : binary_search_tree

binary_search_tree : compile_binary_search_tree run_binary_search_tree clean

compile_binary_search_tree : binary_search_tree/*.cpp binary_search_tree/*.hpp
	g++ binary_search_tree/*.cpp binary_search_tree/*.hpp -o binary_search_tree.out

run_binary_search_tree :
	./binary_search_tree.out
