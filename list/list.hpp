class List {
    public:
        void append(int element);
        int get(int index);
        int size();
        void clear();
        bool contains(int element);
        int index_of(int element);
        int last_index_of(int element);
        void remove(int index);
        void insert(int element, int index);
        List sub_list(int from, int to);
        List();
    private:
        List(int *array, int max_length, int length);
        void resize_if_necessary();
        int *array = new int[10];
        int INITIAL_MAX_LENGTH = 10;
        int max_length = INITIAL_MAX_LENGTH;
        int length = 0;
};
