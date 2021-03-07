

#include "modules/perception/base/blob.h"
#include <iostream>

int main(){
    using namespace apollo::perception::base;
    Blob<float> blob_4d(1, 2, 3, 4);
    Blob<float> blob_2d;
    blob_2d.Reshape({2, 3});
    blob_4d.Reshape({1, 1, 6, 4});
    blob_4d.Reshape({2, 3, 4, 5});

    float cpu_data[120];
    blob_4d.set_cpu_data(cpu_data);
    // decrease count_ and makke count_ * sizeof(Dtype) < data_.size()
    blob_4d.Reshape({1, 3, 4, 5});
    blob_4d.set_cpu_data(cpu_data);
    return 0;
}