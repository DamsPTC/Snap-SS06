/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ff1e3c; end: 105ff1e63; -[SCScanResultsSnapcodeUnlockLensViewModelProvider scanResultViewModels] */

void FUN_105ff1e3c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ff1e64; end: 105ff1fe3; -[SCScanResultsSnapcodeUnlockLensViewModelProvider configureWithContext:] */

void FUN_105ff1e64(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_3;
    _objc_release(uVar1);
    lVar2 = param_3;
    func_0x00010c0cfc40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = lVar2;
    _objc_release(uVar1);
    _objc_initWeak(auStack_58,param_1);
    lVar2 = param_3;
    func_0x00010c2450c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e0ea0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    lVar5 = lVar4;
    func_0x00010c25ff60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ff1fe4; end: 105ff202b;  */

void FUN_105ff1fe4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be308e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff202c; end: 105ff247b; -[SCScanResultsSnapcodeUnlockLensViewModelProvider _handleSnapcodeMetadata:] */

void FUN_105ff202c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28ff20();
  if (lVar1 == 2) {
    lVar1 = param_3;
    func_0x00010c25d140();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126ae558;
      func_0x00010bfe9c80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x000105ff5e8c();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_80,param_1);
      puVar6 = PTR_PTR_1126aef38;
      _objc_alloc();
      ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4360;
      puVar7 = puVar6;
      func_0x000105ff5e8c();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_70 = puVar7;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126ae6b8;
      _objc_alloc_init(PTR_PTR_1126ae6b8);
      puVar10 = PTR_PTR_1126ae6b8;
      _objc_alloc_init(PTR_PTR_1126ae6b8);
      puVar11 = PTR_PTR_1126ae6b8;
      _objc_alloc_init(PTR_PTR_1126ae6b8);
      _objc_copyWeak(auStack_88,auStack_80);
      _objc_retain(lVar1);
      func_0x00010c0048e0();
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar8 = PTR_PTR_1126aef40;
      _objc_alloc(PTR_PTR_1126aef40);
      puVar7 = PTR_PTR_1126aef30;
      func_0x00010c25d9a0(PTR_PTR_1126aef30);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020120(puVar8);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126aef48;
      puVar9 = PTR_PTR_1126aef50;
      _objc_alloc(PTR_PTR_1126aef50);
      lVar2 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar2;
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_3;
      func_0x00010c14f740(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05a5c0(puVar9);
      func_0x00010c2453a0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar2);
      puVar9 = PTR_PTR_1126aef58;
      _objc_alloc(PTR_PTR_1126aef58);
      puVar10 = puVar9;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b920(puVar9);
      _objc_release(puVar11);
      _objc_release(puVar10);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 8));
      func_0x00010bed15c0(param_1);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010bed15c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ff247c; end: 105ff24b7;  */

void FUN_105ff247c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed15c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff24b8; end: 105ff259f; -[SCScanResultsSnapcodeUnlockLensViewModelProvider _unlockLensWithLensId:resultType:isAutoUnlock:] */

void FUN_105ff24b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105ff25a0;
  puStack_60 = &UNK_11087b9c8;
  _objc_copyWeak(auStack_50,auStack_38);
  _objc_retain(param_3);
  uStack_58 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff25a0; end: 105ff25db;  */

void FUN_105ff25a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be326a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff25dc; end: 105ff2897; -[SCScanResultsSnapcodeUnlockLensViewModelProvider _handleUnlockLensWithLensId:resultType:isAutoUnlock:] */

