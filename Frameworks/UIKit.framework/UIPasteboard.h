/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPasteboard : NSObject {
    NSString *_name;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSArray *URLs;
@property (nonatomic, readonly) int changeCount;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, copy) NSArray *colors;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int numberOfItems;
@property (getter=isPersistent, nonatomic) BOOL persistent;
@property (nonatomic, copy) NSString *string;
@property (nonatomic, copy) NSArray *strings;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_findPasteboard;
+ (id)_printPasteboard;
+ (id)generalPasteboard;
+ (id)pasteboardWithName:(id)arg1 create:(BOOL)arg2;
+ (id)pasteboardWithUniqueName;
+ (void)removePasteboardWithName:(id)arg1;

- (id)URL;
- (id)URLs;
- (void)_addItems:(id)arg1 oldPasteboardTypes:(id)arg2;
- (id)_initWithName:(id)arg1 system:(BOOL)arg2 create:(BOOL)arg3;
- (void)_pasteboardChanged:(id)arg1;
- (void)addItems:(id)arg1;
- (int)changeCount;
- (id)color;
- (id)colors;
- (BOOL)containsPasteboardTypes:(id)arg1;
- (BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (void)dealloc;
- (id)image;
- (id)images;
- (id)init;
- (BOOL)isPersistent;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (id)items;
- (id)name;
- (int)numberOfItems;
- (id)pasteboardTypes;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColors:(id)arg1;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setImages:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setPersistent:(BOOL)arg1;
- (void)setString:(id)arg1;
- (void)setStrings:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setURLs:(id)arg1;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (id)string;
- (id)strings;
- (id)valueForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (void)mf_addPasteboardRepresentationsForAttachments:(id)arg1;
- (void)mf_addPasteboardRepresentationsForTextAttachments:(id)arg1;
- (id)mf_getAttachmentsPasteboardRepresentations;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)pu_assets;
- (BOOL)pu_containsAssets;
- (id)pu_newPasteboardRepresentationForAsset:(id)arg1 data:(id)arg2 utiType:(id)arg3;
- (void)pu_setAssetRepresentation:(id)arg1;
- (void)pu_setAssetRepresentations:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (void)akClearContents;
- (id)akPasteboardAnnotations;
- (BOOL)akPasteboardContainsAnnotations;
- (void)akPasteboardSetAnnotations:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_composition;
- (id)__ck_dataForPasteboardType:(id)arg1 atIndex:(unsigned int)arg2;
- (id)__ck_filenameForType:(id)arg1 atIndex:(unsigned int)arg2;
- (id)__ck_mediaObjectAtIndex:(unsigned int)arg1;
- (id)__ck_mediaObjectManager;
- (id)__ck_pasteboardTypeListRTF;
- (id)__ck_pasteboardTypesForIndex:(unsigned int)arg1;
- (id)__ck_valueForPasteboardType:(id)arg1 atIndex:(unsigned int)arg2;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)pl_assetsInPhotoLibrary:(id)arg1;
- (BOOL)pl_containsAssets;
- (void)pl_setAsset:(id)arg1;
- (void)pl_setAssets:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (id)objectsForPasteboardType:(id)arg1;

@end
