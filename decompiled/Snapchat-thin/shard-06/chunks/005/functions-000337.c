/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104988808; end: 104988a43; -[FBSDKSuggestedEventsIndexer logSuggestedEvent:text:denseFeature:] */

void FUN_104988808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar2 = PTR_PTR_1126add58;
  if (param_5 != 0) {
    ppuStack_88 = &PTR____CFConstantStringClassReference_110da6198;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110da61b8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_78 = param_4;
    lStack_70 = param_5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_78,&ppuStack_88,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc19c0(puVar2,param_2,puVar1,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x0) {
      uVar3 = param_1;
      func_0x00010bfcde20(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c227f80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010bf05260();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da61d8);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110dd1b78;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110dceed8;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      uStack_98 = param_3;
      puStack_90 = puVar2;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_98,&ppuStack_a8,2
                         );
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010bf56560(uVar3,param_2,puVar1,puVar5,
                          &PTR____CFConstantStringClassReference_110dada18,0,param_7,param_8,uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar1);
      _objc_release(uVar4);
      _objc_release(param_1);
      _objc_release(uVar3);
      func_0x00010c251a80(uVar6,param_2,&PTR___NSConcreteGlobalBlock_1107b9e60);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar6);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104988a44; end: 104988a47;  */

void FUN_104988a44(void)

{
  return;
}



/* Entry: 104988a48; end: 104988a4f; -[FBSDKSuggestedEventsIndexer graphRequestFactory] */

undefined8 FUN_104988a48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104988a50; end: 104988a57; -[FBSDKSuggestedEventsIndexer serverConfigurationProvider] */

undefined8 FUN_104988a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104988a58; end: 104988a5f; -[FBSDKSuggestedEventsIndexer swizzler] */

undefined8 FUN_104988a58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104988a60; end: 104988a67; -[FBSDKSuggestedEventsIndexer settings] */

undefined8 FUN_104988a60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104988a68; end: 104988a6f; -[FBSDKSuggestedEventsIndexer eventLogger] */

undefined8 FUN_104988a68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104988a70; end: 104988a77; -[FBSDKSuggestedEventsIndexer featureExtractor] */

undefined8 FUN_104988a70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104988a78; end: 104988a7f; -[FBSDKSuggestedEventsIndexer optInEvents] */

undefined8 FUN_104988a78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104988a80; end: 104988a87; -[FBSDKSuggestedEventsIndexer unconfirmedEvents] */

undefined8 FUN_104988a80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104988a88; end: 104988a9f; -[FBSDKSuggestedEventsIndexer eventProcessor] */

void FUN_104988a88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104988aa0; end: 104988b1f; -[FBSDKSuggestedEventsIndexer .cxx_destruct] */

void FUN_104988aa0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104988b20; end: 104988bb3; +[FBSDKSwizzler initialize] */

void FUN_104988b20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  char *pcVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
  func_0x00010c0ba140(PTR__OBJC_CLASS___NSMapTable_1126b4428,param_2,0x102,0x200);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011369d518;
  puRam000000011369d518 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011369d520;
  puRam000000011369d520 = puVar2;
  _objc_release(uVar1);
  pcVar3 = "com.facebook.swizzler";
  _dispatch_queue_create("com.facebook.swizzler",0);
  uVar1 = pcRam000000011369d528;
  pcRam000000011369d528 = pcVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c13a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126adfa8,PTR_s_resolveConflict_11262c3c8);
  return;
}



/* Entry: 104988bb4; end: 104988c23; +[FBSDKSwizzler resolveConflict] */

void FUN_104988bb4(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  
  pcVar2 = "MPSwizzler";
  _objc_lookUpClass();
  puVar1 = PTR_s_swizzleSelector_onClass_withBloc_112677070;
  if (pcVar2 != (char *)0x0) {
    _class_getClassMethod();
    _class_getClassMethod(param_1,puVar1);
    _method_getImplementation();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__method_setImplementation_11034d1a0)(pcVar2,param_1);
    return;
  }
  return;
}



/* Entry: 104988c24; end: 104988cb3; +[FBSDKSwizzler printSwizzles] */

void FUN_104988c24(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = lRam000000011369d518;
  func_0x00010c0dfe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d9ba0();
  _objc_retainAutoreleasedReturnValue();
  while (lVar2 != 0) {
    _NSLog(&PTR____CFConstantStringClassReference_110dc4658);
    lVar3 = lVar1;
    func_0x00010c0d9ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104988cb4; end: 104988cbf; +[FBSDKSwizzler swizzleForMethod:] */

void FUN_104988cb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011369d518,PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 104988cc0; end: 104988ccb; +[FBSDKSwizzler removeSwizzleForMethod:] */

void FUN_104988cc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011369d518,PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 104988ccc; end: 104988cd7; +[FBSDKSwizzler setSwizzle:forMethod:] */

void FUN_104988ccc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011369d518,PTR_s_setObject_forKey__112651b80);
  return;
}



