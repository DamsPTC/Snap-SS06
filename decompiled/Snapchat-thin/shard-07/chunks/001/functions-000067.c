/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10513f258; end: 10513f3fb; -[SCSendToPreviewSection _onNextSendToEvent:] */

void FUN_10513f258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10513f400;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0c1600(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10513f3fc; end: 10513f3ff;  */

void FUN_10513f3fc(void)

{
  return;
}



/* Entry: 10513f400; end: 10513f42b;  */

void FUN_10513f400(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2565e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10513f42c; end: 10513f45f;  */

void FUN_10513f42c(void)

{
  return;
}



/* Entry: 10513f460; end: 10513f493;  */

void FUN_10513f460(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010becf7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10513f494; end: 10513f49b; -[SCSendToPreviewSection _onNextToggleValuesUpdate:] */

void FUN_10513f494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setToggleValues__1126634c0);
  return;
}



/* Entry: 10513f49c; end: 10513f5d3; -[SCSendToPreviewSection _setComposerContext:] */

void FUN_10513f49c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a4f08);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_initWeak(auStack_40,param_3);
    _objc_copyWeak(auStack_50,auStack_38);
    _objc_copyWeak(auStack_48,auStack_40);
    _objc_retain(param_3);
    func_0x00010c0e4c00(param_3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10513f5d4; end: 10513f67f;  */

void FUN_10513f5d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10513f680;
    puStack_48 = &UNK_110841f80;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lStack_40 = lVar1;
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x00010c2a15a0(lVar2,param_2,&puStack_60);
    _objc_release(uStack_38);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 10513f680; end: 10513f6f7;  */

void FUN_10513f680(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10513f6f8;
  puStack_28 = &UNK_110841f80;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_20 = uVar1;
  uStack_18 = uVar2;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  _objc_release(uStack_18);
  return;
}



/* Entry: 10513f6f8; end: 10513f72f;  */

void FUN_10513f6f8(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c0e4c00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,
                        *(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bed5ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__updateContentHeight_1125931a0);
    return;
  }
  return;
}



/* Entry: 10513f730; end: 10513f7bb; -[SCSendToPreviewSection _trayExpanded] */

