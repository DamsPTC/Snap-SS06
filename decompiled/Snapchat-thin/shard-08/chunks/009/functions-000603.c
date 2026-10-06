/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10676b28c; end: 10676b373;  */

void FUN_10676b28c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000100c6f294();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e02538);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10676b374; end: 10676b4bb; +[SCMapDeepLinkHelpers mapURLWithUserId:openSource:] */

void FUN_10676b374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_retain(param_3);
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  FUN_10676b28c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e5c118);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10676b4bc; end: 10676b6d3; +[SCMapDeepLinkHelpers mapURLWithPoiId:lat:lng:zoom:displayText:openSource:sourcePageContext:] */

void FUN_10676b4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_6;
  func_0x00010c25cda0(param_6,param_5,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010be85580(param_1,param_2,param_3,param_4,param_5,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  FUN_10676b28c();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_9;
  func_0x00010676b2f8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  func_0x00010c14de00(puVar1,param_5,&PTR____CFConstantStringClassReference_110e5c138);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(param_8);
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10676b6d4; end: 10676bb07; +[SCMapDeepLinkHelpers mapURLWithPlaceDiscoveryPivotName:placePivotType:attributeId:pivotEmojiUnicode:localizedResultsHeader:placeId:userId:source:openSource:sourcePageContext:sourceSessionId:lat:lng:] */

void FUN_10676b6d4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuStack_f8;
  undefined **ppuStack_e8;
  long lStack_88;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_5);
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bdc3100();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c08fa60();
  lStack_88 = param_3;
  if (lVar4 == 0) {
    _objc_retain(param_3);
  }
  else {
    func_0x00010c25cda0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = param_6;
  func_0x00010c08fa60();
  lVar5 = param_6;
  if (lVar4 == 0) {
    _objc_retain(param_6);
  }
  else {
    func_0x00010c25cda0(param_6,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = param_7;
  func_0x00010c08fa60();
  lVar6 = param_7;
  if (lVar4 == 0) {
    _objc_retain(param_7);
  }
  else {
    func_0x00010c25cda0(param_7,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_4 == 0) {
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuStack_e8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e5c158);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = param_9;
  func_0x00010c08fa60();
  ppuStack_f8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar4 == 0) {
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lVar4 = param_9;
    func_0x00010c25cda0(param_9,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuStack_f8,param_2,&PTR____CFConstantStringClassReference_110dcaff8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  FUN_10676b28c();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_12;
  func_0x00010676b2f8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_12);
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e5c178);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(uVar7);
  _objc_release(param_11);
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuStack_f8);
  _objc_release(ppuStack_e8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lStack_88);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10676bb08; end: 10676bbf3; +[SCMapDeepLinkHelpers mapUrlWithPlaceId:boundingNELat:boundingNELng:boundingSWLat:boundingSWLng:placeType:openSource:] */

void FUN_10676bb08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_10676b28c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e5c198);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10676bbf4; end: 10676bda7; +[SCMapDeepLinkHelpers mapWebUrlWithPlaceId:placeName:] */

void FUN_10676bbf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lVar1 = param_4;
    func_0x00010c0b5ac0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c11bb40(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf44700(lVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    lVar4 = lVar3;
    func_0x00010bf446e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    uStack_58 = 0;
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                        &PTR____CFConstantStringClassReference_110de8078,0,&uStack_58);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c08fa60(lVar4);
    ppuVar7 = ppuVar5;
    func_0x00010c25cfa0(ppuVar5,param_2,lVar4,0,0,lVar6,
                        &PTR____CFConstantStringClassReference_110db3638);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e5c1b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10676bda8; end: 10676beab; +[SCMapDeepLinkHelpers _queryStringWithLat:lng:zoom:displayText:] */

void FUN_10676bda8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e5c1d8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c08fa60();
  puVar4 = puVar2;
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010c25cda0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25cde0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e5c1f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10676beac; end: 10676bfeb; +[SCMapDeepLinkHelpers mapURLWithoutStateChangeWithOpenSource:sourcePageContext:] */

void FUN_10676beac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_retain(param_4);
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  FUN_10676b28c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010676b2f8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e5c218);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10676bfec; end: 10676c067; +[VRZPlaceListItem descriptor] */

undefined * FUN_10676bfec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3e28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6580,
                        &PTR____CFConstantStringClassReference_110e5c238,&PTR_DAT_11315ceb0,
                        &PTR_s_placeId_11315d188,10,0x58,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c3e28 = puVar1;
  }
  return puRam00000001136c3e28;
}



/* Entry: 10676c068; end: 10676c0cf; +[VRZPlaceListMetadata descriptor] */

void FUN_10676c068(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3e30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af65d0,
                        &PTR____CFConstantStringClassReference_110e5c258,&PTR_DAT_11315ceb0,
                        &PTR_s_id_p_11315d128,3,0x20,0x1c);
    puRam00000001136c3e30 = puVar1;
  }
  return;
}



