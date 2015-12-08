//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  8 2015 15:34:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface XCSourceCodeRecording : NSObject
{
    unsigned long long _language;
    NSMutableArray *_treeNodes;
    NSMutableSet *_variableTreeNodes;
    NSArray *_reservedNames;
    NSMutableDictionary *_variableNameToContentNodeDictionary;
    long long _nextVariableCount;
}

@property(retain) NSMutableDictionary *variableNameToContentNodeDictionary; // @synthesize variableNameToContentNodeDictionary=_variableNameToContentNodeDictionary;
@property(retain, setter=_setTreeNodes:) NSArray *_treeNodes; // @synthesize _treeNodes;
@property(readonly) unsigned long long language; // @synthesize language=_language;
- (_Bool)_shareLongestCommonSection_StartAtIndex:(long long)arg1 nextCandidateIndex:(long long *)arg2;
- (_Bool)_createAndShareLocalVariableUsingSourceNode:(id)arg1 atIndex:(long long)arg2;
- (id)_variableNameForVariableContentNode:(id)arg1;
- (unsigned long long)_variableClassTypeForVariableContentNode:(id)arg1;
- (id)_variableNameForElementType:(unsigned long long)arg1 label:(id)arg2 classType:(unsigned long long)arg3;
- (id)_uniqueVariableNameWithName:(id)arg1;
- (id)_nodes:(id)arg1 matchingDistanceFromRoot:(_Bool)arg2 variableContentNode:(id)arg3 withVariableName:(id)arg4 startingIndex:(long long)arg5 replacedNodes:(long long *)arg6 indexOfFirstReplacedNode:(long long *)arg7;
- (_Bool)_shareCommonSectionsUsingExistingLocalVariables;
- (void)_shareCommonSectionsInLocalVariables;
- (id)variableNodeForNode:(id)arg1 withName:(id)arg2 variableType:(unsigned long long)arg3;
- (id)_sourceCodePrefixForVariableName:(id)arg1 variableType:(unsigned long long)arg2;
- (id)_stringRepresentationWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)stringRepresentationWithError:(id *)arg1;
- (void)appendNode:(id)arg1 replaceLastNode:(_Bool)arg2;
- (id)copy;
- (id)initWithLanguage:(unsigned long long)arg1 reservedNames:(id)arg2;
- (id)init;

@end