void FUN_10513f730(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (((*(char *)(param_1 + 0x65) == '\x01') && (*(char *)(param_1 + 0x67) == '\x01')) &&
     ((*(byte *)(param_1 + 0x66) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x66) = 1;
    puVar1 = PTR_PTR_1126b48b0;
    func_0x00010c128f60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar1;
    _objc_release(uVar2);
    param_1 = param_1 + 0x70;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf40a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10513f7bc; end: 10513f7c3; -[SCSendToPreviewSection sectionUpdateModel] */

undefined8 FUN_10513f7bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10513f7c4; end: 10513f7cb; -[SCSendToPreviewSection setSectionUpdateModel:] */

void FUN_10513f7c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10513f7cc; end: 10513f7e3; -[SCSendToPreviewSection delegate] */

void FUN_10513f7cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10513f7e4; end: 10513f7ef; -[SCSendToPreviewSection setDelegate:] */

void FUN_10513f7e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 10513f7f0; end: 10513f7f7; -[SCSendToPreviewSection dataLoadingStatus] */

undefined8 FUN_10513f7f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10513f7f8; end: 10513f7ff; -[SCSendToPreviewSection setDataLoadingStatus:] */

void FUN_10513f7f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 10513f800; end: 10513f87f; -[SCSendToPreviewSection .cxx_destruct] */

void FUN_10513f800(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10513f880; end: 10513f987; -[SCSendToPreviewSectionCreator initWithSectionIdentifier:previewConfiguration:sendToTracker:sendToExperimentConfiguration:showSendToTray:] */

undefined1 *
FUN_10513f880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e6640;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10513f988; end: 10513fa03; -[SCSendToPreviewSectionCreator sectionForDescriptor:] */

void FUN_10513f988(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar1,param_2,param_3);
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
    _objc_alloc(PTR_PTR_1126b5210);
    func_0x00010c039920();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10513fa04; end: 10513fa4b; -[SCSendToPreviewSectionCreator .cxx_destruct] */

void FUN_10513fa04(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10513fa4c; end: 10513faff; -[SCSendToSpotlightSectionEntryPoint badgeTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513fa4c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1 + _DAT_11271d1b4;
  _objc_loadWeakRetained();
  uVar3 = uVar1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0dff20(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc71f8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f3c0();
  if ((uVar3 & 1) == 0) {
    func_0x000108f58474();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10513fb00; end: 10513fb7b; -[SCSendToSpotlightSectionEntryPoint markSpotightMemberRolesAsSeen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513fb00(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_11271d1b4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10513fb7c; end: 105140883; -[SCSendToSpotlightSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513fb7c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  undefined *puVar40;
  long lVar41;
  uint uVar42;
  long lVar43;
  undefined *puVar44;
  long lVar45;
  long lVar46;
  long lStack_140;
  ulong uStack_d0;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  puVar4 = (undefined *)(param_1 + _DAT_11271d1b8);
  _objc_loadWeakRetained();
  puVar5 = puVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x0001009703d0(puVar5,0);
  if ((int)puVar4 == 0) goto LAB_1051406c8;
  lVar36 = (long)_DAT_11271d1bc;
  uVar6 = param_1 + lVar36;
  _objc_loadWeakRetained();
  uVar7 = uVar6;
  func_0x00010c259540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if ((uVar7 != 0) && (uVar6 = uVar7, func_0x00010c071620(), (int)uVar6 != 0)) {
    uVar6 = uVar7;
    func_0x00010c0782e0();
    if ((int)uVar6 == 0) {
      uVar1 = 0;
    }
    else {
      puVar4 = puVar5;
      func_0x000108f4870c();
      uVar1 = (uint)puVar4;
    }
    uVar6 = uVar7;
    func_0x00010c07a240();
    if ((uVar6 & 1) == 0) {
      uVar6 = uVar7;
      func_0x00010c078100();
      if ((((((uVar6 & 1) != 0) || (uVar6 = uVar7, func_0x00010c06d080(), (uVar6 & 1) != 0)) ||
           (uVar6 = uVar7, func_0x00010c075080(), (uVar6 & 1) != 0)) ||
          ((uVar6 = uVar7, func_0x00010c07de40(), (uVar6 & 1) != 0 ||
           (uVar6 = uVar7, func_0x00010c06dce0(), (uVar6 & 1) != 0)))) ||
         (uVar6 = uVar7, func_0x00010c07b5a0(), (((uint)uVar6 | uVar1) & 1) != 0)) {
        uVar6 = uVar7;
        func_0x00010c075080();
        if ((int)uVar6 == 0) {
          uVar2 = 0;
        }
        else {
          puVar4 = puVar5;
          func_0x000108f485dc();
          uVar2 = (uint)puVar4;
        }
        uVar6 = uVar7;
        func_0x00010c07de40();
        if ((int)uVar6 == 0) {
          uVar42 = 0;
        }
        else {
          puVar4 = puVar5;
          func_0x000108f48564();
          if (((ulong)puVar4 & 1) == 0) {
            puVar4 = puVar5;
            func_0x000108f485dc();
            uVar42 = (uint)puVar4;
          }
          else {
            uVar42 = 1;
          }
        }
        uVar6 = uVar7;
        func_0x00010c078100();
        uVar3 = 0;
        if ((int)uVar6 != 0) {
          puVar4 = puVar5;
          func_0x000108f48578();
          if (((ulong)puVar4 & 1) != 0) goto LAB_10513fd18;
          puVar4 = puVar5;
          func_0x000108f485dc();
          uVar3 = (uint)puVar4;
        }
        if (((uVar2 | uVar42 | uVar3 | uVar1) & 1) == 0) goto LAB_1051406c0;
      }
LAB_10513fd18:
      uStack_d0 = uVar7;
      func_0x00010c275800();
      _objc_retainAutoreleasedReturnValue();
      if (uStack_d0 == 0) {
        uVar6 = param_1 + _DAT_11271d1c0;
        _objc_loadWeakRetained();
        uVar8 = uVar6;
        func_0x00010c08da20();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        _objc_release(uVar6);
        uStack_d0 = uVar9;
        func_0x00010bf59a80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
      }
      lVar10 = param_1 + _DAT_11271d1c4;
      _objc_loadWeakRetained();
      lVar11 = lVar10;
      func_0x00010bfe7580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      lVar43 = (long)_DAT_11271d1c8;
      lVar10 = param_1 + lVar43;
      _objc_loadWeakRetained();
      lVar12 = lVar10;
      func_0x00010c15aa00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      lVar43 = param_1 + lVar43;
      _objc_loadWeakRetained();
      lVar13 = lVar43;
      func_0x00010c15aac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar43);
      puStack_80 = &uStack_88;
      uStack_88 = 0;
      uStack_78 = 0x2020000000;
      uStack_70 = 0;
      lVar43 = (long)_DAT_11271d1cc;
      lVar10 = param_1 + lVar43;
      _objc_loadWeakRetained(lVar10);
      lVar46 = lVar10;
      func_0x00010c1176a0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar46;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b8000();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar14);
      _objc_release(lVar46);
      _objc_release(lVar10);
      uVar6 = uVar7;
      func_0x00010c075080();
      if (((int)uVar6 != 0) && (puVar4 = puVar5, func_0x000108f485dc(), (int)puVar4 != 0)) {
        func_0x000108f486a0(puVar5);
      }
      if ((*(char *)(puStack_80 + 3) == '\x01') &&
         (puVar4 = puVar5, func_0x000108f485dc(), ((ulong)puVar4 & 1) == 0)) {
        lStack_140 = param_1;
        func_0x00010bf15500();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bbae0(param_1);
      }
      else {
        lStack_140 = 0;
      }
      puVar4 = puVar5;
      func_0x000108f48678();
      if ((int)puVar4 != 0) {
        func_0x000108f485dc(puVar5);
      }
      puVar4 = puVar5;
      func_0x000108f48934();
      _objc_retainAutoreleasedReturnValue();
      lVar46 = (long)_DAT_11271d1d0;
      lVar10 = param_1 + lVar46;
      _objc_loadWeakRetained();
      lVar14 = lVar10;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      puVar44 = puVar4;
      func_0x00010c12e780();
      if (((ulong)puVar44 & 1) == 0) {
        puVar44 = (undefined *)(param_1 + lVar43);
        _objc_loadWeakRetained();
        puVar40 = puVar44;
        func_0x00010c2932e0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar40;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar15;
        func_0x00010c073920();
        _objc_release(puVar15);
        _objc_release(puVar40);
        _objc_release();
        if ((int)puVar16 != 0) {
          func_0x000108f583e4();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105140030;
        }
        puVar44 = puVar4;
        func_0x00010c260dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar40 = puVar44;
        func_0x00010c08fa60();
        _objc_release(puVar44);
        if (puVar40 != (undefined *)0x0) {
          puVar44 = puVar4;
          func_0x00010c260dc0();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105140030;
        }
        puVar44 = (undefined *)(param_1 + lVar36);
        _objc_loadWeakRetained();
        puVar40 = puVar44;
        func_0x00010bf4c100();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar40;
        func_0x00010c0d3a40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar40);
        _objc_release();
        if (puVar15 == (undefined *)0x0) {
          func_0x000108f5836c();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105140030;
        }
        lVar10 = param_1 + lVar36;
        _objc_loadWeakRetained();
        lVar45 = lVar10;
        func_0x00010bf4c100();
        _objc_retainAutoreleasedReturnValue();
        lVar41 = lVar45;
        func_0x00010c0d3a40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar45);
        _objc_release(lVar10);
        puVar40 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010c23bba0();
        _objc_retainAutoreleasedReturnValue();
        puVar44 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        lVar10 = lVar41;
        func_0x00010c278a00();
        _objc_retainAutoreleasedReturnValue();
        lVar45 = lVar41;
        func_0x00010bf0a460();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar45);
        _objc_release(lVar10);
        _objc_release(lVar41);
      }
      else {
        puVar44 = (undefined *)0x0;
LAB_105140030:
        puVar40 = (undefined *)0x0;
      }
      puVar15 = PTR_PTR_1126b5218;
      _objc_alloc();
      func_0x00010c0513c0();
      puVar16 = PTR_PTR_1126b5220;
      _objc_alloc();
      func_0x00010c01f440();
      lVar41 = (long)_DAT_11271d1d4;
      lVar10 = param_1 + lVar41;
      _objc_loadWeakRetained();
      lVar17 = lVar10;
      func_0x00010c08d820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      uVar6 = uVar7;
      func_0x00010c23f6e0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = param_1;
      func_0x00010be76a60();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar12;
      func_0x00010c269d40(lVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fba60();
      _objc_release(lVar10);
      lVar45 = (long)_DAT_11271d1c0;
      lVar10 = param_1 + lVar45;
      _objc_loadWeakRetained();
      lVar20 = lVar10;
      func_0x00010c08d9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      lVar45 = param_1 + lVar45;
      _objc_loadWeakRetained();
      lVar21 = lVar45;
      func_0x00010c08da00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar45);
      lVar43 = param_1 + lVar43;
      _objc_loadWeakRetained();
      lVar22 = lVar43;
      func_0x00010c2932e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar43);
      lVar10 = param_1 + lVar41;
      _objc_loadWeakRetained();
      lVar23 = lVar10;
      func_0x00010c08d800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      lVar10 = param_1 + lVar41;
      _objc_loadWeakRetained();
      lVar24 = lVar10;
      func_0x00010c08d960();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      lVar41 = param_1 + lVar41;
      _objc_loadWeakRetained();
      lVar25 = lVar41;
      func_0x00010c08d980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar41);
      lVar46 = param_1 + lVar46;
      _objc_loadWeakRetained();
      lVar26 = lVar46;
      func_0x00010c27ecc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar46);
      lVar37 = (long)_DAT_11271d1d8;
      lVar10 = param_1 + lVar37;
      _objc_loadWeakRetained();
      lVar27 = lVar10;
      func_0x00010c1018e0();
      _objc_retainAutoreleasedReturnValue();
      puVar28 = PTR_PTR_1126b5228;
      _objc_alloc(PTR_PTR_1126b5228);
      lVar43 = param_1 + lVar36;
      _objc_loadWeakRetained();
      lVar29 = lVar43;
      func_0x00010bf0e960();
      _objc_retainAutoreleasedReturnValue();
      lVar30 = lVar29;
      func_0x00010c1298e0();
      _objc_retainAutoreleasedReturnValue();
      lVar46 = param_1 + lVar36;
      _objc_loadWeakRetained();
      lVar31 = lVar46;
      func_0x00010bf4c100();
      _objc_retainAutoreleasedReturnValue();
      lVar45 = param_1 + lVar37;
      _objc_loadWeakRetained();
      lVar32 = lVar45;
      func_0x00010c130900();
      _objc_retainAutoreleasedReturnValue();
      lVar38 = (long)_DAT_11271d1dc;
      lVar41 = param_1 + lVar38;
      _objc_loadWeakRetained();
      lVar33 = lVar41;
      func_0x00010c260800();
      _objc_retainAutoreleasedReturnValue();
      lVar39 = (long)_DAT_11271d1e0;
      lVar34 = param_1 + lVar39;
      _objc_loadWeakRetained();
      lVar35 = lVar34;
      func_0x00010bf620c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffe880(puVar28);
      func_0x00010c125b60(lVar27);
      _objc_release(puVar28);
      _objc_release(lVar35);
      _objc_release(lVar34);
      _objc_release(lVar33);
      _objc_release(lVar41);
      _objc_release(lVar32);
      _objc_release(lVar45);
      _objc_release(lVar31);
      _objc_release(lVar46);
      _objc_release(lVar30);
      _objc_release(lVar29);
      _objc_release(lVar43);
      _objc_release(lVar27);
      _objc_release(lVar10);
      lVar10 = param_1 + lVar37;
      _objc_loadWeakRetained();
      lVar46 = lVar10;
      func_0x00010c1018e0();
      _objc_retainAutoreleasedReturnValue();
      puVar28 = PTR_PTR_1126b5228;
      _objc_alloc(PTR_PTR_1126b5228);
      lVar43 = param_1 + lVar36;
      _objc_loadWeakRetained();
      lVar45 = lVar43;
      func_0x00010bf0e960();
      _objc_retainAutoreleasedReturnValue();
      lVar41 = lVar45;
      func_0x00010c1298e0();
      _objc_retainAutoreleasedReturnValue();
      lVar36 = param_1 + lVar36;
      _objc_loadWeakRetained();
      lVar34 = lVar36;
      func_0x00010bf4c100();
      _objc_retainAutoreleasedReturnValue();
      lVar37 = param_1 + lVar37;
      _objc_loadWeakRetained();
      lVar27 = lVar37;
      func_0x00010c130900();
      _objc_retainAutoreleasedReturnValue();
      lVar38 = param_1 + lVar38;
      _objc_loadWeakRetained();
      lVar29 = lVar38;
      func_0x00010c260800();
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + lVar39;
      _objc_loadWeakRetained();
      lVar30 = param_1;
      func_0x00010bf620c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffe880(puVar28);
      func_0x00010c125b60(lVar46);
      _objc_release(puVar28);
      _objc_release(lVar30);
      _objc_release(param_1);
      _objc_release(lVar29);
      _objc_release(lVar38);
      _objc_release(lVar27);
      _objc_release(lVar37);
      _objc_release(lVar34);
      _objc_release(lVar36);
      _objc_release(lVar41);
      _objc_release(lVar45);
      _objc_release(lVar43);
      _objc_release(lVar46);
      _objc_release(lVar10);
      _objc_release(lVar26);
      _objc_release(lVar25);
      _objc_release(lVar24);
      _objc_release(lVar23);
      _objc_release(lVar22);
      _objc_release(lVar21);
      _objc_release(lVar20);
      _objc_release(puVar19);
      _objc_release(lVar18);
      _objc_release(uVar6);
      _objc_release(lVar17);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar44);
      _objc_release(puVar40);
      _objc_release(lVar14);
      _objc_release(puVar4);
      _objc_release(lStack_140);
      __Block_object_dispose(&uStack_88,8);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(uStack_d0);
    }
  }
LAB_1051406c0:
  _objc_release(uVar7);
LAB_1051406c8:
  _objc_release(puVar5);
  return;
}



/* Entry: 105140884; end: 105140927;  */

void FUN_105140884(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bfaea20(param_2,param_2,&PTR___NSConcreteGlobalBlock_11086b620);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105140928; end: 1051409e7; -[SCSendToSpotlightSectionEntryPoint _postingHintObservableWithPlaceTagsTracker:snapCaptureLocation:] */

void FUN_105140928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  pcVar1 = "com.snapchat.send-to-spotlight-posting-hints";
  _dispatch_queue_create("com.snapchat.send-to-spotlight-posting-hints",0);
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7a40();
  _objc_release(param_4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bfed660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1051409e8; end: 105140a97; -[SCSendToSpotlightSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051409e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271d1e0);
  _objc_destroyWeak(param_1 + _DAT_11271d1dc);
  _objc_destroyWeak(param_1 + _DAT_11271d1b4);
  _objc_destroyWeak(param_1 + _DAT_11271d1d0);
  _objc_destroyWeak(param_1 + _DAT_11271d1d4);
  _objc_destroyWeak(param_1 + _DAT_11271d1cc);
  _objc_destroyWeak(param_1 + _DAT_11271d1c0);
  _objc_destroyWeak(param_1 + _DAT_11271d1b8);
  _objc_destroyWeak(param_1 + _DAT_11271d1c8);
  _objc_destroyWeak(param_1 + _DAT_11271d1c4);
  _objc_destroyWeak(param_1 + _DAT_11271d1d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271d1bc);
  return;
}



/* Entry: 105140a98; end: 105140b0b; -[SCSendToSpotlightSectionEventHandler initWithSendToTracker:] */

undefined1 * FUN_105140a98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6648;
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



/* Entry: 105140b0c; end: 105140b4f; -[SCSendToSpotlightSectionEventHandler topicSendToWillPresentSearchWithContainerCell:] */

void FUN_105140b0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b50d0;
  func_0x00010c10e9e0(PTR_PTR_1126b50d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105140b50; end: 105140b53; -[SCSendToSpotlightSectionEventHandler topicsUpdated] */

void FUN_105140b50(void)

{
  return;
}



/* Entry: 105140b54; end: 105140b97; -[SCSendToSpotlightSectionEventHandler topicSendToWillDismissSearch] */

void FUN_105140b54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b50d0;
  func_0x00010bf84840(PTR_PTR_1126b50d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105140b98; end: 105140b9f; -[SCSendToSpotlightSectionEventHandler isTopicSearchPresented] */

undefined1 FUN_105140b98(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 105140ba0; end: 105140ba7; -[SCSendToSpotlightSectionEventHandler setIsTopicSearchPresented:] */

void FUN_105140ba0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 105140ba8; end: 105140bb3; -[SCSendToSpotlightSectionEventHandler .cxx_destruct] */

void FUN_105140ba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105140bb4; end: 105141017; -[SCSendToSpotlightSectionExtension initWithCircumstanceEngine:imageDownloader:spotlightStoryObservableRepository:selectionStoryObservableRepository:topicTracker:topicRequester:topicCarouselViewProvider:snapProUserProfileIdProvider:forDisplayingSelection:placeSearchViewProvider:spotlightPlaceTagsLogger:placeTagCarouselViewProvider:placeTagsTracker:snapCaptureLocation:sendToExperimentConfiguration:sendToUIConfiguration:remixConfiguration:contentConfiguration:storyConfiguration:renderingTracker:subscriptionInfoProvider:customStoriesOnboardingManager:] */

undefined8 *
FUN_105140bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  puStack_70 = PTR_PTR_1126e6650;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[8];
    puVar1[8] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 9) = param_11;
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_25;
    _objc_release(uVar2);
  }
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
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



/* Entry: 105141018; end: 1051410a7; -[SCSendToSpotlightSectionExtension sectionIdentifiers] */

void FUN_105141018(long param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    ppuStack_28 = &PTR____CFConstantStringClassReference_110f12cf8;
    pppuVar1 = &ppuStack_28;
  }
  else {
    ppuStack_20 = &PTR____CFConstantStringClassReference_110f12b78;
    pppuVar1 = &ppuStack_20;
  }
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,pppuVar1,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126b5230);
    func_0x00010bffe8a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051410a8; end: 105141113; -[SCSendToSpotlightSectionExtension sectionCreator] */

void FUN_1051410a8(void)

{
  _objc_alloc(PTR_PTR_1126b5230);
  func_0x00010bffe8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105141114; end: 10514111b; -[SCSendToSpotlightSectionExtension sectionDescriptor] */

undefined8 FUN_105141114(void)

{
  return 0;
}



/* Entry: 10514111c; end: 105141123; -[SCSendToSpotlightSectionExtension sectionLoggingParser] */

undefined8 FUN_10514111c(void)

{
  return 0;
}



/* Entry: 105141124; end: 105141237; -[SCSendToSpotlightSectionExtension .cxx_destruct] */

void FUN_105141124(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 105141238; end: 105141757; -[SCSendToSpotlightSectionCreatorImpl initWithActionHandler:circumstanceEngine:imageDownloader:sectionDataSource:sendToTracker:topicTracker:topicRequester:topicCarouselViewProvider:snapProUserProfileIdProvider:uiContainer:viewModelSource:placeSearchViewProvider:spotlightPlaceTagsLogger:placeTagCarouselViewProvider:placeTagsTracker:snapCaptureLocation:sendToExperimentConfiguration:spotlightStoryObservableRepository:selectionStoryObservableRepository:remixConfiguration:contentConfiguration:storyConfiguration:renderingTracker:customStoriesOnboardingManager:] */

undefined8 *
FUN_105141238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain();
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  puStack_70 = PTR_PTR_1126e6658;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[9];
    puVar1[9] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[10];
    puVar1[10] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_26;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b5238;
    _objc_alloc();
    func_0x00010c0445a0();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
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



/* Entry: 105141758; end: 1051418db; -[SCSendToSpotlightSectionCreatorImpl sectionForDescriptor:] */

void FUN_105141758(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      param_1 = 0;
      goto LAB_1051418bc;
    }
  }
  else {
    _objc_release(uVar1);
  }
  uVar2 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebefc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
LAB_1051418bc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1051418dc; end: 105141adf; -[SCSendToSpotlightSectionCreatorImpl _spotlightSectionForIdentifier:withSectionDataModel:] */

void FUN_1051418dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  func_0x00010c155ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c15ab00(uVar1,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5248;
  _objc_alloc(PTR_PTR_1126b5248);
  func_0x00010bffe640();
  if (param_4 == 0) {
    puVar4 = PTR_PTR_1126b5258;
    _objc_opt_new(PTR_PTR_1126b5258);
  }
  else {
    puVar4 = PTR_PTR_1126b5250;
    _objc_alloc(PTR_PTR_1126b5250);
    uVar9 = *(undefined8 *)(param_1 + 200);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15ab20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01a1c0(puVar4,param_2,param_4,uVar9,uVar3,0);
    _objc_release(uVar3);
    func_0x00010c161980(puVar4,param_2,*(undefined8 *)(param_1 + 8));
  }
  puVar5 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010c1f9240();
  func_0x00010c161980(puVar5,param_2,*(undefined8 *)(param_1 + 8));
  puVar6 = PTR_PTR_1126b5260;
  _objc_alloc(PTR_PTR_1126b5260);
  lVar7 = param_4;
  func_0x00010c06ef40(param_4);
  lVar8 = param_4;
  func_0x00010bfcf7e0(param_4);
  func_0x00010c01edc0(puVar6,param_2,lVar7,lVar8);
  func_0x00010c222a60(puVar5,param_2,puVar6);
  _objc_release(puVar6);
  func_0x00010bf79c60(*(undefined8 *)(param_1 + 0xc0),param_2,param_3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105141ae0; end: 105141c23; -[SCSendToSpotlightSectionCreatorImpl .cxx_destruct] */

void FUN_105141ae0(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105141c24; end: 105142083; -[SCSendToSpotlightSectionCreator initWithCircumstanceEngine:imageDownloader:spotlightStoryObservableRepository:selectionStoryObservableRepository:topicTracker:topicRequester:topicCarouselViewProvider:snapProUserProfileIdProvider:placeSearchViewProvider:spotlightPlaceTagsLogger:placeTagCarouselViewProvider:placeTagsTracker:snapCaptureLocation:sendToExperimentConfiguration:sendToUIConfiguration:remixConfiguration:contentConfiguration:storyConfiguration:renderingTracker:subscriptionInfoProvider:customStoriesOnboardingManager:] */

undefined8 *
FUN_105141c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  puStack_70 = PTR_PTR_1126e6660;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[8];
    puVar1[8] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
  }
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
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



/* Entry: 105142084; end: 105142247; -[SCSendToSpotlightSectionCreator sectionCreatorWithActionHandler:sendToTracker:uiContainer:] */

void FUN_105142084(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ee480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f6a0(uVar5,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar5);
  func_0x00010c2179e0(param_4,param_2,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000108f48528(uVar1);
  puVar2 = PTR_PTR_1126b5268;
  _objc_alloc(PTR_PTR_1126b5268);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = param_4;
  func_0x00010c15ab20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b6a0(puVar2,param_2,uVar6,uVar1,uVar5);
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126b5270;
  _objc_alloc();
  func_0x00010bffeb80();
  puVar4 = PTR_PTR_1126b5278;
  _objc_alloc(PTR_PTR_1126b5278);
  func_0x00010bff01e0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105142248; end: 10514235b; -[SCSendToSpotlightSectionCreator .cxx_destruct] */

void FUN_105142248(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10514235c; end: 1051429cf; -[SCSendToSpotlightSectionDataProvider initWithCircumstanceEngine:eventHandler:imageDownloader:sectionDataSource:sendToTracker:topicTracker:topicRequester:topicCarouselViewProvider:snapProUserProfileIdProvider:uiContainer:viewModelGenerator:placeSearchViewProvider:spotlightPlaceTagsLogger:placeTagCarouselViewProvider:placeTagsTracker:spotlightStoryObservableRepository:snapCaptureLocation:contentConfiguration:storyConfiguration:sendToExperimentConfiguration:renderingTracker:] */

undefined8 *
FUN_10514235c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  puStack_70 = PTR_PTR_1126e6668;
  puVar2 = &uStack_78;
  uStack_78 = param_2;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar3 = puVar2[0x1f];
    puVar2[0x1f] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[1];
    puVar2[1] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[2];
    puVar2[2] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[3];
    puVar2[3] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[4];
    puVar2[4] = param_8;
    _objc_release(uVar3);
    uVar3 = puVar2[4];
    func_0x00010c15ab20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar2[5];
    puVar2[5] = uVar3;
    _objc_release(uVar7);
    _objc_retain(param_9);
    uVar3 = puVar2[6];
    puVar2[6] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[7];
    puVar2[7] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[0x1d];
    puVar2[0x1d] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[8];
    puVar2[8] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[10];
    puVar2[10] = param_13;
    _objc_release(uVar3);
    uVar3 = param_14;
    _objc_retainBlock();
    uVar7 = puVar2[0xb];
    puVar2[0xb] = uVar3;
    _objc_release(uVar7);
    _objc_retain(param_15);
    uVar3 = puVar2[0x21];
    puVar2[0x21] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[0x22];
    puVar2[0x22] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_19);
    uVar3 = puVar2[9];
    puVar2[9] = param_19;
    _objc_release(uVar3);
    _objc_retain(param_20);
    uVar3 = puVar2[0x23];
    puVar2[0x23] = param_20;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar2[0x27];
    puVar2[0x27] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar2[0x28];
    puVar2[0x28] = param_18;
    _objc_release(uVar3);
    uVar3 = puVar2[0x1f];
    func_0x000108f48934();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar2[0x2b];
    puVar2[0x2b] = uVar3;
    _objc_release(uVar7);
    func_0x000108f4a2bc(puVar2[0x1f]);
    puVar2[0x20] = (long)param_1;
    _objc_retain(param_21);
    uVar3 = puVar2[0x18];
    puVar2[0x18] = param_21;
    _objc_release(uVar3);
    _objc_retain(param_22);
    uVar3 = puVar2[0x19];
    puVar2[0x19] = param_22;
    _objc_release(uVar3);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = &PTR____CFConstantStringClassReference_110dc7238;
    _objc_release(uVar3);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = &PTR____CFConstantStringClassReference_110dc7258;
    _objc_release(uVar3);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = &PTR____CFConstantStringClassReference_110dc7278;
    _objc_release(uVar3);
    uVar3 = puVar2[0xf];
    puVar2[0xf] = &PTR____CFConstantStringClassReference_110dc7298;
    _objc_release(uVar3);
    uVar3 = puVar2[0x10];
    puVar2[0x10] = &PTR____CFConstantStringClassReference_110dc72b8;
    _objc_release(uVar3);
    uVar3 = puVar2[0x11];
    puVar2[0x11] = &PTR____CFConstantStringClassReference_110dc72d8;
    _objc_release(uVar3);
    uVar3 = puVar2[0x12];
    puVar2[0x12] = &PTR____CFConstantStringClassReference_110dc72f8;
    _objc_release(uVar3);
    uVar3 = puVar2[0x13];
    puVar2[0x13] = &PTR____CFConstantStringClassReference_110dc7318;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    uVar3 = puVar2[0x17];
    puVar2[0x17] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[0x16];
    puVar2[0x16] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b5280;
    _objc_alloc_init();
    uVar3 = puVar2[0x24];
    puVar2[0x24] = puVar4;
    _objc_release(uVar3);
    _objc_initWeak(auStack_80,puVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x1e];
    puVar2[0x1e] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_23);
    uVar3 = puVar2[0x26];
    puVar2[0x26] = param_23;
    _objc_release(uVar3);
    _objc_retain(param_24);
    uVar3 = puVar2[0x2c];
    puVar2[0x2c] = param_24;
    _objc_release(uVar3);
    uVar1 = (undefined1)puVar2[0x1f];
    func_0x000108f48528();
    *(undefined1 *)((long)puVar2 + 0x129) = uVar1;
    uVar5 = puVar2[0x1f];
    func_0x000108f485dc();
    if ((uVar5 & 1) == 0) {
      bVar6 = *(byte *)((long)puVar2 + 0x129);
    }
    else {
      bVar6 = 1;
    }
    *(byte *)((long)puVar2 + 0x12a) = bVar6 & 1;
    uVar1 = (undefined1)puVar2[0x1f];
    func_0x000108f4868c();
    *(undefined1 *)((long)puVar2 + 300) = uVar1;
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 1051429d0; end: 105142a0f;  */

void FUN_1051429d0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf4ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105142a10; end: 105142a1b; +[SCSendToSpotlightSectionDataProvider announcerIdentifier] */

undefined ** FUN_105142a10(void)

{
  return &PTR____CFConstantStringClassReference_110dc73b8;
}



/* Entry: 105142a1c; end: 105142a23; -[SCSendToSpotlightSectionDataProvider addListener:] */

void FUN_105142a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa0),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105142a24; end: 105142a2b; -[SCSendToSpotlightSectionDataProvider removeListener:] */

void FUN_105142a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa0),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105142a2c; end: 105142a9f; -[SCSendToSpotlightSectionDataProvider setUpdateQueuePerformer:] */

void FUN_105142a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b4a0(*(undefined8 *)(param_1 + 0xb8),param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105142aa0; end: 105142c6b; -[SCSendToSpotlightSectionDataProvider setUp] */

void FUN_105142aa0(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined1 *)(param_1 + 0x129);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6d420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105142c6c;
  puStack_70 = &UNK_11086b670;
  uStack_60 = uVar1;
  _objc_copyWeak(auStack_68,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf9a080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105142c6c; end: 105142cef;  */

void FUN_105142c6c(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *(char *)(param_1 + 0x28);
  _objc_retain(param_2);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  if (cVar1 == '\x01') {
    func_0x00010bea4fc0();
    _objc_release(param_2);
  }
  else {
    func_0x00010bea4fa0();
    _objc_release(param_2);
    _objc_release(lVar2);
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bee0800();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105142cf0; end: 105142d37;  */

void FUN_105142cf0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a5c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105142d38; end: 105142d3f; -[SCSendToSpotlightSectionDataProvider tearDown] */

void FUN_105142d38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xb0),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 105142d40; end: 105142d47; -[SCSendToSpotlightSectionDataProvider dataLoadingStatus] */

undefined8 FUN_105142d40(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 105142d48; end: 105142d4b; -[SCSendToSpotlightSectionDataProvider numberOfItemsInSection:] */

void FUN_105142d48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be65550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__numberOfItemsInSection_112576ef0);
  return;
}



/* Entry: 105142d4c; end: 105142d4f; -[SCSendToSpotlightSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_105142d4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde75b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__containerCellViewModelsFromNumb_112557708);
  return;
}



/* Entry: 105142d50; end: 105142eaf; -[SCSendToSpotlightSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_105142d50(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b5288;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126b5290;
  puStack_78 = puVar2;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126b5288;
  puStack_70 = puVar3;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126b5290;
  puStack_68 = puVar2;
  _objc_opt_class();
  lVar4 = *(long *)(param_1 + 0xe8);
  puStack_60 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2755e0();
  puVar2 = PTR_PTR_1126b5298;
  lStack_58 = lVar5;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126b52a0;
  puStack_50 = puVar2;
  _objc_opt_class();
  uVar6 = *(undefined8 *)(param_1 + 0x138);
  puStack_48 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c0fd580();
  ppuVar10 = &puStack_78;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = uVar9;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  puVar2 = PTR_PTR_1126b5240;
  _objc_retain(ppuVar10);
  _objc_opt_class(puVar2);
  ppuVar7 = ppuVar10;
  _objc_opt_isKindOfClass(ppuVar10,puVar2);
  ppuVar1 = ppuVar10;
  if (((ulong)ppuVar7 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar10);
  if (ppuVar1 != (undefined **)0x0) {
    *(undefined8 *)(lVar4 + 0xa8) = 1;
    _objc_initWeak(auStack_128,lVar4);
    uVar11 = *(undefined8 *)(lVar4 + 0x18);
    ppuVar7 = ppuVar10;
    func_0x00010c155f60(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar10;
    func_0x00010c11d080(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15aaa0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar11;
    func_0x00010c0e0e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_130,auStack_128);
    uVar6 = uVar9;
    func_0x00010c25ff60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar11);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_retain(ppuVar10);
    uVar9 = *(undefined8 *)(lVar4 + 0x178);
    *(undefined ***)(lVar4 + 0x178) = ppuVar1;
    _objc_release(uVar9);
    ppuVar7 = ppuVar10;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar4 + 0x168);
    *(undefined ***)(lVar4 + 0x168) = ppuVar7;
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_128);
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar10);
  return;
}



/* Entry: 105142eb0; end: 1051430b3; -[SCSendToSpotlightSectionDataProvider setSectionDataModel:] */

void FUN_105142eb0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5240;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    *(undefined8 *)(param_1 + 0xa8) = 1;
    _objc_initWeak(auStack_68,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = param_3;
    func_0x00010c155f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c11d080(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15aaa0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c0e0e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar5 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)(param_1 + 0x178);
    *(ulong *)(param_1 + 0x178) = uVar1;
    _objc_release(uVar6);
    uVar3 = param_3;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x168);
    *(ulong *)(param_1 + 0x168) = uVar3;
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1051430b4; end: 1051430fb;  */

void FUN_1051430b4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1fbaa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051430fc; end: 10514339f; -[SCSendToSpotlightSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_1051430fc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  
  ppuVar3 = &puStack_160;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_e8,param_1);
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_1051433a0;
  puStack_f8 = &UNK_110845ae0;
  _objc_copyWeak(auStack_f0,auStack_e8);
  ppuVar1 = &puStack_110;
  _objc_retainBlock();
  puStack_138 = puVar10;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x1051433e8;
  puStack_120 = &UNK_110845ae0;
  _objc_copyWeak(auStack_118,auStack_e8);
  ppuVar2 = &puStack_138;
  _objc_retainBlock();
  puStack_160 = puVar10;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x105143430;
  puStack_148 = &UNK_110845ae0;
  puVar11 = auStack_e8;
  _objc_copyWeak(auStack_140,puVar11);
  _objc_retainBlock();
  uStack_e0 = *(undefined8 *)(param_1 + 0x60);
  ppuVar4 = ppuVar1;
  _objc_retainBlock();
  uStack_d8 = *(undefined8 *)(param_1 + 0x70);
  ppuVar5 = ppuVar1;
  ppuStack_b0 = ppuVar4;
  _objc_retainBlock();
  uStack_d0 = *(undefined8 *)(param_1 + 0x68);
  ppuVar6 = ppuVar1;
  ppuStack_a8 = ppuVar5;
  _objc_retainBlock();
  uStack_c8 = *(undefined8 *)(param_1 + 0x78);
  ppuVar7 = ppuVar1;
  ppuStack_a0 = ppuVar6;
  _objc_retainBlock();
  uStack_c0 = *(undefined8 *)(param_1 + 0x80);
  ppuVar8 = ppuVar2;
  ppuStack_98 = ppuVar7;
  _objc_retainBlock();
  uStack_b8 = *(undefined8 *)(param_1 + 0x98);
  puVar9 = (undefined1 *)ppuVar3;
  ppuStack_90 = ppuVar8;
  _objc_retainBlock();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_140);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_118);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_f0);
  puVar9 = auStack_e8;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_e8);
  __Unwind_Resume(puVar9);
  _objc_retain(puVar11);
  puVar9 = puVar9 + 0x20;
  _objc_loadWeakRetained(puVar9);
  func_0x00010bde52e0();
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 1051433a0; end: 105143477;  */

void FUN_1051433a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde52e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105143478; end: 1051438f3; -[SCSendToSpotlightSectionDataProvider _resetSpotlightCell:] */

void FUN_105143478(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x130);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf7fd00();
  _objc_release(uVar2);
  if (((uVar3 & 1) != 0) || (*(long *)(param_1 + 200) == 0)) goto LAB_1051436e8;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  func_0x00010c0bee40(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c073920();
  _objc_release(uVar4);
  puVar5 = *(undefined **)(param_1 + 0x158);
  func_0x00010c12e780();
  if (((ulong)puVar5 & 1) == 0) {
    if ((int)uVar9 != 0) {
      func_0x000108f583e4();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1051435d0;
    }
    lVar6 = *(long *)(param_1 + 0x158);
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar6;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    if (lVar10 != 0) {
      puVar5 = *(undefined **)(param_1 + 0x158);
      func_0x00010c260dc0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1051435d0;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0xf8);
    func_0x000108f48664();
    if (((iVar1 == 0) || (lVar10 = param_1, func_0x00010beb5ac0(), (int)lVar10 == 0)) ||
       (*(char *)(param_1 + 0x12d) != '\x01')) {
      lVar10 = *(long *)(param_1 + 0xc0);
      func_0x00010c0d3a40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar10 == 0) {
        puVar5 = PTR_PTR_1126b52a8;
        _objc_alloc_init(PTR_PTR_1126b52a8);
        func_0x00010c07de40(*(undefined8 *)(param_1 + 200));
        func_0x000108f48818(*(undefined8 *)(param_1 + 0xf8));
        puVar12 = puVar5;
        func_0x00010bfc02e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar5 = puVar12;
        func_0x00010c26b700(puVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010bfe5400(puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c072240(puVar12);
        _objc_release(puVar12);
      }
      else {
        uVar11 = *(undefined8 *)(param_1 + 0xc0);
        func_0x00010c0d3a40();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010c23bba0(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar9 = uVar11;
        func_0x00010c278a00();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar11;
        func_0x00010bf0a460();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar9);
        _objc_release(uVar11);
      }
    }
    else {
      puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c23bba0(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar13;
      func_0x000108f583fc();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar5 = (undefined *)0x0;
LAB_1051435d0:
    puVar13 = (undefined *)0x0;
  }
  puVar12 = PTR_PTR_1126b5218;
  _objc_alloc(PTR_PTR_1126b5218);
  func_0x00010c0513c0();
  puVar7 = PTR_PTR_1126b5220;
  _objc_alloc(PTR_PTR_1126b5220);
  func_0x00010c01f440();
  puVar8 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010be76a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fba60();
  _objc_release(uVar9);
  _objc_release(lVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar12);
  _objc_release(puVar5);
  _objc_release(puVar13);
  __Block_object_dispose(&uStack_70,8);
LAB_1051436e8:
  _objc_release(param_3);
  return;
}



/* Entry: 1051438f4; end: 105143907;  */

void FUN_1051438f4(long param_1)

{
  undefined1 in_stack_00000008;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_stack_00000008;
  return;
}



/* Entry: 105143908; end: 10514394f; -[SCSendToSpotlightSectionDataProvider _postingHintObservableWithPlaceTagsTracker:] */

void FUN_105143908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfed660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105143950; end: 105143963; -[SCSendToSpotlightSectionDataProvider _shouldShowAddSoundError] */

void FUN_105143950(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c233210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b52b0,PTR_s_shouldShowAddSoundErrorWithStory_11266a6a8,
             *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xc0));
  return;
}



/* Entry: 105143964; end: 1051439e7; -[SCSendToSpotlightSectionDataProvider setSelectionStories:] */

void FUN_105143964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = param_3;
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0x129) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + 0x120);
    uVar1 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010c0af920(uVar3,param_2,uVar1);
    lVar2 = param_1;
    func_0x00010be9e420(param_1,param_2,param_3);
    *(char *)(param_1 + 299) = (char)lVar2;
  }
  func_0x00010bed5fa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051439e8; end: 105143c1f; -[SCSendToSpotlightSectionDataProvider _updateContainerViewModels] */

