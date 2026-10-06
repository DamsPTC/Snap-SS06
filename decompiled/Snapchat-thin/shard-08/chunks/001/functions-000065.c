/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105cd9174; end: 105cd91c7; -[SCSpectaclesAuxiliaryContentPreloader _fileRestoringNotifier] */

void FUN_105cd9174(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c3c48;
  _objc_alloc(PTR_PTR_1126c3c48);
  func_0x00010c02f0e0();
  puVar2 = puVar1;
  func_0x00010bc7cf3c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105cd91c8; end: 105cd9287; -[SCSpectaclesAuxiliaryContentPreloader _transitToState:serviceTerm:] */

void FUN_105cd91c8(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010be41400();
  if (((ulong)puVar1 & 1) == 0) {
    if (param_3 == 0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
      func_0x00010bf69ba0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 1) {
      *(undefined8 *)(param_1 + 0x50) = 1;
      param_1 = PTR_PTR_1126c3c50;
      func_0x00010bf69d80(PTR_PTR_1126c3c50);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_3 != 2) goto LAB_105cd9274;
      *(undefined8 *)(param_1 + 0x50) = 2;
      func_0x00010be159e0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf95760(param_4,param_2,param_1);
    _objc_release(param_1);
  }
LAB_105cd9274:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105cd9288; end: 105cd934b; -[SCSpectaclesAuxiliaryContentPreloader _fetchAllEntriesWithServiceTerm:] */

void FUN_105cd9288(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be41400();
  puVar3 = PTR_PTR_1126af4c0;
  if ((uVar1 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa9160(puVar3,param_2,uVar5,0,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + 0x58);
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    func_0x00010becef40(param_1,param_2,lVar4 != 0,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cd934c; end: 105cd9597; -[SCSpectaclesAuxiliaryContentPreloader _processEntryWithServiceTerm:] */

void FUN_105cd934c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be41400();
  if ((uVar1 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 0x68);
    uVar1 = *(ulong *)(param_1 + 0x58);
    func_0x00010bf529e0();
    if (uVar7 < uVar1) {
      do {
        puVar4 = PTR_PTR_1126af4d0;
        uVar2 = *(undefined8 *)(param_1 + 0x58);
        func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + 0x68));
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7380(puVar4,param_2,uVar2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bfaea20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        puVar4 = puVar5;
        func_0x00010bf529e0();
        if (puVar4 != (undefined *)0x0) {
          _objc_retain(puVar5);
          uVar2 = *(undefined8 *)(param_1 + 0x60);
          *(undefined **)(param_1 + 0x60) = puVar5;
          _objc_release(uVar2);
          *(undefined8 *)(param_1 + 0x70) = 0;
          lVar6 = *(long *)(param_1 + 0x60);
          func_0x00010bf529e0();
          if (lVar6 != 0) {
            do {
              uVar3 = *(undefined8 *)(param_1 + 0x60);
              func_0x00010c0dfd40(uVar3,param_2,*(undefined8 *)(param_1 + 0x70));
              _objc_retainAutoreleasedReturnValue();
              uVar8 = *(undefined8 *)(param_1 + 0x28);
              uVar2 = *(undefined8 *)(param_1 + 0x60);
              func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + 0x70));
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c13a8c0(uVar8,param_2,uVar2);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar2);
              uVar2 = uVar8;
              func_0x00010c06cde0();
              if (((int)uVar2 != 0) && (uVar2 = uVar3, func_0x00010bfdd120(), (int)uVar2 != 0)) {
                uVar1 = *(ulong *)(param_1 + 0x20);
                func_0x00010c07b100(uVar1,param_2,uVar3);
                if ((uVar1 & 1) == 0) {
                  func_0x00010becef40(param_1,param_2,2,param_3);
                  _objc_release(uVar8);
                  _objc_release(uVar3);
                  _objc_release(puVar5);
                  goto LAB_105cd957c;
                }
              }
              uVar2 = *(undefined8 *)(param_1 + 0x20);
              func_0x00010c07b100(uVar2,param_2,uVar3);
              if ((int)uVar2 != 0) {
                lVar6 = *(long *)(param_1 + 0x20);
                func_0x00010c276ba0(lVar6,param_2,uVar3);
                *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + lVar6;
              }
              _objc_release(uVar8);
              _objc_release(uVar3);
              uVar1 = *(long *)(param_1 + 0x70) + 1;
              *(ulong *)(param_1 + 0x70) = uVar1;
              uVar7 = *(ulong *)(param_1 + 0x60);
              func_0x00010bf529e0();
            } while (uVar1 < uVar7);
          }
        }
        *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
        _objc_release(puVar5);
        uVar7 = *(ulong *)(param_1 + 0x68);
        uVar1 = *(ulong *)(param_1 + 0x58);
        func_0x00010bf529e0();
      } while (uVar7 < uVar1);
    }
    func_0x00010becef40(param_1,param_2,0,param_3);
  }
LAB_105cd957c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cd9598; end: 105cd95ff;  */

uint FUN_105cd9598(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010b5fa088();
  lVar2 = param_2;
  func_0x00010b5fc690(param_2);
  lVar3 = param_2;
  func_0x00010b5fa8b4(param_2);
  _objc_release(param_2);
  uVar4 = 0;
  if (lVar1 == 8) {
    uVar4 = (uint)lVar2;
  }
  return uVar4 & ((uint)lVar3 ^ 1);
}



/* Entry: 105cd9600; end: 105cd9607; -[SCSpectaclesAuxiliaryContentPreloader _shouldDownloadDepth] */

undefined8 FUN_105cd9600(void)

{
  return 0;
}



/* Entry: 105cd9608; end: 105cd9813; -[SCSpectaclesAuxiliaryContentPreloader _downloadSnapsWithServiceTerm:] */

void FUN_105cd9608(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00010be41400();
  if ((uVar3 & 1) != 0) goto LAB_105cd96f4;
  uVar3 = param_1;
  func_0x00010beb3580();
  if ((uVar3 & 1) == 0) {
    func_0x00010becef40(param_1);
    goto LAB_105cd96f4;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c06cde0();
  if (((int)uVar2 == 0) || (uVar2 = uVar1, func_0x00010bfdd120(), (int)uVar2 == 0)) {
LAB_105cd96c4:
    func_0x00010bde88a0(param_1);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010c07b100();
    if ((uVar3 & 1) != 0) goto LAB_105cd96c4;
    puVar4 = PTR_PTR_1126c3c58;
    _objc_alloc(PTR_PTR_1126c3c58);
    func_0x00010c017040();
    _objc_initWeak(auStack_48,param_1);
    _objc_initWeak(auStack_50,param_3);
    _objc_copyWeak(auStack_60,auStack_48);
    _objc_retain(uVar1);
    _objc_copyWeak(auStack_58,auStack_50);
    func_0x00010c142c00(puVar4);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar4);
  }
  _objc_release(uVar5);
  _objc_release(uVar1);
LAB_105cd96f4:
  _objc_release(param_3);
  return;
}



/* Entry: 105cd9814; end: 105cd98f7;  */

void FUN_105cd9814(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    _objc_copyWeak(auStack_50,param_1 + 0x28);
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 105cd98f8; end: 105cd9957;  */

void FUN_105cd98f8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if ((param_1 != 0) && (uVar2 = uVar1, func_0x00010be41400(), (uVar2 & 1) == 0)) {
      func_0x00010bde88a0(uVar1,param_2,param_1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cd9958; end: 105cd9a53; -[SCSpectaclesAuxiliaryContentPreloader _continueDownloadDepthWithServiceTerm:] */

void FUN_105cd9958(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00010be41400();
  if ((uVar3 & 1) == 0) {
    while( true ) {
      uVar3 = *(long *)(param_1 + 0x70) + 1;
      *(ulong *)(param_1 + 0x70) = uVar3;
      uVar1 = *(ulong *)(param_1 + 0x60);
      func_0x00010bf529e0();
      if (uVar1 <= uVar3) break;
      lVar2 = *(long *)(param_1 + 0x60);
      func_0x00010c0dfd40(lVar2,param_2,*(undefined8 *)(param_1 + 0x70));
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010b5fa088();
      if ((lVar4 == 8) || (lVar4 = lVar2, func_0x00010b5fa088(), lVar4 == 7)) {
        func_0x00010becef40(param_1,param_2,2,param_3);
        _objc_release(lVar2);
        goto LAB_105cd9a40;
      }
      _objc_release(lVar2);
    }
    lVar4 = *(long *)(param_1 + 0x68);
    uVar3 = *(ulong *)(param_1 + 0x58);
    func_0x00010bf529e0();
    if (lVar4 + 1U < uVar3) {
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
      func_0x00010be80e80(param_1,param_2,param_3);
    }
    else {
      func_0x00010becef40(param_1,param_2,0,param_3);
    }
  }
LAB_105cd9a40:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cd9a54; end: 105cd9aaf; -[SCSpectaclesAuxiliaryContentPreloader invalidate] */

void FUN_105cd9a54(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfec280(*(undefined8 *)(param_1 + 0x80));
  _objc_storeWeak(param_1 + 0x10,0);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cd9ab0; end: 105cd9acf; -[SCSpectaclesAuxiliaryContentPreloader _isInvalidated] */

bool FUN_105cd9ab0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 105cd9ad0; end: 105cd9b73; -[SCSpectaclesAuxiliaryContentPreloader .cxx_destruct] */

void FUN_105cd9ad0(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cd9b74; end: 105cd9c9b; -[SCSpectaclesAuxiliaryContentPreloadingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd9b74(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126c3c60;
  _objc_alloc(PTR_PTR_1126c3c60);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038680(puVar1);
  _objc_release(puVar2);
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127340f4);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105cd9c9c; end: 105cd9cdb;  */

void FUN_105cd9c9c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd6c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105cd9cdc; end: 105cd9fcf; -[SCSpectaclesAuxiliaryContentPreloadingServicesEntryPoint _buildSpectaclesAuxiliaryContentPreloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd9cdc(long param_1,undefined8 param_2)

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
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  puVar1 = PTR_PTR_1126c3c68;
  _objc_alloc();
  lVar2 = param_1;
  FUN_105cd9fd0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_1127340e8;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar20;
  func_0x00010bf3e340();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_1127340ec;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar21;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x000105cd9ff4();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf0b480();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x000105cd9ff4();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c1306e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_1127340e4;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar22;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  FUN_105cd9fd0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_1127340f0;
    _objc_loadWeakRetained();
  }
  lVar19 = param_1;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03aa40(puVar1,param_2,lVar4,lVar6,lVar8,lVar11,lVar14,lVar16,lVar18,lVar19);
  _objc_release(lVar19);
  _objc_release(param_1);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar22);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar21);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar20);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105cd9fd0; end: 105cda017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd9fd0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127340e0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cda018; end: 105cda09b; -[SCSpectaclesAuxiliaryContentPreloadingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cda018(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127340f4,0);
  _objc_destroyWeak(param_1 + _DAT_1127340f0);
  _objc_destroyWeak(param_1 + _DAT_1127340ec);
  _objc_destroyWeak(param_1 + _DAT_1127340e8);
  _objc_destroyWeak(param_1 + _DAT_1127340e4);
  _objc_destroyWeak(param_1 + _DAT_1127340e0);
  _objc_destroyWeak(param_1 + _DAT_1127340dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127340d8);
  return;
}



/* Entry: 105cda09c; end: 105cda1db; -[SCSpectaclesPrepareDepthForSnapOperation initWithGallerySnap:cloudFile:metadataHandler:availabilityHandler:encryptedContentManager:] */

undefined1 *
FUN_105cda09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126eccd0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cda1dc; end: 105cda21b; -[SCSpectaclesPrepareDepthForSnapOperation isLongRunning] */

uint FUN_105cda1dc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c07b100();
  _objc_release(param_1);
  return (uint)lVar1 ^ 1;
}



/* Entry: 105cda21c; end: 105cda353; -[SCSpectaclesPrepareDepthForSnapOperation runWithProgress:completion:] */

void FUN_105cda21c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar2);
  uVar2 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105cda2cc;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_58);
  return;
}



/* Entry: 105cda354; end: 105cda523; -[SCSpectaclesPrepareDepthForSnapOperation _extractDepth] */

void FUN_105cda354(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105cda524;
  puStack_70 = &UNK_110849810;
  ppuVar4 = &puStack_88;
  lStack_68 = param_1;
  _objc_retainBlock();
  uVar5 = *(ulong *)(param_1 + 8);
  func_0x00010b5fa088();
  if (uVar5 < 0xd && (1L << (uVar5 & 0x3f) & 0x1566U) != 0) {
    lVar8 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar8);
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar3;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105cda53c;
    puStack_a0 = &UNK_1108e4930;
    lStack_98 = param_1;
    ppuStack_90 = ppuVar4;
    _objc_retain(ppuVar4);
    func_0x00010c1346c0(lVar8,param_2,uVar1,0,uVar2,0,0,uVar6,&puStack_b8);
    _objc_release(uVar6);
    _objc_release(lVar8);
    ppuVar7 = ppuStack_90;
  }
  else {
    lVar8 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar8);
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar9);
    puStack_e8 = puVar3;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_105cda704;
    puStack_d0 = &UNK_1108e4960;
    lStack_c8 = param_1;
    ppuStack_c0 = ppuVar4;
    _objc_retain(ppuVar4);
    func_0x00010c1357e0(lVar8,param_2,uVar1,uVar2,0,uVar6,lVar9,&puStack_e8);
    _objc_release(lVar9);
    _objc_release(uVar6);
    _objc_release(lVar8);
    ppuVar7 = ppuStack_c0;
  }
  _objc_release(ppuVar7);
  _objc_release(ppuVar4);
  return;
}



