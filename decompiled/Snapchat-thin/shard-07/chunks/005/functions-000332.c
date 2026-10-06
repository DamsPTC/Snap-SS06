/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105606258; end: 105606337; -[SCMediaTranscodingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105606258(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726c0c);
  _objc_destroyWeak(param_1 + _DAT_112726c08);
  _objc_destroyWeak(param_1 + _DAT_112726c2c);
  _objc_destroyWeak(param_1 + _DAT_112726c04);
  _objc_destroyWeak(param_1 + _DAT_112726c00);
  _objc_destroyWeak(param_1 + _DAT_112726c28);
  _objc_destroyWeak(param_1 + _DAT_112726c24);
  _objc_destroyWeak(param_1 + _DAT_112726c20);
  _objc_destroyWeak(param_1 + _DAT_112726c1c);
  _objc_destroyWeak(param_1 + _DAT_112726c18);
  _objc_destroyWeak(param_1 + _DAT_112726bfc);
  _objc_destroyWeak(param_1 + _DAT_112726c10);
  _objc_destroyWeak(param_1 + _DAT_112726bf0);
  _objc_destroyWeak(param_1 + _DAT_112726bf4);
  _objc_destroyWeak(param_1 + _DAT_112726bf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726c14);
  return;
}



/* Entry: 105606338; end: 1056063c7; -[SCSmartTemplateServiceImpl initWithNativeModelService:] */

undefined1 * FUN_105606338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e95d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bc448;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056063c8; end: 1056065eb; -[SCSmartTemplateServiceImpl applyTemplate:withSnapDoc:error:] */