/* Entry: 10676c0d0; end: 10676c137; +[VRZPlaceList descriptor] */

void FUN_10676c0d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3e38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6620,
                        &PTR____CFConstantStringClassReference_110e5c278,&PTR_DAT_11315ceb0,
                        &PTR_s_metadata_11315d028,2,0x18,0x1c);
    puRam00000001136c3e38 = puVar1;
  }
  return;
}



/* Entry: 10676c138; end: 10676c19f; +[VRZGetFavoritesListRequest descriptor] */

void FUN_10676c138(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3e40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6670,
                        &PTR____CFConstantStringClassReference_110e5c298,&PTR_DAT_11315ceb0,0,0,4,
                        0x1c);
    puRam00000001136c3e40 = puVar1;
  }
  return;
}



/* Entry: 10676c1a0; end: 10676c207; +[VRZGetFavoritesListResponse descriptor] */

void FUN_10676c1a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3e48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af66c0,
                        &PTR____CFConstantStringClassReference_110e5c2b8,&PTR_DAT_11315ceb0,
                        &PTR_DAT_11315cec8,1,0x10,0x1c);
    puRam00000001136c3e48 = puVar1;
  }
  return;
}



/* Entry: 10676c208; end: 10676c26f; +[VRZAddPlaceToFavoritesRequest descriptor] */

void FUN_10676c208(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3e50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6710,
                        &PTR____CFConstantStringClassReference_110e5c2d8,&PTR_DAT_11315ceb0,
                        &PTR_s_placeId_11315cee8,1,0x10,0x1c);
    puRam00000001136c3e50 = puVar1;
  }
  return;
}



/* Entry: 10676c270; end: 10676c2d7; +[VRZAddPlaceToFavoritesResponse descriptor] */

void FUN_10676c270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3e58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6760,
                        &PTR____CFConstantStringClassReference_110e5c2f8,&PTR_DAT_11315ceb0,0,0,4,
                        0x1c);
    puRam00000001136c3e58 = puVar1;
  }
  return;
}



/* Entry: 10676c2d8; end: 10676c33f; +[VRZRemovePlaceFromFavoritesRequest descriptor] */

void FUN_10676c2d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3e60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af67b0,
                        &PTR____CFConstantStringClassReference_110e5c318,&PTR_DAT_11315ceb0,
                        &PTR_s_placeId_11315cf08,1,0x10,0x1c);
    puRam00000001136c3e60 = puVar1;
  }
  return;
}



/* Entry: 10676c340; end: 10676c3a7; +[VRZRemovePlaceFromFavoritesResponse descriptor] */

void FUN_10676c340(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3e68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6800,
                        &PTR____CFConstantStringClassReference_110e5c338,&PTR_DAT_11315ceb0,0,0,4,
                        0x1c);
    puRam00000001136c3e68 = puVar1;
  }
  return;
}



/* Entry: 10676c3a8; end: 10676c40f; +[VRZArePlacesFavoritedRequest descriptor] */

void FUN_10676c3a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3e70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6850,
                        &PTR____CFConstantStringClassReference_110e5c358,&PTR_DAT_11315ceb0,
                        &PTR_DAT_11315cf28,1,0x10,0x1c);
    puRam00000001136c3e70 = puVar1;
  }
  return;
}



/* Entry: 10676c410; end: 10676c477; +[VRZArePlacesFavoritedResponse descriptor] */

void FUN_10676c410(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3e78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6b48,
                        &PTR____CFConstantStringClassReference_110e5c378,&PTR_DAT_11315ceb0,
                        &PTR_DAT_11315cf48,1,0x10,0x1c);
    puRam00000001136c3e78 = puVar1;
  }
  return;
}



/* Entry: 10676c478; end: 10676c4fb; +[VRZArePlacesFavoritedResponse_PlaceExists descriptor] */

undefined * FUN_10676c478(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3e80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6b70,
                        &PTR____CFConstantStringClassReference_110e5c398,&PTR_DAT_11315ceb0,
                        &PTR_s_placeId_11315d068,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c3e80 = puVar1;
  }
  return puRam00000001136c3e80;
}



/* Entry: 10676c4fc; end: 10676c563; +[VRZGetPlaceFriendFavoritesRequest descriptor] */

void FUN_10676c4fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3e88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af68f0,
                        &PTR____CFConstantStringClassReference_110e5c3b8,&PTR_DAT_11315ceb0,
                        &PTR_DAT_11315cf68,1,0x10,0x1c);
    puRam00000001136c3e88 = puVar1;
  }
  return;
}



/* Entry: 10676c564; end: 10676c5cb; +[VRZFavoritingUser descriptor] */

void FUN_10676c564(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3e90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6940,
                        &PTR____CFConstantStringClassReference_110e5c3d8,&PTR_DAT_11315ceb0,
                        &PTR_s_userId_11315d0a8,2,0x18,0x1c);
    puRam00000001136c3e90 = puVar1;
  }
  return;
}



