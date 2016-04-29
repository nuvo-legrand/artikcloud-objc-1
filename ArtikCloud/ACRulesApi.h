#import <Foundation/Foundation.h>
#import "ACRuleEnvelope.h"
#import "ACRuleCreationInfo.h"
#import "ACRuleUpdateInfo.h"
#import "ACObject.h"
#import "ACApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface ACRulesApi: NSObject

@property(nonatomic, assign)ACApiClient *apiClient;

-(instancetype) initWithApiClient:(ACApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(ACRulesApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(ACRulesApi*) sharedAPI;
///
///
/// Create Rule
/// Create a new Rule
///
/// @param ruleInfo Rule object that needs to be added
/// @param userId User ID
/// 
///
/// @return ACRuleEnvelope*
-(NSNumber*) createRuleWithRuleInfo: (ACRuleCreationInfo*) ruleInfo
    userId: (NSString*) userId
    completionHandler: (void (^)(ACRuleEnvelope* output, NSError* error)) handler;


///
///
/// Delete Rule
/// Delete a Rule
///
/// @param ruleId Rule ID.
/// 
///
/// @return ACRuleEnvelope*
-(NSNumber*) deleteRuleWithRuleId: (NSString*) ruleId
    completionHandler: (void (^)(ACRuleEnvelope* output, NSError* error)) handler;


///
///
/// Get Rule
/// Get a rule using the Rule ID
///
/// @param ruleId Rule ID.
/// 
///
/// @return ACRuleEnvelope*
-(NSNumber*) getRuleWithRuleId: (NSString*) ruleId
    completionHandler: (void (^)(ACRuleEnvelope* output, NSError* error)) handler;


///
///
/// Update Rule
/// Update an existing Rule
///
/// @param ruleId Rule ID.
/// @param ruleInfo Rule object that needs to be updated
/// 
///
/// @return ACRuleEnvelope*
-(NSNumber*) updateRuleWithRuleId: (NSString*) ruleId
    ruleInfo: (ACRuleUpdateInfo*) ruleInfo
    completionHandler: (void (^)(ACRuleEnvelope* output, NSError* error)) handler;



@end
