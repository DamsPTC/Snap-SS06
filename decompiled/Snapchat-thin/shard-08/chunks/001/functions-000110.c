/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105dd04d8; end: 105dd050f; -[SCPreviewFeatureTimerImpl disallowsPlayOnce] */

long FUN_105dd04d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c07e9c0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105dd0510; end: 105dd0573; -[SCPreviewFeatureTimerImpl _isBounceAvailable] */

long FUN_105dd0510(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c06fea0();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 105dd0574; end: 105dd05b7; -[SCPreviewFeatureTimerImpl _shouldHideTimerForPlayOnceRestriction] */

void FUN_105dd0574(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf80f20();
  if ((int)lVar1 != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c075080();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 105dd05b8; end: 105dd0763; -[SCPreviewFeatureTimerImpl _syncToolbarItemForPlayOnceRestriction] */

void FUN_105dd05b8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar2 = param_1;
  func_0x00010bf80f20();
  if (((int)lVar2 != 0) && ((*(byte *)(param_1 + 0xc0) & 1) == 0)) {
    lVar2 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c084f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126c42b8;
    _objc_opt_class(PTR_PTR_1126c42b8);
    lVar2 = lVar4;
    _objc_opt_isKindOfClass(lVar4,puVar5);
    _objc_release(lVar4);
    lVar3 = param_1;
    func_0x00010beb41a0();
    uVar1 = (uint)lVar2 & (uint)(lVar4 != 0);
    if ((int)lVar3 == 0) {
      if ((uVar1 == 0) && (*(char *)(param_1 + 0xc1) == '\x01')) {
        lVar2 = param_1 + 0xb0;
        _objc_loadWeakRetained();
        if ((lVar2 != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
          *(undefined1 *)(param_1 + 0xc0) = 1;
          lVar4 = param_1;
          func_0x00010bf599c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          *(undefined1 *)(param_1 + 0xc0) = 0;
          lVar3 = param_1 + 0x18;
          _objc_loadWeakRetained(lVar3);
          lVar6 = lVar3;
          func_0x00010c2737a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0669c0();
          _objc_release(lVar6);
          _objc_release(lVar3);
          *(undefined1 *)(param_1 + 0xc1) = 0;
          _objc_release(lVar4);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar2);
        return;
      }
    }
    else if (uVar1 != 0) {
      lVar2 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c2737a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc80();
      _objc_release(lVar3);
      _objc_release(lVar2);
      *(undefined1 *)(param_1 + 0xc1) = 1;
    }
  }
  return;
}



/* Entry: 105dd0764; end: 105dd07ab; -[SCPreviewFeatureTimerImpl plusSubscribeDidDismiss] */

void FUN_105dd0764(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x88));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105dd07ac; end: 105dd084b; -[SCPreviewFeatureTimerImpl setToolbarItemViewModel:] */

void FUN_105dd07ac(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xd0);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    *(long *)(param_1 + 0xd0) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    puVar3 = PTR_PTR_1126ae750;
    if (param_3 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dd084c; end: 105dd0aa7; -[SCPreviewFeatureTimerImpl reloadToolbarItemViewModel] */

/* WARNING: Possible PIC construction at 0x000105dd0a84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105dd0a88) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105dd084c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  
  func_0x00010bec9de0();
  lVar7 = param_1;
  func_0x00010beb41a0();
  if ((int)lVar7 == 0) {
    lVar7 = *(long *)(param_1 + 0x70);
    if (lVar7 == 0) {
LAB_105dd089c:
      uVar1 = param_1 + 8;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      func_0x00010c078140();
      _objc_release(uVar1);
      if (lVar7 != 0) {
        _objc_release(unaff_x20);
      }
      if ((uVar2 & 1) == 0) goto LAB_105dd0918;
    }
    else {
      unaff_x20 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar3 = unaff_x20;
      func_0x00010c2346e0();
      if ((int)lVar3 == 0) goto LAB_105dd089c;
      _objc_release(unaff_x20);
    }
    lVar7 = *(long *)(param_1 + 0x50);
    func_0x00010c2708a0();
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar7 == 0) {
      func_0x00010c26f400();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c075760();
      _objc_release(lVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c26f400();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c075760();
      if ((int)uVar5 == 0) {
        lVar3 = *(long *)(param_1 + 0x50);
        func_0x00010c26f400();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar3;
        func_0x00010c26f000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        _objc_release(uVar4);
        puVar6 = PTR_PTR_1126c4330;
        if (lVar7 != 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x50);
          func_0x00010c26f400(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c26f000();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          func_0x00010bfe8de0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          _objc_release(uVar4);
        }
      }
      else {
        _objc_release(uVar4);
      }
    }
    else {
      func_0x00010c0cfd40();
      if ((lVar3 == 2) || (lVar3 == 1)) {
        func_0x00010c29b7e0(PTR_PTR_1126c4330);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (lVar3 == 0) {
        func_0x00010c29b7e0(PTR_PTR_1126c4330);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    puVar6 = PTR_PTR_1126c3cc0;
    _objc_alloc(PTR_PTR_1126c3cc0);
    func_0x00010c039d00();
  }
  else {
LAB_105dd0918:
    puVar6 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c216fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setToolbarItemViewModel__112663610,puVar6);
  return;
}



/* Entry: 105dd0aa8; end: 105dd0acf; -[SCPreviewFeatureTimerImpl toolbarItemViewModelObservable] */

void FUN_105dd0aa8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dd0ad0; end: 105dd0ae7; -[SCPreviewFeatureTimerImpl delegate] */

void FUN_105dd0ad0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dd0ae8; end: 105dd0af3; -[SCPreviewFeatureTimerImpl setDelegate:] */

void FUN_105dd0ae8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 105dd0af4; end: 105dd0afb; -[SCPreviewFeatureTimerImpl toolbarItemViewModel] */

undefined8 FUN_105dd0af4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 105dd0afc; end: 105dd0bf7; -[SCPreviewFeatureTimerImpl .cxx_destruct] */

void FUN_105dd0afc(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_destroyWeak(param_1 + 200);
  _objc_destroyWeak(param_1 + 0xb0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105dd0bf8; end: 105dd0f83; -[SCPreviewFeatureTimerServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd0bf8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_110;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_1127368b0;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar14;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  if (param_1 == 0) {
    lVar14 = 0;
    lVar12 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_1127368b4;
    _objc_loadWeakRetained();
    lVar12 = param_1 + _DAT_1127368b8;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar12;
  func_0x00010c293220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar12);
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127368c0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar12;
  func_0x00010bf207a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar12);
  lVar12 = param_1;
  FUN_105dd0f84();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar12;
  func_0x00010c068880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar12 = param_1;
  FUN_105dd0f84();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar12;
  func_0x00010c08ae00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar12 = param_1 + _DAT_1127368ac;
  _objc_loadWeakRetained();
  lVar6 = lVar12;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  if (param_1 == 0) {
    lStack_110 = 0;
    lVar12 = 0;
  }
  else {
    lStack_110 = param_1 + _DAT_1127368cc;
    _objc_loadWeakRetained();
    lVar12 = param_1 + _DAT_1127368bc;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar12;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  if (param_1 == 0) {
    _objc_retain(0);
    lVar12 = 0;
    uVar11 = 0;
    lVar13 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + _DAT_1127368dc);
    _objc_retain(uVar11);
    lVar12 = param_1 + _DAT_1127368d8;
    _objc_loadWeakRetained();
    lVar13 = param_1 + _DAT_1127368d0;
    _objc_loadWeakRetained();
  }
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105dd0fa8;
  puStack_d0 = &UNK_1108e98c0;
  lStack_90 = lStack_110;
  puVar8 = PTR_PTR_1126ae720;
  lStack_c8 = lVar6;
  lStack_c0 = lVar1;
  lStack_b8 = lVar14;
  lStack_b0 = lVar3;
  lStack_a8 = lVar4;
  lStack_a0 = lVar2;
  lStack_98 = lVar5;
  lStack_88 = lVar7;
  uStack_80 = uVar11;
  lStack_78 = lVar12;
  lStack_70 = lVar13;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_e8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c4b08;
  _objc_alloc(PTR_PTR_1126c4b08);
  func_0x00010c0527e0();
  if (param_1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + _DAT_1127368d4);
  }
  func_0x00010bf9d660(uVar10,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(lVar7);
  _objc_release(lStack_110);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar14);
  _objc_release(lVar1);
  return;
}



/* Entry: 105dd0f84; end: 105dd0fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd0f84(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127368c8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dd0fa8; end: 105dd0ff7;  */

void FUN_105dd0fa8(void)

{
  _objc_alloc(PTR_PTR_1126c4b00);
  func_0x00010c02b9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dd0ff8; end: 105dd10bb; -[SCPreviewFeatureTimerServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd0ff8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127368dc,0);
  _objc_destroyWeak(param_1 + _DAT_1127368d8);
  _objc_storeStrong(param_1 + _DAT_1127368d4,0);
  _objc_destroyWeak(param_1 + _DAT_1127368d0);
  _objc_destroyWeak(param_1 + _DAT_1127368cc);
  _objc_destroyWeak(param_1 + _DAT_1127368c8);
  _objc_destroyWeak(param_1 + _DAT_1127368c4);
  _objc_destroyWeak(param_1 + _DAT_1127368c0);
  _objc_destroyWeak(param_1 + _DAT_1127368bc);
  _objc_destroyWeak(param_1 + _DAT_1127368ac);
  _objc_destroyWeak(param_1 + _DAT_1127368b8);
  _objc_destroyWeak(param_1 + _DAT_1127368b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127368b0);
  return;
}



/* Entry: 105dd10bc; end: 105dd1167; -[SCPreviewFeatureTimerServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd10bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127368e0;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127368e8;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c2705e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105dd1168; end: 105dd11ab; -[SCPreviewFeatureTimerServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd1168(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127368e8);
  _objc_destroyWeak(param_1 + _DAT_1127368e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127368e0);
  return;
}



/* Entry: 105dd11ac; end: 105dd1257; -[SCPreviewFeatureTimerToolbarItemProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd11ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127368ec;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127368f4;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c2705e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105dd1258; end: 105dd129b; -[SCPreviewFeatureTimerToolbarItemProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd1258(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127368f4);
  _objc_destroyWeak(param_1 + _DAT_1127368f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127368ec);
  return;
}



/* Entry: 105dd129c; end: 105dd13ab; +[SCTimePickerHelpers lightningSnapTimeGradientColor] */

void FUN_105dd129c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c22d0 != -1) {
    func_0x00010002a2fc(0x1136c22d0,&PTR___NSConcreteGlobalBlock_1108e98f0);
  }
  uVar1 = uRam00000001136c22c8;
  _objc_retain(uRam00000001136c22c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dd13ac; end: 105dd14bb; +[SCTimePickerHelpers lightningSnapTextGradientColor] */

void FUN_105dd13ac(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c22e0 != -1) {
    func_0x00010002a2fc(0x1136c22e0,&PTR___NSConcreteGlobalBlock_1108e9910);
  }
  uVar1 = uRam00000001136c22d8;
  _objc_retain(uRam00000001136c22d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dd14bc; end: 105dd16b7; +[SCTimePickerHelpers gradientLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd14bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_88 = puVar3;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_80 = puVar3;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_78 = puVar3;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_70 = puVar3;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_68 = puVar3;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(puVar1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  func_0x00010c1bff00(puVar1);
  func_0x00010c209760(0,0,puVar1);
  func_0x00010c196020(0x3ff0000000000000,0x3ff0000000000000,puVar1);
  puVar2 = puVar1;
  func_0x00010c1d4bc0(0x3f800000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  ppuVar10 = &puStack_b0;
  pcStack_98 = FUN_105dd16b8;
  puStack_a8 = PTR_PTR_1126ed198;
  puStack_b0 = puVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_initWithFrame__1125e2948);
  if (ppuVar10 != (undefined **)0x0) {
    *(undefined8 *)((long)ppuVar10 + (long)_DAT_112736900) = 0x4059000000000000;
  }
  return;
}



/* Entry: 105dd16b8; end: 105dd16ff; -[SCTimePickerItemCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd16b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126ed198;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112736900) = 0x4059000000000000;
  }
  return;
}



/* Entry: 105dd1700; end: 105dd18c7; -[SCTimePickerItemCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd1700(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ed198;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  lVar6 = (long)_DAT_112736904;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
  dVar7 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  lVar2 = param_5;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26f000();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c071ae0();
  dVar8 = -10.0;
  if ((int)lVar4 == 0) {
    dVar8 = 0.0;
  }
  dVar9 = (double)(long)((dVar7 - param_1) * 0.5) + dVar8;
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  dVar7 = dVar8;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  _CGRectGetHeight();
  func_0x00010c19f0e0(dVar9,(double)(long)((dVar8 - dVar7) * 0.5) + 6.0,param_3,param_4,
                      *(undefined8 *)(param_5 + lVar6));
  iVar1 = (int)*(undefined8 *)(param_5 + _DAT_112736908);
  func_0x00010c076a40();
  if (iVar1 != 0) {
    puVar5 = PTR_PTR_1126c4b10;
    func_0x00010c098fc0(PTR_PTR_1126c4b10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_5 + lVar6));
    _objc_release(puVar5);
  }
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  dVar7 = dVar9;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  func_0x00010c17a6a0(dVar9,dVar7,*(undefined8 *)(param_5 + _DAT_11273690c));
  return;
}



/* Entry: 105dd18c8; end: 105dd1c73; -[SCTimePickerItemCell setItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd18c8(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar10 = (long)_DAT_112736908;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + lVar10);
  *(undefined **)(param_2 + lVar10) = param_4;
  _objc_release(uVar1);
  puVar2 = param_4;
  func_0x00010c075760();
  if ((int)puVar2 == 0) {
    lVar10 = param_2;
    func_0x00010c271420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_2);
    _objc_release(lVar10);
    puVar2 = param_4;
    func_0x00010c26f000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c071ae0();
    _objc_release(puVar2);
    puVar2 = param_4;
    lVar10 = param_2;
    if ((int)puVar3 == 0) {
      func_0x00010c076a40();
      func_0x00010c26f980(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c271420(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c26f980(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c271420();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar10;
      func_0x00010bfb3a80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010c271420();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c26b920();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar3);
      lVar8 = param_2;
      func_0x00010c271420(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
      _objc_release(lVar8);
      _objc_release(puVar3);
      _objc_release(puVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar10);
    _objc_release(puVar2);
    lVar10 = param_2;
    func_0x00010c271420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d620();
    _objc_release(lVar10);
    func_0x00010c12c960(*(undefined8 *)(param_2 + _DAT_11273690c));
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = param_4;
    func_0x00010c26f980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(param_2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c12c960(*(undefined8 *)(param_2 + _DAT_112736904));
    lVar10 = param_2;
    func_0x00010bfe90c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_2);
    _objc_release(lVar10);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(param_2);
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  if (param_1 == *(double *)(param_4 + _DAT_112736900)) {
    return;
  }
  *(double *)(param_4 + _DAT_112736900) = param_1;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112736904;
  func_0x00010c19e480(*(undefined8 *)(param_4 + lVar9));
  _objc_release(puVar2);
  func_0x00010c23d620(*(undefined8 *)(param_4 + lVar9));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 105dd1c74; end: 105dd1cf3; -[SCTimePickerItemCell setFontPointSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd1c74(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if (param_1 == *(double *)(param_2 + _DAT_112736900)) {
    return;
  }
  *(double *)(param_2 + _DAT_112736900) = param_1;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112736904;
  func_0x00010c19e480(*(undefined8 *)(param_2 + lVar2));
  _objc_release(puVar1);
  func_0x00010c23d620(*(undefined8 *)(param_2 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 105dd1cf4; end: 105dd1dc3; -[SCTimePickerItemCell titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd1cf4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112736904;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar4),param_2,1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(*(undefined8 *)(param_1 + _DAT_112736900),PTR__OBJC_CLASS___UIFont_1126aec38
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105dd1dc4; end: 105dd1e53; -[SCTimePickerItemCell imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd1dc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11273690c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e2a4f8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105dd1e54; end: 105dd1e63; -[SCTimePickerItemCell item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dd1e54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736908);
}



/* Entry: 105dd1e64; end: 105dd1e73; -[SCTimePickerItemCell fontPointSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dd1e64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736900);
}



/* Entry: 105dd1e74; end: 105dd1e83; -[SCTimePickerItemCell isDetailHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105dd1e74(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127368f8);
}



/* Entry: 105dd1e84; end: 105dd1e93; -[SCTimePickerItemCell setDetailHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd1e84(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127368f8) = param_3;
  return;
}



/* Entry: 105dd1e94; end: 105dd1ed3; -[SCTimePickerItemCell setTitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd1e94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112736904;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd1ed4; end: 105dd1f13; -[SCTimePickerItemCell setImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd1ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273690c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd1f14; end: 105dd1f27; -[SCTimePickerItemCell titleLabelTextSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105dd1f14(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_1127368fc);
}



/* Entry: 105dd1f28; end: 105dd1f3b; -[SCTimePickerItemCell setTitleLabelTextSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd1f28(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127368fc;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 105dd1f3c; end: 105dd1f8b; -[SCTimePickerItemCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd1f3c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273690c,0);
  _objc_storeStrong(param_1 + _DAT_112736904,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112736908,0);
  return;
}



/* Entry: 105dd1f8c; end: 105dd253f; -[SCTimePickerViewController initWithSelectedTimeItem:backgroundImageView:showInfinity:showLightningSnaps:lightningSnapsLast:messagingExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105dd1f8c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,long param_8,int param_9,
             undefined1 param_10,undefined1 param_11)

{
  char cVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  double dVar22;
  undefined8 uVar23;
  undefined1 auStack_270 [16];
  undefined8 uStack_260;
  double dStack_250;
  undefined8 *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_f8 = PTR_PTR_1126ed1a0;
  puVar2 = &uStack_100;
  uStack_100 = param_5;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar2 != (undefined8 *)0x0) {
    if (param_8 != 0) {
      _objc_retain(param_8);
      param_2 = param_4;
      func_0x00010bf20c00(param_8);
      uVar23 = 0;
      param_4 = param_2;
      _UIGraphicsBeginImageContextWithOptions(param_3,param_2,0,1);
      _UIGraphicsGetCurrentContext();
      _CGContextGetClipBoundingBox();
      func_0x00010bf89ce0(param_8);
      lVar16 = param_8;
      _objc_release(param_8);
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      _UIGraphicsEndImageContext();
      param_1 = 0.8;
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe6e60(0x3fe999999999999a);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar16);
      uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_112736914);
      *(undefined **)((long)puVar2 + (long)_DAT_112736914) = puVar3;
      _objc_release(uVar4);
      param_3 = uVar23;
    }
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lVar17 = (long)_DAT_112736918;
    *(undefined1 *)((long)puVar2 + lVar17) = param_10;
    lVar16 = (long)_DAT_11273691c;
    *(undefined1 *)((long)puVar2 + lVar16) = param_11;
    puVar5 = PTR_PTR_1126c42c0;
    func_0x00010c084f00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c42c0;
    func_0x00010c084f00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c42c0;
    func_0x00010c084f00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c42c0;
    func_0x00010c084f00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c42c0;
    func_0x00010c084f00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126c42c0;
    func_0x00010c084f00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c42c0;
    func_0x00010c084f00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126c42c0;
    func_0x00010c084f00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126c42c0;
    func_0x00010c084f00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126c42c0;
    func_0x00010c084f00();
    _objc_retainAutoreleasedReturnValue();
    if (param_9 == 0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar20 = PTR_PTR_1126c42c0;
      func_0x00010c084f00();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf0a120();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_112736920;
    uVar4 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined **)((long)puVar2 + lVar18) = puVar3;
    _objc_release(uVar4);
    if (param_9 != 0) {
      _objc_release(puVar20);
    }
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    if (*(char *)((long)puVar2 + lVar17) == '\x01') {
      cVar1 = *(char *)((long)puVar2 + lVar16);
      puVar5 = PTR_PTR_1126c42c0;
      func_0x00010c084f00(PTR_PTR_1126c42c0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126c42c0;
      func_0x00010c084f00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126c42c0;
      func_0x00010c084f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar5 = puVar3;
      if (cVar1 == '\x01') {
        puVar5 = *(undefined **)((long)puVar2 + lVar18);
      }
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar2 + lVar18);
      *(undefined **)((long)puVar2 + lVar18) = puVar5;
      _objc_release(uVar4);
      _objc_release(puVar3);
    }
    if (param_7 != (undefined8 *)0x0) {
      param_1 = 0.0;
      lVar19 = *(long *)((long)puVar2 + lVar18);
      _objc_retain(lVar19);
      lVar16 = lVar19;
      func_0x00010bf52a60();
      lVar17 = lRam0000000000000000;
      while (lVar16 != 0) {
        lVar21 = 0;
        do {
          if (lRam0000000000000000 != lVar17) {
            _objc_enumerationMutation(lVar19);
          }
          uVar23 = *(undefined8 *)(lVar21 * 8);
          uVar4 = uVar23;
          func_0x00010c071ae0();
          if ((int)uVar4 != 0) {
            lVar16 = (long)_DAT_112736924;
            _objc_retain(uVar23);
            uVar4 = *(undefined8 *)((long)puVar2 + lVar16);
            *(undefined8 *)((long)puVar2 + lVar16) = uVar23;
            _objc_release(uVar4);
            goto LAB_105dd2488;
          }
          lVar21 = lVar21 + 1;
        } while (lVar16 != lVar21);
        lVar16 = lVar19;
        func_0x00010bf52a60();
      }
LAB_105dd2488:
      _objc_release(lVar19);
    }
    lVar17 = (long)_DAT_112736924;
    lVar16 = *(long *)((long)puVar2 + lVar17);
    if (lVar16 == 0) {
      lVar16 = *(long *)((long)puVar2 + lVar18);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar16);
    }
    uVar4 = *(undefined8 *)((long)puVar2 + lVar17);
    *(long *)((long)puVar2 + lVar17) = lVar16;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126affa8;
    func_0x00010c22bc20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c108f40();
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  ___stack_chk_fail();
  puStack_238 = PTR_PTR_1126ed1a0;
  puStack_240 = param_7;
  _objc_msgSendSuper2(&puStack_240,PTR_s_viewDidLoad_112684cd8);
  puVar2 = param_7;
  func_0x00010c14e5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    puVar2 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0(puVar3);
    func_0x00010c16e7c0(param_7);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_7;
    func_0x00010c14e5a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_7;
    func_0x00010bf14180(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(puVar15);
    _objc_release(puVar2);
    puVar2 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    puVar15 = param_7;
    dVar22 = param_1;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    param_1 = param_1 / (dVar22 * 0.8);
    _objc_release(puVar15);
    _objc_release(puVar2);
    _CGAffineTransformMakeScale(auStack_270,param_1,param_1);
    puVar2 = param_7;
    func_0x00010bf14180(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(puVar2);
    puVar2 = param_7;
    func_0x00010bf14180(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(puVar2);
    puVar2 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_7;
    func_0x00010bf14180(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar2);
    _objc_release(puVar15);
    _objc_release(puVar2);
    param_1 = dStack_250;
    param_2 = uStack_260;
  }
  puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc(PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0);
  puVar5 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ee20(puVar3);
  func_0x00010c172b80(param_7);
  _objc_release(puVar3);
  _objc_release(puVar5);
  puVar2 = param_7;
  func_0x00010bf1e7e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d4a0();
  _objc_release(puVar2);
  puVar2 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  puVar15 = param_7;
  func_0x00010bf1e7e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(puVar15);
  _objc_release(puVar2);
  puVar2 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_7;
  func_0x00010bf1e7e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar2);
  _objc_release(puVar15);
  _objc_release(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar3);
  func_0x00010c182b00(param_7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_7;
  func_0x00010bf4dce0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d4a0();
  _objc_release(puVar2);
  puVar2 = param_7;
  func_0x00010bf4dce0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(puVar2);
  puVar2 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_7;
  func_0x00010bf4dce0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar2);
  _objc_release(puVar15);
  _objc_release(puVar2);
  puVar2 = param_7;
  func_0x00010bf4dce0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c940();
  _objc_release(puVar2);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c211bc0(param_7);
  _objc_release(puVar3);
  puVar2 = param_7;
  func_0x00010c269020(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(puVar2);
  puVar2 = param_7;
  func_0x00010bf4dce0(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_7;
  func_0x00010c269020(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040(puVar2);
  _objc_release(puVar15);
  _objc_release(puVar2);
  func_0x00010beb0bc0(param_7);
  func_0x00010beafa40(param_7);
  func_0x00010beac840(param_7);
  func_0x00010beb08c0(param_7);
  func_0x00010bedefa0(param_7);
  return param_7;
}



/* Entry: 105dd2540; end: 105dd2a2b; -[SCTimePickerViewController viewDidLoad] */

void FUN_105dd2540(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  double dStack_70;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ed1a0;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLoad_112684cd8);
  lVar1 = param_5;
  func_0x00010c14e5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0(puVar2);
    func_0x00010c16e7c0(param_5);
    _objc_release(puVar2);
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c14e5a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010bf14180(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    lVar3 = param_5;
    dVar5 = param_1;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    param_1 = param_1 / (dVar5 * 0.8);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _CGAffineTransformMakeScale(auStack_90,param_1,param_1);
    lVar1 = param_5;
    func_0x00010bf14180(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010bf14180(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010bf14180(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar1);
    _objc_release(lVar3);
    _objc_release(lVar1);
    param_1 = dStack_70;
    param_2 = uStack_80;
  }
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc(PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0);
  puVar4 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ee20(puVar2);
  func_0x00010c172b80(param_5);
  _objc_release(puVar2);
  _objc_release(puVar4);
  lVar1 = param_5;
  func_0x00010bf1e7e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d4a0();
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar3 = param_5;
  func_0x00010bf1e7e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010bf1e7e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar2);
  func_0x00010c182b00(param_5);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d4a0();
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c940();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c211bc0(param_5);
  _objc_release(puVar2);
  lVar1 = param_5;
  func_0x00010c269020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c269020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010beb0bc0(param_5);
  func_0x00010beafa40(param_5);
  func_0x00010beac840(param_5);
  func_0x00010beb08c0(param_5);
  func_0x00010bedefa0(param_5);
  return;
}



/* Entry: 105dd2a2c; end: 105dd2acf; -[SCTimePickerViewController viewDidAppear:] */

void FUN_105dd2a2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ed1a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bf02e60(param_1);
  uVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f5e0();
  _objc_release(param_1);
  return;
}



/* Entry: 105dd2ad0; end: 105dd2c9f; -[SCTimePickerViewController viewWillLayoutSubviews] */

void FUN_105dd2ad0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ed1a0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewWillLayoutSubviews_112526958);
  uVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  uVar2 = param_2;
  uVar5 = param_1;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  uVar3 = param_2;
  func_0x00010bf14180(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  uVar2 = param_2;
  func_0x00010c084fc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar4 = param_2;
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1827c0(param_1,(double)uVar3 * 54.0);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  uVar2 = param_2;
  func_0x00010c084fc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar4 = param_2;
  func_0x00010bf4d4c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1827c0(param_1,(double)uVar3 * 150.0);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bedefa0(param_2);
  return;
}



/* Entry: 105dd2ca0; end: 105dd2e83; -[SCTimePickerViewController viewDidLayoutSubviews] */

void FUN_105dd2ca0(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ed1a0;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar5 = (param_1 + -54.0) * 0.5;
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = 0.0;
  func_0x00010c181f80(dVar5,0,dVar5,0);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar5 = (dVar5 + -150.0) * 0.5;
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf4d4c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f80(dVar5,0,dVar5,0);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010c084fc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c1598c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfecde0(lVar2);
    dVar6 = (double)lVar4;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822e0(0,dVar6 * 54.0 - dVar5);
  _objc_release(param_2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105dd2e84; end: 105dd305b; -[SCTimePickerViewController viewWillTransitionToSize:withTransitionCoordinator:] */

void FUN_105dd2e84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c279000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c279000(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar1);
  puStack_68 = PTR_PTR_1126ed1a0;
  lStack_70 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&lStack_70,PTR_s_viewWillTransitionToSize_withTra_112685490,
                      param_5);
  lVar1 = param_3;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar3 = param_3;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1598c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecde0();
    _objc_release(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_retain(param_5);
  _objc_retain(lVar2);
  func_0x00010bf02c20(param_5);
  _objc_release(param_5);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(lVar2);
  return;
}



/* Entry: 105dd305c; end: 105dd32ef;  */

void FUN_105dd305c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dStack_80;
  double dStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  dVar7 = (*(double *)(param_1 + 0x40) + -54.0) * 0.5;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c279000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f80(dVar7,0,dVar7,0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar7 = (dVar7 + -150.0) * 0.5;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4d4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f80(dVar7,0,dVar7,0);
  _objc_release(uVar1);
  dVar7 = *(double *)(param_1 + 0x48);
  dVar8 = (double)(long)dVar7;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c279000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c279000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822e0(0,dVar8 * 54.0 - dVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c279000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  func_0x00010bedefa0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bed6d20(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bed7ae0(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x30) == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    dStack_78 = 0.0;
    dStack_80 = 0.0;
    fVar6 = 0.0;
    fVar5 = 0.0;
  }
  else {
    func_0x00010c26a200(&dStack_80);
    fVar5 = (float)dStack_78;
    fVar6 = (float)dStack_80;
  }
  _atan2f(fVar5,fVar6);
  dVar7 = (double)fVar5;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf14180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c296f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf14180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720((0.0001 - dVar7) + (double)fVar5,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220240(uVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110e2a518);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 105dd32f0; end: 105dd3393;  */

void FUN_105dd32f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf14180();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    dStack_38 = 0.0;
    dStack_40 = 0.0;
    uStack_28 = 0;
    uStack_30 = 0;
    dStack_48 = 0.0;
    dStack_50 = 0.0;
  }
  else {
    func_0x00010c27a460(&dStack_50,lVar1);
  }
  _objc_release(lVar1);
  dStack_50 = (double)(long)dStack_50;
  dStack_48 = (double)(long)dStack_48;
  dStack_40 = (double)(long)dStack_40;
  dStack_38 = (double)(long)dStack_38;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf14180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar2);
  return;
}



/* Entry: 105dd3394; end: 105dd3483; -[SCTimePickerViewController animateIn] */

void FUN_105dd3394(long param_1)

{
  undefined8 *puVar1;
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
  
  func_0x00010bf14180();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_60,param_1);
  }
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  puVar1 = &uStack_60;
  _CGAffineTransformEqualToTransform(puVar1,&uStack_90);
  _objc_release(param_1);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010bf03460(0x3fd3333333333333,0,0x3feccccccccccccd,0,PTR__OBJC_CLASS___UIView_1126aec20
                       );
  }
  return;
}



/* Entry: 105dd3484; end: 105dd34df;  */

void FUN_105dd3484(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf14180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 105dd34e0; end: 105dd363f; -[SCTimePickerViewController animateOut:] */

void FUN_105dd34e0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  double dStack_48;
  
  _objc_retain(param_4);
  uVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  uVar3 = param_2;
  dVar4 = param_1;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105dd3640;
  puStack_58 = &UNK_110848c48;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105dd3738;
  puStack_88 = &UNK_110858070;
  uStack_80 = param_2;
  uStack_78 = param_4;
  uStack_50 = param_2;
  dStack_48 = param_1 / (dVar4 * 0.8);
  _objc_retain(param_4);
  func_0x00010bf03460(0x3fd6666666666666,0,0x3feccccccccccccd,0,puVar1,param_3,0,&puStack_70,
                      &puStack_a0);
  _objc_release(uStack_78);
  _objc_release(param_4);
  return;
}



/* Entry: 105dd3640; end: 105dd3737;  */

void FUN_105dd3640(long param_1)

{
  long lVar1;
  undefined8 uVar2;
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
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf14180();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_90,lVar1);
  }
  _CGAffineTransformScale
            (&uStack_60,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28),&uStack_90);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf14180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960();
  _objc_release(uVar2);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1e7e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar2);
  return;
}