/* Entry: 10676c5cc; end: 10676c633; +[VRZGetPlaceFriendFavoritesResponse descriptor] */

void FUN_10676c5cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3e98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6b98,
                        &PTR____CFConstantStringClassReference_110e5c3f8,&PTR_DAT_11315ceb0,
                        &PTR_DAT_11315cf88,1,0x10,0x1c);
    puRam00000001136c3e98 = puVar1;
  }
  return;
}



/* Entry: 10676c634; end: 10676c6b7; +[VRZGetPlaceFriendFavoritesResponse_PlaceToFavoritingUsers descriptor] */

undefined * FUN_10676c634(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3ea0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6bc0,
                        &PTR____CFConstantStringClassReference_110e5c418,&PTR_DAT_11315ceb0,
                        &PTR_s_placeId_11315d0e8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c3ea0 = puVar1;
  }
  return puRam00000001136c3ea0;
}



/* Entry: 10676c6b8; end: 10676c71f; +[VRZGetUserFavoritesListRequest descriptor] */

void FUN_10676c6b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3ea8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af69e0,
                        &PTR____CFConstantStringClassReference_110e5c438,&PTR_DAT_11315ceb0,
                        &PTR_s_userId_11315cfa8,1,0x10,0x1c);
    puRam00000001136c3ea8 = puVar1;
  }
  return;
}



/* Entry: 10676c720; end: 10676c787; +[VRZGetUserFavoritesListResponse descriptor] */

void FUN_10676c720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3eb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6a30,
                        &PTR____CFConstantStringClassReference_110e5c458,&PTR_DAT_11315ceb0,
                        &PTR_DAT_11315cfc8,1,0x10,0x1c);
    puRam00000001136c3eb0 = puVar1;
  }
  return;
}



/* Entry: 10676c788; end: 10676c7ef; +[VRZGetFriendsWithFavoritesRequest descriptor] */

void FUN_10676c788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3eb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6a80,
                        &PTR____CFConstantStringClassReference_110e5c478,&PTR_DAT_11315ceb0,0,0,4,
                        0x1c);
    puRam00000001136c3eb8 = puVar1;
  }
  return;
}



/* Entry: 10676c7f0; end: 10676c857; +[VRZGetFriendsWithFavoritesResponse descriptor] */

void FUN_10676c7f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3ec0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6ad0,
                        &PTR____CFConstantStringClassReference_110e5c498,&PTR_DAT_11315ceb0,
                        &PTR_DAT_11315cfe8,1,0x10,0x1c);
    puRam00000001136c3ec0 = puVar1;
  }
  return;
}



/* Entry: 10676c858; end: 10676c93b; +[VRZFriendListItem descriptor] */

void FUN_10676c858(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3ec8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6b20,
                        &PTR____CFConstantStringClassReference_110e5c4b8,&PTR_DAT_11315ceb0,
                        &PTR_s_userId_11315d008,1,0x10,0x1c);
    puRam00000001136c3ec8 = puVar1;
  }
  return;
}



/* Entry: 10676c93c; end: 10676c947;  */

bool FUN_10676c93c(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10676c948; end: 10676c9af; +[VRZGetPlacesAnnotationsRequest descriptor] */

void FUN_10676c948(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3ed8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6c60,
                        &PTR____CFConstantStringClassReference_110e5c4f8,&PTR_DAT_11315d2d0,
                        &PTR_DAT_11315d328,2,0x18,0x1c);
    puRam00000001136c3ed8 = puVar1;
  }
  return;
}



/* Entry: 10676c9b0; end: 10676ca17; +[VRZGetPlacesAnnotationsResponse descriptor] */

void FUN_10676c9b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3ee0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6cb0,
                        &PTR____CFConstantStringClassReference_110e5c518,&PTR_DAT_11315d2d0,
                        &PTR_DAT_11315d2e8,1,0x10,0x1c);
    puRam00000001136c3ee0 = puVar1;
  }
  return;
}



/* Entry: 10676ca18; end: 10676ca7f; +[VRZPlaceAnnotations descriptor] */

void FUN_10676ca18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3ee8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6d00,
                        &PTR____CFConstantStringClassReference_110e5c538,&PTR_DAT_11315d2d0,
                        &PTR_s_placeId_11315d368,2,0x18,0x1c);
    puRam00000001136c3ee8 = puVar1;
  }
  return;
}



/* Entry: 10676ca80; end: 10676cb1b; +[VRZPlaceAnnotation descriptor] */

undefined * FUN_10676ca80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3ef0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6d50,
                        &PTR____CFConstantStringClassReference_110e5c558,&PTR_DAT_11315d2d0,
                        &PTR_DAT_11315d428,7,0x40,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dddebc8);
    puRam00000001136c3ef0 = puVar1;
  }
  return puRam00000001136c3ef0;
}



