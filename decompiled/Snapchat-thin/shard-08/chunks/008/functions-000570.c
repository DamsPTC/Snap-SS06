/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066d7f8c; end: 1066d7fb3; -[SCLensExplorerDynamicSectionsProviderColleague sections] */

void FUN_1066d7f8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066d7fb4; end: 1066d7fbb; -[SCLensExplorerDynamicSectionsProviderColleague appliesSectionUpdatesWithoutAnimation] */

undefined1 FUN_1066d7fb4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



/* Entry: 1066d7fbc; end: 1066d80df; -[SCLensExplorerDynamicSectionsProviderColleague warmup] */

void FUN_1066d7fbc(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar2 = auStack_48;
    _objc_initWeak(puVar2,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1066d80e0; end: 1066d8127;  */

void FUN_1066d80e0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea99a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066d8128; end: 1066d8217; -[SCLensExplorerDynamicSectionsProviderColleague removeSection:] */

void FUN_1066d8128(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be0a220(param_1,param_2,param_3,1);
  if ((uVar1 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bfecde0(lVar4,param_2,param_3);
    if (lVar2 != 0x7fffffffffffffff) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_1066d8218;
      puStack_40 = &UNK_1109350e8;
      _objc_retain(param_3);
      lVar2 = lVar4;
      uStack_38 = param_3;
      func_0x00010bfaea20(lVar4,param_2,&puStack_58);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar2;
      _objc_release(uVar3);
      func_0x00010be72780(param_1,param_2,lVar4,*(undefined8 *)(param_1 + 0x28));
      _objc_release(uStack_38);
    }
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066d8218; end: 1066d8227;  */

bool FUN_1066d8218(long param_1,long param_2)

{
  return param_2 != *(long *)(param_1 + 0x20);
}



/* Entry: 1066d8228; end: 1066d833f; -[SCLensExplorerDynamicSectionsProviderColleague addSection:] */

void FUN_1066d8228(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010be0a220(param_1,param_2,param_3,0);
  if ((uVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bfecde0(lVar1,param_2,param_3);
    if (lVar1 != 0x7fffffffffffffff) {
      uVar2 = *(ulong *)(param_1 + 0x28);
      func_0x00010bf4b900(uVar2,param_2,param_3);
      if ((uVar2 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0xc2000000;
        pcStack_50 = FUN_1066d8340;
        puStack_48 = &UNK_110935118;
        _objc_retain(uVar4);
        uStack_40 = uVar4;
        _objc_retain(param_3);
        uStack_38 = param_3;
        func_0x00010bfaea20(uVar5,param_2,&puStack_60);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x28) = uVar5;
        _objc_release(uVar3);
        func_0x00010be72780(param_1,param_2,uVar4,*(undefined8 *)(param_1 + 0x28));
        _objc_release(uStack_38);
        _objc_release(uStack_40);
      }
    }
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066d8340; end: 1066d8397;  */

bool FUN_1066d8340(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf4b900();
  if ((uVar2 & 1) == 0) {
    bVar1 = param_2 == *(long *)(param_1 + 0x28);
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1066d8398; end: 1066d8487; -[SCLensExplorerDynamicSectionsProviderColleague tearDown] */

void FUN_1066d8398(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010bf2dcc0(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be727b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1066d8488; end: 1066d848f; -[SCLensExplorerDynamicSectionsProviderColleague _performSectionUpdatesWithCurrentSections:updatedSections:] */

void FUN_1066d8488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be727b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performSectionUpdatesWithCurren_11257a388,param_3,param_4,0);
  return;
}



/* Entry: 1066d8490; end: 1066d85eb; -[SCLensExplorerDynamicSectionsProviderColleague _performSectionUpdatesWithCurrentSections:updatedSections:completion:] */

void FUN_1066d8490(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_5);
  func_0x00010bf7ed00(uVar3,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0672e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be38f20(param_1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c12f3e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be38f20(param_1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar4);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  uVar4 = uVar3;
  func_0x00010c0d1960(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e660(param_1,param_2,param_4,lVar1,lVar2,uVar4,param_5);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1066d85ec; end: 1066d8713; -[SCLensExplorerDynamicSectionsProviderColleague _indexSetFromIndexArray:] */

undefined * FUN_1066d85ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
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
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  func_0x00010bfed2e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_3);
  puVar7 = auStack_c8;
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_100;
    do {
      lVar9 = 0;
      do {
        if (*plStack_100 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_108 + lVar9 * 8);
        func_0x00010c2827c0(uVar4);
        func_0x00010bef92c0(puVar2,param_2,uVar4);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      puVar7 = auStack_c8;
      lVar3 = param_3;
      puVar5 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  bVar1 = *(byte *)(param_3 + 0x71);
  if (bVar1 == 1) {
    func_0x00010c1556c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)puVar5;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (puVar6 != (undefined1 *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x80),param_2,puVar2,puVar6);
      _objc_release(puVar2);
    }
    _objc_release(puVar6);
  }
  return (undefined *)(ulong)bVar1;
}



/* Entry: 1066d8714; end: 1066d87bf; -[SCLensExplorerDynamicSectionsProviderColleague _enqueueSectionEmptinessIfPerformingConfigurationChange:empty:] */

char FUN_1066d8714(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  
  cVar1 = *(char *)(param_1 + 0x71);
  if (cVar1 == '\x01') {
    func_0x00010c1556c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x80),param_2,puVar3,lVar2);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
  return cVar1;
}



/* Entry: 1066d87c0; end: 1066d88d3; -[SCLensExplorerDynamicSectionsProviderColleague _flushPendingSectionEmptinessChanges] */

void FUN_1066d87c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010bf51e00();
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x80));
    uVar5 = *(ulong *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1066d88d4;
    puStack_48 = &UNK_110935118;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    _objc_retain(uVar5);
    uStack_38 = uVar5;
    func_0x00010bfaea20(uVar6,param_2,&puStack_60);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    _objc_release(uVar4);
    uVar3 = uVar5;
    func_0x00010c071b60(uVar5,param_2,*(undefined8 *)(param_1 + 0x28));
    if ((uVar3 & 1) == 0) {
      func_0x00010be72780(param_1,param_2,uVar5,*(undefined8 *)(param_1 + 0x28));
    }
    _objc_release(uStack_38);
    _objc_release(uStack_40);
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1066d88d4; end: 1066d8993;  */

ulong FUN_1066d88d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c1556c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (lVar4 == 0) {
    uVar5 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf4b900(uVar5);
  }
  else {
    lVar3 = lVar4;
    func_0x00010bf1f3c0(lVar4);
    uVar5 = (ulong)((uint)lVar3 ^ 1);
  }
  _objc_release(lVar4);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 1066d8994; end: 1066d8af7; -[SCLensExplorerDynamicSectionsProviderColleague _setUpSectionsForConfigurations:] */

void FUN_1066d8994(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x00010bea9020(param_1);
  }
  else {
    lVar2 = param_3;
    func_0x00010c0b8600(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bea9960(param_1);
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
      lVar4 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c155f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_sectionIdentifier_1126331f8);
  return;
}



/* Entry: 1066d8af8; end: 1066d8aff;  */

void FUN_1066d8af8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_sectionIdentifier_1126331f8);
  return;
}



/* Entry: 1066d8b00; end: 1066d8b87; -[SCLensExplorerDynamicSectionsProviderColleague _setUpConfigurationAwareSectionsForConfigurations:] */

void FUN_1066d8b00(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be640a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x71) == '\x01') {
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = lVar1;
    _objc_release(uVar3);
  }
  else {
    func_0x00010bdcde00(param_1,param_2,lVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066d8b88; end: 1066d8b8f;  */

void FUN_1066d8b88(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_sectionIdentifier_1126331f8);
  return;
}



/* Entry: 1066d8b90; end: 1066d8d7f; -[SCLensExplorerDynamicSectionsProviderColleague _normalizedConfigurations:] */

/* WARNING: Possible PIC construction at 0x0001066d8c64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001066d8c68) */
/* WARNING: Removing unreachable block (ram,0x0001066d8c7c) */
/* WARNING: Removing unreachable block (ram,0x0001066d8c88) */
/* WARNING: Removing unreachable block (ram,0x0001066d8cac) */
/* WARNING: Removing unreachable block (ram,0x0001066d8c38) */

void FUN_1066d8b90(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    _objc_release(param_3);
    _objc_retain(puVar4);
    puVar3 = puVar1;
    func_0x00010c0b8600(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
      return;
    }
    ___stack_chk_fail();
    puVar4 = *(undefined **)(param_3 + 0x20);
  }
  else {
    param_2 = uRam0000000000000000;
    func_0x00010c155f60(uRam0000000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1066d8d80; end: 1066d8d8b;  */

void FUN_1066d8d80(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1066d8d8c; end: 1066d929f; -[SCLensExplorerDynamicSectionsProviderColleague _applyConfigurationAwareSectionsForConfigurations:] */

ulong FUN_1066d8d8c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined **unaff_x23;
  undefined8 uVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined *puStack_320;
  undefined8 uStack_318;
  code *pcStack_310;
  undefined *puStack_308;
  ulong uStack_300;
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [8];
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar12 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar12 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    _objc_retain(param_3);
    uVar3 = param_3;
    func_0x00010bf52a60();
    if (uVar3 != 0) {
      lVar12 = *plStack_230;
      do {
        uVar16 = 0;
        do {
          if (*plStack_230 != lVar12) {
            _objc_enumerationMutation(param_3);
          }
          uVar14 = *(undefined8 *)(lStack_238 + uVar16 * 8);
          func_0x00010c155f60(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          uVar4 = *(ulong *)(param_1 + 0x58);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if ((uVar4 != 0) && (uVar5 = uVar4, func_0x00010c071ae0(), (uVar5 & 1) == 0)) {
            func_0x00010befa120(puVar2);
          }
          _objc_release(uVar4);
          _objc_release(uVar14);
          uVar16 = uVar16 + 1;
        } while (uVar3 != uVar16);
        uVar3 = param_3;
        func_0x00010bf52a60();
      } while (uVar3 != 0);
    }
    _objc_release(param_3);
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    unaff_x23 = *(undefined ***)(param_1 + 0x50);
    _objc_retain(unaff_x23);
    ppuVar6 = unaff_x23;
    func_0x00010bf52a60();
    if (ppuVar6 != (undefined **)0x0) {
      lVar12 = *plStack_270;
      do {
        ppuVar15 = (undefined **)0x0;
        do {
          if (*plStack_270 != lVar12) {
            _objc_enumerationMutation(unaff_x23);
          }
          puVar7 = puVar1;
          func_0x00010bf4b900();
          if (((ulong)puVar7 & 1) == 0) {
            func_0x00010befa120(puVar2);
          }
          ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        } while (ppuVar6 != ppuVar15);
        ppuVar6 = unaff_x23;
        func_0x00010bf52a60();
      } while (ppuVar6 != (undefined **)0x0);
    }
    _objc_release(unaff_x23);
    puVar7 = puVar2;
    func_0x00010bf529e0();
    if (puVar7 == (undefined *)0x0) {
      func_0x00010be3cc20(param_1);
    }
    else {
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain();
      puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      plStack_2b0 = (long *)0x0;
      _objc_retain(puVar2);
      puVar8 = puVar2;
      func_0x00010bf52a60();
      if (puVar8 != (undefined *)0x0) {
        lVar12 = *plStack_2b0;
        do {
          puVar13 = (undefined *)0x0;
          do {
            if (*plStack_2b0 != lVar12) {
              _objc_enumerationMutation(puVar2);
            }
            lVar9 = *(long *)(param_1 + 0x50);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar9 != 0) {
              func_0x00010befa120(puVar7);
            }
            uVar10 = *(undefined8 *)(param_1 + 0x60);
            func_0x00010c0e00e0(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf86d80();
            _objc_release(uVar10);
            func_0x00010bf2dcc0(lVar9);
            func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x60));
            func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x50));
            func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x58));
            func_0x00010c12d360(*(undefined8 *)(param_1 + 0x68));
            _objc_release(lVar9);
            puVar13 = puVar13 + 1;
          } while (puVar8 != puVar13);
          puVar8 = puVar2;
          func_0x00010bf52a60();
        } while (puVar8 != (undefined *)0x0);
      }
      _objc_release(puVar2);
      puVar8 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2e0 = 0xc2000000;
      pcStack_2d8 = FUN_1066d92a0;
      puStack_2d0 = &UNK_1109350e8;
      _objc_retain(puVar7);
      uVar10 = uVar14;
      puStack_2c8 = puVar7;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = uVar10;
      _objc_release(uVar11);
      *(undefined1 *)(param_1 + 0x71) = 1;
      _objc_initWeak(auStack_2f0,param_1);
      puStack_320 = puVar8;
      uStack_318 = 0xc2000000;
      pcStack_310 = FUN_1066d92c0;
      puStack_308 = &UNK_110841fb0;
      unaff_x23 = &puStack_320;
      _objc_copyWeak(auStack_2f8,auStack_2f0);
      _objc_retain(param_3);
      ppuVar6 = &puStack_320;
      uStack_300 = param_3;
      _objc_retainBlock();
      uVar10 = uVar14;
      func_0x00010c071b60();
      if ((int)uVar10 == 0) {
        func_0x00010be727a0(param_1);
      }
      else {
        (*(code *)ppuVar6[2])(ppuVar6);
      }
      _objc_release(ppuVar6);
      _objc_release(uStack_300);
      _objc_destroyWeak(auStack_2f8);
      _objc_destroyWeak(auStack_2f0);
      _objc_release(puStack_2c8);
      _objc_release(puVar7);
      _objc_release(uVar14);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 5);
  _objc_destroyWeak(auStack_2f0);
  __Unwind_Resume();
  uVar14 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf4b900(uVar14);
  return (ulong)((uint)uVar14 ^ 1);
}



/* Entry: 1066d92a0; end: 1066d92bf;  */

uint FUN_1066d92a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1066d92c0; end: 1066d934f;  */

void FUN_1066d92c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1066d9350;
    puStack_38 = &UNK_110841f80;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lStack_30 = lVar1;
    _objc_retain(uVar2);
    uStack_28 = uVar2;
    func_0x00010be16d60(lVar1,param_2,&puStack_50);
    _objc_release(uStack_28);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1066d9350; end: 1066d935b;  */

void FUN_1066d9350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3cc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__installConfigurationAwareSectio_11256cca8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1066d935c; end: 1066d96fb; -[SCLensExplorerDynamicSectionsProviderColleague _installConfigurationAwareSectionsForConfigurations:] */

void FUN_1066d935c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar12 = *plStack_140;
    do {
      lVar13 = 0;
      do {
        if (*plStack_140 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        uVar1 = *(undefined8 *)(lStack_148 + lVar13 * 8);
        func_0x00010c155f60(uVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = *(long *)(param_1 + 0x50);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) {
          lVar4 = *(long *)(param_1 + 0x10);
          lVar5 = param_1 + 8;
          _objc_loadWeakRetained(lVar5);
          func_0x00010c0969c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          if (lVar4 != 0) {
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50));
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58));
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x68));
            goto LAB_1066d94b8;
          }
        }
        else {
LAB_1066d94b8:
          func_0x00010befa120(puVar2);
          _objc_release(lVar4);
        }
        _objc_release(uVar1);
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  _objc_retain(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar2;
  _objc_release(uVar1);
  puVar10 = (undefined8 *)(param_1 + 0x28);
  uVar9 = *puVar10;
  _objc_retain(uVar9);
  ppuVar11 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_1066d96fc;
  puStack_160 = &UNK_1109350e8;
  _objc_retain(uVar9);
  puVar6 = puVar2;
  uStack_158 = uVar9;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *puVar10;
  *puVar10 = puVar6;
  _objc_release(uVar1);
  _objc_initWeak(auStack_180,param_1);
  puStack_1a8 = (undefined *)ppuVar11;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_1066d9708;
  puStack_190 = &UNK_1108434b0;
  puVar8 = auStack_180;
  _objc_copyWeak(auStack_188,puVar8);
  ppuVar7 = &puStack_1a8;
  _objc_retainBlock();
  uVar1 = uVar9;
  func_0x00010c071b60();
  if ((int)uVar1 == 0) {
    *(undefined1 *)(param_1 + 0x71) = 1;
    puStack_1d8 = (undefined *)ppuVar11;
    uStack_1d0 = 0xc2000000;
    uStack_1c8 = 0x1066d973c;
    puStack_1c0 = &UNK_110848708;
    ppuVar11 = &puStack_1d8;
    puVar8 = auStack_180;
    _objc_copyWeak(auStack_1b0,puVar8);
    _objc_retain(ppuVar7);
    ppuStack_1b8 = ppuVar7;
    func_0x00010be727a0(param_1);
    _objc_release(ppuStack_1b8);
    _objc_destroyWeak(auStack_1b0);
  }
  else {
    (*(code *)ppuVar7[2])(ppuVar7);
  }
  _objc_release(ppuVar7);
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(auStack_180);
  _objc_release(uStack_158);
  _objc_release(uVar9);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar11 + 5);
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(auStack_180);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_containsObject__1125b07e8,puVar8);
  return;
}



