/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054e3bcc; end: 1054e3c43;  */

void FUN_1054e3bcc(double param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cd20();
  iVar2 = (int)param_1;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cd00();
  _objc_release(puVar1);
  iRam00000001136bc7f0 = iVar2;
  iRam00000001136bc7f4 = (int)param_1;
  return;
}



/* Entry: 1054e3c44; end: 1054e3c4f;  */

void FUN_1054e3c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054e3c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1054e3c50; end: 1054e3cab; -[SCComposerApplicationBridgeServiceProvider provide] */

void FUN_1054e3c50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110891cf0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ba018;
  _objc_alloc(PTR_PTR_1126ba018);
  func_0x00010bff3860();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054e3cac; end: 1054e3cc7;  */

void FUN_1054e3cac(void)

{
  _objc_alloc_init(PTR_PTR_1126ba010);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054e3cc8; end: 1054e3cd7; -[SCComposerApplicationBridgeServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e3cc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724af4);
  return;
}



/* Entry: 1054e3cd8; end: 1054e3d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e3cd8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    func_0x00010c1a3100(*(undefined8 *)(param_1 + _DAT_112724b04));
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1054e3d7c; end: 1054e3d83;  */

void FUN_1054e3d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc2390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_getAllModuleHashes_1125ce288);
  return;
}



/* Entry: 1054e3d84; end: 1054e3e67;  */

