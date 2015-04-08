// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "Shopping_SellingStatusType.h"
#import "Shopping_AmountType.h"

@implementation Shopping_SellingStatusType

@synthesize convertedCurrentPrice = _convertedCurrentPrice;
@synthesize currentPrice = _currentPrice;
@synthesize quantitySold = _quantitySold;
@synthesize quantitySoldByPickupInStore = _quantitySoldByPickupInStore;
@synthesize any = _any;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ConvertedCurrentPrice" propertyName:@"convertedCurrentPrice" type:PICO_TYPE_OBJECT clazz:[Shopping_AmountType class]];
    [map setObject:ps forKey:@"convertedCurrentPrice"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CurrentPrice" propertyName:@"currentPrice" type:PICO_TYPE_OBJECT clazz:[Shopping_AmountType class]];
    [map setObject:ps forKey:@"currentPrice"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"QuantitySold" propertyName:@"quantitySold" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"quantitySold"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"QuantitySoldByPickupInStore" propertyName:@"quantitySoldByPickupInStore" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"quantitySoldByPickupInStore"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    
    return map;
}



-(void)dealloc {
    self.convertedCurrentPrice = nil;
    self.currentPrice = nil;
    self.quantitySold = nil;
    self.quantitySoldByPickupInStore = nil;
    self.any = nil;
}

@end