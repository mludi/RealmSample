//
//  Person.h
//  RealmSample
//
//  Created by Matthias Ludwig on 01.11.16.
//  Copyright © 2016 Matthias Ludwig. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Realm/Realm.h>

@class Dog;

// Person model
@interface Person : RLMObject
@property NSString             *name;
@property NSDate               *birthdate;
@property RLMArray<Dog *><Dog> *dogs;
@end
RLM_ARRAY_TYPE(Person) // define RLMArray<Person>
