/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106213e54; end: 106213e5b; -[SCLensProcessingPlayGamesCaptureAdapter captureImage] */

void FUN_106213e54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf30cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_captureImage_1125a9ce0);
  return;
}



/* Entry: 106213e5c; end: 106213e67; -[SCLensProcessingPlayGamesCaptureAdapter .cxx_destruct] */

void FUN_106213e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106213e68; end: 106213f93; -[SCLensProcessingApplicatorEventsWorkflow initWithEffectApplicator:appInsightsMetadataStorage:] */

undefined8 *
FUN_106213e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f07c0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,puVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0e33e0(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106213f94; end: 106213fdb;  */

void FUN_106213f94(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beae840();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106213fdc; end: 1062140ff; -[SCLensProcessingApplicatorEventsWorkflow _setupObservingWithEffectApplicator:] */

void FUN_106213fdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf07dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106214100; end: 106214287;  */

void FUN_106214100(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_2;
  func_0x00010bf8d080(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar3;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar4 == (undefined **)0x0) {
    _objc_release(ppuVar2);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e45bf8;
  }
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c08e120();
  _objc_release(lVar5);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar6 = uVar1;
  func_0x00010bf446e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162820(param_1);
  _objc_release(uVar6);
  _objc_release(param_1);
  _objc_release(ppuVar2);
  _objc_release(ppuVar3);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 106214288; end: 10621428f;  */

void FUN_106214288(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 106214290; end: 10621431b; -[SCLensProcessingApplicatorEventsWorkflow .cxx_destruct] */

void FUN_106214290(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10621431c; end: 10621442f;  */

void FUN_10621431c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bef0300();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,param_1 + 0x28);
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(lVar1 + 0x48) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106214430; end: 1062144a7;  */

void FUN_106214430(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf86d80();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (uVar2 = param_2, func_0x00010bf1f3c0(), (int)uVar2 != 0)) {
    func_0x00010bec6ce0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062144a8; end: 1062145f7; -[SCLensProcessingCameraScopeEventsWorkflow _subscribeOnEventsProvider] */

void FUN_1062144a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1062145f8; end: 1062146d3;  */

void FUN_1062145f8(long param_1,long param_2)

{
  func_0x00010beef1e0();
  if (param_2 < 2) {
    if (param_2 == 0) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
    }
    else {
      if (param_2 != 1) {
        return;
      }
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
    }
    func_0x00010c1a8860();
  }
  else if (param_2 == 2) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c27c300();
  }
  else {
    if (param_2 == 3) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
    }
    else {
      if (param_2 != 4) {
        return;
      }
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
    }
    func_0x00010c1a7fa0(0x3fc3333333333333);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062146d4; end: 1062148ff; -[SCLensProcessingCameraScopeEventsWorkflow _subscribeOnEffectAudioStatusWithApplicator:] */

void FUN_1062146d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf80cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf529e0();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0928e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar4 = uVar5;
  if (lVar2 != 0) {
    uVar6 = param_3;
    func_0x00010bf07dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = puVar1;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106214900;
    puStack_68 = &UNK_110916b18;
    _objc_retain(lVar3);
    lStack_60 = lVar3;
    uStack_58 = uVar5;
    _objc_retain(uVar5);
    uVar4 = uVar6;
    func_0x00010bfb2660(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uStack_58);
    _objc_release(lStack_60);
    _objc_release(uVar5);
  }
  puVar7 = auStack_88;
  _objc_copyWeak(puVar7,param_1 + 0x30);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e0ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_88);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 106214900; end: 106214acf;  */

void FUN_106214900(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  iVar1 = (int)lVar6;
  if (lVar3 == 0) {
    puVar8 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = param_2;
    func_0x00010bf8d080();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    iVar1 = (int)lVar6;
    while (lVar2 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar4);
        }
        uVar5 = *(undefined8 *)(lVar10 * 8);
        uVar9 = *(ulong *)(param_1 + 0x20);
        func_0x00010c094540(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(uVar5);
        iVar1 = (int)lVar6;
        if ((uVar9 & 1) != 0) {
          puVar8 = PTR_PTR_1126ae6b8;
          func_0x00010c0860a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          goto LAB_106214a88;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar4;
      func_0x00010bf52a60();
      iVar1 = (int)lVar6;
    }
    _objc_release(lVar4);
    puVar8 = *(undefined **)(param_1 + 0x28);
    _objc_retain(puVar8);
  }
LAB_106214a88:
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf1f3c0();
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  if (iVar1 == 0) {
    func_0x00010c090120();
  }
  else {
    func_0x00010c090100();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106214ad0; end: 106214b17;  */

void FUN_106214ad0(long param_1,int param_2)

{
  func_0x00010bf1f3c0();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010c090120();
  }
  else {
    func_0x00010c090100();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106214b18; end: 106214d57; -[SCLensProcessingCameraScopeEventsWorkflow _subscribeOnMemoriesLockWithApplicator:] */

void FUN_106214b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x40) == 3) {
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar9);
    _objc_copyWeak(auStack_78,param_1 + 0x38);
    uVar1 = param_3;
    func_0x00010bf07dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef0300();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106214d58;
    puStack_88 = &UNK_110916b48;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar1;
    func_0x00010bf41860(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0e0ec0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar8 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar9);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106214d58; end: 106214efb;  */

void FUN_106214d58(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain(param_3);
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf52a60();
  puVar9 = PTR____kCFBooleanFalse_11034ab60;
  lVar1 = lRam0000000000000000;
  iVar2 = (int)lVar7;
  do {
    if (lVar3 == 0) {
LAB_106214eac:
      _objc_release(param_2);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
        return;
      }
      ___stack_chk_fail();
      func_0x00010bf1f3c0();
      param_3 = param_3 + 0x20;
      _objc_loadWeakRetained(param_3);
      if (iVar2 == 0) {
        func_0x00010c280d80();
      }
      else {
        func_0x00010c09fdc0();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar10 = *(undefined8 *)(lVar11 * 8);
      uVar4 = param_1 + 0x20;
      _objc_loadWeakRetained();
      func_0x00010c094540(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c231700();
      _objc_release(uVar10);
      _objc_release(uVar4);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      iVar2 = (int)lVar7;
      if ((uVar5 & 1) != 0) {
        func_0x00010bf1f3c0(param_3);
        func_0x00010c0df6e0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar6;
        goto LAB_106214eac;
      }
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = param_2;
    func_0x00010bf52a60();
    iVar2 = (int)lVar7;
  } while( true );
}



/* Entry: 106214efc; end: 106214f4b;  */

void FUN_106214efc(long param_1,int param_2)

{
  func_0x00010bf1f3c0();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010c280d80();
  }
  else {
    func_0x00010c09fdc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106214f4c; end: 106214fcf; -[SCLensProcessingCameraScopeEventsWorkflow .cxx_destruct] */

void FUN_106214f4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106214fd0; end: 10621506f;  */

void FUN_106214fd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1680(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  func_0x00010c2290a0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),uVar1);
  dVar2 = *(double *)(param_1 + 0x28);
  _CGRectGetWidth(dVar2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40));
  dVar3 = *(double *)(param_1 + 0x28);
  _CGRectGetHeight(dVar3,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                   *(undefined8 *)(param_1 + 0x40));
  func_0x00010c222ae0(uVar1,param_2,(long)dVar2,(long)dVar3);
  func_0x00010c2293c0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),uVar1);
  func_0x00010bf852c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106215070; end: 1062150bf;  */

void FUN_106215070(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bead300();
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec7420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062150c0; end: 106215223;  */

void FUN_1062150c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1a1680(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),param_2);
  func_0x00010c2290a0(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),param_2);
  _CGRectGetWidth(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                  *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  _CGRectGetHeight(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                   *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  func_0x00010c222ae0(param_2);
  func_0x00010c2293c0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_2);
  uVar1 = param_2;
  func_0x00010bf852c0(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106215224; end: 106215273;  */

void FUN_106215224(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bead300();
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec7420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106215274; end: 106215447; -[SCLensProcessingCameraViewportWorkflow _setupInitialViewportDataWithRenderTarget:captureButtonRectProvider:] */

void FUN_106215274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
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
  
  _objc_retain(param_8);
  func_0x00010be48a80(param_5,param_6,param_7);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  uVar5 = param_1;
  uVar9 = param_2;
  uVar13 = param_3;
  uVar16 = param_4;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14ce00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30a40(param_8,param_6,puVar2);
  _objc_release(param_8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar6 = param_1;
  uVar10 = param_2;
  func_0x00010be6ea00(param_1,param_2,param_3,param_4,param_5);
  uVar7 = param_1;
  uVar11 = param_2;
  uVar14 = param_3;
  uVar17 = param_4;
  func_0x00010becd420(param_5);
  uVar8 = param_1;
  uVar12 = param_2;
  uVar15 = param_3;
  uVar18 = param_4;
  func_0x00010be7fe80(param_5);
  uVar4 = *(undefined8 *)(param_5 + 8);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_5 + 0x10);
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_106215448;
  puStack_120 = &UNK_110916ba8;
  uStack_118 = uVar4;
  uStack_110 = param_1;
  uStack_108 = param_2;
  uStack_100 = param_3;
  uStack_f8 = param_4;
  uStack_f0 = uVar5;
  uStack_e8 = uVar9;
  uStack_e0 = uVar13;
  uStack_d8 = uVar16;
  uStack_d0 = uVar7;
  uStack_c8 = uVar11;
  uStack_c0 = uVar14;
  uStack_b8 = uVar17;
  uStack_b0 = uVar8;
  uStack_a8 = uVar12;
  uStack_a0 = uVar15;
  uStack_98 = uVar18;
  uStack_90 = uVar6;
  uStack_88 = uVar10;
  _objc_retain(uVar4);
  func_0x00010c0f7fc0(uVar3,param_6,&puStack_138);
  _objc_release(uStack_118);
  _objc_release(uVar4);
  return;
}



/* Entry: 106215448; end: 106215517;  */

void FUN_106215448(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1680(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  func_0x00010c2285e0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),uVar1);
  func_0x00010c2297e0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),uVar1);
  func_0x00010c2291c0(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),uVar1);
  func_0x00010c2290a0(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),uVar1);
  dVar2 = *(double *)(param_1 + 0x28);
  _CGRectGetWidth(dVar2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40));
  dVar3 = *(double *)(param_1 + 0x28);
  _CGRectGetHeight(dVar3,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                   *(undefined8 *)(param_1 + 0x40));
  func_0x00010c222ae0(uVar1,param_2,(long)dVar2,(long)dVar3);
  func_0x00010c2293c0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),uVar1);
  func_0x00010bf852c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106215518; end: 106215687; -[SCLensProcessingCameraViewportWorkflow _subscribeToCameraRenderRegionObservableWithRenderTarget:captureButtonRectProvider:] */

