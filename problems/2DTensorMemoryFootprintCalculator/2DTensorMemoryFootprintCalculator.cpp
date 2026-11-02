#include <iostream>

int main()
{
    int width{};
    int height{};
    int bytes_per_pixel{};

    std::cout << "Enter width, height, and bytes per pixel: ";
    std::cin >> width >> height >> bytes_per_pixel;

    std::cout << "Total Pixels: " << width * height << '\n';
    std::cout << "Single Frame RAM (Bytes): " << width * height * bytes_per_pixel << '\n';
    std::cout << "Double-Buffered RAM (Bytes): " << width * height * bytes_per_pixel * 2 << '\n';

    return 0;
}