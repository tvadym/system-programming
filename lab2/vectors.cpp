#include <iostream>
#include <vector>

// Функція для виводу одномірного вектора
void printVector(const std::vector<int>& vec, const std::string& name) {
    std::cout << name << " elements: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec.at(i) << " ";
    }
    std::cout << "\nSize: " << vec.size() << "\n\n";
}

// Функція для виводу 2D-вектора
void print2DVector(const std::vector<std::vector<int>>& vec2d, const std::string& name) {
    std::cout << name << " elements:\n";
    for (size_t i = 0; i < vec2d.size(); ++i) {
        for (size_t j = 0; j < vec2d.at(i).size(); ++j) {
            std::cout << vec2d.at(i).at(j) << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> vector1;
    std::vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);

    printVector(vector1, "vector1");
    printVector(vector2, "vector2");

    std::vector<std::vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    print2DVector(vector_2d, "vector_2d");

    vector1.at(0) = 1000;

    print2DVector(vector_2d, "vector_2d after modifying vector1");
    printVector(vector1, "vector1 after modification");

    return 0;
}