void FUN_106215518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = auStack_58;
  _objc_initWeak(puVar1,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106215688; end: 106215807;  */

void FUN_106215688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_6);
  lVar1 = param_5 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be48a80(lVar1);
    uVar4 = *(undefined8 *)(param_5 + 0x28);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    uVar5 = param_1;
    uVar6 = param_2;
    uVar7 = param_3;
    uVar8 = param_4;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c14ce00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf30a40(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    _objc_copyWeak(auStack_c8,param_5 + 0x30);
    uStack_c0 = param_1;
    uStack_b8 = param_2;
    uStack_b0 = param_3;
    uStack_a8 = param_4;
    _objc_retain(param_6);
    uStack_a0 = uVar5;
    uStack_98 = uVar6;
    uStack_90 = uVar7;
    uStack_88 = uVar8;
    func_0x00010c0f7fc0(uVar4);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_c8);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  return;
}



/* Entry: 106215808; end: 1062159eb;  */

void FUN_106215808(long param_1,undefined8 param_2)

{
  long lVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    dVar2 = *(double *)(param_1 + 0x30);
    dVar9 = *(double *)(param_1 + 0x38);
    func_0x00010be6ea00(dVar2,dVar9,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                        lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    uVar17 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010becd420(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    dVar15 = *(double *)(param_1 + 0x40);
    dVar18 = *(double *)(param_1 + 0x48);
    func_0x00010be7fe80(lVar1);
    uVar5 = uVar4;
    uVar12 = uVar11;
    dVar16 = dVar15;
    dVar19 = dVar18;
    func_0x00010bdc1080(*(undefined8 *)(param_1 + 0x20));
    uVar6 = uVar5;
    uVar13 = uVar12;
    dVar7 = dVar16;
    dVar20 = dVar19;
    func_0x00010be86860(lVar1);
    dVar8 = dVar16;
    dVar21 = dVar19;
    func_0x00010be86860(uVar5,uVar12,dVar16,dVar19,uVar4,uVar11,dVar15,dVar18,lVar1);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1680(uVar6,uVar13,dVar7,dVar20);
    func_0x00010c2285e0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                        *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),uVar4);
    func_0x00010c2297e0(uVar3,uVar10,uVar14,uVar17,uVar4);
    func_0x00010c2293c0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),uVar4);
    func_0x00010c2291c0(uVar5,uVar12,dVar8,dVar21,uVar4);
    func_0x00010c2290a0(dVar2 * dVar16,dVar9 * dVar19,uVar4);
    dVar7 = *(double *)(param_1 + 0x30);
    _CGRectGetWidth(dVar7,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                    *(undefined8 *)(param_1 + 0x48));
    dVar8 = *(double *)(param_1 + 0x30);
    _CGRectGetHeight(dVar8,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                     *(undefined8 *)(param_1 + 0x48));
    func_0x00010c222ae0(uVar4,param_2,(long)(dVar16 * dVar7),(long)(dVar19 * dVar8));
    func_0x00010bf852c0(uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062159ec; end: 106215ba7; -[SCLensProcessingCameraViewportWorkflow _keyboardDidShow:] */

void FUN_1062159ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_7);
  lVar1 = *(long *)(param_5 + 8);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar6 = param_7;
    func_0x00010c292820(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    _objc_release(uVar2);
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf51d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfb2220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010bf51420(puVar4,param_6,puVar5);
    uVar6 = *(undefined8 *)(param_5 + 0x10);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106215ba8;
    puStack_90 = &UNK_110870f70;
    _objc_retain(lVar1);
    lStack_88 = lVar1;
    uStack_80 = param_1;
    uStack_78 = param_2;
    uStack_70 = param_3;
    uStack_68 = param_4;
    func_0x00010c0f7fc0(uVar6,param_6,&puStack_a8);
    _objc_release(lStack_88);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  return;
}



