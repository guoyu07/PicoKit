// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Finding_Condition;

/**
 
 Container for histogram fields.
 
 
 @ingroup FindingServicePortType
*/
@interface Finding_ConditionHistogram : NSObject <PicoBindable> {

@private
    Finding_Condition *_condition;
    NSNumber *_count;
    NSString *_delimiter;
    NSMutableArray *_any;

}


/**
 
 The ID and name of a condition that was found in the item results.
 
 
 type : class Finding_Condition
*/
@property (nonatomic, strong) Finding_Condition *condition;

/**
 
 The number of items found that match the condition.
 Only counts items where the seller specified the
 condition by using item.conditionId.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, strong) NSNumber *count;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *delimiter;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, strong) NSMutableArray *any;


@end