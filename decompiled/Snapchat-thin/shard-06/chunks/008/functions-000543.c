/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e665a4; end: 104e66683; -[SCShortcutsDataGroupsPluginImpl resumeUpdates] */

void FUN_104e665a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010be24920(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar2;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 104e66684; end: 104e666f3;  */

void FUN_104e66684(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e666f4; end: 104e666fb; -[SCShortcutsDataGroupsPluginImpl alwaysShow] */

undefined8 FUN_104e666f4(void)

{
  return 0;
}



/* Entry: 104e666fc; end: 104e667af; -[SCShortcutsDataGroupsPluginImpl badgeObservable] */

void FUN_104e666fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bed1c80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e667b0; end: 104e667bb; -[SCShortcutsDataGroupsPluginImpl shouldBadgeForSource:] */

bool FUN_104e667b0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffd) != 0;
}



/* Entry: 104e667bc; end: 104e66817; -[SCShortcutsDataGroupsPluginImpl _createPerformerWithPerformerProvider:] */

void FUN_104e667bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e66818; end: 104e6690f; -[SCShortcutsDataGroupsPluginImpl _groupsShortcutRecipientsObservable:] */

void FUN_104e66818(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010be24920();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104e66910; end: 104e6697f;  */

void FUN_104e66910(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e66980; end: 104e66a6f; -[SCShortcutsDataGroupsPluginImpl _groupRecipientsObservable:] */

void FUN_104e66980(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104e66a70; end: 104e66b37;  */

void FUN_104e66a70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  func_0x00010bf00d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  pcStack_48 = FUN_104e66b38;
  puStack_40 = &UNK_1108549f0;
  uStack_38 = *(undefined1 *)(param_1 + 0x20);
  uVar2 = uVar1;
  func_0x0001006372a4(uVar1,&puStack_58);
  uVar3 = uVar2;
  func_0x000100504554();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104e66b38; end: 104e66c4b;  */

byte FUN_104e66b38(long param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfd5ca0();
  if ((int)uVar1 == 0) {
    uVar1 = param_2;
    func_0x00010c06ecc0();
    if ((uVar1 & 1) == 0) {
      puStack_48 = &uStack_50;
      uStack_50 = 0;
      uStack_40 = 0x2020000000;
      uStack_38 = 1;
      uVar1 = param_2;
      func_0x00010c261460(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bcca0();
      _objc_release(uVar1);
      bVar2 = *(byte *)(puStack_48 + 3);
      __Block_object_dispose(&uStack_50,8);
    }
    else {
      bVar2 = 0;
    }
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x20) ^ 1;
  }
  _objc_release(param_2);
  return bVar2 & 1;
}



/* Entry: 104e66c4c; end: 104e66c5b;  */

void FUN_104e66c4c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 104e66c5c; end: 104e66cb3;  */

void FUN_104e66c5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b14a0;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcf600(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e66cb4; end: 104e66d87; -[SCShortcutsDataGroupsPluginImpl _unreadGroupRecipientsObservable] */

void FUN_104e66cb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf49880();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar5;
  func_0x00010c0b8600(uVar5,param_2,&PTR___NSConcreteGlobalBlock_110854a70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104e66d88; end: 104e66da7;  */

void FUN_104e66d88(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110854ab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e66da8; end: 104e66ec3;  */

void FUN_104e66da8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104e66ec4;
  uStack_40 = 0x104e66ed4;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c0c0020(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e66ec4; end: 104e66edb;  */

void FUN_104e66ec4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104e66edc; end: 104e66f4b;  */

void FUN_104e66edc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b14a0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3d00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcf600(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e66f4c; end: 104e66f77; -[SCShortcutsDataGroupsPluginImpl _disposeObserver] */

void FUN_104e66f4c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e66f78; end: 104e66fe3; -[SCShortcutsDataGroupsPluginImpl .cxx_destruct] */

void FUN_104e66f78(long param_1)

{
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



/* Entry: 104e66fe4; end: 104e6711f; -[SCShortcutsDataGroupsPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e66fe4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1 + _DAT_112714bd4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b14f8;
  _objc_alloc(PTR_PTR_1126b14f8);
  lVar4 = param_1 + _DAT_112714bd8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfcf900();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112714bdc;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112714be0;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0194e0(puVar3,param_2,lVar5,lVar7,lVar8);
  func_0x00010c125b60(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e67120; end: 104e6716f; -[SCShortcutsDataGroupsPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e67120(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714be0);
  _objc_destroyWeak(param_1 + _DAT_112714bdc);
  _objc_destroyWeak(param_1 + _DAT_112714bd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112714bd4);
  return;
}



/* Entry: 104e67170; end: 104e67187;  */

void FUN_104e67170(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db7c78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db7c78,
                      &PTR____CFConstantStringClassReference_110db7c98,0);
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



/* Entry: 104e67188; end: 104e6734f; -[SCShortcutsDataMerlinPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e67188(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
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
  
  lVar1 = param_1 + _DAT_112714be4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1500;
  _objc_alloc();
  lVar14 = (long)_DAT_112714be8;
  lVar4 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112714bec;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c0fc460();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar14);
  lVar8 = lVar14;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112714bf0;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112714bf4;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c0d44e0();
  func_0x00010c049fc0(puVar3,param_2,lVar5,lVar7,lVar8,lVar10,lVar13);
  func_0x00010c125b60(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar14);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e67350; end: 104e673b7; -[SCShortcutsDataMerlinPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e67350(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714bf0);
  _objc_destroyWeak(param_1 + _DAT_112714bf4);
  _objc_destroyWeak(param_1 + _DAT_112714bf8);
  _objc_destroyWeak(param_1 + _DAT_112714bec);
  _objc_destroyWeak(param_1 + _DAT_112714be8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112714be4);
  return;
}



/* Entry: 104e673b8; end: 104e67683; -[SCShortcutsDataMerlinPluginImpl initWithSnapchattersObservableRepository:pinnedConversationsDataCoordinator:snapchattersDataFetcher:performerProvider:myAISendToShortcutVariant:] */

undefined8 *
FUN_104e673b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_80 = PTR_PTR_1126e4900;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    *(bool *)(puVar1 + 10) = param_7 != 0;
    puVar1[0xb] = param_7;
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_104e67684;
    puStack_a8 = &UNK_1108544e0;
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(param_6);
    uStack_a0 = param_6;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_e8 = puVar4;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_104e676e8;
    puStack_d0 = &UNK_110854530;
    _objc_copyWeak(auStack_c8,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_f0,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar4;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_c8);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e67684; end: 104e676cb;  */

void FUN_104e67684(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e676cc; end: 104e676e7;  */

void FUN_104e676cc(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e676e8; end: 104e6776f;  */

void FUN_104e676e8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5fce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e67770; end: 104e677b3; -[SCShortcutsDataMerlinPluginImpl dealloc] */

void FUN_104e67770(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be05220();
  puStack_28 = PTR_PTR_1126e4900;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104e677b4; end: 104e6787b; -[SCShortcutsDataMerlinPluginImpl shortcutForSource:] */

void FUN_104e677b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010bf6ab80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e6787c; end: 104e67937;  */

void FUN_104e6787c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126ae750;
  if (lVar1 == 0) {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = lVar1;
    func_0x00010be5fcc0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2468a0(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104e67938; end: 104e67967; -[SCShortcutsDataMerlinPluginImpl shortcutId] */

void FUN_104e67938(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e20e38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e20e38);
  return;
}



/* Entry: 104e67968; end: 104e6798f; -[SCShortcutsDataMerlinPluginImpl shouldShowForSource:] */

byte FUN_104e67968(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  
  if (param_3 == 1) {
    bVar1 = 1;
  }
  else if (param_3 == 0) {
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 104e67990; end: 104e67997; -[SCShortcutsDataMerlinPluginImpl alwaysShow] */

undefined8 FUN_104e67990(void)

{
  return 0;
}



/* Entry: 104e67998; end: 104e679db; -[SCShortcutsDataMerlinPluginImpl recipientsForSource:] */

void FUN_104e67998(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    if (*(char *)(param_1 + 0x50) != '\x01') goto _objc_autoreleaseReturnValue;
    lVar1 = 0x38;
  }
  else {
    lVar1 = 0x40;
  }
  func_0x00010c269d40(*(undefined8 *)(param_1 + lVar1));
  _objc_retainAutoreleasedReturnValue();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e679dc; end: 104e67ad3; -[SCShortcutsDataMerlinPluginImpl resumeUpdates] */

void FUN_104e679dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010be5fce0(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar1 = lVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar1;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar2);
  return;
}



/* Entry: 104e67ad4; end: 104e67b3f;  */

void FUN_104e67ad4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e67b40; end: 104e67b43; -[SCShortcutsDataMerlinPluginImpl pauseUpdates] */

void FUN_104e67b40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__disposeObserver_11255ee28);
  return;
}



/* Entry: 104e67b44; end: 104e67c53; -[SCShortcutsDataMerlinPluginImpl _merlinShortcutForSource:] */

void FUN_104e67b44(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b1508;
  func_0x00010c292680(PTR_PTR_1126b1508,param_2,&PTR____CFConstantStringClassReference_110e12b58);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar1;
      func_0x000104e68424();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar4 = (undefined *)0x0;
    lVar5 = 0;
  }
  puVar2 = PTR_PTR_1126b1490;
  func_0x00010c156660(PTR_PTR_1126b1490,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5fd00(param_1,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1498;
  _objc_alloc(PTR_PTR_1126b1498);
  func_0x00010c045ee0();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e67c54; end: 104e67d2b; -[SCShortcutsDataMerlinPluginImpl _merlinShortcutTitleForVariant:] */

void FUN_104e67c54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  if (param_3 == 2) {
    func_0x000104e68424();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = param_1;
  }
  else if (param_3 == 1) {
    FUN_104e6840c();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = param_1;
  }
  else if (param_3 == 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0ee920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = lVar3;
    if (lVar3 == 0) {
      FUN_104e6840c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar3);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 104e67d2c; end: 104e67d87; -[SCShortcutsDataMerlinPluginImpl _createPerformerWithPerformerProvider:] */

void FUN_104e67d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e67d88; end: 104e67ee7; -[SCShortcutsDataMerlinPluginImpl _merlinShortcutRecipientsObservableWithPinnedConversationFiltering:] */

void FUN_104e67d88(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010be5fca0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x104e67f54;
    puStack_70 = &UNK_110842c58;
    ppuVar4 = &puStack_88;
    _objc_copyWeak(auStack_68,auStack_38);
    lVar2 = lVar1;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar2;
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104e67ee8;
    puStack_48 = &UNK_110842c58;
    ppuVar4 = &puStack_60;
    _objc_copyWeak(auStack_40,auStack_38);
    lVar2 = lVar1;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar2;
  }
  _objc_release(uVar3);
  _objc_destroyWeak(ppuVar4 + 4);
  _objc_destroyWeak(auStack_38);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104e67ee8; end: 104e67fbf;  */

void FUN_104e67ee8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e67fc0; end: 104e681c7; -[SCShortcutsDataMerlinPluginImpl _merlinRecipientsObservableWithPinnedConversationFiltering:] */

void FUN_104e67fc0(long param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e12b58;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c2445e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c0fc5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar7);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc0000000;
  pcStack_78 = FUN_104e681c8;
  puStack_70 = &UNK_110854b70;
  lVar5 = lVar6;
  uVar4 = uVar9;
  uStack_68 = param_3;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  lVar1 = lVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_98 = FUN_104e681c8;
    uStack_c0 = uVar7;
    uStack_b8 = uVar8;
    lStack_b0 = lVar6;
    lStack_a8 = lVar5;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_retain(uVar4);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_104e68280;
    puStack_d8 = &UNK_110854b20;
    uStack_c8 = *(undefined1 *)(lVar1 + 0x20);
    uStack_d0 = uVar4;
    _objc_retain(uVar4);
    func_0x0001006372a4(param_2,&puStack_f0);
    lVar5 = param_2;
    func_0x000100504554();
    _objc_release(param_2);
    _objc_release(uStack_d0);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 104e681c8; end: 104e6827f;  */

void FUN_104e681c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104e68280;
  puStack_48 = &UNK_110854b20;
  uStack_38 = *(undefined1 *)(param_1 + 0x20);
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x0001006372a4(param_2,&puStack_60);
  uVar1 = param_2;
  func_0x000100504554();
  _objc_release(param_2);
  _objc_release(uStack_40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e68280; end: 104e68347;  */

bool FUN_104e68280(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296f60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 == 0;
    _objc_release();
    _objc_release(param_2);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 104e68348; end: 104e68387; -[SCShortcutsDataMerlinPluginImpl _disposeObserver] */

void FUN_104e68348(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e68388; end: 104e6840b; -[SCShortcutsDataMerlinPluginImpl .cxx_destruct] */

void FUN_104e68388(long param_1)

{
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



/* Entry: 104e6840c; end: 104e6843b;  */

void FUN_104e6840c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db7cd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db7cd8,
                      &PTR____CFConstantStringClassReference_110db7cf8,0);
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



/* Entry: 104e6843c; end: 104e6866b; -[SCShortcutsDataSentSnapsAndChatsPluginImpl initWithFriendsFeedDataCoordinator:timeProvider:performerProvider:] */

undefined8 *
FUN_104e6843c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126e4908;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104e6866c;
    puStack_90 = &UNK_1108544e0;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_5);
    uStack_88 = param_5;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_b0,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e6866c; end: 104e686f3;  */

void FUN_104e6866c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e686f4; end: 104e6870f;  */

void FUN_104e686f4(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e68710; end: 104e68753; -[SCShortcutsDataSentSnapsAndChatsPluginImpl dealloc] */

void FUN_104e68710(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be05220();
  puStack_28 = PTR_PTR_1126e4908;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104e68754; end: 104e68757; -[SCShortcutsDataSentSnapsAndChatsPluginImpl pauseUpdates] */

void FUN_104e68754(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__disposeObserver_11255ee28);
  return;
}



/* Entry: 104e68758; end: 104e68833; -[SCShortcutsDataSentSnapsAndChatsPluginImpl resumeUpdates] */

void FUN_104e68758(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bea1320();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar2;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 104e68834; end: 104e688a3;  */

void FUN_104e68834(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e688a4; end: 104e688b7; -[SCShortcutsDataSentSnapsAndChatsPluginImpl shortcutForSource:] */

void FUN_104e688a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae6b8,PTR_s_deferred__1125b8488,&PTR___NSConcreteGlobalBlock_110854bb0);
  return;
}



/* Entry: 104e688b8; end: 104e689a7;  */

void FUN_104e688b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b1490;
  func_0x00010c260da0(PTR_PTR_1126b1490,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1498;
  _objc_alloc(PTR_PTR_1126b1498);
  puVar3 = puVar2;
  func_0x00010b0af1dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045ee0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e81a98,0,puVar3,
                      puVar1,0,0xb);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae6b8;
  puVar4 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e689a8; end: 104e689d7; -[SCShortcutsDataSentSnapsAndChatsPluginImpl shortcutId] */

void FUN_104e689a8(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e81a98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e81a98);
  return;
}



/* Entry: 104e689d8; end: 104e689e3; -[SCShortcutsDataSentSnapsAndChatsPluginImpl shouldShowForSource:] */

bool FUN_104e689d8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffd) != 0;
}



/* Entry: 104e689e4; end: 104e68a2b; -[SCShortcutsDataSentSnapsAndChatsPluginImpl recipientsForSource:] */

void FUN_104e689e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104e68a2c; end: 104e68a33; -[SCShortcutsDataSentSnapsAndChatsPluginImpl alwaysShow] */

undefined8 FUN_104e68a2c(void)

{
  return 0;
}



/* Entry: 104e68a34; end: 104e68a8f; -[SCShortcutsDataSentSnapsAndChatsPluginImpl _createPerformerWithPerformerProvider:] */

void FUN_104e68a34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e68a90; end: 104e68b87; -[SCShortcutsDataSentSnapsAndChatsPluginImpl _sentShortcutRecipientsObservable] */

void FUN_104e68a90(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bea1320();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104e68b88; end: 104e68bf7;  */

void FUN_104e68b88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e68bf8; end: 104e68d23; -[SCShortcutsDataSentSnapsAndChatsPluginImpl _sentRecipientsObservable] */

void FUN_104e68bf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfba080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104e68d24;
  puStack_50 = &UNK_110854bd0;
  uStack_48 = uVar6;
  _objc_retain(uVar6);
  uVar2 = uVar5;
  func_0x00010c0b8600(uVar5,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104e68d24; end: 104e68dcf;  */

void FUN_104e68d24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104e68e68;
  puStack_40 = &UNK_110854c30;
  uStack_38 = uVar2;
  _objc_retain();
  uVar1 = param_2;
  func_0x000100504554(param_2,&puStack_58);
  _objc_release(param_2);
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e68dd0; end: 104e68dfb; -[SCShortcutsDataSentSnapsAndChatsPluginImpl _disposeObserver] */

void FUN_104e68dd0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e68dfc; end: 104e68e67; -[SCShortcutsDataSentSnapsAndChatsPluginImpl .cxx_destruct] */

void FUN_104e68dfc(long param_1)

{
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



/* Entry: 104e68e68; end: 104e690db;  */

void FUN_104e68e68(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c07d980();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
LAB_104e69088:
    uVar6 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107cfcd04();
    if ((int)lVar3 == 0) {
      lVar3 = param_3;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0cb340();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x000107cfd048();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar5 == 0) goto LAB_104e69088;
    }
    else {
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_3;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0891c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if ((lVar2 == 0) ||
       (func_0x00010c26f380(*(undefined8 *)(param_2 + 0x20)), 1440.0 <= param_1 / 60.0)) {
      uVar6 = 0;
    }
    else {
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x3032000000;
      pcStack_68 = FUN_104e690dc;
      uStack_60 = 0x104e690ec;
      uStack_58 = 0;
      lVar1 = param_3;
      func_0x00010bf96da0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      func_0x00010c0c0020(lVar1);
      _objc_release(lVar1);
      uVar6 = puStack_78[5];
      _objc_retain(uVar6);
      _objc_release(param_3);
      __Block_object_dispose(&uStack_80,8);
      _objc_release(uStack_58);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 104e690dc; end: 104e690f3;  */

void FUN_104e690dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104e690f4; end: 104e691d3;  */

void FUN_104e690f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b14a0;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2448a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e691d4; end: 104e692ef; -[SCShortcutsDataSentSnapsAndChatsPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e691d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar1 = param_1 + _DAT_112714c44;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1510;
  _objc_alloc(PTR_PTR_1126b1510);
  lVar4 = param_1 + _DAT_112714c48;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  param_1 = param_1 + _DAT_112714c4c;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016340(puVar3,param_2,lVar5,puVar6,lVar7);
  func_0x00010c125b60(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e692f0; end: 104e693bf; -[SCShortcutsDataSentSnapsAndChatsPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e692f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714c4c);
  _objc_destroyWeak(param_1 + _DAT_112714c48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112714c44);
  return;
}



/* Entry: 104e693c0; end: 104e69547;  */

ulong FUN_104e693c0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfddf20();
  if (((uVar1 & 1) != 0) || ((int)uVar2 != 0)) {
    uVar1 = param_2;
    func_0x00010658cb34();
    if ((int)uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar1 = param_2;
      func_0x00010c259cc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      uVar2 = (ulong)((uint)uVar2 ^ 1);
    }
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 104e69548; end: 104e6962b;  */

byte FUN_104e69548(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0020();
  _objc_release(uVar2);
  bVar1 = *(byte *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return (bVar1 ^ 0xff) & 1;
}



/* Entry: 104e6962c; end: 104e6966f;  */

void FUN_104e6962c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c07fc80();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e69670; end: 104e69677;  */

void FUN_104e69670(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_feedId_1125c68e8);
  return;
}



/* Entry: 104e69678; end: 104e696c3;  */

undefined8 FUN_104e69678(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104e696c4; end: 104e6977b;  */

void FUN_104e696c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_110854d10,
                      &PTR___NSConcreteGlobalBlock_110854d50);
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c246ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6977c; end: 104e69783;  */

void FUN_104e6977c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_feedId_1125c68e8);
  return;
}



/* Entry: 104e69784; end: 104e697ab;  */

void FUN_104e69784(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 104e697ac; end: 104e6997f;  */

long FUN_104e697ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar2 = lVar7;
  func_0x00010c0fc580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c0fc580();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (lVar3 != 0)) {
    if ((lVar2 == 0) && (lVar3 != 0)) {
      lVar8 = 1;
    }
    else if ((lVar2 == 0) || (lVar3 == 0)) {
      lVar8 = lVar7;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar8;
      func_0x00010c0891c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      lVar8 = lVar6;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar8;
      func_0x00010c0891c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      if ((lVar4 == 0) || (lVar5 == 0)) {
        lVar8 = 1;
        if (lVar4 != 0) {
          lVar8 = -1;
        }
      }
      else {
        lVar8 = lVar5;
        func_0x00010bf433a0(lVar5);
      }
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    else {
      lVar8 = lVar2;
      func_0x00010bf433a0(lVar2);
    }
  }
  else {
    lVar8 = -1;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar7);
  return lVar8;
}



/* Entry: 104e69980; end: 104e699d7;  */

void FUN_104e69980(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b14a0;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2448a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e699d8; end: 104e69cbf; -[SCShortcutsDataStoriesPluginImpl initWithStoriesDataCoordinator:storiesReplayManager:friendsFeedDataCoordinator:performerProvider:storiesConfigProvider:] */

undefined8 *
FUN_104e699d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_80 = PTR_PTR_1126e4910;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
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
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_104e69cc0;
    puStack_a8 = &UNK_1108544e0;
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(param_6);
    uStack_a0 = param_6;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_e8 = puVar4;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x104e69d08;
    puStack_d0 = &UNK_11084cac0;
    _objc_copyWeak(auStack_c8,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_f0,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar4;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_c8);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e69cc0; end: 104e69d87;  */

void FUN_104e69cc0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e69d88; end: 104e69da3;  */

void FUN_104e69d88(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e69da4; end: 104e69de7; -[SCShortcutsDataStoriesPluginImpl dealloc] */

void FUN_104e69da4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be05220();
  puStack_28 = PTR_PTR_1126e4910;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104e69de8; end: 104e69dfb; -[SCShortcutsDataStoriesPluginImpl shortcutForSource:] */

void FUN_104e69de8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae6b8,PTR_s_deferred__1125b8488,&PTR___NSConcreteGlobalBlock_110854e00);
  return;
}



/* Entry: 104e69dfc; end: 104e69f03;  */

void FUN_104e69dfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b1490;
  func_0x00010b0af194();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c260da0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b1498;
  _objc_alloc(PTR_PTR_1126b1498);
  puVar3 = puVar2;
  FUN_104e6a9c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045ee0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e135d8,0,puVar3,
                      puVar1,0,2);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae6b8;
  puVar4 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e69f04; end: 104e69f53; -[SCShortcutsDataStoriesPluginImpl recipientsForSource:] */

void FUN_104e69f04(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  if (param_3 < 3) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = uVar1;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 104e69f54; end: 104e69fa3; -[SCShortcutsDataStoriesPluginImpl shouldShowForSource:] */

uint FUN_104e69f54(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (param_3 == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    uVar3 = (uint)uVar2 ^ 1;
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 104e69fa4; end: 104e69fd3; -[SCShortcutsDataStoriesPluginImpl shortcutId] */

void FUN_104e69fa4(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e135d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e135d8);
  return;
}



/* Entry: 104e69fd4; end: 104e69fd7; -[SCShortcutsDataStoriesPluginImpl pauseUpdates] */

void FUN_104e69fd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__disposeObserver_11255ee28);
  return;
}



/* Entry: 104e69fd8; end: 104e6a0b3; -[SCShortcutsDataStoriesPluginImpl resumeUpdates] */

void FUN_104e69fd8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bec4560();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar2;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 104e6a0b4; end: 104e6a123;  */

void FUN_104e6a0b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e6a124; end: 104e6a12b; -[SCShortcutsDataStoriesPluginImpl alwaysShow] */

undefined8 FUN_104e6a124(void)

{
  return 0;
}



/* Entry: 104e6a12c; end: 104e6a1b7; -[SCShortcutsDataStoriesPluginImpl badgeObservable] */

void FUN_104e6a12c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126ae750;
  puVar3 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126b14f0;
  func_0x00010c122b20(PTR_PTR_1126b14f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2468a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e6a1b8; end: 104e6a1c3; -[SCShortcutsDataStoriesPluginImpl shouldBadgeForSource:] */

bool FUN_104e6a1b8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffd) != 0;
}