/* Entry: 106215ba8; end: 106215bd7;  */

void FUN_106215ba8(long param_1)

{
  func_0x00010c228d20(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf852d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dispatchViewportData_1125bee58);
  return;
}



/* Entry: 106215bd8; end: 106215ca3; -[SCLensProcessingCameraViewportWorkflow _keyboardWillHide:] */

void FUN_106215bd8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x106215c6c;
    puStack_30 = &UNK_110842e18;
    _objc_retain(lVar1);
    lStack_28 = lVar1;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106215ca4; end: 106215e03; -[SCLensProcessingCameraViewportWorkflow _previewRectWithFullRect:] */

void FUN_106215ca4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dStack_58;
  
  dVar1 = param_1;
  func_0x0001008e3740();
  uVar2 = param_3;
  uVar5 = param_4;
  func_0x00010b690934(param_3,param_4,dVar1);
  dStack_58 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar1 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  func_0x00010904647c(dStack_58,dVar1,uVar2,uVar5);
  func_0x0001008522a8();
  if (param_5 != 0) {
    dVar3 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar4 = dStack_58;
    _CGRectGetHeight(dStack_58,dVar1,uVar2,uVar5);
    func_0x00010bc8525c(dStack_58,dVar1,uVar2,uVar5,dVar3 - dVar4);
  }
  dVar3 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectOffset_1103475f0)(dStack_58,dVar1,uVar2,uVar5,dVar3,param_1);
  return;
}