/* Entry: 10676cb1c; end: 10676cb83; +[VRZPopularWithFriendsAnnotation descriptor] */

void FUN_10676cb1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3ef8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6da0,
                        &PTR____CFConstantStringClassReference_110e5c578,&PTR_DAT_11315d2d0,
                        &PTR_s_score_11315d308,1,8,0x1c);
    puRam00000001136c3ef8 = puVar1;
  }
  return;
}



/* Entry: 10676cb84; end: 10676cbeb; +[VRZVisitedByCreatorAnnotation descriptor] */

void FUN_10676cb84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6df0,
                        &PTR____CFConstantStringClassReference_110e5c598,&PTR_DAT_11315d2d0,
                        &PTR_DAT_11315d3a8,2,0x18,0x1c);
    puRam00000001136c3f00 = puVar1;
  }
  return;
}



/* Entry: 10676cbec; end: 10676cc53; +[VRZVisitedBySnapStarAnnotation descriptor] */

void FUN_10676cbec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6e40,
                        &PTR____CFConstantStringClassReference_110e5c5b8,&PTR_DAT_11315d2d0,
                        &PTR_DAT_11315d3e8,2,0x18,0x1c);
    puRam00000001136c3f08 = puVar1;
  }
  return;
}



/* Entry: 10676cc54; end: 10676cccf; +[SCMBasemapPersonalizationConfig descriptor] */

undefined * FUN_10676cc54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6ee0,
                        &PTR____CFConstantStringClassReference_110e5c5d8,&PTR_DAT_11315d508,
                        &PTR_DAT_11315d520,0x28,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c3f10 = puVar1;
  }
  return puRam00000001136c3f10;
}



/* Entry: 10676ccd0; end: 10676cd43; -[UNISMEGLEagleBackend initWithUnifiedGrpcService:] */

undefined1 * FUN_10676ccd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2f28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10676cd44; end: 10676ce27; -[UNISMEGLEagleBackend computeInferredVisitWithRequest:callOptionsBuilder:handler:] */

void FUN_10676cd44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cda48;
  _objc_opt_class(PTR_PTR_1126cda48);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5c5f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10676ce28; end: 10676cf0b; -[UNISMEGLEagleBackend removePlaceVisitWithRequest:callOptionsBuilder:handler:] */

void FUN_10676ce28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cda50;
  _objc_opt_class(PTR_PTR_1126cda50);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5c618,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10676cf0c; end: 10676cfef; -[UNISMEGLEagleBackend removeAllPlacesVisitsWithRequest:callOptionsBuilder:handler:] */

void FUN_10676cf0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cda58;
  _objc_opt_class(PTR_PTR_1126cda58);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5c638,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10676cff0; end: 10676d0d3; -[UNISMEGLEagleBackend getUserVisitsWithRequest:callOptionsBuilder:handler:] */

void FUN_10676cff0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cda60;
  _objc_opt_class(PTR_PTR_1126cda60);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5c658,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10676d0d4; end: 10676d1b7; -[UNISMEGLEagleBackend clearCurrentInferredVisitWithRequest:callOptionsBuilder:handler:] */

void FUN_10676d0d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cda68;
  _objc_opt_class(PTR_PTR_1126cda68);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5c678,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10676d1b8; end: 10676d29b; -[UNISMEGLEagleBackend inferCurrentLocationWithRequest:callOptionsBuilder:handler:] */

void FUN_10676d1b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cda70;
  _objc_opt_class(PTR_PTR_1126cda70);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5c698,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10676d29c; end: 10676d2a7; -[UNISMEGLEagleBackend .cxx_destruct] */

void FUN_10676d29c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10676d2a8; end: 10676d30f; +[SMEGLVisitationSignals descriptor] */

void FUN_10676d2a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af6fd0,
                        &PTR____CFConstantStringClassReference_110e5c6b8,&PTR_DAT_11315da20,
                        &PTR_DAT_11315df78,8,0x30,0x1c);
    puRam00000001136c3f18 = puVar1;
  }
  return;
}



/* Entry: 10676d310; end: 10676d377; +[SMEGLUserData descriptor] */

void FUN_10676d310(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7020,
                        &PTR____CFConstantStringClassReference_110e332f8,&PTR_DAT_11315da20,
                        &PTR_DAT_11315da38,1,4,0x1c);
    puRam00000001136c3f20 = puVar1;
  }
  return;
}



/* Entry: 10676d378; end: 10676d3df; +[SMEGLComputeInferredVisitRequest descriptor] */

void FUN_10676d378(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7070,
                        &PTR____CFConstantStringClassReference_110e5c6d8,&PTR_DAT_11315da20,
                        &PTR_s_userId_11315dbf8,3,0x20,0x1c);
    puRam00000001136c3f28 = puVar1;
  }
  return;
}



/* Entry: 10676d3e0; end: 10676d447; +[SMEGLVisitationInfo descriptor] */

