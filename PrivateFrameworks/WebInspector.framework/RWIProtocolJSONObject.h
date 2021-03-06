/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolJSONObject : NSObject {
    struct RefPtr<Inspector::InspectorObject> { 
        struct InspectorObject {} *m_ptr; 
    }  _inspectorObject;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (id)init;
- (id)initWithInspectorObject:(const struct InspectorObject { int (**x1)(); unsigned int x2; int x3; struct HashMap<WTF::String, WTF::RefPtr<Inspector::InspectorValue>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<Inspector::InspectorValue> > > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RefPtr<Inspector::InspectorValue> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RefPtr<Inspector::InspectorValue> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RefPtr<Inspector::InspectorValue>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<Inspector::InspectorValue> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::RefPtr<Inspector::InspectorValue> > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_4_1_1; } x4; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> { struct String {} *x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; } x5; }*)arg1;
- (struct RefPtr<Inspector::InspectorArray> { struct InspectorArray {} *x1; })inspectorArrayForKey:(id)arg1;
- (int)integerForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInspectorArray:(struct RefPtr<Inspector::InspectorArray> { struct InspectorArray {} *x1; }*)arg1 forKey:(id)arg2;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (struct RefPtr<Inspector::InspectorObject> { struct InspectorObject {} *x1; })toInspectorObject;

@end