/* Entry: 106215e04; end: 106215e17; -[SCLensProcessingCameraViewportWorkflow _realRectForCameraRenderRegion:originalRect:] */

double FUN_106215e04(double param_1)

{
  double in_d4;
  double in_d6;
  
  return in_d4 + param_1 * in_d6;
}



/* Entry: 106215e18; end: 106215e53; -[SCLensProcessingCameraViewportWorkflow _topBarRectForRenderTargetBounds:] */

undefined8 FUN_106215e18(void)

{
  _CGRectGetWidth();
  func_0x00010c14cf60(PTR__OBJC_CLASS___UIScreen_1126aea10);
  return 0;
}



/* Entry: 106215e54; end: 106215e9b; -[SCLensProcessingCameraViewportWorkflow .cxx_destruct] */

void FUN_106215e54(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106215e9c; end: 106215f0f; -[SCLensProcessingCaptureButtonRectProvider captureButtonRectForCoordinateSpace:] */

undefined8 FUN_106215e9c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_4);
  func_0x00010bf1fb40(uVar1);
  func_0x00010bf51420(uVar1,param_3,param_4);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 106215f10; end: 106215f1b; -[SCLensProcessingCaptureButtonRectProvider .cxx_destruct] */

void FUN_106215f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106215f1c; end: 10621609b; -[SCLensProcessingCustomCameraViewportWorkflow initWithViewportProvider:renderTarget:performer:mainPerformer:lensCaptureButtonRectObservable:lensSafeRenderRectObservable:] */

undefined1 *
FUN_106215f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f07e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_4);
    uVar2 = param_7;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_8;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10621609c; end: 106216143; -[SCLensProcessingCustomCameraViewportWorkflow begin] */

void FUN_10621609c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0e33e0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106216144; end: 1062161c3;  */

