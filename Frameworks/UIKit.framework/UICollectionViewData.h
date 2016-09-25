/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewData : NSObject {
    NSMutableArray * _clonedCellAttributes;
    NSMutableArray * _clonedDecorationAttributes;
    NSMutableArray * _clonedSupplementaryAttributes;
    UICollectionView * _collectionView;
    struct { 
        unsigned int contentSizeIsValid : 1; 
        unsigned int itemCountsAreValid : 1; 
        unsigned int layoutIsPrepared : 1; 
        unsigned int layoutLocked : 1; 
    }  _collectionViewDataFlags;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentSize;
    NSMutableDictionary * _decorationLayoutAttributes;
    NSMutableIndexSet * _globalIndexesOfItemsAwaitingValidation;
    id * _globalItems;
    NSMutableDictionary * _invalidatedDecorationIndexPaths;
    NSMutableDictionary * _invalidatedSupplementaryIndexPaths;
    int  _lastResultForNumberOfItemsBeforeSection;
    int  _lastSectionTestedForNumberOfItemsBeforeSection;
    UICollectionViewLayout * _layout;
    int  _numItems;
    int  _numSections;
    NSMapTable * _screenPageMap;
    int * _sectionItemCounts;
    NSMutableDictionary * _supplementaryLayoutAttributes;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _validLayoutRect;
}

@property (nonatomic, readonly) NSArray *clonedCellAttributes;
@property (nonatomic, readonly) NSArray *clonedDecorationAttributes;
@property (nonatomic, readonly) NSArray *clonedSupplementaryAttributes;
@property (nonatomic) struct CGSize { float x1; float x2; } contentSize;
@property (nonatomic, readonly) BOOL layoutIsPrepared;
@property (getter=isLayoutLocked, nonatomic) BOOL layoutLocked;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_loadEverything;
- (void)_prepareToLoadData;
- (id)_screenPageForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setLayoutAttributes:(id)arg1 atGlobalItemIndex:(int)arg2;
- (void)_updateItemCounts;
- (void)_validateContentSize;
- (void)_validateItemCounts;
- (id)clonedCellAttributes;
- (id)clonedDecorationAttributes;
- (id)clonedSupplementaryAttributes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })collectionViewContentRect;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)dealloc;
- (id)existingSupplementaryLayoutAttributes;
- (id)existingSupplementaryLayoutAttributesInSection:(int)arg1;
- (int)globalIndexForItemAtIndexPath:(id)arg1;
- (id)indexPathForItemAtGlobalIndex:(int)arg1;
- (id)initWithCollectionView:(id)arg1 layout:(id)arg2;
- (void)invalidate:(BOOL)arg1;
- (void)invalidateDecorationIndexPaths:(id)arg1;
- (void)invalidateItemsAtIndexPaths:(id)arg1;
- (void)invalidateSupplementaryIndexPaths:(id)arg1;
- (BOOL)isGlobalIndexValid:(int)arg1;
- (BOOL)isLayoutLocked;
- (id)knownDecorationElementKinds;
- (id)knownSupplementaryElementKinds;
- (id)layoutAttributesForCellsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 validateLayout:(BOOL)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForElementsInSection:(int)arg1;
- (id)layoutAttributesForGlobalItemIndex:(int)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)layoutIsPrepared;
- (int)numberOfItems;
- (int)numberOfItemsBeforeSection:(int)arg1;
- (int)numberOfItemsInSection:(int)arg1;
- (int)numberOfSections;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForGlobalItemIndex:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForItemAtIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setLayoutLocked:(BOOL)arg1;
- (void)validateDecorationViews;
- (void)validateLayoutInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)validateSupplementaryViews;

@end
