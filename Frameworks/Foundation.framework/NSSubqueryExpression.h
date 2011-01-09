/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSPredicate, NSExpression;



@interface NSSubqueryExpression : NSExpression 
{
    NSExpression *_collection;
    NSExpression *_variableExpression;
    NSPredicate *_subpredicate;
}


- (id)predicate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)collection;
- (id)initWithExpression:(id)arg1 usingIteratorExpression:(id)arg2 predicate:(id)arg3;
- (id)variableExpression;
- (id)variable;
- (id)initWithExpression:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3;
- (BOOL)_shouldUseParensWithDescription;
- (id)predicateFormat;
- (void)acceptVisitor:(id)arg1 flags:(NSUInteger)arg2;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)minimalFormInContext:(id)arg1;

@end