void FUN_1051439e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  *(undefined8 *)(param_1 + 0xa8) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010bf529e0();
  uVar2 = *(undefined8 *)(param_1 + 0x150);
  func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_11086b6c0);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c15aa20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf45980();
  *(long *)(param_1 + 0x148) = lVar4;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  uStack_98 = 0x105143c28;
  uStack_90 = 0x105143c38;
  uStack_88 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  uStack_c8 = 0x105143c28;
  uStack_c0 = 0x105143c38;
  uStack_b8 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x150);
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_105143c40;
  puStack_118 = &UNK_11086b740;
  puStack_d8 = &uStack_e0;
  puStack_a8 = &uStack_b0;
  puStack_78 = &uStack_80;
  _objc_retain(uVar3);
  uStack_110 = uVar3;
  lStack_108 = param_1;
  puStack_100 = &uStack_b0;
  puStack_f8 = &uStack_80;
  puStack_f0 = &uStack_e0;
  uStack_e8 = uVar1;
  func_0x00010bd86420(uVar5,&puStack_130);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0xa8) = 2;
  lVar4 = param_1 + 0x170;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c155aa0();
  _objc_release(lVar4);
  uVar1 = uVar2;
  func_0x0001084256c4();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  _objc_release(uVar5);
  if (*(char *)(puStack_78 + 3) == '\x01') {
    func_0x00010be93c40(param_1);
  }
  func_0x00010bf790c0(*(undefined8 *)(param_1 + 0x160));
  _objc_release(uStack_110);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 105143c20; end: 105143c3f;  */