/* Entry: 1066d96fc; end: 1066d9707;  */

void FUN_1066d96fc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_containsObject__1125b07e8,param_2);
  return;
}



/* Entry: 1066d9708; end: 1066d9777;  */

void FUN_1066d9708(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beea6a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066d9778; end: 1066d97f7; -[SCLensExplorerDynamicSectionsProviderColleague _finishConfigurationChangeThenContinue:] */

void FUN_1066d9778(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x71) = 0;
  func_0x00010be18300(param_1);
  lVar2 = *(long *)(param_1 + 0x78);
  _objc_retain(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  if (lVar2 == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    func_0x00010bdcde00(param_1,param_2,lVar2);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066d97f8; end: 1066d992b; -[SCLensExplorerDynamicSectionsProviderColleague _warmPendingSections] */

void FUN_1066d97f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar9 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010bf51e00();
  puVar10 = auStack_d8;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_110;
    do {
      lVar12 = 0;
      do {
        if (*plStack_110 != lVar11) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = *(long *)(param_1 + 0x50);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010bec6940(param_1);
        }
        func_0x00010c12d360(*(undefined8 *)(param_1 + 0x68));
        _objc_release(lVar3);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      puVar10 = auStack_d8;
      lVar2 = lVar1;
      puVar9 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  puVar4 = PTR_PTR_1126ae810;
  _objc_opt_new(PTR_PTR_1126ae810);
  func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x60));
  _objc_initWeak(auStack_178,lVar1);
  puVar5 = (undefined1 *)puVar9;
  func_0x00010c0717a0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c0e0ec0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_180,auStack_178);
  _objc_retain(puVar10);
  _objc_retain(puVar9);
  puVar8 = puVar7;
  func_0x00010c25ff60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c2a1d00(puVar9);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  _objc_release(puVar4);
  _objc_release(puVar10);
  _objc_release(puVar9);
  return;
}



