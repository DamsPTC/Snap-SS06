/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af4ef10; end: 10af4ef17; -[SCOneTapLoginArchiveTokenManager setCurrentTokenForUserId:] */

void FUN_10af4ef10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10af4ef18; end: 10af4ef5f; -[SCOneTapLoginArchiveTokenManager .cxx_destruct] */

void FUN_10af4ef18(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af4ef60; end: 10af4ef8b; +[SCGrapheneOneTapLoginRepositoryMetric otlKeychainWritten] */

void FUN_10af4ef60(void)

{
  _objc_alloc(PTR_PTR_1126deb10);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af4ef8c; end: 10af4efb7; +[SCGrapheneOneTapLoginRepositoryMetric otlKeychainRead] */

void FUN_10af4ef8c(void)

{
  _objc_alloc(PTR_PTR_1126deb10);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af4efb8; end: 10af4efe3; +[SCGrapheneOneTapLoginRepositoryMetric otlKeychainCopied] */

void FUN_10af4efb8(void)

{
  _objc_alloc(PTR_PTR_1126deb10);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af4efe4; end: 10af4f083; -[SCGrapheneOneTapLoginRepositoryMetric description] */

void FUN_10af4efe4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110f3a3b8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f3a3b8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_112702b40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10af4f084; end: 10af4f1db; -[SCGrapheneRegistry oneTapLoginRepositoryGraphene] */

void FUN_10af4f084(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10af4f10c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001137f0068 != -1) {
    func_0x000107c27d9c(0x1137f0068,&puStack_48);
  }
  uVar1 = uRam00000001137f0060;
  _objc_retain(uRam00000001137f0060);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af4f1dc; end: 10af4f1e3; -[SCAppExtensionDefaultsImpl objectForKey:] */

void FUN_10af4f1dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__1126159e0)
  ;
  return;
}



/* Entry: 10af4f1e4; end: 10af4f1eb; -[SCAppExtensionDefaultsImpl setObject:forKey:] */

void FUN_10af4f1e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKey__112651b80);
  return;
}



/* Entry: 10af4f1ec; end: 10af4f1f3; -[SCAppExtensionDefaultsImpl stringForKey:] */

void FUN_10af4f1ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_stringForKey__112674ee8)
  ;
  return;
}



/* Entry: 10af4f1f4; end: 10af4f1fb; -[SCAppExtensionDefaultsImpl setString:forKey:] */

void FUN_10af4f1f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKey__112651b80);
  return;
}



/* Entry: 10af4f1fc; end: 10af4f203; -[SCAppExtensionDefaultsImpl boolForKey:] */

void FUN_10af4f1fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_boolForKey__1125a5670);
  return;
}



/* Entry: 10af4f204; end: 10af4f20b; -[SCAppExtensionDefaultsImpl integerForKey:] */

void FUN_10af4f204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_integerForKey__1125f79f0);
  return;
}



/* Entry: 10af4f20c; end: 10af4f213; -[SCAppExtensionDefaultsImpl setInteger:forKey:] */

void FUN_10af4f20c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1add50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setInteger_forKey__112649178);
  return;
}



/* Entry: 10af4f214; end: 10af4f21b; -[SCAppExtensionDefaultsImpl removeObjectForKey:] */

void FUN_10af4f214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 10af4f21c; end: 10af4f227; -[SCAppExtensionDefaultsImpl .cxx_destruct] */

void FUN_10af4f21c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af4f228; end: 10af4f283;  */