void FUN_105143c20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  puStack_48 = &UNK_108f42630;
  puStack_40 = &UNK_108f42640;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  puStack_78 = &UNK_108f42630;
  puStack_70 = &UNK_108f42640;
  uStack_68 = 0;
  func_0x00010c0bee40(param_2);
  puVar1 = PTR_PTR_1126b3558;
  _objc_alloc(PTR_PTR_1126b3558);
  func_0x00010c03d4e0();
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105143c40; end: 105143ea7;  */

void FUN_105143c40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000108f4242c(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(uVar2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  uStack_78 = 0x105143c28;
  uStack_70 = 0x105143c38;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60);
  _objc_retain(uVar2);
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  uStack_68 = uVar2;
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0bee40(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bde74c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105143ea8; end: 105143f6b;  */

void FUN_105143ea8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x140);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c2391e0();
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar1;
  _objc_release(uVar3);
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
    func_0x00010be2d840(*(undefined8 *)(param_1 + 0x20));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bddc360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105143f6c; end: 10514402f;  */

void FUN_105143f6c(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  _objc_retain(in_stack_00000010);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  _objc_release(uVar2);
  bVar1 = *(byte *)(param_1 + 0x50);
  *(byte *)(*(long *)(param_1 + 0x28) + 0x12d) = bVar1;
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x128) = in_stack_00000008._1_1_;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bddc360(uVar2,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  *(byte *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = *(byte *)(param_1 + 0x50) ^ 1;
  lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = in_stack_00000010;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105144030; end: 10514414f;  */

void FUN_105144030(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  return;
}



/* Entry: 105144150; end: 1051443f7; -[SCSendToSpotlightSectionDataProvider computeSideBySideState:] */

long FUN_105144150(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x150);
  func_0x00010bf529e0();
  if (*(char *)(param_1 + 0x129) == '\x01' && 1 < uVar2) {
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x2020000000;
    uStack_108 = *(undefined8 *)(param_1 + 0x148);
    lVar7 = *(long *)(param_1 + 0x150);
    puStack_138 = &uStack_140;
    uStack_140 = 0;
    uStack_130 = 0x2020000000;
    uStack_128 = 0;
    _objc_retain(lVar7);
    lVar5 = lVar7;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(undefined8 *)(lVar6 * 8);
        uVar3 = uVar8;
        func_0x000108f4242c(uVar8);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        _objc_release(lVar4);
        _objc_release(uVar3);
        func_0x00010c0bee40(uVar8);
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
      lVar5 = lVar7;
      func_0x00010bf52a60();
    }
    _objc_release(lVar7);
    if (*(char *)(puStack_138 + 3) == '\x01') {
      lVar7 = puStack_118[3];
    }
    else {
      lVar7 = 3;
      puStack_118[3] = 3;
    }
    __Block_object_dispose(&uStack_140,8);
    __Block_object_dispose(&uStack_120,8);
  }
  else {
    lVar7 = 0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return lVar7;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_120,8);
  __Unwind_Resume();
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 8);
    lVar5 = *(long *)(lVar7 + 0x18);
    if (lVar5 == 3 || lVar5 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 2;
    }
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x18) = 1;
  }
  return param_3;
}



