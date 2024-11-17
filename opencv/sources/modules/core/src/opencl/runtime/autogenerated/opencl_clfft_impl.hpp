//
// AUTOGENERATED, DO NOT EDIT
//
// generated by parser_clfft.py
enum OPENCLAMDFFT_FN_ID {
    OPENCLAMDFFT_FN_clfftBakePlan = 0,
//    OPENCLAMDFFT_FN_clfftCopyPlan = 1,
    OPENCLAMDFFT_FN_clfftCreateDefaultPlan = 2,
    OPENCLAMDFFT_FN_clfftDestroyPlan = 3,
    OPENCLAMDFFT_FN_clfftEnqueueTransform = 4,
//    OPENCLAMDFFT_FN_clfftGetLayout = 5,
//    OPENCLAMDFFT_FN_clfftGetPlanBatchSize = 6,
//    OPENCLAMDFFT_FN_clfftGetPlanContext = 7,
//    OPENCLAMDFFT_FN_clfftGetPlanDim = 8,
//    OPENCLAMDFFT_FN_clfftGetPlanDistance = 9,
//    OPENCLAMDFFT_FN_clfftGetPlanInStride = 10,
//    OPENCLAMDFFT_FN_clfftGetPlanLength = 11,
//    OPENCLAMDFFT_FN_clfftGetPlanOutStride = 12,
//    OPENCLAMDFFT_FN_clfftGetPlanPrecision = 13,
//    OPENCLAMDFFT_FN_clfftGetPlanScale = 14,
//    OPENCLAMDFFT_FN_clfftGetPlanTransposeResult = 15,
//    OPENCLAMDFFT_FN_clfftGetResultLocation = 16,
    OPENCLAMDFFT_FN_clfftGetTmpBufSize = 17,
    OPENCLAMDFFT_FN_clfftGetVersion = 18,
    OPENCLAMDFFT_FN_clfftSetLayout = 19,
    OPENCLAMDFFT_FN_clfftSetPlanBatchSize = 20,
//    OPENCLAMDFFT_FN_clfftSetPlanCallback = 21,
//    OPENCLAMDFFT_FN_clfftSetPlanDim = 22,
    OPENCLAMDFFT_FN_clfftSetPlanDistance = 23,
    OPENCLAMDFFT_FN_clfftSetPlanInStride = 24,
//    OPENCLAMDFFT_FN_clfftSetPlanLength = 25,
    OPENCLAMDFFT_FN_clfftSetPlanOutStride = 26,
    OPENCLAMDFFT_FN_clfftSetPlanPrecision = 27,
    OPENCLAMDFFT_FN_clfftSetPlanScale = 28,
//    OPENCLAMDFFT_FN_clfftSetPlanTransposeResult = 29,
    OPENCLAMDFFT_FN_clfftSetResultLocation = 30,
    OPENCLAMDFFT_FN_clfftSetup = 31,
    OPENCLAMDFFT_FN_clfftTeardown = 32,
};

namespace {
// generated by parser_clfft.py
#define openclamdfft_fn0(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(); } \

#define openclamdfft_fn1(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1); } \

#define openclamdfft_fn2(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2); } \

#define openclamdfft_fn3(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3); } \

#define openclamdfft_fn4(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4); } \

#define openclamdfft_fn5(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5); } \

#define openclamdfft_fn6(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6); } \

#define openclamdfft_fn7(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7); } \

#define openclamdfft_fn8(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8); } \

#define openclamdfft_fn9(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9); } \

#define openclamdfft_fn10(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } \

#define openclamdfft_fn11(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } \

#define openclamdfft_fn12(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } \

#define openclamdfft_fn13(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } \

#define openclamdfft_fn14(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } \

#define openclamdfft_fn15(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); } \

#define openclamdfft_fn16(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } \

#define openclamdfft_fn17(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17); } \

#define openclamdfft_fn18(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18); } \

#define openclamdfft_fn19(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19); } \

#define openclamdfft_fn20(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20); } \

#define openclamdfft_fn21(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21); } \

#define openclamdfft_fn22(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22); } \

}

