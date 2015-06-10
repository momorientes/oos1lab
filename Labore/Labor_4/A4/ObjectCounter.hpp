class ObjectCounter {
	const int id;
	static int maxId;
	static int number;
public:
	ObjectCounter();
	~ObjectCounter();
	int getId() const;
	int getMaxId() const;
	int getNumber() const;
};
