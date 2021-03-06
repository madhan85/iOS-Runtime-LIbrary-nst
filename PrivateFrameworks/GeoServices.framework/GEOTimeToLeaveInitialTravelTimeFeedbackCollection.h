/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTimeToLeaveInitialTravelTimeFeedbackCollection : PBCodable <NSCopying> {
    struct { 
        unsigned int travelTime : 1; 
    } _has;
    int _travelTime;
}

@property (nonatomic) BOOL hasTravelTime;
@property (nonatomic) int travelTime;

- (int)bucketValueForTravelTime:(double)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTravelTime;
- (unsigned int)hash;
- (id)initWithTravelTime:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTravelTime:(BOOL)arg1;
- (void)setTravelTime:(int)arg1;
- (int)travelTime;
- (void)writeTo:(id)arg1;

@end