void FUN_105ff25dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b1ab0;
  puVar1 = PTR_PTR_1126b1ab8;
  _objc_alloc(PTR_PTR_1126b1ab8);
  func_0x00010c024960();
  func_0x00010c094620(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_initWeak(auStack_78,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c281720();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105ff2898;
  puStack_90 = &UNK_110907198;
  _objc_retain(param_3);
  uStack_88 = param_3;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar5 = uVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c0f8040();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_b0;
  _objc_copyWeak(puVar7,auStack_78);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar8);
  _objc_release(uVar6);
  if (param_5 != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14eac0();
    _objc_release(uVar8);
  }
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff2898; end: 105ff2913;  */

void FUN_105ff2898(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be014c0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ff2914; end: 105ff2963;  */

void FUN_105ff2914(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    _objc_retain(param_3);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be03200();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ff2964; end: 105ff29b7; -[SCScanResultsSnapcodeUnlockLensViewModelProvider _didUnlockLens:] */

void FUN_105ff2964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be423e0(param_1,param_2,param_3);
  if ((int)uVar1 == 0) {
    func_0x00010be05040(param_1,param_2,param_3);
  }
  else {
    func_0x00010bebb060(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ff29b8; end: 105ff2a8f; -[SCScanResultsSnapcodeUnlockLensViewModelProvider _displayUnlockedLens:] */

void FUN_105ff29b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be047c0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff2a90; end: 105ff2aef;  */

void FUN_105ff2a90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1 + 0x50;
    _objc_loadWeakRetained(lVar2);
    func_0x00010befd8c0(uVar3,param_2,lVar2,0);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ff2af0; end: 105ff2c67; -[SCScanResultsSnapcodeUnlockLensViewModelProvider _displayLens:completion:] */

void FUN_105ff2af0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010beeffa0(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c158ca0(lVar1);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff2c68; end: 105ff2c93;  */

void FUN_105ff2c68(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff2c94; end: 105ff2c9b; -[SCScanResultsSnapcodeUnlockLensViewModelProvider _dismissPreview] */

void FUN_105ff2c94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreviewWithError__11255e620,0);
  return;
}



/* Entry: 105ff2c9c; end: 105ff2cef; -[SCScanResultsSnapcodeUnlockLensViewModelProvider _dismissPreviewWithError:] */

void FUN_105ff2c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010beeee20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84040();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ff2cf0; end: 105ff2e97; -[SCScanResultsSnapcodeUnlockLensViewModelProvider _activateLenses:] */

void FUN_105ff2cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef6e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c0e0e60(lVar5,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x105ff2ea0;
  puStack_70 = &UNK_110849530;
  uStack_68 = param_3;
  _objc_retain(param_3);
  lVar8 = lVar7;
  func_0x00010c25ff20(lVar7,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = lVar8;
  _objc_release(uVar9);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff2e98; end: 105ff2eab;  */

void FUN_105ff2e98(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 105ff2eac; end: 105ff2f43; -[SCScanResultsSnapcodeUnlockLensViewModelProvider _isNewportOnlyLens:] */

long FUN_105ff2eac(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf07540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  if (lVar3 == 1) {
    lVar2 = param_3;
    func_0x00010bf07540(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4b900();
    _objc_release(lVar2);
  }
  else {
    lVar3 = 0;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105ff2f44; end: 105ff2fc7; -[SCScanResultsSnapcodeUnlockLensViewModelProvider _showSpectaclesSupportPage] */

void FUN_105ff2f44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e35f38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_105ff5c6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18eb00();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x68));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ff2fc8; end: 105ff300f; -[SCScanResultsSnapcodeUnlockLensViewModelProvider webBrowserDidDismiss:] */

void FUN_105ff2fc8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x68));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ff3010; end: 105ff30bb; -[SCScanResultsSnapcodeUnlockLensViewModelProvider .cxx_destruct] */

void FUN_105ff3010(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ff30bc; end: 105ff3277; -[SCScanResultsSnapcodeUnlockLensViewModelProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff30bc(long param_1,undefined8 param_2)

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
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126c6ec8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11273c9a4;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11273c9a8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c278c20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11273c9ac;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf299a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11273c9b0;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c0b6a20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11273c9b4;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010c160160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0030e0(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,
                      *(undefined8 *)(param_1 + _DAT_11273c9b8));
  uVar12 = *(undefined8 *)(param_1 + _DAT_11273c9bc);
  *(undefined **)(param_1 + _DAT_11273c9bc) = puVar1;
  _objc_release(uVar12);
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
  param_1 = param_1 + _DAT_11273c9c0;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff3278; end: 105ff32e7; -[SCScanResultsSnapcodeUnlockLensViewModelProviderEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff3278(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long alStack_40 [2];
  long alStack_30 [2];
  
  plVar2 = alStack_40;
  lVar3 = (long)_DAT_11273c9bc;
  if (*(long *)(param_1 + lVar3) == 0) {
    plVar2 = alStack_30;
  }
  else {
    func_0x00010bf940a0();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
  }
  *plVar2 = param_1;
  plVar2[1] = (long)PTR_PTR_1126eef58;
  _objc_msgSendSuper2(plVar2,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ff32e8; end: 105ff336f; -[SCScanResultsSnapcodeUnlockLensViewModelProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff32e8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273c9b8,0);
  _objc_destroyWeak(param_1 + _DAT_11273c9b4);
  _objc_destroyWeak(param_1 + _DAT_11273c9b0);
  _objc_destroyWeak(param_1 + _DAT_11273c9ac);
  _objc_destroyWeak(param_1 + _DAT_11273c9c0);
  _objc_destroyWeak(param_1 + _DAT_11273c9a8);
  _objc_destroyWeak(param_1 + _DAT_11273c9a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273c9bc,0);
  return;
}



/* Entry: 105ff3370; end: 105ff34db; -[SCScanResultsURLViewModelProvider initWithContentDeliveryServices:deepLinkHandler:circumstanceEngine:logger:browserScopeExposer:] */

undefined1 *
FUN_105ff3370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eef60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c6e98;
    _objc_alloc();
    func_0x00010c002e80();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ff34dc; end: 105ff359b; -[SCScanResultsURLViewModelProvider end] */

void FUN_105ff34dc(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105ff359c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bcbe2c4("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105ff359c; end: 105ff35c7;  */

void FUN_105ff359c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff35c8; end: 105ff35ef; -[SCScanResultsURLViewModelProvider scanResultViewModels] */

void FUN_105ff35c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ff35f0; end: 105ff383b; -[SCScanResultsURLViewModelProvider configureWithContext:] */

void FUN_105ff35f0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_3;
    _objc_release(uVar1);
    lVar2 = param_3;
    func_0x00010c0cfc40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar2;
    _objc_release(uVar1);
    _objc_initWeak(auStack_68,param_1);
    lVar2 = param_3;
    func_0x00010c2450c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e0ea0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105ff383c;
    puStack_78 = &UNK_110847a08;
    _objc_copyWeak(auStack_70,auStack_68);
    lVar5 = lVar4;
    func_0x00010c25ff60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf15ba0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e0ea0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_68);
    lVar5 = lVar4;
    func_0x00010c25ff60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ff383c; end: 105ff38cb;  */

void FUN_105ff383c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be308e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff38cc; end: 105ff3a2f; -[SCScanResultsURLViewModelProvider _handleSnapcodeMetadata:] */

void FUN_105ff38cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28ff20();
  if (lVar1 == 3) {
    puVar2 = PTR_PTR_1126bc180;
    _objc_alloc(PTR_PTR_1126bc180);
    lVar3 = param_3;
    func_0x00010c0f6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = 0;
    func_0x00010c008360(puVar2,param_2,lVar3,&lStack_58);
    lVar1 = lStack_58;
    _objc_retain(lStack_58);
    _objc_release(lVar3);
    if (lVar1 == 0) {
      puVar4 = puVar2;
      func_0x00010bdc2b80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c14f740(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(param_1 + 0x18);
      func_0x00010c14f4a0(lVar7);
      func_0x00010be325c0(param_1,param_2,puVar4,3,lVar5,lVar6,lVar7 == 5,0x21,1);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar3);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ff3a30; end: 105ff3b03; -[SCScanResultsURLViewModelProvider _handleBarcodeResult:] */

void FUN_105ff3a30(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13ca20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c265b00();
  if (lVar2 == 0x10) {
    lVar2 = lVar1;
    func_0x00010c0f6420(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0f6420(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c07d2e0(param_3);
    func_0x00010be325c0(param_1,param_2,lVar2,0,lVar3,0,lVar4,0x26,1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ff3b04; end: 105ff4127; -[SCScanResultsURLViewModelProvider _handleURL:snapcodeUseCase:decodedUuid:scannableId:isScannedRealTime:resultType:isAutoOpened:] */

void FUN_105ff3b04(long param_1,undefined1 *param_2,undefined **param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar1 = param_3;
  func_0x00010c0720c0();
  if (((ulong)ppuVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc2d00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0720c0();
    if ((int)puVar4 != 0) {
      _objc_release(puVar3);
      _objc_release(puVar2);
      goto LAB_105ff3c00;
    }
    ppuVar1 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)ppuVar1 != 0) goto LAB_105ff3c00;
  }
  else {
LAB_105ff3c00:
    _objc_release(param_3);
    param_3 = &PTR____CFConstantStringClassReference_110e35fd8;
  }
  puVar2 = PTR_PTR_1126c6ea0;
  func_0x00010c28f5a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x0) goto LAB_105ff4050;
  puVar3 = puVar2;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0();
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar2;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0720c0();
    if ((int)puVar5 != 0) {
      _objc_release(puVar4);
      goto LAB_105ff3ca0;
    }
    uVar15 = *(ulong *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c082da0();
    _objc_release(uVar15);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if ((uVar16 & 1) == 0) goto LAB_105ff4050;
  }
  else {
LAB_105ff3ca0:
    _objc_release(puVar3);
  }
  puVar5 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  puVar6 = puVar5;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfe6ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105ff4128;
  puStack_a0 = &UNK_11084d858;
  _objc_retain(puVar5);
  uVar8 = uVar7;
  puStack_98 = puVar5;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_release();
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4378;
  func_0x000105ff5ed4();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_88 = uVar7;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_initWeak(auStack_c0,param_1);
  puStack_100 = puVar3;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_105ff4134;
  puStack_e8 = &UNK_11087b9c8;
  param_2 = auStack_c0;
  _objc_copyWeak(auStack_d8,param_2);
  _objc_retain(puVar2);
  ppuVar1 = &puStack_100;
  puStack_e0 = puVar2;
  uStack_d0 = param_8;
  uStack_c8 = param_7;
  _objc_retainBlock();
  puVar3 = PTR_PTR_1126aef30;
  puVar4 = puVar2;
  func_0x00010bfe4420(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar10 = PTR_PTR_1126aef38;
  _objc_alloc(PTR_PTR_1126aef38);
  puVar4 = PTR_PTR_1126ae6b8;
  _objc_alloc_init(PTR_PTR_1126ae6b8);
  puVar11 = PTR_PTR_1126ae6b8;
  _objc_alloc_init(PTR_PTR_1126ae6b8);
  puVar12 = PTR_PTR_1126ae6b8;
  _objc_alloc_init(PTR_PTR_1126ae6b8);
  func_0x00010c0048e0(puVar10);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar4);
  puVar11 = PTR_PTR_1126aef40;
  _objc_alloc(PTR_PTR_1126aef40);
  func_0x00010c020120();
  puVar4 = PTR_PTR_1126aef48;
  if (param_4 == 0) {
    puVar12 = PTR_PTR_1126c6ea8;
    _objc_alloc(PTR_PTR_1126c6ea8);
    func_0x00010c061da0();
    func_0x00010c11cde0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar12 = PTR_PTR_1126aef50;
    _objc_alloc(PTR_PTR_1126aef50);
    func_0x00010c05a5c0();
    func_0x00010c2453a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126aef58;
  _objc_alloc(PTR_PTR_1126aef58);
  puVar13 = puVar12;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b920(puVar12);
  _objc_release(puVar14);
  _objc_release(puVar13);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8));
  func_0x00010be6d7e0(param_1);
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar3);
  _objc_release(ppuVar1);
  _objc_release(puStack_e0);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar9);
  _objc_release(puStack_98);
  _objc_release(puVar6);
  _objc_release(puVar5);
LAB_105ff4050:
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_c0);
    __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3[4],PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
  return;
}



/* Entry: 105ff4128; end: 105ff4133;  */

void FUN_105ff4128(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 105ff4134; end: 105ff41ef;  */

void FUN_105ff4134(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105ff41f0;
  puStack_58 = &UNK_11087b9c8;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_38 = *(undefined1 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105ff41f0; end: 105ff422f;  */

void FUN_105ff41f0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff4230; end: 105ff435f; -[SCScanResultsURLViewModelProvider _openURL:isScannedRealTime:resultType:isAutoOpened:] */

void FUN_105ff4230(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,int param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be6d0c0();
  if ((uVar1 & 1) == 0) {
    if (param_4 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
      _objc_alloc_init(PTR__OBJC_CLASS___UIViewController_1126af898);
      func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
      puVar3 = PTR_PTR_1126aead8;
      _objc_alloc();
      func_0x00010c038f40();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar3;
      _objc_release(uVar4);
      _objc_release(puVar2);
    }
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105ff4360;
    puStack_58 = &UNK_110841f80;
    uStack_50 = param_1;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_70);
    if (param_6 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14eac0();
      _objc_release(uVar4);
    }
    _objc_release(uStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ff4360; end: 105ff43eb;  */

void FUN_105ff4360(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126c6ed0;
  _objc_alloc(PTR_PTR_1126c6ed0);
  func_0x00010c00a4c0();
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = *(long *)(lVar1 + 0x28);
  if (lVar4 == 0) {
    lVar4 = *(long *)(lVar1 + 0x20);
  }
  FUN_105ff5c6c(uVar3,lVar4,lVar1,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18eb00();
  func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105ff43ec; end: 105ff452f; -[SCScanResultsURLViewModelProvider _openDeeplinkURLIfNecessary:] */

undefined8 FUN_105ff43ec(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c082da0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x000106891090();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      goto LAB_105ff44ec;
    }
  }
  else {
    _objc_release(uVar1);
  }
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfd1bc0(uVar3);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  uVar3 = 1;
LAB_105ff44ec:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105ff4530; end: 105ff45df;  */

void FUN_105ff4530(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0be280(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105ff45e0; end: 105ff460f;  */

void FUN_105ff45e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff4610; end: 105ff46d7; -[SCScanResultsURLViewModelProvider _handleOpenEventForUseCase:] */

void FUN_105ff4610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105ff4698;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_1;
  uStack_28 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_50);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14eac0();
  _objc_release(uVar1);
  return;
}



/* Entry: 105ff46d8; end: 105ff4743; -[SCScanResultsURLViewModelProvider _dismissBrowser] */

/* WARNING: Possible PIC construction at 0x000105ff4720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105ff4724) */

void FUN_105ff46d8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x50));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 105ff4744; end: 105ff484b; -[SCScanResultsURLViewModelProvider webBrowserDidDismiss:] */

void FUN_105ff4744(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105ff484c;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010beeee20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84020();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ff484c; end: 105ff4877;  */

void FUN_105ff484c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff4878; end: 105ff4957; -[SCScanResultsURLViewModelProvider urlInterceptorWillExternalDeeplink:] */

void FUN_105ff4878(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105ff4958;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ff4958; end: 105ff4983;  */

void FUN_105ff4958(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff4984; end: 105ff4a73; -[SCScanResultsURLViewModelProvider urlInterceptorWillInternalDeeplink:] */

void FUN_105ff4984(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105ff4a74;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    func_0x00010be6d0c0(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ff4a74; end: 105ff4a9f;  */

void FUN_105ff4a74(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff4aa0; end: 105ff4b2f; -[SCScanResultsURLViewModelProvider .cxx_destruct] */

void FUN_105ff4aa0(long param_1)

{
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



/* Entry: 105ff4b30; end: 105ff4cb3; -[SCScanResultsURLViewModelProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff4b30(long param_1,undefined8 param_2)

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
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126c6ed8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11273c9ec;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11273c9f0;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf67f80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11273c9f4;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11273c9f8;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c160160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003460(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,
                      *(undefined8 *)(param_1 + _DAT_11273c9fc));
  uVar10 = *(undefined8 *)(param_1 + _DAT_11273ca00);
  *(undefined **)(param_1 + _DAT_11273ca00) = puVar1;
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11273ca04;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff4cb4; end: 105ff4d23; -[SCScanResultsURLViewModelProviderEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff4cb4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long alStack_40 [2];
  long alStack_30 [2];
  
  plVar2 = alStack_40;
  lVar3 = (long)_DAT_11273ca00;
  if (*(long *)(param_1 + lVar3) == 0) {
    plVar2 = alStack_30;
  }
  else {
    func_0x00010bf940a0();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
  }
  *plVar2 = param_1;
  plVar2[1] = (long)PTR_PTR_1126eef68;
  _objc_msgSendSuper2(plVar2,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ff4d24; end: 105ff4d9f; -[SCScanResultsURLViewModelProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff4d24(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273c9fc,0);
  _objc_destroyWeak(param_1 + _DAT_11273ca04);
  _objc_destroyWeak(param_1 + _DAT_11273c9f8);
  _objc_destroyWeak(param_1 + _DAT_11273c9f4);
  _objc_destroyWeak(param_1 + _DAT_11273c9f0);
  _objc_destroyWeak(param_1 + _DAT_11273c9ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ca00,0);
  return;
}



/* Entry: 105ff4da0; end: 105ff4e13; -[SCUtilityServiceAssetProvider initWithContentDelivery:] */

undefined1 * FUN_105ff4da0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eef70;
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



/* Entry: 105ff4e14; end: 105ff4f0f; -[SCUtilityServiceAssetProvider imageAssetWithURL:] */

void FUN_105ff4e14(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_retain();
    _objc_retain(puVar1);
    func_0x00010be11aa0(0x3ff0000000000000,param_1);
    _objc_release(param_1);
    _objc_retain(puVar1);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_38);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ff4f10; end: 105ff4f23;  */

void FUN_105ff4f10(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
    return;
  }
  return;
}



/* Entry: 105ff4f24; end: 105ff502b; -[SCUtilityServiceAssetProvider imageAssetWithURL:scale:] */

void FUN_105ff4f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_48,param_2);
    _objc_retain();
    _objc_retain(puVar1);
    func_0x00010be11aa0(param_1,param_2);
    _objc_release(param_2);
    _objc_retain(puVar1);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_48);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ff502c; end: 105ff503f;  */

void FUN_105ff502c(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
    return;
  }
  return;
}



/* Entry: 105ff5040; end: 105ff5123; -[SCUtilityServiceAssetProvider animatedImageWithUrl:] */

void FUN_105ff5040(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    _objc_initWeak(auStack_38,param_1);
    _objc_retain();
    _objc_retain(puVar1);
    func_0x00010bdcb460(param_1);
    _objc_release(param_1);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ff5124; end: 105ff5137;  */

void FUN_105ff5124(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
    return;
  }
  return;
}



/* Entry: 105ff5138; end: 105ff5273; -[SCUtilityServiceAssetProvider imageFutureWithURL:] */

void FUN_105ff5138(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c08fa60();
  puVar2 = PTR_PTR_1126ae558;
  if (puVar1 == (undefined *)0x0) {
    FUN_105ff5274();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    _objc_initWeak(auStack_38,param_1);
    _objc_retain();
    _objc_retain(puVar1);
    func_0x00010be11aa0(0x3ff0000000000000,param_1);
    _objc_release(param_1);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ff5274; end: 105ff5333;  */

void FUN_105ff5274(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)PTR__NSDebugDescriptionErrorKey_110345400;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e36018;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_30,&uStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
  return;
}



/* Entry: 105ff5334; end: 105ff5347;  */

void FUN_105ff5334(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
  return;
}



/* Entry: 105ff5348; end: 105ff551f; -[SCUtilityServiceAssetProvider animatedImageFutureWithURLTemplate:sequenceSize:animationDuration:] */

void FUN_105ff5348(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_initWeak(auStack_68,param_1);
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = auStack_68;
      _objc_loadWeakRetained(puVar3);
      puVar4 = puVar3;
      func_0x00010bfe7d20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      lVar7 = lVar7 + 1;
    } while (param_4 != lVar7);
  }
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  puVar6 = puVar5;
  _objc_retain();
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar2);
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010bfbc3e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105ff5520; end: 105ff55b7;  */

void FUN_105ff5520(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 == 0) {
    func_0x00010bf51e00(param_2);
    uVar3 = NEON_ucvtf(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bf036a0(uVar3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar2);
    _objc_release(puVar1);
  }
  else {
    FUN_105ff5274();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar2);
    param_2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ff55b8; end: 105ff565b; -[SCUtilityServiceAssetProvider _fetchImageAssetWithURL:scale:completion:] */

void FUN_105ff55b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105ff565c;
  puStack_58 = &UNK_110907278;
  uStack_50 = param_5;
  uStack_48 = param_1;
  _objc_retain(param_5);
  func_0x00010be0faa0(param_2,param_3,param_4,&puStack_70);
  _objc_release(uStack_50);
  _objc_release(param_5);
  return;
}



/* Entry: 105ff565c; end: 105ff574f;  */

void FUN_105ff565c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010bfc5880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (lVar1 != 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      lVar1 = param_2;
      func_0x00010bfc5880(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64a80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d080(*(undefined8 *)(param_1 + 0x28),puVar3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(lVar1);
      goto LAB_105ff5738;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
LAB_105ff5738:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ff5750; end: 105ff59ff; -[SCUtilityServiceAssetProvider _fetchAssetWithURL:completion:] */

void FUN_105ff5750(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc();
  func_0x00010c0295e0();
  puVar2 = PTR_PTR_1126b1058;
  _objc_alloc();
  func_0x00010c01b360();
  puVar3 = PTR_PTR_1126b1050;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a200(puVar3);
  _objc_release(puVar4);
  puVar5 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puVar4 = PTR_PTR_1126b1378;
  func_0x00010c0c46a0(puVar1);
  func_0x00010c1081a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf64e40(0x4143c68000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  func_0x00010bf88aa0(uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff5a00; end: 105ff5a33;  */

void FUN_105ff5a00(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be961c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff5a34; end: 105ff5b63; -[SCUtilityServiceAssetProvider _animatedImageWithURL:completion:] */

void FUN_105ff5a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105ff5ac8;
  puStack_40 = &UNK_110860410;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010be0faa0(param_1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 105ff5b64; end: 105ff5c53; -[SCUtilityServiceAssetProvider _retrieveAssetWithContentKey:completion:] */

void FUN_105ff5b64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105ff5c54;
  puStack_40 = &UNK_110860410;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c13e560(uVar1,param_2,param_3,puVar2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff5c54; end: 105ff5c5f;  */

void FUN_105ff5c54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105ff5c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105ff5c60; end: 105ff5c6b; -[SCUtilityServiceAssetProvider .cxx_destruct] */

void FUN_105ff5c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ff5c6c; end: 105ff5e7f;  */

void FUN_105ff5c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain();
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae630;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bfe6000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ad780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init(PTR_PTR_1126ae560);
  puVar2 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  _objc_retain(param_1);
  if (param_5 == 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar2);
    _objc_release(uVar5);
  }
  else {
    func_0x00010c297260(puVar2);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  puVar3 = puVar2;
  func_0x00010bf22ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ff5e80; end: 105ff5f1b;  */

void FUN_105ff5e80(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105ff5f1c; end: 105ff606b; -[SCLens adjustDevicePositionWithCameraAPI:completion:] */

void FUN_105ff5f1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105ff606c;
  puStack_40 = &UNK_110849530;
  _objc_retain(param_4);
  ppuVar1 = &puStack_58;
  uStack_38 = param_4;
  _objc_retainBlock();
  func_0x00010bef0200();
  if (param_1 == -1) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    uVar2 = param_3;
    if (param_1 == 1) {
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126afed0;
      func_0x00010c0db140(PTR_PTR_1126afed0);
      uVar4 = 1;
    }
    else {
      if (param_1 != 0) goto LAB_105ff6038;
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126afed0;
      func_0x00010c0db140(PTR_PTR_1126afed0);
      uVar4 = 0;
    }
    func_0x00010c18cd00(uVar2,param_2,uVar4,puVar3,ppuVar1,
                        &PTR____CFConstantStringClassReference_110e36118);
    _objc_release(uVar2);
  }
LAB_105ff6038:
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff606c; end: 105ff607f;  */

void FUN_105ff606c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105ff6078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105ff6080; end: 105ff610b; +[SCLensCarouselActivationConfiguration lensCarouselActivationConfigurationForScan] */

void FUN_105ff6080(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c6ee0;
  _objc_alloc_init(PTR_PTR_1126c6ee0);
  func_0x00010c2a7680();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a9a40(puVar1,param_2,&PTR____CFConstantStringClassReference_110e3d018);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8640(puVar1,param_2,&PTR____CFConstantStringClassReference_110e36118);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ff610c; end: 105ff6173; +[SCSnapcodePayloadSponsoredLensPreview descriptor] */

void FUN_105ff610c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2548 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab8d70,
                        &PTR____CFConstantStringClassReference_110e36138,&PTR_DAT_113135118,
                        &PTR_s_lensId_113135130,3,0x20,0x1c);
    puRam00000001136c2548 = puVar1;
  }
  return;
}



/* Entry: 105ff6174; end: 105ff631b; -[SCScanResultsNotificationUIEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff6174(long param_1,undefined8 param_2)

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
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126c6ee8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11273ca0c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11273ca10;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11273ca14;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c121c20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar8;
  func_0x00010bf15a60();
  lVar13 = (long)_DAT_11273ca18;
  lVar9 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f940((double)lVar12,puVar1,param_2,lVar3,lVar5,lVar10);
  lVar12 = (long)_DAT_11273ca1c;
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  param_1 = param_1 + lVar13;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d3c0(uVar11,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff631c; end: 105ff6413; -[SCScanResultsNotificationUIEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff631c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar5 = (long)_DAT_11273ca20;
  lVar1 = *(long *)(param_1 + lVar5);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273ca1c);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105ff6414;
    puStack_40 = &UNK_110842e18;
    uStack_38 = uVar3;
    _objc_retain(uVar3);
    func_0x00010bf84ce0(uVar4,param_2,&puStack_58);
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010c117720(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_38);
    _objc_release(uVar3);
  }
  else {
    func_0x00010c117720();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ff6414; end: 105ff641b;  */

void FUN_105ff6414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 105ff641c; end: 105ff648b; -[SCScanResultsNotificationUIEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff641c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273ca14);
  _objc_destroyWeak(param_1 + _DAT_11273ca10);
  _objc_destroyWeak(param_1 + _DAT_11273ca0c);
  _objc_destroyWeak(param_1 + _DAT_11273ca18);
  _objc_storeStrong(param_1 + _DAT_11273ca20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ca1c,0);
  return;
}



/* Entry: 105ff648c; end: 105ff655f; -[SCScanResultsNotificationUIRouter initWithResourceDownloader:notificationPool:presentationDuration:delegate:] */

undefined1 *
FUN_105ff648c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126eef78;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105ff6560; end: 105ff6747; -[SCScanResultsNotificationUIRouter presentNotificationWithMetadata:] */

void FUN_105ff6560(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_3;
  _objc_retain();
  if (param_3 != 0) {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_105ff6748;
    uStack_50 = 0x105ff6758;
    uStack_48 = 0;
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_105ff6748;
    uStack_80 = 0x105ff6758;
    uStack_78 = 0;
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_105ff6748;
    uStack_b0 = 0x105ff6758;
    uStack_a8 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar1;
    _objc_release(uVar2);
    func_0x00010c0c0160(param_3);
    if ((((puStack_68[5] != 0) && (puStack_98[5] != 0)) && (puStack_c8[5] != 0)) &&
       (*(long *)(param_1 + 0x28) != 0)) {
      func_0x00010be7cdc0(param_1);
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      func_0x00010c0dbee0();
      _objc_release(param_1);
    }
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ff6748; end: 105ff675f;  */

void FUN_105ff6748(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105ff6760; end: 105ff6837;  */

void FUN_105ff6760(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined ***)(lVar3 + 0x28) = &PTR____CFConstantStringClassReference_110e36158;
  _objc_release();
  func_0x000105ff7058();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release();
  func_0x000105ff7070();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar1);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 1;
  puVar2 = PTR_PTR_1126b15a0;
  func_0x000105ff7088();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf25a00(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x48) = puVar2;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ff6838; end: 105ff6997;  */

void FUN_105ff6838(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010c08fa60();
  if (lVar5 == 0) goto LAB_105ff6980;
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined ***)(lVar5 + 0x28) = &PTR____CFConstantStringClassReference_110e36178;
  _objc_release();
  FUN_105ff7040();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar6 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar1;
  _objc_release(uVar6);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bed0200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar6 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar1;
  _objc_release(uVar6);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 2;
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = puVar2;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    _objc_release();
    if (puVar4 != (undefined *)0x0) goto LAB_105ff6930;
  }
  else {
    _objc_release();
LAB_105ff6930:
    puVar4 = PTR_PTR_1126b15a0;
    func_0x000105ff7088();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf25a00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x48) = puVar4;
    _objc_release(uVar1);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
LAB_105ff6980:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ff6998; end: 105ff69e7; -[SCScanResultsNotificationUIRouter dismissWithCompletion:] */

void FUN_105ff6998(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010bf84200(*(undefined8 *)(param_1 + 0x10));
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ff69e8; end: 105ff6d5b; -[SCScanResultsNotificationUIRouter _presentNotificationWithPreviewImageURL:previewTitleString:previewSubtitleString:notificationButton:] */

void FUN_105ff69e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  double dVar7;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  dVar7 = *(double *)(param_1 + 0x38);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aebd8;
  func_0x00010c14e320(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar5 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar4);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105ff6d5c;
  puStack_88 = &UNK_11084d858;
  _objc_retain(puVar1);
  puStack_80 = puVar1;
  func_0x00010bf88c20(uVar2);
  _objc_release(puVar4);
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c3378;
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c088080(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_initWeak(auStack_a8,param_1);
  puVar3 = PTR_PTR_1126b0ae0;
  puStack_d0 = puVar6;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105ff6d68;
  puStack_b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b0,auStack_a8);
  puStack_f8 = puVar6;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x105ff6d94;
  puStack_e0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d8,auStack_a8);
  _objc_copyWeak(auStack_100,auStack_a8);
  func_0x00010bf57e80(dVar7 / 1000.0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar3;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x30) = 1;
  puVar6 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar4);
  _objc_release(puStack_80);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff6d5c; end: 105ff6d67;  */

void FUN_105ff6d5c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 105ff6d68; end: 105ff6deb;  */

void FUN_105ff6d68(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff6dec; end: 105ff6e27; -[SCScanResultsNotificationUIRouter _didTapOnNotification] */

void FUN_105ff6dec(long param_1)

{
  func_0x00010bf84200(*(undefined8 *)(param_1 + 0x10));
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0dbf00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff6e28; end: 105ff6e57; -[SCScanResultsNotificationUIRouter _didDismissNotification] */

void FUN_105ff6e28(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0dbec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff6e58; end: 105ff6fab; -[SCScanResultsNotificationUIRouter _truncateIfNeeded:] */

void FUN_105ff6e58(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc();
    func_0x00010c04e820();
    puVar5 = puVar1;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c0720c0();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = puVar1;
      func_0x00010c1504a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      iVar4 = (int)puVar3;
      _objc_release(puVar2);
    }
    else {
      iVar4 = 1;
    }
    _objc_release(puVar5);
    puVar2 = puVar1;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    puVar5 = param_3;
    if (((puVar3 != (undefined *)0x0 && iVar4 != 0) &&
        (puVar3 = puVar2,
        func_0x00010c11f420(puVar2,param_2,&PTR____CFConstantStringClassReference_110e36198),
        puVar5 = puVar2, puVar3 == (undefined *)0x0)) &&
       (puVar3 = puVar2, func_0x00010c08fa60(), (undefined *)0x4 < puVar3)) {
      func_0x00010c260c00(puVar2,param_2,4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar5;
    }
    _objc_retain(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105ff6fac; end: 105ff6fb3; -[SCScanResultsNotificationUIRouter notificationButton] */

undefined8 FUN_105ff6fac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105ff6fb4; end: 105ff6fe3; -[SCScanResultsNotificationUIRouter setNotificationButton:] */

void FUN_105ff6fb4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105ff6fe4; end: 105ff703f; -[SCScanResultsNotificationUIRouter .cxx_destruct] */

void FUN_105ff6fe4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


