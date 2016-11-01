//
//  Dog.h
//  RealmSample
//
//  Created by Matthias Ludwig on 01.11.16.
//  Copyright © 2016 Matthias Ludwig. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Realm/Realm.h>

@class Person;

// Dog model
@interface Dog : RLMObject
@property NSString *name;
@property Person   *owner;
@end
RLM_ARRAY_TYPE(Dog) // define RLMArray<Dog>