/* Entry: 105dd3738; end: 105dd378f;  */

void FUN_105dd3738(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105dd3780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105dd3790; end: 105dd3ad7; -[SCTimePickerViewController _setupTrackingView] */

void FUN_105dd3790(double param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  
  uVar1 = param_2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar7 = (param_1 + -54.0) * 0.5;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc(PTR__OBJC_CLASS___UIScrollView_1126af098);
  uVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar2);
  func_0x00010c219420(param_2,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167a20();
  _objc_release(uVar1);
  uVar8 = *(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8;
  uVar1 = param_2;
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a140(uVar8);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d4a0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = dVar7;
  func_0x00010c181f80(dVar7,0,dVar7,0);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  uVar3 = param_2;
  func_0x00010c084fc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  uVar5 = param_2;
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1827c0(dVar6,(double)uVar4 * 54.0);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c084fc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c1598c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfecde0(uVar1,param_3,uVar3);
  uVar5 = param_2;
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822e0(0,(double)uVar4 * 54.0 - dVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181fc0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar1,param_3,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd3ad8; end: 105dd3eb3; -[SCTimePickerViewController _setupSelectedView] */

void FUN_105dd3ad8(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar6 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  param_1 = param_1 + -150.0;
  dVar8 = param_1 * 0.5;
  uVar7 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  func_0x00010c013de0(0,dVar8,param_1,0x4062c00000000000,puVar1);
  func_0x00010c1fbb20(param_2);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010c15aba0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010c15aba0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d4a0();
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3ff0000000000000,0x3fa999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c15aba0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar6);
  _objc_release(puVar1);
  uVar6 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c15aba0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c18c5e0(param_2);
  _objc_release(puVar1);
  uVar6 = param_2;
  func_0x00010bf6f760(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010bf6f760(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010bf6f760(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c83a0(0x3fb999999999999a);
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4034000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf6f760(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar6);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf6f760(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar6);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14d460();
  uVar6 = 0x4059000000000000;
  uVar7 = 0x4051800000000000;
  if ((int)puVar3 == 0) {
    uVar7 = 0x4059000000000000;
  }
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010bf6f760(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  uVar5 = param_2;
  func_0x00010bf6f760(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(0,0,uVar7,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar6 = param_2;
  func_0x00010c15aba0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010bf6f760(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bed6d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateDetailTimeLabel_1125934f0);
  return;
}



/* Entry: 105dd3eb4; end: 105dd4323; -[SCTimePickerViewController _setupExplainerLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd3eb4(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c198dc0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf9cc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf9cc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf9cc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf9cc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x0001070b0588();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf9cc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf9cc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf9cc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3fe0000000000000);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf9cc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_1;
  func_0x00010c15aba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(uVar2,param_2,uVar3,uVar20);
  _objc_release(uVar20);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf9cc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_1;
  func_0x00010bf9cc40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar20;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493e0(0x3fe0000000000000,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  uStack_80 = uVar5;
  func_0x00010bf9cc40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c15aba0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  uStack_78 = uVar10;
  func_0x00010bf9cc40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x00010c15aba0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar23 = 16.0;
  uVar15 = uVar12;
  func_0x00010bf493c0(uVar12,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar20);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bed7ae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar28 = (dVar23 + -150.0) * 0.5;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc(PTR__OBJC_CLASS___UIScrollView_1126af098);
  uVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar1);
  func_0x00010c182700(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4d4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4d4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4d4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4d4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4d4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d4a0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4d4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  dVar23 = dVar28;
  func_0x00010c181f80(dVar28,0,dVar28,0);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  uVar3 = param_1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar3;
  func_0x00010bf529e0();
  uVar4 = param_1;
  func_0x00010bf4d4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1827c0(dVar28,(double)uVar20 * 150.0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4d4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181fc0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf4d4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4d4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c940();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7a);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar1;
  func_0x00010bf414e0(0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b1198;
  _objc_alloc(PTR_PTR_1126b1198);
  uVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar1);
  func_0x00010c1a4180(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfcda40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d4a0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfcda40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209760(0x3fe0000000000000,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfcda40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  dVar26 = 1.0;
  func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfcda40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar2);
  puVar1 = puVar16;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_168 = puVar1;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar17;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar18 = puVar16;
  puStack_160 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_158 = puVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_168,3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfcda40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar17);
  uVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfcda40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c15aba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar2 = param_1;
  func_0x00010c084fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  dVar28 = 0.0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uVar2 = param_1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf52a60();
  if (uVar3 != 0) {
    lVar21 = 0;
    lVar22 = *plStack_220;
    do {
      uVar20 = 0;
      do {
        if (*plStack_220 != lVar22) {
          _objc_enumerationMutation(uVar2);
        }
        dVar23 = (double)lVar21;
        dVar26 = dVar23 * 150.0;
        uVar4 = param_1;
        func_0x00010c279000(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetWidth();
        _objc_release(uVar4);
        puVar17 = PTR_PTR_1126c4b18;
        _objc_alloc(PTR_PTR_1126c4b18);
        dVar28 = 0.0;
        func_0x00010c013de0(0,dVar26,dVar23,0x4062c00000000000);
        func_0x00010c1b5d40();
        func_0x00010befa120(puVar1,param_2,puVar17);
        uVar4 = param_1;
        func_0x00010bf4d4c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(uVar4);
        lVar21 = lVar21 + 1;
        _objc_release(puVar17);
        uVar20 = uVar20 + 1;
      } while (uVar3 != uVar20);
      uVar3 = uVar2;
      func_0x00010bf52a60(uVar2,param_2,&uStack_230,auStack_1e8,0x10);
    } while (uVar3 != 0);
  }
  _objc_release(uVar2);
  puVar17 = puVar1;
  func_0x00010bf51e00();
  uVar19 = *(undefined8 *)(param_1 + (long)_DAT_112736928);
  *(undefined **)(param_1 + (long)_DAT_112736928) = puVar17;
  _objc_release(uVar19);
  _objc_release(puVar1);
  _objc_release(puVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar16;
  func_0x00010c279000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  puVar17 = puVar16;
  dVar25 = dVar26;
  func_0x00010c279000(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  dVar26 = dVar26 + dVar28;
  _objc_release(puVar17);
  _objc_release(puVar1);
  puVar1 = puVar16;
  func_0x00010c279000(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  puVar17 = puVar16;
  dVar24 = dVar28;
  func_0x00010c279000(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  puVar18 = puVar16;
  dVar27 = dVar23;
  func_0x00010c279000(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar1);
  puVar1 = puVar16;
  func_0x00010c279000(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0();
  dVar28 = dVar25 - (dVar28 - (dVar23 + dVar24));
  dVar26 = dVar26 / dVar28;
  _objc_release(puVar1);
  puVar1 = puVar16;
  func_0x00010bf4d4c0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  puVar17 = puVar16;
  dVar23 = dVar28;
  func_0x00010bf4d4c0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  puVar18 = puVar16;
  func_0x00010bf4d4c0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar1);
  puVar1 = puVar16;
  func_0x00010bf4d4c0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0();
  dVar25 = dVar25 - (dVar28 - (dVar27 + dVar23));
  dVar26 = dVar26 * dVar25;
  _objc_release(puVar1);
  puVar1 = puVar16;
  func_0x00010bf4d4c0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  func_0x00010bf4d4c0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822e0(0,dVar26 - dVar25);
  _objc_release(puVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dd4324; end: 105dd4a4b; -[SCTimePickerViewController _setupTimeItemViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd4324(double param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_128 [128];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar17 = (param_1 + -150.0) * 0.5;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc(PTR__OBJC_CLASS___UIScrollView_1126af098);
  uVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar2);
  func_0x00010c182700(param_2,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf4d4c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf4d4c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf4d4c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf4d4c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf4d4c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d4a0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf4d4c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  dVar12 = dVar17;
  func_0x00010c181f80(dVar17,0,dVar17,0);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  uVar3 = param_2;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf529e0();
  uVar4 = param_2;
  func_0x00010bf4d4c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1827c0(dVar17,(double)uVar9 * 150.0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf4d4c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181fc0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf4d4c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf4d4c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c940();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x7a);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf414e0(0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1198;
  _objc_alloc(PTR_PTR_1126b1198);
  uVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar2);
  func_0x00010c1a4180(param_2,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfcda40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d4a0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfcda40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209760(0x3fe0000000000000,0);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfcda40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  dVar15 = 1.0;
  func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfcda40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  puVar2 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_a8 = puVar2;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = puVar5;
  puStack_a0 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_a8,3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfcda40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(puVar6);
  uVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bfcda40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = param_2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c15aba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3,param_3,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar3 = param_2;
  func_0x00010c084fc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  dVar17 = 0.0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uVar1 = param_2;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf52a60();
  if (uVar3 != 0) {
    lVar10 = 0;
    lVar11 = *plStack_160;
    do {
      uVar9 = 0;
      do {
        if (*plStack_160 != lVar11) {
          _objc_enumerationMutation(uVar1);
        }
        dVar12 = (double)lVar10;
        dVar15 = dVar12 * 150.0;
        uVar4 = param_2;
        func_0x00010c279000(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetWidth();
        _objc_release(uVar4);
        puVar6 = PTR_PTR_1126c4b18;
        _objc_alloc(PTR_PTR_1126c4b18);
        dVar17 = 0.0;
        func_0x00010c013de0(0,dVar15,dVar12,0x4062c00000000000);
        func_0x00010c1b5d40();
        func_0x00010befa120(puVar2,param_3,puVar6);
        uVar4 = param_2;
        func_0x00010bf4d4c0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(uVar4);
        lVar10 = lVar10 + 1;
        _objc_release(puVar6);
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
      uVar3 = uVar1;
      func_0x00010bf52a60(uVar1,param_3,&uStack_170,auStack_128,0x10);
    } while (uVar3 != 0);
  }
  _objc_release(uVar1);
  puVar6 = puVar2;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(param_2 + (long)_DAT_112736928);
  *(undefined **)(param_2 + (long)_DAT_112736928) = puVar6;
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar5;
  func_0x00010c279000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  puVar6 = puVar5;
  dVar14 = dVar15;
  func_0x00010c279000(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  dVar15 = dVar15 + dVar17;
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010c279000(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  puVar6 = puVar5;
  dVar13 = dVar17;
  func_0x00010c279000(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  puVar7 = puVar5;
  dVar16 = dVar12;
  func_0x00010c279000(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010c279000(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0();
  dVar17 = dVar14 - (dVar17 - (dVar12 + dVar13));
  dVar15 = dVar15 / dVar17;
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010bf4d4c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  puVar6 = puVar5;
  dVar12 = dVar17;
  func_0x00010bf4d4c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  puVar7 = puVar5;
  func_0x00010bf4d4c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010bf4d4c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0();
  dVar14 = dVar14 - (dVar17 - (dVar16 + dVar12));
  dVar15 = dVar15 * dVar14;
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010bf4d4c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  func_0x00010bf4d4c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822e0(0,dVar15 - dVar14);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105dd4a4c; end: 105dd4c43; -[SCTimePickerViewController _updatecontentScrollViewOffset] */

void FUN_105dd4a4c(double param_1,double param_2,double param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = param_4;
  func_0x00010c279000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  uVar2 = param_4;
  dVar6 = param_2;
  func_0x00010c279000(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  param_2 = param_2 + param_1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c279000(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  uVar2 = param_4;
  dVar4 = param_1;
  func_0x00010c279000(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  uVar3 = param_4;
  dVar7 = param_3;
  func_0x00010c279000(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c279000(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0();
  dVar5 = dVar6 - (param_1 - (param_3 + dVar4));
  param_2 = param_2 / dVar5;
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf4d4c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  uVar2 = param_4;
  dVar4 = dVar5;
  func_0x00010bf4d4c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  uVar3 = param_4;
  func_0x00010bf4d4c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf4d4c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0();
  dVar6 = dVar6 - (dVar5 - (dVar7 + dVar4));
  param_2 = param_2 * dVar6;
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf4d4c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  func_0x00010bf4d4c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822e0(0,param_2 - dVar6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd4c44; end: 105dd4eaf; -[SCTimePickerViewController _updateDetailTimeLabel] */

void FUN_105dd4c44(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = param_4;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1553e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf6f760(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076a40();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126c4b10;
    func_0x00010c098fa0(PTR_PTR_1126c4b10);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_4;
  func_0x00010bf6f760(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar1);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c292ae0();
  _objc_release(puVar4);
  uVar1 = param_4;
  func_0x00010bf6f760(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  uVar3 = param_4;
  if (puVar5 == (undefined *)0x1) {
    func_0x00010c213040();
    _objc_release(uVar1);
    func_0x00010bf6f760(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidX();
    dVar6 = param_1 + 20.0;
    func_0x00010c15aba0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidY();
    func_0x00010bf6f760(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar6,param_1);
    uVar1 = param_4;
  }
  else {
    func_0x00010c213040();
    _objc_release(uVar1);
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar6 = -20.0;
    func_0x00010bf6f760(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidX();
    dVar7 = (param_3 + -20.0) - dVar6;
    uVar1 = param_4;
    func_0x00010c15aba0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidY();
    func_0x00010bf6f760(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar7,dVar6);
    _objc_release(param_4);
  }
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105dd4eb0; end: 105dd4f13; -[SCTimePickerViewController _updateExplainerLabelVisibility] */

void FUN_105dd4eb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075760();
  func_0x00010bf9cc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd4f14; end: 105dd54b3; -[SCTimePickerViewController _updateScrollOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd4f14(double param_1,double param_2,double param_3,double param_4,undefined *param_5,
                  undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *unaff_x24;
  undefined **unaff_x25;
  long lVar13;
  undefined *unaff_x26;
  undefined *puVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  double dStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  double dStack_288;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  double dStack_268;
  undefined *puStack_260;
  undefined **ppuStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined *puStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bee5160();
  puVar10 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_5;
  func_0x00010c15aba0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  puVar11 = param_5;
  func_0x00010bf4d4c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar17 = param_1;
  dVar18 = param_2;
  dVar22 = param_3;
  dVar20 = param_4;
  func_0x00010bf51460(puVar10,param_6,puVar11);
  dStack_1f0 = dVar20;
  dStack_1e8 = dVar22;
  dStack_1e0 = dVar18;
  dStack_1d8 = dVar17;
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar10);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar20 = *(double *)PTR__CGPointZero_110347540;
  dVar22 = *(double *)(PTR__CGPointZero_110347540 + 8);
  puVar10 = param_5;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf529e0();
  _objc_release(puVar10);
  puVar14 = (undefined *)0x0;
  if (puVar11 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    param_1 = 3.4028234663852886e+38;
    param_4 = 0.0;
    unaff_x25 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      func_0x00010bf34660(param_5,param_6,puVar11);
      dVar16 = dStack_1d8;
      _CGRectGetMidY(dStack_1d8,dStack_1e0,dStack_1e8,dStack_1f0);
      dVar16 = dVar16 - dVar18;
      param_2 = -dVar16;
      param_3 = param_2;
      if (0.0 <= dVar16) {
        param_3 = dVar16;
      }
      puVar12 = param_5;
      func_0x00010bf4dce0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      dVar16 = param_3 / dVar16;
      _objc_release(puVar12);
      if (dVar16 <= 0.0) {
        dVar16 = 0.0;
      }
      dVar18 = 1.0;
      dVar21 = 1.0;
      if (dVar16 <= 1.0) {
        dVar21 = dVar16;
      }
      dVar21 = 1.0 - dVar21;
      if (param_3 < param_1) {
        dVar22 = dStack_1d8;
        dVar18 = dStack_1e0;
        _CGRectGetMidY(dStack_1d8,dStack_1e0,dStack_1e8,dStack_1f0);
        dVar22 = dVar22 + dVar21 * param_2;
        puVar14 = puVar11;
        param_1 = param_3;
        dVar20 = dVar17;
      }
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_6,puVar12);
      _objc_release(puVar12);
      puVar11 = puVar11 + 1;
      puVar12 = param_5;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = puVar12;
      func_0x00010bf529e0();
      _objc_release(puVar12);
      dVar17 = dVar21;
    } while (puVar11 < unaff_x24);
  }
  puVar12 = param_5;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar12;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb200(param_5,param_6,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar12);
  dVar17 = 0.0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  puVar3 = param_5;
  func_0x00010c29f7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = &uStack_170;
  puStack_208 = puVar3;
  func_0x00010bf52a60();
  puStack_1f8 = puVar3;
  if (puVar3 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    lStack_200 = *plStack_160;
    param_1 = 1.0;
    param_2 = 150.0;
    param_3 = 0.5;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_160 != lStack_200) {
          _objc_enumerationMutation(puStack_208);
        }
        unaff_x25 = *(undefined ***)(lStack_168 + (long)puVar12 * 8);
        func_0x00010bf34660(param_5,param_6,puVar11);
        dVar17 = dStack_1d8;
        _CGRectGetMidY(dStack_1d8,dStack_1e0,dStack_1e8,dStack_1f0);
        param_4 = dVar17 - dVar18;
        unaff_x26 = puVar2;
        func_0x00010c0dfd40(puVar2,param_6,puVar11);
        fVar15 = SUB84(dVar17,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        _objc_release(unaff_x26);
        _CGAffineTransformMakeScale(&uStack_1a0,(double)fVar15,(double)fVar15);
        uStack_1c8 = uStack_198;
        uStack_1d0 = uStack_1a0;
        uStack_1b8 = uStack_188;
        uStack_1c0 = uStack_190;
        uStack_1a8 = uStack_178;
        uStack_1b0 = uStack_180;
        func_0x00010c219960(unaff_x25,param_6,&uStack_1d0);
        dVar17 = -param_4;
        if (0.0 <= param_4) {
          dVar17 = param_4;
        }
        dVar17 = dVar17 / 1000.0;
        if (dVar17 <= 0.0) {
          dVar17 = 0.0;
        }
        dVar16 = 1.0;
        if (dVar17 <= 1.0) {
          dVar16 = dVar17;
        }
        dVar16 = 1.0 - dVar16;
        func_0x00010c1677c0(unaff_x25);
        dVar18 = dVar22;
        if ((long)puVar11 < (long)puVar14) {
          puVar10 = (undefined *)0x0;
          puVar3 = puVar14;
          do {
            fVar15 = SUB84(dVar16,0);
            puVar4 = puVar2;
            func_0x00010c0dfd40(puVar2,param_6,puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            param_4 = (double)fVar15 * 150.0;
            _objc_release(puVar4);
            dVar16 = param_4 * 0.5;
            if (puVar11 != puVar3 && puVar10 != (undefined *)0x0) {
              dVar16 = param_4;
            }
            dVar18 = dVar18 - dVar16;
            puVar10 = puVar10 + 1;
            unaff_x26 = puVar3 + -1;
            bVar1 = (long)puVar11 < (long)puVar3;
            puVar3 = unaff_x26;
          } while (bVar1);
        }
        else if ((long)puVar14 < (long)puVar11) {
          lVar13 = 0;
          puVar10 = puVar11 + 1;
          unaff_x26 = puVar14;
          do {
            fVar15 = SUB84(dVar16,0);
            puVar3 = puVar2;
            func_0x00010c0dfd40(puVar2,param_6,unaff_x26);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            param_4 = (double)fVar15 * 150.0;
            _objc_release(puVar3);
            dVar16 = param_4 * 0.5;
            if (puVar11 != unaff_x26 && lVar13 != 0) {
              dVar16 = param_4;
            }
            dVar18 = dVar18 + dVar16;
            unaff_x26 = unaff_x26 + 1;
            lVar13 = lVar13 + -1;
          } while (puVar10 != unaff_x26);
        }
        dVar17 = dVar20;
        func_0x00010c17a6a0(unaff_x25);
        if ((param_5[_DAT_112736918] == '\x01') && (param_5[_DAT_11273691c] == '\x01')) {
          unaff_x26 = param_5;
          func_0x00010c1598c0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = unaff_x26;
          func_0x00010c075760();
          if (((ulong)puVar3 & 1) == 0) {
            _objc_release(unaff_x26);
          }
          else {
            ppuVar5 = unaff_x25;
            func_0x00010c0840e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar5;
            func_0x00010c076a40();
            _objc_release(ppuVar5);
            _objc_release(unaff_x26);
            if ((int)ppuVar6 != 0) {
              func_0x00010bfb68e0(unaff_x25);
              dVar18 = dVar18 + 100.0;
              func_0x00010c19f0e0(unaff_x25);
            }
          }
        }
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      } while (puVar12 != puStack_1f8);
      puVar8 = &uStack_170;
      puVar3 = puStack_208;
      func_0x00010bf52a60();
      unaff_x24 = puVar14;
      puStack_1f8 = puVar3;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puStack_208);
  puVar14 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_218 = FUN_105dd54b4;
  dStack_280 = param_4;
  dStack_278 = param_3;
  dStack_270 = param_2;
  dStack_268 = param_1;
  puStack_260 = unaff_x26;
  ppuStack_258 = unaff_x25;
  puStack_250 = unaff_x24;
  puStack_248 = puVar11;
  puStack_240 = puVar12;
  puStack_238 = puVar10;
  puStack_230 = puVar2;
  puStack_228 = param_5;
  puStack_220 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  puVar10 = puVar14;
  func_0x00010bf4dce0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(puVar8,param_6,puVar10);
  dVar22 = dVar17;
  dVar20 = dVar18;
  _objc_release(puVar10);
  puVar7 = puVar8;
  func_0x00010c252440();
  if (puVar7 == (undefined8 *)0x1) {
    dVar20 = dVar18;
    func_0x00010c1a2e60(puVar14);
    puVar10 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd3760();
    _objc_release(puVar10);
    dVar22 = dVar17;
  }
  puVar10 = puVar14;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar14;
  func_0x00010c1598c0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bfecde0(puVar10,param_6,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar10);
  func_0x00010bfc18a0(puVar14);
  func_0x00010bfc18a0(puVar14);
  dVar20 = dVar18 - dVar20;
  if (0.0 <= dVar20) {
    puVar10 = puVar14;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    func_0x00010bf529e0();
    _objc_release(puVar10);
    puVar10 = puVar14;
    func_0x00010c29bf00(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar17 = (dVar22 + -100.0) - dVar18;
    _objc_release(puVar10);
    puVar10 = puVar2 + -(long)puVar11;
  }
  else {
    dVar17 = dVar18 + -100.0;
    puVar10 = puVar11;
    if (dVar17 <= 0.0) {
      dVar17 = 0.0;
    }
  }
  dVar17 = (double)NEON_fminnm(dVar17 / (double)(long)puVar10,0x402e000000000000);
  if (dVar17 <= 2.0) {
    dVar17 = 2.0;
  }
  dVar22 = -dVar20;
  if (0.0 <= dVar20) {
    dVar22 = dVar20;
  }
  dVar21 = 10.0;
  dVar16 = 1.0 - 1.0 / ((dVar22 * 0.55) / 10.0 + 1.0);
  dVar22 = -(dVar16 * 10.0);
  if (0.0 <= dVar20) {
    dVar22 = dVar16 * 10.0;
  }
  func_0x00010c14dfa0(puVar8);
  dVar21 = dVar21 / 300.0;
  dVar19 = -dVar21;
  dVar16 = dVar19;
  if (0.0 <= dVar21) {
    dVar16 = dVar21;
  }
  dVar17 = (dVar20 * dVar16) / dVar17;
  lVar13 = (long)dVar17;
  puVar10 = puVar14;
  func_0x00010c279000(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0();
  puVar2 = puVar14;
  dVar20 = dVar19;
  func_0x00010bf4d4c0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0();
  _objc_release(puVar2);
  _objc_release(puVar10);
  dVar22 = dVar22 * (dVar19 / dVar20);
  puVar10 = puVar14;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  func_0x00010bf529e0();
  if ((puVar11 != puVar2 + -1) || (dVar22 <= 0.0)) {
    _objc_release(puVar10);
    if ((puVar11 != (undefined *)0x0) || (0.0 <= dVar22)) goto LAB_105dd5780;
  }
  else {
    _objc_release(puVar10);
  }
  puVar10 = puVar14;
  func_0x00010bf4dce0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(puVar8,param_6,puVar10);
  func_0x00010c1a2e60(puVar14);
  _objc_release(puVar10);
  dVar22 = 0.0;
LAB_105dd5780:
  if (lVar13 == 0) {
    puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2e0 = 0xc2000000;
    uStack_2d8 = 0x105dd5970;
    puStack_2d0 = &UNK_110858dc0;
    puStack_2c8 = puVar14;
    puStack_2c0 = puVar11;
    dStack_2b8 = dVar22;
    func_0x00010bf03400(0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_6,&puStack_2e8);
  }
  else {
    uVar9 = (ulong)(0 < lVar13);
    if (lVar13 < 0) {
      uVar9 = 0xffffffffffffffff;
    }
    puVar12 = (undefined *)
              ((ulong)(puVar11 + uVar9) & ((long)(puVar11 + uVar9) >> 0x3f ^ 0xffffffffffffffffU));
    puVar10 = puVar14;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    func_0x00010bf529e0();
    _objc_release(puVar10);
    puVar10 = puVar2 + -1;
    if (puVar12 <= puVar2 + -1) {
      puVar10 = puVar12;
    }
    if (puVar10 != puVar11) {
      puVar2 = puVar14;
      func_0x00010c279000(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4c7c0();
      _objc_release(puVar2);
      puStack_2b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2a8 = 0xc2000000;
      pcStack_2a0 = FUN_105dd5928;
      puStack_298 = &UNK_110848c48;
      puStack_290 = puVar14;
      dStack_288 = (double)puVar10 * 54.0 - dVar17;
      func_0x00010bf03460(0x3fd0000000000000,0,0x3feccccccccccccd,0,
                          PTR__OBJC_CLASS___UIView_1126aec20,param_6,0,&puStack_2b0,0);
    }
    func_0x00010c1a2e60(0,dVar18 - dVar22,puVar14);
  }
  puVar7 = puVar8;
  func_0x00010c252440();
  if ((puVar7 == (undefined8 *)0x3) ||
     (puVar7 = puVar8, func_0x00010c252440(), puVar7 == (undefined8 *)0x4)) {
    puVar10 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd3740();
    _objc_release(puVar10);
  }
  _objc_release(puVar8);
  return;
}



/* Entry: 105dd54b4; end: 105dd5927; -[SCTimePickerViewController updateSelectionWithGesture:] */

void FUN_105dd54b4(double param_1,double param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  double dStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  double dStack_78;
  
  _objc_retain(param_5);
  uVar4 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5,param_4,uVar4);
  dVar7 = param_1;
  dVar11 = param_2;
  _objc_release(uVar4);
  lVar6 = param_5;
  func_0x00010c252440();
  if (lVar6 == 1) {
    dVar11 = param_2;
    func_0x00010c1a2e60(param_3);
    puVar1 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd3760();
    _objc_release(puVar1);
    dVar7 = param_1;
  }
  uVar4 = param_3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c1598c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bfecde0(uVar4,param_4,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  func_0x00010bfc18a0(param_3);
  func_0x00010bfc18a0(param_3);
  dVar11 = param_2 - dVar11;
  if (0.0 <= dVar11) {
    uVar4 = param_3;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf529e0();
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar7 = (dVar7 + -100.0) - param_2;
    _objc_release(uVar4);
    uVar4 = uVar2 - uVar3;
  }
  else {
    dVar7 = param_2 + -100.0;
    uVar4 = uVar3;
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
    }
  }
  dVar7 = (double)NEON_fminnm(dVar7 / (double)(long)uVar4,0x402e000000000000);
  if (dVar7 <= 2.0) {
    dVar7 = 2.0;
  }
  dVar12 = -dVar11;
  if (0.0 <= dVar11) {
    dVar12 = dVar11;
  }
  dVar9 = 10.0;
  dVar8 = 1.0 - 1.0 / ((dVar12 * 0.55) / 10.0 + 1.0);
  dVar12 = -(dVar8 * 10.0);
  if (0.0 <= dVar11) {
    dVar12 = dVar8 * 10.0;
  }
  func_0x00010c14dfa0(param_5);
  dVar9 = dVar9 / 300.0;
  dVar10 = -dVar9;
  dVar8 = dVar10;
  if (0.0 <= dVar9) {
    dVar8 = dVar9;
  }
  dVar7 = (dVar11 * dVar8) / dVar7;
  lVar6 = (long)dVar7;
  uVar4 = param_3;
  func_0x00010c279000(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0();
  uVar2 = param_3;
  dVar11 = dVar10;
  func_0x00010bf4d4c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0();
  _objc_release(uVar2);
  _objc_release(uVar4);
  dVar12 = dVar12 * (dVar10 / dVar11);
  uVar4 = param_3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf529e0();
  if ((uVar3 != uVar2 - 1) || (dVar12 <= 0.0)) {
    _objc_release(uVar4);
    if ((uVar3 != 0) || (0.0 <= dVar12)) goto LAB_105dd5780;
  }
  else {
    _objc_release(uVar4);
  }
  uVar4 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5,param_4,uVar4);
  func_0x00010c1a2e60(param_3);
  _objc_release(uVar4);
  dVar12 = 0.0;
LAB_105dd5780:
  if (lVar6 == 0) {
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x105dd5970;
    puStack_c0 = &UNK_110858dc0;
    uStack_b8 = param_3;
    uStack_b0 = uVar3;
    dStack_a8 = dVar12;
    func_0x00010bf03400(0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_4,&puStack_d8);
  }
  else {
    uVar4 = (ulong)(0 < lVar6);
    if (lVar6 < 0) {
      uVar4 = 0xffffffffffffffff;
    }
    uVar5 = uVar4 + uVar3 & ((long)(uVar4 + uVar3) >> 0x3f ^ 0xffffffffffffffffU);
    uVar4 = param_3;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf529e0();
    _objc_release(uVar4);
    uVar4 = uVar2 - 1;
    if (uVar5 <= uVar2 - 1) {
      uVar4 = uVar5;
    }
    if (uVar4 != uVar3) {
      uVar2 = param_3;
      func_0x00010c279000(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4c7c0();
      _objc_release(uVar2);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_105dd5928;
      puStack_88 = &UNK_110848c48;
      uStack_80 = param_3;
      dStack_78 = (double)uVar4 * 54.0 - dVar7;
      func_0x00010bf03460(0x3fd0000000000000,0,0x3feccccccccccccd,0,
                          PTR__OBJC_CLASS___UIView_1126aec20,param_4,0,&puStack_a0,0);
    }
    func_0x00010c1a2e60(0,param_2 - dVar12,param_3);
  }
  lVar6 = param_5;
  func_0x00010c252440();
  if ((lVar6 == 3) || (lVar6 = param_5, func_0x00010c252440(), lVar6 == 4)) {
    puVar1 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd3740();
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 105dd5928; end: 105dd59f3;  */

void FUN_105dd5928(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c279000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822e0(0,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd59f4; end: 105dd5adb; -[SCTimePickerViewController setSelectedItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd59f4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 != lVar3) {
    lVar3 = (long)_DAT_112736924;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar1);
    if (*(long *)(param_1 + lVar3) != 0) {
      puVar2 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
      _objc_release(puVar2);
    }
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105dd5adc;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dd5adc; end: 105dd5b03;  */

void FUN_105dd5adc(long param_1)

{
  func_0x00010bed6d20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bed7af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateExplainerLabelVisibility_112593860);
  return;
}



/* Entry: 105dd5b04; end: 105dd5b5f; -[SCTimePickerViewController itemIndexForLocation:] */

ulong FUN_105dd5b04(undefined8 param_1,double param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (long)(param_2 / 54.0) & ((long)(param_2 / 54.0) >> 0x3f ^ 0xffffffffffffffffU);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  uVar1 = lVar2 - 1U;
  if (uVar3 <= lVar2 - 1U) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Entry: 105dd5b60; end: 105dd5bbb; -[SCTimePickerViewController scaledItemIndexForLocation:] */

ulong FUN_105dd5b60(undefined8 param_1,double param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (long)(param_2 / 150.0) & ((long)(param_2 / 150.0) >> 0x3f ^ 0xffffffffffffffffU);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  uVar1 = lVar2 - 1U;
  if (uVar3 <= lVar2 - 1U) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Entry: 105dd5bbc; end: 105dd5c3b; -[SCTimePickerViewController selectedTime] */

void FUN_105dd5bbc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c084fc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105dd5c3c; end: 105dd5ca3; -[SCTimePickerViewController centerForItemAtIndex:] */

undefined1  [16]
FUN_105dd5c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf4d4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  _objc_release(param_2);
  auVar1._8_8_ = (double)param_4 * 150.0 + 75.0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 105dd5ca4; end: 105dd5eeb; -[SCTimePickerViewController tapped:] */

void FUN_105dd5ca4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf4d4c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  _objc_release(param_5);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf4d4c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf4d4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe3a40(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf4d4c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c4b18;
  _objc_opt_class(PTR_PTR_1126c4b18);
  uVar1 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_3;
    func_0x00010c29f7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfecde0();
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c1598c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bfecde0();
    _objc_release(uVar5);
    _objc_release(uVar1);
    if (uVar4 != uVar6) {
      func_0x00010bf03460(0x3fd6666666666666,0,0x3feccccccccccccd,0,
                          PTR__OBJC_CLASS___UIView_1126aec20);
      goto LAB_105dd5ec8;
    }
  }
  uVar1 = param_3;
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15a200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f5c0(uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
LAB_105dd5ec8:
  _objc_release(uVar2);
  return;
}



/* Entry: 105dd5eec; end: 105dd5f67;  */

void FUN_105dd5eec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = *(double *)(param_1 + 0x28);
  dVar4 = (double)(long)dVar3;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c279000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c279000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822e0(0,dVar4 * 54.0 - dVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd5f68; end: 105dd5f9f; -[SCTimePickerViewController scrollViewWillBeginDragging:] */

void FUN_105dd5f68(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd3760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dd5fa0; end: 105dd5fdf; -[SCTimePickerViewController scrollViewDidEndDragging:willDecelerate:] */

void FUN_105dd5fa0(void)

{
  undefined *puVar1;
  uint in_w3;
  
  if ((in_w3 & 1) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd3740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dd5fe0; end: 105dd5fe3; -[SCTimePickerViewController scrollViewDidScroll:] */

void FUN_105dd5fe0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedefb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateScrollOffset_112595590);
  return;
}



/* Entry: 105dd5fe4; end: 105dd6093; -[SCTimePickerViewController scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

void FUN_105dd5fe4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long lVar1;
  double dVar2;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010c279000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(lVar1);
  dVar2 = 0.0;
  func_0x00010c084660(0,(double)param_5[1] + param_1 * 0.5 + -1.0);
  func_0x00010bf4c7c0(param_4);
  _objc_release(param_4);
  *param_5 = 0;
  param_5[1] = (double)param_2 * 54.0 - dVar2;
  return;
}



/* Entry: 105dd6094; end: 105dd61a7; -[SCTimePickerViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

bool FUN_105dd6094(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c269020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  if (param_3 != lVar2) {
    bVar1 = false;
    goto LAB_105dd6188;
  }
  lVar3 = param_1;
  func_0x00010c279000();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c070ea0();
  if ((int)lVar4 == 0) {
LAB_105dd6134:
    lVar5 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c279000(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar5 == param_1;
    _objc_release();
    _objc_release(lVar5);
    if ((int)lVar4 != 0) goto LAB_105dd6178;
  }
  else {
    lVar2 = param_1;
    func_0x00010c279000();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c070400();
    if ((int)lVar5 != 0) goto LAB_105dd6134;
    bVar1 = false;
LAB_105dd6178:
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
LAB_105dd6188:
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 105dd61a8; end: 105dd61c7; -[SCTimePickerViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd61a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273692c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dd61c8; end: 105dd61db; -[SCTimePickerViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd61c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273692c,param_3);
  return;
}



/* Entry: 105dd61dc; end: 105dd61eb; -[SCTimePickerViewController contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dd61dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736930);
}



/* Entry: 105dd61ec; end: 105dd622b; -[SCTimePickerViewController setContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd61ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112736930;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd622c; end: 105dd623b; -[SCTimePickerViewController contentScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dd622c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736934);
}



/* Entry: 105dd623c; end: 105dd627b; -[SCTimePickerViewController setContentScrollView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd623c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112736934;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd627c; end: 105dd628b; -[SCTimePickerViewController trackingScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dd627c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736938);
}



/* Entry: 105dd628c; end: 105dd62cb; -[SCTimePickerViewController setTrackingScrollView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd628c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112736938;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd62cc; end: 105dd62db; -[SCTimePickerViewController backgroundImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dd62cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273693c);
}



/* Entry: 105dd62dc; end: 105dd631b; -[SCTimePickerViewController setBackgroundImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd62dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273693c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd631c; end: 105dd632b; -[SCTimePickerViewController scaledBackgroundImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dd631c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736914);
}



/* Entry: 105dd632c; end: 105dd636b; -[SCTimePickerViewController setScaledBackgroundImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd632c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112736914;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd636c; end: 105dd637b; -[SCTimePickerViewController blurView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dd636c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736940);
}



/* Entry: 105dd637c; end: 105dd63bb; -[SCTimePickerViewController setBlurView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd637c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112736940;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd63bc; end: 105dd63cb; -[SCTimePickerViewController selectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dd63bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736944);
}



/* Entry: 105dd63cc; end: 105dd640b; -[SCTimePickerViewController setSelectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd63cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112736944;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd640c; end: 105dd641b; -[SCTimePickerViewController gradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dd640c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736948);
}



/* Entry: 105dd641c; end: 105dd645b; -[SCTimePickerViewController setGradientView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd641c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112736948;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd645c; end: 105dd646b; -[SCTimePickerViewController detailTimeLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dd645c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273694c);
}



/* Entry: 105dd646c; end: 105dd64ab; -[SCTimePickerViewController setDetailTimeLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd646c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273694c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd64ac; end: 105dd64bb; -[SCTimePickerViewController explainerLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dd64ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736950);
}



/* Entry: 105dd64bc; end: 105dd64fb; -[SCTimePickerViewController setExplainerLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd64bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112736950;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd64fc; end: 105dd650b; -[SCTimePickerViewController items] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dd64fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736920);
}



/* Entry: 105dd650c; end: 105dd6517; -[SCTimePickerViewController setItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd650c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105dd6518; end: 105dd6527; -[SCTimePickerViewController views] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dd6518(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736928);
}



/* Entry: 105dd6528; end: 105dd6533; -[SCTimePickerViewController setViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd6528(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}