void FUN_106216144(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    uVar2 = *(undefined8 *)(lVar3 + 0x30);
    lVar4 = lVar3 + 0x38;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bec7be0(param_1,param_2,uVar2,uVar1,lVar4);
    _objc_release(lVar4);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1062161c4; end: 106216327; -[SCLensProcessingCustomCameraViewportWorkflow _subscribeToLensSafeRenderRect:lensCaptureButtonRectObservable:renderTarget:] */

void FUN_1062161c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010c0e0ea0(param_3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106216394;
  puStack_70 = &UNK_110916cd8;
  uStack_68 = param_5;
  uStack_60 = uVar2;
  uStack_58 = uVar3;
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(param_5);
  uVar1 = uVar4;
  func_0x00010c25ff60(uVar4,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 106216328; end: 106216393;  */

void FUN_106216328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b60f8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0134e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106216394; end: 10621663f;  */

void FUN_106216394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_5 + 0x20);
  func_0x00010bf20c00();
  _CGRectIsEmpty();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb2220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bf51420(*(undefined8 *)(param_5 + 0x20));
    uVar4 = param_6;
    func_0x00010bfb0d80(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    uVar5 = param_1;
    uVar6 = param_2;
    uVar7 = param_3;
    uVar8 = param_4;
    _objc_release(uVar4);
    uVar4 = param_6;
    func_0x00010c154b60(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010bf51d20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51420();
    _objc_release(uVar4);
    uVar1 = *(ulong *)(param_5 + 0x20);
    func_0x00010bf51d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51420();
    _objc_release();
    _CGRectIsEmpty(uVar5,uVar6,uVar7,uVar8);
    if ((uVar1 & 1) == 0) {
      _CGRectGetMaxY(param_1,param_2,param_3,param_4);
    }
    uVar4 = *(undefined8 *)(param_5 + 0x28);
    uVar5 = *(undefined8 *)(param_5 + 0x30);
    _objc_retain(uVar5);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  return;
}



/* Entry: 106216640; end: 106216727;  */

void FUN_106216640(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1680(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  func_0x00010c2291c0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),uVar1);
  uVar2 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar3 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c2297e0(uVar2,uVar3,uVar4,uVar5,uVar1);
  func_0x00010c228d20(uVar2,uVar3,uVar4,uVar5,uVar1);
  func_0x00010c2290a0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),uVar1);
  func_0x00010c222ae0(uVar1,param_2,(long)*(double *)(param_1 + 0x48),
                      (long)*(double *)(param_1 + 0x50));
  func_0x00010c2285e0(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),uVar1);
  func_0x00010c2293c0(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),uVar1);
  func_0x00010bf852c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106216728; end: 10621678f; -[SCLensProcessingCustomCameraViewportWorkflow .cxx_destruct] */