void FUN_10676d3e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af70c0,
                        &PTR____CFConstantStringClassReference_110e5c6f8,&PTR_DAT_11315da20,
                        &PTR_s_placeId_11315dcb8,4,0x28,0x1c);
    puRam00000001136c3f30 = puVar1;
  }
  return;
}



/* Entry: 10676d448; end: 10676d4af; +[SMEGLPlaceMetadata descriptor] */

void FUN_10676d448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7110,
                        &PTR____CFConstantStringClassReference_110e5c718,&PTR_DAT_11315da20,
                        &PTR_s_categoryId_11315da58,1,0x10,0x1c);
    puRam00000001136c3f38 = puVar1;
  }
  return;
}



/* Entry: 10676d4b0; end: 10676d517; +[SMEGLPointOfInterestMetadata descriptor] */

void FUN_10676d4b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7160,
                        &PTR____CFConstantStringClassReference_110e5c738,&PTR_DAT_11315da20,
                        &PTR_s_eventType_11315da78,1,8,0x1c);
    puRam00000001136c3f40 = puVar1;
  }
  return;
}



/* Entry: 10676d518; end: 10676d57f; +[SMEGLComputeInferredVisitResponse descriptor] */

void FUN_10676d518(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af71b0,
                        &PTR____CFConstantStringClassReference_110e5c758,&PTR_DAT_11315da20,
                        &PTR_DAT_11315da98,1,0x10,0x1c);
    puRam00000001136c3f48 = puVar1;
  }
  return;
}



/* Entry: 10676d580; end: 10676d5e7; +[SMEGLRemovePlaceVisitRequest descriptor] */

void FUN_10676d580(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7200,
                        &PTR____CFConstantStringClassReference_110e5c778,&PTR_DAT_11315da20,
                        &PTR_s_placeId_11315daf8,2,0x18,0x1c);
    puRam00000001136c3f50 = puVar1;
  }
  return;
}



/* Entry: 10676d5e8; end: 10676d64f; +[SMEGLRemovePlaceVisitResponse descriptor] */

void FUN_10676d5e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7250,
                        &PTR____CFConstantStringClassReference_110e5c798,&PTR_DAT_11315da20,0,0,4,
                        0x1c);
    puRam00000001136c3f58 = puVar1;
  }
  return;
}



/* Entry: 10676d650; end: 10676d6b7; +[SMEGLRemoveAllPlacesVisitsRequest descriptor] */

void FUN_10676d650(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af72a0,
                        &PTR____CFConstantStringClassReference_110e5c7b8,&PTR_DAT_11315da20,0,0,4,
                        0x1c);
    puRam00000001136c3f60 = puVar1;
  }
  return;
}



/* Entry: 10676d6b8; end: 10676d71f; +[SMEGLRemoveAllPlacesVisitsResponse descriptor] */

void FUN_10676d6b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af72f0,
                        &PTR____CFConstantStringClassReference_110e5c7d8,&PTR_DAT_11315da20,0,0,4,
                        0x1c);
    puRam00000001136c3f68 = puVar1;
  }
  return;
}



/* Entry: 10676d720; end: 10676d787; +[SMEGLClearCurrentInferredVisitRequest descriptor] */

void FUN_10676d720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7340,
                        &PTR____CFConstantStringClassReference_110e5c7f8,&PTR_DAT_11315da20,
                        &PTR_s_placeId_11315db38,2,0x18,0x1c);
    puRam00000001136c3f70 = puVar1;
  }
  return;
}



/* Entry: 10676d788; end: 10676d7ef; +[SMEGLClearCurrentInferredVisitResponse descriptor] */

void FUN_10676d788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7390,
                        &PTR____CFConstantStringClassReference_110e5c818,&PTR_DAT_11315da20,0,0,4,
                        0x1c);
    puRam00000001136c3f78 = puVar1;
  }
  return;
}



/* Entry: 10676d7f0; end: 10676d857; +[SMEGLGetUserVisitsRequest descriptor] */

void FUN_10676d7f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af73e0,
                        &PTR____CFConstantStringClassReference_110e5c838,&PTR_DAT_11315da20,
                        &PTR_s_userId_11315db78,2,0x18,0x1c);
    puRam00000001136c3f80 = puVar1;
  }
  return;
}



/* Entry: 10676d858; end: 10676d8bf; +[SMEGLUserExplicitVisit descriptor] */

void FUN_10676d858(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7430,
                        &PTR____CFConstantStringClassReference_110e5c858,&PTR_DAT_11315da20,
                        &PTR_s_placeId_11315dd38,6,0x28,0x1c);
    puRam00000001136c3f88 = puVar1;
  }
  return;
}



/* Entry: 10676d8c0; end: 10676d927; +[SMEGLUserInferredVisit descriptor] */

void FUN_10676d8c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7480,
                        &PTR____CFConstantStringClassReference_110e5c878,&PTR_DAT_11315da20,
                        &PTR_s_placeId_11315dc58,3,0x18,0x1c);
    puRam00000001136c3f90 = puVar1;
  }
  return;
}