/* Entry: 1066d992c; end: 1066d9ae7; -[SCLensExplorerDynamicSectionsProviderColleague _subscribeAndWarmSection:withSectionIdentifier:] */

void FUN_1066d992c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new(PTR_PTR_1126ae810);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60));
  _objc_initWeak(auStack_58,param_1);
  uVar2 = param_3;
  func_0x00010c0717a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c2a1d00(param_3);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066d9ae8; end: 1066d9b87;  */

void FUN_1066d9ae8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x50);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x28);
    _objc_release();
    if (lVar2 == lVar4) {
      uVar3 = param_2;
      func_0x00010bf1f3c0();
      if ((int)uVar3 == 0) {
        func_0x00010befb260(lVar1);
      }
      else {
        func_0x00010c12e2a0(lVar1);
      }
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066d9b88; end: 1066d9e0b; -[SCLensExplorerDynamicSectionsProviderColleague _setUpSectionWithFeedConfiguration:] */

void FUN_1066d9b88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  lVar6 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar6 != 0) {
    lVar6 = *(long *)(param_1 + 0x50);
    uVar1 = param_3;
    func_0x00010c155f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (lVar6 == 0) {
      lVar7 = *(long *)(param_1 + 0x10);
      lVar6 = param_1 + 8;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c0969c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      uVar1 = param_3;
      func_0x00010c155f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5);
      _objc_release(uVar1);
    }
    else {
      lVar7 = 0;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1066d9e0c;
    puStack_70 = &UNK_1109351a8;
    lStack_68 = param_1;
    func_0x00010bfb2660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    _objc_release(uVar5);
    if (lVar7 != 0) {
      _objc_initWeak(auStack_90,param_1);
      lVar6 = lVar7;
      func_0x00010c0717a0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010c0e0ec0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_98,auStack_90);
      _objc_retain(lVar7);
      lVar4 = lVar3;
      func_0x00010c25ff60(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar6);
      func_0x00010c2a1d00(lVar7);
      _objc_release(lVar7);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_90);
    }
    _objc_release(lVar7);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1066d9e0c; end: 1066d9e63;  */