// generated by parser_clfft.py
openclamdfft_fn5(OPENCLAMDFFT_FN_clfftBakePlan, clfftStatus, (clfftPlanHandle p1, cl_uint p2, cl_command_queue* p3, void (CL_CALLBACK*p4) (clfftPlanHandle plHandle, void* user_data), void* p5))
clfftStatus (*clfftBakePlan)(clfftPlanHandle, cl_uint, cl_command_queue*, void (CL_CALLBACK*) (clfftPlanHandle plHandle, void* user_data), void*) =
        OPENCLAMDFFT_FN_clfftBakePlan_switch_fn;
static const struct DynamicFnEntry clfftBakePlan_definition = { "clfftBakePlan", (void**)&clfftBakePlan};

//openclamdfft_fn3(OPENCLAMDFFT_FN_clfftCopyPlan, clfftStatus, (clfftPlanHandle* p1, cl_context p2, clfftPlanHandle p3))
//clfftStatus (*clfftCopyPlan)(clfftPlanHandle*, cl_context, clfftPlanHandle) =
//        OPENCLAMDFFT_FN_clfftCopyPlan_switch_fn;
//static const struct DynamicFnEntry clfftCopyPlan_definition = { "clfftCopyPlan", (void**)&clfftCopyPlan};

openclamdfft_fn4(OPENCLAMDFFT_FN_clfftCreateDefaultPlan, clfftStatus, (clfftPlanHandle* p1, cl_context p2, const clfftDim p3, const size_t* p4))
clfftStatus (*clfftCreateDefaultPlan)(clfftPlanHandle*, cl_context, const clfftDim, const size_t*) =
        OPENCLAMDFFT_FN_clfftCreateDefaultPlan_switch_fn;
static const struct DynamicFnEntry clfftCreateDefaultPlan_definition = { "clfftCreateDefaultPlan", (void**)&clfftCreateDefaultPlan};

openclamdfft_fn1(OPENCLAMDFFT_FN_clfftDestroyPlan, clfftStatus, (clfftPlanHandle* p1))
clfftStatus (*clfftDestroyPlan)(clfftPlanHandle*) =
        OPENCLAMDFFT_FN_clfftDestroyPlan_switch_fn;
static const struct DynamicFnEntry clfftDestroyPlan_definition = { "clfftDestroyPlan", (void**)&clfftDestroyPlan};

openclamdfft_fn10(OPENCLAMDFFT_FN_clfftEnqueueTransform, clfftStatus, (clfftPlanHandle p1, clfftDirection p2, cl_uint p3, cl_command_queue* p4, cl_uint p5, const cl_event* p6, cl_event* p7, cl_mem* p8, cl_mem* p9, cl_mem p10))
clfftStatus (*clfftEnqueueTransform)(clfftPlanHandle, clfftDirection, cl_uint, cl_command_queue*, cl_uint, const cl_event*, cl_event*, cl_mem*, cl_mem*, cl_mem) =
        OPENCLAMDFFT_FN_clfftEnqueueTransform_switch_fn;
static const struct DynamicFnEntry clfftEnqueueTransform_definition = { "clfftEnqueueTransform", (void**)&clfftEnqueueTransform};

//openclamdfft_fn3(OPENCLAMDFFT_FN_clfftGetLayout, clfftStatus, (const clfftPlanHandle p1, clfftLayout* p2, clfftLayout* p3))
//clfftStatus (*clfftGetLayout)(const clfftPlanHandle, clfftLayout*, clfftLayout*) =
//        OPENCLAMDFFT_FN_clfftGetLayout_switch_fn;
//static const struct DynamicFnEntry clfftGetLayout_definition = { "clfftGetLayout", (void**)&clfftGetLayout};