/* Entry: 1051443f8; end: 105144477;  */

void FUN_1051443f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    lVar2 = *(long *)(lVar1 + 0x18);
    if (lVar2 == 3 || lVar2 == 0) {
      *(undefined8 *)(lVar1 + 0x18) = 2;
    }
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 105144478; end: 1051444d7; -[SCSendToSpotlightSectionDataProvider _cellReuseIdentifierForSelectionStoryType:] */

void FUN_105144478(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = 0x78;
  if (*(long *)(param_1 + 0x148) != 3) {
    lVar1 = 0x68;
  }
  lVar2 = 0x70;
  if (*(long *)(param_1 + 0x148) != 3) {
    lVar2 = 0x60;
  }
  lVar3 = 0x60;
  if (param_3 == 5) {
    lVar3 = lVar2;
  }
  if (param_3 != 2) {
    lVar1 = lVar3;
  }
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1051444d8; end: 1051444df; -[SCSendToSpotlightSectionDataProvider _setItemToSelectionStateMap:] */

void FUN_1051444d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setSectionDataModel__11265beb0,*(undefined8 *)(param_1 + 0x178));
  return;
}



/* Entry: 1051444e0; end: 105144503; -[SCSendToSpotlightSectionDataProvider _setItemToSelectionStateMapForSideBySide:] */