void FUN_1054e3d84(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (2 < lRam00000001138466f0) {
    lVar1 = lRam00000001138466f0;
    func_0x00010057bc30();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x00010c26d060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c292b20();
      _objc_retain(lVar2);
      func_0x00010bfc69a0(param_2);
      _objc_release(lVar2);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1054e3e68; end: 1054e3eeb;  */

void FUN_1054e3e68(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126ba028;
    func_0x00010bfbc0e0(PTR_PTR_1126ba028,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1054e3eec; end: 1054e4037; -[SCComposerUserSessionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e3eec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_60;
  undefined *puStack_58;
  
  plVar5 = &lStack_60;
  *(undefined1 *)(param_1 + _DAT_112724b08) = 1;
  lVar7 = (long)_DAT_112724af8;
  lVar6 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar6);
  lVar1 = lVar6;
  func_0x00010bf44b20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c142e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
  func_0x00010c284760(lVar3);
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar6 = lVar7;
  func_0x00010bf44b60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar7);
  lVar6 = (long)_DAT_112724b10;
  func_0x00010c2820a0(lVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = 0;
  _objc_release(uVar4);
  puStack_58 = PTR_PTR_1126e8b50;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 1054e4038; end: 1054e4077;  */

void FUN_1054e4038(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c21e620(param_2);
  func_0x00010c197f00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054e4078; end: 1054e412f; -[SCComposerUserSessionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e4078(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112724b1c,0);
  _objc_storeStrong(param_1 + _DAT_112724b14,0);
  _objc_destroyWeak(param_1 + _DAT_112724b0c);
  _objc_destroyWeak(param_1 + _DAT_112724b00);
  _objc_destroyWeak(param_1 + _DAT_112724afc);
  _objc_destroyWeak(param_1 + _DAT_112724b24);
  _objc_destroyWeak(param_1 + _DAT_112724af8);
  _objc_destroyWeak(param_1 + _DAT_112724b20);
  _objc_storeStrong(param_1 + _DAT_112724b04,0);
  _objc_storeStrong(param_1 + _DAT_112724b18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112724b10,0);
  return;
}



/* Entry: 1054e4130; end: 1054e41df; -[SCComposerUncaughtErrorReporter reportNonFatalWithErrorCode:message:module:stackTrace:] */

void FUN_1054e4130(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c133f20(param_1,param_2,param_3,param_4,param_5,lVar1,param_6,0);
    _objc_release(lVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054e41e0; end: 1054e42a3; -[SCComposerUncaughtErrorReporter reportCrashWithMessage:module:stackTrace:isANR:] */

void FUN_1054e41e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    uVar1 = 9;
    if ((int)param_6 == 0) {
      uVar1 = 1;
    }
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c133f20(param_1,param_2,uVar1,param_3,param_4,lVar2,param_5,param_6);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054e42a4; end: 1054e4483; -[SCComposerUncaughtErrorReporter reportUncaughtComposerError:message:module:crashLogger:stackTrace:isANR:] */

void FUN_1054e42a4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((int)param_8 == 0) {
    lVar1 = param_5;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110de6298;
    }
    else {
      ppuVar7 = &PTR____CFConstantStringClassReference_110de6278;
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    puVar2 = param_4;
  }
  puVar3 = PTR_PTR_1126b3e90;
  _objc_opt_new(PTR_PTR_1126b3e90);
  func_0x00010c17fee0();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x00010bfc2380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = puVar4;
  if (puVar5 != (undefined *)0x0) {
    func_0x00010bfc2380();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    (**(code **)(param_1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(param_1);
  }
  puVar4 = PTR_PTR_1126b3e98;
  func_0x00010bf45300(PTR_PTR_1126b3e98,param_2,param_7,puVar6,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133420(param_6,param_2,puVar3,0,puVar2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054e4484; end: 1054e448b; -[SCComposerUncaughtErrorReporter getAllModuleHashes] */

undefined8 FUN_1054e4484(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1054e448c; end: 1054e4493; -[SCComposerUncaughtErrorReporter setGetAllModuleHashes:] */

void FUN_1054e448c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1054e4494; end: 1054e44c7; -[SCComposerUncaughtErrorReporter .cxx_destruct] */

void FUN_1054e4494(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1054e44c8; end: 1054e44cf;  */

undefined8 FUN_1054e44c8(void)

{
  return 0;
}



/* Entry: 1054e44d0; end: 1054e4537;  */

ulong FUN_1054e44d0(ulong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c02c8;
  func_0x00010c067fc0();
  if (ppuVar1 == (undefined **)0xffffffffffffffff) {
    uVar2 = param_1;
    func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110de6318,0,0);
  }
  else {
    uVar2 = (ulong)(ppuVar1 == (undefined **)0x1);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1054e4538; end: 1054e467f; -[SCContextExperimentServiceImpl initWithCircumstanceEngine:] */

undefined8 * FUN_1054e4538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126e8b60;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1054e4680; end: 1054e46ff;  */

void FUN_1054e4680(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110de6498,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 1054e4700; end: 1054e472b; -[SCContextExperimentServiceImpl remixToStoryCTAsTitleTreatmentType] */

long FUN_1054e4700(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110de6358,0,0);
  return (long)(int)uVar1;
}



/* Entry: 1054e472c; end: 1054e4743; -[SCContextExperimentServiceImpl remixPromotedCTATitleUpdateEnabled] */

void FUN_1054e472c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de6378,0,0);
  return;
}



/* Entry: 1054e4744; end: 1054e475b; -[SCContextExperimentServiceImpl remixPreSelectMyStory] */

void FUN_1054e4744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de6398,0,0);
  return;
}



/* Entry: 1054e475c; end: 1054e47b3; -[SCContextExperimentServiceImpl aifAlwaysEnabledForLaunchSource:isAd:] */

undefined8 FUN_1054e475c(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((param_3 < 0x19) ||
     ((uVar1 = 0, param_3 < 0x23 && ((1L << (param_3 & 0x3f) & 0x510000000U) != 0)))) {
    if (param_4 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
                 &PTR____CFConstantStringClassReference_110de6478,0,0);
      return uVar1;
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1054e47b4; end: 1054e47df; -[SCContextExperimentServiceImpl unifiedActionTrayBottomOffsetAdjustment] */

double FUN_1054e47b4(long param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  func_0x00010bfb2cc0(0,*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110de63b8,0);
  return (double)fVar1;
}



/* Entry: 1054e47e0; end: 1054e47f7; -[SCContextExperimentServiceImpl operaHeaderWithActionItemAllSurfacesEnabled] */

void FUN_1054e47e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de63d8,0,0);
  return;
}



/* Entry: 1054e47f8; end: 1054e480f; -[SCContextExperimentServiceImpl operaHeaderWithTitleAttachmentActionItemEnabled] */

void FUN_1054e47f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de64d8,1,0);
  return;
}



/* Entry: 1054e4810; end: 1054e483f; -[SCContextExperimentServiceImpl operaHeaderWithActionItemAddPosterStorySurfaceEnabledForStoryType:] */

undefined8 FUN_1054e4810(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((param_3 != 0x28) && (param_3 != 0x21)) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de63f8,0,0);
  return uVar1;
}



/* Entry: 1054e4840; end: 1054e4847; -[SCContextExperimentServiceImpl contextDrivenSwipePresentationEnabledForLaunchSource:] */

undefined8 FUN_1054e4840(void)

{
  return 0;
}



/* Entry: 1054e4848; end: 1054e4897; -[SCContextExperimentServiceImpl shouldUseRepostedContentMiniContextCardsForSessionParams:] */

uint FUN_1054e4848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000108437d74();
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x000108437e04(param_3);
    uVar2 = (uint)uVar1 ^ 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1054e4898; end: 1054e48af; -[SCContextExperimentServiceImpl sharedSpotlightToStoriesV2Enabled] */

void FUN_1054e4898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de64f8,0,0);
  return;
}



/* Entry: 1054e48b0; end: 1054e48c7; -[SCContextExperimentServiceImpl watchOnSpotlightResumePlaybackEnabled] */

void FUN_1054e48b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de6518,0,0);
  return;
}



/* Entry: 1054e48c8; end: 1054e492f; -[SCContextExperimentServiceImpl verticalActionEnabledForLaunchSource:] */

undefined8 FUN_1054e48c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110de6418,0,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110de6438,0,0);
    if ((uVar1 & 1) == 0) {
      func_0x00010c298e60(param_1,param_2,param_3);
    }
  }
  return 1;
}



