/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutHint : NSObject <TSDHint> {
    struct TSUCellCoord { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mCacheHintID;
    struct TSUCellRect { 
        struct TSUCellCoord { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    }  mCellRange;
    struct CGSize { 
        float width; 
        float height; 
    }  mEffectiveSize;
    BOOL  mHorizontal;
    BOOL  mIsValid;
    TSTLayout * mLayout;
    struct CGSize { 
        float width; 
        float height; 
    }  mMaximumSize;
    unsigned int  mPartitionPosition;
    NSNumber * mPartitioningPass;
}

@property (nonatomic) struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; } cacheHintID;
@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } cellRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { float x1; float x2; } effectiveSize;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL horizontal;
@property (nonatomic) BOOL isValid;
@property (nonatomic) TSTLayout *layout;
@property (nonatomic) struct CGSize { float x1; float x2; } maximumSize;
@property (nonatomic) unsigned int partitionPosition;
@property (nonatomic, retain) NSNumber *partitioningPass;
@property (readonly) Class superclass;

+ (Class)archivedHintClass;

- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })cacheHintID;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })cellRange;
- (id)copyForArchiving;
- (void)dealloc;
- (id)description;
- (struct CGSize { float x1; float x2; })effectiveSize;
- (id)firstChildHint;
- (BOOL)horizontal;
- (id)init;
- (id)initWithArchive:(const struct LayoutHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct CellRange {} *x5; struct CellID {} *x6; struct Size {} *x7; bool x8; bool x9; unsigned int x10; struct Size {} *x11; unsigned int x12; }*)arg1;
- (id)initWithRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 hintId:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 partitionPosition:(unsigned int)arg3 maximumSize:(struct CGSize { float x1; float x2; })arg4 effectiveSize:(struct CGSize { float x1; float x2; })arg5 layout:(id)arg6 validity:(BOOL)arg7 horizontal:(BOOL)arg8;
- (void)invalidate;
- (BOOL)isFirstHint;
- (BOOL)isValid;
- (id)lastChildHint;
- (id)layout;
- (struct CGSize { float x1; float x2; })maximumSize;
- (void)offsetByDelta:(int)arg1;
- (BOOL)overlapsWithSelectionPath:(id)arg1;
- (unsigned int)partitionPosition;
- (id)partitioningPass;
- (oneway void)release;
- (void)saveToArchive:(struct LayoutHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct CellRange {} *x5; struct CellID {} *x6; struct Size {} *x7; bool x8; bool x9; unsigned int x10; struct Size {} *x11; unsigned int x12; }*)arg1;
- (void)setCacheHintID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setEffectiveSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setHorizontal:(BOOL)arg1;
- (void)setIsValid:(BOOL)arg1;
- (void)setLayout:(id)arg1;
- (void)setMaximumSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPartitionPosition:(unsigned int)arg1;
- (void)setPartitioningPass:(id)arg1;

@end