void FUN_1066d9e0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c155f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066d9e64; end: 1066d9ed3;  */

void FUN_1066d9e64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    if ((int)uVar1 == 0) {
      func_0x00010befb260(param_1);
    }
    else {
      func_0x00010c12e2a0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066d9ed4; end: 1066d9f9b; -[SCLensExplorerDynamicSectionsProviderColleague .cxx_destruct] */

void FUN_1066d9ed4(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1066d9f9c; end: 1066da043; -[SCLensExplorerManualItemTrackingMediator initWithMediator:loggingColleague:] */

undefined1 *
FUN_1066d9f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2828;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066da044; end: 1066da093; -[SCLensExplorerManualItemTrackingMediator _batchUpdateEnter] */

void FUN_1066da044(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  if (*(long *)(param_1 + 0x38) != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010beea240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1066da094; end: 1066da0f7; -[SCLensExplorerManualItemTrackingMediator _batchUpdateExit] */

void FUN_1066da094(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30) + -1;
  *(long *)(param_1 + 0x30) = lVar1;
  if (lVar1 != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010beea240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be333c0(param_1,param_2,*(undefined8 *)(param_1 + 0x38),lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066da0f8; end: 1066da2d7; -[SCLensExplorerManualItemTrackingMediator _visibleSections] */

void FUN_1066da0f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (0 < lVar4) {
    lVar3 = 0;
    do {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      lVar7 = param_1;
      func_0x00010be5aa80(param_1,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bf002e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1066da2d8;
      puStack_90 = &UNK_1109351d8;
      _objc_retain(uVar1);
      uStack_88 = uVar1;
      uStack_80 = uVar6;
      lStack_78 = lVar7;
      _objc_retain(lVar7);
      _objc_retain(uVar6);
      uVar8 = uVar5;
      func_0x00010bfb2660(uVar5,param_2,&puStack_a8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar9 = PTR_PTR_1126cd088;
      _objc_alloc(PTR_PTR_1126cd088);
      func_0x00010c042d20();
      func_0x00010befa120(puVar2,param_2,puVar9);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(lStack_78);
      _objc_release(uStack_80);
      _objc_release(uStack_88);
      _objc_release(lVar7);
      _objc_release(uVar6);
      lVar3 = lVar3 + 1;
    } while (lVar4 != lVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066da2d8; end: 1066da427;  */

void FUN_1066da2d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010010fab4();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1556c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar8 = (undefined *)0x0;
  if ((int)uVar6 != 0) {
    lVar7 = *(long *)(param_1 + 0x30);
    func_0x00010bf33f80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126cd080;
      _objc_alloc(PTR_PTR_1126cd080);
      func_0x00010c0840e0(param_2);
      func_0x00010c01d760(puVar8);
    }
    _objc_release(lVar7);
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1066da428; end: 1066da86b; -[SCLensExplorerManualItemTrackingMediator _handleVisibleSectionsUpdateFrom:to:] */

ulong FUN_1066da428(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (uVar1 != 0) {
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_3);
      }
      uVar9 = *(undefined8 *)(uVar8 * 8);
      lVar2 = param_4;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        uVar5 = uVar9;
        func_0x00010c1554e0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c084fc0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be65040(param_1);
      }
      else {
        lVar10 = lVar2;
        func_0x00010c1554e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar9;
        func_0x00010c084fc0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c084fc0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_1;
        func_0x00010be1ef00(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(uVar3);
        _objc_release(lVar10);
        uVar3 = uVar9;
        func_0x00010c1554e0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be65040(param_1);
        _objc_release(uVar3);
        lVar10 = lVar2;
        func_0x00010c1554e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c084fc0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c084fc0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        func_0x00010be1ef00(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(lVar4);
        _objc_release(lVar10);
        lVar10 = lVar2;
        func_0x00010c1554e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be65020(param_1);
        _objc_release(lVar10);
        uVar9 = uVar3;
      }
      _objc_release(uVar9);
      _objc_release(uVar5);
      _objc_release(lVar2);
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
    uVar1 = param_3;
    func_0x00010bf52a60();
  }
  _objc_retain(param_4);
  lVar6 = param_4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_4);
      }
      uVar9 = *(undefined8 *)(lVar10 * 8);
      uVar1 = param_3;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        uVar5 = uVar9;
        func_0x00010c1554e0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c084fc0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be65020(param_1);
        _objc_release(uVar9);
        _objc_release(uVar5);
      }
      _objc_release(uVar1);
      lVar10 = lVar10 + 1;
    } while (lVar6 != lVar10);
    lVar6 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)(param_3 + 0x20);
  _objc_retain(param_2);
  func_0x00010c1554e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010c1554e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar6);
  _objc_release(lVar7);
  return (ulong)(lVar7 == lVar6);
}



/* Entry: 1066da86c; end: 1066da963;  */

bool FUN_1066da86c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c1554e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c1554e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
  _objc_release(lVar2);
  return lVar2 == lVar1;
}



/* Entry: 1066da964; end: 1066dab73; -[SCLensExplorerManualItemTrackingMediator _getExtraObjectWithSection:comparedArray:baseArray:] */

void FUN_1066da964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010be5aa80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1066daa44;
  puStack_48 = &UNK_110935238;
  uStack_40 = param_5;
  uStack_38 = param_1;
  _objc_retain();
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfaea20(param_4,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066dab74; end: 1066dacfb; -[SCLensExplorerManualItemTrackingMediator _notifySection:itemsAppeared:] */

void FUN_1066dab74(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  puVar8 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = param_4;
  func_0x00010bf529e0();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x00010be5aa80();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_4);
    puVar8 = auStack_e8;
    puVar2 = param_4;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar7 = *plStack_120;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(param_4);
          }
          uVar6 = *(undefined8 *)(lStack_128 + (long)puVar8 * 8);
          uVar3 = uVar6;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfec9e0(uVar6);
          func_0x00010c2a5860(param_1);
          _objc_release(uVar3);
          puVar8 = puVar8 + 1;
        } while (puVar2 != puVar8);
        puVar8 = auStack_e8;
        puVar2 = param_4;
        puVar5 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_4);
    _objc_release(param_1);
    puVar4 = (undefined1 *)puVar5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar8);
  puVar2 = puVar8;
  func_0x00010bf529e0();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x00010be5aa80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar8);
    puVar2 = puVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar2 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar8);
        }
        uVar6 = *(undefined8 *)((long)puVar9 * 8);
        uVar3 = uVar6;
        func_0x00010c0840e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec9e0(uVar6);
        func_0x00010bf74a40(param_3);
        _objc_release(uVar3);
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = puVar8;
      func_0x00010bf52a60();
    }
    _objc_release(puVar8);
    _objc_release(param_3);
  }
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0f2150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar4 + 8),PTR_s_pageViewDidLoad_11261a268);
  return;
}



