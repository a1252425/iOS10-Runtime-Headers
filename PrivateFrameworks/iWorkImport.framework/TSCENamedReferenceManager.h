/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCENamedReferenceManager : TSPObject <TSCEReferenceTrackerDelegate> {
    TSCECalculationEngine * mCalculationEngine;
    NSLock * mNRMLock;
    TSCENamedReferenceTrie * mNames;
    TSCEReferenceTracker * mReferenceTracker;
    struct __CFDictionary { } * mStringsByTrackedReferenceByTable;
    struct __CFSet { } * mTablesBeingTracked;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)beginTrackingNameInCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 ofResolver:(id)arg2 addingTrackedReferencesTo:(id)arg3;
- (void)beginTrackingNamesInRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1 ofResolver:(id)arg2 addingTrackedReferencesTo:(id)arg3;
- (id)beginTrackingNamesInTable:(struct __CFUUID { }*)arg1 limitedToRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg2;
- (id)cellRangeWasInserted:(struct { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)endTrackingNamesInTable:(struct __CFUUID { }*)arg1;
- (struct __CFUUID { }*)formulaOwnerID;
- (void)headerCellContentWasModified:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2;
- (struct { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })rangeForTrackedReference:(id)arg1 gettingTrackedCell:(struct { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; }*)arg2;
- (id)referenceForTrackedReference:(id)arg1 sticky:(bool)arg2;
- (bool)referenceNameIsUnique:(id)arg1 forReference:(struct { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg2 contextTable:(struct __CFUUID { }*)arg3;
- (id)referenceTracker;
- (void)referenceTrackerDidUpdateReferences:(id)arg1;
- (void)referencedCellWasModified:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setCalculationEngine:(id)arg1;
- (bool)shouldRewriteOnCellMerge;
- (bool)shouldRewriteOnRangeMove;
- (bool)shouldRewriteOnSort;
- (bool)shouldRewriteOnTableIDReassignment;
- (bool)shouldRewriteOnTectonicShift;
- (bool)shouldRewriteOnTranspose;
- (id)stringForTrackedReference:(id)arg1 inTable:(struct __CFUUID { }*)arg2;
- (void)trackedReferenceWasDeleted:(id)arg1 fromOwnerID:(struct __CFUUID { }*)arg2;
- (id)trackedReferencesExactlyMatchingString:(id)arg1 scopedToTable:(struct __CFUUID { }*)arg2;
- (bool)trackedReferencesExistForTable:(struct __CFUUID { }*)arg1;
- (id)trackedReferencesMatchingPrefix:(id)arg1;
- (id)trackedReferencesMatchingPrefix:(id)arg1 scopedToTable:(struct __CFUUID { }*)arg2;
- (void)updateTrackedHeaders:(struct __CFUUID { }*)arg1;

@end
