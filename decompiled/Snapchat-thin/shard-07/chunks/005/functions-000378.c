/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056dea20; end: 1056dea67; -[SCPostponedApplicationDidBecomeActiveUnauthenticatedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056dea20(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727de8);
  _objc_destroyWeak(param_1 + _DAT_112727de4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112727de0,0);
  return;
}



/* Entry: 1056dea68; end: 1056dec13; -[SCCreatorsSettingsRequestManagerImpl initWithRequestMetadataService:requestModifier:snapTokenProvider:circumstanceEngine:] */

undefined1 *
FUN_1056dea68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined1 *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  puVar1 = &uStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_4;
  puVar4 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126e9ba0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(long *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)0x0;
    uVar2 = param_6;
    func_0x00010c25d780();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_60 = &PTR____CFConstantStringClassReference_110df7958;
    uVar2 = 1;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1835e0(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  _objc_retain(uVar2);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  func_0x00010bfa48e0(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar4);
  return puVar4;
}



/* Entry: 1056dec14; end: 1056ded0b; -[SCCreatorsSettingsRequestManagerImpl _fetchSnapTokenWithAcessType:completionQueue:completion:] */

void FUN_1056dec14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1056ded0c;
  puStack_40 = &UNK_110848438;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc0000000;
  uStack_70 = 0x1056ded18;
  puStack_68 = &UNK_1108a9d30;
  uStack_60 = param_3;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010bfa48e0(uVar1,param_2,param_3,param_4,param_4,&puStack_58,&puStack_80);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 1056ded0c; end: 1056ded1b;  */

void FUN_1056ded0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056ded14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1056ded1c; end: 1056dee93; -[SCCreatorsSettingsRequestManagerImpl _sendRequest:successQueue:successBlock:failureBlock:] */

void FUN_1056ded1c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b5730;
    _objc_alloc(PTR_PTR_1126b5730);
    puVar2 = puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b560(puVar1,param_2,puVar2,0,0,0,0,0,0);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1056dee94;
    puStack_68 = &UNK_11089e820;
    _objc_retain(param_6);
    uStack_60 = param_6;
    _objc_retain(param_5);
    uStack_58 = param_5;
    func_0x00010c25f600(uVar3,param_2,param_3,puVar1,param_4,&puStack_80);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056dee94; end: 1056deebb;  */

void FUN_1056dee94(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = 0x28;
  if (param_3 != 0) {
    lVar1 = 0x20;
  }
  if (param_3 != 0) {
    param_5 = param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x0001056deeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + lVar1) + 0x10))
            (*(long *)(param_1 + lVar1),param_2,param_4,param_5);
  return;
}



/* Entry: 1056deebc; end: 1056df037; -[SCCreatorsSettingsRequestManagerImpl _constructRequestToEndpoint:withData:apiAccessToken:snapTokenWithAcessType:] */