/* Entry: 104988cd8; end: 104988d5b; +[FBSDKSwizzler isLocallyDefinedMethod:onClass:] */

bool FUN_104988cd8(undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  uint uStack_24;
  
  _class_copyMethodList(param_4,&uStack_24);
  if (uStack_24 == 0) {
    bVar2 = false;
  }
  else if (*param_4 == param_3) {
    bVar2 = true;
  }
  else {
    uVar1 = 1;
    do {
      uVar3 = uVar1;
      if (uStack_24 == uVar3) break;
      uVar1 = uVar3 + 1;
    } while (param_4[uVar3] != param_3);
    bVar2 = uVar3 < uStack_24;
  }
  _free();
  return bVar2;
}



/* Entry: 104988d5c; end: 104988d63; +[FBSDKSwizzler swizzleSelector:onClass:withBlock:named:] */

void FUN_104988d5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c265950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_swizzleSelector_onClass_withBloc_112677078);
  return;
}



/* Entry: 104988d64; end: 104988e33; +[FBSDKSwizzler swizzleSelector:onClass:withBlock:named:async:] */

void FUN_104988d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104988e34;
  puStack_68 = &UNK_1107b9ea0;
  uStack_60 = param_6;
  uStack_58 = param_5;
  uStack_50 = param_4;
  uStack_48 = param_3;
  _objc_retain();
  _objc_retain(param_5);
  func_0x00010c265960(param_1,param_2,&puStack_80,param_7);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 104988e34; end: 104989153;  */

void FUN_104988e34(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  code *pcVar10;
  code *pcVar11;
  
  lVar3 = *(long *)(param_1 + 0x30);
  _class_getInstanceMethod(lVar3,*(undefined8 *)(param_1 + 0x38));
  if (lVar3 == 0) {
    return;
  }
  lVar4 = lVar3;
  _method_getNumberOfArguments();
  uVar1 = (int)lVar4 - 2;
  if (3 < uVar1) {
    return;
  }
  puVar5 = PTR_PTR_1126adfa8;
  func_0x00010c076e00();
  pcVar10 = (code *)(&PTR_FUN_1107b9e80)[uVar1];
  pcVar11 = pcVar10;
  if ((int)lVar4 == 4) {
    lVar4 = lVar3;
    _method_copyArgumentType(lVar3,2);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    iVar2 = 0x10da61f8;
    func_0x00010bf4bb00();
    _objc_release(puVar7);
    pcVar11 = FUN_104989154;
    if (iVar2 == 0) {
      pcVar11 = pcVar10;
    }
    _free(lVar4);
    _objc_release(puVar6);
  }
  puVar6 = PTR_PTR_1126adfa8;
  func_0x00010c265900();
  _objc_retainAutoreleasedReturnValue();
  if ((int)puVar5 == 0) {
    if (puVar6 == (undefined *)0x0) {
      _method_getImplementation(lVar3);
    }
    else {
      func_0x00010c0ed700(puVar6);
    }
    uVar9 = *(ulong *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    lVar4 = lVar3;
    _method_getTypeEncoding(lVar3);
    _class_addMethod(uVar9,uVar8,pcVar11,lVar4);
    if ((uVar9 & 1) == 0) goto LAB_104989088;
    lVar4 = *(long *)(param_1 + 0x30);
    _class_getInstanceMethod(lVar4,*(undefined8 *)(param_1 + 0x38));
    if (lVar3 == lVar4) goto LAB_104989088;
    puVar5 = PTR_PTR_1126adfb0;
    _objc_alloc(PTR_PTR_1126adfb0);
    func_0x00010bff8d20();
    func_0x00010c210ae0(PTR_PTR_1126adfa8);
  }
  else {
    if (puVar6 == (undefined *)0x0) {
      _method_getImplementation(lVar3);
      _method_setImplementation(lVar3,pcVar11);
      puVar6 = PTR_PTR_1126adfb0;
      _objc_alloc(PTR_PTR_1126adfb0);
      func_0x00010bff8d20();
      func_0x00010c210ae0(PTR_PTR_1126adfa8);
      goto LAB_104989088;
    }
    puVar5 = puVar6;
    func_0x00010bf1dae0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    _objc_retainBlock(uVar8);
    func_0x00010c1d0560(puVar5);
    _objc_release(uVar8);
  }
  _objc_release(puVar5);
LAB_104989088:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 104989154; end: 1049892c3;  */

void FUN_104989154(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  
  _objc_retain();
  _objc_retain(param_4);
  pcVar2 = param_1;
  FUN_10498a0b0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  func_0x00010bf1a4e0();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar3 != (code *)0x0) {
    pcVar4 = pcVar3;
    func_0x00010c0ed700();
    (*pcVar4)(param_1,param_2,param_3,param_4);
    pcVar4 = pcVar3;
    func_0x00010bf1dae0();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    func_0x00010c0dfe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar4);
    pcVar4 = pcVar5;
    func_0x00010c0d9ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126adfa8;
    while (PTR_PTR_1126adfa8 = puVar1, pcVar4 != (code *)0x0) {
      (**(code **)(pcVar4 + 0x10))(pcVar4,param_1,param_2,param_3,param_4);
      pcVar6 = pcVar5;
      func_0x00010c0d9ba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar4);
      pcVar4 = pcVar6;
      puVar1 = PTR_PTR_1126adfa8;
    }
    func_0x00010bf1a4c0(pcVar2);
    func_0x00010c0dfd00(puVar1);
    _objc_release(pcVar5);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049892c4; end: 10498941f; +[FBSDKSwizzler unswizzleSelector:onClass:named:] */

void FUN_1049892c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _class_getInstanceMethod(param_4,param_3);
  puVar1 = PTR_PTR_1126adfa8;
  func_0x00010c265900();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    if (param_5 != 0) {
      puVar2 = puVar1;
      func_0x00010bf1dae0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0();
      _objc_release(puVar2);
      puVar2 = puVar1;
      func_0x00010bf1dae0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf529e0();
      _objc_release(puVar2);
      if (puVar3 != (undefined *)0x0) goto LAB_104989390;
    }
    puVar2 = puVar1;
    func_0x00010c0ed700(puVar1);
    _method_setImplementation(param_4,puVar2);
    func_0x00010c12e7c0(PTR_PTR_1126adfa8);
  }