//openclamdfft_fn2(OPENCLAMDFFT_FN_clfftGetPlanBatchSize, clfftStatus, (const clfftPlanHandle p1, size_t* p2))
//clfftStatus (*clfftGetPlanBatchSize)(const clfftPlanHandle, size_t*) =
//        OPENCLAMDFFT_FN_clfftGetPlanBatchSize_switch_fn;
//static const struct DynamicFnEntry clfftGetPlanBatchSize_definition = { "clfftGetPlanBatchSize", (void**)&clfftGetPlanBatchSize};

//openclamdfft_fn2(OPENCLAMDFFT_FN_clfftGetPlanContext, clfftStatus, (const clfftPlanHandle p1, cl_context* p2))
//clfftStatus (*clfftGetPlanContext)(const clfftPlanHandle, cl_context*) =
//        OPENCLAMDFFT_FN_clfftGetPlanContext_switch_fn;
//static const struct DynamicFnEntry clfftGetPlanContext_definition = { "clfftGetPlanContext", (void**)&clfftGetPlanContext};

//openclamdfft_fn3(OPENCLAMDFFT_FN_clfftGetPlanDim, clfftStatus, (const clfftPlanHandle p1, clfftDim* p2, cl_uint* p3))
//clfftStatus (*clfftGetPlanDim)(const clfftPlanHandle, clfftDim*, cl_uint*) =
//        OPENCLAMDFFT_FN_clfftGetPlanDim_switch_fn;
//static const struct DynamicFnEntry clfftGetPlanDim_definition = { "clfftGetPlanDim", (void**)&clfftGetPlanDim};

//openclamdfft_fn3(OPENCLAMDFFT_FN_clfftGetPlanDistance, clfftStatus, (const clfftPlanHandle p1, size_t* p2, size_t* p3))
//clfftStatus (*clfftGetPlanDistance)(const clfftPlanHandle, size_t*, size_t*) =
//        OPENCLAMDFFT_FN_clfftGetPlanDistance_switch_fn;
//static const struct DynamicFnEntry clfftGetPlanDistance_definition = { "clfftGetPlanDistance", (void**)&clfftGetPlanDistance};

//openclamdfft_fn3(OPENCLAMDFFT_FN_clfftGetPlanInStride, clfftStatus, (const clfftPlanHandle p1, const clfftDim p2, size_t* p3))
//clfftStatus (*clfftGetPlanInStride)(const clfftPlanHandle, const clfftDim, size_t*) =
//        OPENCLAMDFFT_FN_clfftGetPlanInStride_switch_fn;
//static const struct DynamicFnEntry clfftGetPlanInStride_definition = { "clfftGetPlanInStride", (void**)&clfftGetPlanInStride};

//openclamdfft_fn3(OPENCLAMDFFT_FN_clfftGetPlanLength, clfftStatus, (const clfftPlanHandle p1, const clfftDim p2, size_t* p3))
//clfftStatus (*clfftGetPlanLength)(const clfftPlanHandle, const clfftDim, size_t*) =
//        OPENCLAMDFFT_FN_clfftGetPlanLength_switch_fn;
//static const struct DynamicFnEntry clfftGetPlanLength_definition = { "clfftGetPlanLength", (void**)&clfftGetPlanLength};

//openclamdfft_fn3(OPENCLAMDFFT_FN_clfftGetPlanOutStride, clfftStatus, (const clfftPlanHandle p1, const clfftDim p2, size_t* p3))
//clfftStatus (*clfftGetPlanOutStride)(const clfftPlanHandle, const clfftDim, size_t*) =
//        OPENCLAMDFFT_FN_clfftGetPlanOutStride_switch_fn;
//static const struct DynamicFnEntry clfftGetPlanOutStride_definition = { "clfftGetPlanOutStride", (void**)&clfftGetPlanOutStride};

//openclamdfft_fn2(OPENCLAMDFFT_FN_clfftGetPlanPrecision, clfftStatus, (const clfftPlanHandle p1, clfftPrecision* p2))
//clfftStatus (*clfftGetPlanPrecision)(const clfftPlanHandle, clfftPrecision*) =
//        OPENCLAMDFFT_FN_clfftGetPlanPrecision_switch_fn;
//static const struct DynamicFnEntry clfftGetPlanPrecision_definition = { "clfftGetPlanPrecision", (void**)&clfftGetPlanPrecision};