void FUN_1056deebc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae518);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  if (((lVar2 == 0) || (lVar2 = param_5, func_0x00010c08fa60(), lVar2 == 0)) ||
     (puVar3 = puVar1, func_0x00010c08fa60(), puVar3 == (undefined *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc0000000;
    pcStack_68 = FUN_1056df038;
    puStack_60 = &UNK_11086d690;
    uVar5 = uVar4;
    uStack_58 = param_6;
    func_0x00010bf225e0(uVar4,param_2,1,puVar3,0,param_4,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1056df038; end: 1056df0ff;  */

void FUN_1056df038(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110df7978;
  _objc_retain(param_2);
  ppuStack_40 = &PTR____CFConstantStringClassReference_110dad378;
  pppuVar3 = &ppuStack_48;
  uVar4 = 1;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2907e0(param_2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c290a40(param_2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar2);
  _objc_retain(pppuVar3);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_initWeak(auStack_a8,param_2);
  _objc_copyWeak(auStack_b8,auStack_a8);
  _objc_retain(uVar2);
  _objc_retain(pppuVar3);
  uStack_b0 = uVar4;
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  func_0x00010be14060(param_2);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(pppuVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_a8);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(pppuVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1056df100; end: 1056df293; -[SCCreatorsSettingsRequestManagerImpl sendRequestToEndpoint:withData:snapTokenWithAcessType:successQueue:successBlock:failureBlock:] */

void FUN_1056df100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_60 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010be14060(param_1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056df294; end: 1056df31b;  */

void FUN_1056df294(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bde6ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if ((param_1 != 0) && (lVar1 != 0)) {
    func_0x00010be9fec0(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056df31c; end: 1056df3af; -[SCCreatorsSettingsRequestManagerImpl .cxx_destruct] */

void FUN_1056df31c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056df3b0; end: 1056df453; -[SCCreatorsSettingsRequestManagerServiceProvider createCreatorsSettingsRequestManagerServiceWithRequestMetadataService:requestModifier:snapTokenProvider:circumstanceEngine:] */

void FUN_1056df3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd370;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03f460();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056df454; end: 1056df4e3; -[SCCreatorsSettingsRequestManagerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056df454(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727e04);
  _objc_destroyWeak(param_1 + _DAT_112727dfc);
  _objc_destroyWeak(param_1 + _DAT_112727e00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727e08);
  return;
}



/* Entry: 1056df4e4; end: 1056df57b; -[SCStoriesGetActiveStoryServiceProvider _activeStoryStatusFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056df4e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010bdf2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112727e1c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf398e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126bd380;
  _objc_alloc(PTR_PTR_1126bd380);
  func_0x00010c0411c0();
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1056df57c; end: 1056df71b; -[SCStoriesGetActiveStoryServiceProvider _createSTMSNetworkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056df57c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar7 = (long)_DAT_112727e0c;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar3 = lVar7;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar1 = param_1 + _DAT_112727e10;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112727e14;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bd388;
  _objc_opt_new();
  param_1 = param_1 + _DAT_112727e18;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1056df71c;
  puStack_88 = &UNK_1108a9de0;
  puVar6 = PTR_PTR_1126ae720;
  lStack_80 = lVar2;
  lStack_78 = lVar3;
  lStack_70 = lVar7;
  puStack_68 = puVar5;
  lStack_60 = lVar4;
  lStack_58 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1056df71c; end: 1056df753;  */

void FUN_1056df71c(void)

{
  _objc_alloc(PTR_PTR_1126bd390);
  func_0x00010c03f480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056df754; end: 1056df7af; -[SCStoriesGetActiveStoryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056df754(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727e18);
  _objc_destroyWeak(param_1 + _DAT_112727e1c);
  _objc_destroyWeak(param_1 + _DAT_112727e14);
  _objc_destroyWeak(param_1 + _DAT_112727e0c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727e10);
  return;
}



/* Entry: 1056df7b0; end: 1056df8eb; -[SCStoriesActiveStoryStatusDataProvider initWithSTMSNetworkRequester:circumstanceEngine:] */

undefined1 *
FUN_1056df7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9ba8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = 0xe10;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0x38) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0x39) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0x3a) = (char)uVar2;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056df8ec; end: 1056dfa37; -[SCStoriesActiveStoryStatusDataProvider remoteActiveStoryForUserIds:forceFetch:requestSource:requestOrigin:completionQueue:completionBlock:] */

void FUN_1056df8ec(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_78,auStack_58);
  _objc_retain(param_3);
  uStack_70 = param_5;
  uStack_68 = param_6;
  uStack_60 = param_4;
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 1056dfa38; end: 1056dfa77;  */

void FUN_1056dfa38(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8b040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056dfa78; end: 1056dfdcf; -[SCStoriesActiveStoryStatusDataProvider _remoteActiveStoryOnPerfomerForUserIds:forceFetch:requestSource:requestOrigin:completionQueue:completionBlock:] */

void FUN_1056dfa78(long param_1,undefined8 param_2,long param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (lVar1 != 0) {
    if (((*(byte *)(param_1 + 0x39) & 1) == 0) && (*(char *)(param_1 + 0x3a) != '\x01')) {
      _objc_initWeak(auStack_168,param_1);
      if ((((ulong)param_4 & 1) == 0) && (lVar1 = param_1, func_0x00010be3df60(), (int)lVar1 == 0))
      {
        puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_188 = 0xc2000000;
        pcStack_180 = FUN_1056dfde4;
        puStack_178 = &UNK_1108a9e40;
        param_4 = &puStack_190;
        _objc_copyWeak(auStack_170,auStack_168);
        lVar1 = param_3;
        func_0x0001006372a4(param_3,&puStack_190);
        lVar4 = lVar1;
        func_0x00010bf529e0();
        if (lVar4 == 0) {
          func_0x00010be16420(param_1);
        }
        else {
          func_0x00010be5c100(param_1);
        }
        _objc_release(lVar1);
        _objc_destroyWeak(auStack_170);
      }
      else {
        func_0x00010be5c100(param_1);
      }
      _objc_destroyWeak(auStack_168);
    }
    else {
      func_0x00010bf529e0(param_3);
      func_0x00010bf71fe0();
      _objc_retainAutoreleasedReturnValue();
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain(param_3);
      lVar1 = param_3;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar4 = *plStack_120;
        do {
          lVar3 = 0;
          do {
            if (*plStack_120 != lVar4) {
              _objc_enumerationMutation(param_3);
            }
            param_4 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2);
            _objc_release(param_4);
            lVar3 = lVar3 + 1;
          } while (lVar1 != lVar3);
          lVar1 = param_3;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
      }
      _objc_release(param_3);
      puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_158 = 0xc2000000;
      pcStack_150 = FUN_1056dfdd0;
      puStack_148 = &UNK_11084aaa8;
      _objc_retain(param_8);
      puStack_140 = puVar2;
      uStack_138 = param_8;
      _objc_retain(puVar2);
      func_0x00010007380c(param_7,&puStack_160);
      _objc_release(puStack_140);
      _objc_release(uStack_138);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_4 + 4);
  _objc_destroyWeak(auStack_168);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x0001056dfde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))
            (*(long *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x20),0);
  return;
}



/* Entry: 1056dfdd0; end: 1056dfde3;  */

void FUN_1056dfdd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056dfde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1056dfde4; end: 1056dfe3f;  */

long FUN_1056dfde4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beb3a80();
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1056dfe40; end: 1056dffe7; -[SCStoriesActiveStoryStatusDataProvider _makeRequstToFetchActiveStoryWithToFetchUserIds:requestUserIds:requestSource:requestOrigin:shouldUpdateTimestamp:completionQueue:completionBlock:] */

void FUN_1056dfe40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_70 = param_7;
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010bfa4a40(uVar1);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056dffe8; end: 1056e0077;  */

void FUN_1056dffe8(long param_1,long param_2,long param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010be2f400(param_1);
  }
  else {
    func_0x00010be2f0c0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056e0078; end: 1056e01b7; -[SCStoriesActiveStoryStatusDataProvider _filterUserIdToLatestActiveStoryStatusWithUserIds:completionQueue:completionBlock:] */

void FUN_1056e0078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1056e01b8;
  puStack_68 = &UNK_1108a9ea0;
  uStack_60 = param_1;
  _objc_retain();
  puStack_58 = puVar2;
  func_0x000100504554(param_3,&puStack_80);
  _objc_release();
  func_0x00010bf529e0(puVar2);
  func_0x00010bf529e0(param_3);
  _objc_release(param_3);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1056e0280;
  puStack_98 = &UNK_11084aaa8;
  puStack_90 = puVar2;
  uStack_88 = param_5;
  _objc_retain(puVar2);
  _objc_retain(param_5);
  func_0x00010007380c(param_4,&puStack_b0);
  _objc_release(param_4);
  _objc_release(puStack_90);
  _objc_release(uStack_88);
  _objc_release(puStack_58);
  _objc_release(puVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 1056e01b8; end: 1056e027f;  */

void FUN_1056e01b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be44420(lVar1);
    func_0x00010c0df760(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1056e0280; end: 1056e0293;  */

void FUN_1056e0280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056e0290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1056e0294; end: 1056e0343; -[SCStoriesActiveStoryStatusDataProvider _handleResponseWithError:completionQueue:completionBlock:] */

void FUN_1056e0294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1056e0344;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_3;
  uStack_38 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010007380c(param_4,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_5);
  return;
}



/* Entry: 1056e0344; end: 1056e0357;  */

void FUN_1056e0344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056e0354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1056e0358; end: 1056e04e7; -[SCStoriesActiveStoryStatusDataProvider _handleRepsone:toFetchUserIds:requestUserIds:shouldUpdateTimestamp:completionQueue:completionBlock:] */

void FUN_1056e0358(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_60 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056e04e8; end: 1056e0527;  */

void FUN_1056e04e8(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056e0528; end: 1056e064b; -[SCStoriesActiveStoryStatusDataProvider _handleRepsoneWithPerformer:toFetchUserIds:requestUserIds:shouldUpdateTimestamp:completionQueue:completionBlock:] */

void FUN_1056e0528(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bdea120(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if ((param_6 & 1) == 0) {
    puVar3 = *(undefined **)(param_1 + 0x20);
    func_0x00010c0d3c80();
    func_0x00010bef7f60();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    func_0x00010bef7f60();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf5e5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    _objc_release(uVar5);
  }
  puVar4 = puVar3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar4;
  _objc_release(uVar2);
  func_0x00010be16420(param_1,param_2,param_5,param_7,param_8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056e064c; end: 1056e06af; -[SCStoriesActiveStoryStatusDataProvider _isActiveStoriesStatusTTLExpired] */

bool FUN_1056e064c(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    func_0x00010bf64e40((double)*(long *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010bf433a0(lVar3,param_2,lVar2);
    bVar1 = lVar3 == 1;
    _objc_release(lVar2);
  }
  return bVar1;
}



/* Entry: 1056e06b0; end: 1056e077f; -[SCStoriesActiveStoryStatusDataProvider _isStoryExpiredWithTimestamp:] */

bool FUN_1056e06b0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  if (param_3 == 0) {
    bVar1 = true;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x30);
    _objc_retain(param_3);
    func_0x00010bf5e5e0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c067fc0(param_3);
    _objc_release(param_3);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0((double)lVar2,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655c0(0x40f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010bf433a0(lVar5,param_2,puVar4);
    bVar1 = lVar2 == 1;
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar5);
  }
  return bVar1;
}



/* Entry: 1056e0780; end: 1056e08eb; -[SCStoriesActiveStoryStatusDataProvider _covertToUserIdsToLatestPostTimeStampFromResponse:requestUserIds:] */

void FUN_1056e0780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c08b160(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1056e0874;
  puStack_48 = &UNK_110880398;
  _objc_retain(puVar1);
  puStack_40 = puVar1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bf980c0(uVar2,param_2,&puStack_60);
  _objc_release(uVar2);
  uVar2 = uStack_38;
  _objc_retain(puVar1);
  _objc_release(uVar2);
  _objc_release(puStack_40);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056e08ec; end: 1056e09a3; -[SCStoriesActiveStoryStatusDataProvider _shouldFetchForUserId:] */

long FUN_1056e08ec(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010c0e00e0(lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_2 = 1;
  }
  else {
    func_0x00010bf885a0(lVar1);
    if ((param_1 == 0.0) && ((*(byte *)(param_2 + 0x38) & 1) != 0)) {
      param_2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c0e00e0(uVar2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be44420(param_2,param_3,uVar2);
      _objc_release(uVar2);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  return param_2;
}



/* Entry: 1056e09a4; end: 1056e09ab; -[SCStoriesActiveStoryStatusDataProvider fetchTimestampThreshold] */

undefined8 FUN_1056e09a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1056e09ac; end: 1056e09b3; -[SCStoriesActiveStoryStatusDataProvider setFetchTimestampThreshold:] */

void FUN_1056e09ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1056e09b4; end: 1056e0a07; -[SCStoriesActiveStoryStatusDataProvider .cxx_destruct] */

void FUN_1056e09b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e0a08; end: 1056e0afb; -[SCStoriesActiveStoryStatusFetcher initWithSTMSNetworkRequester:circumstanceEngine:] */

undefined1 *
FUN_1056e0a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9bb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056e0afc; end: 1056e0c47; -[SCStoriesActiveStoryStatusFetcher remoteActiveStoryForUserIds:forceFetch:requestSource:requestOrigin:completionQueue:completionBlock:] */

void FUN_1056e0afc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_78,auStack_58);
  _objc_retain(param_3);
  uStack_70 = param_5;
  uStack_68 = param_6;
  uStack_60 = param_4;
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 1056e0c48; end: 1056e0c87;  */

void FUN_1056e0c48(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8b060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056e0c88; end: 1056e0d43; -[SCStoriesActiveStoryStatusFetcher updateFetchTimestampThreshold:requestSource:] */

void FUN_1056e0c88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_3;
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1056e0d44; end: 1056e0d77;  */

void FUN_1056e0d44(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056e0d78; end: 1056e0ebf; -[SCStoriesActiveStoryStatusFetcher _remoteActiveStoryOnPerformerForUserIds:forceFetch:requestSource:requestOrigin:completionQueue:completionBlock:] */

void FUN_1056e0d78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110df7a58;
  if (param_5 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df7a38;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110df7a78;
  if (param_5 != 2) {
    ppuVar2 = ppuVar1;
  }
  _objc_retain(ppuVar2);
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x00010c0e00e0(lVar5,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 == 0) {
    puVar3 = PTR_PTR_1126bd398;
    _objc_alloc(PTR_PTR_1126bd398);
    func_0x00010c0411c0();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar3,ppuVar2);
    _objc_release(puVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar4,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c129ba0();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 1056e0ec0; end: 1056e0f93; -[SCStoriesActiveStoryStatusFetcher _updateOnPerformerForFetchTimestampThreshold:requestSource:] */

void FUN_1056e0ec0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110df7a58;
  if (param_4 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df7a38;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110df7a78;
  if (param_4 != 2) {
    ppuVar2 = ppuVar1;
  }
  _objc_retain(ppuVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar3,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    puVar4 = PTR_PTR_1126bd398;
    _objc_alloc(PTR_PTR_1126bd398);
    func_0x00010c0411c0();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar4,ppuVar2);
    _objc_release(puVar4);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar5,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b560();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 1056e0f94; end: 1056e101b; -[SCStoriesActiveStoryStatusFetcher .cxx_destruct] */

void FUN_1056e0f94(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e101c; end: 1056e109f; -[SCLegacyStoriesTooltipsServicesEntryPoint _legacyStoriesTooltipsService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056e101c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bd3a8;
  _objc_alloc(PTR_PTR_1126bd3a8);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112727e58;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bfa2b80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011c80(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056e10a0; end: 1056e10e7; -[SCLegacyStoriesTooltipsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056e10a0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112727e5c,0);
  _objc_destroyWeak(param_1 + _DAT_112727e58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727e54);
  return;
}



/* Entry: 1056e10e8; end: 1056e117b; -[SCLegacyStoriesTooltipsServiceImpl initWithFeatureSettingsService:] */

undefined8 * FUN_1056e10e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9bb8;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_38,puVar1);
    uVar2 = puVar1[2];
    puVar1[2] = 0;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1056e117c; end: 1056e11bb; -[SCLegacyStoriesTooltipsServiceImpl hasSeenOnboardingOverlay] */

undefined8 FUN_1056e117c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1576c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1056e11bc; end: 1056e11f3; -[SCLegacyStoriesTooltipsServiceImpl setSeenOnboardingOverlay] */

void FUN_1056e11bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056e11f4; end: 1056e1233; -[SCLegacyStoriesTooltipsServiceImpl hasSeenTapToolTipsOverlayEnough] */

undefined8 FUN_1056e11f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1576e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1056e1234; end: 1056e131f; -[SCLegacyStoriesTooltipsServiceImpl setSeenTapToolTipsOverlay] */

void FUN_1056e1234(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c157700();
  func_0x00010c1f9d80(uVar1,param_2,lVar3 + 1);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar4 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c157700();
  if (9 < uVar5) {
    uVar6 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c1576e0();
    _objc_release(uVar6);
    _objc_release(uVar4);
    if ((uVar5 & 1) != 0) {
      return;
    }
    uVar4 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9d60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1056e1320; end: 1056e135f; -[SCLegacyStoriesTooltipsServiceImpl hasSeenAutoAdvanceTooltip] */

undefined8 FUN_1056e1320(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1574a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1056e1360; end: 1056e1397; -[SCLegacyStoriesTooltipsServiceImpl setHasSeenAutoAdvanceOverlay] */

void FUN_1056e1360(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056e1398; end: 1056e13d7; -[SCLegacyStoriesTooltipsServiceImpl hasSeenStoryLeftTapOnboarding] */

undefined8 FUN_1056e1398(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157fa0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1056e13d8; end: 1056e140f; -[SCLegacyStoriesTooltipsServiceImpl setHasSeenStoryLeftTapOnboarding] */

void FUN_1056e13d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056e1410; end: 1056e144f; -[SCLegacyStoriesTooltipsServiceImpl shouldDisplayStoryInterstitialSwipeTooltip] */

uint FUN_1056e1410(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157f80();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 1056e1450; end: 1056e1487; -[SCLegacyStoriesTooltipsServiceImpl setDisplayedStoryInterstitialSwipeTooltip] */

void FUN_1056e1450(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056e1488; end: 1056e14c7; -[SCLegacyStoriesTooltipsServiceImpl seenStoriesForInterstitialSwipeTooltipCount] */

undefined8 FUN_1056e1488(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157f40();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1056e14c8; end: 1056e152f; -[SCLegacyStoriesTooltipsServiceImpl incrementSeenStoriesForInterstitialSwipeTooltipCount] */

void FUN_1056e14c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157f40();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056e1530; end: 1056e1567; -[SCLegacyStoriesTooltipsServiceImpl _resetAATooltipAccepted] */

void FUN_1056e1530(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056e1568; end: 1056e1597; -[SCLegacyStoriesTooltipsServiceImpl .cxx_destruct] */

void FUN_1056e1568(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e1598; end: 1056e170b; +[SCStoryUsageLoggerLazyFactory storiesUsageLoggerLazyWithUserBlizzardLogger:] */

void FUN_1056e1598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1056e1630;
  puStack_30 = &UNK_1108a9f00;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056e170c; end: 1056e1857; -[SCShortLinkServiceProvider _createShortLinkEncodingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056e170c(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126bd3c0;
  _objc_alloc(PTR_PTR_1126bd3c0);
  lVar2 = param_1 + _DAT_112727e68;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112727e6c;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112727e70;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112727e74;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058ce0(puVar1,param_2,lVar4,lVar6,lVar8,lVar9);
  _objc_release(lVar9);
  _objc_release(param_1);
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



/* Entry: 1056e1858; end: 1056e19a7; -[SCShortLinkServiceProvider _createShortLinkDecodingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056e1858(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126bd3c8;
  _objc_alloc(PTR_PTR_1126bd3c8);
  lVar2 = param_1 + _DAT_112727e68;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112727e6c;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112727e70;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112727e78;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058d00(puVar1,param_2,lVar4,lVar6,lVar8,lVar9,0);
  _objc_release(lVar9);
  _objc_release(param_1);
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



/* Entry: 1056e19a8; end: 1056e1a0f; -[SCShortLinkServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056e19a8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727e74);
  _objc_destroyWeak(param_1 + _DAT_112727e78);
  _objc_destroyWeak(param_1 + _DAT_112727e70);
  _objc_destroyWeak(param_1 + _DAT_112727e68);
  _objc_destroyWeak(param_1 + _DAT_112727e6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727e7c);
  return;
}



/* Entry: 1056e1a10; end: 1056e1af3; -[SCUnauthShortLinkServiceProvider provide] */

void FUN_1056e1a10(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd3d0;
  _objc_alloc(PTR_PTR_1126bd3d0);
  func_0x00010c045de0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056e1af4; end: 1056e1b33;  */

void FUN_1056e1af4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf34a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1056e1b34; end: 1056e1c83; -[SCUnauthShortLinkServiceProvider _createShortLinkDecodingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056e1b34(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126bd3c8;
  _objc_alloc(PTR_PTR_1126bd3c8);
  lVar2 = param_1 + _DAT_112727e80;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112727e84;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112727e88;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112727e8c;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058d00(puVar1,param_2,lVar4,lVar6,lVar8,lVar9,1);
  _objc_release(lVar9);
  _objc_release(param_1);
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



/* Entry: 1056e1c84; end: 1056e1ceb; -[SCUnauthShortLinkServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056e1c84(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727e94);
  _objc_destroyWeak(param_1 + _DAT_112727e8c);
  _objc_destroyWeak(param_1 + _DAT_112727e88);
  _objc_destroyWeak(param_1 + _DAT_112727e80);
  _objc_destroyWeak(param_1 + _DAT_112727e84);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727e90);
  return;
}



/* Entry: 1056e1cec; end: 1056e1e6f; -[SCShortLinkDecodingGRPCService initWithUnifiedGRPCClientFactory:circumstanceEngine:grapheneRegistry:notificationPool:useUnauthAPI:] */

undefined1 *
FUN_1056e1cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126e9bc0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126bd3d8;
    ppuVar1 = &PTR____CFConstantStringClassReference_110df7ab8;
    if (param_7 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110df7a98;
    }
    _objc_retain(ppuVar1);
    _objc_alloc();
    puVar5 = (undefined1 *)puVar2;
    func_0x00010be24de0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    func_0x00010c058f80();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined **)((long)puVar2 + 0x10) = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_5;
    _objc_release(uVar3);
    *(char *)((long)puVar2 + 0x28) = (char)param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1056e1e70; end: 1056e1ff3; -[SCShortLinkDecodingGRPCService decodeShortLinkURL:completion:] */

void FUN_1056e1e70(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  bVar1 = *(byte *)(param_1 + 0x28);
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  if ((bVar1 & 1) == 0) {
    lVar2 = param_1;
    func_0x00010be0dc80(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1056e1f4c;
  puStack_40 = &UNK_1108a9f90;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bdf88a0(param_1,param_2,lVar2,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(lVar2);
  return;
}



/* Entry: 1056e1ff4; end: 1056e2067; -[SCShortLinkDecodingGRPCService showDecodeFailureErrorMessageUI] */

void FUN_1056e1ff4(void)

{
  _dispatch_time(0,1000000000);
  func_0x00010058c530();
  return;
}



/* Entry: 1056e2068; end: 1056e20f3;  */

void FUN_1056e2068(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  func_0x0001056e2bb8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar2,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1056e20f4; end: 1056e227b; -[SCShortLinkDecodingGRPCService _grpcUnifiedGrpcServiceForUnifiedGRPCClientFactory:serviceHost:serviceName:] */

void FUN_1056e20f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae728;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf24820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0380;
  func_0x00010c291260(PTR_PTR_1126b0380);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21dec0(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1eeba0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2eae07);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar2,param_2,puVar3,0x15,0,1);
  _objc_release(puVar3);
  uVar4 = param_3;
  func_0x00010bf56360(param_3,param_2,param_5,puVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1056e227c; end: 1056e22cb; -[SCShortLinkDecodingGRPCService _extractShortLinkURL:] */

void FUN_1056e227c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110dbff78);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056e22cc; end: 1056e2567; -[SCShortLinkDecodingGRPCService _decodeShortLinkURLForShortLinkURL:completion:] */

void FUN_1056e22cc(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    lVar1 = param_4;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_5 + 0x10))(param_5,0,puVar3);
      _objc_release(puVar3);
    }
    else {
      puVar2 = PTR_PTR_1126ae748;
      func_0x00010bf24820(PTR_PTR_1126ae748);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eeba0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_initWeak(auStack_58,param_2);
      _CACurrentMediaTime();
      if (*(char *)(param_2 + 0x28) == '\x01') {
        puVar3 = PTR_PTR_1126bd3e0;
        _objc_opt_new(PTR_PTR_1126bd3e0);
        func_0x00010c1ffb80();
        func_0x00010c16c6a0(puVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_2 + 0x10);
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_1056e2568;
        puStack_78 = &UNK_1108a9fc0;
        puVar4 = auStack_68;
        _objc_copyWeak(puVar4,auStack_58);
        uStack_60 = param_1;
        _objc_retain(param_5);
        lStack_70 = param_5;
        func_0x00010bf670a0(uVar5);
        lVar1 = lStack_70;
      }
      else {
        puVar3 = PTR_PTR_1126bd3e8;
        _objc_opt_new(PTR_PTR_1126bd3e8);
        func_0x00010c1ffb80();
        uVar5 = *(undefined8 *)(param_2 + 0x10);
        puVar4 = auStack_a0;
        _objc_copyWeak(puVar4,auStack_58);
        uStack_98 = param_1;
        _objc_retain(param_5);
        func_0x00010bf671a0(uVar5);
        lVar1 = param_5;
      }
      _objc_release(lVar1);
      _objc_destroyWeak(puVar4);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_58);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1056e2568; end: 1056e2623;  */

void FUN_1056e2568(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be544a0(*(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_3 == 0) {
    uVar1 = param_2;
    func_0x00010c1203e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1,0);
    _objc_release(uVar1);
  }
  else {
    (**(code **)(lVar2 + 0x10))(lVar2,0,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056e2624; end: 1056e27f7;  */

void FUN_1056e2624(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  if ((param_3 == 0) && (puVar1 = param_2, func_0x00010bfdc080(), ((ulong)puVar1 & 1) != 0)) {
    puVar1 = param_2;
    func_0x00010c22d340(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c1203e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010be544a0(uVar5,lVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x00010be544a0(uVar5,lVar4);
  }
  _objc_release(lVar4);
  puVar1 = param_2;
  func_0x00010bfdc080();
  if ((int)puVar1 == 0) {
LAB_1056e274c:
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,puVar1);
  }
  else {
    puVar1 = param_2;
    func_0x00010c22d340();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c1203e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar3 == (undefined *)0x0) goto LAB_1056e274c;
    lVar4 = *(long *)(param_1 + 0x20);
    if (param_3 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,0,param_3);
      goto LAB_1056e2790;
    }
    puVar1 = param_2;
    func_0x00010c22d340(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c1203e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,puVar2,0);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
LAB_1056e2790:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056e27f8; end: 1056e2927; -[SCShortLinkDecodingGRPCService _logGrapheneMetricsWithStartTime:hasError:] */

void FUN_1056e27f8(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  puVar2 = PTR_PTR_1126bd3f0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad2d8;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  }
  dVar6 = param_1;
  _objc_retain(ppuVar1);
  func_0x00010c22d9e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c22d9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c22d9c0();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010befbfe0(uVar5,param_3,puVar3,(long)((dVar6 - param_1) * 1000.0));
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1056e2928; end: 1056e296f; -[SCShortLinkDecodingGRPCService .cxx_destruct] */

void FUN_1056e2928(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e2970; end: 1056e29e3; -[UNISCDeeplinkShortlinkDecoding initWithUnifiedGrpcService:] */

undefined1 * FUN_1056e2970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9bc8;
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



/* Entry: 1056e29e4; end: 1056e2ac7; -[UNISCDeeplinkShortlinkDecoding decodeShortLinkWithRequest:callOptionsBuilder:handler:] */

void FUN_1056e29e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bd3f8;
  _objc_opt_class(PTR_PTR_1126bd3f8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df7b38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056e2ac8; end: 1056e2bab; -[UNISCDeeplinkShortlinkDecoding decodeRawLinkOnlyWithRequest:callOptionsBuilder:handler:] */

void FUN_1056e2ac8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bd400;
  _objc_opt_class(PTR_PTR_1126bd400);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df7b58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056e2bac; end: 1056e2bcf; -[UNISCDeeplinkShortlinkDecoding .cxx_destruct] */

void FUN_1056e2bac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e2bd0; end: 1056e2bfb; +[SCGrapheneShortlinkDecodingMetric shortlinkDecodingRequest] */

void FUN_1056e2bd0(void)

{
  _objc_alloc(PTR_PTR_1126bd3f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056e2bfc; end: 1056e2c9b; -[SCGrapheneShortlinkDecodingMetric description] */

void FUN_1056e2bfc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df7bb8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110df7bb8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e9bd0;
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



/* Entry: 1056e2c9c; end: 1056e2ddf; -[SCGrapheneRegistry shortlinkDecodingGraphene] */

void FUN_1056e2c9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1056e2d24;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bf9e8 != -1) {
    func_0x00010002a2fc(0x1136bf9e8,&puStack_48);
  }
  uVar1 = uRam00000001136bf9e0;
  _objc_retain(uRam00000001136bf9e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056e2de0; end: 1056e2e47; +[SCDeeplinkDecodeShortLinkRequest descriptor] */

void FUN_1056e2de0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf9f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5ad10,
                        &PTR____CFConstantStringClassReference_110df7bf8,&PTR_DAT_1130f5ab0,
                        &PTR_DAT_1130f5b48,3,0x18,0x1c);
    puRam00000001136bf9f0 = puVar1;
  }
  return;
}



/* Entry: 1056e2e48; end: 1056e2eaf; +[SCDeeplinkDecodeShortLinkResponse descriptor] */

void FUN_1056e2e48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf9f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5ad60,
                        &PTR____CFConstantStringClassReference_110df7c18,&PTR_DAT_1130f5ab0,
                        &PTR_DAT_1130f5b08,2,0x18,0x1c);
    puRam00000001136bf9f8 = puVar1;
  }
  return;
}



/* Entry: 1056e2eb0; end: 1056e2f17; +[SCDeeplinkDecodeRawLinkOnlyRequest descriptor] */

void FUN_1056e2eb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfa00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5adb0,
                        &PTR____CFConstantStringClassReference_110df7c38,&PTR_DAT_1130f5ab0,
                        &PTR_DAT_1130f5ac8,1,0x10,0x1c);
    puRam00000001136bfa00 = puVar1;
  }
  return;
}



/* Entry: 1056e2f18; end: 1056e2f93; +[SCDeeplinkDecodeRawLinkOnlyResponse descriptor] */

undefined * FUN_1056e2f18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfa08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5ae00,
                        &PTR____CFConstantStringClassReference_110df7c58,&PTR_DAT_1130f5ab0,
                        &PTR_DAT_1130f5ae8,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bfa08 = puVar1;
  }
  return puRam00000001136bfa08;
}



/* Entry: 1056e2f94; end: 1056e3007; -[UNISCDeeplinkDeeplinkEncoding initWithUnifiedGrpcService:] */

undefined1 * FUN_1056e2f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9bd8;
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



/* Entry: 1056e3008; end: 1056e30eb; -[UNISCDeeplinkDeeplinkEncoding createShortLinkWithRequest:callOptionsBuilder:handler:] */

void FUN_1056e3008(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bd408;
  _objc_opt_class(PTR_PTR_1126bd408);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df7c78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056e30ec; end: 1056e30f7; -[UNISCDeeplinkDeeplinkEncoding .cxx_destruct] */

void FUN_1056e30ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e30f8; end: 1056e3233; -[SCShortLinkEncodingGRPCService initWithUnifiedGRPCClientFactory:circumstanceEngine:grapheneRegistry:networkConnectivityMonitor:] */

undefined1 *
FUN_1056e30f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e9be0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bd410;
    _objc_alloc();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be24dc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c058f80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056e3234; end: 1056e354f; -[SCShortLinkEncodingGRPCService encodeShortLinkURLForDeepLinkURL:deeplinkFeature:deeplinkTeam:completion:] */

void FUN_1056e3234(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  if (param_7 == 0) goto LAB_1056e34fc;
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_7 + 0x10))(param_7,0,puVar5);
LAB_1056e34f0:
    _objc_release(puVar5);
  }
  else {
    uVar2 = *(ulong *)(param_2 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06f000();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      puVar4 = PTR_PTR_1126bd418;
      _objc_opt_new(PTR_PTR_1126bd418);
      puVar5 = PTR_PTR_1126bd420;
      _objc_opt_new(PTR_PTR_1126bd420);
      func_0x00010c1e7960();
      func_0x00010c18c260(puVar5);
      func_0x00010c1c8920(puVar5);
      func_0x00010c19a840(puVar5);
      func_0x00010c2129e0(puVar5);
      func_0x00010c21a900(puVar5);
      func_0x00010c1bdec0(puVar5);
      func_0x00010c17ab80(puVar5);
      func_0x00010c1ffba0(puVar4);
      puVar6 = PTR_PTR_1126ae748;
      func_0x00010bf24820(PTR_PTR_1126ae748);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eeba0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_initWeak(auStack_68,param_2);
      _CACurrentMediaTime();
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      _objc_copyWeak(auStack_78,auStack_68);
      uStack_70 = param_1;
      _objc_retain(param_7);
      func_0x00010bf58e40(uVar7);
      _objc_release(param_7);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar6);
      goto LAB_1056e34f0;
    }
    _CACurrentMediaTime();
    func_0x00010be544c0(param_2);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_7 + 0x10))(param_7,0,puVar4);
  }
  _objc_release(puVar4);
LAB_1056e34fc:
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}