/* Entry: 105cda524; end: 105cda53b;  */

void FUN_105cda524(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde3850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__completeWithSuccess_cancelled_e_1125567b0,
             param_2 == 0,0,param_2);
  return;
}



/* Entry: 105cda53c; end: 105cda6df;  */

void FUN_105cda53c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar1 + 0x48) & 1) == 0) {
    if (param_2 != 0) {
      lVar1 = lVar1 + 0x18;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf9ee60();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
      uVar2 = *(long *)(param_1 + 0x20) + 0x20;
      _objc_loadWeakRetained();
      uVar3 = uVar2;
      func_0x00010c07c3c0();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) {
        puVar4 = PTR_PTR_1126c3c70;
        _objc_alloc(PTR_PTR_1126c3c70);
        lVar1 = *(long *)(param_1 + 0x20) + 0x28;
        _objc_loadWeakRetained(lVar1);
        func_0x00010c046e40(puVar4);
        _objc_release(lVar1);
        lVar1 = *(long *)(param_1 + 0x20) + 0x20;
        _objc_loadWeakRetained(lVar1);
        func_0x00010c109240();
        _objc_release(lVar1);
        _objc_release(puVar4);
        goto LAB_105cda6b4;
      }
      lVar1 = *(long *)(param_1 + 0x20);
    }
    func_0x00010bde3840(lVar1);
  }
LAB_105cda6b4:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105cda6e0; end: 105cda703;  */

void FUN_105cda6e0(double param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x20) + 0x38);
  if ((lVar1 != 0) && ((*(byte *)(*(long *)(param_2 + 0x20) + 0x48) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000105cda700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))((float)param_1);
    return;
  }
  return;
}



/* Entry: 105cda704; end: 105cda7b3;  */

void FUN_105cda704(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x48) & 1) == 0) {
    if (param_2 == 0) {
      func_0x00010bde3840();
    }
    else {
      lVar1 = *(long *)(param_1 + 0x20) + 0x20;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c109220();
      _objc_release(lVar1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105cda7b4; end: 105cda80b; -[SCSpectaclesPrepareDepthForSnapOperation cancel] */

void FUN_105cda7b4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105cda80c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_38);
  return;
}



/* Entry: 105cda80c; end: 105cda81f;  */

void FUN_105cda80c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde3850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__completeWithSuccess_cancelled_e_1125567b0,0,1,0)
  ;
  return;
}



/* Entry: 105cda820; end: 105cda87b; -[SCSpectaclesPrepareDepthForSnapOperation _completeWithSuccess:cancelled:error:] */

void FUN_105cda820(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x48) = 1;
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),param_3,param_4,param_5)
  ;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cda87c; end: 105cda8e7; -[SCSpectaclesPrepareDepthForSnapOperation .cxx_destruct] */

void FUN_105cda87c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cda8e8; end: 105cda9db; -[SCStoriesRepostMentionLensImpl initWithToolLensController:previewConfiguration:previewScopeServices:previewABProvider:] */

undefined1 *
FUN_105cda8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126eccd8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cda9dc; end: 105cdab07; -[SCStoriesRepostMentionLensImpl _applyLens:] */

