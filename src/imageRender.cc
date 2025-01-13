#include <iostream>

int main() {
    int img_h = 256;
    int img_w = 256;

    std::cout << "P3" << std::endl;
    std::cout << img_h << ' ' << img_w << '\n' << "255" << std::endl;


    //generate a gradient
    for(int i  = 0; i < img_h; i++){
        std::clog<<"\rScanlines Remaining: " << (img_h - i) << ' '<< std::flush;
        for(int j = 0; j < img_w; j++){
            double r = double(j)/(img_w - 1);
            double g = double(i)/(img_h - 1);
            double b = ((double(j) + double(i)) / 2.0)/((img_h + img_w)/2.0);

            int ir = int(255.999 * r);
            int ig = int(255.999 * g);
            int ib = int(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << std::endl;

        }   
    }

    std::clog<<"\rDone Rendering.............. \n";
}   