/* Entry: 1054e4930; end: 1054e493b; -[SCContextExperimentServiceImpl createGroupChatForMentionCount:] */

bool FUN_1054e4930(undefined8 param_1,undefined8 param_2,long param_3)

{
  return 1 < param_3;
}



/* Entry: 1054e493c; end: 1054e4953; -[SCContextExperimentServiceImpl verticalActionMenuEnabledForLaunchSource:] */

void FUN_1054e493c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de6458,0,0);
  return;
}



/* Entry: 1054e4954; end: 1054e496b; -[SCContextExperimentServiceImpl operaHeaderEnableDismissBackground] */

void FUN_1054e4954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de6538,0,0);
  return;
}



/* Entry: 1054e496c; end: 1054e4983; -[SCContextExperimentServiceImpl useNativeVerticalActionsRenderer] */

void FUN_1054e496c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de6558,0,0);
  return;
}



/* Entry: 1054e4984; end: 1054e49af; -[SCContextExperimentServiceImpl simpleReplyStyleForDirectSnap] */

long FUN_1054e4984(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110de6578,0,0);
  return (long)(int)uVar1;
}



/* Entry: 1054e49b0; end: 1054e49db; -[SCContextExperimentServiceImpl simpleReplyStyleForStory] */

long FUN_1054e49b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110de6598,0,0);
  return (long)(int)uVar1;
}



/* Entry: 1054e49dc; end: 1054e4a1b; -[SCContextExperimentServiceImpl pauseSpotlightWithMidrollForReplies] */

undefined8 FUN_1054e49dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054e4a1c; end: 1054e4a33; -[SCContextExperimentServiceImpl lensPlusBrandingEnabled] */

void FUN_1054e4a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de65b8,0,0);
  return;
}



/* Entry: 1054e4a34; end: 1054e4a4b; -[SCContextExperimentServiceImpl lensPlusBrandingInSpotlightContextEnabled] */

void FUN_1054e4a34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de65d8,0,0);
  return;
}



/* Entry: 1054e4a4c; end: 1054e4a63; -[SCContextExperimentServiceImpl doubleTapToLikeEnabledOnLFS] */

void FUN_1054e4a4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de65f8,0,0);
  return;
}



/* Entry: 1054e4a64; end: 1054e4a7b; -[SCContextExperimentServiceImpl brandColorChromeHeaderSubsButtonEnabled] */

void FUN_1054e4a64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de6618,0,0);
  return;
}



/* Entry: 1054e4a7c; end: 1054e4abb; -[SCContextExperimentServiceImpl skipChevronOnLongPressEnabled] */

undefined8 FUN_1054e4a7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054e4abc; end: 1054e4ad3; -[SCContextExperimentServiceImpl contextReactionBarRewriteEnabled] */

void FUN_1054e4abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de6338,0,0);
  return;
}



/* Entry: 1054e4ad4; end: 1054e4b5f; -[SCContextExperimentServiceImpl replyToFriendBarEnabledWithShouldExpose:] */

