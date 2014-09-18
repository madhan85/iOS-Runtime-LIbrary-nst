/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPRep;

@interface TSWPBeginMagnificationUserInfo : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    } _magnificationPoint;
    } _offset;
    TSWPRep *_target;
    bool_animated;
}

@property bool animated;
@property struct CGPoint { double x1; double x2; } magnificationPoint;
@property struct CGPoint { double x1; double x2; } offset;
@property TSWPRep * target;

- (id).cxx_construct;
- (bool)animated;
- (struct CGPoint { double x1; double x2; })magnificationPoint;
- (struct CGPoint { double x1; double x2; })offset;
- (void)setAnimated:(bool)arg1;
- (void)setMagnificationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end