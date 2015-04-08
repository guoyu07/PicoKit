// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Finding_Condition;
@class Finding_SellerInfo;
@class Finding_UnitPriceInfo;
@class Finding_Storefront;
@class Finding_SellingStatus;
@class Finding_DiscountPriceInfo;
@class Finding_ListingInfo;
@class Finding_Distance;
@class Finding_GalleryInfoContainer;
@class Finding_Category;
@class Finding_ShippingInfo;
@class Finding_ItemAttribute;
@class Finding_ProductId;

/**
 
 Container for the data of a single item that matches the search criteria. Finding API calls return an object of this type, filled with the item's data.
 
 
 @ingroup FindingServicePortType
*/
@interface Finding_SearchItem : NSObject <PicoBindable> {

@private
    NSString *_itemId;
    NSString *_title;
    NSString *_globalId;
    NSString *_subtitle;
    Finding_Category *_primaryCategory;
    Finding_Category *_secondaryCategory;
    NSString *_galleryURL;
    Finding_GalleryInfoContainer *_galleryInfoContainer;
    NSString *_viewItemURL;
    NSString *_charityId;
    Finding_ProductId *_productId;
    NSMutableArray *_paymentMethod;
    NSNumber *_autoPay;
    NSString *_postalCode;
    NSString *_location;
    NSString *_country;
    Finding_Storefront *_storeInfo;
    Finding_SellerInfo *_sellerInfo;
    Finding_ShippingInfo *_shippingInfo;
    Finding_SellingStatus *_sellingStatus;
    Finding_ListingInfo *_listingInfo;
    NSNumber *_returnsAccepted;
    NSMutableArray *_galleryPlusPictureURL;
    NSString *_compatibility;
    Finding_Distance *_distance;
    Finding_Condition *_condition;
    NSNumber *_isMultiVariationListing;
    Finding_DiscountPriceInfo *_discountPriceInfo;
    NSString *_pictureURLSuperSize;
    NSString *_pictureURLLarge;
    Finding_UnitPriceInfo *_unitPrice;
    NSMutableArray *_attribute;
    NSNumber *_topRatedListing;
    NSString *_delimiter;
    NSMutableArray *_any;
    NSMutableArray *_eekStatus;

}


/**
 
 The ID that uniquely identifies the item listing. eBay generates this
 ID when an item is listed. ID values are unique across all eBay sites.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *itemId;

/**
 
 Name of the item as it appears in the listing title, or in search and
 browse results.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *title;

/**
 
 The identifier for the site on which the item is listed. Returns a Global
 ID, which is a unique identifier that specifies the combination of the
 site, language, and territory. In other eBay APIs (such as the Shopping
 API), this value is know as the site ID.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *globalId;

/**
 
 Subtitle of the item. Only returned if the seller included a subtitle for
 the listing.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *subtitle;

/**
 
 Details about the first (or only) category in which the item is listed.
 Note that items can be listed in more than a single category.
 
 
 type : class Finding_Category
*/
@property (nonatomic, strong) Finding_Category *primaryCategory;

/**
 
 Details about the second category in which the item is listed. This
 element is not returned if the seller did not specify a secondary
 category.
 
 
 type : class Finding_Category
*/
@property (nonatomic, strong) Finding_Category *secondaryCategory;

/**
 
 URL for the Gallery thumbnail image. Returned only if the seller
 uploaded images for the item or the item was listed using a product
 identifier.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *galleryURL;

/**
 
 Contains three URLs for item thumbnail images in standard sizes. Not
 returned if the item has no images. That is, if the item was not listed
 using a product identifier and the seller has not uploaded images, the
 container will not be returned, even when the outputSelector is set to
 GalleryInfo.
 
 
 type : class Finding_GalleryInfoContainer
*/
@property (nonatomic, strong) Finding_GalleryInfoContainer *galleryInfoContainer;