/* Entry: 1066dacfc; end: 1066dae83; -[SCLensExplorerManualItemTrackingMediator _notifySection:itemsDisappeared:] */

void FUN_1066dacfc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010be5aa80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    lVar2 = param_4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        uVar5 = *(undefined8 *)(lVar6 * 8);
        uVar3 = uVar5;
        func_0x00010c0840e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec9e0(uVar5);
        func_0x00010bf74a40(param_1);
        _objc_release(uVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
    _objc_release(param_1);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0f2150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 8),PTR_s_pageViewDidLoad_11261a268);
  return;
}



/* Entry: 1066dae84; end: 1066dae8b; -[SCLensExplorerManualItemTrackingMediator pageViewDidLoad] */

void FUN_1066dae84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f2150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_pageViewDidLoad_11261a268);
  return;
}



/* Entry: 1066dae8c; end: 1066dae93; -[SCLensExplorerManualItemTrackingMediator pageViewWillAppear] */

void FUN_1066dae8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f22f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_pageViewWillAppear_11261a2d0);
  return;
}



/* Entry: 1066dae94; end: 1066dae9b; -[SCLensExplorerManualItemTrackingMediator pageViewWillDisappear] */

void FUN_1066dae94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f2310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_pageViewWillDisappear_11261a2d8);
  return;
}



