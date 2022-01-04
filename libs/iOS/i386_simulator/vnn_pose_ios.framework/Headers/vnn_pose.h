#ifndef VNN_POSE_H
#define VNN_POSE_H

#include "vnn_common.h"

#ifdef __cplusplus
extern "C" {
#endif

VNN_API VNN_Result VNN_Create_Pose( VNNHandle * handle, const int argc, const void * argv[] );

VNN_API VNN_Result VNN_Destroy_Pose(VNNHandle* handle );

VNN_API VNN_Result VNN_Apply_Pose_CPU( VNNHandle handle, const void * input, void * output );

VNN_API VNN_Result VNN_Apply_Pose_GPU( VNNHandle handle, const void * input, void * output );

VNN_API VNN_Result VNN_Set_Pose_Attr( VNNHandle handle, const char * name, const void * value );

VNN_API VNN_Result VNN_Get_Pose_Attr( VNNHandle handle, const char * name, void * value );

#ifdef __cplusplus
}
#endif

#endif /* VNN_POSE_H */


