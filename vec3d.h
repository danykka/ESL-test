typedef struct {
    double x;
    double y;
    double z;
} Vector;

void setVector(Vector*, double, double, double);

void printVector(Vector*);

void addVector(Vector*, Vector*);

void subVector(Vector*, Vector*);

double dotVector(Vector*, Vector*);

void crossVector(Vector*, Vector*);