void FUN_105cda9dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010bddf340(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puVar2 = PTR_PTR_1126c3c78;
    _objc_alloc(PTR_PTR_1126c3c78);
    func_0x00010c0258c0();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf08a00(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_40);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105cdab08; end: 105cdab3b;  */

void FUN_105cdab08(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddf340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cdab3c; end: 105cdac9b; -[SCStoriesRepostMentionLensImpl _cleanUpWithError] */

void FUN_105cdab3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aed70;
  func_0x00010beff4c0(PTR_PTR_1126aed70,param_2,&PTR____CFConstantStringClassReference_110dd6e18,
                      &PTR___NSConcreteGlobalBlock_1108e4990);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c4e0(puVar2);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c240640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c27ed00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0cfd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010bf0c980(uVar7);
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105cdac9c; end: 105cdacab;  */

void FUN_105cdac9c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105cdacac; end: 105cdad4f; -[SCStoriesRepostMentionLensImpl snapEditor:didTriggerLifecycle:] */

void FUN_105cdacac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c134300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22df20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((param_4 == 0) && ((int)lVar3 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c134360(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdce380(param_1,param_2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 105cdad50; end: 105cdad93; -[SCStoriesRepostMentionLensImpl .cxx_destruct] */

void FUN_105cdad50(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cdad94; end: 105cdaff7; -[SCPreviewFiltersLegacyLogger initWithConfiguration:swipeFiltersProvider:smartCarouselFilterArranger:infoStickerDataSource:lensExplorer:previewABProvider:] */

undefined8 *
FUN_105cdad94(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126ecce0;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  puVar3 = PTR_PTR_1126afee0;
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar5 = puVar2[1];
    puVar2[1] = uVar1;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = puVar2[2];
    puVar2[2] = param_4;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = puVar2[3];
    puVar2[3] = param_5;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = puVar2[4];
    puVar2[4] = param_6;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar5 = puVar2[5];
    puVar2[5] = param_7;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = puVar2[6];
    puVar2[6] = param_8;
    _objc_release(uVar5);
    _objc_initWeak(auStack_78,puVar2);
    uVar5 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c264a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar7 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar2[8];
    puVar2[8] = uVar7;
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105cdaff8; end: 105cdb03b;  */

void FUN_105cdaff8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cdb03c; end: 105cdb083; -[SCPreviewFiltersLegacyLogger _smartSwipeFilterViewLogger] */

void FUN_105cdb03c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0695e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c23eea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105cdb084; end: 105cdb64f; -[SCPreviewFiltersLegacyLogger updateCommonLoggingParamsBuilder:] */

void FUN_105cdb084(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0695e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd4140();
  func_0x00010c2a8360(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bedd8c0(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0b3c20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010844136c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ade20(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar4 = *(ulong *)(param_1 + 0x38);
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf5eb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b38c0;
  _objc_opt_class(PTR_PTR_1126b38c0);
  uVar8 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar5);
  uVar4 = uVar6;
  if ((uVar8 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar6);
  uVar6 = *(ulong *)(param_1 + 0x38);
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf5eb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126c3c80;
  _objc_opt_class(PTR_PTR_1126c3c80);
  uVar12 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar5);
  uVar6 = uVar8;
  if ((uVar12 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar8);
  puVar5 = PTR_PTR_1126c3c88;
  _objc_retain(uVar4);
  _objc_opt_class(puVar5);
  uVar12 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar8 = uVar4;
  if ((uVar12 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar4);
  uVar12 = uVar4;
  if (uVar8 == 0) {
    uVar8 = uVar6;
    func_0x00010bfd47c0();
    if ((int)uVar8 == 0) {
      uVar12 = 0;
    }
    else {
      uVar8 = uVar6;
      func_0x00010bfc1380();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c3c88;
      _objc_opt_class(PTR_PTR_1126c3c88);
      uVar7 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar5);
      uVar12 = uVar8;
      if ((uVar7 & 1) == 0) {
        uVar12 = 0;
      }
      _objc_retain(uVar12);
      _objc_release(uVar8);
    }
  }
  func_0x00010bedb020(param_1);
  func_0x00010be79440(param_1);
  func_0x00010bedb040(param_1);
  func_0x00010c289fe0(*(undefined8 *)(param_1 + 0x38));
  uVar8 = *(ulong *)(param_1 + 0x38);
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf5eb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar5 = PTR_PTR_1126b38c0;
  _objc_opt_class(PTR_PTR_1126b38c0);
  uVar9 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar5);
  uVar8 = uVar7;
  if ((uVar9 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar7);
  lVar10 = param_1;
  func_0x00010bebc7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6b60();
  func_0x00010c2ae340(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010bebc7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0af020();
  func_0x00010c2ae0a0(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010bebc7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a8960();
  func_0x00010c2adf00(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010bebc7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0aab40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adf40(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010bebc7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0aab40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ae1a0(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010bebc7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b33c0();
  func_0x00010c2bcb60(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0695e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dede0();
  func_0x00010c2bab40(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar10 = param_1;
  func_0x00010bebc7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0a67a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adf60(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar10);
  func_0x00010be79440(param_1);
  _objc_release(uVar8);
  lVar10 = param_1;
  func_0x00010bebc7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0a6840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c2ae140(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010bebc7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6820();
  func_0x00010c2ae120(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c083340();
  if (iVar1 != 0) {
    uVar8 = *(ulong *)(param_1 + 8);
    func_0x00010c06d080();
    if ((uVar8 & 1) == 0) {
      func_0x00010bf5eae0(*(undefined8 *)(param_1 + 0x38));
      func_0x00010c2ae060(param_3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010bf5eae0();
      func_0x00010c2adfa0(param_3);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  func_0x00010bed9ce0(param_1);
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cdb650; end: 105cdb893; -[SCPreviewFiltersLegacyLogger _updatePostCaptureLensIDWithBuilder:] */

void FUN_105cdb650(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
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
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1595a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf006a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar2);
  puVar11 = auStack_f0;
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,puVar11,0x10);
  if (lVar1 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar2);
        }
        lVar5 = *(long *)(lStack_128 + lVar13 * 8);
        func_0x00010bf44740(lVar5,param_2,&PTR____CFConstantStringClassReference_110db3638);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        if ((lVar6 != 0) &&
           (uVar3 = uVar4, func_0x00010bf4b900(uVar4,param_2,lVar6), (uVar3 & 1) != 0)) {
          lVar1 = lVar6;
          func_0x00010c2b5860(param_3);
          _objc_unsafeClaimAutoreleasedReturnValue();
          lVar12 = lVar2;
          goto LAB_105cdb830;
        }
        _objc_release(lVar6);
        lVar13 = lVar13 + 1;
      } while (lVar1 != lVar13);
      puVar11 = auStack_f0;
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,puVar11,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  lVar12 = *(long *)(param_1 + 0x38);
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar12;
  func_0x00010bf60680();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar13;
  func_0x00010c2b5860(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar13);
LAB_105cdb830:
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar1);
  _objc_retain(puVar11);
  puVar7 = puVar11;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfdc8c0();
  if ((int)puVar8 == 0) {
    lVar2 = lVar1;
    func_0x00010bf93ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar7);
    if (lVar2 != 0) {
      lVar2 = lVar1;
      func_0x00010bf93ae0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ad240(puVar11,param_2,lVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar2);
      goto LAB_105cdb958;
    }
  }
  else {
    _objc_release(puVar7);
  }
  func_0x00010c2ad240(puVar11,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_105cdb958:
  lVar2 = lVar1;
  func_0x00010bfc12a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar2;
  func_0x00010bf8b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aed60(puVar11,param_2,lVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bfadea0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ade40(puVar11,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar9 = param_3;
  func_0x00010bebc7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0a8920();
  func_0x00010c2adf20(puVar11,param_2,uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = param_3;
  func_0x00010bebc7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfae3e0();
  func_0x00010c2ae0c0(puVar11,param_2,uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  func_0x00010be79440(param_3,param_2,lVar1,0,puVar11);
  lVar2 = lVar1;
  func_0x00010c135700(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ade00(puVar11,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105cdb894; end: 105cdbaa3; -[SCPreviewFiltersLegacyLogger _updateLoggingParametersForGeoFilterView:builder:] */

void FUN_105cdb894(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdc8c0();
  if ((int)uVar2 == 0) {
    lVar3 = param_3;
    func_0x00010bf93ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (lVar3 != 0) {
      lVar3 = param_3;
      func_0x00010bf93ae0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ad240(param_4,param_2,lVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar3);
      goto LAB_105cdb958;
    }
  }
  else {
    _objc_release(uVar1);
  }
  func_0x00010c2ad240(param_4,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_105cdb958:
  lVar3 = param_3;
  func_0x00010bfc12a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf8b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aed60(param_4,param_2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bfadea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ade40(param_4,param_2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar1 = param_1;
  func_0x00010bebc7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0a8920();
  func_0x00010c2adf20(param_4,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bebc7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfae3e0();
  func_0x00010c2ae0c0(param_4,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be79440(param_1,param_2,param_3,0,param_4);
  lVar3 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ade00(param_4,param_2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cdbaa4; end: 105cdbb1f; -[SCPreviewFiltersLegacyLogger _updateLoggingParametersForVenueFilterView:builder:] */

void FUN_105cdbaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2981a0(param_3);
  func_0x00010c2ae160(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfd47c0(param_3);
  _objc_release(param_3);
  func_0x00010c2af0e0(param_4,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105cdbb20; end: 105cdbb5f; -[SCPreviewFiltersLegacyLogger _prepareTapCountForOverlayFilterView:filterType:builder:] */

void FUN_105cdbb20(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010bebc7a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b1820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105cdbb60; end: 105cdbb87; -[SCPreviewFiltersLegacyLogger _updateInteractionLoggingParametersWithBuilder:] */

void FUN_105cdbb60(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c2ae020(param_3,param_2,*(undefined8 *)(param_1 + 0x48));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105cdbb88; end: 105cdbce3; -[SCPreviewFiltersLegacyLogger venueLoggingParameters] */

void FUN_105cdbb88(undefined8 param_1,undefined *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ulong *)(param_2 + 0x38);
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5eb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c3c80;
  _objc_opt_class(PTR_PTR_1126c3c80);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    func_0x00010beca240(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_2 = PTR_PTR_1126c3c90;
    _objc_alloc(PTR_PTR_1126c3c90);
    uVar4 = uVar2;
    func_0x00010c15a3e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c297ce0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297ea0();
    uVar6 = uVar2;
    func_0x00010c297ce0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297b60();
    func_0x00010c15a400(uVar2);
    func_0x00010c0607e0(param_1,param_2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105cdbce4; end: 105cdbe03; -[SCPreviewFiltersLegacyLogger _syntheticVenueLoggingParameters] */

void FUN_105cdbce4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c1115c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2981c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c2981c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar3 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_105cdbdd4;
    }
  }
  puVar5 = PTR_PTR_1126c3c90;
  _objc_alloc(PTR_PTR_1126c3c90);
  lVar4 = lVar3;
  func_0x00010c15a3e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0607e0(0xc09f400000000000,puVar5,param_2,lVar4,0,0);
  _objc_release(lVar4);
  _objc_release(lVar3);
LAB_105cdbdd4:
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105cdbe04; end: 105cdbe0b; -[SCPreviewFiltersLegacyLogger filterCommonSendParameters] */

void FUN_105cdbe04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be15f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__filterCommonSendParametersWithC_112563168,1)
  ;
  return;
}



/* Entry: 105cdbe0c; end: 105cdbe13; -[SCPreviewFiltersLegacyLogger filterImageHealthCheckParameters] */

void FUN_105cdbe0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be15f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__filterCommonSendParametersWithC_112563168,0)
  ;
  return;
}



/* Entry: 105cdbe14; end: 105cdc043; -[SCPreviewFiltersLegacyLogger _filterCommonSendParametersWithCanIncludeAltitude:] */

void FUN_105cdbe14(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulong)param_1 >> 0x20);
  uVar8 = (undefined4)param_1;
  lVar2 = param_2;
  func_0x00010be3e120();
  puVar7 = PTR____NSDictionary0__struct_11034ab58;
  if ((int)lVar2 == 0) goto LAB_105cdc02c;
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bebc7a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0aab60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_3,lVar4,&PTR____CFConstantStringClassReference_110e27f18);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bebc7a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0aab40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_3,lVar4,&PTR____CFConstantStringClassReference_110e27f38);
  _objc_release(lVar4);
  _objc_release(lVar2);
  if (param_4 != 0) {
    puVar7 = puVar3;
    func_0x00010c0e00e0(puVar3,param_3,&PTR____CFConstantStringClassReference_110e27f38);
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 != (undefined *)0x0) {
      puVar5 = puVar3;
      func_0x00010c0e00e0(puVar3,param_3,&PTR____CFConstantStringClassReference_110e27f38);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c071ae0();
      if ((int)puVar6 != 0) {
        iVar1 = 100;
        _arc4random_uniform();
        _objc_release(puVar5);
        _objc_release(puVar7);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (iVar1 != 0) goto LAB_105cdbfbc;
        puVar7 = *(undefined **)(param_2 + 0x20);
        func_0x00010bf01f00(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf01f20();
        func_0x00010c0df7a0(puVar5,param_3,(long)(double)CONCAT44(uVar9,uVar8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3,param_3,puVar5,&PTR____CFConstantStringClassReference_110e27f58);
      }
      _objc_release(puVar5);
      _objc_release(puVar7);
    }
  }
LAB_105cdbfbc:
  func_0x00010bebc7a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c0aab40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_3,lVar2,&PTR____CFConstantStringClassReference_110e27f78);
  _objc_release(lVar2);
  _objc_release(param_2);
  puVar7 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
LAB_105cdc02c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105cdc044; end: 105cdc0a7; -[SCPreviewFiltersLegacyLogger _isAnyFilterAvailable] */

bool FUN_105cdc044(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf4b780(uVar1,param_2,&PTR____CFConstantStringClassReference_110f27458);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf4b780(uVar1,param_2,&PTR____CFConstantStringClassReference_110f27478);
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      func_0x00010c276560(lVar2);
      return 1 < lVar2;
    }
  }
  return false;
}



/* Entry: 105cdc0a8; end: 105cdc0d7; -[SCPreviewFiltersLegacyLogger logViewingPaused] */

void FUN_105cdc0a8(undefined8 param_1)

{
  func_0x00010bebc7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cdc0d8; end: 105cdc107; -[SCPreviewFiltersLegacyLogger logViewingResumed] */

void FUN_105cdc0d8(undefined8 param_1)

{
  func_0x00010bebc7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cdc108; end: 105cdc137; -[SCPreviewFiltersLegacyLogger logViewingEnded] */

void FUN_105cdc108(undefined8 param_1)

{
  func_0x00010bebc7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cdc138; end: 105cdc18b; -[SCPreviewFiltersLegacyLogger logSnapCreationFlowEnded] */

void FUN_105cdc138(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bebc7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2a40();
  _objc_release(uVar1);
  func_0x00010bebc7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0afcc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cdc18c; end: 105cdc1bb; -[SCPreviewFiltersLegacyLogger logStartTTIMeasurement] */

void FUN_105cdc18c(undefined8 param_1)

{
  func_0x00010bebc7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cdc1bc; end: 105cdc1cb; -[SCPreviewFiltersLegacyLogger logFilterSelectionReset] */

void FUN_105cdc1bc(long param_1)

{
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  return;
}



/* Entry: 105cdc1cc; end: 105cdc243; -[SCPreviewFiltersLegacyLogger .cxx_destruct] */

void FUN_105cdc1cc(long param_1)

{
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



/* Entry: 105cdc244; end: 105cdc34b; -[SCPreviewFiltersLegacyLoggingWorkflow initWithConfiguration:snapEditorTweaks:filterLogger:] */

undefined1 *
FUN_105cdc244(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ecce8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  puVar3 = PTR_PTR_1126afee0;
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar5 = *(undefined8 *)((long)puVar2 + 8);
    *(ulong *)((long)puVar2 + 8) = uVar1;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_4;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_5;
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 105cdc34c; end: 105cdc353; -[SCPreviewFiltersLegacyLoggingWorkflow responderChainPriority] */

undefined8 FUN_105cdc34c(void)

{
  return 0x7fffffff;
}



/* Entry: 105cdc354; end: 105cdc3a3; -[SCPreviewFiltersLegacyLoggingWorkflow snapEditor:updateLoggingWithBuilder:] */

void FUN_105cdc354(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2846e0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cdc3a4; end: 105cdc3df; -[SCPreviewFiltersLegacyLoggingWorkflow .cxx_destruct] */

void FUN_105cdc3a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cdc3e0; end: 105cdc8db; -[SCPreviewFiltersLegacyController initWithConfiguration:previewLogging:swipeFiltersProvider:carousel:deprecatedFeaturesServices:previewScopeServices:adReportScopeServices:previewABProvider:bundledLensProvider:featureSettingsService:smartCarouselFilterArranger:userTrackedLogger:memoriesReverseAudioCache:audioProcessingSessionFactory:previewLatencyLogger:geoFilterLogger:previewTooltipsProvider:ucoDependencyFactory:specsRenderingMetadataProvider:actionInterceptor:] */

undefined8 *
FUN_105cdc3e0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  puStack_70 = PTR_PTR_1126eccf0;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  puVar3 = PTR_PTR_1126afee0;
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar5 = puVar2[4];
    puVar2[4] = uVar1;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = puVar2[7];
    puVar2[7] = param_4;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = puVar2[5];
    puVar2[5] = param_6;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar5 = puVar2[6];
    puVar2[6] = param_7;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = puVar2[8];
    puVar2[8] = param_8;
    _objc_release(uVar5);
    _objc_retain(param_9);
    uVar5 = puVar2[9];
    puVar2[9] = param_9;
    _objc_release(uVar5);
    _objc_retain(param_10);
    uVar5 = puVar2[10];
    puVar2[10] = param_10;
    _objc_release(uVar5);
    _objc_retain(param_11);
    uVar5 = puVar2[0xb];
    puVar2[0xb] = param_11;
    _objc_release(uVar5);
    _objc_retain(param_12);
    uVar5 = puVar2[0xc];
    puVar2[0xc] = param_12;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = puVar2[0xd];
    puVar2[0xd] = param_5;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c264a00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar2[0xe];
    puVar2[0xe] = uVar7;
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_retain(param_13);
    uVar5 = puVar2[0xf];
    puVar2[0xf] = param_13;
    _objc_release(uVar5);
    _objc_retain(param_14);
    uVar5 = puVar2[0x10];
    puVar2[0x10] = param_14;
    _objc_release(uVar5);
    _objc_retain(param_15);
    uVar5 = puVar2[0x11];
    puVar2[0x11] = param_15;
    _objc_release(uVar5);
    _objc_retain(param_16);
    uVar5 = puVar2[0x12];
    puVar2[0x12] = param_16;
    _objc_release(uVar5);
    _objc_retain(param_17);
    uVar5 = puVar2[0x13];
    puVar2[0x13] = param_17;
    _objc_release(uVar5);
    _objc_retain(param_18);
    uVar5 = puVar2[0x14];
    puVar2[0x14] = param_18;
    _objc_release(uVar5);
    _objc_retain(param_19);
    uVar5 = puVar2[0x15];
    puVar2[0x15] = param_19;
    _objc_release(uVar5);
    _objc_retain(param_20);
    uVar5 = puVar2[0x16];
    puVar2[0x16] = param_20;
    _objc_release(uVar5);
    _objc_retain(param_21);
    uVar5 = puVar2[0x17];
    puVar2[0x17] = param_21;
    _objc_release(uVar5);
    _objc_retain(param_22);
    uVar5 = puVar2[0x18];
    puVar2[0x18] = param_22;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = puVar2[1];
    puVar2[1] = puVar3;
    _objc_release(uVar5);
    func_0x00010c216fa0(puVar2);
  }
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
  return puVar2;
}



/* Entry: 105cdc8dc; end: 105cdc90b; -[SCPreviewFiltersLegacyController delegate] */

void FUN_105cdc8dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
  _objc_release();
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cdc90c; end: 105cdc987; -[SCPreviewFiltersLegacyController previewView] */

void FUN_105cdc90c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c111b60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105cdc988; end: 105cdca03; -[SCPreviewFiltersLegacyController batchCaptureStateHandler] */

void FUN_105cdc988(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf16ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105cdca04; end: 105cdca7f; -[SCPreviewFiltersLegacyController multiSnapStateHandler] */

void FUN_105cdca04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c111b60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105cdca80; end: 105cdcae7; -[SCPreviewFiltersLegacyController timelineSnapStateHandler] */

void FUN_105cdca80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c26fe40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2702c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105cdcae8; end: 105cdcb2b; -[SCPreviewFiltersLegacyController infoStickerDataProvider] */

void FUN_105cdcae8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfaeda0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cdcb2c; end: 105cdcb6f; -[SCPreviewFiltersLegacyController previewGallery] */

void FUN_105cdcb2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c111b60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1123c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cdcb70; end: 105cdcbb3; -[SCPreviewFiltersLegacyController _swipeFilterView] */

void FUN_105cdcb70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c264a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cdcbb4; end: 105cdcd47; -[SCPreviewFiltersLegacyController prepareFiltersForActivation] */

void FUN_105cdcbb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = param_1;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c264a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105cdcd48;
  puStack_68 = &UNK_11084dd40;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010befa300(uVar1);
  _objc_release(uVar1);
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010befa300(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105cdcd48; end: 105cdd437;  */

void FUN_105cdcd48(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c083340();
    if (((uVar1 & 1) != 0) || (uVar1 = param_2, func_0x00010c06d080(), (int)uVar1 != 0)) {
      lVar2 = param_1;
      func_0x00010c264a00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c1122a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010bf4b2a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c264a00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c069680();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0695e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010c264a00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c0693e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c0695e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066f80(lVar2);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      lVar2 = param_1;
      func_0x00010c264a00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c0693e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0695e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      lVar2 = param_1;
      func_0x00010c264a00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c069680();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      *(long *)(param_1 + 0x70) = lVar4;
      _objc_release(uVar10);
      _objc_release(lVar2);
      lVar2 = param_1;
      func_0x00010c264a00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c0695e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
    }
    uVar1 = param_2;
    func_0x00010c075080();
    lVar2 = param_1;
    func_0x00010c264a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    if ((uVar1 & 1) == 0) {
      func_0x00010c069680();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0693e0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c0695e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c23eb80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010c23eb80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c210800();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105cdd438; end: 105cdd467; -[SCPreviewFiltersLegacyController activateFilters] */

void FUN_105cdd438(undefined8 param_1)

{
  func_0x00010c264a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cdd468; end: 105cdd51f; -[SCPreviewFiltersLegacyController cleanupFilters] */

void FUN_105cdd468(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010be15fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a660();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c264a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  func_0x00010c264a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cdd520; end: 105cdd6e3; -[SCPreviewFiltersLegacyController setupFiltersView] */

void FUN_105cdd520(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010be08b80();
  uVar1 = param_1;
  func_0x00010c264a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1116e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c264a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f540();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1116e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010c243340(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c281060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fda20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105cdd6e4; end: 105cdd9a7; -[SCPreviewFiltersLegacyController _addSmartFilters] */

void FUN_105cdd6e4(undefined8 param_1,long param_2,undefined8 param_3)

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
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2;
  func_0x00010c23eb80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010be15fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203400();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010be15fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010be15fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251560();
  _objc_release(lVar1);
  func_0x00010bdc7ac0(param_2);
  lVar1 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c07e920();
  if ((int)lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c07e880();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) goto LAB_105cdd7f0;
  }
  else {
    _objc_release(lVar1);
LAB_105cdd7f0:
    lVar1 = param_2;
    func_0x00010be15fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfc1240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010be15fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfc1180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010be15fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c297ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar4 != 0) {
      ppuStack_58 = &PTR____CFConstantStringClassReference_110ef0fd8;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_50 = lVar4;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&lStack_50,&ppuStack_58,1
                         );
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x00010c23eb80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa420();
      _objc_release(lVar1);
      _objc_release(puVar5);
    }
    if (lVar2 != 0) {
      func_0x00010bdc7aa0(param_2,param_3,lVar2,lVar3);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar1 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0811c0();
  if ((int)lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c070a20();
    _objc_release(lVar2);
    _objc_release();
    if ((int)lVar3 == 0) goto LAB_105cdd974;
  }
  else {
    _objc_release(lVar1);
  }
  func_0x00010bdc83c0();
  lVar1 = param_2;
LAB_105cdd974:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126b00e8;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c110b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c270220(puVar5,param_3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = puVar5;
  func_0x00010c14b920();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfc1240();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bfc1160(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010c297ce0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar9 != (undefined *)0x0) {
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110ef0fd8;
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_c0 = puVar9;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_c0,&ppuStack_c8,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c23eb80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa420();
    _objc_release(lVar2);
    _objc_release(puVar10);
  }
  if (puVar7 != (undefined *)0x0) {
    func_0x00010bdc7aa0(lVar1,param_3,puVar7,puVar8);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = puVar5;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2a2c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010be15fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010bf6b020(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34540(puVar7);
  uVar11 = param_1;
  func_0x00010bf9fa60(puVar7);
  func_0x00010bfaed40(param_1,uVar11,puVar6);
  _objc_release(puVar6);
  func_0x00010bf6b020(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar8;
  func_0x00010bf64de0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaed20(puVar5,param_3,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105cdd9a8; end: 105cddb73; -[SCPreviewFiltersLegacyController _addSmartFiltersForTimelineOrDirectorMode] */

void FUN_105cdd9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar4 = PTR_PTR_1126b00e8;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c110b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c270220(puVar4,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = puVar4;
  func_0x00010c14b920();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfc1240();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bfc1160(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c297ce0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined *)0x0) {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110ef0fd8;
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar8;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_60,&ppuStack_68,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c23eb80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa420();
    _objc_release(uVar1);
    _objc_release(puVar9);
  }
  if (puVar6 != (undefined *)0x0) {
    func_0x00010bdc7aa0(param_2,param_3,puVar6,puVar7);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = puVar4;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2a2c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010be15fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bf6b020(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34540(puVar6);
  uVar1 = param_1;
  func_0x00010bf9fa60(puVar6);
  func_0x00010bfaed40(param_1,uVar1,puVar5);
  _objc_release(puVar5);
  func_0x00010bf6b020(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x00010bf64de0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaed20(puVar4,param_3,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105cddb74; end: 105cddc83; -[SCPreviewFiltersLegacyController _addOrUpdateInfoFilters] */

void FUN_105cddb74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a2c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010be15fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34540(uVar2);
  uVar4 = param_1;
  func_0x00010bf9fa60(uVar2);
  func_0x00010bfaed40(param_1,uVar4,uVar1);
  _objc_release(uVar1);
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf64de0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaed20(param_2,param_3,uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105cddc84; end: 105cddeab; -[SCPreviewFiltersLegacyController _addStreakFilter] */

void FUN_105cddc84(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07e920();
  if ((int)puVar2 == 0) {
    puVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c1322a0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release();
      if (puVar6 == (undefined *)0x0) goto LAB_105cddcd4;
      goto LAB_105cdde34;
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto code_r0x00010bdbf3e4;
  }
  else {
    _objc_release(puVar1);
LAB_105cddcd4:
    puVar1 = param_1;
    func_0x00010be15fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25be80();
    _objc_release();
    if (2 < (long)puVar2) {
      ppuStack_68 = &PTR____CFConstantStringClassReference_110ecaf78;
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_60 = puVar2;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&ppuStack_68,
                          1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar3);
      func_0x00010c23eb80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa420();
      _objc_release(param_1);
      _objc_release();
    }
LAB_105cdde34:
    puVar2 = puVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  puVar1 = puVar2;
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x00010c23eb80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf4b780();
  if ((int)puVar3 == 0) {
    puVar3 = puVar1;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf4b780();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)puVar4 == 0) {
      return;
    }
  }
  else {
    _objc_release(puVar2);
  }
  puVar2 = puVar1;
  func_0x00010c23eb80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c6a0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c23eb80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c6a0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bec9360(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152520();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c1122a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161840();
  _objc_release(puVar2);
  func_0x00010c1122a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4be0(0x3ff0000000000000);
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105cddeac; end: 105cde023; -[SCPreviewFiltersLegacyController _removePromptFilter] */

void FUN_105cddeac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c23eb80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b780();
  if ((int)uVar2 == 0) {
    uVar2 = param_1;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4b780();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      return;
    }
  }
  else {
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c23eb80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c6a0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c23eb80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c6a0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bec9360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152520();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161840();
  _objc_release(uVar1);
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4be0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cde024; end: 105cde1a7; -[SCPreviewFiltersLegacyController addMotionFilters] */

ulong FUN_105cde024(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c249d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(uVar2);
  uVar1 = uVar2;
  func_0x00010bf52a60(uVar2,param_2,&uStack_130,auStack_e8,0x10);
  if (uVar1 != 0) {
    lVar10 = *plStack_120;
    do {
      uVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(uVar2);
        }
        uVar9 = *(undefined8 *)(lStack_128 + uVar11 * 8);
        uVar3 = param_1;
        func_0x00010c23eb80();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar9;
        func_0x00010c0e00e0(uVar9,param_2,PTR_PTR_11329cf60);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa420(uVar3,param_2,uVar4,uVar9,3);
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar11);
      uVar1 = uVar2;
      func_0x00010bf52a60(uVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (uVar1 != 0);
  }
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    uVar1 = uVar2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
    func_0x00010c083340();
    if ((int)uVar11 == 0) {
      uVar11 = 0;
    }
    else {
      uVar3 = uVar2;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar3;
      func_0x00010c233c60();
      if ((uVar11 & 1) == 0) {
        uVar5 = uVar2;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar5;
        func_0x00010c06d080();
        if ((uVar11 & 1) == 0) {
          uVar11 = uVar2;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar11;
          func_0x00010c070a20();
          _objc_release(uVar11);
          _objc_release(uVar5);
          _objc_release(uVar3);
          _objc_release(uVar1);
          if ((uVar6 & 1) != 0) {
            return 0;
          }
          uVar1 = uVar2;
          func_0x00010bfa3600();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          func_0x00010c0d2940();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c15a4a0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar6 == 0) {
            func_0x00010bfa3600(uVar2);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar2;
            func_0x00010c2a0940();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar8;
            func_0x00010bf08020();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = (ulong)(uVar11 == 0);
            _objc_release();
            _objc_release(uVar8);
            _objc_release(uVar7);
            _objc_release(uVar2);
          }
          else {
            uVar11 = 0;
          }
          _objc_release(uVar6);
        }
        else {
          uVar11 = 0;
        }
        _objc_release(uVar5);
      }
      else {
        uVar11 = 0;
      }
      _objc_release(uVar3);
    }
    _objc_release(uVar1);
    return uVar11;
  }
  return uVar2;
}



/* Entry: 105cde1a8; end: 105cde363; -[SCPreviewFiltersLegacyController _reverseMotionFilterAvailable] */

bool FUN_105cde1a8(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c083340();
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c233c60();
    if ((uVar4 & 1) == 0) {
      uVar4 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c06d080();
      if ((uVar5 & 1) == 0) {
        uVar5 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c070a20();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((uVar6 & 1) != 0) {
          return false;
        }
        uVar2 = param_1;
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0d2940();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c15a4a0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar5 == 0) {
          func_0x00010bfa3600(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_1;
          func_0x00010c2a0940();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf08020();
          _objc_retainAutoreleasedReturnValue();
          bVar1 = uVar8 == 0;
          _objc_release();
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(param_1);
        }
        else {
          bVar1 = false;
        }
        _objc_release(uVar5);
      }
      else {
        bVar1 = false;
      }
      _objc_release(uVar4);
    }
    else {
      bVar1 = false;
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 105cde364; end: 105cde71b; -[SCPreviewFiltersLegacyController _addReverseMotionFilterWithCompletion:] */

void FUN_105cde364(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined **ppuStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010be972a0();
  if ((uVar2 & 1) != 0) {
    uVar2 = param_1;
    func_0x00010be15fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c22db40();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar2 = param_1;
      func_0x00010be15fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c1400e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 != 0) {
        _objc_initWeak(auStack_80,param_1);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_105cde71c;
        puStack_a0 = &UNK_1108e49e0;
        _objc_copyWeak(auStack_88,auStack_80);
        _objc_retain(uVar3);
        uStack_98 = uVar3;
        _objc_retain(param_3);
        ppuVar4 = &puStack_b8;
        lStack_90 = param_3;
        _objc_retainBlock();
        uVar2 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c073b80();
        _objc_release(uVar5);
        _objc_release(uVar2);
        if ((int)uVar6 == 0) {
          func_0x00010be1bac0(param_1);
        }
        else {
          uVar2 = param_1;
          func_0x00010be15fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          func_0x00010c07ca80();
          _objc_release(uVar2);
          if ((int)uVar5 != 0) {
            uVar2 = param_1;
            func_0x00010c111b60(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar2;
            func_0x00010bf6d9c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c20a020();
            _objc_release(uVar5);
            _objc_release(uVar2);
            puStack_e0 = puVar1;
            uStack_d8 = 0xc2000000;
            pcStack_d0 = FUN_105cde83c;
            puStack_c8 = &UNK_1108434b0;
            _objc_copyWeak(auStack_c0,auStack_80);
            func_0x000100c749e0(0x40400000,"APPSTORE",&puStack_e0);
            _objc_destroyWeak(auStack_c0);
          }
          uVar2 = param_1;
          func_0x00010bf46560(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          func_0x00010c2440e0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar2);
          func_0x00010c0c95e0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_1;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          _objc_release(param_1);
          puStack_118 = puVar1;
          uStack_110 = 0xc2000000;
          pcStack_108 = FUN_105cde8f0;
          puStack_100 = &UNK_110848378;
          _objc_copyWeak(auStack_e8,auStack_80);
          _objc_retain(uVar5);
          uStack_f8 = uVar5;
          _objc_retain(ppuVar4);
          ppuStack_f0 = ppuVar4;
          func_0x000100162d98("APPSTORE",&puStack_118);
          _objc_release(ppuStack_f0);
          _objc_release(uStack_f8);
          _objc_destroyWeak(auStack_e8);
          _objc_release(uVar5);
          _objc_release(uVar7);
        }
        _objc_release(ppuVar4);
        _objc_release(lStack_90);
        _objc_release(uStack_98);
        _objc_destroyWeak(auStack_88);
        _objc_destroyWeak(auStack_80);
      }
      _objc_release(uVar3);
      goto LAB_105cde6cc;
    }
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
LAB_105cde6cc:
  _objc_release(param_3);
  return;
}



/* Entry: 105cde71c; end: 105cde83b;  */

void FUN_105cde71c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c264a00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ede60();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c23eb80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa420(lVar2);
    _objc_release(uVar3);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c111b60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf6d9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a020();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105cde83c; end: 105cde8ef;  */

void FUN_105cde83c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c111b60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf6d9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010beffe80();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar2 = uVar1;
      func_0x00010c111b60(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf6d9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a020();
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cde8f0; end: 105cde93f;  */

void FUN_105cde8f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010be1bac0(lVar1);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105cde940; end: 105cdea37; -[SCPreviewFiltersLegacyController _generateReverseAudioCompletion:] */

void FUN_105cde940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105cdea38;
  puStack_50 = &UNK_1108e4a70;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  uStack_48 = param_3;
  _objc_retainBlock(ppuVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfaed80();
  _objc_release(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105cdea38; end: 105cdeb13;  */

void FUN_105cdea38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105cdeb14;
    puStack_50 = &UNK_110848378;
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = param_2;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_68);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105cdeb14; end: 105cdec37;  */

void FUN_105cdeb14(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x10;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      uVar3 = lVar1 + 0x10;
      _objc_loadWeakRetained();
      uVar4 = uVar3;
      func_0x00010bfaede0();
      _objc_release(uVar3);
      _objc_release(lVar2);
      if ((uVar4 & 1) == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(PTR___dispatch_main_q_11034be20);
        _objc_copyWeak(auStack_48,param_1 + 0x30);
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar5);
        func_0x00010c0d9520(uVar6);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(uVar5);
        _objc_destroyWeak(auStack_48);
      }
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105cdec38; end: 105cdee0f;  */

void FUN_105cdec38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x10;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      uVar3 = lVar1 + 0x10;
      _objc_loadWeakRetained();
      uVar4 = uVar3;
      func_0x00010bfaede0();
      _objc_release(uVar3);
      _objc_release(lVar2);
      if ((uVar4 & 1) == 0) {
        _CACurrentMediaTime();
        lVar2 = lVar1;
        func_0x00010bf0f880(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf588a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(lVar2);
        _objc_copyWeak(auStack_80,param_2 + 0x28);
        uVar7 = *(undefined8 *)(param_2 + 0x20);
        _objc_retain(uVar7);
        _objc_retain(param_3);
        uStack_78 = param_1;
        func_0x00010bfbff80(lVar6);
        _objc_release(param_3);
        _objc_release(uVar7);
        _objc_destroyWeak(auStack_80);
        _objc_release(lVar6);
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105cdee10; end: 105cdeea3;  */

void FUN_105cdee10(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x10;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = lVar1 + 0x10;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bfaece0();
      _objc_release(lVar2);
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2,param_2);
        _CACurrentMediaTime();
      }
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105cdeea4; end: 105cdf24f; -[SCPreviewFiltersLegacyController removeMotionFilters] */

void FUN_105cdeea4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfde420();
  if ((int)lVar8 != 0) {
    lVar8 = param_2;
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf60b40();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (param_1 == 1.0) goto LAB_105cdf000;
    lVar1 = param_2;
    func_0x00010bec9360(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3c160();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139120();
  }
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_105cdf000:
  lVar1 = param_2;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c249d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_3,&uStack_140,auStack_f8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        uVar6 = *(undefined8 *)(lStack_138 + lVar8 * 8);
        lVar3 = param_2;
        func_0x00010c23eb80(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        func_0x00010c0e00e0(uVar6,param_3,PTR_PTR_11329cf60);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa420(lVar3,param_3,uVar5,uVar6,3);
        _objc_release(uVar5);
        _objc_release(lVar3);
        lVar3 = param_2;
        func_0x00010c23eb80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar6,param_3,PTR_PTR_11329cf60);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c6a0(lVar3,param_3,uVar6,3);
        _objc_release(uVar6);
        _objc_release(lVar3);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_3,&uStack_140,auStack_f8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  lVar1 = param_2;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c1400e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar7 != 0) {
    lVar1 = lVar7;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar8 != 0) {
      func_0x00010c23eb80();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar7;
      func_0x00010c0e00e0(lVar7,param_3,PTR_PTR_11329cf60);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c6a0(param_2,param_3,lVar1,2);
      _objc_release(lVar1);
      _objc_release(param_2);
    }
  }
  _objc_release(lVar7);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1114e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c257900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105cdf250; end: 105cdf287; -[SCPreviewFiltersLegacyController previewFilterDataProviderDidReceiveNewMixerOrderingFromCache:] */

void FUN_105cdf250(undefined8 param_1)

{
  func_0x00010c1114e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c257900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cdf288; end: 105cdf33b; -[SCPreviewFiltersLegacyController previewFilterDataProviderDidRemoveFilter:filterType:] */

void FUN_105cdf288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c23eb80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c6a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105cdf33c; end: 105cdf8ff; -[SCPreviewFiltersLegacyController _addOrUpdateFilters:withAppearanceSettings:] */

undefined *
FUN_105cdf33c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined **param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined **unaff_x21;
  long lVar16;
  undefined *puVar17;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **unaff_x27;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_298 [128];
  undefined1 auStack_218 [128];
  undefined *puStack_198;
  long lStack_190;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = param_3;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    unaff_x22 = (undefined *)0x0;
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110f273f8;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110f27758;
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110f27778;
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110f27798;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110f277b8;
    ppuStack_110 = &PTR____CFConstantStringClassReference_110f277f8;
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110f277d8;
    ppuStack_108 = &PTR____CFConstantStringClassReference_110e0ad18;
    ppuStack_118 = &PTR____CFConstantStringClassReference_110f23b18;
    ppuStack_100 = &PTR____CFConstantStringClassReference_110f27838;
    puVar3 = param_1;
    puStack_120 = param_1;
    do {
      unaff_x24 = param_3;
      func_0x00010c0dfd40(param_3,param_2,unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = unaff_x24;
      func_0x00010bfadea0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = param_4;
      func_0x00010c0e00e0(param_4,param_2,unaff_x20);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x20);
      puVar5 = PTR_PTR_1126b38b8;
      param_1 = puVar3;
      if ((unaff_x24 != (undefined *)0x0) && (unaff_x27 != (undefined **)0x0)) {
        puVar4 = unaff_x24;
        func_0x00010bfadea0(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuStack_d0;
        func_0x00010bfe5de0(puVar5,param_2,ppuStack_d0,puVar4);
        _objc_retainAutoreleasedReturnValue();
        puStack_c0 = puVar5;
        _objc_release(puVar4);
        ppuVar6 = unaff_x27;
        func_0x00010bfae360();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c35e0;
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar9 = ppuVar6;
        }
        _objc_retain(ppuVar9);
        _objc_release(ppuVar6);
        ppuStack_b0 = ppuStack_d8;
        ppuStack_a8 = ppuStack_e0;
        ppuStack_90 = ppuVar2;
        ppuStack_a0 = ppuStack_e8;
        ppuStack_98 = ppuStack_f0;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuStack_c8 = ppuVar9;
        puStack_88 = unaff_x24;
        ppuStack_80 = unaff_x27;
        ppuStack_78 = ppuVar9;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_90,
                            &ppuStack_b0,4);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar5;
        func_0x00010c0d3c80();
        puStack_b8 = puVar4;
        _objc_release(puVar5);
        puVar4 = unaff_x24;
        func_0x00010c0c4fc0();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (puVar4 != (undefined *)0x1) {
          puVar4 = unaff_x24;
          func_0x00010c0c4fc0(unaff_x24);
          func_0x00010c0df780(puVar5,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puStack_b8,param_2,puVar5,ppuStack_110);
          _objc_release(puVar5);
        }
        puVar5 = puVar3;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar5;
        func_0x00010c1115c0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        func_0x00010c08fb40();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 == (undefined *)0x0) {
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010c2440e0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c07f120();
          _objc_release(puVar7);
          param_1 = puStack_120;
          _objc_release(puVar3);
          _objc_release(puVar4);
          _objc_release(puVar5);
          if ((int)puVar8 != 0) goto LAB_105cdf658;
          puVar3 = unaff_x24;
          func_0x00010bfaea60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar3 != (undefined *)0x0) {
            puVar3 = unaff_x24;
            func_0x00010bfaea60(unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puStack_b8,param_2,puVar3,ppuStack_f8);
            _objc_release(puVar3);
          }
        }
        else {
          _objc_release();
          _objc_release(puVar4);
          _objc_release(puVar5);
LAB_105cdf658:
          func_0x00010c1d0640(puStack_b8,param_2,0,ppuStack_f8);
        }
        puVar3 = unaff_x24;
        func_0x00010bf0f1c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar3 != (undefined *)0x0) {
          puVar3 = unaff_x24;
          func_0x00010bf0f1c0(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puStack_b8,param_2,puVar3,ppuStack_108);
          _objc_release(puVar3);
        }
        ppuVar9 = unaff_x27;
        func_0x00010c07eda0();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)ppuVar9 != 0) {
          ppuVar9 = unaff_x27;
          func_0x00010c07eda0(unaff_x27);
          func_0x00010c0df6e0(puVar3,param_2,ppuVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puStack_b8,param_2,puVar3,ppuStack_118);
          _objc_release(puVar3);
        }
        puVar3 = param_1;
        func_0x00010bfc12c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = unaff_x24;
        func_0x00010c09d160(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28f140(puVar3,param_2,puVar5,2);
        _objc_release(puVar5);
        _objc_release(puVar3);
        ppuVar9 = unaff_x27;
        func_0x00010c07f200();
        if ((int)ppuVar9 == 0) {
LAB_105cdf7a8:
          puVar5 = unaff_x24;
          func_0x00010c081f00();
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          unaff_x19 = (undefined *)0x7;
          if ((int)puVar5 == 0) {
            unaff_x19 = (undefined *)0x0;
          }
          ppuVar9 = unaff_x27;
          func_0x00010c073cc0(unaff_x27);
          func_0x00010c0df6e0(puVar3,param_2,ppuVar9);
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = puStack_b8;
          func_0x00010c1d0640(puStack_b8,param_2,puVar3,ppuStack_100);
          _objc_release(puVar3);
          unaff_x20 = param_1;
          func_0x00010c23eb80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa420();
          _objc_release(unaff_x20);
        }
        else {
          unaff_x19 = param_1;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          unaff_x20 = unaff_x19;
          func_0x00010c09a760();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = unaff_x20;
          func_0x00010c08fb40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = puVar3;
          func_0x00010c07f200();
          _objc_release(puVar3);
          _objc_release(unaff_x20);
          _objc_release(unaff_x19);
          if (((ulong)unaff_x23 & 1) == 0) goto LAB_105cdf7a8;
        }
        _objc_release(puStack_b8);
        _objc_release(ppuStack_c8);
        _objc_release(puStack_c0);
      }
      unaff_x21 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      _objc_release(unaff_x27);
      _objc_release(unaff_x24);
      unaff_x22 = unaff_x22 + 1;
      puVar5 = param_3;
      func_0x00010bf529e0();
      puVar3 = param_1;
    } while (unaff_x22 < puVar5);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_105cdf900;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuStack_180 = param_4;
  ppuStack_178 = unaff_x27;
  puStack_170 = param_3;
  puStack_168 = param_1;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = unaff_x22;
  ppuStack_148 = unaff_x21;
  puStack_140 = unaff_x20;
  puStack_138 = unaff_x19;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c159780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar3;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar7;
  func_0x00010c1597a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar20;
  func_0x00010bf529e0();
  puVar10 = puVar20;
  if ((puVar7 == (undefined *)0x0) && (puVar8 != (undefined *)0x0)) {
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_198 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_198,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
  }
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  lStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  plStack_2d0 = (long *)0x0;
  _objc_retain(puVar10);
  puVar7 = puVar10;
  func_0x00010bf52a60(puVar10,param_2,&uStack_2e0,auStack_218,0x10);
  if (puVar7 != (undefined *)0x0) {
    lVar16 = *plStack_2d0;
    do {
      puVar20 = (undefined *)0x0;
      do {
        if (*plStack_2d0 != lVar16) {
          _objc_enumerationMutation(puVar10);
        }
        func_0x00010bdc6fa0(puVar3,param_2,*(undefined8 *)(lStack_2d8 + (long)puVar20 * 8),puVar5,
                            puVar4);
        puVar20 = puVar20 + 1;
      } while (puVar7 != puVar20);
      puVar7 = puVar10;
      func_0x00010bf52a60(puVar10,param_2,&uStack_2e0,auStack_218,0x10);
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar10);
  puVar7 = puVar3;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar7;
  func_0x00010c1594c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar20 == (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar18 = *(undefined **)(puVar20 + 0x10);
  }
  _objc_retain(puVar18);
  _objc_release(puVar20);
  _objc_release(puVar7);
  puVar7 = puVar3;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar7;
  func_0x00010c159500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar20;
  func_0x00010c08fa60();
  if (puVar7 != (undefined *)0x0) {
    puVar7 = PTR_PTR_1126b38b8;
    func_0x00010bfe5de0(PTR_PTR_1126b38b8,param_2,&PTR____CFConstantStringClassReference_110f273f8,
                        puVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    func_0x00010914e1a4();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar3;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar17;
    func_0x00010bf45e80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar19 == (undefined *)0x0) {
      _objc_release(puVar17);
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar12 = puVar18;
      func_0x00010c0720c0(puVar18,param_2,puVar11);
      _objc_release(puVar19);
      _objc_release(puVar17);
      if ((int)puVar12 == 0) {
        puVar17 = (undefined *)0x0;
      }
      else {
        puVar17 = puVar5;
        func_0x00010bf4b900(puVar5,param_2,puVar7);
        if (((ulong)puVar17 & 1) == 0) {
          func_0x00010befa120(puVar5,param_2,puVar7);
          func_0x00010befa120(puVar4,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c35e0);
        }
        _objc_retain(puVar11);
        _objc_retain(puVar11);
        _objc_release(puVar18);
        func_0x00010befa120(puVar5,param_2,puVar11);
        func_0x00010befa120(puVar4,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c35f8);
        puVar17 = puVar11;
        puVar18 = puVar11;
      }
    }
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(puVar17);
  }
  puVar7 = puVar18;
  func_0x00010c08fa60();
  if (puVar7 != (undefined *)0x0) {
    puVar7 = puVar3;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    func_0x00010bf4b780();
    _objc_release(puVar7);
    if ((int)puVar11 == 0) {
      puVar7 = puVar3;
      func_0x00010bf24d40();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = puVar11;
      func_0x00010c0946c0(puVar11,param_2,puVar18);
      _objc_retainAutoreleasedReturnValue();
      lStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      plStack_310 = (long *)0x0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      _objc_retain();
      puVar17 = puVar7;
      func_0x00010bf52a60(puVar7,param_2,&uStack_320,auStack_298,0x10);
      if (puVar17 != (undefined *)0x0) {
        lVar16 = *plStack_310;
        do {
          puVar19 = (undefined *)0x0;
          do {
            if (*plStack_310 != lVar16) {
              _objc_enumerationMutation(puVar7);
            }
            puVar12 = puVar3;
            func_0x00010bdc6fa0(puVar3,param_2,*(undefined8 *)(lStack_318 + (long)puVar19 * 8),
                                puVar5,puVar4);
            if (((ulong)puVar12 & 1) != 0) goto LAB_105cdfd74;
            puVar19 = puVar19 + 1;
          } while (puVar17 != puVar19);
          puVar17 = puVar7;
          func_0x00010bf52a60(puVar7,param_2,&uStack_320,auStack_298,0x10);
        } while (puVar17 != (undefined *)0x0);
      }
LAB_105cdfd74:
      _objc_release(puVar7);
      _objc_release(puVar7);
      _objc_release(puVar11);
    }
    else {
      func_0x00010befa120(puVar5,param_2,puVar18);
      func_0x00010befa120(puVar4,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c35f8);
    }
  }
  puVar7 = puVar3;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  func_0x00010c15a000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar11;
  func_0x00010c08fa60();
  if (puVar7 != (undefined *)0x0) {
    puVar7 = puVar3;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar7;
    func_0x00010bf4b780();
    _objc_release(puVar7);
    if ((int)puVar17 != 0) {
      func_0x00010befa120(puVar5,param_2,puVar11);
      func_0x00010befa120(puVar4,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3610);
    }
  }
  puVar7 = puVar3;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar7;
  func_0x00010c15a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar3;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar7;
  func_0x00010c07ca80();
  _objc_release(puVar7);
  puVar7 = puVar17;
  func_0x00010c08fa60();
  if (puVar7 != (undefined *)0x0) {
    puVar7 = puVar3;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar7;
    func_0x00010bf4b780();
    _objc_release(puVar7);
    if ((int)puVar12 != 0) {
      func_0x00010befa120(puVar5,param_2,puVar17);
      func_0x00010befa120(puVar4,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3628);
    }
  }
  if ((int)puVar19 != 0) {
    puVar7 = puVar3;
    func_0x00010be15fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar7;
    func_0x00010c1400e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar19 != (undefined *)0x0) {
      puVar7 = puVar19;
      func_0x00010c0e00e0(puVar19,param_2,PTR_PTR_11329cf60);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar3;
      func_0x00010c23eb80();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf4b780();
      _objc_release(puVar12);
      if ((int)puVar13 != 0) {
        puVar12 = puVar19;
        func_0x00010c0e00e0(puVar19,param_2,PTR_PTR_11329cf60);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5,param_2,puVar12);
        _objc_release(puVar12);
        func_0x00010befa120(puVar4,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3640);
      }
      _objc_release(puVar7);
    }
    _objc_release(puVar19);
  }
  puVar7 = puVar3;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar7;
  func_0x00010c082fa0();
  _objc_release(puVar7);
  if ((int)puVar19 != 0) {
    puVar7 = puVar3;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar7;
    func_0x00010bf4b780();
    _objc_release(puVar7);
    if ((int)puVar19 != 0) {
      func_0x00010befa120(puVar5,param_2,&PTR____CFConstantStringClassReference_110f274f8);
      func_0x00010befa120(puVar4,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3658);
    }
  }
  puVar7 = puVar3;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar7;
  func_0x00010c07fe40();
  _objc_release(puVar7);
  if ((int)puVar19 != 0) {
    puVar7 = puVar3;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar7;
    func_0x00010bf4b780();
    _objc_release(puVar7);
    if ((int)puVar19 != 0) {
      func_0x00010befa120(puVar5,param_2,&PTR____CFConstantStringClassReference_110f274d8);
      func_0x00010befa120(puVar4,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3670);
    }
  }
  puVar7 = puVar3;
  func_0x00010bec9360(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = 0;
  puVar12 = puVar5;
  puVar13 = puVar4;
  func_0x00010c1589e0();
  _objc_release(puVar7);
  puVar7 = puVar3;
  func_0x00010c264a00();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar7;
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar19 == (undefined *)0x0) {
    uStack_338 = 0;
    uStack_340 = 0;
    puStack_328 = (undefined *)0x0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
  }
  else {
    func_0x00010bf603a0(&uStack_350,puVar19);
  }
  puVar14 = puStack_328;
  _objc_release(puVar19);
  _objc_release(puVar7);
  puVar7 = puVar5;
  func_0x00010bf529e0();
  if (puVar7 != (undefined *)0x0) {
    puVar7 = puVar3;
    func_0x00010bfae440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar3;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = 0;
    puVar12 = puVar19;
    func_0x00010c066ae0(puVar7,param_2,puVar19,puVar14,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_release(puVar3);
    _objc_release(puVar7);
    puVar13 = puVar14;
  }
  _objc_release(puVar17);
  _objc_release(puVar11);
  _objc_release(puVar20);
  _objc_release(puVar18);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
    ___stack_chk_fail();
    _objc_retain(puVar12);
    _objc_retain(puVar13);
    _objc_retain(uVar15);
    puVar3 = PTR_PTR_1126b38b8;
    func_0x00010bfe5de0(PTR_PTR_1126b38b8,param_2,&PTR____CFConstantStringClassReference_110f273f8,
                        puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf4b780();
    _objc_release(puVar4);
    if ((int)puVar7 != 0) {
      func_0x00010befa120(puVar13,param_2,puVar3);
      func_0x00010be15fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010bfc15e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar4;
      func_0x00010c081f00();
      uVar1 = 7;
      if ((int)puVar5 == 0) {
        uVar1 = 0;
      }
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar15,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(uVar15);
    _objc_release(puVar13);
    _objc_release(puVar12);
    return puVar7;
  }
  return puVar5;
}



/* Entry: 105cdf900; end: 105ce01ff; -[SCPreviewFiltersLegacyController selectInitialFilters] */

undefined * FUN_105cdf900(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_178 [128];
  undefined1 auStack_f8 [128];
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c159780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = param_1;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar4;
  func_0x00010c1597a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar16;
  func_0x00010bf529e0();
  puVar6 = puVar16;
  if ((puVar4 == (undefined *)0x0) && (puVar5 != (undefined *)0x0)) {
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
  }
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  _objc_retain(puVar6);
  puVar4 = puVar6;
  func_0x00010bf52a60(puVar6,param_2,&uStack_1c0,auStack_f8,0x10);
  if (puVar4 != (undefined *)0x0) {
    lVar12 = *plStack_1b0;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_1b0 != lVar12) {
          _objc_enumerationMutation(puVar6);
        }
        func_0x00010bdc6fa0(param_1,param_2,*(undefined8 *)(lStack_1b8 + (long)puVar16 * 8),puVar2,
                            puVar3);
        puVar16 = puVar16 + 1;
      } while (puVar4 != puVar16);
      puVar4 = puVar6;
      func_0x00010bf52a60(puVar6,param_2,&uStack_1c0,auStack_f8,0x10);
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar6);
  puVar4 = param_1;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar4;
  func_0x00010c1594c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar16 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = *(undefined **)(puVar16 + 0x10);
  }
  _objc_retain(puVar14);
  _objc_release(puVar16);
  _objc_release(puVar4);
  puVar4 = param_1;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar4;
  func_0x00010c159500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar16;
  func_0x00010c08fa60();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126b38b8;
    func_0x00010bfe5de0(PTR_PTR_1126b38b8,param_2,&PTR____CFConstantStringClassReference_110f273f8,
                        puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010914e1a4();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_1;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010bf45e80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar15 == (undefined *)0x0) {
      _objc_release(puVar13);
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar8 = puVar14;
      func_0x00010c0720c0(puVar14,param_2,puVar7);
      _objc_release(puVar15);
      _objc_release(puVar13);
      if ((int)puVar8 == 0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = puVar2;
        func_0x00010bf4b900(puVar2,param_2,puVar4);
        if (((ulong)puVar13 & 1) == 0) {
          func_0x00010befa120(puVar2,param_2,puVar4);
          func_0x00010befa120(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c35e0);
        }
        _objc_retain(puVar7);
        _objc_retain(puVar7);
        _objc_release(puVar14);
        func_0x00010befa120(puVar2,param_2,puVar7);
        func_0x00010befa120(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c35f8);
        puVar13 = puVar7;
        puVar14 = puVar7;
      }
    }
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar13);
  }
  puVar4 = puVar14;
  func_0x00010c08fa60();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = param_1;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf4b780();
    _objc_release(puVar4);
    if ((int)puVar7 == 0) {
      puVar4 = param_1;
      func_0x00010bf24d40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = puVar7;
      func_0x00010c0946c0(puVar7,param_2,puVar14);
      _objc_retainAutoreleasedReturnValue();
      lStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      plStack_1f0 = (long *)0x0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      _objc_retain();
      puVar13 = puVar4;
      func_0x00010bf52a60(puVar4,param_2,&uStack_200,auStack_178,0x10);
      if (puVar13 != (undefined *)0x0) {
        lVar12 = *plStack_1f0;
        do {
          puVar15 = (undefined *)0x0;
          do {
            if (*plStack_1f0 != lVar12) {
              _objc_enumerationMutation(puVar4);
            }
            puVar8 = param_1;
            func_0x00010bdc6fa0(param_1,param_2,*(undefined8 *)(lStack_1f8 + (long)puVar15 * 8),
                                puVar2,puVar3);
            if (((ulong)puVar8 & 1) != 0) goto LAB_105cdfd74;
            puVar15 = puVar15 + 1;
          } while (puVar13 != puVar15);
          puVar13 = puVar4;
          func_0x00010bf52a60(puVar4,param_2,&uStack_200,auStack_178,0x10);
        } while (puVar13 != (undefined *)0x0);
      }
LAB_105cdfd74:
      _objc_release(puVar4);
      _objc_release(puVar4);
      _objc_release(puVar7);
    }
    else {
      func_0x00010befa120(puVar2,param_2,puVar14);
      func_0x00010befa120(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c35f8);
    }
  }
  puVar4 = param_1;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c15a000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar7;
  func_0x00010c08fa60();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = param_1;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    func_0x00010bf4b780();
    _objc_release(puVar4);
    if ((int)puVar13 != 0) {
      func_0x00010befa120(puVar2,param_2,puVar7);
      func_0x00010befa120(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3610);
    }
  }
  puVar4 = param_1;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar4;
  func_0x00010c15a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = param_1;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  func_0x00010c07ca80();
  _objc_release(puVar4);
  puVar4 = puVar13;
  func_0x00010c08fa60();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = param_1;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf4b780();
    _objc_release(puVar4);
    if ((int)puVar8 != 0) {
      func_0x00010befa120(puVar2,param_2,puVar13);
      func_0x00010befa120(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3628);
    }
  }
  if ((int)puVar15 != 0) {
    puVar4 = param_1;
    func_0x00010be15fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar4;
    func_0x00010c1400e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (puVar15 != (undefined *)0x0) {
      puVar4 = puVar15;
      func_0x00010c0e00e0(puVar15,param_2,PTR_PTR_11329cf60);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_1;
      func_0x00010c23eb80();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf4b780();
      _objc_release(puVar8);
      if ((int)puVar9 != 0) {
        puVar8 = puVar15;
        func_0x00010c0e00e0(puVar15,param_2,PTR_PTR_11329cf60);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,puVar8);
        _objc_release(puVar8);
        func_0x00010befa120(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3640);
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar15);
  }
  puVar4 = param_1;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  func_0x00010c082fa0();
  _objc_release(puVar4);
  if ((int)puVar15 != 0) {
    puVar4 = param_1;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar4;
    func_0x00010bf4b780();
    _objc_release(puVar4);
    if ((int)puVar15 != 0) {
      func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110f274f8);
      func_0x00010befa120(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3658);
    }
  }
  puVar4 = param_1;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  func_0x00010c07fe40();
  _objc_release(puVar4);
  if ((int)puVar15 != 0) {
    puVar4 = param_1;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar4;
    func_0x00010bf4b780();
    _objc_release(puVar4);
    if ((int)puVar15 != 0) {
      func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110f274d8);
      func_0x00010befa120(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3670);
    }
  }
  puVar4 = param_1;
  func_0x00010bec9360(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0;
  puVar8 = puVar2;
  puVar9 = puVar3;
  func_0x00010c1589e0();
  _objc_release(puVar4);
  puVar4 = param_1;
  func_0x00010c264a00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar15 == (undefined *)0x0) {
    uStack_218 = 0;
    uStack_220 = 0;
    puStack_208 = (undefined *)0x0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
  }
  else {
    func_0x00010bf603a0(&uStack_230,puVar15);
  }
  puVar10 = puStack_208;
  _objc_release(puVar15);
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010bf529e0();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = param_1;
    func_0x00010bfae440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_1;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = 0;
    puVar8 = puVar15;
    func_0x00010c066ae0(puVar4,param_2,puVar15,puVar10,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(param_1);
    _objc_release(puVar4);
    puVar9 = puVar10;
  }
  _objc_release(puVar13);
  _objc_release(puVar7);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _objc_retain(uVar11);
  puVar3 = PTR_PTR_1126b38b8;
  func_0x00010bfe5de0(PTR_PTR_1126b38b8,param_2,&PTR____CFConstantStringClassReference_110f273f8,
                      puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c23eb80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf4b780();
  _objc_release(puVar4);
  if ((int)puVar5 != 0) {
    func_0x00010befa120(puVar9,param_2,puVar3);
    func_0x00010be15fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfc15e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar4;
    func_0x00010c081f00();
    uVar1 = 7;
    if ((int)puVar2 == 0) {
      uVar1 = 0;
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar11,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(uVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  return puVar5;
}



/* Entry: 105ce0200; end: 105ce0353; -[SCPreviewFiltersLegacyController _addGeoOrUCOFilterIdIfApplicable:selectedFilterNames:selectedFilterTypes:] */

undefined8
FUN_105ce0200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b38b8;
  func_0x00010bfe5de0(PTR_PTR_1126b38b8,param_2,&PTR____CFConstantStringClassReference_110f273f8,
                      param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c23eb80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b780();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    func_0x00010befa120(param_4,param_2,puVar1);
    func_0x00010be15fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bfc15e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar5 = uVar4;
    func_0x00010c081f00();
    uVar2 = 7;
    if ((int)uVar5 == 0) {
      uVar2 = 0;
    }
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(param_5,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(uVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105ce0354; end: 105ce0dc7; -[SCPreviewFiltersLegacyController filtersStateWithStripsUnselectedSponsoredFilters] */

undefined * FUN_105ce0354(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
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
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined *puVar22;
  long lVar23;
  ulong uStack_1b8;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    puVar22 = (undefined *)0x0;
    goto LAB_105ce0d84;
  }
  uVar1 = param_1;
  func_0x00010bec9360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf69ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfede80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar3 = param_1;
  if (uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010be15fe0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b8 = uVar1;
    func_0x000108e4b1bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010be15fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x000108e4b0a4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_1;
    func_0x00010bfede80();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b8 = uVar1;
    func_0x000108e5a28c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010bfede80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x000108e5a160();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bec9360(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5ea80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bec9360();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5ea80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010be0c9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c1597e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c2325e0();
  _objc_release(uVar6);
  uVar6 = uVar5;
  uVar8 = uVar3;
  if ((int)uVar7 != 0) {
    func_0x00010c14cca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010c14cca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  uVar3 = param_1;
  func_0x00010bec9360();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf5ea80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c297ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c0720c0(uVar5);
  uVar3 = param_1;
  func_0x00010beca220();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    _objc_retain(uVar3);
    _objc_release(uVar7);
    uVar7 = uVar3;
  }
  uVar9 = param_1;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c249d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = param_1;
  func_0x00010bec9360();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf5ea80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_retain(uVar11);
  func_0x00010bfece40();
  uVar9 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010c083340();
  _objc_release(uVar9);
  if ((int)uVar12 != 0) {
    uVar9 = param_1;
    func_0x00010c264a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07ca80();
    _objc_release(uVar9);
  }
  uVar9 = param_1;
  func_0x00010bec9360();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf5ea80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = uVar12;
  func_0x00010c0720c0();
  if ((((uint)uVar9 ^ 1) & 1) == 0) {
    uVar9 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar9;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c073b80();
    _objc_release(uVar13);
    _objc_release(uVar9);
    if ((int)uVar14 != 0) goto LAB_105ce07fc;
  }
  else {
LAB_105ce07fc:
    uVar9 = param_1;
    func_0x00010be15fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25be80();
    _objc_release(uVar9);
  }
  puVar22 = PTR_PTR_1126c3ca0;
  _objc_alloc_init(PTR_PTR_1126c3ca0);
  uVar9 = param_1;
  func_0x00010be15fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x00010bfc1600();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bfadbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182f00(puVar22);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar9);
  func_0x00010c1bb2a0(puVar22);
  func_0x00010c18b0e0(puVar22);
  func_0x00010c203460(puVar22);
  func_0x00010c203440(puVar22);
  func_0x00010c1a2c80(puVar22);
  func_0x00010c1a2ca0(puVar22);
  uVar9 = uVar7;
  func_0x00010bf51e00(uVar7);
  func_0x00010c220880(puVar22);
  _objc_release(uVar9);
  func_0x00010c1b5920(puVar22);
  func_0x00010c207d20(puVar22);
  func_0x00010c207ce0(puVar22);
  uVar9 = param_1;
  func_0x00010be15fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x00010c1400e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1edd80(puVar22);
  _objc_release(uVar13);
  _objc_release(uVar9);
  func_0x00010c1eddc0(puVar22);
  func_0x00010c20e2c0(puVar22);
  func_0x00010c20e340(puVar22);
  uVar9 = param_1;
  func_0x00010bec9360(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x00010bf60680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216e40(puVar22);
  _objc_release(uVar13);
  _objc_release(uVar9);
  uVar9 = param_1;
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x00010c2a0440();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c0d3c80();
  _objc_release(uVar13);
  _objc_release(uVar9);
  uVar9 = param_1;
  func_0x00010bec9360();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x00010c0d4f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if ((uVar13 == 0) || (uVar9 = uVar14, func_0x00010bf4b900(), (uVar9 & 1) != 0)) {
    func_0x00010bfecde0();
  }
  else {
    uVar9 = uVar13;
    func_0x00010bf4bb00();
    uVar21 = uVar13;
    if ((int)uVar9 == 0) {
      func_0x00010914e1a4(uVar13);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(uVar13);
    }
    func_0x00010c066b00(uVar14);
    _objc_release(uVar21);
  }
  puVar15 = PTR_PTR_1126c3ca8;
  func_0x00010c2300a0();
  if (((int)puVar15 != 0) && (uVar4 != 0)) {
    _objc_retain(uVar8);
    uVar9 = uVar8;
    func_0x00010bf52a60();
    lVar18 = lRam0000000000000000;
    while (uVar9 != 0) {
      uVar21 = 0;
      do {
        if (lRam0000000000000000 != lVar18) {
          _objc_enumerationMutation(uVar8);
        }
        puVar15 = PTR_PTR_1126b38b8;
        lVar23 = *(long *)(uVar21 * 8);
        lVar16 = lVar23;
        func_0x00010bfadea0(lVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe5de0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar16);
        puVar17 = puVar15;
        func_0x00010c0720c0();
        if ((int)puVar17 != 0) {
          lVar16 = lVar23;
          func_0x00010bf09360();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar16 != 0) {
            func_0x00010be15fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = param_1;
            func_0x00010bfc1240();
            _objc_retainAutoreleasedReturnValue();
            uVar21 = uVar9;
            func_0x00010bfb2040();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar9);
            _objc_release(param_1);
            uVar9 = uVar21;
            func_0x00010bfaea60();
            _objc_retainAutoreleasedReturnValue();
            if (uVar9 != 0) {
              lVar18 = lVar23;
              func_0x00010bfadea0(lVar23);
              _objc_retainAutoreleasedReturnValue();
              uVar19 = uVar13;
              func_0x00010bf4bb00();
              _objc_release(lVar18);
              _objc_release(uVar9);
              if ((int)uVar19 != 0) {
                func_0x00010bfadea0(lVar23);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c182fe0(puVar22);
                _objc_release(lVar23);
              }
            }
            _objc_release(uVar21);
            _objc_release(puVar15);
            goto LAB_105ce0cd8;
          }
        }
        _objc_release(puVar15);
        uVar21 = uVar21 + 1;
      } while (uVar9 != uVar21);
      uVar9 = uVar8;
      func_0x00010bf52a60();
    }
LAB_105ce0cd8:
    _objc_release(uVar8);
  }
  func_0x00010c223ee0(puVar22);
  func_0x00010c223ea0(puVar22);
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uStack_1b8);
  _objc_release(uVar2);
LAB_105ce0d84:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
    return puVar22;
  }
  ___stack_chk_fail();
  func_0x00010c081f00(param_2);
  return (undefined *)(ulong)((uint)param_2 ^ 1);
}


