class List {
    public:
        void append(int element);
        int get(int index);
        int get_size();
        void print_all();
        void clear();
        bool contains(int element);
        int index_of(int element);
        int last_index_of(int element);
    private:
        int *array = new int[10];
        int INITIAL_MAX_LENGTH = 10;
        int max_length = INITIAL_MAX_LENGTH;
        int length = 0;
};