/**
 
 The URL to view this specific listing on eBay.
 <br><br>
 The returned URL is optimized to support natural search. That is, the URL
 is designed to make items on eBay easier to find via popular internet
 search engines. The URL includes the item title along with other
 optimizations.
 <br><br>
 If you enabled affiliate tracking in the call, viewItemURL contains a
 string that includes affiliate tracking information.
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 eBay URLs returned in fields, such as <b
 class="con">viewItemURL</b>, are subject to syntax and other
 changes without notice. To avoid problems in your application when eBay
 alters the URL format, we advise you to avoid parsing eBay URLs
 programmatically. We strive to ensure that other fields in the response
 contain all the information that is encoded in the URL, and more.
 </span>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *viewItemURL;

/**
 
 A unique identification number assigned by eBay to a registered
 non-profit charity organization.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *charityId;

/**
 
 Unique identifier for the eBay catalog product with which the item was
 listed. An eBay catalog product consists of pre-filled Item Specifics,
 additional descriptive information, plus a stock photo (if available).
 These product details are used to pre-fill item information, which is
 used to describe the item and can also help surface the item in searches.
 <br><br>
 eBay supports the following types of product ID types: ISBN, UPC, EAN,
 and ReferenceID (ePID, also known as an eBay Product Reference ID).
 ReferenceID values are returned when available. A UPC, ISBN, or EAN
 product identifier will be returned only when a ReferenceID is not
 available.
 <br><br>
 This productId value can be used as input with findItemsByProduct to
 retrieve items that were listed with the specified eBay catalog product.
 <br><br>
 This field is only returned when a product was used to list the item.
 
 
 type : class Finding_ProductId
*/
@property (nonatomic, strong) Finding_ProductId *productId;

/**
 
 Identifies the payment method (or methods) the seller will accept for the
 item (such as PayPal).
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 If the seller accepts only PayPal, the buyer can still pay with a
 credit card. PayPal supports major credit cards.
 </span>
 Payment methods are not applicable to eBay Real Estate advertisement
 listings or other Classified Ad listing formats.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, strong) NSMutableArray *paymentMethod;

/**
 
 If true, the seller requires immediate payment for the item. If false (or
 not specified), immediate payment is not requested. Buyers must have a
 PayPal account to purchase items that require immediate payment.
 <br><br>
 A seller can choose to require immediate payment for Fixed Price and Buy
 It Now listings. If a Buy It
 Now item ends as an auction (that is, if the Buy It Now option is removed
 due to bids being placed on the listing), the immediate payment
 requirement does not apply.
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 The value of the AutoPay flag indicates the seller's stated preference
 only. It does not indicate whether the listing is still a candidate for
 purchase via immediate payment. For example, if a listing receives bids
 and no longer qualifies for immediate payment, the value of the AutoPay
 flag does not change.
 </span>
 <br>
 Only applicable to items listed on PayPal-enabled sites and in categories
 that support immediate payment.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, strong) NSNumber *autoPay;

/**
 
 The postal code where the listed item is located. This field is returned
 only if a postal code has been specified by the seller. eBay proximity
 and local search behavior can use the combination of buyerPostalCode and
 postalCode values.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *postalCode;

/**
 
 Physical location of the item, as specified by the seller. This gives a
 general indication from where the item will be shipped (or delivered).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *location;

/**
 
 Two-letter ISO 3166 country code to indicate the country where the item
 is located (for example, "US" for the United States or "GB" for the United
 Kingdom).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *country;

/**
 
 Information about the eBay store in which the item is listed. Only
 returned if the item is listed in a store and StoreInfo is specified in
 the outputSelector field in the request.
 
 
 type : class Finding_Storefront
*/
@property (nonatomic, strong) Finding_Storefront *storeInfo;

/**
 
 Information about the item's seller. Only returned if SellerInfo is
 specified in the outputSelector field in the request.
 
 
 type : class Finding_SellerInfo
*/
@property (nonatomic, strong) Finding_SellerInfo *sellerInfo;

/**
 
 Container for data about a listing's shipping details.
 
 
 type : class Finding_ShippingInfo
*/
@property (nonatomic, strong) Finding_ShippingInfo *shippingInfo;

/**
 
 Specifies the item's selling status with regards to eBay's processing
 workflow.
 
 
 type : class Finding_SellingStatus
*/
@property (nonatomic, strong) Finding_SellingStatus *sellingStatus;

/**
 
 The format type of the listing, such as online auction, fixed price, or
 advertisement.
 
 
 type : class Finding_ListingInfo
*/
@property (nonatomic, strong) Finding_ListingInfo *listingInfo;