void FUN_106216728(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 106216790; end: 106216853; -[SCLensProcessingPreviewViewportWorkflow initWithLensProcessingSharedServices:viewportController:performer:] */

undefined1 *
FUN_106216790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f07e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106216854; end: 106216893; -[SCLensProcessingPreviewViewportWorkflow viewportProvider] */

void FUN_106216854(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29f660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106216894; end: 10621697f; -[SCLensProcessingPreviewViewportWorkflow begin] */

void FUN_106216894(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1302e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106216980; end: 1062169cf;  */

void FUN_106216980(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010beb14a0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1062169d0; end: 106216b5b; -[SCLensProcessingPreviewViewportWorkflow _setupViewportWithRenderTarget:] */

void FUN_1062169d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c29f660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06f880();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_initWeak(auStack_40,param_3);
    func_0x00010c29f660(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_40);
    _objc_copyWeak(auStack_48,auStack_38);
    func_0x00010c0e33e0(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    uVar1 = param_1;
    func_0x00010c29f660(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beaf3c0(param_1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106216b5c; end: 106216c47;  */

void FUN_106216b5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 106216c48; end: 106216c9f;  */

void FUN_106216c48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010beaf3c0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106216ca0; end: 106216ed7; -[SCLensProcessingPreviewViewportWorkflow _setupProviderWithRenderTarget:provider:] */

void FUN_106216ca0(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_e0 [8];
  double dStack_d8;
  undefined8 uStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  double dStack_90;
  undefined1 auStack_88 [8];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bf20c00(param_7);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar4 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  dVar9 = param_3 * dVar4;
  dVar4 = param_4 * dVar4;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb2220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bf51420(param_7);
  uVar3 = *(undefined8 *)(param_5 + 0x10);
  dVar5 = param_1;
  uVar6 = param_2;
  dVar7 = param_3;
  dVar8 = param_4;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1492e0();
  _objc_release(uVar3);
  uVar3 = param_7;
  func_0x00010bf51d20(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51420();
  _objc_release(uVar3);
  _objc_initWeak(auStack_88,param_8);
  uVar3 = *(undefined8 *)(param_5 + 0x18);
  _objc_copyWeak(auStack_e0,auStack_88);
  dStack_d8 = param_1;
  uStack_d0 = param_2;
  dStack_c8 = param_3;
  dStack_c0 = param_4;
  dStack_b8 = dVar9;
  dStack_b0 = dVar4;
  dStack_a8 = dVar5;
  uStack_a0 = uVar6;
  dStack_98 = dVar7;
  dStack_90 = dVar8;
  func_0x00010c0f7fc0(uVar3);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 106216ed8; end: 106216fc7;  */

void FUN_106216ed8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1a1680(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),lVar1);
    func_0x00010c2291c0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),lVar1);
    uVar2 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar3 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c2297e0(uVar2,uVar3,uVar4,uVar5,lVar1);
    func_0x00010c228d20(uVar2,uVar3,uVar4,uVar5,lVar1);
    func_0x00010c2290a0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),lVar1);
    func_0x00010c222ae0(lVar1,param_2,(long)*(double *)(param_1 + 0x48),
                        (long)*(double *)(param_1 + 0x50));
    func_0x00010c2285e0(uVar2,uVar3,uVar4,uVar5,lVar1);
    func_0x00010c2293c0(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                        *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),lVar1);
    func_0x00010bf852c0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106216fc8; end: 106217047; -[SCLensProcessingPreviewViewportWorkflow .cxx_destruct] */

void FUN_106216fc8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106217048; end: 106217183; -[SCLensProcessingSnapCaptureEventsWorkflow _subscribeOnEventProvider:] */

void FUN_106217048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf8cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106217184; end: 106217247;  */

void FUN_106217184(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0c02e0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106217248; end: 10621725b;  */

void FUN_106217248(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec1550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__startRecordingWithEffects__11258def8,param_2);
  return;
}



/* Entry: 10621725c; end: 1062172a7;  */

void FUN_10621725c(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010be3fa40();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be3f360();
  if (((uVar2 & 1) == 0) && (iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bddb690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__captureImage_112554740);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be87a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__recordShortVideo_11257f828);
  return;
}



/* Entry: 1062172a8; end: 1062172ef; -[SCLensProcessingSnapCaptureEventsWorkflow _startRecordingWithEffects:] */

void FUN_1062172a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2502c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062172f0; end: 106217327; -[SCLensProcessingSnapCaptureEventsWorkflow _stopRecording] */

void FUN_1062172f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c256760();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be188d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__forceReloadCurrentLensIfNeeded_112563bd0);
  return;
}



/* Entry: 106217328; end: 10621745f; -[SCLensProcessingSnapCaptureEventsWorkflow _forceReloadCurrentLensIfNeeded] */

void FUN_106217328(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  ulong uVar5;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  long lStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010be3fa40();
  if (((uVar1 & 1) != 0) || (uVar1 = param_1, func_0x00010be3f360(), (int)uVar1 != 0)) {
    param_1 = *(ulong *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      plStack_100 = (long *)0x0;
      unaff_x20 = param_1;
      func_0x00010bf07da0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = unaff_x20;
      func_0x00010bf52a60();
      if (uVar1 != 0) {
        unaff_x22 = *plStack_100;
        do {
          uVar5 = 0;
          do {
            if (*plStack_100 != unaff_x22) {
              _objc_enumerationMutation(unaff_x20);
            }
            func_0x00010c2005c0(*(undefined8 *)(lStack_108 + uVar5 * 8));
            uVar5 = uVar5 + 1;
          } while (uVar1 != uVar5);
          uVar1 = unaff_x20;
          func_0x00010bf52a60();
          unaff_x21 = 0;
        } while (uVar1 != 0);
      }
      _objc_release(unaff_x20);
      func_0x00010bfb4e60(param_1);
    }
    uVar1 = param_1;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_118 = FUN_106217460;
    lStack_140 = unaff_x22;
    uStack_138 = unaff_x21;
    uStack_130 = unaff_x20;
    uStack_128 = param_1;
    puStack_120 = &stack0xfffffffffffffff0;
    if (*(char *)(uVar1 + 0x30) == '\x01') {
      lVar2 = uVar1 + 8;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010c075340();
      _objc_release(lVar2);
      if ((int)lVar3 == 0) {
        return;
      }
    }
    *(undefined1 *)(uVar1 + 0x30) = 1;
    lVar2 = uVar1 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c2502c0();
    _objc_release(lVar2);
    puVar4 = auStack_148;
    _objc_initWeak(puVar4,uVar1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_150,auStack_148);
    func_0x00010c0f7fe0(0x4018000000000000,puVar4);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_148);
    return;
  }
  return;
}



/* Entry: 106217460; end: 106217583; -[SCLensProcessingSnapCaptureEventsWorkflow _recordShortVideo] */