long FUN_1054e4ad4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0b84a0(lVar1,param_2,&PTR____CFConstantStringClassReference_110de6638,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010bf9d480(lVar1);
  }
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c296d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 1054e4b60; end: 1054e4b8b; -[SCContextExperimentServiceImpl replyToFriendBarDelaySecs] */

long FUN_1054e4b60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110de6658,2,0);
  return (long)(int)uVar1;
}



/* Entry: 1054e4b8c; end: 1054e4ba3; -[SCContextExperimentServiceImpl hideSpotlightOriginalSoundSubheaderEnabled] */

void FUN_1054e4b8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de6678,0,0);
  return;
}



/* Entry: 1054e4ba4; end: 1054e4bbb; -[SCContextExperimentServiceImpl spotlightFadeChromeOnScrollEnabled] */

void FUN_1054e4ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de6698,0,0);
  return;
}



/* Entry: 1054e4bbc; end: 1054e4c47; -[SCContextExperimentServiceImpl multiCtaBelowPlaybackEnabledWithShouldExpose:] */

long FUN_1054e4bbc(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0b84a0(lVar1,param_2,&PTR____CFConstantStringClassReference_110de66b8,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010bf9d480(lVar1);
  }
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c296d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 1054e4c48; end: 1054e4cd3; -[SCContextExperimentServiceImpl multiCtaBelowPlaybackHighlightSTCEnabledWithShouldExpose:] */

long FUN_1054e4c48(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0b84a0(lVar1,param_2,&PTR____CFConstantStringClassReference_110de66d8,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010bf9d480(lVar1);
  }
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c296d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 1054e4cd4; end: 1054e4d4f; -[SCContextExperimentServiceImpl .cxx_destruct] */

void FUN_1054e4cd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054e4d50; end: 1054e4dc7; -[SCContextExperimentServiceProvider _contextExperimentServiceImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e4d50(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112724b44;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010bf398e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ba050;
  _objc_alloc(PTR_PTR_1126ba050);
  func_0x00010bffe1e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054e4dc8; end: 1054e4dff; -[SCContextExperimentServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e4dc8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112724b44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724b40);
  return;
}



/* Entry: 1054e4e00; end: 1054e4ecb; -[SCFeedPropertyLogger init] */

undefined1 * FUN_1054e4e00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e8b68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1054e4ecc; end: 1054e4fef; -[SCFeedPropertyLogger logCellViewPosition:hasMapIcon:hasSaturnStatusVisible:staleType:chatId:] */

void FUN_1054e4ecc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_7 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1054e4ff0;
    puStack_88 = &UNK_110891e80;
    uStack_58 = param_3;
    _objc_retain(param_4);
    uStack_80 = param_4;
    _objc_retain(param_5);
    uStack_78 = param_5;
    _objc_retain(param_6);
    uStack_70 = param_6;
    lStack_68 = param_1;
    _objc_retain(param_7);
    lStack_60 = param_7;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_a0);
    _objc_release(lStack_60);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1054e4ff0; end: 1054e5067;  */

void FUN_1054e4ff0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ba058;
  _objc_alloc(PTR_PTR_1126ba058);
  func_0x00010bffd220();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
  func_0x00010c0b5ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054e5068; end: 1054e50ff; -[SCFeedPropertyLogger removeCellInfoWithChatId:] */

void FUN_1054e5068(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1054e5100;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1054e5100; end: 1054e513f;  */

void FUN_1054e5100(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c0b5ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054e5140; end: 1054e5277; -[SCFeedPropertyLogger getCellViewPositionWithChatId:completionQueue:result:] */

void FUN_1054e5140(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1054e5278;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_5);
    lStack_48 = param_5;
    func_0x00010007380c(param_4,&puStack_68);
    lVar1 = lStack_48;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    lVar1 = param_3;
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054e5278; end: 1054e5287;  */

void FUN_1054e5278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054e5284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0xffffffffffffffff);
  return;
}



/* Entry: 1054e5288; end: 1054e5383;  */

void FUN_1054e5288(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b5ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf33fe0();
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1054e5384;
  puStack_58 = &UNK_110860cf8;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  uStack_48 = uVar5;
  func_0x00010007380c(uVar4,&puStack_70);
  _objc_release(uStack_50);
  _objc_release(uVar2);
  return;
}



/* Entry: 1054e5384; end: 1054e5393;  */

void FUN_1054e5384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054e5390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1054e5394; end: 1054e5423; -[SCFeedPropertyLogger setShortcutType:] */

void FUN_1054e5394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1054e5424;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054e5424; end: 1054e544f;  */

void FUN_1054e5424(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1054e5450; end: 1054e5533; -[SCFeedPropertyLogger fetchFeedMetadata:completionQueue:result:] */

void FUN_1054e5450(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1054e5534;
  puStack_68 = &UNK_1108465d0;
  uStack_60 = param_3;
  lStack_58 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054e5534; end: 1054e56d3;  */

void FUN_1054e5534(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar8 = 0;
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar8 = 0;
      lVar7 = 0;
      lVar6 = 0;
    }
    else {
      func_0x00010bf33fe0(lVar4);
      lVar6 = lVar4;
      func_0x00010bfd8d80(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010bfdb620(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010c24d580(lVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  puVar5 = PTR_PTR_1126ba060;
  _objc_alloc();
  func_0x00010bffd240();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1054e56d4;
  puStack_68 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  puStack_60 = puVar5;
  uStack_58 = uVar2;
  _objc_retain(puVar5);
  func_0x00010007380c(uVar1,&puStack_80);
  _objc_release(puStack_60);
  _objc_release(uStack_58);
  _objc_release(puVar5);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  return;
}



/* Entry: 1054e56d4; end: 1054e56e3;  */

void FUN_1054e56d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054e56e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1054e56e4; end: 1054e572b; -[SCFeedPropertyLogger .cxx_destruct] */

void FUN_1054e56e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054e572c; end: 1054e580b; -[SCFriendsFeedReadyLogger didEnterWithEntryParameters:isPresentingUnderChat:] */

void FUN_1054e572c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054e580c; end: 1054e5843;  */

void FUN_1054e580c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054e5844; end: 1054e584b; -[SCFriendsFeedReadyLogger firstFeedEntrySource] */

undefined8 FUN_1054e5844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1054e584c; end: 1054e5903; -[SCFriendsFeedReadyLogger setFeedEntryPreviousPage:] */

void FUN_1054e584c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1054e5904; end: 1054e5937;  */

void FUN_1054e5904(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea3e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054e5938; end: 1054e5a27; -[SCFriendsFeedReadyLogger setShortcutSessionId:shortcutLoadTimestamp:didPullDown:] */

void FUN_1054e5938(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_4);
  uStack_58 = param_1;
  uStack_50 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1054e5a28; end: 1054e5a63;  */

void FUN_1054e5a28(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea77a0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054e5a64; end: 1054e5b0b; -[SCFriendsFeedReadyLogger resetShortcutSession] */

void FUN_1054e5a64(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1054e5b0c; end: 1054e5b37;  */

void FUN_1054e5b0c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be93b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054e5b38; end: 1054e5c1f; -[SCFriendsFeedReadyLogger didRenderFeedAtTime:renderContent:] */

void FUN_1054e5b38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1054e5c20; end: 1054e5c57;  */

void FUN_1054e5c20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdffe60(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054e5c58; end: 1054e5caf; -[SCFriendsFeedReadyLogger addSucessfullySyncedConversationsCount:] */

void FUN_1054e5c58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1054e5cb0;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_40);
  return;
}



/* Entry: 1054e5cb0; end: 1054e5cc3;  */

void FUN_1054e5cb0(long param_1)

{
  *(long *)(*(long *)(param_1 + 0x20) + 0x90) =
       *(long *)(*(long *)(param_1 + 0x20) + 0x90) + *(long *)(param_1 + 0x28);
  return;
}



/* Entry: 1054e5cc4; end: 1054e5cc7; -[SCFriendsFeedReadyLogger didAppSessionEndWithCompletion:] */

void FUN_1054e5cc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be560d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logMetricsIfNecessaryAndRestart_1125731d0);
  return;
}



/* Entry: 1054e5cc8; end: 1054e5cef; -[SCFriendsFeedReadyLogger friendsFeedReadyResult] */

void FUN_1054e5cc8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054e5cf0; end: 1054e5cf7; -[SCFriendsFeedReadyLogger onUserLoggedIn] */

void FUN_1054e5cf0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec0510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startLoggingForStartupType__11258dae8,1);
  return;
}



/* Entry: 1054e5cf8; end: 1054e5cff; -[SCFriendsFeedReadyLogger onUserRegistered] */

void FUN_1054e5cf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec0510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startLoggingForStartupType__11258dae8,2);
  return;
}



/* Entry: 1054e5d00; end: 1054e5d17; -[SCFriendsFeedReadyLogger onAppWillEnterForeground] */

void FUN_1054e5d00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 4;
  if (*(char *)(param_1 + 0x118) == '\0') {
    uVar1 = 5;
  }
  *(undefined1 *)(param_1 + 0x118) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bec0510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startLoggingForStartupType__11258dae8,uVar1)
  ;
  return;
}



/* Entry: 1054e5d18; end: 1054e5d1f; -[SCFriendsFeedReadyLogger onAppDidEnterBackground] */

void FUN_1054e5d18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be560d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logMetricsIfNecessaryAndRestart_1125731d0,0)
  ;
  return;
}



