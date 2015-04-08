// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "RelatedItems.h"
#import "RelatedItem.h"

@implementation RelatedItems

@synthesize relationship = _relationship;
@synthesize relationshipType = _relationshipType;
@synthesize relatedItemCount = _relatedItemCount;
@synthesize relatedItemPageCount = _relatedItemPageCount;
@synthesize relatedItemPage = _relatedItemPage;
@synthesize relatedItem = _relatedItem;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"RelatedItems" nsUri:@"http://webservices.amazon.com/AWSECommerceService/2011-08-01"];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [OrderedDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Relationship" propertyName:@"relationship" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"relationship"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RelationshipType" propertyName:@"relationshipType" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"relationshipType"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RelatedItemCount" propertyName:@"relatedItemCount" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"relatedItemCount"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RelatedItemPageCount" propertyName:@"relatedItemPageCount" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"relatedItemPageCount"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RelatedItemPage" propertyName:@"relatedItemPage" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"relatedItemPage"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"RelatedItem" propertyName:@"relatedItem" type:PICO_TYPE_OBJECT clazz:[RelatedItem class]];
    [map setObject:ps forKey:@"relatedItem"];
    
    return map;
}




@end