LAB_104989390:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104989420; end: 104989517; +[FBSDKSwizzler object:ofClass:addSelector:] */

void FUN_104989420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da6258);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  uVar2 = uRam000000011369d520;
  _objc_retain(uRam000000011369d520);
  _objc_sync_enter();
  func_0x00010befa120(uRam000000011369d520,param_2,puVar1);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104989518; end: 10498960f; +[FBSDKSwizzler object:ofClass:removeSelector:] */

void FUN_104989518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da6258);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  uVar2 = uRam000000011369d520;
  _objc_retain(uRam000000011369d520);
  _objc_sync_enter();
  func_0x00010c12d360(uRam000000011369d520,param_2,puVar1);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104989610; end: 1049896d7; +[FBSDKSwizzler object:ofClass:isCallingSelector:] */

undefined8
FUN_104989610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da6258);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar2 = uRam000000011369d520;
  func_0x00010bf4b900(uRam000000011369d520,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 1049896d8; end: 1049896f7; +[FBSDKSwizzler swizzleSelectorWithBlock:async:] */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_1049896d8(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  
  uVar1 = uRam000000011369d528;
  if (param_4 != 0) {
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    if ((bRam0000000113817cd8 & 1) == 0) {
      iVar2 = 0x13817cd8;
      func_0x000107c60e48();
      if (iVar2 != 0) {
        pcVar3 = (code *)0xffffffffffffffff;
        func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
        pcRam0000000113817cd0 = pcVar3;
        func_0x000107c60e4c(0x113817cd8);
      }
    }
    pcVar3 = pcRam0000000113817cd0;
    func_0x00010002a3a8(param_3);
    func_0x000107c61180();
    (*pcVar3)(uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001049896f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1049896f8; end: 104989773; -[FBSDKSwizzle init] */

undefined1 * FUN_1049896f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3468;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c0ba140(PTR__OBJC_CLASS___NSMapTable_1126b4428);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171e40(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104989774; end: 10498984f; -[FBSDKSwizzle initWithBlock:named:forClass:selector:originalMethod:withNumArgs:] */

long FUN_104989774(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfee200();
  if (param_1 != 0) {
    func_0x00010c17c680(param_1,param_2,param_5);
    func_0x00010c1fbb60(param_1,param_2,param_6);
    func_0x00010c1cea00(param_1,param_2,param_8);
    func_0x00010c1d6680(param_1,param_2,param_7);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = param_3;
    _objc_retainBlock(param_3);
    func_0x00010c1d0560(uVar2,param_2,uVar1,param_4);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104989850; end: 1049899bb; -[FBSDKSwizzle description] */

void FUN_104989850(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0865c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d9ba0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
    do {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0dff20(uVar3,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar7;
      func_0x00010c25cde0(ppuVar7,param_2,&PTR____CFConstantStringClassReference_110da6278);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      _objc_release(uVar3);
      lVar5 = lVar1;
      func_0x00010c0d9ba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar5;
      ppuVar7 = ppuVar4;
    } while (lVar5 != 0);
  }
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_1;
  func_0x00010bf39c40();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15ac20();
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110da6298);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1049899bc; end: 1049899c3; -[FBSDKSwizzle class] */

undefined8 FUN_1049899bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1049899c4; end: 1049899cb; -[FBSDKSwizzle setClass:] */

void FUN_1049899c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1049899cc; end: 1049899d3; -[FBSDKSwizzle selector] */

undefined8 FUN_1049899cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1049899d4; end: 1049899db; -[FBSDKSwizzle setSelector:] */

void FUN_1049899d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1049899dc; end: 1049899e3; -[FBSDKSwizzle originalMethod] */

undefined8 FUN_1049899dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1049899e4; end: 1049899eb; -[FBSDKSwizzle setOriginalMethod:] */

void FUN_1049899e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 1049899ec; end: 1049899f3; -[FBSDKSwizzle numArgs] */

undefined4 FUN_1049899ec(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1049899f4; end: 1049899fb; -[FBSDKSwizzle setNumArgs:] */

void FUN_1049899f4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1049899fc; end: 104989a03; -[FBSDKSwizzle blocks] */

undefined8 FUN_1049899fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104989a04; end: 104989a0b; -[FBSDKSwizzle setBlocks:] */

void FUN_104989a04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104989a0c; end: 104989a17; -[FBSDKSwizzle .cxx_destruct] */

void FUN_104989a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 104989a18; end: 104989a9b; -[FBSDKSwizzlingOnClass initWithSwizzle:class:] */

undefined1 * FUN_104989a18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e3470;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c170280(puVar1);
    func_0x00010c170220(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104989a9c; end: 104989aa3; -[FBSDKSwizzlingOnClass bindingSwizzle] */

undefined8 FUN_104989a9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104989aa4; end: 104989aaf; -[FBSDKSwizzlingOnClass setBindingSwizzle:] */

void FUN_104989aa4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 104989ab0; end: 104989ab7; -[FBSDKSwizzlingOnClass bindingClass] */

undefined8 FUN_104989ab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104989ab8; end: 104989ac3; -[FBSDKSwizzlingOnClass setBindingClass:] */

void FUN_104989ab8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 104989ac4; end: 104989af3; -[FBSDKSwizzlingOnClass .cxx_destruct] */

void FUN_104989ac4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104989af4; end: 104989d87;  */

void FUN_104989af4(code *param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  
  _objc_retain();
  pcVar2 = param_1;
  FUN_10498a0b0();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  func_0x00010bf1a4e0();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar3 != (code *)0x0) {
    pcVar4 = pcVar3;
    func_0x00010c0ed700();
    (*pcVar4)(param_1,param_2);
    pcVar4 = pcVar3;
    func_0x00010bf1dae0();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    func_0x00010c0dfe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar4);
    pcVar4 = pcVar5;
    func_0x00010c0d9ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126adfa8;
    while (PTR_PTR_1126adfa8 = puVar1, pcVar4 != (code *)0x0) {
      (**(code **)(pcVar4 + 0x10))(pcVar4,param_1,param_2);
      pcVar6 = pcVar5;
      func_0x00010c0d9ba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar4);
      pcVar4 = pcVar6;
      puVar1 = PTR_PTR_1126adfa8;
    }
    func_0x00010bf1a4c0(pcVar2);
    func_0x00010c0dfd00(puVar1);
    _objc_release(pcVar5);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104989d88; end: 10498a0af;  */

void FUN_104989d88(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  pcVar2 = param_1;
  FUN_10498a0b0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  func_0x00010bf1a4e0();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar3 != (code *)0x0) {
    pcVar4 = pcVar3;
    func_0x00010c0ed700();
    (*pcVar4)(param_1,param_2,param_3,param_4);
    pcVar4 = pcVar3;
    func_0x00010bf1dae0();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    func_0x00010c0dfe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar4);
    pcVar4 = pcVar5;
    func_0x00010c0d9ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126adfa8;
    while (PTR_PTR_1126adfa8 = puVar1, pcVar4 != (code *)0x0) {
      (**(code **)(pcVar4 + 0x10))(pcVar4,param_1,param_2,param_3,param_4);
      pcVar6 = pcVar5;
      func_0x00010c0d9ba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar4);
      pcVar4 = pcVar6;
      puVar1 = PTR_PTR_1126adfa8;
    }
    func_0x00010bf1a4c0(pcVar2);
    func_0x00010c0dfd00(puVar1);
    _objc_release(pcVar5);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10498a0b0; end: 10498a1ef;  */

/* WARNING: Removing unreachable block (ram,0x00010498a170) */

void FUN_10498a0b0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain();
  func_0x00010bf39c40();
  _class_getInstanceMethod();
  lVar1 = param_1;
  func_0x00010bf39c40();
  puVar2 = PTR_PTR_1126adfa8;
  func_0x00010c0dfce0();
  if (((ulong)puVar2 & 1) == 0) {
    lVar3 = lRam000000011369d518;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) goto LAB_10498a190;
  }
  do {
    do {
      lVar3 = lVar1;
      _class_getSuperclass();
      if (lVar3 == 0) {
        lVar3 = 0;
        goto LAB_10498a1ac;
      }
      _class_getSuperclass();
      _class_getInstanceMethod();
      puVar2 = PTR_PTR_1126adfa8;
      func_0x00010c0dfce0();
    } while (((ulong)puVar2 & 1) != 0);
    lVar3 = lRam000000011369d518;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
  } while (lVar3 == 0);
LAB_10498a190:
  func_0x00010c0dfcc0(PTR_PTR_1126adfa8);
LAB_10498a1ac:
  puVar2 = PTR_PTR_1126adfb8;
  _objc_alloc(PTR_PTR_1126adfb8);
  func_0x00010c04fca0();
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10498a1f0; end: 10498a287; -[FBSDKTimeSpentData initWithEventLogger:serverConfigurationProvider:] */

undefined1 *
FUN_10498a1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3478;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar2 + 0x10),param_3);
    _objc_storeStrong((undefined1 *)((long)puVar2 + 0x18),param_4);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10498a288; end: 10498a2df; -[FBSDKTimeSpentData suspend] */

void FUN_10498a288(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10498a2e0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
  return;
}



/* Entry: 10498a2e0; end: 10498a2e7;  */

void FUN_10498a2e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2642d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_suspendTimeSpentData_112676ad8);
  return;
}



/* Entry: 10498a2e8; end: 10498a587; -[FBSDKTimeSpentData suspendTimeSpentData] */

void FUN_10498a2e8(double param_1,undefined *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  uStack_c8 = param_4;
  func_0x00010c06ff00();
  if ((int)puVar1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar6 = (double)(long)param_1;
    _objc_release(puVar1);
    func_0x00010c089c80(param_2);
    dVar7 = dVar6 - param_1;
    if (dVar7 < 0.0) {
      func_0x00010c23cd40(PTR_PTR_1126add38);
      dVar7 = 0.0;
    }
    func_0x00010c1553c0(param_2);
    func_0x00010c1f9100(dVar7 + param_1,param_2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110da62b8;
    func_0x00010c1553c0(param_2);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110da62d8;
    puStack_88 = puVar2;
    func_0x00010c0ddf80(param_2);
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_98 = &PTR____CFConstantStringClassReference_110da62f8;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_80 = puVar3;
    func_0x00010c0df720(dVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110da6318;
    puVar5 = param_2;
    puStack_78 = puVar4;
    func_0x00010c15ff60();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar5;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126add58;
    func_0x00010bdc19c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126add58;
    func_0x00010c0fa3c0(PTR_PTR_1126add58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2be520(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_b0 = puVar2;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23cd40(PTR_PTR_1126add38);
    uStack_c8 = 0;
    func_0x00010c1b0440(param_2);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10498a588;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10498a5e4;
  puStack_d8 = &UNK_110845ce0;
  puStack_d0 = puVar1;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_f0);
  return;
}



/* Entry: 10498a588; end: 10498a5e3; -[FBSDKTimeSpentData restore:] */

void FUN_10498a588(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10498a5e4;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_40);
  return;
}



/* Entry: 10498a5e4; end: 10498a5f3;  */

void FUN_10498a5e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13c730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_restoreTimeSpendDataWithCalledFr_11262cbe8,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10498a5f4; end: 10498aad3; -[FBSDKTimeSpentData restoreTimeSpendDataWithCalledFromActivateApp:] */

void FUN_10498a5f4(double param_1,ulong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar2 = param_2;
  func_0x00010c06ff00();
  if ((uVar2 & 1) != 0) {
    return;
  }
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar11 = (double)(long)param_1;
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  puVar4 = PTR_PTR_1126add58;
  func_0x00010c0fa3c0(PTR_PTR_1126add58,param_3,&PTR____CFConstantStringClassReference_110da2138);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004080(puVar3,param_3,puVar4,0,0);
  _objc_release(puVar4);
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fda00(param_2,param_3,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar4);
    func_0x00010c1f9100(0,param_2);
    func_0x00010c1ceda0(param_2,param_3,0);
    func_0x00010c1b8b20(0,param_2);
    func_0x00010c200940(param_2,param_3,1);
    func_0x00010c200960(param_2,param_3,0);
  }
  else {
    puVar4 = PTR_PTR_1126add58;
    func_0x00010c0dff00(PTR_PTR_1126add58,param_3,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c0b4fe0();
    dVar9 = (double)(long)puVar5;
    func_0x00010c1b8b20(dVar9,param_2);
    _objc_release(puVar6);
    func_0x00010c08a300(param_2);
    func_0x00010c215040(dVar11 - dVar9,param_2);
    puVar6 = puVar4;
    func_0x00010c0e00e0(puVar4,param_3,&PTR____CFConstantStringClassReference_110da62b8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c067ec0();
    dVar9 = (double)(int)puVar5;
    func_0x00010c1f9100(param_2);
    _objc_release(puVar6);
    puVar6 = puVar4;
    func_0x00010c0e00e0(puVar4,param_3,&PTR____CFConstantStringClassReference_110da6318);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fda00(param_2,param_3,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar5);
    }
    else {
      func_0x00010c1fda00(param_2,param_3,puVar6);
    }
    _objc_release(puVar6);
    puVar6 = puVar4;
    func_0x00010c0e00e0(puVar4,param_3,&PTR____CFConstantStringClassReference_110da62d8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c067ec0();
    func_0x00010c1ceda0(param_2,param_3,puVar5);
    _objc_release(puVar6);
    func_0x00010c26f840(param_2);
    uVar2 = param_2;
    dVar10 = dVar9;
    func_0x00010c15f080(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf274a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1605a0();
    func_0x00010c200940(param_2,param_3,dVar10 < dVar9);
    _objc_release(uVar8);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c231720(param_2);
    func_0x00010c200960(param_2,param_3,uVar2);
    uVar2 = param_2;
    func_0x00010c231780();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_2;
      func_0x00010c0ddf80();
      iVar1 = (int)uVar2;
      if (0xc6 < iVar1) {
        iVar1 = 199;
      }
      func_0x00010c1ceda0(param_2,param_3,iVar1 + 1);
    }
    _objc_release(puVar4);
  }
  func_0x00010c1b86e0(dVar11,param_2);
  func_0x00010c1b0440(param_2,param_3,1);
  if (param_4 != 0) {
    uVar2 = param_2;
    func_0x00010c231780();
    if ((int)uVar2 != 0) {
      uVar2 = param_2;
      func_0x00010bf99fe0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1553c0(param_2);
      uVar8 = param_2;
      func_0x00010bf05140(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5ac0(dVar11,uVar2,param_3,&PTR____CFConstantStringClassReference_110da1058,
                          uVar8);
      _objc_release(uVar8);
      _objc_release(uVar2);
      func_0x00010c1f9100(0,param_2);
      func_0x00010c1ceda0(param_2,param_3,0);
      puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fda00(param_2,param_3,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar4);
    }
    uVar2 = param_2;
    func_0x00010c231720();
    if ((int)uVar2 != 0) {
      uVar2 = param_2;
      func_0x00010bf99fe0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_2;
      func_0x00010bf05120(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5a60(uVar2,param_3,&PTR____CFConstantStringClassReference_110da1038,uVar8);
      _objc_release(uVar8);
      _objc_release(uVar2);
      uVar2 = param_2;
      func_0x00010bf99fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010bfb2fe0();
      _objc_release(uVar2);
      if (uVar8 != 1) {
        func_0x00010bf99fe0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb3020();
        _objc_release(param_2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10498aad4; end: 10498abaf; -[FBSDKTimeSpentData appEventsParametersForActivate] */

void FUN_10498aad4(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long *plVar12;
  long lVar13;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110da1378;
  ppuVar1 = param_1;
  func_0x00010bfca8a0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110da1358;
  ppuStack_48 = ppuVar1;
  func_0x00010c15ff60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = param_1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_48,&ppuStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar12 = (long *)&UNK_10dd48ea8;
    do {
      lVar13 = *plVar12;
      plVar12 = plVar12 + 1;
    } while ((double)lVar13 < (double)ppuVar1[7]);
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110da1318;
    ppuVar2 = ppuVar1;
    func_0x00010c0ddf80(ppuVar1);
    func_0x00010c0df760(puVar3,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110da1338;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_d8 = puVar3;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da6378);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110da1378;
    ppuVar2 = ppuVar1;
    puStack_d0 = puVar4;
    func_0x00010bfca8a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110da1358;
    ppuVar5 = ppuVar1;
    ppuStack_c8 = ppuVar2;
    func_0x00010c15ff60();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuStack_c0 = ppuVar5;
    }
    ppuVar10 = &puStack_d8;
    pppuVar9 = &ppuStack_f8;
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar10,pppuVar9,4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c0d3c80();
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126add78;
    if ((double)ppuVar1[9] != 0.0) {
      pppuVar8 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar7;
      pppuVar9 = pppuVar8;
      func_0x00010bf71e80(puVar3,param_2,ppuVar7,pppuVar8,
                          &PTR____CFConstantStringClassReference_110da1158);
      _objc_release(pppuVar8);
    }
    ppuVar2 = ppuVar7;
    func_0x00010bf51e00();
    _objc_release(ppuVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      puVar3 = PTR_PTR_1126add20;
      _objc_retain(pppuVar9);
      _objc_retain(ppuVar10);
      func_0x00010c22c4c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0f38c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar9);
      puVar11 = puVar4;
      func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110da20f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206d20(ppuVar7,param_2,ppuVar10,puVar11 != (undefined *)0x0);
      _objc_release(ppuVar10);
      _objc_release(puVar11);
      _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10498abb0; end: 10498adc3; -[FBSDKTimeSpentData appEventsParametersForDeactivate] */

void FUN_10498abb0(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)&UNK_10dd48ea8;
  do {
    lVar12 = *plVar11;
    plVar11 = plVar11 + 1;
  } while ((double)lVar12 < (double)param_1[7]);
  ppuStack_98 = &PTR____CFConstantStringClassReference_110da1318;
  ppuVar1 = param_1;
  func_0x00010c0ddf80(param_1);
  func_0x00010c0df760(puVar2,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110da1338;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_78 = puVar2;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110da6378);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110da1378;
  ppuVar1 = param_1;
  puStack_70 = puVar3;
  func_0x00010bfca8a0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110da1358;
  ppuVar4 = param_1;
  ppuStack_68 = ppuVar1;
  func_0x00010c15ff60();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuStack_60 = ppuVar4;
  }
  ppuVar9 = &puStack_78;
  pppuVar8 = &ppuStack_98;
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar9,pppuVar8,4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c0d3c80();
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126add78;
  if ((double)param_1[9] != 0.0) {
    pppuVar7 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar6;
    pppuVar8 = pppuVar7;
    func_0x00010bf71e80(puVar2,param_2,ppuVar6,pppuVar7,
                        &PTR____CFConstantStringClassReference_110da1158);
    _objc_release(pppuVar7);
  }
  ppuVar1 = ppuVar6;
  func_0x00010bf51e00();
  _objc_release(ppuVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126add20;
  _objc_retain(pppuVar8);
  _objc_retain(ppuVar9);
  func_0x00010c22c4c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0f38c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar8);
  puVar10 = puVar3;
  func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da20f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206d20(ppuVar6,param_2,ppuVar9,puVar10 != (undefined *)0x0);
  _objc_release(ppuVar9);
  _objc_release(puVar10);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10498adc4; end: 10498ae8f; -[FBSDKTimeSpentData setSourceApplication:openURL:] */

void FUN_10498adc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126add20;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22c4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f38c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = puVar2;
  func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da20f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206d20(param_1,param_2,param_3,puVar3 != (undefined *)0x0);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10498ae90; end: 10498aedf; -[FBSDKTimeSpentData setSourceApplication:isFromAppLink:] */

void FUN_10498ae90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010c1b3040(param_1,param_2,param_4);
  func_0x00010c206d00(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10498aee0; end: 10498af8f; -[FBSDKTimeSpentData getSourceApplication] */

void FUN_10498aee0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  lVar1 = param_1;
  func_0x00010c079280();
  ppuVar3 = &PTR____CFConstantStringClassReference_110da63b8;
  if ((int)lVar1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110da6398;
  }
  lVar1 = param_1;
  func_0x00010c2475e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 != 0) {
    func_0x00010c2475e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110f2ee78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    ppuVar3 = ppuVar2;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10498af90; end: 10498afbb; -[FBSDKTimeSpentData resetSourceApplication] */

void FUN_10498af90(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c206d00(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c1b3050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsOpenedFromAppLink__11264a638,0);
  return;
}



/* Entry: 10498afbc; end: 10498b013; -[FBSDKTimeSpentData registerAutoResetSourceApplication] */

void FUN_10498afbc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10498b014; end: 10498b02b; -[FBSDKTimeSpentData eventLogger] */

void FUN_10498b014(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10498b02c; end: 10498b037; -[FBSDKTimeSpentData setEventLogger:] */

void FUN_10498b02c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10498b038; end: 10498b03f; -[FBSDKTimeSpentData serverConfigurationProvider] */

undefined8 FUN_10498b038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10498b040; end: 10498b04b; -[FBSDKTimeSpentData setServerConfigurationProvider:] */

void FUN_10498b040(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10498b04c; end: 10498b053; -[FBSDKTimeSpentData sourceApplication] */

undefined8 FUN_10498b04c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10498b054; end: 10498b05f; -[FBSDKTimeSpentData setSourceApplication:] */

void FUN_10498b054(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10498b060; end: 10498b067; -[FBSDKTimeSpentData isOpenedFromAppLink] */

undefined1 FUN_10498b060(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10498b068; end: 10498b06f; -[FBSDKTimeSpentData setIsOpenedFromAppLink:] */

void FUN_10498b068(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10498b070; end: 10498b077; -[FBSDKTimeSpentData isCurrentlyLoaded] */

undefined1 FUN_10498b070(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10498b078; end: 10498b07f; -[FBSDKTimeSpentData setIsCurrentlyLoaded:] */

void FUN_10498b078(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10498b080; end: 10498b087; -[FBSDKTimeSpentData lastRestoreTime] */

undefined8 FUN_10498b080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10498b088; end: 10498b08f; -[FBSDKTimeSpentData setLastRestoreTime:] */

void FUN_10498b088(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 10498b090; end: 10498b097; -[FBSDKTimeSpentData secondsSpentInCurrentSession] */

undefined8 FUN_10498b090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10498b098; end: 10498b09f; -[FBSDKTimeSpentData setSecondsSpentInCurrentSession:] */

void FUN_10498b098(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 10498b0a0; end: 10498b0a7; -[FBSDKTimeSpentData timeSinceLastSuspend] */

undefined8 FUN_10498b0a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10498b0a8; end: 10498b0af; -[FBSDKTimeSpentData setTimeSinceLastSuspend:] */

void FUN_10498b0a8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 10498b0b0; end: 10498b0b7; -[FBSDKTimeSpentData numInterruptionsInCurrentSession] */

undefined4 FUN_10498b0b0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10498b0b8; end: 10498b0bf; -[FBSDKTimeSpentData setNumInterruptionsInCurrentSession:] */

void FUN_10498b0b8(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10498b0c0; end: 10498b0c7; -[FBSDKTimeSpentData sessionID] */

undefined8 FUN_10498b0c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10498b0c8; end: 10498b0d3; -[FBSDKTimeSpentData setSessionID:] */

void FUN_10498b0c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 10498b0d4; end: 10498b0db; -[FBSDKTimeSpentData lastSuspendTime] */

undefined8 FUN_10498b0d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10498b0dc; end: 10498b0e3; -[FBSDKTimeSpentData setLastSuspendTime:] */

void FUN_10498b0dc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 10498b0e4; end: 10498b0eb; -[FBSDKTimeSpentData shouldLogActivateEvent] */

undefined1 FUN_10498b0e4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10498b0ec; end: 10498b0f3; -[FBSDKTimeSpentData setShouldLogActivateEvent:] */

void FUN_10498b0ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10498b0f4; end: 10498b0fb; -[FBSDKTimeSpentData shouldLogDeactivateEvent] */

undefined1 FUN_10498b0f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10498b0fc; end: 10498b103; -[FBSDKTimeSpentData setShouldLogDeactivateEvent:] */

void FUN_10498b0fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 10498b104; end: 10498b147; -[FBSDKTimeSpentData .cxx_destruct] */

void FUN_10498b104(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 10498b148; end: 10498b14b; -[FBSDKTransformer CATransform3DMakeScale:sy:sz:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10498b148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (lRam000000011369d1e0 != -1) {
    func_0x00010bda89d4();
  }
                    /* WARNING: Could not recover jumptable at 0x000104957f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_11369d1d8)(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10498b14c; end: 10498b14f; -[FBSDKTransformer CATransform3DMakeTranslation:ty:tz:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10498b14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (lRam000000011369d1f0 != -1) {
    func_0x00010bda89f0();
  }
                    /* WARNING: Could not recover jumptable at 0x000104957f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_11369d1e8)(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10498b150; end: 10498b1bb; -[FBSDKTransformer CATransform3DConcat:b:] */

void FUN_10498b150(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = param_3[9];
  uStack_60 = param_3[8];
  uStack_48 = param_3[0xb];
  uStack_50 = param_3[10];
  uStack_38 = param_3[0xd];
  uStack_40 = param_3[0xc];
  uStack_28 = param_3[0xf];
  uStack_30 = param_3[0xe];
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  uStack_78 = param_3[5];
  uStack_80 = param_3[4];
  uStack_68 = param_3[7];
  uStack_70 = param_3[6];
  uStack_d8 = param_4[9];
  uStack_e0 = param_4[8];
  uStack_c8 = param_4[0xb];
  uStack_d0 = param_4[10];
  uStack_b8 = param_4[0xd];
  uStack_c0 = param_4[0xc];
  uStack_a8 = param_4[0xf];
  uStack_b0 = param_4[0xe];
  uStack_118 = param_4[1];
  uStack_120 = *param_4;
  uStack_108 = param_4[3];
  uStack_110 = param_4[2];
  uStack_f8 = param_4[5];
  uStack_100 = param_4[4];
  uStack_e8 = param_4[7];
  uStack_f0 = param_4[6];
  FUN_104957fa8(&uStack_a0,&uStack_120);
  return;
}



/* Entry: 10498b1bc; end: 10498b25b; +[FBSDKURL configureWithSettings:appLinkFactory:appLinkTargetFactory:appLinkEventPoster:] */

void FUN_10498b1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c1fe440(param_1,param_2,param_3);
  func_0x00010c168dc0(param_1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c168de0(param_1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c168da0(param_1,param_2,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10498b25c; end: 10498b267; +[FBSDKURL settings] */

void FUN_10498b25c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d530);
  return;
}



/* Entry: 10498b268; end: 10498b277; +[FBSDKURL setSettings:] */

void FUN_10498b268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d530,param_3);
  return;
}



/* Entry: 10498b278; end: 10498b283; +[FBSDKURL appLinkFactory] */

void FUN_10498b278(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d538);
  return;
}



/* Entry: 10498b284; end: 10498b293; +[FBSDKURL setAppLinkFactory:] */

void FUN_10498b284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d538,param_3);
  return;
}