/**
 
 This is set to true if the seller accepts return of the item.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, strong) NSNumber *returnsAccepted;

/**
 
 URL for the Gallery Plus image. The size of Gallery Plus images (up to
 500 pixels on the longest side) is bigger than the size of standard
 gallery images. In site search results, you can view the Gallery Plus
 image by hovering over or clicking the Enlarge link or magnifying glass
 icon. This field is only returned when the seller has opted for
 the Gallery Plus option for the given item.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, strong) NSMutableArray *galleryPlusPictureURL;

/**
 
 This field returns terms from the keywords in the request that match
 values in one of the item's compatible applications (vehicles). If the
 keywords match more than one compatible application for an item, the
 field returns "Two or more of your vehicles" to indicate multiple
 matches.
 <br><br>
 For example, keyword queries that contain vehicle details, such as make
 and model (for example, Honda Accord), in addition to keywords for the part or
 accessory, will search through structured parts compatibility information
 for matching listings. If an item has a 2007 Honda Accord (any trim or
 engine) specified as a compatible application, and the item matches the
 part or accessory terms in the query, this field will return the matching
 terms from the query (i.e., Honda Accord).
 <br><br>
 Parts compatibility is an eBay feature that uses structured data to
 associate compatible assemblies with parts and accessories listed on
 eBay. For example, parts compatibility enables sellers to specify
 accurately and comprehensively the vehicles on which a side mirror or a
 rim fit. Parts compatibility improves search relevancy and frees up item
 titles and descriptions for more useful descriptions of the part.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *compatibility;

/**
 
 The distance that the item is from the buyer, calculated using
 buyerPostalCode. The unit for distance varies by site, and is either
 miles or kilometers. If the country whose site you are searching uses
 kilometers to measure distance (for example, India/EBAY-IN), the unit is
 kilometers. If the site is either the US or UK, the distance unit is
 miles.
 <br><br>
 This value is only returned for distance-based searches. You must specify
 a buyerPostalCode and either sort by Distance, or use a combination of
 the MaxDistance LocalSearch itemFilters.
 
 
 type : class Finding_Distance
*/
@property (nonatomic, strong) Finding_Distance *distance;

/**
 
 Contains information about the item's condition.
 Only returned when the seller listed the item with an
 item condition.<br>
 <br>
 Different categories can support different
 condition choices. If a listing is in two categories,
 the seller uses condition details that are supported in
 the primary category. Thus, even if two nearly identical
 items are found in the same category search, they could support
 different condition details if they have different
 primary categories.
 For example, suppose Seller A lists a concert T-shirt
 in clothing, and also in music accessories as the
 secondary category. Seller B lists an identical shirt in
 music accessories only.
 If you search against the music accessories category,
 you will find both items, but seller A's shirt may have
 condition details that are slightly different from seller B's
 shirt, because the listings have different primary categories.
 
 
 type : class Finding_Condition
*/
@property (nonatomic, strong) Finding_Condition *condition;

/**
 
 Returns true if the item is a multi-variation listing.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, strong) NSNumber *isMultiVariationListing;

/**
 
 Returns information on the item if it is listed as a Strikethrough Price (STP) or
 Minimum Advertised Price (MAP) item by the seller.
 
 
 type : class Finding_DiscountPriceInfo
*/
@property (nonatomic, strong) Finding_DiscountPriceInfo *discountPriceInfo;

/**
 
 URL to a picture of the item that is 800x800 pixels in size.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *pictureURLSuperSize;

/**
 
 URL to a picture of the item that is 400x400 pixels in size.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *pictureURLLarge;

/**
 
 Contains information about the weight, volume or other quantity measurement of a listed
 item. The European Union requires listings for certain types of products to include the
 price per unit so buyers can accurately compare prices. eBay uses the <strong>
 UnitInfo</strong> data and the item's listed price to calculate and display the
 per-unit price on eBay EU sites.
 <br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> This information is currently required only for
 EU business sellers, and only for listings with a Buy It Now option.
 </span>
 
 
 type : class Finding_UnitPriceInfo
*/
@property (nonatomic, strong) Finding_UnitPriceInfo *unitPrice;

/**
 
 Contains a name/value pair defining an item attribute. Multiple
 <strong>attribute</strong> containers can be returned for an item.
 
 
 entry type : class Finding_ItemAttribute
*/

@property (nonatomic, strong) NSMutableArray *attribute;

/**
 
 Indicates whether the item listing is a <b>Top-Rated Plus</b> listing. A
 <b>Top-Rated Plus</b> listing must meet the following requirements:
 <ul>
 <li>14-day (or longer) return policy with Money Back option</li>
 <li>1-day Handling Time or better</li>
 <li>Listed by a <b>Top-Rated Seller</b></li>
 </ul>
 This field is returned only for the US (EBAY-US) site.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, strong) NSNumber *topRatedListing;

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

/**
 
 Indicates the energy efficiency rating of the item. Energy efficiency
 ratings apply to products listed by commercial vendors in electronics
 categories only. Rating values are of the form A+++, A++, A+, A, B, C,  D,
 E, F, or G. This field is only returned if the seller has specified the
 energy efficiency rating in the item specifics.
 <br><br>
 Applicable to the eBay Germany site (EBAY-DE) only.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, strong) NSMutableArray *eekStatus;


@end