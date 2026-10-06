/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ea2dac; end: 106ea2dc3;  */

void FUN_106ea2dac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106ea2dc4; end: 106ea2e03;  */

void FUN_106ea2dc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be86300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ea2e04; end: 106ea2e6f; -[SCSpectaclesDeviceStore deviceForSerialNumber:] */

void FUN_106ea2e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0692c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ea2e70; end: 106ea2eef; -[SCSpectaclesDeviceStore _updateSortedDevices] */

void FUN_106ea2e70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0692c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c246ca0(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110981e48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cfe0(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ea2ef0; end: 106ea2fb7;  */

long FUN_106ea2ef0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c089980();
  lVar2 = param_3;
  func_0x00010c089980();
  if (lVar1 == 0 && lVar2 == 0) {
    lVar1 = param_2;
    func_0x00010c15e740(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c15e740(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf433a0(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    lVar3 = -1;
    if (lVar2 < lVar1) {
      lVar3 = 1;
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return lVar3;
}



/* Entry: 106ea2fb8; end: 106ea3063; -[SCSpectaclesDeviceStore _addToInternalDevices:] */

void FUN_106ea2fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0692c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c15e740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_3,uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf51e00(uVar2);
  func_0x00010c1ae500(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ea3064; end: 106ea3357; -[SCSpectaclesDeviceStore pairingManagerDidReceiveCrashReport:babyDevice:] */

void FUN_106ea3064(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_148;
  long lStack_140;
  long lStack_138;
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
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar6 = &uStack_130;
  puVar7 = auStack_f0;
  uVar8 = 0x10;
  lVar1 = param_3;
  lStack_148 = param_3;
  func_0x00010bf52a60();
  lStack_138 = lVar1;
  if (lVar1 != 0) {
    lStack_140 = *plStack_120;
    do {
      unaff_x23 = 0;
      do {
        if (*plStack_120 != lStack_140) {
          _objc_enumerationMutation(lStack_148);
        }
        unaff_x24 = *(long *)(lStack_128 + unaff_x23 * 8);
        lVar1 = param_4;
        func_0x00010bfb0d20(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19cd80(unaff_x24);
        _objc_release(lVar1);
        lVar1 = param_4;
        func_0x00010c15e740(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fcfc0(unaff_x24);
        _objc_release(lVar1);
        lVar1 = param_4;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 == 0) {
          func_0x00010c203180(unaff_x24);
        }
        else {
          lVar2 = param_4;
          func_0x00010bfd38e0(param_4);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bf6e340();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c203180(unaff_x24);
          _objc_release(lVar3);
          _objc_release(lVar2);
        }
        _objc_release(lVar1);
        lVar1 = param_1;
        func_0x00010bf53fa0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15ba00();
        _objc_release(lVar1);
        lVar1 = param_1 + 0x78;
        _objc_loadWeakRetained(lVar1);
        lVar2 = unaff_x24;
        func_0x00010bf53ec0(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = unaff_x24;
        func_0x00010c15e740(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = unaff_x24;
        func_0x00010bf54040(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = unaff_x24;
        func_0x00010bfb0d20();
        _objc_retainAutoreleasedReturnValue();
        param_3 = unaff_x22;
        func_0x00010bf6e340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23e6e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_4;
        func_0x00010bf700a0();
        uStack_170 = 0;
        lStack_168 = param_3;
        lStack_160 = unaff_x24;
        lStack_158 = lVar5;
        func_0x00010c0a4a20(lVar1);
        _objc_release(unaff_x24);
        _objc_release(param_3);
        _objc_release(unaff_x22);
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar1);
        unaff_x23 = unaff_x23 + 1;
      } while (lStack_138 != unaff_x23);
      puVar6 = &uStack_130;
      puVar7 = auStack_f0;
      uVar8 = 0x10;
      lVar1 = lStack_148;
      func_0x00010bf52a60();
      lStack_138 = lVar1;
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  lVar1 = lStack_148;
  _objc_release(lStack_148);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_106ea3358;
  lStack_1b0 = unaff_x24;
  lStack_1a8 = unaff_x23;
  lStack_1a0 = unaff_x22;
  lStack_198 = param_1;
  lStack_190 = param_4;
  lStack_188 = param_3;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  _objc_initWeak(auStack_1b8,lVar1);
  func_0x00010c0f98a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1c0,auStack_1b8);
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_1c0);
  _objc_destroyWeak(auStack_1b8);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  return;
}



/* Entry: 106ea3358; end: 106ea34a7; -[SCSpectaclesDeviceStore pairingManagerDidPairBabyDevice:centralManager:onSuccess:] */

void FUN_106ea3358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea34a8; end: 106ea381b;  */

void FUN_106ea34a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  
  puVar1 = (undefined *)(param_1 + 0x38);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010c0692c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15e740(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126c1ed8;
      _objc_alloc(PTR_PTR_1126c1ed8);
      func_0x00010c0f98a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6340(puVar4);
      uVar9 = 0;
    }
    else {
      puVar5 = puVar4;
      func_0x00010c082060();
      uVar9 = (uint)puVar5 ^ 1;
      func_0x00010c0f98a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befdd20(puVar4);
    }
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0f98a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf026c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d3058;
    _objc_alloc(PTR_PTR_1126d3058);
    puVar7 = puVar1;
    func_0x00010bf04760(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf026c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00bce0(puVar6);
    func_0x00010c228a40(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(puVar1 + 8);
    func_0x00010c150760(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1 + 0x20;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c229ac0(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
    func_0x00010c0e9600(puVar4);
    puVar2 = puVar1;
    func_0x00010c0692c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15e740(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    _objc_release(puVar2);
    if (puVar5 == (undefined *)0x0) {
      func_0x00010bdc8b60(puVar1);
    }
    func_0x00010bf095a0(puVar1);
    puVar2 = puVar4;
    func_0x00010bf6ff00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf6b020(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf710a0();
    _objc_release(puVar2);
    func_0x00010bede960(puVar1);
    puVar2 = puVar1;
    func_0x00010bf04760(puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (uVar9 == 0) {
      func_0x00010c248880(puVar2);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf708e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2492c0(puVar2);
      _objc_release(uVar3);
    }
    _objc_release(puVar2);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar9);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ea381c; end: 106ea38e3; -[SCSpectaclesDeviceStore pairingManagerUnpairAllDevices] */

void FUN_106ea381c(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106ea38e4; end: 106ea3ae7;  */

void FUN_106ea38e4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  long lStack_210;
  long lStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_58;
  
  puVar4 = &uStack_1e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lVar9 = param_1;
  func_0x00010c0692c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar6 = lVar2;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar7 = *plStack_190;
    do {
      lVar9 = 0;
      do {
        if (*plStack_190 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        uVar5 = *(ulong *)(lStack_198 + lVar9 * 8);
        func_0x00010c082060();
        if ((uVar5 & 1) == 0) {
          func_0x00010befa120(puVar1);
        }
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
      lVar6 = lVar2;
      func_0x00010bf52a60();
      lVar9 = 0;
    } while (lVar6 != 0);
  }
  _objc_release(lVar2);
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  _objc_retain(puVar1);
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar6 = *plStack_1d0;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_1d0 != lVar6) {
          _objc_enumerationMutation(puVar1);
        }
        lVar9 = *(long *)(lStack_1d8 + (long)puVar8 * 8);
        func_0x00010c0692a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c281d00();
        _objc_release(lVar9);
        puVar8 = puVar8 + 1;
      } while (puVar3 != puVar8);
      puVar3 = puVar1;
      puVar4 = &uStack_1e0;
      func_0x00010bf52a60();
      lVar2 = 0;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  lVar6 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_106ea3ae8;
  lStack_210 = lVar9;
  lStack_208 = lVar2;
  puStack_200 = puVar1;
  lStack_1f8 = param_1;
  puStack_1f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_initWeak(auStack_218,lVar6);
  func_0x00010c0f98a0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_220,auStack_218);
  _objc_retain(puVar4);
  func_0x00010c0f7fc0(lVar6);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_220);
  _objc_destroyWeak(auStack_218);
  _objc_release(puVar4);
  return;
}



/* Entry: 106ea3ae8; end: 106ea3bdf; -[SCSpectaclesDeviceStore removeDevice:] */

void FUN_106ea3ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea3be0; end: 106ea3cf3;  */

void FUN_106ea3be0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0692c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d3c80();
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15e740(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(lVar3,param_2,uVar4);
  _objc_release(uVar4);
  lVar2 = lVar3;
  func_0x00010bf51e00(lVar3);
  func_0x00010c1ae500(lVar1,param_2,lVar2);
  _objc_release(lVar2);
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f260(puVar6,param_2,puVar5);
  func_0x00010c1b7b40(lVar1,param_2,puVar6);
  _objc_release(puVar5);
  func_0x00010bf095a0(lVar1);
  lVar2 = lVar1;
  func_0x00010bf04760(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249220();
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ea3cf4; end: 106ea3deb; -[SCSpectaclesDeviceStore reconcileDevicesFromServer:] */

void FUN_106ea3cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea3dec; end: 106ea42eb;  */

ulong FUN_106ea3dec(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar5 = uVar2;
    func_0x00010c0692c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0d3c80();
    _objc_release(uVar5);
    _objc_retain(lVar3);
    lVar7 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        puVar18 = *(undefined **)(lVar19 * 8);
        uVar5 = uVar2;
        func_0x00010c0692c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar18;
        func_0x00010c15e740(puVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(uVar5);
        puVar8 = puVar18;
        func_0x00010c15e740(puVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar8);
        puVar8 = puVar18;
        func_0x00010c089980();
        if (uVar5 == 0) {
          uVar5 = uVar2;
          func_0x00010c0888e0();
          if ((long)uVar5 < (long)puVar8) {
            puVar8 = PTR_PTR_1126c1ed8;
            _objc_alloc(PTR_PTR_1126c1ed8);
            puVar10 = puVar18;
            func_0x00010c15e740(puVar18);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar18;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf40c40();
            func_0x00010bfb19a0();
            func_0x00010c089980();
            func_0x00010c089780();
            func_0x00010bf70cc0();
            puVar12 = PTR_PTR_1126c0c68;
            _objc_alloc();
            puVar13 = puVar18;
            func_0x00010bfb0d20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c04e820();
            puVar14 = PTR_PTR_1126c0c70;
            _objc_alloc();
            puVar15 = puVar18;
            func_0x00010bfd38e0(puVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c04e820();
            func_0x00010c044900(puVar8);
            _objc_release(puVar14);
            _objc_release(puVar15);
            _objc_release(puVar12);
            _objc_release(puVar13);
            _objc_release(puVar11);
            _objc_release(puVar10);
            func_0x00010c15e740(puVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar6);
            _objc_release(puVar18);
            goto LAB_106ea4174;
          }
        }
        else {
          uVar5 = uVar9;
          func_0x00010c089980();
          if (((long)uVar5 < (long)puVar8) &&
             (uVar5 = uVar9, func_0x00010c082060(), (uVar5 & 1) == 0)) {
            func_0x00010befa120(puVar4);
          }
          puVar8 = puVar18;
          func_0x00010c089780();
          uVar5 = uVar9;
          func_0x00010c089780();
          if ((long)uVar5 < (long)puVar8) {
            func_0x00010bf85d80(puVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c18fca0(uVar9);
            puVar8 = puVar18;
LAB_106ea4174:
            _objc_release(puVar8);
          }
        }
        _objc_release(uVar9);
        lVar19 = lVar19 + 1;
      } while (lVar7 != lVar19);
      lVar7 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    uVar5 = uVar6;
    func_0x00010bf51e00();
    func_0x00010c1ae500(uVar2);
    _objc_release(uVar5);
    func_0x00010bf095a0(uVar2);
    _objc_retain(puVar4);
    puVar8 = puVar4;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (puVar8 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(puVar4);
        }
        uVar16 = *(undefined8 *)((long)puVar18 * 8);
        func_0x00010c0692a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c281d00();
        _objc_release(uVar16);
        puVar18 = puVar18 + 1;
      } while (puVar8 != puVar18);
      puVar8 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return uVar2;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126c0c70;
  _objc_retain(param_2);
  _objc_alloc(puVar4);
  uVar16 = param_2;
  func_0x00010bfd38e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c04e820(puVar4);
  _objc_release(uVar16);
  puVar8 = puVar4;
  func_0x00010bf70e00(puVar4);
  _objc_release(puVar4);
  return (ulong)(puVar8 != (undefined *)0x1);
}



/* Entry: 106ea42ec; end: 106ea437b;  */

bool FUN_106ea42ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c0c70;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bfd38e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c04e820(puVar1);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf70e00(puVar1);
  _objc_release(puVar1);
  return puVar3 != (undefined *)0x1;
}



/* Entry: 106ea437c; end: 106ea447b; -[SCSpectaclesDeviceStore setMinimumRequiredFirmwareVersion:forHardwareWithMajorNumber:] */

void FUN_106ea437c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea447c; end: 106ea4657;  */

ulong FUN_106ea447c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c0ce560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e00e0(uVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  if ((uVar5 != *(ulong *)(param_1 + 0x20)) &&
     (uVar3 = uVar5, func_0x00010c071ae0(), (uVar3 & 1) == 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = uVar2;
    func_0x00010c0ce560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,uVar8,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    uVar6 = uVar2;
    func_0x00010bf71280();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar3 != 0) {
      uVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar6);
        }
        func_0x00010bede960(uVar2,param_2,*(undefined8 *)(uVar9 * 8));
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
      uVar3 = uVar6;
      func_0x00010bf52a60();
    }
    _objc_release(uVar6);
  }
  _objc_release(uVar5);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar2;
  }
  ___stack_chk_fail();
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c296f80(uVar3,param_2,&PTR____CFConstantStringClassReference_110e8ad38);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c067ec0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  return (long)(int)uVar5 + 1;
}



/* Entry: 106ea4658; end: 106ea4717; -[SCSpectaclesDeviceStore nextAvailableDeviceNumberForProductType:] */

long FUN_106ea4658(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c296f80(uVar1,param_2,&PTR____CFConstantStringClassReference_110e8ad38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067ec0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (long)(int)uVar3 + 1;
}



/* Entry: 106ea4718; end: 106ea4763;  */

bool FUN_106ea4718(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bfd38e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf70e00();
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_release(param_2);
  return lVar1 == lVar2;
}



/* Entry: 106ea4764; end: 106ea4767; -[SCSpectaclesDeviceStore deviceDidRequestArchiving:] */

void FUN_106ea4764(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf095b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_archiveDevices_11259ff10);
  return;
}



/* Entry: 106ea4768; end: 106ea47c7; -[SCSpectaclesDeviceStore deviceDidUpdateState:] */

void FUN_106ea4768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bee05e0(param_1);
  func_0x00010bf095a0(param_1);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c248920();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea47c8; end: 106ea484f; -[SCSpectaclesDeviceStore device:didUpdateInfo:] */

void FUN_106ea47c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  _objc_retain(param_3);
  if ((param_4 >> 2 & 1) != 0) {
    func_0x00010bede960(param_1,param_2,param_3);
  }
  if ((param_4 & 0x3e) != 0) {
    func_0x00010bee05e0(param_1);
    func_0x00010bf095a0(param_1);
  }
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2487e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ea4850; end: 106ea48bf; -[SCSpectaclesDeviceStore device:onFirmwareUpdate:progress:] */

void FUN_106ea4850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf04760(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c248840(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ea48c0; end: 106ea492f; -[SCSpectaclesDeviceStore deviceDidFetchFirmwareDigest:digest:] */

void FUN_106ea48c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c248720();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea4930; end: 106ea49b7; -[SCSpectaclesDeviceStore device:didCompletedScheduledUpdateWithUserInfo:error:] */

void FUN_106ea4930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c248700();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea49b8; end: 106ea4a17; -[SCSpectaclesDeviceStore device:didUnpairWithReason:] */

void FUN_106ea49b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2487c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea4a18; end: 106ea4a77; -[SCSpectaclesDeviceStore device:didReceiveAlertNotification:] */

void FUN_106ea4a18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c248800();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea4a78; end: 106ea4ad7; -[SCSpectaclesDeviceStore device:uploadToCloudEvent:] */

void FUN_106ea4a78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c248760();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea4ad8; end: 106ea4b4f; -[SCSpectaclesDeviceStore device:receivedClientId:requestAuthzCode:] */

void FUN_106ea4ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c248740();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea4b50; end: 106ea4bbf; -[SCSpectaclesDeviceStore device:receivedWifiAPList:] */

void FUN_106ea4b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2487a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea4bc0; end: 106ea4c2f; -[SCSpectaclesDeviceStore device:receivedLastCloudUploadTime:] */

void FUN_106ea4bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c248780();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea4c30; end: 106ea4c7f; -[SCSpectaclesDeviceStore deviceDidSetUpFeatureCatalog:] */

void FUN_106ea4c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2488a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea4c80; end: 106ea4c87; -[SCSpectaclesDeviceStore setDevices:] */

void FUN_106ea4c80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106ea4c88; end: 106ea4c8f; -[SCSpectaclesDeviceStore lagunaId] */

undefined8 FUN_106ea4c88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106ea4c90; end: 106ea4ca7; -[SCSpectaclesDeviceStore delegate] */

void FUN_106ea4c90(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ea4ca8; end: 106ea4caf; -[SCSpectaclesDeviceStore announcer] */

undefined8 FUN_106ea4ca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106ea4cb0; end: 106ea4cdf; -[SCSpectaclesDeviceStore setAnnouncer:] */

void FUN_106ea4cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ea4ce0; end: 106ea4ce7; -[SCSpectaclesDeviceStore crashLogger] */

undefined8 FUN_106ea4ce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106ea4ce8; end: 106ea4d17; -[SCSpectaclesDeviceStore setCrashLogger:] */

void FUN_106ea4ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ea4d18; end: 106ea4d1f; -[SCSpectaclesDeviceStore cache] */

undefined8 FUN_106ea4d18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106ea4d20; end: 106ea4d4f; -[SCSpectaclesDeviceStore setCache:] */

void FUN_106ea4d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ea4d50; end: 106ea4d57; -[SCSpectaclesDeviceStore archivePerformer] */

undefined8 FUN_106ea4d50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106ea4d58; end: 106ea4d87; -[SCSpectaclesDeviceStore setArchivePerformer:] */

void FUN_106ea4d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ea4d88; end: 106ea4d8f; -[SCSpectaclesDeviceStore archivingBlock] */

undefined8 FUN_106ea4d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106ea4d90; end: 106ea4d97; -[SCSpectaclesDeviceStore setArchivingBlock:] */

void FUN_106ea4d90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ea4d98; end: 106ea4d9f; -[SCSpectaclesDeviceStore restoredFromDisk] */

undefined1 FUN_106ea4d98(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 106ea4da0; end: 106ea4da7; -[SCSpectaclesDeviceStore setRestoredFromDisk:] */

void FUN_106ea4da0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 106ea4da8; end: 106ea4daf; -[SCSpectaclesDeviceStore lastDeviceForgottenTimestamp] */

undefined8 FUN_106ea4da8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106ea4db0; end: 106ea4db7; -[SCSpectaclesDeviceStore setLastDeviceForgottenTimestamp:] */

void FUN_106ea4db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 106ea4db8; end: 106ea4dcf; -[SCSpectaclesDeviceStore analyticsLogger] */

void FUN_106ea4db8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ea4dd0; end: 106ea4ddb; -[SCSpectaclesDeviceStore setAnalyticsLogger:] */

void FUN_106ea4dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 106ea4ddc; end: 106ea4de3; -[SCSpectaclesDeviceStore internalDevices] */

undefined8 FUN_106ea4ddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106ea4de4; end: 106ea4deb; -[SCSpectaclesDeviceStore performer] */

undefined8 FUN_106ea4de4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106ea4dec; end: 106ea4e1b; -[SCSpectaclesDeviceStore setPerformer:] */

void FUN_106ea4dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ea4e1c; end: 106ea4e23; -[SCSpectaclesDeviceStore backgroundTaskWrapper] */

undefined8 FUN_106ea4e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106ea4e24; end: 106ea4e2b; -[SCSpectaclesDeviceStore minimumRequiredFirmwareVersions] */

undefined8 FUN_106ea4e24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106ea4e2c; end: 106ea4e5b; -[SCSpectaclesDeviceStore setMinimumRequiredFirmwareVersions:] */

void FUN_106ea4e2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ea4e5c; end: 106ea4f33; -[SCSpectaclesDeviceStore .cxx_destruct] */

void FUN_106ea4e5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ea4f34; end: 106ea508f; -[SCSpectaclesGenericMessageSender initWithConnectionHub:] */

undefined1 * FUN_106ea4f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f7a80;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c18e0;
    _objc_alloc_init(PTR_PTR_1126c18e0);
    uVar6 = param_3;
    FUN_106ec57f0(param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar6;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c1918;
    _objc_alloc();
    puVar4 = PTR_PTR_1126ae568;
    _objc_opt_new(PTR_PTR_1126ae568);
    func_0x00010c050a00();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar6);
    func_0x000106ec5470(puVar1,puVar2);
    func_0x00010befb0c0(param_3);
    func_0x00010befac20(param_3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ea5090; end: 106ea50f7; -[SCSpectaclesGenericMessageSender sendGenericRequest:] */

void FUN_106ea5090(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3060;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0177a0();
  _objc_release(param_3);
  func_0x00010c15c6e0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ea50f8; end: 106ea50ff; -[SCSpectaclesGenericMessageSender genericResponsePublisher] */

void FUN_106ea50f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2bd770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_wrappedSubject_11268d000);
  return;
}



/* Entry: 106ea5100; end: 106ea51f7; -[SCSpectaclesGenericMessageSender registerRequestEncoder:protocol:messageType:] */

void FUN_106ea5100(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + 0x18);
  _objc_retain(param_5);
  func_0x00010c0e00e0(lVar4,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar1,param_4);
    _objc_release(puVar1);
  }
  uVar2 = param_3;
  _objc_retainBlock(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0e00e0(uVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ea51f8; end: 106ea52ef; -[SCSpectaclesGenericMessageSender registerResponseDecoder:protocol:messageType:] */

void FUN_106ea51f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(param_5);
  func_0x00010c0e00e0(lVar4,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar1,param_4);
    _objc_release(puVar1);
  }
  uVar2 = param_3;
  _objc_retainBlock(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ea52f0; end: 106ea55d3; -[SCSpectaclesGenericMessageSender handleResponse:] */

ulong FUN_106ea52f0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d3060;
  _objc_opt_class(PTR_PTR_1126d3060);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain();
  _objc_release(uVar3);
  lVar9 = *(long *)(param_1 + 0x20);
  uVar3 = param_3;
  func_0x00010bfc1020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar6 = lVar9;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar6 == 0) {
      _objc_release(lVar9);
      if (uVar1 != 0) {
        lVar13 = 0;
        uVar11 = 0;
LAB_106ea54fc:
        puVar4 = PTR_PTR_1126d3068;
        _objc_alloc(PTR_PTR_1126d3068);
        func_0x00010c13bcc0();
        uVar3 = uVar1;
        func_0x00010bfc0fe0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04c3c0(puVar4);
        _objc_release(uVar3);
        func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
        _objc_release(puVar4);
        _objc_release(uVar11);
        _objc_release(lVar13);
      }
      _objc_release(uVar1);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return param_3;
      }
      ___stack_chk_fail();
      return 0;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar9);
      }
      uVar11 = *(undefined8 *)(lVar10 * 8);
      lVar12 = *(long *)(param_1 + 0x20);
      uVar3 = param_3;
      func_0x00010bfc1020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar12;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010bfc1000(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar7;
      (**(code **)(lVar7 + 0x10))(lVar7,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(lVar7);
      _objc_release(lVar12);
      _objc_release(uVar3);
      if (lVar13 != 0) {
        _objc_retain(uVar11);
        _objc_release(lVar9);
        goto LAB_106ea54fc;
      }
      lVar10 = lVar10 + 1;
    } while (lVar6 != lVar10);
    lVar6 = lVar9;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106ea55d4; end: 106ea55db; -[SCSpectaclesGenericMessageSender responseMonitorState] */

undefined8 FUN_106ea55d4(void)

{
  return 0;
}



/* Entry: 106ea55dc; end: 106ea56bb; -[SCSpectaclesGenericMessageSender encodeGenericRequest:protocol:] */

void FUN_106ea55dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0f3800(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106ea56bc; end: 106ea5703; -[SCSpectaclesGenericMessageSender .cxx_destruct] */

void FUN_106ea56bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ea5704; end: 106ea57b7; -[SCSpectaclesGenericRequestMessageWrapper initWithGenericRequest:encoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106ea5704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f7a88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112760990;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112760994),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ea57b8; end: 106ea57bf; -[SCSpectaclesGenericRequestMessageWrapper type] */

undefined8 FUN_106ea57b8(void)

{
  return 0x84;
}



/* Entry: 106ea57c0; end: 106ea57c7; -[SCSpectaclesGenericRequestMessageWrapper lagunaRequest] */

undefined8 FUN_106ea57c0(void)

{
  return 0;
}



/* Entry: 106ea57c8; end: 106ea5833; -[SCSpectaclesGenericRequestMessageWrapper malibuRpcInvocations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ea57c8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112760994;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf92f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106ea5834; end: 106ea5837; -[SCSpectaclesGenericRequestMessageWrapper newportRpcInvocations] */

void FUN_106ea5834(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b7c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_malibuRpcInvocations_11260b930);
  return;
}



/* Entry: 106ea5838; end: 106ea58a3; -[SCSpectaclesGenericRequestMessageWrapper hermosaRequests] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ea5838(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112760994;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf92f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106ea58a4; end: 106ea58ab; -[SCSpectaclesGenericRequestMessageWrapper cheeriosRequests] */

undefined8 FUN_106ea58a4(void)

{
  return 0;
}



/* Entry: 106ea58ac; end: 106ea58bb; -[SCSpectaclesGenericRequestMessageWrapper genericRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ea58ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760990);
}



/* Entry: 106ea58bc; end: 106ea58f7; -[SCSpectaclesGenericRequestMessageWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ea58bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112760990,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112760994);
  return;
}



/* Entry: 106ea58f8; end: 106ea597f; -[SCSpectaclesResponseMonitorSet init] */

undefined1 * FUN_106ea58f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7a90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x00010c2a2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106ea5980; end: 106ea5a8b; -[SCSpectaclesResponseMonitorSet createAndAddResponseMonitorWithHandler:successBlock:failureBlock:timeoutBlock:timeout:] */

void FUN_106ea5980(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126d3070;
  _objc_alloc(PTR_PTR_1126d3070);
  func_0x00010c019a20(param_1);
  uVar2 = *(undefined8 *)(param_2 + 8);
  _objc_retain(uVar2);
  _objc_sync_enter(uVar2);
  func_0x00010befa120(*(undefined8 *)(param_2 + 0x10),param_3,puVar1);
  func_0x00010befb0c0(param_2,param_3,puVar1);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106ea5a8c; end: 106ea5b87; -[SCSpectaclesResponseMonitorSet createAndAddResponseMonitorWithHandler:successBlock:failureBlock:timeoutBlock:] */

void FUN_106ea5a8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d3070;
  _objc_alloc(PTR_PTR_1126d3070);
  func_0x00010c019a00();
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  _objc_sync_enter(uVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  func_0x00010befb0c0(param_1,param_2,puVar1);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ea5b88; end: 106ea5ca3; -[SCSpectaclesResponseMonitorSet addResponseMonitor:] */

void FUN_106ea5b88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_3);
  _objc_retain();
  lVar1 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a57e0);
  _objc_release(param_3);
  uVar4 = 0;
  if (param_3 != 0) {
    uVar4 = (uint)lVar1;
  }
  if ((uVar4 & 1) != 0) {
    puVar2 = auStack_38;
    _objc_loadWeakRetained();
    _objc_release();
    if (puVar2 != (undefined1 *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      _objc_retain(uVar3);
      _objc_sync_enter(uVar3);
      uVar6 = *(ulong *)(param_1 + 8);
      puVar2 = auStack_38;
      _objc_loadWeakRetained(puVar2);
      func_0x00010bf4b900();
      _objc_release(puVar2);
      if ((uVar6 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_1 + 8);
        puVar2 = auStack_38;
        _objc_loadWeakRetained(puVar2);
        func_0x00010befa120(uVar5);
        _objc_release(puVar2);
      }
      _objc_sync_exit(uVar3);
      _objc_release(uVar3);
    }
  }
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106ea5ca4; end: 106ea5d57; -[SCSpectaclesResponseMonitorSet removeResponseMonitor:] */

void FUN_106ea5ca4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_DAT_1126a57e0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,puVar1);
  _objc_release(param_3);
  if ((param_3 != 0) && ((int)lVar2 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar3);
    _objc_sync_enter(uVar3);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c12d460(*(undefined8 *)(param_1 + 8));
    _objc_sync_exit(uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ea5d58; end: 106ea5e0f; -[SCSpectaclesResponseMonitorSet containsResponseMonitor:] */

undefined8 FUN_106ea5d58(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_DAT_1126a57e0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,puVar1);
  _objc_release(param_3);
  uVar4 = 0;
  if ((param_3 != 0) && ((int)lVar2 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar3);
    _objc_sync_enter(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf4b900(uVar4);
    _objc_sync_exit(uVar3);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106ea5e10; end: 106ea6063; -[SCSpectaclesResponseMonitorSet passMonitorsResponseAndCompactDeactivated:] */

void FUN_106ea5e10(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 unaff_x23;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar8);
    _objc_sync_enter(uVar8);
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_exit(uVar8);
    _objc_release(uVar8);
    _objc_retain(lVar3);
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar9 = *(long *)(lVar11 * 8);
        lVar5 = lVar9;
        func_0x00010c13b9e0();
        if (lVar5 == 0) {
          func_0x00010bfd2500(lVar9);
        }
        func_0x00010c13b9e0();
        if (lVar9 != 0) {
          func_0x00010befa120(puVar2);
        }
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    _objc_retain(puVar2);
    puVar6 = puVar2;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c12e0c0(param_1);
        puVar10 = puVar10 + 1;
      } while (puVar6 != puVar10);
      puVar6 = puVar2;
      func_0x00010bf52a60();
    }
    unaff_x23 = 0;
    _objc_release(puVar2);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(unaff_x23);
  __Unwind_Resume(param_3);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106ea6064; end: 106ea6093; -[SCSpectaclesResponseMonitorSet .cxx_destruct] */

void FUN_106ea6064(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ea6094; end: 106ea6107; -[SCSpectaclesStartWiFiController initWithDevice:] */

undefined1 * FUN_106ea6094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7a98;
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



/* Entry: 106ea6108; end: 106ea613f; -[SCSpectaclesStartWiFiController setDelegate:] */

void FUN_106ea6108(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x10,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ea6140; end: 106ea622b; -[SCSpectaclesStartWiFiController connectWiFi] */

void FUN_106ea6140(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b6720;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c100(puVar1,param_2,uVar3,1,10,1,0,1,param_1,lVar2,1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf02380(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef95c0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf638a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106ea622c; end: 106ea633b; -[SCSpectaclesStartWiFiController disconnectWiFiAfterDelayInSeconds:] */

void FUN_106ea622c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf638a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar4);
    uVar2 = 0;
    _dispatch_time(0,param_3 * 1000000000);
    uVar3 = 0x11;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106ea633c;
    puStack_60 = &UNK_110844b80;
    uStack_48 = 0;
    uStack_58 = uVar1;
    uStack_50 = uVar4;
    func_0x00010058c530(uVar2,uVar3,&puStack_78);
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf02380(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cd20();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 106ea633c; end: 106ea6347;  */

void FUN_106ea633c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_cancelDataFlowRequest__1125a9220,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106ea6348; end: 106ea63bf; -[SCSpectaclesStartWiFiController _removeDataFlowRequest] */

void FUN_106ea6348(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf638a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e1e0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf02380(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106ea63c0; end: 106ea6407; -[SCSpectaclesStartWiFiController dataFlowsRequestStartedExecuting:] */

void FUN_106ea63c0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x18)) {
    return;
  }
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2498a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea6408; end: 106ea6493; -[SCSpectaclesStartWiFiController dataFlowsRequest:failedWithError:] */

void FUN_106ea6408(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  if (param_3 == *(long *)(param_1 + 0x18)) {
    func_0x00010be8bd20(param_1);
    lVar1 = param_4;
    func_0x00010bf3ec40();
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    if (lVar1 == 3) {
      func_0x00010c249900();
    }
    else {
      func_0x00010c2498e0();
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106ea6494; end: 106ea64df; -[SCSpectaclesStartWiFiController dataFlowsRequestCancelled:] */

void FUN_106ea6494(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x18)) {
    return;
  }
  func_0x00010be8bd20();
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2498c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea64e0; end: 106ea6517; -[SCSpectaclesStartWiFiController .cxx_destruct] */

void FUN_106ea64e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ea6518; end: 106ea66af; -[SCSpectaclesTransferController initWithDevice:delegate:dataFlowsManager:analyticsLogger:networkConnectivityServices:shouldDisplayErrorAlertWhenTransferFails:] */

undefined1 *
FUN_106ea6518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = &uStack_60;
  _objc_initWeak(auStack_48,param_3);
  _objc_initWeak(auStack_50,param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f7aa0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_48;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),puVar2);
    _objc_release(puVar2);
    puVar2 = auStack_50;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),puVar2);
    _objc_release(puVar2);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x30) = param_8;
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar4;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return (undefined1 *)puVar1;
}



/* Entry: 106ea66b0; end: 106ea6733; -[SCSpectaclesTransferController dealloc] */

void FUN_106ea66b0(long param_1,undefined8 param_2)

{
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106ea6734;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_48);
  }
  puStack_50 = PTR_PTR_1126f7aa0;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106ea6734; end: 106ea673b;  */

void FUN_106ea6734(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddafb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cancelTransferRequest_112554588);
  return;
}



/* Entry: 106ea673c; end: 106ea67f3; -[SCSpectaclesTransferController initiateContentTransferWithStartSource:] */

void FUN_106ea673c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106ea67f4; end: 106ea682f;  */

void FUN_106ea67f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdc8da0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