/* Entry: 10676d928; end: 10676d98f; +[SMEGLGetUserVisitsResponse descriptor] */

void FUN_10676d928(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3f98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af74d0,
                        &PTR____CFConstantStringClassReference_110e5c898,&PTR_DAT_11315da20,
                        &PTR_DAT_11315dbb8,2,0x18,0x1c);
    puRam00000001136c3f98 = puVar1;
  }
  return;
}



/* Entry: 10676d990; end: 10676d9f7; +[SMEGLLocationSignals descriptor] */

void FUN_10676d990(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3fa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7520,
                        &PTR____CFConstantStringClassReference_110e5c8b8,&PTR_DAT_11315da20,
                        &PTR_s_lat_11315ddf8,6,0x28,0x1c);
    puRam00000001136c3fa0 = puVar1;
  }
  return;
}



/* Entry: 10676d9f8; end: 10676da5f; +[SMEGLInferredLocationInfo descriptor] */

void FUN_10676d9f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3fa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7570,
                        &PTR____CFConstantStringClassReference_110e5c8d8,&PTR_DAT_11315da20,
                        &PTR_s_placeId_11315deb8,6,0x30,0x1c);
    puRam00000001136c3fa8 = puVar1;
  }
  return;
}



/* Entry: 10676da60; end: 10676dac7; +[SMEGLInferCurrentLocationRequest descriptor] */

void FUN_10676da60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3fb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af75c0,
                        &PTR____CFConstantStringClassReference_110e5c8f8,&PTR_DAT_11315da20,
                        &PTR_DAT_11315dab8,1,0x10,0x1c);
    puRam00000001136c3fb0 = puVar1;
  }
  return;
}



/* Entry: 10676dac8; end: 10676db2f; +[SMEGLInferCurrentLocationResponse descriptor] */

void FUN_10676dac8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3fb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7610,
                        &PTR____CFConstantStringClassReference_110e5c918,&PTR_DAT_11315da20,
                        &PTR_DAT_11315dad8,1,0x10,0x1c);
    puRam00000001136c3fb8 = puVar1;
  }
  return;
}



/* Entry: 10676db30; end: 10676dba3; -[UNISCMMSPMapSearchProxy initWithUnifiedGrpcService:] */

undefined1 * FUN_10676db30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2f30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10676dba4; end: 10676dc87; -[UNISCMMSPMapSearchProxy autoCompleteWithRequest:callOptionsBuilder:handler:] */

void FUN_10676dba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cda78;
  _objc_opt_class(PTR_PTR_1126cda78);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5c938,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10676dc88; end: 10676dd6b; -[UNISCMMSPMapSearchProxy searchWithRequest:callOptionsBuilder:handler:] */

void FUN_10676dc88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cda80;
  _objc_opt_class(PTR_PTR_1126cda80);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5c958,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10676dd6c; end: 10676dd77; -[UNISCMMSPMapSearchProxy .cxx_destruct] */

void FUN_10676dd6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10676dd78; end: 10676ddf3;  */

undefined * FUN_10676dd78(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c3fc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5c978,
                        &UNK_10dddebf4,&UNK_10dddec34,4,FUN_10676ddf4,0);
    do {
      if (puRam00000001136c3fc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c3fc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c3fc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c3fc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c3fc0;
}



/* Entry: 10676ddf4; end: 10676ddff;  */

bool FUN_10676ddf4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10676de00; end: 10676de7b;  */

undefined * FUN_10676de00(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c3fc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5c998,
                        &UNK_10dddec44,&UNK_10dddec7c,3,FUN_10676de7c,0);
    do {
      if (puRam00000001136c3fc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c3fc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c3fc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c3fc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c3fc8;
}



/* Entry: 10676de7c; end: 10676de87;  */

bool FUN_10676de7c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10676de88; end: 10676df03;  */

undefined * FUN_10676de88(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c3fd0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5c9b8,
                        &UNK_10dddec88,&UNK_10dddecb4,3,FUN_10676df04,0);
    do {
      if (puRam00000001136c3fd0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c3fd0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c3fd0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c3fd0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c3fd0;
}



/* Entry: 10676df04; end: 10676df0f;  */

bool FUN_10676df04(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10676df10; end: 10676df8b;  */

undefined * FUN_10676df10(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c3fd8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5c9d8,
                        &UNK_10dddecc0,&UNK_10ddded2c,4,FUN_10676df8c,0);
    do {
      if (puRam00000001136c3fd8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c3fd8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c3fd8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c3fd8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c3fd8;
}



/* Entry: 10676df8c; end: 10676df97;  */

bool FUN_10676df8c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10676df98; end: 10676dfff; +[SCMMSPAutoCompleteRequest descriptor] */

void FUN_10676df98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3fe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7700,
                        &PTR____CFConstantStringClassReference_110e5c9f8,&PTR_DAT_11315e078,
                        &PTR_DAT_11315e250,9,0x38,0x1c);
    puRam00000001136c3fe0 = puVar1;
  }
  return;
}



/* Entry: 10676e000; end: 10676e067; +[SCMMSPAutoCompleteResponse descriptor] */

void FUN_10676e000(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3fe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7750,
                        &PTR____CFConstantStringClassReference_110e5ca18,&PTR_DAT_11315e078,
                        &PTR_s_suggestionsArray_11315e0b0,2,0x18,0x1c);
    puRam00000001136c3fe8 = puVar1;
  }
  return;
}



