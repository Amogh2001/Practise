class Point2d {
public: 
	int x, y;
	Point2d(int a, int b) {
		x = a;
		y = b;
	}
	bool operator<(const Point2d& other) const {
		if (x < other.x) {
			return true;
		}
		else if (x > other.x) {
			return false;
		}
		else if (y < other.y) {
			return true;
		}
		else {
			return false;
		}
	}
};