//openclamdfft_fn3(OPENCLAMDFFT_FN_clfftGetPlanScale, clfftStatus, (const clfftPlanHandle p1, clfftDirection p2, cl_float* p3))
//clfftStatus (*clfftGetPlanScale)(const clfftPlanHandle, clfftDirection, cl_float*) =
//        OPENCLAMDFFT_FN_clfftGetPlanScale_switch_fn;
//static const struct DynamicFnEntry clfftGetPlanScale_definition = { "clfftGetPlanScale", (void**)&clfftGetPlanScale};

//openclamdfft_fn2(OPENCLAMDFFT_FN_clfftGetPlanTransposeResult, clfftStatus, (const clfftPlanHandle p1, clfftResultTransposed* p2))
//clfftStatus (*clfftGetPlanTransposeResult)(const clfftPlanHandle, clfftResultTransposed*) =
//        OPENCLAMDFFT_FN_clfftGetPlanTransposeResult_switch_fn;
//static const struct DynamicFnEntry clfftGetPlanTransposeResult_definition = { "clfftGetPlanTransposeResult", (void**)&clfftGetPlanTransposeResult};

//openclamdfft_fn2(OPENCLAMDFFT_FN_clfftGetResultLocation, clfftStatus, (const clfftPlanHandle p1, clfftResultLocation* p2))
//clfftStatus (*clfftGetResultLocation)(const clfftPlanHandle, clfftResultLocation*) =
//        OPENCLAMDFFT_FN_clfftGetResultLocation_switch_fn;
//static const struct DynamicFnEntry clfftGetResultLocation_definition = { "clfftGetResultLocation", (void**)&clfftGetResultLocation};

openclamdfft_fn2(OPENCLAMDFFT_FN_clfftGetTmpBufSize, clfftStatus, (const clfftPlanHandle p1, size_t* p2))
clfftStatus (*clfftGetTmpBufSize)(const clfftPlanHandle, size_t*) =
        OPENCLAMDFFT_FN_clfftGetTmpBufSize_switch_fn;
static const struct DynamicFnEntry clfftGetTmpBufSize_definition = { "clfftGetTmpBufSize", (void**)&clfftGetTmpBufSize};

openclamdfft_fn3(OPENCLAMDFFT_FN_clfftGetVersion, clfftStatus, (cl_uint* p1, cl_uint* p2, cl_uint* p3))
clfftStatus (*clfftGetVersion)(cl_uint*, cl_uint*, cl_uint*) =
        OPENCLAMDFFT_FN_clfftGetVersion_switch_fn;
static const struct DynamicFnEntry clfftGetVersion_definition = { "clfftGetVersion", (void**)&clfftGetVersion};

openclamdfft_fn3(OPENCLAMDFFT_FN_clfftSetLayout, clfftStatus, (clfftPlanHandle p1, clfftLayout p2, clfftLayout p3))
clfftStatus (*clfftSetLayout)(clfftPlanHandle, clfftLayout, clfftLayout) =
        OPENCLAMDFFT_FN_clfftSetLayout_switch_fn;
static const struct DynamicFnEntry clfftSetLayout_definition = { "clfftSetLayout", (void**)&clfftSetLayout};

openclamdfft_fn2(OPENCLAMDFFT_FN_clfftSetPlanBatchSize, clfftStatus, (clfftPlanHandle p1, size_t p2))
clfftStatus (*clfftSetPlanBatchSize)(clfftPlanHandle, size_t) =
        OPENCLAMDFFT_FN_clfftSetPlanBatchSize_switch_fn;
static const struct DynamicFnEntry clfftSetPlanBatchSize_definition = { "clfftSetPlanBatchSize", (void**)&clfftSetPlanBatchSize};

