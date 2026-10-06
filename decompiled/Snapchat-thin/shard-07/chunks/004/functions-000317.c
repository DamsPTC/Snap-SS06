/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055c8360; end: 1055c83bb; -[SCLensCrashLoggerFactory _createdPossibleCrashLoggerWithCrashedEffectIdsObservable:] */

void FUN_1055c8360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb900;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0065e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055c83bc; end: 1055c83eb; -[SCLensCrashLoggerFactory _createCrashSmapler] */

void FUN_1055c83bc(void)

{
  _objc_alloc(PTR_PTR_1126bb908);
  func_0x00010c001640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055c83ec; end: 1055c847b; -[SCLensCrashLoggerFactory .cxx_destruct] */

void FUN_1055c83ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1055c847c; end: 1055c84c3; -[SCLensCrashLogger initWithBlizzardLogger:crashLogger:appInsightsMetadataStorage:grapheneRegistry:lensSwipeIdObservable:lensCrashSampler:appStartExperimentReader:] */

void FUN_1055c847c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  func_0x00010c006600(param_1,param_2,0,0,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



/* Entry: 1055c84c4; end: 1055c875b; -[SCLensCrashLogger initWithCrashedLensIdsObservable:possibleCrashLogger:blizzardLogger:crashLogger:appInsightsMetadataStorage:grapheneRegistry:lensSwipeIdObservable:lensCrashSampler:appStartExperimentReader:] */

undefined8 *
FUN_1055c84c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e9318;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[1];
    puVar1[1] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    uVar2 = param_11;
    func_0x00010bf1f440();
    *(char *)(puVar1 + 10) = (char)uVar2;
    uVar4 = 0x40a00000;
    func_0x00010bfb2cc0(param_11);
    *(undefined4 *)((long)puVar1 + 0x54) = uVar4;
    uVar2 = param_11;
    func_0x00010bf1f440();
    *(char *)(puVar1 + 0xb) = (char)uVar2;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x5c) = 0;
    puVar3 = PTR_PTR_1126bb910;
    _objc_opt_new();
    func_0x00010c2b6200();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b6dc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_retain(puVar3);
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    if (param_3 != 0) {
      func_0x00010bec6de0(puVar1);
    }
    if (puVar1[3] != 0) {
      func_0x00010bf383a0();
    }
    if (param_9 != 0) {
      func_0x00010bec7000(puVar1);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1055c875c; end: 1055c875f; -[SCLensCrashLogger setupEffectIdsObservable:] */

void FUN_1055c875c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec6df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeOnLensIdsObservable__11258f520);
  return;
}



/* Entry: 1055c8760; end: 1055c8763; -[SCLensCrashLogger setupSnapSourceObservable:] */

void FUN_1055c8760(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beafd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupSnapSourceObservable__112589908);
  return;
}



/* Entry: 1055c8764; end: 1055c8867; -[SCLensCrashLogger setEffectIds:] */

void FUN_1055c8764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c187540(param_1);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1055c8868;
  uStack_40 = 0x1055c8878;
  uStack_38 = 0;
  _objc_retain(param_3);
  func_0x00010bedfd20(param_1);
  if (puStack_58[5] != 0) {
    func_0x00010bed3260(param_1);
  }
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1055c8868; end: 1055c887f;  */