/* Entry: 10676e068; end: 10676e0cf; +[SCMMSPAddressSuggestion descriptor] */

void FUN_10676e068(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3ff0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af77a0,
                        &PTR____CFConstantStringClassReference_110e5ca38,&PTR_DAT_11315e078,
                        &PTR_s_id_p_11315e0f0,5,0x30,0x1c);
    puRam00000001136c3ff0 = puVar1;
  }
  return;
}



/* Entry: 10676e0d0; end: 10676e14b; +[SCMMSPPlaceSuggestion descriptor] */

undefined * FUN_10676e0d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3ff8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af77f0,
                        &PTR____CFConstantStringClassReference_110e5ca58,&PTR_DAT_11315e078,
                        &PTR_s_id_p_11315e370,10,0x58,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c3ff8 = puVar1;
  }
  return puRam00000001136c3ff8;
}



/* Entry: 10676e14c; end: 10676e1b3; +[SCMMSPSearchRequest descriptor] */

void FUN_10676e14c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4000 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7840,
                        &PTR____CFConstantStringClassReference_110dec378,&PTR_DAT_11315e078,
                        &PTR_DAT_11315e190,6,0x28,0x1c);
    puRam00000001136c4000 = puVar1;
  }
  return;
}



/* Entry: 10676e1b4; end: 10676e21b; +[SCMMSPSearchResponse descriptor] */

void FUN_10676e1b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4008 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af7890,
                        &PTR____CFConstantStringClassReference_110dec398,&PTR_DAT_11315e078,
                        &PTR_DAT_11315e090,1,0x10,0x1c);
    puRam00000001136c4008 = puVar1;
  }
  return;
}



/* Entry: 10676e21c; end: 10676e297; +[SCMMSPPlace descriptor] */

undefined * FUN_10676e21c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4010 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af78e0,
                        &PTR____CFConstantStringClassReference_110dcb618,&PTR_DAT_11315e078,
                        &PTR_s_id_p_11315e4b0,10,0x58,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c4010 = puVar1;
  }
  return puRam00000001136c4010;
}



/* Entry: 10676e298; end: 10676e30b; -[UNISCMapsSlippySlippyUpsells initWithUnifiedGrpcService:] */

undefined1 * FUN_10676e298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2f38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10676e30c; end: 10676e3ef; -[UNISCMapsSlippySlippyUpsells getShouldPerformActionWithRequest:callOptionsBuilder:handler:] */