void FUN_1051444e0(undefined8 param_1)

{
  func_0x00010bee0800();
                    /* WARNING: Could not recover jumptable at 0x00010bed5fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateContainerViewModels_112593190);
  return;
}



/* Entry: 105144504; end: 105144847; -[SCSendToSpotlightSectionDataProvider _containerCellViewModelForSelectionStory:index:cellReuseIdentifier:isSelected:twoPerRowStyle:showPlaceTagCarousel:count:leadingAccessoryImage:] */

void FUN_105144504(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong in_stack_ffffffffffffff00;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_10);
  lVar1 = param_3;
  func_0x0001069720e8();
  if (*(char *)(param_1 + 0x129) == '\x01') {
    lVar5 = *(long *)(param_1 + 0x148);
    if (lVar1 == 2) {
      lVar2 = param_1;
      func_0x00010be656e0();
      puVar3 = PTR_PTR_1126b52b8;
      _objc_alloc();
      puVar4 = puVar3;
      func_0x000108f580e4();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar9 = 0;
      uVar8 = 0;
      func_0x00010c000ca0();
      _objc_release(puVar4);
      lVar1 = *(long *)(param_1 + 0x58);
      (**(code **)(lVar1 + 0x10))
                (lVar1,param_3,param_6,0,lVar5 == 3 & (*(byte *)(param_1 + 300) ^ 0xff),lVar2,
                 param_8,param_7,puVar3,param_10,uVar6 & 0xffffffffffffff00,uVar7,uVar8,uVar9,uVar11
                );
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar1 != 5) {
        lVar1 = 0;
        goto LAB_105144748;
      }
      puVar3 = PTR_PTR_1126b52b8;
      _objc_alloc();
      puVar4 = puVar3;
      func_0x000108f5833c();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar9 = 0;
      uVar8 = 0;
      func_0x00010c000ca0();
      _objc_release(puVar4);
      uVar11 = 0;
      if (lVar5 == 3) {
        uVar11 = *(undefined1 *)(param_1 + 300);
      }
      lVar1 = *(long *)(param_1 + 0x58);
      (**(code **)(lVar1 + 0x10))
                (lVar1,param_3,param_6,0,uVar11,1,param_8,param_7,puVar3,param_10,
                 uVar6 & 0xffffffffffffff00,uVar7,uVar8,uVar9,uVar10);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x58);
    (**(code **)(lVar1 + 0x10))
              (lVar1,param_3,param_6,0,param_4,param_9,param_8,param_7,
               *(undefined8 *)(param_1 + 0x158),param_10,
               in_stack_ffffffffffffff00 & 0xffffffffffffff00);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_105144748:
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  uStack_80 = 0x105143c28;
  uStack_78 = 0x105143c38;
  uStack_70 = 0;
  func_0x00010c0bea20(lVar1);
  puVar3 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(lVar1);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105144848; end: 10514487f;  */

void FUN_105144848(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105144880; end: 105144883;  */

void FUN_105144880(void)

{
  return;
}



/* Entry: 105144884; end: 1051449df; -[SCSendToSpotlightSectionDataProvider _onNextSendToEvent:] */

void FUN_105144884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + 0x170;
  _objc_loadWeakRetained();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1051449e0;
  puStack_70 = &UNK_11086b840;
  lStack_68 = param_1;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c0c1600(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1051449e0; end: 105144a4f;  */

void FUN_1051449e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105144a50; end: 105144aa7; -[SCSendToSpotlightSectionDataProvider _canCreateHighlight] */

undefined8 FUN_105144a50(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c239b40();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2d500(uVar3);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105144aa8; end: 105144b1f; -[SCSendToSpotlightSectionDataProvider _numberOfItemsInSection] */

long FUN_105144aa8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x129) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be65590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__numberOfItemsInSectionForSideBy_112576f00)
    ;
    return param_1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be65720();
  _objc_release(uVar1);
  *(long *)(param_1 + 0xd8) = lVar2;
  return lVar2;
}



/* Entry: 105144b20; end: 105144cbb; -[SCSendToSpotlightSectionDataProvider _numberOfItemsInSectionForSideBySide] */

ulong FUN_105144b20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar8 = *(long *)(param_1 + 0xd0);
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar8);
        }
        uVar10 = *(undefined8 *)(lStack_128 + lVar12 * 8);
        uVar2 = uVar10;
        func_0x00010bf34020(uVar10);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010be971e0();
        _objc_release(uVar2);
        lVar4 = param_1;
        if ((int)lVar3 == 0) {
          func_0x00010bf34020(uVar10);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_1;
          func_0x00010be971e0();
          _objc_release(uVar10);
          if ((int)lVar3 != 0) {
            func_0x00010be65700();
            goto LAB_105144c3c;
          }
        }
        else {
          func_0x00010be65720();
LAB_105144c3c:
          uVar9 = lVar4 + uVar9;
        }
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      lVar1 = lVar8;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar8);
  *(ulong *)(param_1 + 0xd8) = uVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010bf4ddc0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b52c0;
    _objc_opt_class(PTR_PTR_1126b52c0);
    puVar7 = (undefined1 *)puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar6);
    _objc_release(puVar5);
    return (ulong)((uint)puVar7 & (uint)(puVar5 != (undefined8 *)0x0));
  }
  return uVar9;
}