//openclamdfft_fn7(OPENCLAMDFFT_FN_clfftSetPlanCallback, clfftStatus, (clfftPlanHandle p1, const char* p2, const char* p3, int p4, clfftCallbackType p5, cl_mem* p6, int p7))
//clfftStatus (*clfftSetPlanCallback)(clfftPlanHandle, const char*, const char*, int, clfftCallbackType, cl_mem*, int) =
//        OPENCLAMDFFT_FN_clfftSetPlanCallback_switch_fn;
//static const struct DynamicFnEntry clfftSetPlanCallback_definition = { "clfftSetPlanCallback", (void**)&clfftSetPlanCallback};

//openclamdfft_fn2(OPENCLAMDFFT_FN_clfftSetPlanDim, clfftStatus, (clfftPlanHandle p1, const clfftDim p2))
//clfftStatus (*clfftSetPlanDim)(clfftPlanHandle, const clfftDim) =
//        OPENCLAMDFFT_FN_clfftSetPlanDim_switch_fn;
//static const struct DynamicFnEntry clfftSetPlanDim_definition = { "clfftSetPlanDim", (void**)&clfftSetPlanDim};

openclamdfft_fn3(OPENCLAMDFFT_FN_clfftSetPlanDistance, clfftStatus, (clfftPlanHandle p1, size_t p2, size_t p3))
clfftStatus (*clfftSetPlanDistance)(clfftPlanHandle, size_t, size_t) =
        OPENCLAMDFFT_FN_clfftSetPlanDistance_switch_fn;
static const struct DynamicFnEntry clfftSetPlanDistance_definition = { "clfftSetPlanDistance", (void**)&clfftSetPlanDistance};

openclamdfft_fn3(OPENCLAMDFFT_FN_clfftSetPlanInStride, clfftStatus, (clfftPlanHandle p1, const clfftDim p2, size_t* p3))
clfftStatus (*clfftSetPlanInStride)(clfftPlanHandle, const clfftDim, size_t*) =
        OPENCLAMDFFT_FN_clfftSetPlanInStride_switch_fn;
static const struct DynamicFnEntry clfftSetPlanInStride_definition = { "clfftSetPlanInStride", (void**)&clfftSetPlanInStride};

//openclamdfft_fn3(OPENCLAMDFFT_FN_clfftSetPlanLength, clfftStatus, (clfftPlanHandle p1, const clfftDim p2, const size_t* p3))
//clfftStatus (*clfftSetPlanLength)(clfftPlanHandle, const clfftDim, const size_t*) =
//        OPENCLAMDFFT_FN_clfftSetPlanLength_switch_fn;
//static const struct DynamicFnEntry clfftSetPlanLength_definition = { "clfftSetPlanLength", (void**)&clfftSetPlanLength};

openclamdfft_fn3(OPENCLAMDFFT_FN_clfftSetPlanOutStride, clfftStatus, (clfftPlanHandle p1, const clfftDim p2, size_t* p3))
clfftStatus (*clfftSetPlanOutStride)(clfftPlanHandle, const clfftDim, size_t*) =
        OPENCLAMDFFT_FN_clfftSetPlanOutStride_switch_fn;
static const struct DynamicFnEntry clfftSetPlanOutStride_definition = { "clfftSetPlanOutStride", (void**)&clfftSetPlanOutStride};

openclamdfft_fn2(OPENCLAMDFFT_FN_clfftSetPlanPrecision, clfftStatus, (clfftPlanHandle p1, clfftPrecision p2))
clfftStatus (*clfftSetPlanPrecision)(clfftPlanHandle, clfftPrecision) =
        OPENCLAMDFFT_FN_clfftSetPlanPrecision_switch_fn;
static const struct DynamicFnEntry clfftSetPlanPrecision_definition = { "clfftSetPlanPrecision", (void**)&clfftSetPlanPrecision};

openclamdfft_fn3(OPENCLAMDFFT_FN_clfftSetPlanScale, clfftStatus, (clfftPlanHandle p1, clfftDirection p2, cl_float p3))
clfftStatus (*clfftSetPlanScale)(clfftPlanHandle, clfftDirection, cl_float) =
        OPENCLAMDFFT_FN_clfftSetPlanScale_switch_fn;