void FUN_10676e30c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cd7c8;
  _objc_opt_class(PTR_PTR_1126cd7c8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5b1d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10676e3f0; end: 10676e4d3; -[UNISCMapsSlippySlippyUpsells updateReactionWithRequest:callOptionsBuilder:handler:] */

void FUN_10676e3f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cd7d0;
  _objc_opt_class(PTR_PTR_1126cd7d0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5b1f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10676e4d4; end: 10676e4df; -[UNISCMapsSlippySlippyUpsells .cxx_destruct] */

void FUN_10676e4d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10676e4e0; end: 10676e65b; -[SCMapSlippyUpsellController initWithCurrentUserId:mapFriendsProvider:personLocationProvider:preferenceProvider:mapUserPreferences:slippyService:circumstanceEngine:] */

undefined1 *
FUN_10676e4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f2f40;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10676e65c; end: 10676e83f; -[SCMapSlippyUpsellController requestLocationShareUpsellWithCompletion:] */

void FUN_10676e65c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cda88;
  _objc_alloc_init(PTR_PTR_1126cda88);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000100576d08(uVar2,auStack_48,auStack_50);
  if ((int)uVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar5);
  }
  func_0x00010c21e620(puVar1);
  _objc_release(puVar5);
  func_0x00010c161c40(puVar1);
  func_0x00010c1618c0(puVar1);
  puVar5 = PTR_PTR_1126cda90;
  _objc_alloc_init(PTR_PTR_1126cda90);
  lVar3 = param_1;
  func_0x00010be4f7e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bfc20(puVar5);
  _objc_release(lVar3);
  func_0x00010c21e7c0(puVar1);
  puVar4 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_58,auStack_48);
  func_0x00010bfca3e0(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10676e840; end: 10676e93b;  */

void FUN_10676e840(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  if (((param_3 == 0) && (uVar3 = param_2, func_0x00010c231c40(), (int)uVar3 != 0)) &&
     (uVar3 = param_2, func_0x00010bfd3a20(), (uVar3 & 1) != 0)) {
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar4 != 0) {
      uVar7 = *(undefined8 *)(lVar4 + 0x28);
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189ca0(uVar7);
      _objc_release(puVar5);
      uVar3 = param_2;
      func_0x00010beee280();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c09f520();
      uVar2 = (int)uVar6 - 1;
      lVar1 = 0;
      if (uVar2 < 4) {
        lVar1 = (ulong)uVar2 + 1;
      }
      _objc_release(uVar3);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,lVar1);
    }
    _objc_release(lVar4);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10676e93c; end: 10676ea27; -[SCMapSlippyUpsellController reportLocationShareUpsellAccepted:] */

void FUN_10676e93c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126cda98;
  _objc_alloc_init(PTR_PTR_1126cda98);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000100576d08(uVar2,auStack_38,auStack_40);
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar3);
  }
  func_0x00010c21e620(puVar1);
  _objc_release(puVar3);
  func_0x00010c161c40(puVar1);
  puVar3 = PTR_PTR_1126cdaa0;
  _objc_alloc_init(PTR_PTR_1126cdaa0);
  func_0x00010c160ca0();
  func_0x00010c1e7b60(puVar1);
  func_0x00010c289140(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 10676ea28; end: 10676ea2b;  */

void FUN_10676ea28(void)

{
  return;
}



/* Entry: 10676ea2c; end: 10676ec77; -[SCMapSlippyUpsellController requestChatLocationShareUpsellForFriendId:completion:] */

void FUN_10676ea2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cda88;
  _objc_alloc_init(PTR_PTR_1126cda88);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000100576d08(uVar2,auStack_58,auStack_60);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c21e620(puVar1);
  _objc_release(puVar4);
  func_0x00010c161c40(puVar1);
  func_0x00010c1618c0(puVar1);
  puVar4 = PTR_PTR_1126cda90;
  _objc_alloc_init(PTR_PTR_1126cda90);
  puVar3 = PTR_PTR_1126cdaa8;
  _objc_alloc_init(PTR_PTR_1126cdaa8);
  uVar2 = param_3;
  func_0x000100576d08(param_3,auStack_58,auStack_60);
  if ((int)uVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar5);
  }
  func_0x00010c19fd60(puVar3);
  _objc_release(puVar5);
  func_0x00010c17bde0(puVar4);
  func_0x00010c21e7c0(puVar1);
  puVar5 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  func_0x00010bfca3e0(uVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10676ec78; end: 10676ecef;  */

void FUN_10676ec78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (param_3 == 0) {
      uVar2 = param_2;
      func_0x00010c231c40(param_2);
    }
    else {
      uVar2 = 0;
    }
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10676ecf0; end: 10676eebb; -[SCMapSlippyUpsellController reportChatLocationShareUpsellActionWithFriendId:actionType:] */

void FUN_10676ecf0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126cda98;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000100576d08(uVar2,auStack_58,auStack_60);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c21e620(puVar1);
  _objc_release(puVar4);
  func_0x00010c161c40(puVar1);
  puVar4 = PTR_PTR_1126cdaa0;
  _objc_alloc_init(PTR_PTR_1126cdaa0);
  puVar3 = PTR_PTR_1126cdab0;
  _objc_alloc_init(PTR_PTR_1126cdab0);
  uVar2 = param_3;
  func_0x000100576d08(param_3,auStack_58,auStack_60);
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar5);
  }
  func_0x00010c19fd60(puVar3);
  _objc_release(puVar5);
  if ((param_4 == 0) || (param_4 == 1)) {
    func_0x00010c161620(puVar3);
  }
  func_0x00010c17bdc0(puVar4);
  func_0x00010c1e7b60(puVar1);
  puVar5 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289140(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 10676eebc; end: 10676eebf;  */

void FUN_10676eebc(void)

{
  return;
}



/* Entry: 10676eec0; end: 10676f0bb; -[SCMapSlippyUpsellController requestChatPushNotificationUpsellForFriendId:completion:] */

void FUN_10676eec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cda88;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000100576d08(uVar2,auStack_58,auStack_60);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c21e620(puVar1);
  _objc_release(puVar4);
  func_0x00010c161c40(puVar1);
  puVar4 = PTR_PTR_1126cda90;
  _objc_alloc_init(PTR_PTR_1126cda90);
  puVar3 = PTR_PTR_1126cdab8;
  _objc_alloc_init(PTR_PTR_1126cdab8);
  uVar2 = param_3;
  func_0x000100576d08(param_3,auStack_58,auStack_60);
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar5);
  }
  func_0x00010c19fd60(puVar3);
  _objc_release(puVar5);
  func_0x00010c17baa0(puVar4);
  func_0x00010c21e7c0(puVar1);
  puVar5 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_4);
  func_0x00010bfca3e0(uVar2);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  return;
}


