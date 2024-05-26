#include <iostream>
#include "dbscan.hpp" // Adjust this to the correct path if needed
#include "nanoflann.hpp" // Adjust this to the correct path if needed



size_t DBSCAN::PointCloud::kdtree_get_point_count() const {
    return pts.size();
}

float DBSCAN::PointCloud::kdtree_get_pt(const size_t idx, const size_t dim) const {
    if (dim == 0)
        return pts[idx].x;
    else if (dim == 1)
        return pts[idx].y;
    else
        return pts[idx].z;
}

template <class BBOX>
bool DBSCAN::PointCloud::kdtree_get_bbox(BBOX& /* bb */) const {
    return false;
}

void DBSCAN::dbscan(PointCloud& cloud, float eps, int min_pts) {

    std::cout << "Number of points: " << cloud.kdtree_get_point_count() << std::endl;
}


int main() {

    return 0;
}