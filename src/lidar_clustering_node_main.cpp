#include "lidar_clustering/lidar_clustering_node.h"

int main(int argc, char **argv)
{
  ros::init(argc,argv, "lidar_clustering");
  lidar_clustering_node::LidarClusteringNode node;
  ros::spin();
}
