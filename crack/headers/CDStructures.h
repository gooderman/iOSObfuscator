//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AVAppAsyncStatistic {
    unsigned long long size;
    long long buf_backwards;
    long long buf_forwards;
    long long buf_capacity;
};

struct AVMessage {
    int what;
    int arg1;
    int arg2;
    void *obj;
    CDUnknownFunctionPointerType free_l;
    struct AVMessage *next;
};

struct AdSize {
    int _field1;
    int _field2;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct ICMPHeader {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
};

struct IjkIOAppCacheStatistic {
    long long cache_physical_pos;
    long long cache_file_forwards;
    long long cache_file_pos;
    long long cache_count_bytes;
    long long logical_file_size;
};

struct NSMapTable {
    Class _field1;
};

struct NSMutableArray {
    Class _field1;
};

struct NSMutableDictionary {
    Class _field1;
};

struct PLCrashHostInfoVersion {
    unsigned long long major;
    unsigned long long minor;
    unsigned long long revision;
};

struct PLCrashReporterCallbacks {
    unsigned short _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
};

struct SDL_AudioSpec {
    int freq;
    unsigned short format;
    unsigned char channels;
    unsigned char silence;
    unsigned short samples;
    unsigned short padding;
    unsigned int size;
    CDUnknownFunctionPointerType callback;
    void *userdata;
};

struct SDL_Class;

struct SDL_SpeedSampler2 {
    long long sample_range;
    long long last_profile_tick;
    long long last_profile_duration;
    long long last_profile_quantity;
    long long last_profile_speed;
};

struct SDL_VoutOverlay {
    int _field1;
    int _field2;
    unsigned int _field3;
    int _field4;
    unsigned short *_field5;
    char **_field6;
    int _field7;
    int _field8;
    int _field9;
    struct SDL_Class *_field10;
    struct SDL_VoutOverlay_Opaque *_field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    CDUnknownFunctionPointerType _field14;
    CDUnknownFunctionPointerType _field15;
    CDUnknownFunctionPointerType _field16;
};

struct SDL_VoutOverlay_Opaque;

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UMCLLocationCoordinate2D {
    double _field1;
    double _field2;
};

struct UMCMRotationRate {
    double _field1;
    double _field2;
    double _field3;
};

struct WBSDKJKConstBuffer {
    struct WBSDKJKConstPtrRange _field1;
};

struct WBSDKJKConstPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct WBSDKJKEncodeCache {
    id _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct WBSDKJKEncodeState {
    struct WBSDKJKManagedBuffer _field1;
    struct WBSDKJKManagedBuffer _field2;
    unsigned long long _field3;
    struct WBSDKJKFastClassLookup _field4;
    struct WBSDKJKEncodeCache _field5[1024];
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    id _field9;
    id _field10;
    SEL _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownBlockType _field13;
};

struct WBSDKJKFastClassLookup {
    void *_field1;
    void *_field2;
    void *_field3;
    void *_field4;
    void *_field5;
};

struct WBSDKJKHashTableEntry {
    unsigned long long _field1;
    id _field2;
    id _field3;
};

struct WBSDKJKManagedBuffer {
    struct WBSDKJKPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct WBSDKJKObjCImpCache {
    Class _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
};

struct WBSDKJKObjectStack {
    void **_field1;
    void **_field2;
    unsigned long long *_field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
};

struct WBSDKJKParseState {
    unsigned long long _field1;
    struct WBSDKJKConstBuffer _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    struct WBSDKJKParseToken _field9;
    struct WBSDKJKObjectStack _field10;
    struct WBSDKJKTokenCache _field11;
    struct WBSDKJKObjCImpCache _field12;
    id _field13;
    int _field14;
    _Bool _field15;
};

struct WBSDKJKParseToken {
    struct WBSDKJKConstPtrRange _field1;
    unsigned long long _field2;
    struct WBSDKJKTokenValue _field3;
    struct WBSDKJKManagedBuffer _field4;
};

struct WBSDKJKPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct WBSDKJKTokenCache {
    struct WBSDKJKTokenCacheItem *_field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned char _field4[1024];
};

struct WBSDKJKTokenCacheItem;

struct WBSDKJKTokenValue {
    struct WBSDKJKConstPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    union {
        long long _field1;
        unsigned long long _field2;
        double _field3;
    } _field4;
    struct WBSDKJKTokenCacheItem *_field5;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PLCrashReportDecoder {
    struct _Plcrash__CrashReport *_field1;
};

struct _Plcrash__CrashReport {
    struct _ProtobufCMessage _field1;
    struct _Plcrash__CrashReport__SystemInfo *_field2;
    struct _Plcrash__CrashReport__ApplicationInfo *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Thread **_field5;
    unsigned long long _field6;
    struct _Plcrash__CrashReport__BinaryImage **_field7;
    struct _Plcrash__CrashReport__Exception *_field8;
    struct _Plcrash__CrashReport__Signal *_field9;
    struct _Plcrash__CrashReport__ProcessInfo *_field10;
    struct _Plcrash__CrashReport__MachineInfo *_field11;
    struct _Plcrash__CrashReport__ReportInfo *_field12;
};

struct _Plcrash__CrashReport__ApplicationInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    char *_field4;
};

struct _Plcrash__CrashReport__BinaryImage;

struct _Plcrash__CrashReport__Exception {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Thread__StackFrame **_field5;
};

struct _Plcrash__CrashReport__MachineInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    struct _Plcrash__CrashReport__Processor *_field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct _Plcrash__CrashReport__ProcessInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned int _field3;
    char *_field4;
    char *_field5;
    unsigned int _field6;
    int _field7;
    int _field8;
    unsigned long long _field9;
};

struct _Plcrash__CrashReport__Processor {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__ReportInfo;

struct _Plcrash__CrashReport__Signal {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Signal__MachException *_field5;
};

struct _Plcrash__CrashReport__Signal__MachException {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long *_field4;
};

struct _Plcrash__CrashReport__Symbol {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned long long _field3;
    int _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__SystemInfo {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    char *_field4;
    int _field5;
    long long _field6;
    char *_field7;
};

struct _Plcrash__CrashReport__Thread;

struct _Plcrash__CrashReport__Thread__StackFrame {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    struct _Plcrash__CrashReport__Symbol *_field3;
};

struct _ProtobufCMessage {
    struct _ProtobufCMessageDescriptor *_field1;
    unsigned int _field2;
    struct _ProtobufCMessageUnknownField *_field3;
};

struct _ProtobufCMessageDescriptor;

struct _ProtobufCMessageUnknownField;

struct __siginfo {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    unsigned int _field5;
    int _field6;
    void *_field7;
    union sigval _field8;
    long long _field9;
    unsigned long long _field10[7];
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _xmlAttr {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlAttr *_field7;
    struct _xmlAttr *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    int _field11;
    void *_field12;
};

struct _xmlDoc {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    int _field10;
    int _field11;
    struct _xmlDtd *_field12;
    struct _xmlDtd *_field13;
    struct _xmlNs *_field14;
    char *_field15;
    char *_field16;
    void *_field17;
    void *_field18;
    char *_field19;
    int _field20;
    struct _xmlDict *_field21;
    void *_field22;
    int _field23;
    int _field24;
};

struct _xmlDtd;

struct _xmlNode {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    char *_field11;
    struct _xmlAttr *_field12;
    struct _xmlNs *_field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
};

struct _xmlNs {
    struct _xmlNs *_field1;
    int _field2;
    char *_field3;
    char *_field4;
    void *_field5;
    struct _xmlDoc *_field6;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct plcrash_exception_server_context {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    CDUnknownFunctionPointerType _field5;
    void *_field6;
    struct _opaque_pthread_mutex_t _field7;
    struct _opaque_pthread_cond_t {
        long long _field1;
        char _field2[40];
    } _field8;
    unsigned int _field9;
    _Bool _field10;
};

struct plcrash_mach_exception_port_set {
    unsigned int count;
    unsigned int masks[14];
    unsigned int ports[14];
    int behaviors[14];
    int flavors[14];
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct sockaddr_un {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[104];
};

struct svm_model {
    struct svm_parameter _field1;
    int _field2;
    int _field3;
    struct svm_node **_field4;
    double **_field5;
    double *_field6;
    double *_field7;
    double *_field8;
    int *_field9;
    int *_field10;
    int *_field11;
    int _field12;
};

struct svm_node {
    int _field1;
    double _field2;
};

struct svm_parameter {
    int _field1;
    int _field2;
    int _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    int _field9;
    int *_field10;
    double *_field11;
    double _field12;
    double _field13;
    int _field14;
    int _field15;
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    unsigned char _field2;
    _Bool _field3;
    unsigned long long _field4;
} CDStruct_6a6a01a4;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    char *_field1;
    void **_field2;
    unsigned int _field3;
    int _field4;
} CDStruct_19471fff;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
} CDStruct_8727d297;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
} CDStruct_39925896;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    int used;
    int alloc;
    int sign;
    unsigned long long *dp;
} CDStruct_c40cccb6;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long _field1;
    int _field2;
} CDStruct_87dc826d;

typedef struct CDStruct_183601bc;

typedef struct {
    _Bool _field1;
    _Bool _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    double _field5;
    long long _field6;
    unsigned long long _field7;
} CDStruct_902a08d0;

#pragma mark Named Unions

union sigval {
    int _field1;
    void *_field2;
};