void FUN_1056063c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  puVar1 = PTR_PTR_1126bc450;
  _objc_alloc(PTR_PTR_1126bc450);
  uVar2 = param_4;
  func_0x00010bf63640(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c046d80(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bc458;
  _objc_alloc(PTR_PTR_1126bc458);
  uVar2 = param_5;
  func_0x00010bf63640(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0475e0(puVar3,param_3,uVar2);
  _objc_release(uVar2);
  lVar4 = *(long *)(param_2 + 8);
  func_0x00010bf08960(lVar4,param_3,puVar3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8fa80(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110df1db8,
                      lVar5 == 0);
  _objc_release(lVar5);
  lVar5 = lVar4;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar8 = PTR_PTR_1126b25c0;
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar7 = lVar4;
  if (lVar5 == 0) {
    func_0x00010c13ca20(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010c23fea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0(puVar8,param_3,lVar5,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf987e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar6,param_3,&PTR____CFConstantStringClassReference_110df1d98,lVar5,
                        0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar8 = (undefined *)0x0;
    *param_6 = puVar6;
  }
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1056065ec; end: 1056067ab; -[SCSmartTemplateServiceImpl removeTemplateWithSnapDoc:error:] */

void FUN_1056065ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  puVar1 = PTR_PTR_1126bc458;
  _objc_alloc(PTR_PTR_1126bc458);
  uVar2 = param_4;
  func_0x00010bf63640(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0475e0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_2 + 8);
  func_0x00010c12e9e0(lVar3,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8fa80(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110dac918,
                      lVar4 == 0);
  _objc_release(lVar4);
  lVar4 = lVar3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR_PTR_1126b25c0;
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar6 = lVar3;
  if (lVar4 == 0) {
    func_0x00010c13ca20(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010c23fea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0(puVar7,param_3,lVar4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf987e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar5,param_3,&PTR____CFConstantStringClassReference_110df1d98,lVar4,
                        0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar7 = (undefined *)0x0;
    *param_5 = puVar5;
  }
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1056067ac; end: 1056068a3; -[SCSmartTemplateServiceImpl containsBeatSyncTemplate:] */

long FUN_1056067ac(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126bc458;
  if (param_3 == 0) {
    lVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar4 = param_3;
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0475e0(puVar1,param_2,lVar4);
    _objc_release(lVar4);
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bf4b740(lVar2,param_2,puVar1,2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      lVar3 = lVar2;
      func_0x00010c13ca20(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf1f3c0();
      _objc_release(lVar3);
    }
    else {
      lVar4 = 0;
    }
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  return lVar4;
}



/* Entry: 1056068a4; end: 105606b77; -[SCSmartTemplateServiceImpl listTemplates:error:] */

void FUN_1056068a4(double param_1,long param_2,undefined8 param_3,long param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  double dVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _CACurrentMediaTime();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  dVar12 = param_1;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126bc460;
  _objc_alloc();
  lVar3 = param_4;
  func_0x00010bf63640(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ed80();
  _objc_release(lVar3);
  uVar4 = *(ulong *)(param_2 + 8);
  func_0x00010c09a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (uVar8 == 0) {
    uVar5 = uVar4;
    func_0x00010c13ca20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (uVar8 != 0) {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(uVar5);
        }
        puVar11 = PTR_PTR_1126bc468;
        uVar6 = *(undefined8 *)(uVar10 * 8);
        func_0x00010c23eee0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f40e0(puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        if (*param_5 != 0) {
          _objc_release(puVar11);
          goto LAB_105606ad4;
        }
        func_0x00010befa120(puVar1);
        _objc_release(puVar11);
        uVar10 = uVar10 + 1;
      } while (uVar8 != uVar10);
      uVar8 = uVar5;
      func_0x00010bf52a60();
    }
LAB_105606ad4:
    _objc_release(uVar5);
    uVar8 = (ulong)(*param_5 == 0);
    ppuVar7 = &PTR____CFConstantStringClassReference_110df1dd8;
    func_0x00010be8fa80(param_1,param_2);
    puVar11 = puVar1;
    if (*param_5 != 0) {
      puVar11 = (undefined *)0x0;
    }
    _objc_retain(puVar11);
  }
  else {
    uVar5 = uVar4;
    func_0x00010bf987e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110df1d98;
    uVar8 = uVar10;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_5 = (long)puVar11;
    _objc_release(uVar10);
    _objc_release(uVar5);
    puVar11 = (undefined *)0x0;
    param_1 = dVar12;
  }
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  dVar12 = param_1;
  _objc_retain(ppuVar7);
  _CACurrentMediaTime();
  FUN_105606f04(dVar12 - param_1,*(undefined8 *)(param_4 + 0x10),ppuVar7,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 105606b78; end: 105606bd3; -[SCSmartTemplateServiceImpl _reportGrapheneMetricsWithApi:success:startTime:] */

void FUN_105606b78(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  
  dVar1 = param_1;
  _objc_retain(param_4);
  _CACurrentMediaTime();
  FUN_105606f04(dVar1 - param_1,*(undefined8 *)(param_2 + 0x10),param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105606bd4; end: 105606c43; -[SCSmartTemplateServiceImpl .cxx_destruct] */

void FUN_105606bd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105606c44; end: 105606c97; -[SCSmartTemplateServiceProvider _smartTemplateServiceInstance] */

void FUN_105606c44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc478;
  func_0x00010bf54200(PTR_PTR_1126bc478);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc480;
  _objc_alloc(PTR_PTR_1126bc480);
  func_0x00010c02e060();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105606c98; end: 105606ca7; -[SCSmartTemplateServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105606c98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726c38);
  return;
}



/* Entry: 105606ca8; end: 105606d1b; -[SCGrapheneSmartTemplateServiceMetric2 init] */

undefined1 * FUN_105606ca8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e95e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105606d1c; end: 105606f03;  */

void FUN_105606d1c(double param_1,long param_2,char *param_3,undefined8 *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,pcVar1);
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "\x01";
    puVar3 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11089fca0,puVar3,param_5);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    FUN_105606d1c(pcVar2,pcVar1,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 105606f04; end: 105606f7f;  */

void FUN_105606f04(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_105606d1c(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105606f80; end: 1056070f3; -[SCSnapDocPlaybackCapabilitiesManager initWithCircumstanceEngine:cameraConfiguration:previewABProvider:] */

undefined8 *
FUN_105606f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e95e8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1056070f4; end: 105607133;  */

void FUN_1056070f4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdebca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105607134; end: 10560713b; -[SCSnapDocPlaybackCapabilitiesManager isCompatibleWithSnapDoc:] */

void FUN_105607134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ed70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_isCompatibleWithSnapDoc_response_1125f9568,param_3,0);
  return;
}



/* Entry: 10560713c; end: 10560727f; -[SCSnapDocPlaybackCapabilitiesManager isCompatibleWithSnapDoc:responseError:] */

long FUN_10560713c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126bc458;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0475e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c07a340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar5 = lVar4;
  if (lVar3 == 0) {
    func_0x00010c13ca20(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010bf1f3c0();
  }
  else {
    if (param_4 != (long *)0x0) {
      lVar3 = lVar4;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = lVar3;
    }
    func_0x00010bf987e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf990e0();
    lVar3 = 0;
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar1);
  return lVar3;
}



/* Entry: 105607280; end: 105607383; -[SCSnapDocPlaybackCapabilitiesManager calculateMediaEffectCapabilitiesForSnapDoc:] */

long FUN_105607280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126bc458;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0475e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf27960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = lVar4;
    func_0x00010c13ca20(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c067fc0();
    _objc_release(lVar3);
  }
  else {
    lVar5 = -1;
  }
  _objc_release(lVar4);
  _objc_release(puVar1);
  return lVar5;
}



/* Entry: 105607384; end: 10560753f; -[SCSnapDocPlaybackCapabilitiesManager _createCapabilitiesManager] */

void FUN_105607384(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar2 = PTR_PTR_1126bc488;
  func_0x00010bf54200(PTR_PTR_1126bc488);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_11117ee80);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = 0x68766331;
  _VTIsHardwareDecodeSupported();
  if (iVar1 != 0) {
    func_0x00010befa120(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0da8);
  }
  func_0x00010c127520(puVar2,param_2,puVar3);
  func_0x00010c125da0(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantArray_11117ee98);
  func_0x00010c126820(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantArray_11117eeb0);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_11117eec8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125d20(puVar2,param_2,puVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  func_0x00010befa120(puVar5,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0dc0);
  func_0x00010befa120(puVar5,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0da8);
  func_0x00010befa120(puVar5,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0df0);
  func_0x00010befa120(puVar5,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0dd8);
  func_0x00010c126220(puVar2,param_2,puVar5);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_11117eee0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126a20(puVar2,param_2,puVar6);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_11117eef8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126fa0(puVar2,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105607540; end: 105607587; -[SCSnapDocPlaybackCapabilitiesManager .cxx_destruct] */

void FUN_105607540(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105607588; end: 1056076f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105607588(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126bc490;
  _objc_alloc(PTR_PTR_1126bc490);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar2 + _DAT_112726c54;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010bf398e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar4 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar4 + _DAT_112726c58;
    _objc_loadWeakRetained(lVar8);
  }
  lVar5 = lVar8;
  func_0x00010bf45e20(lVar8);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112726c5c;
    _objc_loadWeakRetained(lVar9);
  }
  lVar6 = lVar9;
  func_0x00010beec300(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe360(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056076f8; end: 1056077c7; -[SCSnapDocPlaybackCapabilitiesServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056076f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726c5c);
  _objc_destroyWeak(param_1 + _DAT_112726c58);
  _objc_destroyWeak(param_1 + _DAT_112726c54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726c50);
  return;
}



/* Entry: 1056077c8; end: 105607843; -[SCMediaComponentsCoordinatorEntryPoint _encryptionCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056077c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bc4a8;
  _objc_alloc(PTR_PTR_1126bc4a8);
  param_1 = param_1 + _DAT_112726c64;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038020(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105607844; end: 1056078bf; -[SCMediaComponentsCoordinatorEntryPoint _overlayCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105607844(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bc4b0;
  _objc_alloc(PTR_PTR_1126bc4b0);
  param_1 = param_1 + _DAT_112726c68;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002e80(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056078c0; end: 105607913; -[SCMediaComponentsCoordinatorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056078c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112726c60,0);
  _objc_destroyWeak(param_1 + _DAT_112726c64);
  _objc_destroyWeak(param_1 + _DAT_112726c68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726c6c);
  return;
}



/* Entry: 105607914; end: 105607987; -[SCMediaEncryptionCoordinatorImpl initWithPreferences:] */

undefined1 * FUN_105607914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e95f0;
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



/* Entry: 105607988; end: 105607a37; -[SCMediaEncryptionCoordinatorImpl setEncInfo:forMediaId:] */

void FUN_105607988(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1d0560(uVar2,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105607a38; end: 105607ae3; -[SCMediaEncryptionCoordinatorImpl encInfoForMediaId:] */

void FUN_105607a38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010c0dff20(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105607ae4; end: 105607b7f; -[SCMediaEncryptionCoordinatorImpl removeEncInfoForMediaId:] */

void FUN_105607ae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0560(uVar2,param_2,0,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105607b80; end: 105607b8b; -[SCMediaEncryptionCoordinatorImpl .cxx_destruct] */

void FUN_105607b80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105607b8c; end: 105607bff; -[SCMediaOverlayCoordinatorImpl initWithContentDelivery:] */

undefined1 * FUN_105607b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e95f8;
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



/* Entry: 105607c00; end: 105607cf3; -[SCMediaOverlayCoordinatorImpl setOverlayData:forMediaId:] */

void FUN_105607c00(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    FUN_105607cf4(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf64e40(0x4143c68000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c14a860(uVar2,param_2,param_3,uVar3,puVar5,1,&PTR___NSConcreteGlobalBlock_11089fdd0)
    ;
    _objc_release(puVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105607cf4; end: 105607d63;  */

void FUN_105607cf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df1e18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105607d64; end: 105607d67;  */

void FUN_105607d64(void)

{
  return;
}



/* Entry: 105607d68; end: 105607e77; -[SCMediaOverlayCoordinatorImpl retrieveOverlayDataForMediaId:completion:] */

void FUN_105607d68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_105607cf4(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105607e78;
  puStack_40 = &UNK_110880278;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c13e480(uVar3,param_2,uVar1,puVar2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 105607e78; end: 105607e83;  */

void FUN_105607e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105607e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105607e84; end: 105607f67; -[SCMediaOverlayCoordinatorImpl removeOverlayDataForMediaId:] */

void FUN_105607e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_105607cf4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_40 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b940(uVar3,param_2,puVar2,&PTR___NSConcreteGlobalBlock_11089fdf0);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105607f68; end: 105607f6b;  */

void FUN_105607f68(void)

{
  return;
}



/* Entry: 105607f6c; end: 105607f77; -[SCMediaOverlayCoordinatorImpl .cxx_destruct] */

void FUN_105607f6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105607f78; end: 105608037;  */

void FUN_105607f78(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105608038; end: 1056080b3; -[SCBoltDataUploaderServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105608038(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_30;
  undefined *puStack_28;
  
  lVar3 = (long)_DAT_112726c80;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf39f80();
    _objc_release(uVar2);
  }
  puStack_28 = PTR_PTR_1126e9600;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056080b4; end: 105608437; -[SCBoltDataUploaderServiceProvider _boltDataUploader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056080b4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  double dStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar11 = (long)_DAT_112726c84;
  lVar1 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067f20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067fc0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  dVar12 = (double)(lVar4 * 0x3c);
  puVar5 = PTR_PTR_1126bc4c0;
  _objc_alloc();
  func_0x00010c0111a0(dVar12);
  _objc_initWeak(auStack_80,param_1);
  puVar6 = PTR_PTR_1126ae720;
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105608438;
  puStack_90 = &UNK_11089fea0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae720;
  puStack_d0 = puVar9;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105608478;
  puStack_b8 = &UNK_11089fed0;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ae720;
  puStack_118 = puVar9;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x1056084b8;
  puStack_100 = &UNK_11089ff00;
  _objc_copyWeak(auStack_e0,auStack_80);
  puStack_f8 = puVar6;
  _objc_retain(puVar5);
  puStack_f0 = puVar5;
  puStack_e8 = puVar7;
  dStack_d8 = dVar12;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112726c80);
  *(undefined **)(param_1 + _DAT_112726c80) = puVar8;
  _objc_release(uVar10);
  puVar9 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_120,auStack_80);
  func_0x00010bf11fe0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126bc4c8;
  _objc_alloc(PTR_PTR_1126bc4c8);
  param_1 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001540(dVar12,puVar8);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_120);
  _objc_release(puStack_f0);
  _objc_destroyWeak(auStack_e0);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105608438; end: 10560854f;  */

void FUN_105608438(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bee5c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105608550; end: 1056085e3; -[SCBoltDataUploaderServiceProvider _uploadProgressMonitor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105608550(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bc4d0;
  _objc_alloc(PTR_PTR_1126bc4d0);
  param_1 = param_1 + _DAT_112726c88;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f100(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056085e4; end: 10560885f; -[SCBoltDataUploaderServiceProvider _createBoltDataUploaderImplWithUploadProgressMonitor:configProviderLazy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056085e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126b7f00;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_112726c88;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b7f08;
  _objc_alloc_init(PTR_PTR_1126b7f08);
  lVar9 = (long)_DAT_112726c84;
  lVar6 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f280(puVar1,param_2,lVar4,puVar5,0,0,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar2 = lVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf1f440();
  _objc_release(lVar2);
  _objc_release(lVar9);
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)lVar6 == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    puVar5 = PTR_PTR_1126b7f60;
    func_0x00010bfccf40(PTR_PTR_1126b7f60,param_2,&PTR____CFConstantStringClassReference_110df1ed8,1
                        ,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar8,param_2,&PTR____CFConstantStringClassReference_110df1eb8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126bc4d8;
  _objc_alloc(PTR_PTR_1126bc4d8);
  lVar2 = param_1 + _DAT_112726c8c;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112726c90;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e080(puVar5,param_2,puVar1,param_3,lVar6,ppuVar8,lVar9);
  _objc_release(param_3);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(ppuVar8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105608860; end: 105608a37; -[SCBoltDataUploaderServiceProvider _resumableUploadConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105608860(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112726c84;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067f00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067f00();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126bc4e0;
  func_0x00010c13d160(PTR_PTR_1126bc4e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4040(0,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4020(puVar4,param_2,(long)(int)lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc160(puVar4,param_2,(long)(int)lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2adda0(puVar4,param_2,2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab320(puVar4,param_2,2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc120(puVar4,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7460(puVar4,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105608a38; end: 105608c57; -[SCBoltDataUploaderServiceProvider _createResumableUploaderImplWithUploadProgressMonitor:resumableValidator:safetyMarginInSeconds:configProviderLazy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105608a38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  
  puVar1 = PTR_PTR_1126bc4e8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  lVar2 = param_2 + _DAT_112726c94;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2 + _DAT_112726c88;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2 + _DAT_112726c98;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2 + _DAT_112726c9c;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_2 + _DAT_112726c8c;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_2 + _DAT_112726c84;
  _objc_loadWeakRetained();
  lVar13 = param_2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038140(param_1,puVar1,param_3,lVar3,param_5,lVar6,lVar8,param_6,lVar10,lVar12,param_4
                      ,lVar13);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar13);
  _objc_release(param_2);
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



/* Entry: 105608c58; end: 105608d63; -[SCBoltDataUploaderServiceProvider _createSCNCupsUploadLocationProvider] */

void FUN_105608c58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar7 = PTR_PTR_1126bc4f0;
  uVar1 = param_1;
  FUN_105608d64();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf106e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_105608d64(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5c580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54380(puVar7,param_2,uVar3,uVar6,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105608d64; end: 105608d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105608d64(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112726ca0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105608d88; end: 105608f27; -[SCBoltDataUploaderServiceProvider _createUploadLocationManager] */

void FUN_105608d88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR_PTR_1126b7f60;
  func_0x00010bfccf40(PTR_PTR_1126b7f60,param_2,&PTR____CFConstantStringClassReference_110df1f18,1,0
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110df1ef8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_1;
  FUN_105608d64(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5c580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126bc4f8;
  FUN_105608d64(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf106e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b0380;
  func_0x00010c291260(PTR_PTR_1126b0380);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54360(puVar1,param_2,uVar4,uVar6,0,puVar2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105608f28; end: 105608fd7; -[SCBoltDataUploaderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105608f28(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726c90);
  _objc_destroyWeak(param_1 + _DAT_112726ca0);
  _objc_destroyWeak(param_1 + _DAT_112726c98);
  _objc_destroyWeak(param_1 + _DAT_112726c94);
  _objc_destroyWeak(param_1 + _DAT_112726c84);
  _objc_destroyWeak(param_1 + _DAT_112726c9c);
  _objc_destroyWeak(param_1 + _DAT_112726c8c);
  _objc_destroyWeak(param_1 + _DAT_112726c88);
  _objc_storeStrong(param_1 + _DAT_112726c7c,0);
  _objc_storeStrong(param_1 + _DAT_112726c78,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112726c80,0);
  return;
}



/* Entry: 105608fd8; end: 105609673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105608fd8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined *puVar35;
  long lVar36;
  undefined *puVar37;
  long in_stack_fffffffffffffe60;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  long alStack_70 [2];
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 == 0) {
    puVar35 = (undefined *)0x0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010bee6760();
    uVar3 = uVar1;
    func_0x00010beebce0();
    uVar4 = uVar1;
    func_0x00010beebd00();
    uVar5 = uVar1;
    func_0x00010beebcc0();
    if (((uVar3 & 1) == 0) && ((int)uVar4 == 0)) {
      uStack_a0 = 0;
    }
    else {
      uStack_a0 = uVar1;
      func_0x00010bdc3a80();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar35 = PTR_PTR_1126bc500;
    _objc_alloc();
    lVar6 = uVar1 + (long)_DAT_112726ca4;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105609674;
    puStack_80 = &UNK_11089ff60;
    puVar8 = PTR_PTR_1126ae720;
    uStack_78 = uVar1;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_98);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = uVar1 + (long)_DAT_112726ca8;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = uVar1 + (long)_DAT_112726cac;
    lVar11 = lVar29;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar13 = PTR_PTR_1126ae790;
    _objc_retain(lVar10);
    _objc_alloc(puVar13);
    puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2de876);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520(puVar13,param_2,puVar14,0x19,0,0x25);
    _objc_release(puVar14);
    puVar14 = PTR_PTR_1126bc520;
    _objc_alloc();
    alStack_70[0] = 0;
    _objc_retain(lVar12);
    lVar15 = lVar10;
    func_0x00010bf878e0(lVar10,param_2,&PTR____CFConstantStringClassReference_110df1f58,alStack_70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    lVar22 = alStack_70[0];
    _objc_retain(alStack_70[0]);
    lVar16 = lVar12;
    func_0x00010c269d40(lVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    lVar17 = lVar16;
    func_0x00010c0c5a20(lVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar16);
    puVar37 = PTR_PTR_1126bc530;
    func_0x00010c0c4a40(PTR_PTR_1126bc530);
    _objc_retainAutoreleasedReturnValue();
    if (lVar15 == 0) {
      puVar19 = puVar37;
      func_0x00010c2ac460(puVar37,param_2,&PTR____CFConstantStringClassReference_110dce878,
                          &PTR____CFConstantStringClassReference_110dad2d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar37);
      ppuVar20 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar22 == 0) {
        ppuVar20 = &PTR____CFConstantStringClassReference_110db8b78;
      }
      else {
        lVar16 = lVar22;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3ec40();
        in_stack_fffffffffffffe60 = lVar16;
        func_0x00010c14de00(ppuVar20,param_2,&PTR____CFConstantStringClassReference_110df1ff8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar16);
      }
      puVar21 = puVar19;
      func_0x00010c2ac460(puVar19,param_2,&PTR____CFConstantStringClassReference_110daeeb8,ppuVar20)
      ;
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      func_0x00010bfec320(lVar17,param_2,puVar21,1);
      puVar37 = (undefined *)0x0;
    }
    else {
      puVar21 = puVar37;
      func_0x00010c2ac460(puVar37,param_2,&PTR____CFConstantStringClassReference_110dce878,
                          &PTR____CFConstantStringClassReference_110dab0d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar37);
      func_0x00010bfec320(lVar17,param_2,puVar21,1);
      ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,lVar15);
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = ppuVar18;
      func_0x00010bdc2c60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar18);
      puVar37 = PTR_PTR_1126bc538;
      _objc_alloc(PTR_PTR_1126bc538);
      func_0x00010c00cae0();
    }
    _objc_release(ppuVar20);
    _objc_release(puVar21);
    _objc_release(lVar17);
    _objc_release(lVar15);
    _objc_release(lVar22);
    func_0x00010c021000(puVar14,param_2,puVar37,lVar12);
    _objc_release(puVar37);
    puVar37 = PTR_PTR_1126bc528;
    _objc_alloc();
    func_0x00010c0356c0();
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(lVar12);
    lVar22 = uVar1 + (long)_DAT_112726cb0;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010bf1f200();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar23;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = uVar1 + (long)_DAT_112726cb4;
    _objc_loadWeakRetained();
    lVar25 = lVar15;
    func_0x00010bf1ef20();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = uVar1 + (long)_DAT_112726cb8;
    _objc_loadWeakRetained();
    lVar26 = lVar16;
    func_0x00010c243b00();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = (long)_DAT_112726cbc;
    lVar17 = uVar1 + lVar36;
    _objc_loadWeakRetained();
    lVar27 = lVar17;
    func_0x00010c0c4cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = uVar1 + lVar36;
    _objc_loadWeakRetained();
    lVar28 = lVar36;
    func_0x00010c0c5ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_loadWeakRetained();
    lVar30 = lVar29;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = uVar1 + (long)_DAT_112726cc0;
    _objc_loadWeakRetained();
    lVar32 = lVar31;
    func_0x00010bf51de0();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = uVar1 + (long)_DAT_112726cc4;
    _objc_loadWeakRetained();
    lVar34 = lVar33;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c035120(puVar35,param_2,lVar7,puVar8,puVar37,uStack_a0,uVar2 & 0xffffffff,
                        uVar3 & 0xffffffff,
                        CONCAT71(CONCAT61((int6)((ulong)in_stack_fffffffffffffe60 >> 0x10),
                                          (char)uVar5),(char)uVar4),lVar24,lVar25,lVar26,lVar27,
                        lVar28,lVar30,lVar32,lVar34);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar36);
    _objc_release(lVar27);
    _objc_release(lVar17);
    _objc_release(lVar26);
    _objc_release(lVar16);
    _objc_release(lVar25);
    _objc_release(lVar15);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(puVar37);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uStack_a0);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar35);
  return;
}



/* Entry: 105609674; end: 10560967b;  */

void FUN_105609674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__statePersister_11258e340);
  return;
}



/* Entry: 10560967c; end: 105609727; -[SCMediaOrchestrationServicesEntryPoint _statePersister] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10560967c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0(PTR_PTR_1126ae790,param_2,0x15,
                      &PTR____CFConstantStringClassReference_110df1f38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc510;
  _objc_alloc(PTR_PTR_1126bc510);
  param_1 = param_1 + _DAT_112726ccc;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040ee0(puVar2,param_2,lVar3,puVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105609728; end: 105609803; -[SCMediaOrchestrationServicesEntryPoint _SCMediaDataPackageManagerV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105609728(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2de876);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x19,0,0x25);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bc518;
  _objc_alloc(PTR_PTR_1126bc518);
  param_1 = param_1 + _DAT_112726cd0;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0031c0(puVar2,param_2,lVar3,puVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105609804; end: 105609873; -[SCMediaOrchestrationServicesEntryPoint _useMediaPackageManagerV2CofReading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105609804(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112726cc4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 105609874; end: 1056098e3; -[SCMediaOrchestrationServicesEntryPoint _writeToMediaPackageManagerV2OutsideCofReading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105609874(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112726cc4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 1056098e4; end: 105609953; -[SCMediaOrchestrationServicesEntryPoint _writeToMediaPackageManagerV2InsideCofReading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1056098e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112726cc4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 105609954; end: 1056099c3; -[SCMediaOrchestrationServicesEntryPoint _writeToMediaPackageManagerV1DisabledCofReading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105609954(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112726cc4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 1056099c4; end: 105609a87; -[SCMediaOrchestrationServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056099c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112726cc8,0);
  _objc_destroyWeak(param_1 + _DAT_112726cc0);
  _objc_destroyWeak(param_1 + _DAT_112726cd0);
  _objc_destroyWeak(param_1 + _DAT_112726cc4);
  _objc_destroyWeak(param_1 + _DAT_112726ccc);
  _objc_destroyWeak(param_1 + _DAT_112726ca8);
  _objc_destroyWeak(param_1 + _DAT_112726ca4);
  _objc_destroyWeak(param_1 + _DAT_112726cb8);
  _objc_destroyWeak(param_1 + _DAT_112726cb0);
  _objc_destroyWeak(param_1 + _DAT_112726cbc);
  _objc_destroyWeak(param_1 + _DAT_112726cac);
  _objc_destroyWeak(param_1 + _DAT_112726cb4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112726cd4,0);
  return;
}



/* Entry: 105609a88; end: 105609f5b; -[SCMediaOrchestrator initWithPerformer:statePersister:mediaDataPackageManaging:mediaDataPackageManagingV2:readFromMediaPackageManagerV2Enabled:writeToMediaPackageManagerV2InsideEnabled:writeToMediaPackageManagerV2OutsideEnabled:writeToMediaPackageManagerV1Disabled:uploadMediaDataManaging:boltDataUploaderLazy:videoFilterCoordinator:encryptionCoordinator:overlayCoordinator:grapheneRegistryLazy:snapUploaderCoordinator:circumstanceEngine:] */

undefined8 *
FUN_105609a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_80 = PTR_PTR_1126e9608;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[10];
    puVar1[10] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[3];
    puVar1[3] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[4];
    puVar1[4] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[5];
    puVar1[5] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[6];
    puVar1[6] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[7];
    puVar1[7] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[8];
    puVar1[8] = param_17;
    _objc_release(uVar2);
    uVar2 = param_16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c5a20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[9];
    puVar1[9] = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
    _objc_opt_new();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x62) = param_7;
    *(undefined1 *)((long)puVar1 + 0x61) = param_8;
    *(undefined1 *)(puVar1 + 0xc) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 99) = param_9._1_1_;
    puVar4 = PTR_PTR_1126bc540;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_18);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_18);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_18);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar4;
    _objc_release(uVar2);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = PTR____NSDictionary0__struct_11034ab58;
    _objc_release(uVar2);
    func_0x00010be3b000(puVar1);
    func_0x00010be89e60(puVar1);
    func_0x00010be89140(puVar1);
    _objc_release(param_18);
    _objc_release(param_18);
    _objc_release(param_18);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105609f5c; end: 10560a01b;  */

void FUN_105609f5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110df2158,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 10560a01c; end: 10560a073; -[SCMediaOrchestrator _registerTranscodeStatusReporterIfEnabled] */

void FUN_10560a01c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10560a074;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x50),param_2,&puStack_38);
  return;
}



/* Entry: 10560a074; end: 10560a1a7;  */

void FUN_10560a074(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110df2138,0,0);
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10560a1a8;
    puStack_58 = &UNK_11089ffc0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0e33e0(uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
    _objc_copyWeak(auStack_78,auStack_48);
    func_0x00010c0e33e0(uVar1);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 10560a1a8; end: 10560a23f;  */

void FUN_10560a1a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2196a0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10560a240; end: 10560a307; -[SCMediaOrchestrator transcodeStatusDidUpdateForMediaId:update:] */

void FUN_10560a240(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((param_4 != 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10560a308;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(param_3);
    lStack_48 = param_3;
    _objc_retain(param_4);
    lStack_40 = param_4;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(lStack_40);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10560a308; end: 10560a357;  */

void FUN_10560a308(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c0fa9c0();
  if (5 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xb8),PTR_s_removeObjectForKey__112628f18
               ,*(undefined8 *)(param_1 + 0x20));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xb8),
             PTR_s_setObject_forKeyedSubscript__112651bb8,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10560a358; end: 10560a3af; -[SCMediaOrchestrator _registerAsUploadStatusDelegateIfEnabled] */

void FUN_10560a358(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10560a3b0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x50),param_2,&puStack_38);
  return;
}



/* Entry: 10560a3b0; end: 10560a41b;  */

void FUN_10560a3b0(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bee5c60();
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    if ((uVar3 & 1) != 0) {
      func_0x00010c21cfc0(uVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10560a41c; end: 10560a45b; -[SCMediaOrchestrator _uploadProgressReportingEnabled] */

undefined8 FUN_10560a41c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10560a45c; end: 10560a5db; -[SCMediaOrchestrator uploadStatusDidUpdateForMediaId:update:] */

void FUN_10560a45c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (((param_4 != 0) && (lVar1 != 0)) && (lVar1 = param_1, func_0x00010bee5c60(), (int)lVar1 != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x10560a530;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(param_3);
    lStack_48 = param_3;
    _objc_retain(param_4);
    lStack_40 = param_4;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(lStack_40);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10560a5dc; end: 10560a61b; -[SCMediaOrchestrator _crossPostStoryPreserveEnabled] */

undefined8 FUN_10560a5dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10560a61c; end: 10560a65b; -[SCMediaOrchestrator _overwriteAppSourceOnlyWhenUnsetEnabled] */

undefined8 FUN_10560a61c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10560a65c; end: 10560a6b3; -[SCMediaOrchestrator _initialLoadSessionInfoStore] */

void FUN_10560a65c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10560a6b4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x50),param_2,&puStack_38);
  return;
}



/* Entry: 10560a6b4; end: 10560aa63;  */

void FUN_10560a6b4(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *in_x5;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar23;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined8 *unaff_x25;
  undefined *unaff_x26;
  undefined *puVar24;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long lStack_378;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_260;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined *puStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined1 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 uStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be4e6a0(*(undefined8 *)(param_1 + 0x20));
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_190 = lVar2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lStack_148 = *plStack_120;
    lStack_1a0 = param_1;
    do {
      unaff_x21 = 0;
      lStack_198 = lVar2;
      do {
        if (*plStack_120 != lStack_148) {
          _objc_enumerationMutation(lStack_190);
        }
        unaff_x26 = *(undefined **)(lStack_128 + unaff_x21 * 8);
        unaff_x25 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x70);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = unaff_x25;
        func_0x00010c253760();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = unaff_x25;
        puStack_138 = puVar20;
        func_0x00010c160480();
        if ((long)puVar12 < 2) {
          if (puVar12 == (undefined8 *)0x0) {
            unaff_x19 = unaff_x25;
            func_0x00010c08b2c0();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = unaff_x19;
            func_0x00010c0720c0();
            if ((int)puVar20 == 0) {
              _objc_release(unaff_x19);
            }
            else {
              unaff_x20 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x88);
              func_0x00010bf1f440();
              _objc_release(unaff_x19);
              puStack_140 = (undefined8 *)0x0;
              if (((ulong)unaff_x20 & 1) != 0) goto LAB_10560a83c;
            }
          }
          else if (puVar12 != (undefined8 *)0x1) goto LAB_10560a83c;
LAB_10560a834:
          puStack_140 = (undefined8 *)0x3;
        }
        else {
          if (puVar12 != (undefined8 *)0x2) {
            if (puVar12 == (undefined8 *)0x3) goto LAB_10560a834;
            if (puVar12 != (undefined8 *)0x4) goto LAB_10560a83c;
          }
          puStack_140 = puVar12;
        }
LAB_10560a83c:
        puVar20 = unaff_x25;
        func_0x00010c160480();
        if (puVar20 != puStack_140) {
          puVar3 = PTR_PTR_1126bc548;
          _objc_alloc();
          unaff_x19 = unaff_x25;
          puStack_158 = puVar3;
          func_0x00010bf93ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = unaff_x25;
          func_0x00010bf93e80();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = unaff_x25;
          puStack_160 = puVar20;
          func_0x00010bf4db80();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = unaff_x25;
          puStack_168 = puVar12;
          func_0x00010c15ea20();
          _objc_retainAutoreleasedReturnValue();
          uStack_178 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
          unaff_x23 = PTR__OBJC_CLASS___NSDate_1126ae770;
          puStack_170 = puVar20;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = unaff_x25;
          func_0x00010bf05f80();
          puVar12 = unaff_x25;
          puStack_180 = puVar20;
          func_0x00010c077940();
          puVar20 = unaff_x25;
          puStack_150 = unaff_x26;
          func_0x00010c08b2c0();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = unaff_x25;
          puStack_188 = puVar20;
          func_0x00010c0c6c20();
          puVar4 = unaff_x25;
          func_0x00010c0c59e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = unaff_x25;
          func_0x00010bf31200();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = unaff_x25;
          func_0x00010bf05fa0();
          unaff_x27 = puStack_160;
          unaff_x28 = puStack_168;
          unaff_x20 = puStack_170;
          uStack_1b0 = SUB81(puVar6,0);
          uStack_1d8 = SUB81(puVar12,0);
          puStack_1e8 = puStack_138;
          puStack_1e0 = puStack_180;
          unaff_x26 = puStack_158;
          in_x5 = puStack_168;
          puStack_1f0 = unaff_x23;
          puStack_1d0 = puVar20;
          puStack_1c8 = puVar19;
          puStack_1c0 = puVar4;
          puStack_1b8 = puVar5;
          func_0x00010c045680();
          param_1 = lStack_1a0;
          _objc_release(puVar5);
          lVar2 = lStack_198;
          _objc_release(puVar4);
          _objc_release(puStack_188);
          _objc_release(unaff_x23);
          _objc_release(unaff_x20);
          _objc_release(unaff_x28);
          _objc_release(unaff_x27);
          _objc_release(unaff_x19);
          func_0x00010bedb520(*(undefined8 *)(param_1 + 0x20));
          _objc_release(unaff_x26);
        }
        _objc_release(puStack_138);
        _objc_release(unaff_x25);
        unaff_x21 = unaff_x21 + 1;
      } while (lVar2 != unaff_x21);
      lVar2 = lStack_190;
      func_0x00010bf52a60();
      unaff_x24 = 0;
    } while (lVar2 != 0);
  }
  lVar2 = lStack_190;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_10560aa64;
  lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(lVar2 + 0x58);
  puStack_250 = unaff_x28;
  puStack_248 = unaff_x27;
  puStack_240 = unaff_x26;
  puStack_238 = unaff_x25;
  uStack_230 = unaff_x24;
  puStack_228 = unaff_x23;
  lStack_220 = param_1;
  lStack_218 = unaff_x21;
  puStack_210 = unaff_x20;
  puStack_208 = unaff_x19;
  puStack_200 = &stack0xfffffffffffffff0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar7;
  func_0x00010c13e9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar2 + 0x70);
  *(undefined8 *)(lVar2 + 0x70) = uVar22;
  _objc_release(uVar21);
  _objc_release(uVar7);
  if (*(long *)(lVar2 + 0x70) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar22 = *(undefined8 *)(lVar2 + 0x70);
    *(undefined **)(lVar2 + 0x70) = puVar3;
    _objc_release(uVar22);
  }
  lVar8 = *(long *)(lVar2 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010c13e9c0();
  *(long *)(lVar2 + 0x78) = lVar11 + 1;
  _objc_release(lVar8);
  uVar22 = *(undefined8 *)(lVar2 + 0x58);
  func_0x00010c269d40(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fa060();
  _objc_release(uVar22);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010bf64e40(0xc105180000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010bf64e40(0xc1446f4000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  plStack_310 = (long *)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  lVar11 = *(long *)(lVar2 + 0x70);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = &uStack_320;
  uVar22 = 0x10;
  lStack_378 = lVar11;
  func_0x00010bf52a60();
  if (lStack_378 != 0) {
    bVar1 = false;
    lVar8 = *plStack_310;
    do {
      lVar23 = 0;
      do {
        if (*plStack_310 != lVar8) {
          _objc_enumerationMutation(lVar11);
        }
        puVar12 = *(undefined8 **)(lVar2 + 0x70);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar12;
        func_0x00010c08a700();
        _objc_retainAutoreleasedReturnValue();
        if (puVar20 == (undefined8 *)0x0) {
LAB_10560ad44:
          puVar24 = PTR_PTR_1126bc548;
          _objc_alloc();
          func_0x00010c160480();
          puVar20 = puVar12;
          func_0x00010bf93ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar12;
          func_0x00010bf93e80();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar12;
          func_0x00010bf4db80();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar12;
          func_0x00010c15ea20();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar15;
          func_0x00010562f808();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf05f80();
          func_0x00010c077940();
          puVar6 = puVar12;
          func_0x00010c08b2c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c6c20();
          puVar17 = puVar12;
          func_0x00010c0c59e0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar12;
          func_0x00010bf31200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf05fa0();
          in_x5 = puVar4;
          func_0x00010c045680();
          _objc_release(puVar18);
          _objc_release(puVar17);
          _objc_release(puVar6);
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar19);
          _objc_release(puVar20);
          func_0x00010c1d0640(*(undefined8 *)(lVar2 + 0x70));
LAB_10560aef4:
          bVar1 = true;
        }
        else {
          puVar19 = puVar12;
          func_0x00010c253760();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar20);
          if (puVar19 == (undefined8 *)0x0) goto LAB_10560ad44;
          puVar20 = puVar12;
          func_0x00010c160480();
          if (puVar20 < (undefined8 *)0x5) {
            puVar24 = puVar10;
            if ((1L << ((ulong)puVar20 & 0x3f) & 0xbU) == 0) {
              puVar24 = puVar9;
            }
            _objc_retain(puVar24);
          }
          else {
            puVar24 = (undefined *)0x0;
          }
          puVar20 = puVar12;
          func_0x00010c08a700();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar20;
          func_0x00010c06d160();
          _objc_release(puVar20);
          if ((int)puVar19 != 0) {
            func_0x00010c12d3e0(*(undefined8 *)(lVar2 + 0x70));
            lVar13 = lVar2;
            func_0x00010c299780();
            _objc_retainAutoreleasedReturnValue();
            lVar14 = lVar13;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar13);
            if (lVar14 != 0) {
              lVar13 = lVar2;
              func_0x00010c299780(lVar2);
              _objc_retainAutoreleasedReturnValue();
              lVar14 = lVar13;
              func_0x00010c0d3c80();
              _objc_release(lVar13);
              func_0x00010c12d3e0(lVar14);
              func_0x00010c221340(lVar2);
              _objc_release(lVar14);
            }
            goto LAB_10560aef4;
          }
        }
        _objc_release(puVar24);
        _objc_release(puVar12);
        lVar23 = lVar23 + 1;
      } while (lStack_378 != lVar23);
      puVar20 = &uStack_320;
      uVar22 = 0x10;
      lStack_378 = lVar11;
      func_0x00010bf52a60();
    } while (lStack_378 != 0);
    _objc_release(lVar11);
    if (!bVar1) goto LAB_10560af78;
    lVar11 = *(long *)(lVar2 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = *(undefined8 **)(lVar2 + 0x70);
    func_0x00010c0fa180();
  }
  _objc_release(lVar11);
LAB_10560af78:
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_260) {
    ___stack_chk_fail();
    _objc_retain(puVar20);
    _objc_retain(uVar22);
    _objc_retain(in_x5);
    puVar12 = puVar20;
    func_0x00010c08fa60();
    if (puVar12 == (undefined8 *)0x0) {
      func_0x00010562f808();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = (undefined8 *)0x0;
      FUN_10562f854(0,4,puVar12,&PTR____CFConstantStringClassReference_110df2178,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_retain(in_x5);
      _objc_retain(puVar20);
      _objc_retain(puVar19);
      func_0x00010c0f7fc0(uVar22);
      func_0x00010be572c0(puVar3);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(in_x5);
      _objc_release(in_x5);
    }
    else {
      uVar7 = *(undefined8 *)(puVar3 + 0x50);
      _objc_retain(uVar22);
      _objc_retain(in_x5);
      _objc_retain(puVar20);
      func_0x00010c0f7fc0(uVar7);
      _objc_release(in_x5);
      _objc_release(uVar22);
      _objc_release(puVar20);
      puVar19 = puVar20;
      puVar20 = in_x5;
    }
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(uVar22);
    return;
  }
  return;
}



/* Entry: 10560aa64; end: 10560afcb; -[SCMediaOrchestrator _loadSessionInfos] */

void FUN_10560aa64(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *in_x5;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined *puVar23;
  long lStack_188;
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
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar2;
  func_0x00010c13e9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar21;
  _objc_release(uVar20);
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x70) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar21 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar3;
    _objc_release(uVar21);
  }
  lVar4 = *(long *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c13e9c0();
  *(long *)(param_1 + 0x78) = lVar7 + 1;
  _objc_release(lVar4);
  uVar21 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fa060();
  _objc_release(uVar21);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf64e40(0xc105180000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf64e40(0xc1446f4000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + 0x70);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = &uStack_130;
  uVar21 = 0x10;
  lStack_188 = lVar7;
  func_0x00010bf52a60();
  if (lStack_188 != 0) {
    bVar1 = false;
    lVar4 = *plStack_120;
    do {
      lVar22 = 0;
      do {
        if (*plStack_120 != lVar4) {
          _objc_enumerationMutation(lVar7);
        }
        puVar8 = *(undefined8 **)(param_1 + 0x70);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar8;
        func_0x00010c08a700();
        _objc_retainAutoreleasedReturnValue();
        if (puVar19 == (undefined8 *)0x0) {
LAB_10560ad44:
          puVar23 = PTR_PTR_1126bc548;
          _objc_alloc();
          func_0x00010c160480();
          puVar19 = puVar8;
          func_0x00010bf93ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar8;
          func_0x00010bf93e80();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar8;
          func_0x00010bf4db80();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar8;
          func_0x00010c15ea20();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010562f808();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf05f80();
          func_0x00010c077940();
          puVar15 = puVar8;
          func_0x00010c08b2c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c6c20();
          puVar16 = puVar8;
          func_0x00010c0c59e0();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar8;
          func_0x00010bf31200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf05fa0();
          in_x5 = puVar11;
          func_0x00010c045680();
          _objc_release(puVar17);
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar18);
          _objc_release(puVar19);
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x70));
LAB_10560aef4:
          bVar1 = true;
        }
        else {
          puVar18 = puVar8;
          func_0x00010c253760();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar19);
          if (puVar18 == (undefined8 *)0x0) goto LAB_10560ad44;
          puVar19 = puVar8;
          func_0x00010c160480();
          if (puVar19 < (undefined8 *)0x5) {
            puVar23 = puVar6;
            if ((1L << ((ulong)puVar19 & 0x3f) & 0xbU) == 0) {
              puVar23 = puVar5;
            }
            _objc_retain(puVar23);
          }
          else {
            puVar23 = (undefined *)0x0;
          }
          puVar19 = puVar8;
          func_0x00010c08a700();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar19;
          func_0x00010c06d160();
          _objc_release(puVar19);
          if ((int)puVar18 != 0) {
            func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x70));
            lVar9 = param_1;
            func_0x00010c299780();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar9);
            if (lVar10 != 0) {
              lVar9 = param_1;
              func_0x00010c299780(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar9;
              func_0x00010c0d3c80();
              _objc_release(lVar9);
              func_0x00010c12d3e0(lVar10);
              func_0x00010c221340(param_1);
              _objc_release(lVar10);
            }
            goto LAB_10560aef4;
          }
        }
        _objc_release(puVar23);
        _objc_release(puVar8);
        lVar22 = lVar22 + 1;
      } while (lStack_188 != lVar22);
      puVar19 = &uStack_130;
      uVar21 = 0x10;
      lStack_188 = lVar7;
      func_0x00010bf52a60();
    } while (lStack_188 != 0);
    _objc_release(lVar7);
    if (!bVar1) goto LAB_10560af78;
    lVar7 = *(long *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = *(undefined8 **)(param_1 + 0x70);
    func_0x00010c0fa180();
  }
  _objc_release(lVar7);
LAB_10560af78:
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar19);
  _objc_retain(uVar21);
  _objc_retain(in_x5);
  puVar8 = puVar19;
  func_0x00010c08fa60();
  if (puVar8 == (undefined8 *)0x0) {
    func_0x00010562f808();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = (undefined8 *)0x0;
    FUN_10562f854(0,4,puVar8,&PTR____CFConstantStringClassReference_110df2178,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_retain(in_x5);
    _objc_retain(puVar19);
    _objc_retain(puVar18);
    func_0x00010c0f7fc0(uVar21);
    func_0x00010be572c0(puVar3);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(in_x5);
    _objc_release(in_x5);
  }
  else {
    uVar2 = *(undefined8 *)(puVar3 + 0x50);
    _objc_retain(uVar21);
    _objc_retain(in_x5);
    _objc_retain(puVar19);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(in_x5);
    _objc_release(uVar21);
    _objc_release(puVar19);
    puVar18 = puVar19;
    puVar19 = in_x5;
  }
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(uVar21);
  return;
}



/* Entry: 10560afcc; end: 10560b1a7; -[SCMediaOrchestrator resumeWithId:appSource:callbackPerformer:completion:] */

void FUN_10560afcc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010562f808();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = 0;
    FUN_10562f854(0,4,lVar1,&PTR____CFConstantStringClassReference_110df2178,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_retain(param_6);
    _objc_retain(param_3);
    _objc_retain(lVar2);
    func_0x00010c0f7fc0(param_5);
    func_0x00010be572c0(param_1);
    _objc_release(param_3);
    _objc_release(lVar2);
    _objc_release(param_6);
    _objc_release(param_6);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    lVar2 = param_3;
    param_3 = param_6;
  }
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 10560b1a8; end: 10560b223;  */

void FUN_10560b1a8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126bc550;
  lVar1 = *(long *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_10562f9d0(uVar3,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa00a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10560b224; end: 10560b237;  */

void FUN_10560b224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be95fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resumeWithId_appSource_callback_112583188,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10560b238; end: 10560b31b; -[SCMediaOrchestrator queryUploadStatusWithId:callbackPerformer:completion:] */

void FUN_10560b238(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10560b31c;
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



/* Entry: 10560b31c; end: 10560ba6b;  */

void FUN_10560b31c(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_b0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar5 = *(long *)(param_2 + 0x20);
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    ppuVar6 = (undefined **)0x0;
  }
  else {
    ppuVar6 = *(undefined ***)(*(long *)(param_2 + 0x28) + 0x70);
    func_0x00010c0e00e0(ppuVar6,param_3,*(undefined8 *)(param_2 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = *(long *)(param_2 + 0x20);
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 0xb8);
    func_0x00010c0e00e0(lVar5,param_3,*(undefined8 *)(param_2 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  lVar7 = *(long *)(param_2 + 0x20);
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = *(undefined **)(*(long *)(param_2 + 0x28) + 0xc0);
    func_0x00010c0e00e0(puVar8,param_3,*(undefined8 *)(param_2 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar28 = *(undefined ***)(param_2 + 0x20);
  _objc_retain(ppuVar28);
  _objc_retain(ppuVar6);
  _objc_retain(lVar5);
  _objc_retain(puVar8);
  puVar14 = PTR_PTR_1126bc570;
  ppuVar29 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar28 != (undefined **)0x0) {
    ppuVar29 = ppuVar28;
  }
  lVar7 = lVar5;
  puVar27 = puVar8;
  if (ppuVar6 == (undefined **)0x0) {
    _objc_retain(ppuVar29);
    _objc_alloc();
    func_0x00010c0296c0();
  }
  else {
    _objc_retain(ppuVar29);
    ppuVar9 = ppuVar6;
    func_0x00010c160480();
    if ((ppuVar9 != (undefined **)0x0) &&
       (ppuVar9 = ppuVar6, func_0x00010c160480(), ppuVar9 != (undefined **)0x1)) {
      _objc_release(lVar5);
      _objc_release(puVar8);
      puVar27 = (undefined *)0x0;
      lVar7 = 0;
    }
    ppuVar10 = ppuVar6;
    func_0x00010c08a700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSDate_1126ae770;
    if (lVar7 != 0) {
      lVar11 = lVar7;
      func_0x00010c270aa0();
      param_1 = (double)lVar11 / 1000.0;
      func_0x00010bf655e0();
      _objc_retainAutoreleasedReturnValue();
      if ((ppuVar10 == (undefined **)0x0) ||
         (func_0x00010c26f380(ppuVar9,param_3,ppuVar10), 0.0 < param_1)) {
        _objc_retain(ppuVar9);
        _objc_release(ppuVar10);
        ppuVar10 = ppuVar9;
      }
      _objc_release(ppuVar9);
    }
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSDate_1126ae770;
    if (puVar27 != (undefined *)0x0) {
      puVar14 = puVar27;
      func_0x00010c270aa0();
      param_1 = (double)(long)puVar14 / 1000.0;
      func_0x00010bf655e0();
      _objc_retainAutoreleasedReturnValue();
      if ((ppuVar10 == (undefined **)0x0) ||
         (func_0x00010c26f380(ppuVar9,param_3,ppuVar10), 0.0 < param_1)) {
        _objc_retain(ppuVar9);
        _objc_release(ppuVar10);
        ppuVar10 = ppuVar9;
      }
      _objc_release(ppuVar9);
    }
    ppuVar9 = ppuVar6;
    func_0x00010c253760();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar9;
    func_0x00010c270960();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar12;
    func_0x00010bf529e0();
    if (ppuVar13 == (undefined **)0x0) {
      ppuVar13 = ppuVar9;
      func_0x00010c08a240();
      bVar4 = ppuVar13 != (undefined **)0x0;
    }
    else {
      bVar4 = true;
    }
    _objc_release(ppuVar12);
    ppuVar12 = ppuVar9;
    func_0x00010bfa00c0();
    puStack_b0 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (ppuVar12 == (undefined **)0x0) {
      puStack_b0 = (undefined *)0x0;
    }
    else {
      ppuVar12 = ppuVar9;
      func_0x00010bfa00c0(ppuVar9);
      func_0x00010c0df840(puStack_b0,param_3,ppuVar12);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar14 = PTR_PTR_1126bc570;
    _objc_alloc();
    ppuVar12 = ppuVar6;
    func_0x00010c160480();
    puStack_e8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar11 = 0;
    if (ppuVar12 < (undefined **)0x5) {
      lVar11 = (long)ppuVar12 + 1;
    }
    if (bVar4) {
      ppuVar12 = ppuVar9;
      func_0x00010c08a200(ppuVar9);
      func_0x00010c0df840(puStack_e8,param_3,ppuVar12);
      _objc_retainAutoreleasedReturnValue();
      puStack_f0 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuVar12 = ppuVar9;
      func_0x00010c08a240(ppuVar9);
      func_0x00010c0df840(puStack_f0,param_3,ppuVar12);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puStack_f0 = (undefined *)0x0;
      puStack_e8 = (undefined *)0x0;
    }
    ppuVar12 = ppuVar9;
    func_0x00010bf66200();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar7 == 0) {
      puStack_f8 = (undefined *)0x0;
      bVar1 = false;
      puStack_d0 = (undefined *)0x0;
      puStack_c8 = (undefined *)0x0;
    }
    else {
      lVar15 = lVar7;
      func_0x00010c0fa9c0(lVar7);
      func_0x00010c0df780(puStack_c8,param_3,lVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c117720(lVar7);
      puStack_f8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      bVar1 = param_1 >= 0.0;
      if (param_1 < 0.0) {
        puStack_f8 = (undefined *)0x0;
      }
      else {
        func_0x00010c117720(lVar7);
        func_0x00010c0df720();
        _objc_retainAutoreleasedReturnValue();
      }
      puStack_d0 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar15 = lVar7;
      func_0x00010bf0d940(lVar7);
      func_0x00010c0df840(puStack_d0,param_3,lVar15);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar27 == (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar16 = puVar27;
      func_0x00010c0cfd40(puVar27);
      func_0x00010c0df780(puVar17,param_3,puVar16);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar16 = puVar27;
    func_0x00010c15e2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar27;
    func_0x00010c1365e0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar27;
    func_0x00010bf48160();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar27;
    func_0x00010c2760c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar27 == (undefined *)0x0) {
      puStack_e0 = (undefined *)0x0;
    }
    else {
      puVar21 = puVar27;
      func_0x00010bf394e0(puVar27);
      func_0x00010c0df6e0(puStack_e0,param_3,puVar21);
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar13 = ppuVar6;
    func_0x00010c0c59e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar13;
    func_0x00010c08fa60();
    if (ppuVar22 == (undefined **)0x0) {
      ppuVar25 = (undefined **)0x0;
    }
    else {
      ppuVar25 = ppuVar6;
      func_0x00010c0c59e0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar23 = ppuVar6;
    func_0x00010bf05f80();
    ppuVar24 = ppuVar6;
    func_0x00010c0c6c20();
    func_0x00010c0296c0(puVar14,param_3,ppuVar29,lVar11,puStack_e8,puStack_f0,puStack_b0,ppuVar12,
                        ppuVar10,puStack_c8,puStack_f8,puStack_d0,puVar17,puVar16,puVar18,puVar19,
                        puVar20,puStack_e0,ppuVar25,ppuVar23,ppuVar24);
    _objc_release(ppuVar29);
    if (ppuVar22 != (undefined **)0x0) {
      _objc_release(ppuVar25);
    }
    _objc_release(ppuVar13);
    puVar21 = puVar16;
    puVar26 = puVar18;
    if (puVar27 != (undefined *)0x0) {
      _objc_release(puStack_e0);
      _objc_release(puVar20);
      puVar21 = puVar17;
      puVar26 = puVar16;
      puVar20 = puVar19;
      puVar19 = puVar18;
    }
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar26);
    _objc_release(puVar21);
    if (lVar7 != 0) {
      _objc_release(puStack_d0);
    }
    if (bVar1) {
      _objc_release(puStack_f8);
    }
    if (lVar7 != 0) {
      _objc_release(puStack_c8);
    }
    _objc_release(ppuVar12);
    if (bVar4) {
      _objc_release(puStack_f0);
      _objc_release(puStack_e8);
    }
    _objc_release(puStack_b0);
    _objc_release(ppuVar9);
    ppuVar29 = ppuVar10;
  }
  _objc_release(ppuVar29);
  _objc_release(puVar27);
  _objc_release(lVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar28);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10560ba6c;
  puStack_80 = &UNK_11084aaa8;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar3);
  puStack_78 = puVar14;
  uStack_70 = uVar3;
  _objc_retain(puVar14);
  func_0x00010c0f7fc0(uVar2,param_3,&puStack_98);
  _objc_release(puStack_78);
  _objc_release(uStack_70);
  _objc_release(puVar14);
  _objc_release(puVar8);
  _objc_release(lVar5);
  _objc_release(ppuVar6);
  return;
}



/* Entry: 10560ba6c; end: 10560ba7b;  */

void FUN_10560ba6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010560ba78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10560ba7c; end: 10560bbb3; -[SCMediaOrchestrator resetUploadWithId:callbackPerformer:completion:] */

void FUN_10560ba7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10560bbb4;
    puStack_50 = &UNK_110849530;
    lStack_48 = param_5;
    _objc_retain(param_5);
    func_0x00010c0f7fc0(param_4,param_2,&puStack_68);
    lVar1 = lStack_48;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x10560bbc4;
    puStack_90 = &UNK_1108465d0;
    lStack_88 = param_1;
    _objc_retain(param_3);
    lStack_80 = param_3;
    _objc_retain(param_4);
    uStack_78 = param_4;
    lStack_70 = param_5;
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_a8);
    _objc_release(lStack_70);
    _objc_release(uStack_78);
    lVar1 = lStack_80;
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10560bbb4; end: 10560bbd3;  */

void FUN_10560bbb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010560bbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),2);
  return;
}



/* Entry: 10560bbd4; end: 10560bdf3; -[SCMediaOrchestrator _resetUploadWithId:callbackPerformer:completion:] */

void FUN_10560bbd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10560bdf4;
  puStack_78 = &UNK_1108a0020;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_5);
  ppuVar1 = &puStack_90;
  uStack_68 = param_5;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c160480();
    if (2 < lVar3 - 2U) {
      _objc_initWeak(auStack_98,param_1);
      lVar3 = 0x10;
      if (*(char *)(param_1 + 0x62) == '\0') {
        lVar3 = 8;
      }
      uVar5 = *(undefined8 *)(param_1 + lVar3);
      _objc_retain(uVar5);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c11de00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_a0,auStack_98);
      _objc_retain(ppuVar1);
      _objc_retain(param_3);
      func_0x00010c0f0ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(param_3);
      _objc_release(ppuVar1);
      _objc_destroyWeak(auStack_a0);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_98);
      goto LAB_10560bd78;
    }
  }
  (*(code *)ppuVar1[2])(ppuVar1,1);
LAB_10560bd78:
  _objc_release(lVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10560bdf4; end: 10560be6f;  */

void FUN_10560bdf4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 10560be70; end: 10560be7f;  */

void FUN_10560be70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010560be7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10560be80; end: 10560bee7;  */

void FUN_10560be80(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),2);
  }
  else if (param_2 == 0) {
    func_0x00010be94240(lVar1);
  }
  else {
    func_0x00010be92ea0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10560bee8; end: 10560c013; -[SCMediaOrchestrator _resetInFlightUploadWithId:answer:] */

void FUN_10560bee8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x18);
  _objc_opt_respondsToSelector(uVar1,PTR_s_cancelUploadWithUploadTaskId_com_1125a96c8);
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,2);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf2f480(uVar2);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10560c014; end: 10560c113;  */

void FUN_10560c014(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),2);
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
    _objc_copyWeak(auStack_50,param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = param_2;
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10560c114; end: 10560c173;  */

void FUN_10560c114(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (*(char *)(param_1 + 0x38) != '\x01')) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),2);
  }
  else {
    func_0x00010be17240(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10560c174; end: 10560c35f; -[SCMediaOrchestrator _resetTranscodeForMediaId:answer:] */

void FUN_10560c174(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10560c360;
  puStack_88 = &UNK_110893d30;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  lStack_78 = param_4;
  _objc_retain(param_3);
  ppuVar1 = &puStack_a0;
  uStack_80 = param_3;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf05f80();
  _objc_release(lVar2);
  if (lVar3 == 3) {
    lVar3 = *(long *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,2);
      lVar3 = 0;
    }
    else {
      _objc_retain(ppuVar1);
      func_0x00010c139a40(lVar3);
      _objc_release(ppuVar1);
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139a20();
  }
  _objc_release(lVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_80);
  _objc_release(lStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10560c360; end: 10560c45f;  */

void FUN_10560c360(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),2);
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
    _objc_copyWeak(auStack_50,param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_48 = param_2;
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10560c460; end: 10560c4b3;  */

void FUN_10560c460(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),2);
  }
  else {
    func_0x00010be17240(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10560c4b4; end: 10560c4c3;  */

void FUN_10560c4b4(long param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010560c4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  return;
}



/* Entry: 10560c4c4; end: 10560c66b; -[SCMediaOrchestrator _finishResetWithId:outcome:answer:] */

void FUN_10560c4c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xb8));
  if (param_4 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,1);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x70);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 == 0) ||
       ((lVar2 = lVar1, func_0x00010c160480(), lVar2 != 0 &&
        (lVar2 = lVar1, func_0x00010c160480(), lVar2 != 1)))) {
      (**(code **)(param_5 + 0x10))(param_5,1);
    }
    else {
      puVar3 = PTR_PTR_1126bc558;
      func_0x00010c0c5a80(PTR_PTR_1126bc558);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2b8520();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010562f808();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ba060(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010c2b2480(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf21f60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedb520(param_1);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x68));
      _objc_release(puVar4);
      (**(code **)(param_5 + 0x10))(param_5,0);
      _objc_release(puVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10560c66c; end: 10560cc4f; -[SCMediaOrchestrator _resumeWithId:appSource:callbackPerformer:completion:] */

void FUN_10560c66c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010be0a120(param_1);
  puVar2 = *(undefined **)(param_1 + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126bc548;
    _objc_alloc(PTR_PTR_1126bc548);
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010562f808();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045680(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010bedb520(param_1);
    goto LAB_10560cbe8;
  }
  puVar7 = puVar2;
  func_0x00010c160480();
  puVar6 = PTR_PTR_1126bc550;
  puVar9 = puVar2;
  if (puVar7 == (undefined *)0x4) {
    func_0x00010c253760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar9;
    FUN_10562f9d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c077940(puVar2);
    func_0x00010bfa00a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0b860(param_1);
    _objc_release(puVar6);
    _objc_release(puVar7);
LAB_10560ca5c:
    _objc_release(puVar9);
  }
  else if (puVar7 == (undefined *)0x3) {
    puVar6 = PTR_PTR_1126bc558;
    func_0x00010c0c5a80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2b8520();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010562f808();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba060(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedb520(param_1);
    _objc_retain(puVar7);
    _objc_release(puVar2);
    _objc_initWeak(auStack_70,param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    if (*(char *)(param_1 + 0x62) == '\x01') {
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10560cc50;
      puStack_90 = &UNK_1108a0080;
      puVar11 = auStack_78;
      _objc_copyWeak(puVar11,auStack_70);
      _objc_retain(param_3);
      uStack_88 = param_3;
      _objc_retain(puVar7);
      puStack_80 = puVar7;
      func_0x00010c0f0ae0(uVar12);
      _objc_release(uVar8);
      _objc_release(puStack_80);
      uVar8 = uStack_88;
    }
    else {
      uVar12 = *(undefined8 *)(param_1 + 8);
      func_0x00010c11de00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = auStack_b0;
      _objc_copyWeak(puVar11,auStack_70);
      _objc_retain(param_3);
      _objc_retain(puVar7);
      func_0x00010c0f0ae0(uVar12);
      _objc_release(uVar8);
      _objc_release(puVar7);
      uVar8 = param_3;
    }
    _objc_release(uVar8);
    _objc_destroyWeak(puVar11);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar2 = puVar7;
  }
  else if (puVar7 == (undefined *)0x2) {
    func_0x00010c15ea20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bf4db80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c253760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0c59e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    FUN_10562f9d0(puVar3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c077940(puVar2);
    func_0x00010c261ac0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0b860(param_1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar7);
    goto LAB_10560ca5c;
  }
  puVar6 = puVar2;
  func_0x00010c160480();
  if ((puVar6 < (undefined *)0x4) && (puVar6 != (undefined *)0x2)) {
    uVar10 = param_1;
    func_0x00010be6ee20();
    puVar6 = puVar2;
    func_0x00010bf05f80();
    bVar1 = puVar6 == (undefined *)0x0;
    if ((int)uVar10 == 0) {
      bVar1 = puVar6 != param_4;
    }
    if (((param_4 != (undefined *)0x0) && (bVar1)) &&
       ((puVar6 = puVar2, func_0x00010bf05fa0(), (int)puVar6 == 0 ||
        (uVar10 = param_1, func_0x00010bdf6320(), (uVar10 & 1) == 0)))) {
      puVar6 = PTR_PTR_1126bc558;
      func_0x00010c0c5a80(PTR_PTR_1126bc558);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a8580();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf21f60(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedb520(param_1);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
  }
LAB_10560cbe8:
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10560cc50; end: 10560ce2f;  */

void FUN_10560cc50(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      func_0x00010c077940(*(undefined8 *)(param_1 + 0x28));
      func_0x00010bec0060(lVar1);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf93ec0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf93e80(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6c20(*(undefined8 *)(param_1 + 0x28));
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c253760(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec2040(lVar1);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10560ce30; end: 10560d243; -[SCMediaOrchestrator _startFromTranscodingRetryWithMediaId:isMediaZipped:] */

void FUN_10560ce30(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [8];
  undefined1 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08b2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0();
  if ((int)puVar4 == 0) {
    _objc_release(puVar3);
  }
  else {
    lVar5 = param_1;
    func_0x00010bdf6320();
    _objc_release(puVar3);
    if ((int)lVar5 != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      puVar3 = PTR_PTR_1126bc530;
      func_0x00010bf5cb20(PTR_PTR_1126bc530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0(uVar10);
      goto LAB_10560d1d8;
    }
  }
  puVar3 = puVar2;
  func_0x00010bf93ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf93e80();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar3 == (undefined *)0x0) || (puVar8 = puVar4, puVar6 = puVar3, puVar4 == (undefined *)0x0)
     ) {
    puVar6 = *(undefined **)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf92c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar7;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      puVar8 = puVar7;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar6);
      if (puVar8 != (undefined *)0x0) {
        puVar6 = puVar7;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar8 = puVar7;
        func_0x00010c085300();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar7);
        goto LAB_10560cfcc;
      }
    }
    func_0x00010bdfdc60(param_1);
    func_0x00010be572c0(param_1);
    func_0x00010be56560(param_1);
    _objc_release(puVar7);
  }
  else {
LAB_10560cfcc:
    puVar3 = puVar2;
    func_0x00010bf05f80();
    if (puVar3 == (undefined *)0x3) {
      uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x88);
      func_0x00010bf1f440();
      _objc_initWeak(auStack_68,param_1);
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_10560d244;
      puStack_98 = &UNK_1108a00e0;
      _objc_copyWeak(auStack_78,auStack_68);
      _objc_retain(param_3);
      uStack_90 = param_3;
      _objc_retain(puVar6);
      puStack_88 = puVar6;
      _objc_retain(puVar8);
      puStack_80 = puVar8;
      uStack_70 = uVar1;
      uStack_6f = param_4;
      func_0x00010c13fa60(uVar10);
      _objc_release(uVar10);
      _objc_release(puStack_80);
      _objc_release(puStack_88);
      _objc_release(uStack_90);
      puVar9 = auStack_78;
    }
    else {
      _objc_initWeak(auStack_68,param_1);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_c0,auStack_68);
      _objc_retain(param_3);
      uStack_b8 = param_4;
      _objc_retain(puVar6);
      _objc_retain(puVar8);
      func_0x00010c13fa40(uVar10);
      _objc_release(uVar10);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(param_3);
      puVar9 = auStack_c0;
    }
    _objc_destroyWeak(puVar9);
    _objc_destroyWeak(auStack_68);
    puVar4 = puVar8;
    puVar3 = puVar6;
  }
  _objc_release(puVar4);
LAB_10560d1d8:
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10560d244; end: 10560d797;  */

void FUN_10560d244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if (param_6 == 0) {
      uVar6 = *(undefined8 *)(lVar2 + 0x50);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar9);
      _objc_retain(param_2);
      _objc_retain(param_3);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar10);
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar7);
      _objc_retain(param_7);
      _objc_retain(param_8);
      func_0x00010c0f7fc0(uVar6);
      _objc_release(param_8);
      _objc_release(param_7);
      _objc_release(uVar7);
      _objc_release(uVar10);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release(uVar9);
    }
    else if (*(char *)(param_1 + 0x40) == '\x01') {
      _objc_retain(param_6);
      uVar8 = 0;
      lVar5 = param_6;
      do {
        lVar3 = lVar5;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0720c0();
        _objc_release(lVar3);
        if ((int)lVar4 != 0) {
          lVar3 = lVar5;
          func_0x00010bf3ec40();
          if ((0xf < lVar3 + 0x3fcU) || ((1L << (lVar3 + 0x3fcU & 0x3f) & 0x8805U) == 0))
          goto LAB_10560d358;
LAB_10560d4f4:
          _objc_release(lVar5);
          func_0x00010bf1f440();
          goto LAB_10560d518;
        }
LAB_10560d358:
        lVar3 = lVar5;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0720c0();
        if ((int)lVar4 != 0) {
          lVar4 = lVar5;
          func_0x00010bf3ec40();
          if (lVar4 == 0x32) {
            _objc_release(lVar3);
          }
          else {
            lVar4 = lVar5;
            func_0x00010bf3ec40();
            _objc_release(lVar3);
            if (lVar4 != 0x33) goto LAB_10560d3b0;
          }
          goto LAB_10560d4f4;
        }
        _objc_release(lVar3);
LAB_10560d3b0:
        lVar3 = lVar5;
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(lVar3);
      } while ((lVar4 != 0) && (bVar1 = uVar8 < 4, uVar8 = uVar8 + 1, lVar5 = lVar4, bVar1));
      _objc_release(lVar4);
LAB_10560d518:
      uVar6 = *(undefined8 *)(lVar2 + 0x50);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar7);
      func_0x00010c0f7fc0(uVar6);
      _objc_release(uVar7);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}