void FUN_106217460(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c075340();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2502c0();
  _objc_release(lVar1);
  puVar3 = auStack_38;
  _objc_initWeak(puVar3,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fe0(0x4018000000000000,puVar3);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106217584; end: 1062175bb;  */

void FUN_106217584(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    func_0x00010bec37c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062175bc; end: 1062175e7; -[SCLensProcessingSnapCaptureEventsWorkflow _captureImage] */

void FUN_1062175bc(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf30ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062175e8; end: 1062175f7; -[SCLensProcessingSnapCaptureEventsWorkflow _isDirectorMode] */

bool FUN_1062175e8(long param_1)

{
  return *(long *)(param_1 + 0x18) == 9;
}



/* Entry: 1062175f8; end: 1062176df; -[SCLensProcessingSnapCaptureEventsWorkflow _isContinuousCaptureActive] */

undefined1 FUN_1062175f8(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4fce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be6c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1062176e0; end: 1062176fb;  */

void FUN_1062176e0(void)

{
  return;
}



/* Entry: 1062176fc; end: 10621773f; -[SCLensProcessingSnapCaptureEventsWorkflow .cxx_destruct] */

void FUN_1062176fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106217740; end: 106217823;  */

void FUN_106217740(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0fa9c0();
  lVar2 = param_2;
  if (lVar1 == 2) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6b20(param_2);
    func_0x00010bf76520(uVar3);
  }
  else if (lVar1 == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6b20(param_2);
    func_0x00010bf72580(uVar3);
  }
  else {
    if (lVar1 != 0) goto LAB_106217810;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6b20(param_2);
    func_0x00010c2a58e0(uVar3);
  }
  _objc_release(lVar2);
LAB_106217810:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106217824; end: 106217873;  */

void FUN_106217824(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bec6c20(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106217874; end: 106217987;  */

void FUN_106217874(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bef0300();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,param_1 + 0x28);
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(lVar1 + 0x40) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106217988; end: 1062179ff;  */

void FUN_106217988(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf86d80();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (uVar2 = param_2, func_0x00010bf1f3c0(), (int)uVar2 != 0)) {
    func_0x00010bec6ce0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106217a00; end: 106217cfb; -[SCLensProcessingViewfinderEventsWorkflow _subscribeOnEventsProvider] */

void FUN_106217a00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd3720();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar7);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c151080();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x106217d64;
  puStack_80 = &UNK_110916e48;
  uStack_78 = uVar7;
  _objc_retain(uVar7);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3,param_2,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar8);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf797a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0e0ec0(uVar3,param_2,uVar4,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106217d90;
  puStack_a8 = &UNK_110916e78;
  _objc_retain(uVar8);
  uVar6 = uVar2;
  uStack_a0 = uVar8;
  func_0x00010c25ff60(uVar2,param_2,&puStack_c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf797c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0e0ec0(uVar3,param_2,uVar4,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x106217e08;
  puStack_d0 = &UNK_110916ea8;
  uStack_c8 = uVar8;
  _objc_retain(uVar8);
  uVar6 = uVar2;
  func_0x00010c25ff60(uVar2,param_2,&puStack_e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uStack_c8);
  _objc_release(uStack_a0);
  _objc_release(uVar8);
  _objc_release(uStack_78);
  _objc_release(uVar7);
  return;
}



/* Entry: 106217cfc; end: 106217d8f;  */

void FUN_106217cfc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  func_0x00010bfd3700();
  if ((param_2 != 0) && (param_2 != 1)) {
    return;
  }
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106217d90; end: 106217e6f;  */

void FUN_106217d90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf9d8a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c27bf40(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106217e70; end: 1062180db; -[SCLensProcessingViewfinderEventsWorkflow _subscribeOnEffectApplicator:] */

void FUN_106217e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c2a66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1062180dc;
  puStack_80 = &UNK_110916ed8;
  _objc_retain(uVar5);
  uVar3 = uVar2;
  uStack_78 = uVar5;
  func_0x00010c25ff60(uVar2,param_2,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf778e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106218224;
  puStack_a8 = &UNK_110916f08;
  _objc_retain(uVar5);
  uVar3 = uVar2;
  uStack_a0 = uVar5;
  func_0x00010c25ff60(uVar2,param_2,&puStack_c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf9fc40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106218298;
  puStack_d0 = &UNK_110916ed8;
  uStack_c8 = uVar5;
  _objc_retain(uVar5);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2,param_2,&puStack_e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar6);
  uVar2 = param_3;
  func_0x00010bf07dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_1062183e0;
  puStack_f8 = &UNK_110916ed8;
  uStack_f0 = uVar6;
  _objc_retain(uVar6);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2,param_2,&puStack_110);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_f0);
  _objc_release(uVar6);
  _objc_release(uStack_c8);
  _objc_release(uStack_a0);
  _objc_release(uStack_78);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 1062180dc; end: 106218223;  */

void FUN_1062180dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  uVar9 = 0;
  lVar2 = param_2;
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar4 = *(undefined8 *)(lVar8 * 8);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c094540(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2709c0(param_2);
      func_0x00010c2a58e0(uVar7);
      _objc_release(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010bf8cda0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0(lVar5);
  _objc_release(lVar5);
  func_0x00010bf72580(uVar9,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106218224; end: 106218297;  */

void FUN_106218224(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf8cda0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0(param_3);
  _objc_release(param_3);
  func_0x00010bf72580(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106218298; end: 1062183df;  */

void FUN_106218298(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar4 = *(undefined8 *)(lVar8 * 8);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c094540(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2709c0(param_2);
      func_0x00010bf76520(uVar7);
      _objc_release(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  if (lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a9bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_setIdleTimerDisabled__112648118,0);
  return;
}



/* Entry: 1062183e0; end: 106218443;  */

void FUN_1062183e0(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf529e0();
  _objc_release(param_2);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a9bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setIdleTimerDisabled__112648118,0);
  return;
}



/* Entry: 106218444; end: 1062184eb; -[SCLensProcessingViewfinderEventsWorkflow .cxx_destruct] */

void FUN_106218444(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 1062184ec; end: 106218533; -[SCLensProcessingWarmupWorkflow dealloc] */

void FUN_1062184ec(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x20));
  puStack_28 = PTR_PTR_1126f0800;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106218534; end: 10621857b; -[SCLensProcessingWarmupWorkflow .cxx_destruct] */

void FUN_106218534(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10621857c; end: 106218623; -[SCCameraCaptureLensProviderAdapter activeLensIds] */

void FUN_10621857c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = (undefined *)(param_1 + 8);
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf07da0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar5 != (undefined *)0x0) {
    puVar1 = puVar5;
  }
  _objc_retain(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106218624; end: 10621862b;  */

void FUN_106218624(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 10621862c; end: 106218633; -[SCCameraCaptureLensProviderAdapter maxPixelSize] */

undefined8 FUN_10621862c(void)

{
  return 0x500;
}



/* Entry: 106218634; end: 1062186e7; -[SCCameraCaptureLensProviderAdapter processPixelBufferToImage:orientation:timestamp:fieldOfView:] */

void FUN_106218634(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf567e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  uStack_58 = param_5[1];
  uStack_60 = *param_5;
  uStack_50 = param_5[2];
  lVar1 = lVar2;
  func_0x00010c115140(lVar2,param_2,param_3,param_4,&uStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1062186e8; end: 10621870f; -[SCCameraCaptureLensProviderAdapter .cxx_destruct] */

void FUN_1062186e8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106218710; end: 106218753;  */

void FUN_106218710(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106218754; end: 1062187cf; -[SCCameraViewfinderLegacyEntryPoint _exposeNoOpServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106218754(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110917138);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c8f50;
  _objc_alloc(PTR_PTR_1126c8f50);
  func_0x00010bffb6c0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112743884),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062187d0; end: 1062187d7;  */

undefined8 FUN_1062187d0(void)

{
  return 0;
}



/* Entry: 1062187d8; end: 1062187f7; -[SCCameraViewfinderLegacyEntryPoint cameraMLServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062187d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112743890);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062187f8; end: 10621880b; -[SCCameraViewfinderLegacyEntryPoint setCameraMLServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062187f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112743890,param_3);
  return;
}



/* Entry: 10621880c; end: 106218907; -[SCCameraViewfinderLegacyEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10621880c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112743884,0);
  _objc_destroyWeak(param_1 + _DAT_112743890);
  _objc_destroyWeak(param_1 + _DAT_112743888);
  _objc_destroyWeak(param_1 + _DAT_112743880);
  _objc_destroyWeak(param_1 + _DAT_11274388c);
  _objc_destroyWeak(param_1 + _DAT_112743898);
  _objc_destroyWeak(param_1 + _DAT_11274387c);
  _objc_destroyWeak(param_1 + _DAT_112743874);
  _objc_destroyWeak(param_1 + _DAT_112743894);
  _objc_storeStrong(param_1 + _DAT_11274389c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112743878,0);
  return;
}



/* Entry: 106218908; end: 10621895b; -[SCCameraViewfinderStartupWorkflow dealloc] */

void FUN_106218908(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f0810;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10621895c; end: 106218967; -[SCCameraViewfinderStartupWorkflow willCreateRenderModule] */

void FUN_10621895c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onCustomPoint__112616730,0x2e);
  return;
}



/* Entry: 106218968; end: 106218973; -[SCCameraViewfinderStartupWorkflow didCreateRenderModule] */

void FUN_106218968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onCustomPoint__112616730,0x2f);
  return;
}



/* Entry: 106218974; end: 10621897f; -[SCCameraViewfinderStartupWorkflow didAttachRenderModule] */

void FUN_106218974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onCustomPoint__112616730,0x31);
  return;
}



/* Entry: 106218980; end: 1062189bb; -[SCCameraViewfinderStartupWorkflow .cxx_destruct] */

void FUN_106218980(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