/* Entry: 1054e5d20; end: 1054e5d23; -[SCFriendsFeedReadyLogger onAppWillResignActive] */

void FUN_1054e5d20(void)

{
  return;
}



/* Entry: 1054e5d24; end: 1054e5d2b; -[SCFriendsFeedReadyLogger onAppWillTerminate] */

void FUN_1054e5d24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be560d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logMetricsIfNecessaryAndRestart_1125731d0,0)
  ;
  return;
}



/* Entry: 1054e5d2c; end: 1054e5dd7; -[SCFriendsFeedReadyLogger _didEnterWithEntryParameters:isPresentingUnderChat:] */

void FUN_1054e5d2c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) == 1) {
    func_0x00010be876c0(param_1,param_2,param_3,param_4);
  }
  if ((((param_4 & 1) == 0) && (*(long *)(param_1 + 0x40) == 1)) && (*(long *)(param_1 + 0x48) == 0)
     ) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_3;
    _objc_release(uVar1);
  }
  if ((((param_4 & 1) == 0) && (*(long *)(param_1 + 0x58) == 1)) && (*(long *)(param_1 + 0x60) == 0)
     ) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054e5dd8; end: 1054e5e7b; -[SCFriendsFeedReadyLogger _recordEntryParameters:isPresentingUnderChat:] */

