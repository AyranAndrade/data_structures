class List {
    public:
        void append(int element);
        int get(int index);
        int get_size();
        void print_all();
    private:
        int *array = new int[10];
        int max_length = 10;
        int length = 0;
};
