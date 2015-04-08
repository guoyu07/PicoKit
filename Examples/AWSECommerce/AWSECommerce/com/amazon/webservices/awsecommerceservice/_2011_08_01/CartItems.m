// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "CartItems.h"
#import "Price.h"
#import "CartItem.h"

@implementation CartItems

@synthesize subTotal = _subTotal;
@synthesize cartItem = _cartItem;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"CartItems" nsUri:@"http://webservices.amazon.com/AWSECommerceService/2011-08-01"];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [OrderedDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SubTotal" propertyName:@"subTotal" type:PICO_TYPE_OBJECT clazz:[Price class]];
    [map setObject:ps forKey:@"subTotal"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"CartItem" propertyName:@"cartItem" type:PICO_TYPE_OBJECT clazz:[CartItem class]];
    [map setObject:ps forKey:@"cartItem"];
    
    return map;
}




@end