void FUN_1054e5dd8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (((param_4 & 1) == 0) && (*(long *)(param_1 + 0x20) == 1)) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
    if (*(long *)(param_1 + 0x28) == 0) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = param_3;
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      FUN_1054e5e7c(uVar1,*(undefined8 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x38) = uVar1;
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = param_3;
    _objc_release(uVar1);
    if (*(long *)(param_1 + 0x80) == 1) {
      func_0x00010be540a0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054e5e7c; end: 1054e6013;  */

undefined8 FUN_1054e5e7c(ulong param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_1;
  func_0x00010c11c460();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    uVar3 = param_1;
    func_0x00010c073b20();
    if ((uVar3 & 1) == 0) {
      lVar4 = param_2;
      func_0x00010c067fc0();
      if (lVar4 == 0x27) {
        uVar6 = 2;
      }
      else {
        uVar3 = param_1;
        func_0x00010c1127c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar3 == 0) {
          uVar6 = 0xffffffffffffffff;
        }
        else {
          uVar3 = param_1;
          func_0x00010c1127c0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c067ec0();
          _objc_release(uVar3);
          uVar1 = 2;
          if ((int)uVar5 != 10) {
            uVar1 = 6;
          }
          uVar6 = 0;
          if ((int)uVar5 != 1) {
            uVar6 = uVar1;
          }
        }
      }
    }
    else {
      uVar6 = 8;
    }
    goto LAB_1054e5fe4;
  }
  uVar3 = uVar2;
  func_0x000107fd3b4c();
  if ((long)uVar3 < 0x71) {
    if (uVar3 != 8) {
      if (uVar3 == 0x16) goto LAB_1054e5ef4;
      if (uVar3 != 0x2b) goto LAB_1054e5fc8;
    }
    uVar3 = param_1;
    func_0x00010c0752e0();
    uVar6 = 10;
    if ((int)uVar3 == 0) {
      uVar6 = 1;
    }
  }
  else {
    if ((0x29 < uVar3 - 0x71) || ((1L << (uVar3 - 0x71 & 0x3f) & 0x28000000005U) == 0)) {
LAB_1054e5fc8:
      uVar3 = param_1;
      func_0x00010c0752e0();
      uVar6 = 0xc;
      if ((int)uVar3 == 0) {
        uVar6 = 0xd;
      }
      goto LAB_1054e5fe4;
    }
LAB_1054e5ef4:
    uVar3 = param_1;
    func_0x00010c0752e0();
    uVar6 = 0xb;
    if ((int)uVar3 == 0) {
      uVar6 = 9;
    }
  }
LAB_1054e5fe4:
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 1054e6014; end: 1054e60f3; -[SCFriendsFeedReadyLogger _setFeedEntryPreviousPage:] */

void FUN_1054e6014(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x20) != 1) {
    return;
  }
  func_0x00010be87960();
  if ((*(long *)(param_1 + 0x40) == 1) && (*(long *)(param_1 + 0x48) != 0)) {
    lVar1 = *(long *)(param_1 + 0x50);
    if (param_3 == 0x67) {
      puVar2 = (undefined *)0x0;
    }
    else {
      if (lVar1 != 0) goto LAB_1054e608c;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = *(long *)(param_1 + 0x50);
    }
    *(undefined **)(param_1 + 0x50) = puVar2;
    _objc_release(lVar1);
  }