void FUN_10af4f228(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7490;
  _objc_alloc(PTR_PTR_1126b7490);
  func_0x00010c02d600();
  puVar2 = PTR_PTR_1126deb60;
  _objc_alloc(PTR_PTR_1126deb60);
  func_0x00010c012bc0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af4f284; end: 10af4f2ef; -[SCUserExtensionDefaultsImpl objectForKey:] */

void FUN_10af4f284(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af4f2f0; end: 10af4f35b; -[SCUserExtensionDefaultsImpl stringForKey:] */

void FUN_10af4f2f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d300(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af4f35c; end: 10af4f3e3; -[SCUserExtensionDefaultsImpl setString:forKey:] */

void FUN_10af4f35c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10af4f3e4; end: 10af4f447; -[SCUserExtensionDefaultsImpl boolForKey:] */

undefined8 FUN_10af4f3e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 10af4f448; end: 10af4f4af; -[SCUserExtensionDefaultsImpl setBool:forKey:] */

void FUN_10af4f448(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0(uVar1,param_2,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10af4f4b0; end: 10af4f513; -[SCUserExtensionDefaultsImpl integerForKey:] */

undefined8 FUN_10af4f4b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067f80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 10af4f514; end: 10af4f57b; -[SCUserExtensionDefaultsImpl setInteger:forKey:] */

void FUN_10af4f514(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1add40(uVar1,param_2,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10af4f57c; end: 10af4f583; -[SCUserExtensionDefaultsImpl removeObjectForKey:] */

void FUN_10af4f57c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 10af4f584; end: 10af4f5b3; -[SCUserExtensionDefaultsImpl .cxx_destruct] */

void FUN_10af4f584(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af4f5b4; end: 10af4f67f; -[SCAppGroupPlistStorage _setObject:forKey:] */

void FUN_10af4f5b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uStack_68 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10af4f680;
  puStack_48 = &UNK_1108aa310;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0d0480(uVar1,param_2,&puStack_60,&uStack_68);
  uVar1 = uStack_68;
  _objc_retain(uStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10af4f680; end: 10af4f703;  */

void FUN_10af4f680(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  
  func_0x000107c2bbb4();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  func_0x00010c1d0640(param_2);
  puVar1 = PTR__OBJC_CLASS___NSPropertyListSerialization_1126b7208;
  func_0x00010bf64be0(PTR__OBJC_CLASS___NSPropertyListSerialization_1126b7208);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af4f704; end: 10af4f773; -[SCAppGroupPlistStorage setBool:forKey:] */

void FUN_10af4f704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010c0df6e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea6000(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4f774; end: 10af4f7af; -[SCAppGroupPlistStorage integerForKey:] */

undefined8 FUN_10af4f774(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be65800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067fc0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10af4f7b0; end: 10af4f81f; -[SCAppGroupPlistStorage setInteger:forKey:] */

void FUN_10af4f7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010c0df780(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea6000(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4f820; end: 10af4f823; -[SCAppGroupPlistStorage setObject:forKey:] */

void FUN_10af4f820(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setObject_forKey__1125871a8);
  return;
}



/* Entry: 10af4f824; end: 10af4f827; -[SCAppGroupPlistStorage stringForKey:] */

void FUN_10af4f824(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be65810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__objectForKey__112576fa0);
  return;
}



/* Entry: 10af4f828; end: 10af4f82b; -[SCAppGroupPlistStorage setString:forKey:] */

void FUN_10af4f828(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setObject_forKey__1125871a8);
  return;
}



/* Entry: 10af4f82c; end: 10af4f837; -[SCAppGroupPlistStorage removeObjectForKey:] */

void FUN_10af4f82c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setObject_forKey__1125871a8,0,param_3);
  return;
}



/* Entry: 10af4f838; end: 10af4f843; -[SCAppGroupPlistStorage .cxx_destruct] */

void FUN_10af4f838(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af4f844; end: 10af4f84b; -[SCRegistrationSessionServices registrationLastPageService] */

undefined8 FUN_10af4f844(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af4f84c; end: 10af4f853; -[SCRegistrationSessionServices registrationSourceService] */

undefined8 FUN_10af4f84c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af4f854; end: 10af4f88f; -[SCRegistrationSessionServices .cxx_destruct] */

void FUN_10af4f854(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af4f890; end: 10af4f903; -[SCDeviceCheckServices initWithDeviceCheckTokenFetcher:] */

undefined1 * FUN_10af4f890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702b68;
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



/* Entry: 10af4f904; end: 10af4f90b; -[SCDeviceCheckServices deviceCheckTokenFetcher] */

undefined8 FUN_10af4f904(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af4f90c; end: 10af4f917; -[SCDeviceCheckServices .cxx_destruct] */

void FUN_10af4f90c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af4f918; end: 10af4f91f; -[SCUpdatesFrequencyServices updatesFrequency] */

undefined8 FUN_10af4f918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af4f920; end: 10af4f94f; -[SCUpdatesFrequencyServices .cxx_destruct] */

void FUN_10af4f920(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af4f950; end: 10af4f957; -[SCSystemInstallServices firstInstallDate] */

undefined8 FUN_10af4f950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af4f958; end: 10af4f963; -[SCSystemInstallServices .cxx_destruct] */

void FUN_10af4f958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af4f964; end: 10af4f96b; -[SCUserInstallServices isFirstForInstall] */

undefined1 FUN_10af4f964(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af4f96c; end: 10af4f973; -[SCUserInstallServices firstInstallDate] */

undefined8 FUN_10af4f96c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af4f974; end: 10af4f97f; -[SCUserInstallServices .cxx_destruct] */

void FUN_10af4f974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af4f980; end: 10af4f987; -[SCThreadMonitoringServices anrThreadMonitoring] */

undefined8 FUN_10af4f980(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af4f988; end: 10af4f993; -[SCThreadMonitoringServices .cxx_destruct] */

void FUN_10af4f988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af4f994; end: 10af4f99f; -[SCUserTraceLoggerServices .cxx_destruct] */

void FUN_10af4f994(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af4f9a0; end: 10af4f9ab; -[SCCameraRequestHandlerServices .cxx_destruct] */

void FUN_10af4f9a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af4f9ac; end: 10af4f9b3; -[SCCameraCaptureRequestHandlerServices requestHandler] */

undefined8 FUN_10af4f9ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af4f9b4; end: 10af4f9e3; -[SCCameraCaptureRequestHandlerServices setRequestHandler:] */

void FUN_10af4f9b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af4f9e4; end: 10af4f9ef; -[SCCameraCaptureRequestHandlerServices .cxx_destruct] */

void FUN_10af4f9e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af4f9f0; end: 10af4fa83; +[SCCameraHardwareRequest activateDevicesWithDevicePosition:secondaryDevicePositions:backDeviceType:viewfinderTransition:context:] */

void FUN_10af4f9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b00d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  *(undefined8 *)(puVar2 + 0x48) = param_5;
  *(undefined8 *)(puVar2 + 0x50) = param_6;
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_7;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af4fa84; end: 10af4faef; +[SCCameraHardwareRequest setDeviceParametersWithDeviceSettings:] */

void FUN_10af4fa84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b00d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af4faf0; end: 10af4fb4f; +[SCCameraHardwareRequest setStabilizationModeWithDevicePosition:stabilizationMode:] */

void FUN_10af4faf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b00d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  *(undefined8 *)(puVar2 + 0x68) = param_3;
  *(undefined8 *)(puVar2 + 0x70) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af4fb50; end: 10af4fbbb; +[SCCameraHardwareRequest stopWithStreamingDelegate:] */

void FUN_10af4fb50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b00d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af4fbbc; end: 10af4fc27; +[SCCameraHardwareRequest turnARSessionOffWithTrackingParameters:shouldUpdateManagedCaptureSession:] */

void FUN_10af4fbbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b00d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 10;
  puVar2[0xb4] = (char)((ulong)param_3 >> 0x20);
  *(int *)(puVar2 + 0xb0) = (int)param_3;
  puVar2[0xb5] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af4fc28; end: 10af4fc93; +[SCCameraHardwareRequest turnARSessionOnWithTrackingParameters:shouldUpdateManagedCaptureSession:] */

void FUN_10af4fc28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b00d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
  puVar2[0xae] = (char)((ulong)param_3 >> 0x20);
  *(int *)(puVar2 + 0xaa) = (int)param_3;
  puVar2[0xaf] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af4fc94; end: 10af4fd63; +[SCCameraHardwareRequest updateFrameRateOnlyWithDeviceSettingsMap:errorHandler:requestingFeatures:] */

void FUN_10af4fc94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b00d0;
  _objc_retain(param_4);
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  uVar4 = *(undefined8 *)(puVar2 + 0x90);
  *(undefined8 *)(puVar2 + 0x90) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  uVar4 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(puVar2 + 0x98);
  *(undefined8 *)(puVar2 + 0x98) = uVar4;
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(puVar2 + 0xa0);
  *(undefined8 *)(puVar2 + 0xa0) = param_5;
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af4fd64; end: 10af4fdc7; +[SCCameraHardwareRequest updateSessionPhotoOutputIfNeededWithEnabled:shouldPauseViewfinderRender:] */

void FUN_10af4fd64(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b00d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
  puVar2[0xa8] = param_3;
  puVar2[0xa9] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af4fdc8; end: 10af4fe73; +[SCCameraCaptureRequest captureImageWithImageCaptureConfiguration:completionHandler:] */

void FUN_10af4fdc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b9d38;
  _objc_retain(param_4);
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  uVar4 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af4fe74; end: 10af4ffe3; +[SCCameraCaptureRequest captureVideoWithEndRecordingSignal:videoCaptureconfiguration:audioConfiguration:outputSettings:fileUrl:errorHandler:] */

void FUN_10af4fe74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b9d38;
  _objc_retain(param_8);
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar4);
  uVar4 = param_8;
  _objc_retainBlock();
  _objc_release(param_8);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = uVar4;
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af4ffe4; end: 10af50007; -[SCCameraCaptureRequest copyWithZone:] */

undefined8 FUN_10af4ffe4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af50008; end: 10af500c7; -[SCCameraCaptureRequest hash] */

undefined8 * FUN_10af50008(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
    puVar8 = (undefined1 *)0x1;
    goto LAB_10af50184;
  }
  puVar8 = (undefined1 *)0x0;
  if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af50184;
  puVar8 = (undefined1 *)puVar3;
  _objc_opt_class(puVar3);
  puVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar8);
  if ((((ulong)puVar6 & 1) != 0) && (*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8))) {
    lVar4 = *(long *)((long)puVar3 + 0x10);
    if ((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
      lVar4 = *(long *)((long)puVar3 + 0x18);
      lVar7 = *(long *)(param_3 + 0x18);
      if (lVar4 == lVar7) {
LAB_10af501a8:
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x28);
          if ((lVar5 != *(long *)(param_3 + 0x28)) && (func_0x00010c071ae0(), (int)lVar5 == 0))
          goto LAB_10af50254;
          lVar5 = *(long *)((long)puVar3 + 0x30);
          if ((lVar5 != *(long *)(param_3 + 0x30)) && (func_0x00010c071ae0(), (int)lVar5 == 0))
          goto LAB_10af50254;
          lVar5 = *(long *)((long)puVar3 + 0x38);
          if ((lVar5 != *(long *)(param_3 + 0x38)) && (func_0x00010c071ae0(), (int)lVar5 == 0))
          goto LAB_10af50254;
          lVar5 = *(long *)((long)puVar3 + 0x40);
          if ((lVar5 != *(long *)(param_3 + 0x40)) && (func_0x00010c071ae0(), (int)lVar5 == 0))
          goto LAB_10af50254;
          puVar8 = *(undefined1 **)((long)puVar3 + 0x48);
          puVar6 = *(undefined1 **)(param_3 + 0x48);
          if (puVar8 == puVar6) {
            puVar8 = (undefined1 *)0x1;
          }
          else {
            _objc_retainBlock();
            func_0x00010c071ae0(puVar8);
            _objc_release(puVar6);
          }
        }
        else {
LAB_10af50254:
          puVar8 = (undefined1 *)0x0;
        }
        if (lVar4 == lVar7) goto LAB_10af50184;
      }
      else {
        unaff_x20 = lVar7;
        _objc_retainBlock(lVar7);
        lVar5 = lVar4;
        func_0x00010c071ae0();
        if ((int)lVar5 != 0) goto LAB_10af501a8;
        puVar8 = (undefined1 *)0x0;
      }
      _objc_release(unaff_x20);
      goto LAB_10af50184;
    }
  }
  puVar8 = (undefined1 *)0x0;
LAB_10af50184:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10af500c8; end: 10af50273; -[SCCameraCaptureRequest isEqual:] */

long FUN_10af500c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    lVar6 = 1;
    goto LAB_10af50184;
  }
  lVar6 = 0;
  if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af50184;
  uVar1 = param_1;
  _objc_opt_class(param_1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar1);
  if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
    lVar6 = *(long *)(param_1 + 0x10);
    if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
      lVar4 = *(long *)(param_1 + 0x18);
      lVar5 = *(long *)(param_3 + 0x18);
      if (lVar4 == lVar5) {
LAB_10af501a8:
        lVar6 = *(long *)(param_1 + 0x20);
        if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)(param_1 + 0x28);
          if ((lVar6 != *(long *)(param_3 + 0x28)) && (func_0x00010c071ae0(), (int)lVar6 == 0))
          goto LAB_10af50254;
          lVar6 = *(long *)(param_1 + 0x30);
          if ((lVar6 != *(long *)(param_3 + 0x30)) && (func_0x00010c071ae0(), (int)lVar6 == 0))
          goto LAB_10af50254;
          lVar6 = *(long *)(param_1 + 0x38);
          if ((lVar6 != *(long *)(param_3 + 0x38)) && (func_0x00010c071ae0(), (int)lVar6 == 0))
          goto LAB_10af50254;
          lVar6 = *(long *)(param_1 + 0x40);
          if ((lVar6 != *(long *)(param_3 + 0x40)) && (func_0x00010c071ae0(), (int)lVar6 == 0))
          goto LAB_10af50254;
          lVar6 = *(long *)(param_1 + 0x48);
          lVar3 = *(long *)(param_3 + 0x48);
          if (lVar6 == lVar3) {
            lVar6 = 1;
          }
          else {
            _objc_retainBlock();
            func_0x00010c071ae0(lVar6);
            _objc_release(lVar3);
          }
        }
        else {
LAB_10af50254:
          lVar6 = 0;
        }
        if (lVar4 == lVar5) goto LAB_10af50184;
      }
      else {
        unaff_x20 = lVar5;
        _objc_retainBlock(lVar5);
        lVar6 = lVar4;
        func_0x00010c071ae0();
        if ((int)lVar6 != 0) goto LAB_10af501a8;
        lVar6 = 0;
      }
      _objc_release(unaff_x20);
      goto LAB_10af50184;
    }
  }
  lVar6 = 0;
LAB_10af50184:
  _objc_release(param_3);
  return lVar6;
}



/* Entry: 10af50274; end: 10af502bf; +[SCCameraRequestHandlerEvent didBecomeBusy] */

void FUN_10af50274(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b9d70;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af502c0; end: 10af502e3; -[SCCameraRequestHandlerEvent copyWithZone:] */

undefined8 FUN_10af502c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af502e4; end: 10af502eb; -[SCCameraRequestHandlerEvent hash] */

undefined8 FUN_10af502e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af502ec; end: 10af5031b; -[SCCameraLoggingServices setLoggingQueue:] */

void FUN_10af502ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af5031c; end: 10af5034b; -[SCCameraLoggingServices setBlizzardLogger:] */

void FUN_10af5031c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af5034c; end: 10af5037b; -[SCCameraLoggingServices setPerfLogger:] */

void FUN_10af5034c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af5037c; end: 10af503b7; -[SCCameraLoggingServices .cxx_destruct] */

void FUN_10af5037c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af503b8; end: 10af503bf; -[SCCameraUserLoggingServices loggingQueue] */

undefined8 FUN_10af503b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af503c0; end: 10af503ef; -[SCCameraUserLoggingServices setLoggingQueue:] */

void FUN_10af503c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af503f0; end: 10af5041f; -[SCCameraUserLoggingServices setBlizzardLogger:] */

void FUN_10af503f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af50420; end: 10af5044f; -[SCCameraUserLoggingServices .cxx_destruct] */

void FUN_10af50420(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af50450; end: 10af50457; -[SCContentDeliveryCacheControllerServices cacheController] */

undefined8 FUN_10af50450(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af50458; end: 10af50463; -[SCContentDeliveryCacheControllerServices .cxx_destruct] */

void FUN_10af50458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af50464; end: 10af5046b; -[SCNetworkMappingProviderServices networkMappingProvider] */

undefined8 FUN_10af50464(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af5046c; end: 10af50477; -[SCNetworkMappingProviderServices .cxx_destruct] */

void FUN_10af5046c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af50478; end: 10af50483; -[SCTemporaryFileWriterServices .cxx_destruct] */

void FUN_10af50478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af50484; end: 10af5048b; -[SCNativeWarmupManagerServices warmupManager] */

undefined8 FUN_10af50484(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af5048c; end: 10af504bb; -[SCNativeWarmupManagerServices setWarmupManager:] */

void FUN_10af5048c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af504bc; end: 10af504c3; -[SCNativeWarmupManagerServices periodicWarmupFactory] */

undefined8 FUN_10af504bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af504c4; end: 10af504f3; -[SCNativeWarmupManagerServices setPeriodicWarmupFactory:] */

void FUN_10af504c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af504f4; end: 10af50523; -[SCNativeWarmupManagerServices .cxx_destruct] */

void FUN_10af504f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af50524; end: 10af5056b; -[SCWarmupTimerConfig initWithIntervalMilliSec:] */

void FUN_10af50524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112702bf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10af5056c; end: 10af5058f; -[SCWarmupTimerConfig copyWithZone:] */

undefined8 FUN_10af5056c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af50590; end: 10af50597; -[SCWarmupTimerConfig hash] */

undefined8 FUN_10af50590(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af50598; end: 10af5061f; -[SCWarmupTimerConfig isEqual:] */

bool FUN_10af50598(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10af50620; end: 10af50627; -[SCWarmupTimerConfig intervalMilliSec] */

undefined8 FUN_10af50620(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af50628; end: 10af506c7; -[SCNWarmupManagerWarmupRequest initWithRequest:connectionsRequested:forceRequest:] */

undefined1 *
FUN_10af50628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112702bf8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af506c8; end: 10af506cf; -[SCNWarmupManagerWarmupRequest request] */

undefined8 FUN_10af506c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af506d0; end: 10af506d7; -[SCNWarmupManagerWarmupRequest connectionsRequested] */

undefined4 FUN_10af506d0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10af506d8; end: 10af506df; -[SCNWarmupManagerWarmupRequest forceRequest] */

undefined1 FUN_10af506d8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af506e0; end: 10af506eb; -[SCNWarmupManagerWarmupRequest .cxx_destruct] */

void FUN_10af506e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


