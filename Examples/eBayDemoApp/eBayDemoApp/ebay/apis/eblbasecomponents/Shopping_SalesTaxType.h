// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Shopping_AmountType;

/**
 
 Type for expressing sales tax data.
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_SalesTaxType : NSObject <PicoBindable> {

@private
    NSNumber *_salesTaxPercent;
    NSString *_salesTaxState;
    NSNumber *_shippingIncludedInTax;
    Shopping_AmountType *_salesTaxAmount;
    NSMutableArray *_any;

}


/**
 
 Percent of an item's price to be charged as the sales
 tax for the transaction. The value passed in is stored with a
 precision of 3 digits after the decimal point (##.###).
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, strong) NSNumber *salesTaxPercent;

/**
 
 State or jurisdiction for which the sales tax is being collected.
 Only returned if the seller specified a value.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *salesTaxState;

/**
 
 (US only) Whether shipping costs were part of the base amount
 that was taxed. Flat or calculated shipping.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, strong) NSNumber *shippingIncludedInTax;

/**
 
 (US only) The amount of sales tax, calculated for a
 transaction based on the SalesTaxPercent and pricing information.
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, strong) Shopping_AmountType *salesTaxAmount;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, strong) NSMutableArray *any;


@end