void FUN_1055c8868(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1055c8880; end: 1055c88f3;  */

void FUN_1055c8880(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  func_0x00010c2b28a0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1055c88f4; end: 1055c8977; -[SCLensCrashLogger setSessionId:] */

void FUN_1055c88f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1055c8978;
  puStack_30 = &UNK_11089c3b0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bedfd20(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1055c8978; end: 1055c899b;  */

void FUN_1055c8978(long param_1,undefined8 param_2)

{
  func_0x00010c2b8500(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1055c899c; end: 1055c8a1f; -[SCLensCrashLogger setSwipeId:] */

void FUN_1055c899c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1055c8a20;
  puStack_30 = &UNK_11089c3b0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bedfd20(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1055c8a20; end: 1055c8a43;  */

void FUN_1055c8a20(long param_1,undefined8 param_2)

{
  func_0x00010c2bab60(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1055c8a44; end: 1055c8ab7; -[SCLensCrashLogger setProductType:] */

void FUN_1055c8a44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x1055c8a94;
  puStack_20 = &UNK_11089c3e0;
  uStack_18 = param_3;
  func_0x00010bedfd20(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 1055c8ab8; end: 1055c8b2b; -[SCLensCrashLogger setRenderingContext:] */

void FUN_1055c8ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x1055c8b08;
  puStack_20 = &UNK_11089c3e0;
  uStack_18 = param_3;
  func_0x00010bedfd20(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 1055c8b2c; end: 1055c8b93; -[SCLensCrashLogger logCrashError:selector:] */

void FUN_1055c8b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf5f1e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be51fe0(param_1,param_2,param_3,uVar1,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055c8b94; end: 1055c8c8f; -[SCLensCrashLogger logCrashError:lensId:selector:] */

void FUN_1055c8b94(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puVar3 = param_3;
  if (param_4 == 0) {
    _objc_retain(param_3);
    func_0x00010be51fe0(param_1,param_2,param_3,PTR____NSArray0__struct_11034ab48,param_5);
  }
  else {
    lStack_50 = param_4;
    _objc_retain(param_3);
    func_0x00010bf0a140(puVar1,param_2,&lStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be51fe0(param_1,param_2,param_3,puVar1,param_5);
    _objc_release(param_3);
    param_3 = puVar1;
  }
  _objc_release(param_3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = param_4;
  func_0x00010bf5f1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd3340(param_4,param_2,lVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1055c8c90; end: 1055c8cef; -[SCLensCrashLogger defaultErrorHandlerWithSelector:] */

void FUN_1055c8c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf5f1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd3340(param_1,param_2,uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055c8cf0; end: 1055c8dd3; -[SCLensCrashLogger handlerWithLensId:selector:] */

void FUN_1055c8cf0(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *unaff_x22;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_1;
  if (param_3 == 0) {
    puVar4 = PTR____NSArray0__struct_11034ab48;
    func_0x00010bfd3340();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    unaff_x22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x22;
    func_0x00010bfd3340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x22);
  }
  lVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    ppuVar3 = &puStack_b0;
    pcStack_48 = FUN_1055c8dd4;
    puStack_70 = unaff_x22;
    puStack_68 = param_1;
    puStack_60 = puVar1;
    lStack_58 = param_3;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_retain(puVar4);
    _objc_initWeak(auStack_78,lVar2);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x1055c8ea8;
    puStack_98 = &UNK_110860190;
    _objc_copyWeak(auStack_88,auStack_78);
    puStack_90 = puVar4;
    uStack_80 = param_4;
    _objc_retain(puVar4);
    _objc_retainBlock(&puStack_b0);
    puVar1 = (undefined1 *)ppuVar3;
    _objc_retainBlock();
    _objc_release(ppuVar3);
    _objc_release(puStack_90);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055c8dd4; end: 1055c8f07; -[SCLensCrashLogger handlerWithLensIds:selector:] */

void FUN_1055c8dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1055c8ea8;
  puStack_58 = &UNK_110860190;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_50 = param_3;
  uStack_40 = param_4;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_70);
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055c8f08; end: 1055c919f; -[SCLensCrashLogger logLensesNotResponsive:] */

undefined ** FUN_1055c8f08(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c075f80();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)lVar2 != 0) {
    uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dedc38;
    uStack_80 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dedc58);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_78,&uStack_88,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar5,param_2,&PTR____CFConstantStringClassReference_110dedc18,0,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    lVar2 = param_1;
    func_0x00010c22b880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ad520();
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf5f1e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b28a0(lVar2,param_2,lVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    puVar3 = PTR_s_logLensesNotResponsive__112608030;
    _NSStringFromSelector(PTR_s_logLensesNotResponsive__112608030);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3f20(lVar2,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar6 = lVar2;
    func_0x00010bf21f60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3e90;
    _objc_alloc_init(PTR_PTR_1126b3e90);
    func_0x00010c1bd4a0();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dedc78;
    if (param_3 != (undefined **)0x0) {
      ppuVar1 = param_3;
    }
    puVar4 = PTR_PTR_1126b3e98;
    func_0x00010bf53a80(PTR_PTR_1126b3e98,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8fda0(PTR_PTR_1126bb8f0,param_2,lVar6,*(undefined8 *)(param_1 + 0x20),puVar3,
                        puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (*(char *)(param_1 + 0x58) == '\x01') {
      func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                          *(undefined8 *)PTR__NSInternalInconsistencyException_11034aa48,
                          &PTR____CFConstantStringClassReference_110dedc98);
    }
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(puVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  return (undefined **)(ulong)*(byte *)(param_3 + 10);
}



/* Entry: 1055c91a0; end: 1055c91a7; -[SCLensCrashLogger isLNRDetectionEnabled] */

undefined1 FUN_1055c91a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 1055c91a8; end: 1055c91b3; -[SCLensCrashLogger lnrDetectionTimeoutSec] */

double FUN_1055c91a8(long param_1)

{
  return (double)*(float *)(param_1 + 0x54);
}



/* Entry: 1055c91b4; end: 1055c93bb; -[SCLensCrashLogger _logCrashError:lensIds:selector:] */

void FUN_1055c91b4(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 *unaff_x22;
  undefined1 *unaff_x24;
  long unaff_x25;
  undefined1 *unaff_x26;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != (undefined1 *)0x0) {
    unaff_x22 = param_1;
    func_0x00010c22b880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ad520();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b28a0(unaff_x22,param_2,param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3f20(unaff_x22,param_2,param_5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_5);
    puVar2 = param_4;
    func_0x00010bf529e0();
    if (puVar2 == (undefined1 *)0x0) {
      param_5 = unaff_x22;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = (undefined8 *)param_5;
      func_0x00010be52000(param_1);
      puVar2 = param_5;
    }
    else {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(param_4);
      puVar3 = param_4;
      func_0x00010bf52a60();
      puVar2 = param_4;
      if (puVar3 != (undefined1 *)0x0) {
        unaff_x25 = *plStack_120;
        do {
          unaff_x26 = (undefined1 *)0x0;
          do {
            if (*plStack_120 != unaff_x25) {
              _objc_enumerationMutation(param_4);
            }
            func_0x00010c2b2880(unaff_x22,param_2,*(undefined8 *)(lStack_128 + (long)unaff_x26 * 8))
            ;
            _objc_unsafeClaimAutoreleasedReturnValue();
            unaff_x24 = unaff_x22;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be52000(param_1,param_2,unaff_x24);
            _objc_release(unaff_x24);
            unaff_x26 = unaff_x26 + 1;
          } while (puVar3 != unaff_x26);
          puVar3 = param_4;
          puVar8 = &uStack_130;
          func_0x00010bf52a60();
          param_5 = (undefined1 *)0x0;
        } while (puVar3 != (undefined1 *)0x0);
      }
    }
    _objc_release(puVar2);
    _objc_release(unaff_x22);
    puVar2 = (undefined1 *)puVar8;
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_1055c93bc;
    puStack_180 = unaff_x26;
    lStack_178 = unaff_x25;
    puStack_170 = unaff_x24;
    puStack_168 = param_5;
    puStack_160 = unaff_x22;
    puStack_158 = param_1;
    puStack_150 = param_4;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar2);
    puVar4 = puVar2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 != (undefined1 *)0x0) {
      puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a0 = 0xc2000000;
      pcStack_198 = FUN_1055c956c;
      puStack_190 = &UNK_110847450;
      _objc_retain(puVar2);
      ppuVar5 = &puStack_1a8;
      puStack_188 = puVar2;
      func_0x0001001071d4(ppuVar5);
      _objc_release(puStack_188);
      func_0x00010be52ac0(PTR_PTR_1126bb8f0,param_2,puVar2);
      func_0x00010be9f920(PTR_PTR_1126bb8f0,param_2,puVar2);
      uVar6 = *(undefined8 *)(puVar3 + 0x48);
      func_0x00010c2326e0(uVar6,param_2,puVar2);
      if ((int)uVar6 != 0) {
        func_0x00010be8fd80(PTR_PTR_1126bb8f0,param_2,puVar2,*(undefined8 *)(puVar3 + 0x20));
        puVar1 = PTR_PTR_1126bb8f0;
        uVar6 = *(undefined8 *)(puVar3 + 0x10);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdd4ce0(puVar1,param_2,puVar2,uVar6);
        _objc_release(uVar6);
        puVar1 = PTR_PTR_1126bb8f0;
        uVar7 = *(undefined8 *)(puVar3 + 8);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010c094240();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be52dc0(puVar1,param_2,uVar6);
        _objc_release(uVar6);
        _objc_release(uVar7);
      }
      func_0x0001000e2a84(ppuVar5);
    }
    _objc_release(puVar2);
    return;
  }
  return;
}



/* Entry: 1055c93bc; end: 1055c956b; -[SCLensCrashLogger _logCrashWithContext:] */

void FUN_1055c93bc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1055c956c;
    puStack_60 = &UNK_110847450;
    _objc_retain(param_3);
    ppuVar3 = &puStack_78;
    lStack_58 = param_3;
    func_0x0001001071d4(ppuVar3);
    _objc_release(lStack_58);
    func_0x00010be52ac0(PTR_PTR_1126bb8f0,param_2,param_3);
    func_0x00010be9f920(PTR_PTR_1126bb8f0,param_2,param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c2326e0(uVar4,param_2,param_3);
    if ((int)uVar4 != 0) {
      func_0x00010be8fd80(PTR_PTR_1126bb8f0,param_2,param_3,*(undefined8 *)(param_1 + 0x20));
      puVar1 = PTR_PTR_1126bb8f0;
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd4ce0(puVar1,param_2,param_3,uVar4);
      _objc_release(uVar4);
      puVar1 = PTR_PTR_1126bb8f0;
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c094240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be52dc0(puVar1,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar5);
    }
    func_0x0001000e2a84(ppuVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1055c956c; end: 1055c95e3;  */

void FUN_1055c956c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dedcb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055c95e4; end: 1055c9777; +[SCLensCrashLogger _sendNotificationWithContext:] */

void FUN_1055c95e4(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110db19f8;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f53b38;
  puVar3 = param_3;
  puStack_60 = puVar2;
  func_0x00010c0cca60();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110daeeb8;
  puVar4 = param_3;
  puStack_58 = puVar3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&ppuStack_78,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR____CFConstantStringClassReference_110f53b18;
  func_0x00010c1049a0();
  _objc_release(puVar1);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  _objc_retain(param_1);
  ppuVar6 = ppuVar9;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (ppuVar8 == (undefined **)0x0) {
    puVar2 = PTR_PTR_1126b3e98;
    func_0x00010bf60460(PTR_PTR_1126b3e98);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar6 = ppuVar9;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dedcd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    puVar2 = PTR_PTR_1126b3e98;
    func_0x00010bf53a80(PTR_PTR_1126b3e98,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b3e90;
  _objc_alloc_init(PTR_PTR_1126b3e90);
  func_0x00010c1bd4a0();
  _objc_opt_class(puVar5);
  func_0x00010be8fda0();
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar9);
  return;
}



/* Entry: 1055c9778; end: 1055c990f; +[SCLensCrashLogger _reportNonFatalExceptionEventWithContext:crashLogger:] */

void FUN_1055c9778(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 == 0) {
    puVar5 = PTR_PTR_1126b3e98;
    func_0x00010bf60460(PTR_PTR_1126b3e98);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110dedcd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126b3e98;
    func_0x00010bf53a80(PTR_PTR_1126b3e98,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126b3e90;
  _objc_alloc_init(PTR_PTR_1126b3e90);
  func_0x00010c1bd4a0();
  _objc_opt_class(param_1);
  func_0x00010be8fda0();
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055c9910; end: 1055c9af7; +[SCLensCrashLogger _reportNonFatalExceptionEventWithContext:crashLogger:errorCode:threadCaptureOption:] */

void FUN_1055c9910(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bb918;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  lVar2 = param_3;
  func_0x00010c130720();
  if (lVar2 - 1U < 5) {
    uVar5 = *(undefined4 *)(&UNK_10ddb3a10 + (lVar2 - 1U) * 4);
  }
  else {
    uVar5 = 0;
  }
  func_0x00010c1eab40(puVar1,param_2,uVar5);
  lVar2 = param_3;
  func_0x00010c116320(param_3);
  func_0x0001055ca8dc();
  func_0x00010c1e3de0(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162840(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = param_3;
      func_0x00010c264ae0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fda20(puVar1,param_2,lVar3);
      _objc_release(lVar3);
    }
    else {
      func_0x00010c1fda20(puVar1,param_2,lVar2);
    }
    _objc_release(lVar2);
  }
  puVar4 = PTR_PTR_1126b8460;
  _objc_alloc_init(PTR_PTR_1126b8460);
  func_0x00010c1bd640();
  lVar2 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c09e560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133420(param_4,param_2,param_5,puVar4,lVar3,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055c9af8; end: 1055c9d43; +[SCLensCrashLogger _blizzardLogExceptionEventWithContext:logger:] */

void FUN_1055c9af8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bb920;
  _objc_opt_new(PTR_PTR_1126bb920);
  puVar2 = PTR_PTR_1126b2930;
  func_0x00010bf1cda0(PTR_PTR_1126b2930);
  func_0x00010c18c7c0(puVar1,param_2,puVar2);
  lVar3 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c197f20(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c09e560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8080(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e9e0(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c130720();
  if (lVar3 - 1U < 5) {
    uVar6 = *(undefined8 *)(&UNK_10ddb39e8 + (lVar3 - 1U) * 8);
  }
  else {
    uVar6 = 0xffffffffffffffff;
  }
  func_0x00010c1eab40(puVar1,param_2,uVar6);
  lVar3 = param_3;
  func_0x00010c116320(param_3);
  FUN_1055ca8b8();
  func_0x00010c1e3de0(puVar1,param_2,lVar3);
  lVar3 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c240(puVar1,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = param_3;
      func_0x00010c264ae0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c210680(puVar1,param_2,lVar4);
      _objc_release(lVar4);
    }
    else {
      func_0x00010c210680(puVar1,param_2,lVar3);
    }
    _objc_release(lVar3);
  }
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055c9d44; end: 1055c9deb; +[SCLensCrashLogger _logExceptionWithGraphene:] */

void FUN_1055c9d44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bb928;
  _objc_retain(param_3);
  func_0x00010bfd3200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2930;
  func_0x00010bf70080(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dedcf8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010bfec2a0(param_3,param_2,puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1055c9dec; end: 1055c9fc3; -[SCLensCrashLogger _updateAppInsightsInfoWithContext:] */

void FUN_1055c9dec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c094660();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      func_0x00010c1d07c0(lVar1,param_2,0,&PTR____CFConstantStringClassReference_110dedb18,1);
      func_0x00010c1d07c0(lVar1,param_2,0,&PTR____CFConstantStringClassReference_110dedb58,1);
      func_0x00010c1d07c0(lVar1,param_2,0,&PTR____CFConstantStringClassReference_110dedb78,1);
    }
    else {
      func_0x00010c1d07c0(lVar1,param_2,lVar3,&PTR____CFConstantStringClassReference_110dedb18,1);
      lVar2 = param_3;
      func_0x00010c130720();
      if (lVar2 - 1U < 5) {
        uVar7 = *(undefined4 *)(&UNK_10ddb3a10 + (lVar2 - 1U) * 4);
      }
      else {
        uVar7 = 0;
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010c1d07c0(lVar1,param_2,puVar5,&PTR____CFConstantStringClassReference_110dedb58,1);
      lVar2 = param_3;
      func_0x00010c116320(param_3);
      func_0x0001055ca8dc();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010c1d07c0(lVar1,param_2,puVar6,&PTR____CFConstantStringClassReference_110dedb78,1);
      func_0x00010c1d07c0(lVar1,param_2,lVar3,&PTR____CFConstantStringClassReference_110dedb38,1);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055c9fc4; end: 1055ca09f; -[SCLensCrashLogger _subscribeOnSwipeIdObservable:] */

void FUN_1055c9fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1055ca0a0; end: 1055ca0ef;  */

void FUN_1055ca0a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c210680(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055ca0f0; end: 1055ca1cb; -[SCLensCrashLogger _subscribeOnLensIdsObservable:] */

void FUN_1055ca0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1055ca1cc; end: 1055ca21b;  */

void FUN_1055ca1cc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c193d60(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055ca21c; end: 1055ca2f7; -[SCLensCrashLogger _setupSnapSourceObservable:] */

void FUN_1055ca21c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1055ca2f8; end: 1055ca353;  */

void FUN_1055ca2f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bb10e88(param_2);
    func_0x0001055ca900();
    func_0x00010c1e3de0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055ca354; end: 1055ca3d7; -[SCLensCrashLogger sharedContextBuilderCopy] */

void FUN_1055ca354(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _os_unfair_lock_lock(param_1 + 0x5c);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb910;
  func_0x00010c092040(PTR_PTR_1126bb910,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055ca3d8; end: 1055ca43b; -[SCLensCrashLogger _updateSharedContextWithBlock:] */

void FUN_1055ca3d8(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x5c);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x40));
  }
  _os_unfair_lock_unlock(param_1 + 0x5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055ca43c; end: 1055ca45b; +[SCLensCrashLogger _logErrorForContext:] */

void FUN_1055ca43c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1055ca45c; end: 1055ca467; -[SCLensCrashLogger currentLensIds] */

void FUN_1055ca45c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 1055ca468; end: 1055ca46f; -[SCLensCrashLogger setCurrentLensIds:] */

void FUN_1055ca468(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1055ca470; end: 1055ca647; -[SCLensCrashLogger .cxx_destruct] */

void FUN_1055ca470(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1055ca648; end: 1055ca827; -[SCLensCrashLoggerEntryPoint _createLoggerFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ca648(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar1 = PTR_PTR_1126bb938;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112726390;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112726394;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112726398;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf054a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11272639c;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_1127263a0;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_1127263a4;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c0911e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127263a8;
  _objc_loadWeakRetained();
  lVar14 = param_1;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff86c0(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,0,0,0,lVar13,lVar14);
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055ca828; end: 1055ca8b7; -[SCLensCrashLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ca828(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127263b0,0);
  _objc_destroyWeak(param_1 + _DAT_1127263a8);
  _objc_destroyWeak(param_1 + _DAT_1127263a4);
  _objc_destroyWeak(param_1 + _DAT_11272639c);
  _objc_destroyWeak(param_1 + _DAT_1127263a0);
  _objc_destroyWeak(param_1 + _DAT_112726398);
  _objc_destroyWeak(param_1 + _DAT_112726394);
  _objc_destroyWeak(param_1 + _DAT_112726390);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127263ac);
  return;
}



/* Entry: 1055ca8b8; end: 1055ca963;  */

undefined8 FUN_1055ca8b8(long param_1)

{
  if (param_1 - 1U < 9) {
    return *(undefined8 *)(&UNK_10ddb3a28 + (param_1 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 1055ca964; end: 1055caa17;  */

void FUN_1055ca964(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0972e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055caa18; end: 1055caa2f;  */

undefined * FUN_1055caa18(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c243400();
  if (uVar1 < 0x86) {
    return (&PTR_PTR_110d936b8)[uVar1];
  }
  return (undefined *)0x0;
}



/* Entry: 1055caa30; end: 1055caa37;  */

void FUN_1055caa30(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0972f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensSwipeIdObservable_1126036c8);
  return;
}



/* Entry: 1055caa38; end: 1055cab07;  */

void FUN_1055caa38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = PTR_PTR_1126bb938;
  _objc_alloc(PTR_PTR_1126bb938);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff86c0(puVar6,param_2,uVar1,uVar4,uVar2,uVar5,uVar3,uVar7,uVar8,
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68));
  _objc_release(uVar8);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1055cab08; end: 1055cab97;  */

void FUN_1055cab08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf56f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055cab98; end: 1055cac2f; -[SCLensCrashLoggerOnCameraServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055cab98(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127263d4);
  _objc_destroyWeak(param_1 + _DAT_1127263cc);
  _objc_destroyWeak(param_1 + _DAT_1127263c8);
  _objc_destroyWeak(param_1 + _DAT_1127263c4);
  _objc_destroyWeak(param_1 + _DAT_1127263c0);
  _objc_destroyWeak(param_1 + _DAT_1127263bc);
  _objc_destroyWeak(param_1 + _DAT_1127263d0);
  _objc_destroyWeak(param_1 + _DAT_1127263b8);
  _objc_destroyWeak(param_1 + _DAT_1127263b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127263d8);
  return;
}



/* Entry: 1055cac30; end: 1055cacf7; -[SCLensCrashLoggerProxy initWithLensCrashLogger:effectIdsObservable:errorReporter:] */

undefined1 *
FUN_1055cac30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e9320;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    if (param_4 != 0) {
      func_0x00010bec6ca0(puVar1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055cacf8; end: 1055cad97; -[SCLensCrashLoggerProxy logCrashError:selector:] */

void FUN_1055cacf8(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010bf5e860();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  if (param_3 != 0) {
    func_0x00010c134000(*(undefined8 *)(param_1 + 0x10),param_2,param_3,puVar1);
  }
  func_0x00010c0a4000(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055cad98; end: 1055cae8b; -[SCLensCrashLoggerProxy logCrashError:lensId:selector:] */

void FUN_1055cad98(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = param_4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_3 != (undefined *)0x0) {
    func_0x00010c134000(*(undefined8 *)(param_1 + 0x10),param_2,param_3,puVar2);
  }
  puVar6 = param_3;
  func_0x00010c0a3fe0(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,param_5);
  _objc_release(puVar2);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_58 = FUN_1055cae8c;
    puVar3 = puVar2;
    lStack_80 = param_1;
    uStack_78 = param_5;
    lStack_70 = param_4;
    puStack_68 = param_3;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010bf5e860();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (puVar3 != (undefined *)0x0) {
      puVar1 = puVar3;
    }
    _objc_retain(puVar1);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(puVar2 + 8);
    func_0x00010bf694a0(uVar4,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar2 + 0x10);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1055caf88;
    puStack_a0 = &UNK_110864758;
    uStack_98 = uVar7;
    puStack_90 = puVar1;
    uStack_88 = uVar4;
    _objc_retain();
    _objc_retain(puVar1);
    _objc_retain(uVar7);
    ppuVar5 = &puStack_b8;
    _objc_retainBlock(ppuVar5);
    _objc_release(uStack_88);
    _objc_release(puStack_90);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
    return;
  }
  return;
}



/* Entry: 1055cae8c; end: 1055caf87; -[SCLensCrashLoggerProxy defaultErrorHandlerWithSelector:] */

void FUN_1055cae8c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = param_1;
  func_0x00010bf5e860();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf694a0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1055caf88;
  puStack_50 = &UNK_110864758;
  uStack_48 = uVar5;
  puStack_40 = puVar1;
  uStack_38 = uVar3;
  _objc_retain();
  _objc_retain(puVar1);
  _objc_retain(uVar5);
  ppuVar4 = &puStack_68;
  _objc_retainBlock(ppuVar4);
  _objc_release(uStack_38);
  _objc_release(puStack_40);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 1055caf88; end: 1055cafd7;  */

void FUN_1055caf88(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    func_0x00010c134000(*(undefined8 *)(param_1 + 0x20));
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055cafd8; end: 1055cb127; -[SCLensCrashLoggerProxy handlerWithLensId:selector:] */

void FUN_1055cafd8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfd3320();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1055cb128;
  puStack_70 = &UNK_110864758;
  uStack_68 = uVar5;
  puStack_60 = puVar2;
  uStack_58 = uVar1;
  _objc_retain(uVar1);
  _objc_retain(puVar2);
  _objc_retain(uVar5);
  ppuVar3 = &puStack_88;
  _objc_retainBlock(ppuVar3);
  _objc_release(uStack_58);
  _objc_release(puStack_60);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    if (param_2 != 0) {
      func_0x00010c134000(*(undefined8 *)(param_3 + 0x20));
    }
    lVar4 = *(long *)(param_3 + 0x30);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1055cb128; end: 1055cb177;  */

void FUN_1055cb128(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    func_0x00010c134000(*(undefined8 *)(param_1 + 0x20));
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055cb178; end: 1055cb1c7; -[SCLensCrashLoggerProxy setupEffectIdsObservable:] */

void FUN_1055cb178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c2288e0(uVar1,param_2,param_3);
  func_0x00010bec6ca0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055cb1c8; end: 1055cb20b; -[SCLensCrashLoggerProxy setEffectIds:] */

void FUN_1055cb1c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1872e0(param_1,param_2,param_3);
  func_0x00010c193d60(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055cb20c; end: 1055cb213; -[SCLensCrashLoggerProxy setSessionId:] */

void FUN_1055cb20c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fda30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setSessionId__11265d0b0)
  ;
  return;
}



/* Entry: 1055cb214; end: 1055cb21b; -[SCLensCrashLoggerProxy setSwipeId:] */

void FUN_1055cb214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c210690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setSwipeId__112661bc8);
  return;
}



/* Entry: 1055cb21c; end: 1055cb223; -[SCLensCrashLoggerProxy setProductType:] */

void FUN_1055cb21c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e3df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setProductType__1126569a0);
  return;
}



/* Entry: 1055cb224; end: 1055cb22b; -[SCLensCrashLoggerProxy setRenderingContext:] */

void FUN_1055cb224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1eab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setRenderingContext__1126584f8);
  return;
}



/* Entry: 1055cb22c; end: 1055cb233; -[SCLensCrashLoggerProxy setupSnapSourceObservable:] */

void FUN_1055cb22c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c229610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setupSnapSourceObservable__112667fa8);
  return;
}



/* Entry: 1055cb234; end: 1055cb23b; -[SCLensCrashLoggerProxy logLensesNotResponsive:] */

void FUN_1055cb234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a9890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logLensesNotResponsive__112608030);
  return;
}



/* Entry: 1055cb23c; end: 1055cb243; -[SCLensCrashLoggerProxy isLNRDetectionEnabled] */

void FUN_1055cb23c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c075f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isLNRDetectionEnabled_1125fb1f0);
  return;
}



/* Entry: 1055cb244; end: 1055cb24b; -[SCLensCrashLoggerProxy lnrDetectionTimeoutSec] */

void FUN_1055cb244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_lnrDetectionTimeoutSec_112604510);
  return;
}



/* Entry: 1055cb24c; end: 1055cb32f; -[SCLensCrashLoggerProxy _subscribeOnEffectIdsObservable:] */

void FUN_1055cb24c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bf86d40();
  }
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1055cb330; end: 1055cb37f;  */

void FUN_1055cb330(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c193d60(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055cb380; end: 1055cb38b; -[SCLensCrashLoggerProxy currentEffectIds] */

void FUN_1055cb380(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 1055cb38c; end: 1055cb393; -[SCLensCrashLoggerProxy setCurrentEffectIds:] */

void FUN_1055cb38c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1055cb394; end: 1055cb3db; -[SCLensCrashLoggerProxy .cxx_destruct] */

void FUN_1055cb394(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055cb3dc; end: 1055cb44f; -[SCLensCrashLoggerSampler initWithConfiguration:] */

undefined1 * FUN_1055cb3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9328;
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



/* Entry: 1055cb450; end: 1055cb5db; -[SCLensCrashLoggerSampler shouldReportCrashForContext:] */

undefined8 FUN_1055cb450(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c080600();
  if (((uVar2 & 1) == 0) && (uVar2 = uVar1, func_0x00010c07bd80(), (int)uVar2 == 0)) {
    uVar7 = 1;
    goto LAB_1055cb5b0;
  }
  lVar3 = param_3;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = param_3;
    func_0x00010c264ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar3);
    lVar4 = lVar3;
  }
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c09e560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar2 = param_1;
  func_0x00010c089f20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((uVar6 & 1) == 0) {
    func_0x00010c1b8800(param_1,param_2,lVar4);
LAB_1055cb588:
    func_0x00010c1b8600(param_1,param_2,lVar5);
LAB_1055cb594:
    uVar7 = 1;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c07bd80();
    if ((int)uVar2 == 0) goto LAB_1055cb594;
    uVar2 = param_1;
    func_0x00010c089ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar6 & 1) == 0) goto LAB_1055cb588;
    uVar7 = 0;
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
LAB_1055cb5b0:
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 1055cb5dc; end: 1055cb5e7; -[SCLensCrashLoggerSampler lastSessionId] */

void FUN_1055cb5dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 1055cb5e8; end: 1055cb5ef; -[SCLensCrashLoggerSampler setLastSessionId:] */

void FUN_1055cb5e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1055cb5f0; end: 1055cb5fb; -[SCLensCrashLoggerSampler lastReason] */

void FUN_1055cb5f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 1055cb5fc; end: 1055cb603; -[SCLensCrashLoggerSampler setLastReason:] */

void FUN_1055cb5fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1055cb604; end: 1055cb63f; -[SCLensCrashLoggerSampler .cxx_destruct] */

void FUN_1055cb604(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055cb640; end: 1055cb727; -[SCLensPossibleCrashLogger initWithCrashedEffectIdsObservable:userPreferences:blizzardLogger:] */

undefined1 *
FUN_1055cb640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e9330;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055cb728; end: 1055cb85b; -[SCLensPossibleCrashLogger checkPossibleCrashAndReportIfNeeded] */

void FUN_1055cb728(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be46e60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    lVar1 = param_1;
    func_0x00010be46e60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar6 = *plStack_100;
      do {
        lVar7 = 0;
        do {
          if (*plStack_100 != lVar6) {
            _objc_enumerationMutation(lVar1);
          }
          func_0x00010bdd4d00(param_1,param_2,*(undefined8 *)(lStack_108 + lVar7 * 8));
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
  }
  uVar5 = 0;
  func_0x00010bea5140(param_1,param_2,0);
  func_0x00010bec6c80();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126bb948;
  _objc_retain(uVar5);
  _objc_opt_new(puVar3);
  func_0x00010c19c240();
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126b2930;
  func_0x00010bf1cda0(PTR_PTR_1126b2930);
  func_0x00010c18c7c0(puVar3,param_2,puVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2b40();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1055cb85c; end: 1055cb8ef; -[SCLensPossibleCrashLogger _blizzardLogPossibleCrashEventWithEffectId:] */

void FUN_1055cb85c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bb948;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c19c240();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b2930;
  func_0x00010bf1cda0(PTR_PTR_1126b2930);
  func_0x00010c18c7c0(puVar1,param_2,puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2b40();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055cb8f0; end: 1055cb96f; -[SCLensPossibleCrashLogger _lastAppliedEffectIds] */

void FUN_1055cb8f0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055cb970; end: 1055cb9c7; -[SCLensPossibleCrashLogger _setLastAppliedEffectIds:] */

void FUN_1055cb970(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055cb9c8; end: 1055cba93; -[SCLensPossibleCrashLogger _subscribeOnEffectIdsObservable] */

void FUN_1055cb9c8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1055cba94; end: 1055cbae3;  */

void FUN_1055cba94(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bea5140(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055cbae4; end: 1055cbb2b; -[SCLensPossibleCrashLogger .cxx_destruct] */

void FUN_1055cbae4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055cbb2c; end: 1055cbcab; -[SCLensCrashLoggerContext initWithError:lensId:lensIds:sessionId:swipeId:renderingContext:productType:methodSelector:] */

undefined1 *
FUN_1055cbb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e9338;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055cbcac; end: 1055cbccf; -[SCLensCrashLoggerContext copyWithZone:] */

undefined8 FUN_1055cbcac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1055cbcd0; end: 1055cbd7b; -[SCLensCrashLoggerContext hash] */

undefined8 * FUN_1055cbcd0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1055cbe7c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1055cbe88;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[6] == param_3[6] && (puVar3[7] == param_3[7])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[8];
                if (puVar6 != (undefined8 *)param_3[8]) {
                  func_0x00010c071ae0();
                  goto LAB_1055cbe88;
                }
                goto LAB_1055cbe7c;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1055cbe88:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1055cbd7c; end: 1055cbea3; -[SCLensCrashLoggerContext isEqual:] */

long FUN_1055cbd7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1055cbe7c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1055cbe88;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if (lVar3 != *(long *)(param_3 + 0x40)) {
                  func_0x00010c071ae0();
                  goto LAB_1055cbe88;
                }
                goto LAB_1055cbe7c;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1055cbe88:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1055cbea4; end: 1055cbeab; -[SCLensCrashLoggerContext error] */

undefined8 FUN_1055cbea4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1055cbeac; end: 1055cbeb3; -[SCLensCrashLoggerContext lensId] */

undefined8 FUN_1055cbeac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1055cbeb4; end: 1055cbebb; -[SCLensCrashLoggerContext lensIds] */

undefined8 FUN_1055cbeb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1055cbebc; end: 1055cbec3; -[SCLensCrashLoggerContext sessionId] */

undefined8 FUN_1055cbebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1055cbec4; end: 1055cbecb; -[SCLensCrashLoggerContext swipeId] */

undefined8 FUN_1055cbec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


