// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "CartCreateRequest.h"
#import "CartCreateItems.h"

@implementation CartCreateRequest

@synthesize mergeCart = _mergeCart;
@synthesize items = _items;
@synthesize responseGroup = _responseGroup;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    return nil;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [OrderedDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MergeCart" propertyName:@"mergeCart" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"mergeCart"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Items" propertyName:@"items" type:PICO_TYPE_OBJECT clazz:[CartCreateItems class]];
    [map setObject:ps forKey:@"items"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"ResponseGroup" propertyName:@"responseGroup" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"responseGroup"];
    
    return map;
}




@end
