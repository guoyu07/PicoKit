// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "Shopping_FindPopularItemsResponseType.h"
#import "Shopping_SimpleItemArrayType.h"

@implementation Shopping_FindPopularItemsResponseType

@synthesize itemArray = _itemArray;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"FindPopularItemsResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [OrderedDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemArray" propertyName:@"itemArray" type:PICO_TYPE_OBJECT clazz:[Shopping_SimpleItemArrayType class]];
    [map setObject:ps forKey:@"itemArray"];
    
    return map;
}




@end