/* Entry: 1066dae9c; end: 1066daea3; -[SCLensExplorerManualItemTrackingMediator pageViewDidReceiveMemoryWarning] */

void FUN_1066dae9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f2170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_pageViewDidReceiveMemoryWarning_11261a270);
  return;
}



/* Entry: 1066daea4; end: 1066daeab; -[SCLensExplorerManualItemTrackingMediator pageViewDidAppear] */

void FUN_1066daea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f20f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_pageViewDidAppear_11261a250);
  return;
}



/* Entry: 1066daeac; end: 1066daeb3; -[SCLensExplorerManualItemTrackingMediator sectionsObservable] */

void FUN_1066daeac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c156bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sectionsObservable_112633510);
  return;
}



/* Entry: 1066daeb4; end: 1066daebb; -[SCLensExplorerManualItemTrackingMediator configureCell:indexPath:] */

void FUN_1066daeb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf46d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_configureCell_indexPath__1125af4f0);
  return;
}



/* Entry: 1066daebc; end: 1066daec3; -[SCLensExplorerManualItemTrackingMediator willDisplayCell:indexPath:] */

void FUN_1066daebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a6030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_willDisplayCell_indexPath__112687230);
  return;
}



/* Entry: 1066daec4; end: 1066daed7; -[SCLensExplorerManualItemTrackingMediator willDisplayRequiredCellPortion:indexPath:impressionSet:] */

void FUN_1066daec4(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2a61f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_willDisplayRequiredCellPortion_i_1126872a0);
  return;
}



/* Entry: 1066daed8; end: 1066daedf; -[SCLensExplorerManualItemTrackingMediator didEndDisplayingCell:indexPath:] */

void FUN_1066daed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf758d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_didEndDisplayingCell_indexPath__1125bafd8);
  return;
}



/* Entry: 1066daee0; end: 1066daef3; -[SCLensExplorerManualItemTrackingMediator didEndDisplayingRequiredCellPortion:indexPath:impressionSet:] */

void FUN_1066daee0(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf75950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_didEndDisplayingRequiredCellPort_1125baff8);
  return;
}



/* Entry: 1066daef4; end: 1066daefb; -[SCLensExplorerManualItemTrackingMediator configureSupplementaryView:kind:indexPath:sectionIdentifier:] */

void FUN_1066daef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf474d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_configureSupplementaryView_kind__1125af6d8);
  return;
}



/* Entry: 1066daefc; end: 1066daf03; -[SCLensExplorerManualItemTrackingMediator prefetchItemsAtIndexPaths:] */

void FUN_1066daefc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1078d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_prefetchItemsAtIndexPaths__11261f850);
  return;
}



/* Entry: 1066daf04; end: 1066daf0b; -[SCLensExplorerManualItemTrackingMediator cancelPrefetchingForItemsAtIndexPaths:] */

void FUN_1066daf04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ead0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelPrefetchingForItemsAtIndex_1125a9458);
  return;
}



/* Entry: 1066daf0c; end: 1066daf13; -[SCLensExplorerManualItemTrackingMediator didScrollToEndForSection:] */

void FUN_1066daf0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7a530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_didScrollToEndForSection__1125bc2f0);
  return;
}



/* Entry: 1066daf14; end: 1066db063; -[SCLensExplorerManualItemTrackingMediator didUpdateSections:insertedIndexes:removedIndexes:movedIndexes:completion:] */

void FUN_1066daf14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bdd2f60(param_1);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_7);
  func_0x00010bf7e660(uVar1);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066db064; end: 1066db0ab;  */

void FUN_1066db064(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdd2f80(lVar1);
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066db0ac; end: 1066db1fb; -[SCLensExplorerManualItemTrackingMediator didUpdateSection:insertedIndexes:removedIndexes:movedIndexes:completion:] */

void FUN_1066db0ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bdd2f60(param_1);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_7);
  func_0x00010bf7e640(uVar1);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066db1fc; end: 1066db243;  */

void FUN_1066db1fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdd2f80(lVar1);
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066db244; end: 1066db24b; -[SCLensExplorerManualItemTrackingMediator loggingConfigurationForSectionConfiguration:] */

void FUN_1066db244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b39b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_loggingConfigurationForSectionCo_11260a878);
  return;
}



/* Entry: 1066db24c; end: 1066db2a3; -[SCLensExplorerManualItemTrackingMediator registerCollectioViewColleague:] */

void FUN_1066db24c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1260e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066db2a4; end: 1066db2ab; -[SCLensExplorerManualItemTrackingMediator registerCategoryFetchingColleague:] */

void FUN_1066db2a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c125f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_registerCategoryFetchingColleagu_1126271e0);
  return;
}



/* Entry: 1066db2ac; end: 1066db303; -[SCLensExplorerManualItemTrackingMediator registerViewModelProviderColleague:] */

void FUN_1066db2ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1275e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066db304; end: 1066db30b; -[SCLensExplorerManualItemTrackingMediator registerExplorerPageColleague:] */

