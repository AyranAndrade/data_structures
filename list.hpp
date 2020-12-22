class List {
    public:
        void append(int element);
        int get(int index);
        void print_all();
        int length = 0;
    private:
        int *array = new int[10];
        int max_length = 10;
};