static const struct DynamicFnEntry clfftSetPlanScale_definition = { "clfftSetPlanScale", (void**)&clfftSetPlanScale};

//openclamdfft_fn2(OPENCLAMDFFT_FN_clfftSetPlanTransposeResult, clfftStatus, (clfftPlanHandle p1, clfftResultTransposed p2))
//clfftStatus (*clfftSetPlanTransposeResult)(clfftPlanHandle, clfftResultTransposed) =
//        OPENCLAMDFFT_FN_clfftSetPlanTransposeResult_switch_fn;
//static const struct DynamicFnEntry clfftSetPlanTransposeResult_definition = { "clfftSetPlanTransposeResult", (void**)&clfftSetPlanTransposeResult};

openclamdfft_fn2(OPENCLAMDFFT_FN_clfftSetResultLocation, clfftStatus, (clfftPlanHandle p1, clfftResultLocation p2))
clfftStatus (*clfftSetResultLocation)(clfftPlanHandle, clfftResultLocation) =
        OPENCLAMDFFT_FN_clfftSetResultLocation_switch_fn;
static const struct DynamicFnEntry clfftSetResultLocation_definition = { "clfftSetResultLocation", (void**)&clfftSetResultLocation};

openclamdfft_fn1(OPENCLAMDFFT_FN_clfftSetup, clfftStatus, (const clfftSetupData* p1))
clfftStatus (*clfftSetup)(const clfftSetupData*) =
        OPENCLAMDFFT_FN_clfftSetup_switch_fn;
static const struct DynamicFnEntry clfftSetup_definition = { "clfftSetup", (void**)&clfftSetup};

openclamdfft_fn0(OPENCLAMDFFT_FN_clfftTeardown, clfftStatus, ())
clfftStatus (*clfftTeardown)() =
        OPENCLAMDFFT_FN_clfftTeardown_switch_fn;
static const struct DynamicFnEntry clfftTeardown_definition = { "clfftTeardown", (void**)&clfftTeardown};


// generated by parser_clfft.py
static const struct DynamicFnEntry* openclamdfft_fn[] = {
    &clfftBakePlan_definition,
    NULL/*&clfftCopyPlan_definition*/,
    &clfftCreateDefaultPlan_definition,
    &clfftDestroyPlan_definition,
    &clfftEnqueueTransform_definition,
    NULL/*&clfftGetLayout_definition*/,
    NULL/*&clfftGetPlanBatchSize_definition*/,
    NULL/*&clfftGetPlanContext_definition*/,
    NULL/*&clfftGetPlanDim_definition*/,
    NULL/*&clfftGetPlanDistance_definition*/,
    NULL/*&clfftGetPlanInStride_definition*/,
    NULL/*&clfftGetPlanLength_definition*/,
    NULL/*&clfftGetPlanOutStride_definition*/,
    NULL/*&clfftGetPlanPrecision_definition*/,
    NULL/*&clfftGetPlanScale_definition*/,
    NULL/*&clfftGetPlanTransposeResult_definition*/,
    NULL/*&clfftGetResultLocation_definition*/,
    &clfftGetTmpBufSize_definition,
    &clfftGetVersion_definition,
    &clfftSetLayout_definition,
    &clfftSetPlanBatchSize_definition,
    NULL/*&clfftSetPlanCallback_definition*/,
    NULL/*&clfftSetPlanDim_definition*/,
    &clfftSetPlanDistance_definition,
    &clfftSetPlanInStride_definition,
    NULL/*&clfftSetPlanLength_definition*/,
    &clfftSetPlanOutStride_definition,
    &clfftSetPlanPrecision_definition,
    &clfftSetPlanScale_definition,
    NULL/*&clfftSetPlanTransposeResult_definition*/,
    &clfftSetResultLocation_definition,
    &clfftSetup_definition,
    &clfftTeardown_definition,
};

// number of enabled functions: 16