LAB_1054e608c:
  if ((*(long *)(param_1 + 0x58) == 1) && (*(long *)(param_1 + 0x60) != 0)) {
    lVar1 = *(long *)(param_1 + 0x68);
    if (param_3 == 0x67) {
      puVar2 = (undefined *)0x0;
    }
    else {
      if (lVar1 != 0) {
        return;
      }
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = *(long *)(param_1 + 0x68);
    }
    *(undefined **)(param_1 + 0x68) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1054e60f4; end: 1054e61e7; -[SCFriendsFeedReadyLogger _recordPreviousPage:] */

void FUN_1054e60f4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0x20) == 1) && (*(long *)(param_1 + 0x28) != 0)) {
    if (param_3 == 0x67) {
      uVar1 = *(undefined8 *)(param_1 + 0xa8);
      *(undefined8 *)(param_1 + 0xa8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
    if (*(long *)(param_1 + 0x30) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar2;
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      FUN_1054e5e7c(uVar1,*(undefined8 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x38) = uVar1;
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined **)(param_1 + 0xa8) = puVar2;
    _objc_release(uVar1);
    if (*(long *)(param_1 + 0x80) == 3) {
      lVar3 = *(long *)(param_1 + 0xd0);
    }
    else {
      if (*(long *)(param_1 + 0x80) != 2) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0xd8);
    }
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be540b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logGrapheneAndBlizzardMetrics_1125729c8)
      ;
      return;
    }
  }
  return;
}



/* Entry: 1054e61e8; end: 1054e62bb; -[SCFriendsFeedReadyLogger _didRenderFeedAtTime:renderContent:] */

void FUN_1054e61e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  if ((*(long *)(param_2 + 0x20) == 1) && (*(long *)(param_2 + 0x28) != 0)) {
    if (*(long *)(param_2 + 0xd0) == 0) {
      puVar1 = PTR_PTR_1126ba068;
      _objc_alloc();
      func_0x00010c03e1e0(param_1);
      uVar2 = *(undefined8 *)(param_2 + 0xd0);
      *(undefined **)(param_2 + 0xd0) = puVar1;
      _objc_release(uVar2);
    }
    if (*(long *)(param_2 + 0x80) == 3) {
      lVar3 = *(long *)(param_2 + 0x30);
    }
    else {
      if (*(long *)(param_2 + 0x80) != 2) goto LAB_1054e629c;
      puVar1 = PTR_PTR_1126ba068;
      _objc_alloc();
      func_0x00010c03e1e0(param_1);
      uVar2 = *(undefined8 *)(param_2 + 0xd8);
      *(undefined **)(param_2 + 0xd8) = puVar1;
      _objc_release(uVar2);
      lVar3 = *(long *)(param_2 + 0xa8);
    }
    if (lVar3 != 0) {
      func_0x00010be540a0(param_2);
    }
  }
LAB_1054e629c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054e62bc; end: 1054e62d3;  */

void FUN_1054e62bc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x88) = param_1;
  *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x80) = 2;
  return;
}