void FUN_1066db304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1263f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_registerExplorerPageColleague__112627318);
  return;
}



/* Entry: 1066db30c; end: 1066db313; -[SCLensExplorerManualItemTrackingMediator handleFetchError:] */

void FUN_1066db30c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_handleFetchError__1125d1e40);
  return;
}



/* Entry: 1066db314; end: 1066db387; -[SCLensExplorerManualItemTrackingMediator _loggerForSection:] */

void FUN_1066db314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1556c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf33f60(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066db388; end: 1066db3db; -[SCLensExplorerManualItemTrackingMediator .cxx_destruct] */

void FUN_1066db388(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066db3dc; end: 1066db543; -[SCLensExplorerMediator initWithCategoryId:preselectedItemId:loggingColleague:networkMonitoringColleague:sectionItemsTrackingColleague:] */

undefined1 *
FUN_1066db3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f2830;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x40));
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066db544; end: 1066db573; -[SCLensExplorerMediator registerCollectioViewColleague:] */

void FUN_1066db544(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1066db574; end: 1066db5a3; -[SCLensExplorerMediator registerCategoryFetchingColleague:] */

void FUN_1066db574(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066db5a4; end: 1066db5d3; -[SCLensExplorerMediator registerViewModelProviderColleague:] */

void FUN_1066db5a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066db5d4; end: 1066db603; -[SCLensExplorerMediator registerExplorerPageColleague:] */

void FUN_1066db5d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066db604; end: 1066db74b; -[SCLensExplorerMediator pageViewDidLoad] */

void FUN_1066db604(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1;
  func_0x00010c156bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e0ec0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06db40();
  if ((uVar5 & 1) == 0) {
    func_0x00010c238140(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1066db74c; end: 1066db86b;  */

void FUN_1066db74c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c124d20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    if (0 < lVar2) {
      func_0x00010bfe2260(*(undefined8 *)(param_1 + 0x28));
      func_0x00010c24f4a0(*(undefined8 *)(param_1 + 0x40));
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066db86c; end: 1066db8bb; -[SCLensExplorerMediator pageViewWillAppear] */

void FUN_1066db86c(long param_1)

{
  ulong uVar1;
  
  func_0x00010c0f2380(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c2a1d00(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06db40();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1359e0(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x00010bf40aa0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c2513b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_startTracking_112671f10);
  return;
}



/* Entry: 1066db8bc; end: 1066db8fb; -[SCLensExplorerMediator pageViewWillDisappear] */

void FUN_1066db8bc(long param_1)

{
  func_0x00010bf40ae0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c26ab80(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c2562c0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c0f23a0(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010c256cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_stopTracking_112673560);
  return;
}



/* Entry: 1066db8fc; end: 1066db903; -[SCLensExplorerMediator pageViewDidReceiveMemoryWarning] */

void FUN_1066db8fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_tearDown_112678508);
  return;
}



/* Entry: 1066db904; end: 1066db90b; -[SCLensExplorerMediator pageViewDidAppear] */

void FUN_1066db904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf407f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_collectionViewDidAppear_1125adba0);
  return;
}



/* Entry: 1066db90c; end: 1066dba5b; -[SCLensExplorerMediator sectionsObservable] */

void FUN_1066db90c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1066dba5c;
  puStack_68 = &UNK_1109352a8;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar1 = &puStack_80;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  ppuVar2 = ppuVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar1);
  uVar3 = uVar4;
  func_0x00010c0b8600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(uVar4);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066dba5c; end: 1066dbc33;  */

void FUN_1066dba5c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_4);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_4;
    func_0x00010bf4c160();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar7 = 0;
      do {
        lVar3 = param_4;
        func_0x00010c13fdc0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23d1e0(param_4);
        puVar6 = PTR_PTR_1126cd090;
        _objc_alloc(PTR_PTR_1126cd090);
        func_0x00010c040060(param_1,param_2);
        func_0x00010befa120(puVar2);
        _objc_release(puVar6);
        _objc_release(lVar3);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
    }
    lVar1 = param_4;
    func_0x00010c1556c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cd098;
    _objc_alloc(PTR_PTR_1126cd098);
    puVar4 = puVar2;
    func_0x00010bf51e00(puVar2);
    lVar7 = param_4;
    func_0x00010bfe5f60(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c262dc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c155f60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0202e0(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar7);
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1066dbc34; end: 1066dbc3f;  */

void FUN_1066dbc34(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_flatMap__1125ca340,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1066dbc40; end: 1066dbd23; -[SCLensExplorerMediator configureCell:indexPath:] */

void FUN_1066dbc40(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = param_4;
  func_0x00010c1554e0();
  _objc_release(uVar1);
  if (uVar3 < uVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c156b00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c1554e0(param_4);
    uVar5 = uVar4;
    func_0x00010c0dfd40(uVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar2 = param_4;
    func_0x00010c0840e0(param_4);
    func_0x00010bf46d00(uVar5,param_2,param_3,uVar2);
    _objc_release(uVar5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066dbd24; end: 1066dbe07; -[SCLensExplorerMediator willDisplayCell:indexPath:] */

void FUN_1066dbd24(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = param_4;
  func_0x00010c1554e0();
  _objc_release(uVar1);
  if (uVar3 < uVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c156b00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c1554e0(param_4);
    uVar5 = uVar4;
    func_0x00010c0dfd40(uVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar2 = param_4;
    func_0x00010c0840e0(param_4);
    func_0x00010c2a5840(uVar5,param_2,param_3,uVar2);
    _objc_release(uVar5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066dbe08; end: 1066dbf37; -[SCLensExplorerMediator willDisplayRequiredCellPortion:indexPath:impressionSet:] */

void FUN_1066dbe08(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = param_4;
  func_0x00010c1554e0();
  _objc_release(uVar1);
  if (uVar3 < uVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c156b00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c1554e0(param_4);
    uVar5 = uVar4;
    func_0x00010c0dfd40(uVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010be5aa80(param_1,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf33f80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0840e0(param_4);
    func_0x00010c2a5860(param_1,param_2,lVar6,uVar2,param_5);
    _objc_release(lVar6);
    _objc_release(param_1);
    _objc_release(uVar5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066dbf38; end: 1066dc01f; -[SCLensExplorerMediator didEndDisplayingCell:indexPath:] */

void FUN_1066dbf38(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = param_4;
  func_0x00010c1554e0();
  _objc_release(uVar1);
  if (uVar3 < uVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c156b00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c1554e0(param_4);
    uVar5 = uVar4;
    func_0x00010c0dfd40(uVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar2 = param_4;
    func_0x00010c0840e0(param_4);
    func_0x00010bf74a20(uVar5,param_2,param_3,uVar2,0);
    _objc_release(uVar5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066dc020; end: 1066dc14f; -[SCLensExplorerMediator didEndDisplayingRequiredCellPortion:indexPath:impressionSet:] */

void FUN_1066dc020(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = param_4;
  func_0x00010c1554e0();
  _objc_release(uVar1);
  if (uVar3 < uVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c156b00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c1554e0(param_4);
    uVar5 = uVar4;
    func_0x00010c0dfd40(uVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010be5aa80(param_1,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf33f80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0840e0(param_4);
    func_0x00010bf74a40(param_1,param_2,lVar6,uVar2,param_5);
    _objc_release(lVar6);
    _objc_release(param_1);
    _objc_release(uVar5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066dc150; end: 1066dc33f; -[SCLensExplorerMediator configureSupplementaryView:kind:indexPath:sectionIdentifier:] */

void FUN_1066dc150(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar3 = *(ulong *)(param_1 + 0x30);
  _objc_retain(param_5);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c1554e0();
  _objc_release(param_5);
  uVar4 = uVar3;
  func_0x00010bf529e0();
  if (uVar1 < uVar4) {
    uVar4 = uVar3;
    func_0x00010c0dfd40(uVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  uVar1 = uVar4;
  func_0x00010c1556c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,param_6);
  uVar5 = uVar4;
  if ((uVar1 & 1) == 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1066dc340;
    puStack_60 = &UNK_1109350e8;
    _objc_retain(param_6);
    uVar1 = uVar3;
    uStack_58 = param_6;
    func_0x00010bfb2040(uVar3,param_2,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      func_0x00010c0b8600(uVar3,param_2,&PTR___NSConcreteGlobalBlock_1109352f8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(uVar1);
      uVar5 = uVar1;
    }
    _objc_release();
    _objc_release(uVar1);
    _objc_release(uStack_58);
  }
  if (uVar5 != 0) {
    func_0x00010bf474a0(uVar5,param_2,param_3,param_4);
  }
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066dc340; end: 1066dc417;  */

undefined8 FUN_1066dc340(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1556c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1066dc418; end: 1066dc48b; -[SCLensExplorerMediator prefetchItemsAtIndexPaths:] */

void FUN_1066dc418(undefined8 param_1)

{
  func_0x00010be9d160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97ce0();
  _objc_release(param_1);
  return;
}



/* Entry: 1066dc48c; end: 1066dc56b;  */

void FUN_1066dc48c(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = param_2;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  if (uVar3 < uVar2) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010c156b00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0(param_2);
    uVar5 = uVar4;
    func_0x00010c0dfd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c1078e0(uVar5);
    _objc_release(uVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066dc56c; end: 1066dc5df; -[SCLensExplorerMediator cancelPrefetchingForItemsAtIndexPaths:] */

void FUN_1066dc56c(undefined8 param_1)

{
  func_0x00010be9d160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97ce0();
  _objc_release(param_1);
  return;
}



/* Entry: 1066dc5e0; end: 1066dc6bf;  */

void FUN_1066dc5e0(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = param_2;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  if (uVar3 < uVar2) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010c156b00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0(param_2);
    uVar5 = uVar4;
    func_0x00010c0dfd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010bf2eae0(uVar5);
    _objc_release(uVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066dc6c0; end: 1066dc7a7; -[SCLensExplorerMediator didScrollToEndForSection:] */

void FUN_1066dc6c0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (param_3 < uVar2) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c156b00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar4;
    func_0x00010bfd93c0();
    if ((int)uVar3 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = uVar4;
      func_0x00010c1556c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c155f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1369c0(uVar6,param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 1066dc7a8; end: 1066dca03; -[SCLensExplorerMediator _sectionsMapFromIndexPaths:] */

void FUN_1066dc7a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
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
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar9 = *(long *)(lStack_128 + lVar8 * 8);
        lVar3 = lVar9;
        func_0x00010c1554e0();
        func_0x00010c0840e0();
        if (lVar3 != 0x7fffffffffffffff && lVar9 != 0x7fffffffffffffff) {
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          func_0x00010c0e00e0(puVar2,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR____NSArray0__struct_11034ab48;
          if (puVar5 != (undefined *)0x0) {
            puVar6 = puVar5;
          }
          _objc_retain(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          func_0x00010bf09f60(puVar6,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2,param_2,puVar5,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  puVar6 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,*(undefined8 *)(param_3 + 0x10));
  if ((int)puVar2 != 0) {
    lVar1 = param_3;
    func_0x00010be38dc0(param_3,param_2,*(undefined8 *)(param_3 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c1525c0(*(undefined8 *)(param_3 + 0x18),param_2,lVar1);
      uVar7 = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_3 + 0x10) = 0;
      _objc_release(uVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}


