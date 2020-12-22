class List {
    public:
        void append(int element);
        void print_all();
    private:
        int *array = new int[10];
        int length = 0;
        int max_length = 10;
};