/* Entry: 105144cbc; end: 105144d17; -[SCSendToSpotlightSectionDataProvider _numberOfSpotlightItemsInSectionFromViewModel:] */

uint FUN_105144cbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010bf4ddc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b52c0;
  _objc_opt_class(PTR_PTR_1126b52c0);
  lVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  return (uint)lVar2 & (uint)(param_3 != 0);
}



/* Entry: 105144d18; end: 105144e5b; -[SCSendToSpotlightSectionDataProvider _numberOfSnapMapItemsInSectionFromViewModel:] */

undefined8 FUN_105144d18(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b52c0;
  _objc_opt_class(PTR_PTR_1126b52c0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 1;
    func_0x00010beee800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bfba0();
    _objc_release(uVar2);
    uVar5 = puStack_58[3];
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 105144e5c; end: 105144e8f;  */

void FUN_105144e5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be656e0(uVar1,param_2,param_2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 105144e90; end: 105144eef; -[SCSendToSpotlightSectionDataProvider _numberOfSnapMapItemsInSectionFromIsSelected:] */

undefined8 FUN_105144e90(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x140);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2391e0();
    _objc_release(uVar1);
    uVar1 = 1;
    if ((int)uVar2 != 0) {
      uVar1 = 2;
    }
    return uVar1;
  }
  return 1;
}



/* Entry: 105144ef0; end: 105144f5f; -[SCSendToSpotlightSectionDataProvider _configureListCollectionViewCell:] */

void FUN_105144ef0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5290;
  _objc_opt_class(PTR_PTR_1126b5290);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105144f60; end: 105145013; -[SCSendToSpotlightSectionDataProvider _configureCarouselCollectionViewCell:] */

void FUN_105144f60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a4f10);
  if ((param_3 != 0) && ((int)lVar1 != 0)) {
    _objc_retain(param_3);
    func_0x00010c1c2f00(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181920();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb680(param_3);
    _objc_release(uVar2);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105145014; end: 10514514f; -[SCSendToSpotlightSectionDataProvider _createHighlightViewCellViewModel:] */

void FUN_105145014(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = param_1;
  func_0x000107d72fe4();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105145150;
  puStack_68 = &UNK_110849200;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar2 = &puStack_80;
  _objc_retainBlock(ppuVar2);
  puVar3 = PTR_PTR_1126b52c8;
  _objc_alloc(PTR_PTR_1126b52c8);
  func_0x00010bfc9c40(param_1);
  func_0x00010bee66c0();
  func_0x00010c051200(puVar3);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105145150; end: 105145183;  */

void FUN_105145150(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105145184; end: 10514520b; -[SCSendToSpotlightSectionDataProvider _configurePlaceTagCarouselCollectionViewCell:] */

void FUN_105145184(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a4f18);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x140);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc940(param_3);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10514520c; end: 10514524b; -[SCSendToSpotlightSectionDataProvider getSaveToProfileDefaultToggleValue] */

uint FUN_10514520c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0824a0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 10514524c; end: 105145253; -[SCSendToSpotlightSectionDataProvider _setShouldAutoApprovalSpotlightReplies:] */

void FUN_10514524c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ffff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setShouldAutoApproveSpotlightRep_11265da20);
  return;
}


