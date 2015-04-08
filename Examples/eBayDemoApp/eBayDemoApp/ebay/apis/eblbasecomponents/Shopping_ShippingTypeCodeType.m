// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Shopping_ShippingTypeCodeType.h"

/**
 @file
 
 The shipping cost model offered by the seller.
 
*/

/**
 
 The flat rate shipping model: the seller establishes the cost of shipping and cost of
 shipping insurance, regardless of what any buyer-selected shipping service
 might charge the seller.
 
*/
NSString *const Shopping_ShippingTypeCodeType_FLAT = @"Flat";

/**
 
 The calculated shipping model: the posted cost of shipping is based on the
 seller-offered and buyer-selected shipping service, where the shipping costs
 are calculated by eBay and the shipping carrier based on the buyer's address,
 and any packaging/handling costs established by the seller are automatically
 rolled into the total.
 
*/
NSString *const Shopping_ShippingTypeCodeType_CALCULATED = @"Calculated";

/**
 
 The freight shipping model: the cost of shipping is determined by a third
 party, FreightQuote.com, based on the item location (zip code). Currently,
 Freight can only be specified on input via eBay Web site, not via API.
 
*/
NSString *const Shopping_ShippingTypeCodeType_FREIGHT = @"Freight";

/**
 
 Free is used when the seller is declaring that shipping is free for the buyer.
 Since Free cannot be selected via API, the seller has two options for
 signifying that shipping is free when listing an item:
 <br>
 - omit shipping details, mention in the item description that shipping is
 free, and set ShippingTermsInDescription to true
 <br>
 - select an arbitrary shipping service and set its shipping cost to 0, mention
 in the item description that shipping is free, and set
 ShippingTermsInDescription to true
 <br>
 The latter is a better way to communicate "free shipping" because eBay picks
 up the "0" cost and can more accurately identify shipping costs in search
 results.
 
*/
NSString *const Shopping_ShippingTypeCodeType_FREE = @"Free";

/**
 
 The seller did not specify the shipping type.
 
*/
NSString *const Shopping_ShippingTypeCodeType_NOT_SPECIFIED = @"NotSpecified";

/**
 
 The seller specified one or more flat domestic shipping services
 and one or more calculated international shipping services.
 
*/
NSString *const Shopping_ShippingTypeCodeType_FLAT_DOMESTIC_CALCULATED_INTERNATIONAL = @"FlatDomesticCalculatedInternational";

/**
 
 The seller specified one or more calculated domestic shipping services
 and one or more flat international shipping services.
 
*/
NSString *const Shopping_ShippingTypeCodeType_CALCULATED_DOMESTIC_FLAT_INTERNATIONAL = @"CalculatedDomesticFlatInternational";

/**
 
 Placeholder value. See
 <a href="http://developer.ebay.com/DevZone/shopping/docs/CallRef/types/simpleTypes.html#token">token</a>.
 
*/
NSString *const Shopping_ShippingTypeCodeType_CUSTOM_CODE = @"CustomCode";