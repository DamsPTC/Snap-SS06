/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e5b6d8; end: 104e5b6df; -[SCAddFriendsDeepLinkPlugin priority] */

undefined8 FUN_104e5b6d8(void)

{
  return 1000;
}



/* Entry: 104e5b6e0; end: 104e5b6f3; -[SCAddFriendsDeepLinkPlugin canProvideProcessorForFeature:] */

void FUN_104e5b6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f836d8);
  return;
}



/* Entry: 104e5b6f4; end: 104e5b73f; -[SCAddFriendsDeepLinkPlugin isValidDeepLink:] */

undefined8 FUN_104e5b6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104e5b740; end: 104e5b743; -[SCAddFriendsDeepLinkPlugin makeDeepLinkProcessor] */

void FUN_104e5b740(void)

{
  return;
}



/* Entry: 104e5b744; end: 104e5b96f; -[SCAddFriendsDeepLinkPlugin processDeepLinkURL:additionalInfo:delegate:] */

void FUN_104e5b744(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb9c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b13c8;
  func_0x00010bf0d880(PTR_PTR_1126b13c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1068;
  _objc_alloc(PTR_PTR_1126b1068);
  uVar1 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2475e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057c40(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  func_0x00010c0a5fe0(param_5);
  _objc_initWeak(auStack_68,param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c10d100(uVar1);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b13c8;
  func_0x00010c261740(PTR_PTR_1126b13c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e5b970; end: 104e5b9bf;  */

void FUN_104e5b970(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a6880();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf94720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5b9c0; end: 104e5b9c7; -[SCAddFriendsDeepLinkPlugin shouldForceNavigation] */

undefined8 FUN_104e5b9c0(void)

{
  return 1;
}



/* Entry: 104e5b9c8; end: 104e5bc03; -[SCAddFriendsDeepLinkPlugin processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_104e5b9c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb9c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b13c8;
  func_0x00010bf0d880(PTR_PTR_1126b13c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2);
  _objc_release(puVar3);
  func_0x00010c0a5fe0(param_5);
  _objc_initWeak(auStack_70,param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f83998;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_60 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010c10d100(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b13c8;
  func_0x00010c261740(PTR_PTR_1126b13c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume(param_3);
  lVar4 = param_3 + 0x20;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0a6880();
  _objc_release(lVar4);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf94720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e5bc04; end: 104e5bc53;  */

void FUN_104e5bc04(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a6880();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf94720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5bc54; end: 104e5bc83; -[SCAddFriendsDeepLinkPlugin .cxx_destruct] */

void FUN_104e5bc54(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e5bc84; end: 104e5bd7f; -[SCAddFriendsDeepLinkPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5bc84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b13d0;
  _objc_alloc(PTR_PTR_1126b13d0);
  lVar2 = param_1 + _DAT_11271496c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112714970;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e6e0(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112714974;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e5bd80; end: 104e5bdcf; -[SCAddFriendsDeepLinkPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5bd80(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714970);
  _objc_destroyWeak(param_1 + _DAT_11271496c);
  _objc_destroyWeak(param_1 + _DAT_112714978);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112714974);
  return;
}



/* Entry: 104e5bdd0; end: 104e5bdfb; +[SCGrapheneFriendsDeepLinkMetric attempt] */

void FUN_104e5bdd0(void)

{
  _objc_alloc(PTR_PTR_1126b13c8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e5bdfc; end: 104e5be27; +[SCGrapheneFriendsDeepLinkMetric fail] */

void FUN_104e5bdfc(void)

{
  _objc_alloc(PTR_PTR_1126b13c8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e5be28; end: 104e5be53; +[SCGrapheneFriendsDeepLinkMetric success] */

void FUN_104e5be28(void)

{
  _objc_alloc(PTR_PTR_1126b13c8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e5be54; end: 104e5bef3; -[SCGrapheneFriendsDeepLinkMetric description] */

void FUN_104e5be54(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db7878;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110db7878,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e4830;
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



/* Entry: 104e5bef4; end: 104e5c04b; -[SCGrapheneRegistry friendsDeepLinkGraphene] */

void FUN_104e5bef4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104e5bf7c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b90b8 != -1) {
    func_0x00010002a2fc(0x1136b90b8,&puStack_48);
  }
  uVar1 = uRam00000001136b90b0;
  _objc_retain(uRam00000001136b90b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e5c04c; end: 104e5c057; +[SCCMutualFriendsFullScreenTakeover componentPath] */

undefined ** FUN_104e5c04c(void)

{
  return &PTR____CFConstantStringClassReference_110db78f8;
}



/* Entry: 104e5c058; end: 104e5c08b; -[SCCMutualFriendsFullScreenTakeover initWithViewModel:componentContext:runtime:] */

void FUN_104e5c058(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4838;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 104e5c08c; end: 104e5c0db; -[SCCMutualFriendsFullScreenTakeover setViewModel:] */

void FUN_104e5c08c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5c0dc; end: 104e5c11f; -[SCCMutualFriendsFullScreenTakeover viewModel] */

void FUN_104e5c0dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e5c120; end: 104e5c1eb; -[SCCMutualFriendsFullScreenTakeoverContext initWithOnPrimaryButtonTap:onSecondaryButtonTap:onOpenUrl:] */

undefined8 *
FUN_104e5c120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_48 = PTR_PTR_1126e4840;
  puVar3 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 104e5c1ec; end: 104e5c1fb; +[SCCMutualFriendsFullScreenTakeoverContext valdiMarshallableObjectDescriptor] */

void FUN_104e5c1ec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onPrimaryButtonTap_110853fc0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e5c1fc; end: 104e5c22f; -[SCCMutualFriendsFullScreenTakeoverViewModel init] */

void FUN_104e5c1fc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4848;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104e5c230; end: 104e5c24b; +[SCCMutualFriendsFullScreenTakeoverViewModel valdiMarshallableObjectDescriptor] */

void FUN_104e5c230(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_friendUserId_110854020;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e5c24c; end: 104e5c257; +[SCCMutualFriendsEducationalFullScreenTakeover componentPath] */

undefined ** FUN_104e5c24c(void)

{
  return &PTR____CFConstantStringClassReference_110db7918;
}



/* Entry: 104e5c258; end: 104e5c28b; -[SCCMutualFriendsEducationalFullScreenTakeover initWithViewModel:componentContext:runtime:] */

void FUN_104e5c258(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4850;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 104e5c28c; end: 104e5c2db; -[SCCMutualFriendsEducationalFullScreenTakeover setViewModel:] */

void FUN_104e5c28c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5c2dc; end: 104e5c31f; -[SCCMutualFriendsEducationalFullScreenTakeover viewModel] */

void FUN_104e5c2dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e5c320; end: 104e5c383; -[SCCMutualFriendsEducationalFullScreenTakeoverContext initWithOnPrimaryButtonTap:] */

undefined8 * FUN_104e5c320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_1126e4858;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e5c384; end: 104e5c393; +[SCCMutualFriendsEducationalFullScreenTakeoverContext valdiMarshallableObjectDescriptor] */

void FUN_104e5c384(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onPrimaryButtonTap_110854050;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e5c394; end: 104e5c3c7; -[SCCMutualFriendsEducationalFullScreenTakeoverViewModel init] */

void FUN_104e5c394(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4860;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104e5c3c8; end: 104e5c3e3; +[SCCMutualFriendsEducationalFullScreenTakeoverViewModel valdiMarshallableObjectDescriptor] */

void FUN_104e5c3c8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_friendUserId_110854080;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e5c3e4; end: 104e5c9d3; -[SCPostRegInviteContactsComposerViewController initWithInviteContactsDelegate:contactAddressBookEntryStoreFactory:inviteContactsUIContainer:currentPageTracker:valdiRuntimeProvider:inviteContactSectionLogger:postRegInviteContactsLogger:maxNumOfRecipients:friendContactsInviter:valdiCOFStoresServices:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104e5c3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_80 = PTR_PTR_1126e4868;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11271497c,param_3);
    lVar8 = (long)_DAT_112714980;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_6;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_112714984;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112714988);
    *(undefined **)((long)puVar1 + (long)_DAT_112714988) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271498c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271498c) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112714990);
    *(undefined **)((long)puVar1 + (long)_DAT_112714990) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112714994) = param_10;
    func_0x00010bec74c0(puVar1);
    puVar3 = PTR_PTR_1126b13d8;
    _objc_alloc(PTR_PTR_1126b13d8);
    func_0x00010bffaea0();
    lVar8 = param_4;
    (**(code **)(param_4 + 0x10))(param_4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(puVar3);
    lVar8 = (long)_DAT_112714998;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_11;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar5 = PTR_PTR_1126b13e0;
    _objc_alloc(PTR_PTR_1126b13e0);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104e5c9d4;
    puStack_a0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_98,auStack_90);
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x104e5ca00;
    puStack_c8 = &UNK_110842c58;
    _objc_copyWeak(auStack_c0,auStack_90);
    puStack_108 = puVar3;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x104e5ca48;
    puStack_f0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010c002380(puVar5);
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aea60(puVar5);
    _objc_release(uVar2);
    _objc_copyWeak(auStack_110,auStack_90);
    func_0x00010c1d2680(puVar5);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aeca0(puVar5);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195420(puVar5);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000108c7c8ec(param_13);
    func_0x00010c0df840(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfa40(puVar5);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000108c7c934(param_13);
    func_0x00010c0df840(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfa20(puVar5);
    _objc_release(puVar3);
    uVar2 = param_12;
    func_0x00010bf3f680(param_12);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17df40(puVar5);
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b13e8;
    _objc_alloc();
    uVar6 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271499c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271499c) = puVar3;
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_110);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release(lVar4);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e5c9d4; end: 104e5cac7;  */

void FUN_104e5c9d4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be614e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5cac8; end: 104e5cb37; -[SCPostRegInviteContactsComposerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5cac8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = (long)_DAT_11271499c;
  func_0x00010c222380(param_1,param_2,*(undefined8 *)(param_1 + lVar1));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104e5cb38;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010c2a1520(*(undefined8 *)(param_1 + lVar1),param_2,&puStack_48);
  return;
}



/* Entry: 104e5cb38; end: 104e5cb4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5cb38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271499c),
             PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 104e5cb4c; end: 104e5cbd7; -[SCPostRegInviteContactsComposerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5cb4c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4868;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c24fc40(*(undefined8 *)(param_1 + _DAT_112714980));
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_1127149a0) = puVar2;
  _objc_release(puVar1);
  return;
}



/* Entry: 104e5cbd8; end: 104e5cc83; -[SCPostRegInviteContactsComposerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5cbd8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4868;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271498c);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e5cc84; end: 104e5ccd3; -[SCPostRegInviteContactsComposerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5cc84(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4868;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c0a3d00(*(undefined8 *)(param_1 + _DAT_112714984));
  return;
}



/* Entry: 104e5ccd4; end: 104e5ccd7; -[SCPostRegInviteContactsComposerViewController preferredStatusBarStyle] */

undefined8 FUN_104e5ccd4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 104e5ccd8; end: 104e5cce3; -[SCPostRegInviteContactsComposerViewController supportedInterfaceOrientations] */

undefined8 FUN_104e5ccd8(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 104e5cce4; end: 104e5ccef; -[SCPostRegInviteContactsComposerViewController defaultProjectNameV2] */

undefined ** FUN_104e5cce4(void)

{
  return &PTR____CFConstantStringClassReference_110db7938;
}



/* Entry: 104e5ccf0; end: 104e5ccf7; -[SCPostRegInviteContactsComposerViewController pageViewName] */

undefined8 FUN_104e5ccf0(void)

{
  return 0xf6;
}



/* Entry: 104e5ccf8; end: 104e5cd9f; -[SCPostRegInviteContactsComposerViewController _moveToNextRegScreen] */

void FUN_104e5ccf8(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104e5cda0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e5cda0; end: 104e5cdcb;  */

void FUN_104e5cda0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be09680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5cdcc; end: 104e5cdcf; -[SCPostRegInviteContactsComposerViewController _inviteContacts:] */

void FUN_104e5cdcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendInviteMessagesIfNeeded__1125856f0);
  return;
}



/* Entry: 104e5cdd0; end: 104e5ce4b; -[SCPostRegInviteContactsComposerViewController _end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5cdd0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  func_0x00010c0a3ce0(*(undefined8 *)(param_1 + _DAT_112714984));
  param_1 = param_1 + _DAT_11271497c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c06a680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5ce4c; end: 104e5ced3; -[SCPostRegInviteContactsComposerViewController _showSMSSelectionRateLimitDialog] */

void FUN_104e5ce4c(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104e5ced4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e5ced4; end: 104e5d02b;  */

void FUN_104e5ced4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x000104e5e12c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000104e5e0fc();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000104e5e114();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104e5d02c; end: 104e5d03b;  */

void FUN_104e5d02c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104e5d03c; end: 104e5d25f; -[SCPostRegInviteContactsComposerViewController _sendInviteMessagesIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5d03c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    if (puVar2 != (undefined *)0x0) {
      lVar6 = *plStack_120;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(param_3);
          }
          lVar4 = *(long *)(lStack_128 + (long)puVar8 * 8);
          lVar3 = lVar4;
          func_0x00010c0faaa0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 != 0) {
            lVar7 = lVar4;
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar3);
            if (lVar7 != 0) {
              lVar3 = lVar4;
              func_0x00010c0d4f60(lVar4);
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar4;
              func_0x00010c0faaa0(lVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0560(puVar1,param_2,lVar3,lVar7);
              _objc_release(lVar7);
              _objc_release(lVar3);
              lVar7 = (long)_DAT_112714984;
              uVar5 = *(undefined8 *)(param_1 + lVar7);
              lVar3 = lVar4;
              func_0x00010c0faaa0(lVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bef7a60(uVar5,param_2,lVar3);
              _objc_release(lVar3);
              uVar5 = *(undefined8 *)(param_1 + lVar7);
              func_0x00010c0faaa0(lVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bef7a40(uVar5,param_2,lVar4);
              _objc_release(lVar4);
            }
          }
          puVar8 = puVar8 + 1;
        } while (puVar2 != puVar8);
        puVar2 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(param_3);
    puVar2 = puVar1;
    func_0x00010be9f560(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_3 + _DAT_112714998);
  _objc_retain(puVar2);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06a6e0();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 104e5d260; end: 104e5d2c3; -[SCPostRegInviteContactsComposerViewController _sendInviteRequestToFriendActionService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5d260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112714998);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06a6e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e5d2c4; end: 104e5d2d3; -[SCPostRegInviteContactsComposerViewController _onInviteContactsImpressionWithPhone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5d2c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef7a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112714984),
             PTR_s_addContactSeenWithPhoneNumber__11259b828);
  return;
}



/* Entry: 104e5d2d4; end: 104e5d3af; -[SCPostRegInviteContactsComposerViewController _subscribeToContactsAvailableObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5d2d4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112714990);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e5d3b0; end: 104e5d3f7;  */

void FUN_104e5d3b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff2a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5d3f8; end: 104e5d42b; -[SCPostRegInviteContactsComposerViewController _didReceiveContactsAvailable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5d3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112714984);
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1817d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setContactsAvailable__11263e010,param_3);
  return;
}



/* Entry: 104e5d42c; end: 104e5d4e7; -[SCPostRegInviteContactsComposerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5d42c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112714998,0);
  _objc_storeStrong(param_1 + _DAT_1127149a4,0);
  _objc_storeStrong(param_1 + _DAT_112714988,0);
  _objc_storeStrong(param_1 + _DAT_112714984,0);
  _objc_storeStrong(param_1 + _DAT_11271499c,0);
  _objc_storeStrong(param_1 + _DAT_112714990,0);
  _objc_storeStrong(param_1 + _DAT_11271498c,0);
  _objc_storeStrong(param_1 + _DAT_1127149a8,0);
  _objc_storeStrong(param_1 + _DAT_112714980,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271497c);
  return;
}



/* Entry: 104e5d4e8; end: 104e5da77; -[SCPostRegInviteContactsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5d4e8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126b13f0;
  _objc_alloc();
  lVar23 = param_1 + _DAT_1127149ac;
  _objc_loadWeakRetained(lVar23);
  lVar2 = lVar23;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0184a0();
  _objc_release(lVar2);
  _objc_release(lVar23);
  lVar23 = (long)_DAT_1127149b0;
  uVar3 = param_1 + lVar23;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010bfd5ac0();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    param_1 = param_1 + lVar23;
    _objc_loadWeakRetained(param_1);
    lVar23 = param_1;
    func_0x00010c06a6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06a660();
    _objc_release(lVar23);
    _objc_release(param_1);
    func_0x00010c0a8f40(puVar1);
  }
  else {
    lVar24 = (long)_DAT_1127149b4;
    lVar2 = param_1 + lVar24;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_1127149b8;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar5;
    func_0x000108c7c620(lVar5,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    uVar3 = param_1 + lVar24;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x000108c7c9c4();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (((int)lVar7 == 0) || ((uVar8 & 1) == 0)) {
      puVar19 = (undefined *)(param_1 + lVar23);
      _objc_loadWeakRetained(puVar19);
      puVar20 = puVar19;
      func_0x00010c06a6a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06a660();
      _objc_release(puVar20);
    }
    else {
      puVar19 = PTR_PTR_1126b13f8;
      _objc_alloc();
      lVar2 = param_1 + _DAT_1127149bc;
      _objc_loadWeakRetained(lVar2);
      lVar6 = lVar2;
      func_0x00010c104ee0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c037d20();
      _objc_release(lVar6);
      _objc_release(lVar2);
      _objc_initWeak(auStack_80,param_1);
      puVar20 = PTR_PTR_1126aeaf8;
      _objc_alloc();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_104e5da78;
      puStack_90 = &UNK_110849680;
      _objc_copyWeak(auStack_88,auStack_80);
      _objc_copyWeak(auStack_b0,auStack_80);
      func_0x00010c0311a0();
      lVar2 = param_1 + lVar24;
      _objc_loadWeakRetained();
      lVar6 = lVar2;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067f00();
      _objc_release(lVar6);
      _objc_release(lVar2);
      puVar9 = PTR_PTR_1126b1400;
      _objc_alloc();
      lVar2 = param_1 + lVar23;
      _objc_loadWeakRetained();
      lVar10 = lVar2;
      func_0x00010c06a6a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1 + _DAT_1127149c0;
      _objc_loadWeakRetained();
      lVar11 = lVar6;
      func_0x00010bf49be0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1 + _DAT_1127149c4;
      _objc_loadWeakRetained();
      lVar12 = lVar5;
      func_0x00010bf5f860();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1 + _DAT_1127149c8;
      _objc_loadWeakRetained();
      lVar13 = lVar7;
      func_0x00010c295440();
      _objc_retainAutoreleasedReturnValue();
      if (param_1 == 0) {
        lVar21 = 0;
      }
      else {
        lVar21 = param_1 + _DAT_1127149e0;
        _objc_loadWeakRetained();
      }
      lVar14 = lVar21;
      func_0x00010c06a600();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_1 + _DAT_1127149cc;
      _objc_loadWeakRetained();
      lVar16 = lVar15;
      func_0x00010bf4aa00();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_1 + _DAT_1127149d0;
      _objc_loadWeakRetained();
      lVar24 = param_1 + lVar24;
      _objc_loadWeakRetained();
      lVar18 = lVar24;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01ea40();
      uVar22 = *(undefined8 *)(param_1 + _DAT_1127149d4);
      *(undefined **)(param_1 + _DAT_1127149d4) = puVar9;
      _objc_release(uVar22);
      _objc_release(lVar18);
      _objc_release(lVar24);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar21);
      _objc_release(lVar13);
      _objc_release(lVar7);
      _objc_release(lVar12);
      _objc_release(lVar5);
      _objc_release(lVar11);
      _objc_release(lVar6);
      _objc_release(lVar10);
      _objc_release(lVar2);
      param_1 = param_1 + lVar23;
      _objc_loadWeakRetained(param_1);
      lVar23 = param_1;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0c980();
      _objc_release(lVar23);
      _objc_release(param_1);
      _objc_release(puVar20);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
    }
    _objc_release(puVar19);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 104e5da78; end: 104e5daeb;  */

void FUN_104e5da78(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67ce0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5daec; end: 104e5db03; -[SCPostRegInviteContactsEntryPoint _onAttachInviteContactsViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5daec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127149d4),
             PTR_s_presentViewController_animated_c_112621588,param_3,1,0);
  return;
}



/* Entry: 104e5db04; end: 104e5db1b; -[SCPostRegInviteContactsEntryPoint _onDetachInviteContactsViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5db04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127149d4),
             PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104e5db1c; end: 104e5dbff; -[SCPostRegInviteContactsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5db1c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127149cc);
  _objc_destroyWeak(param_1 + _DAT_1127149d0);
  _objc_destroyWeak(param_1 + _DAT_1127149b4);
  _objc_destroyWeak(param_1 + _DAT_1127149e8);
  _objc_destroyWeak(param_1 + _DAT_1127149e4);
  _objc_destroyWeak(param_1 + _DAT_1127149ac);
  _objc_destroyWeak(param_1 + _DAT_1127149bc);
  _objc_destroyWeak(param_1 + _DAT_1127149e0);
  _objc_destroyWeak(param_1 + _DAT_1127149c0);
  _objc_destroyWeak(param_1 + _DAT_1127149b8);
  _objc_destroyWeak(param_1 + _DAT_1127149c8);
  _objc_destroyWeak(param_1 + _DAT_1127149c4);
  _objc_destroyWeak(param_1 + _DAT_1127149b0);
  _objc_destroyWeak(param_1 + _DAT_1127149dc);
  _objc_destroyWeak(param_1 + _DAT_1127149d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127149d4,0);
  return;
}



/* Entry: 104e5dc00; end: 104e5dc9f; -[SCPostRegInviteContactsGrapheneLogger initWithGrapheneRegistry:] */

undefined1 * FUN_104e5dc00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4870;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06a6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e5dca0; end: 104e5dce7; -[SCPostRegInviteContactsGrapheneLogger logInviteContactsPageAutoSkippedNoContacts] */

void FUN_104e5dca0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1408;
  func_0x00010c23e680(PTR_PTR_1126b1408);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e5dce8; end: 104e5dd2f; -[SCPostRegInviteContactsGrapheneLogger logInviteContactsPageView] */

void FUN_104e5dce8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1408;
  func_0x00010c0f1f80(PTR_PTR_1126b1408);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e5dd30; end: 104e5dd83; -[SCPostRegInviteContactsGrapheneLogger logInviteContactsAvailable:] */

void FUN_104e5dd30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1408;
  func_0x00010bf4a8e0(PTR_PTR_1126b1408);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e5dd84; end: 104e5ddd7; -[SCPostRegInviteContactsGrapheneLogger logInviteContactsSeen:] */

void FUN_104e5dd84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1408;
  func_0x00010bf4aaa0(PTR_PTR_1126b1408);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e5ddd8; end: 104e5de2b; -[SCPostRegInviteContactsGrapheneLogger logInviteContactsAttempted:] */

void FUN_104e5ddd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1408;
  func_0x00010bf4a9e0(PTR_PTR_1126b1408);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e5de2c; end: 104e5de37; -[SCPostRegInviteContactsGrapheneLogger .cxx_destruct] */

void FUN_104e5de2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e5de38; end: 104e5df27; -[SCPostRegInviteContactsLogger initWithPostRegistrationLogger:grapheneLogger:] */

undefined1 *
FUN_104e5de38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4878;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e5df28; end: 104e5df8b; -[SCPostRegInviteContactsLogger logContactsInvitesPageView] */

void FUN_104e5df28(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ad9c0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0a8f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_logInviteContactsPageView_112607de8);
  return;
}



/* Entry: 104e5df8c; end: 104e5e06f; -[SCPostRegInviteContactsLogger logContactsInvitesPageEnd] */

void FUN_104e5df8c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(*(undefined8 *)(param_2 + 0x18));
  func_0x00010bf529e0(*(undefined8 *)(param_2 + 0x20));
  func_0x00010bf529e0(*(undefined8 *)(param_2 + 0x28));
  func_0x00010c0ad9a0(param_1,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bf529e0(*(undefined8 *)(param_2 + 0x28));
  func_0x00010c0a8f00(uVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bf529e0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0a8f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_logInviteContactsSeen__112607df0,uVar2);
  return;
}



/* Entry: 104e5e070; end: 104e5e07b; -[SCPostRegInviteContactsLogger setContactsAvailable:] */

void FUN_104e5e070(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c0a8f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_logInviteContactsAvailable__112607dd8);
  return;
}



/* Entry: 104e5e07c; end: 104e5e083; -[SCPostRegInviteContactsLogger addContactSeenWithPhoneNumber:] */

void FUN_104e5e07c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 104e5e084; end: 104e5e08b; -[SCPostRegInviteContactsLogger addContactsSelectedWithPhoneNumber:] */

void FUN_104e5e084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 104e5e08c; end: 104e5e093; -[SCPostRegInviteContactsLogger addContactsInviteShareAttemptWithPhoneNumber:] */

void FUN_104e5e08c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 104e5e094; end: 104e5e09b; -[SCPostRegInviteContactsLogger logContactsInviteAutoSkippedNoContacts] */

void FUN_104e5e094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_logInviteContactsPageAutoSkipped_112607de0);
  return;
}



/* Entry: 104e5e09c; end: 104e5e0fb; -[SCPostRegInviteContactsLogger .cxx_destruct] */

void FUN_104e5e09c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e5e0fc; end: 104e5e143;  */

void FUN_104e5e0fc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db7978;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db7978,
                      &PTR____CFConstantStringClassReference_110db7998,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104e5e144; end: 104e5e16f; +[SCGrapheneInviteContactsMetric skippedNoContacts] */

void FUN_104e5e144(void)

{
  _objc_alloc(PTR_PTR_1126b1408);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e5e170; end: 104e5e19b; +[SCGrapheneInviteContactsMetric pageView] */

void FUN_104e5e170(void)

{
  _objc_alloc(PTR_PTR_1126b1408);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e5e19c; end: 104e5e1c7; +[SCGrapheneInviteContactsMetric contactsAvailable] */

void FUN_104e5e19c(void)

{
  _objc_alloc(PTR_PTR_1126b1408);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e5e1c8; end: 104e5e1f3; +[SCGrapheneInviteContactsMetric contactsSeen] */

void FUN_104e5e1c8(void)

{
  _objc_alloc(PTR_PTR_1126b1408);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e5e1f4; end: 104e5e21f; +[SCGrapheneInviteContactsMetric contactsInviteAttempted] */

void FUN_104e5e1f4(void)

{
  _objc_alloc(PTR_PTR_1126b1408);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e5e220; end: 104e5e2bf; -[SCGrapheneInviteContactsMetric description] */

void FUN_104e5e220(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db79f8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110db79f8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e4880;
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



/* Entry: 104e5e2c0; end: 104e5e42b; -[SCGrapheneRegistry inviteContactsGraphene] */

void FUN_104e5e2c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104e5e348;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b90c8 != -1) {
    func_0x00010002a2fc(0x1136b90c8,&puStack_48);
  }
  uVar1 = uRam00000001136b90c0;
  _objc_retain(uRam00000001136b90c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e5e42c; end: 104e5e437; +[SCCInviteContactsView componentPath] */

undefined ** FUN_104e5e42c(void)

{
  return &PTR____CFConstantStringClassReference_110db7ab8;
}



/* Entry: 104e5e438; end: 104e5e46b; -[SCCInviteContactsView initWithViewModel:componentContext:runtime:] */

void FUN_104e5e438(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4888;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 104e5e46c; end: 104e5e4bb; -[SCCInviteContactsView setViewModel:] */

void FUN_104e5e46c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5e4bc; end: 104e5e4ff; -[SCCInviteContactsView viewModel] */

void FUN_104e5e4bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e5e500; end: 104e5e5fb; -[SCCInviteContactsContext initWithContactAddressBookStore:moveToNextRegScreen:inviteContacts:showMaxInviteReachDialog:] */

undefined8 *
FUN_104e5e500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar2 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  puStack_48 = PTR_PTR_1126e4890;
  puVar3 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 104e5e5fc; end: 104e5e61b; +[SCCInviteContactsContext valdiMarshallableObjectDescriptor] */

void FUN_104e5e5fc(undefined8 *param_1)

{
  *param_1 = &PTR_s_contactAddressBookStore_1108540d0;
  param_1[1] = &PTR_s_SCCContactAddressBookEntryStorin_110854238;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e5e61c; end: 104e5e6bf; -[SCPostRegInviteContactsScope initWithUiContainer:inviteContactsDelegate:hasContactsToInvite:] */

undefined1 *
FUN_104e5e61c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4898;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e5e6c0; end: 104e5e6c7; -[SCPostRegInviteContactsScope uiContainer] */

undefined8 FUN_104e5e6c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104e5e6c8; end: 104e5e6df; -[SCPostRegInviteContactsScope inviteContactsDelegate] */

void FUN_104e5e6c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e5e6e0; end: 104e5e6e7; -[SCPostRegInviteContactsScope hasContactsToInvite] */

undefined1 FUN_104e5e6e0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104e5e6e8; end: 104e5e713; -[SCPostRegInviteContactsScope .cxx_destruct] */

void FUN_104e5e6e8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104e5e714; end: 104e5e8c3; -[SCSuggestionTakeoverOnCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5e714(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112714a2c;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar10;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  puVar2 = PTR_PTR_1126b1410;
  _objc_alloc();
  lVar10 = param_1 + _DAT_112714a18;
  _objc_loadWeakRetained();
  lVar3 = lVar10;
  func_0x00010bfbb580();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112714a1c;
  lVar4 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010befd260();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + _DAT_112714a20);
  lVar6 = param_1 + _DAT_112714a38;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1 + _DAT_112714a24;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c050560(puVar2,param_2,lVar1,lVar3,lVar5,uVar11,lVar6,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar10);
  param_1 = param_1 + lVar9;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e5e8c4; end: 104e5e953; -[SCSuggestionTakeoverOnCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5e8c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714a38);
  _objc_storeStrong(param_1 + _DAT_112714a20,0);
  _objc_destroyWeak(param_1 + _DAT_112714a18);
  _objc_destroyWeak(param_1 + _DAT_112714a24);
  _objc_destroyWeak(param_1 + _DAT_112714a34);
  _objc_destroyWeak(param_1 + _DAT_112714a30);
  _objc_destroyWeak(param_1 + _DAT_112714a2c);
  _objc_destroyWeak(param_1 + _DAT_112714a1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112714a28);
  return;
}


