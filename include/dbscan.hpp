#ifndef DBSCAN_HPP
#define DBSCAN_HPP

#include <vector>

#include <cassert>
#include <cstddef>
#include <span>
#include <vector>
#include <cstdlib>

class DBSCAN {
public:
    struct PointCloud {
        struct Point {
            float x, y, z;
        };

        using coord_t = float; //!< The type of each coordinate

        std::vector<Point> pts;

        // Must return the number of data points
        size_t kdtree_get_point_count() const;

        // Returns the dim'th component of the idx'th point in the class
        float kdtree_get_pt(const size_t idx, const size_t dim) const;

        // Optional bounding-box computation
        template <class BBOX>
        bool kdtree_get_bbox(BBOX& /* bb */) const;
    };

    void dbscan(PointCloud& cloud, float eps, int min_pts);
};


#endif // DBSCAN_HPP