/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ebedcc; end: 105ebef6b; -[SCLensInfocardWebScopeLauncher launchWebBrowserForUrl:uiContainer:] */

void FUN_105ebedcc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126ae630;
      func_0x00010bfe6000(PTR_PTR_1126ae630);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2b9b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126ae560;
      _objc_alloc_init(PTR_PTR_1126ae560);
      puVar4 = puVar2;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105ebef6c;
      puStack_60 = &UNK_110842308;
      _objc_retain(param_3);
      lStack_58 = param_3;
      func_0x00010c297260(puVar4,param_2,&puStack_78,*(undefined8 *)(param_1 + 0x10));
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126ae638;
      _objc_opt_new(PTR_PTR_1126ae638);
      puVar5 = puVar4;
      func_0x00010bf22ba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(lStack_58);
      _objc_release(puVar2);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ebef6c; end: 105ebef83;  */

void FUN_105ebef6c(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 105ebef84; end: 105ebefcb; -[SCLensInfocardWebScopeLauncher webBrowserDidDismiss:] */

void FUN_105ebef84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ebefcc; end: 105ebeffb; -[SCLensInfocardWebScopeLauncher .cxx_destruct] */

void FUN_105ebefcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ebeffc; end: 105ebf0c3; -[SCLensStudioSettingsScope initWithUiContainer:delegate:] */

undefined8 *
FUN_105ebeffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_4);
  puStack_40 = PTR_PTR_1126edb90;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = auStack_38;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 2,puVar3);
    _objc_release(puVar3);
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105ebf0c4; end: 105ebf0cb; -[SCLensStudioSettingsScope uiContainer] */

undefined8 FUN_105ebf0c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105ebf0cc; end: 105ebf0e3; -[SCLensStudioSettingsScope delegate] */

void FUN_105ebf0cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebf0e4; end: 105ebf10f; -[SCLensStudioSettingsScope .cxx_destruct] */

void FUN_105ebf0e4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ebf110; end: 105ebf183; -[SCLensStudioPairingServices initWithPairingManager:] */

undefined1 * FUN_105ebf110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126edb98;
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



/* Entry: 105ebf184; end: 105ebf18b; -[SCLensStudioPairingServices lensStudioPairingManager] */

undefined8 FUN_105ebf184(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105ebf18c; end: 105ebf197; -[SCLensStudioPairingServices .cxx_destruct] */

void FUN_105ebf18c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ebf198; end: 105ebf273; -[SCLensStudioPairSnapcodeViewModelProvider initWithPerformerProvider:lensStudioPairManager:] */

undefined1 *
FUN_105ebf198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126edba0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ebf274; end: 105ebf2bb; -[SCLensStudioPairSnapcodeViewModelProvider performer] */

void FUN_105ebf274(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105ebf2bc; end: 105ebf303; -[SCLensStudioPairSnapcodeViewModelProvider mainPerformer] */

void FUN_105ebf2bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105ebf304; end: 105ebf34f; -[SCLensStudioPairSnapcodeViewModelProvider cardTitle] */

void FUN_105ebf304(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    lVar2 = param_1;
    FUN_105ec180c();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar2;
    _objc_release(uVar1);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105ebf350; end: 105ebf39b; -[SCLensStudioPairSnapcodeViewModelProvider cardButtonPairTitle] */

void FUN_105ebf350(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x000105ec1824();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar2;
    _objc_release(uVar1);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105ebf39c; end: 105ebf3e7; -[SCLensStudioPairSnapcodeViewModelProvider cardButtonConnectingTitle] */

void FUN_105ebf39c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x000105ec183c();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar2;
    _objc_release(uVar1);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105ebf3e8; end: 105ebf433; -[SCLensStudioPairSnapcodeViewModelProvider cardButtonFailedTitle] */

void FUN_105ebf3e8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x000105ec1854();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar2;
    _objc_release(uVar1);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105ebf434; end: 105ebf45b; -[SCLensStudioPairSnapcodeViewModelProvider scanResultViewModels] */

void FUN_105ebf434(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ebf45c; end: 105ebf5ab; -[SCLensStudioPairSnapcodeViewModelProvider configureWithContext:] */

void FUN_105ebf45c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_3;
    func_0x00010c2450c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e0ea0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    lVar3 = lVar2;
    func_0x00010c25ff60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ebf5ac; end: 105ebf5f3;  */

void FUN_105ebf5ac(long param_1,undefined8 param_2)

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



/* Entry: 105ebf5f4; end: 105ebfb47; -[SCLensStudioPairSnapcodeViewModelProvider _handleSnapcodeMetadata:] */

void FUN_105ebf5f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28ff20();
  if (lVar1 == 0xc) {
    puVar2 = PTR_PTR_1126bc0e0;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0f6420();
    _objc_retainAutoreleasedReturnValue();
    lStack_88 = 0;
    func_0x00010c008360();
    lVar1 = lStack_88;
    _objc_retain();
    _objc_release(lVar3);
    if ((lVar1 == 0) && (puVar2 != (undefined *)0x0)) {
      puVar4 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar16 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar4;
      _objc_release(uVar16);
      puVar5 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      _objc_alloc();
      puVar4 = puVar2;
      func_0x00010c097120(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bf25f00(puVar4);
      func_0x00010c057e80();
      _objc_release(puVar4);
      lVar3 = param_3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = param_3;
      func_0x00010c14f740();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_90,param_1);
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_105ebfb48;
      puStack_b8 = &UNK_110850cf8;
      _objc_copyWeak(auStack_98,auStack_90);
      _objc_retain(puVar5);
      puStack_b0 = puVar5;
      _objc_retain(lVar6);
      lStack_a8 = lVar6;
      _objc_retain(lVar3);
      ppuVar7 = &puStack_d0;
      lStack_a0 = lVar3;
      _objc_retainBlock();
      lVar8 = param_1;
      func_0x00010bf31f40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1;
      func_0x00010bf31b00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar8);
      _objc_retain(lVar9);
      _objc_retain(lVar6);
      _objc_retain(lVar3);
      ppuVar10 = ppuVar7;
      _objc_retain(ppuVar7);
      puVar4 = PTR_PTR_1126ae558;
      FUN_105ec18e4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3f28;
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_78 = lVar9;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126aef38;
      _objc_alloc(PTR_PTR_1126aef38);
      puVar13 = PTR_PTR_1126ae6b8;
      func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR_PTR_1126ae6b8;
      func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126ae6b8;
      func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0048e0(puVar12);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      puVar14 = PTR_PTR_1126aef40;
      _objc_alloc(PTR_PTR_1126aef40);
      puVar13 = PTR_PTR_1126aef30;
      func_0x00010c25d9a0(PTR_PTR_1126aef30);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020120(puVar14);
      _objc_release(puVar13);
      puVar13 = PTR_PTR_1126aef48;
      puVar15 = PTR_PTR_1126aef50;
      _objc_alloc(PTR_PTR_1126aef50);
      func_0x00010c05a5c0();
      func_0x00010c2453a0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar4);
      _objc_release(ppuVar7);
      _objc_release(lVar3);
      _objc_release(lVar6);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar9);
      _objc_release(lVar8);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
      puVar4 = PTR_PTR_1126aef58;
      _objc_alloc();
      puVar11 = puVar4;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b920();
      _objc_release(puVar11);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar4);
      _objc_release(puVar13);
      _objc_release(ppuVar7);
      _objc_release(lStack_a0);
      _objc_release(lStack_a8);
      _objc_release(puStack_b0);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_90);
      _objc_release(lVar3);
      _objc_release(lVar6);
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  param_3 = param_3 + 0x38;
  _objc_loadWeakRetained(param_3);
  func_0x00010be01100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ebfb48; end: 105ebfb7f;  */

void FUN_105ebfb48(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ebfb80; end: 105ebff5f; -[SCLensStudioPairSnapcodeViewModelProvider _didTapPairActionWithStudioId:decodedUuid:scannableId:] */

void FUN_105ebfb80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bf31f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf31ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae558;
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar3 = lVar1;
  _objc_retain(lVar1);
  FUN_105ec18e4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3f28;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_70 = lVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126aef38;
  _objc_alloc(PTR_PTR_1126aef38);
  puVar7 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0048e0(puVar6);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar8 = PTR_PTR_1126aef40;
  _objc_alloc(PTR_PTR_1126aef40);
  puVar7 = PTR_PTR_1126aef30;
  func_0x00010c25d9a0(PTR_PTR_1126aef30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020120(puVar8);
  _objc_release(lVar1);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126aef48;
  puVar9 = PTR_PTR_1126aef50;
  _objc_alloc(PTR_PTR_1126aef50);
  func_0x00010c05a5c0();
  func_0x00010c2453a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  _objc_initWeak(&lStack_70,param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,&lStack_70);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c127200(uVar10);
  _objc_release(uVar10);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(&lStack_70);
  _objc_release(puVar7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(&lStack_70);
  __Unwind_Resume(param_3);
  return;
}



/* Entry: 105ebff60; end: 105ebff63;  */

void FUN_105ebff60(void)

{
  return;
}



/* Entry: 105ebff64; end: 105ebffc3;  */

void FUN_105ebff64(long param_1,long param_2)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 1) {
    func_0x00010be6fd00(param_1);
  }
  else {
    func_0x00010be6fca0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ebffc4; end: 105ec03a7; -[SCLensStudioPairSnapcodeViewModelProvider _pairingFailedWithStudioId:decodedUuid:scannableId:] */

void FUN_105ebffc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bf31f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf31ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae558;
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar3 = lVar1;
  _objc_retain(lVar1);
  FUN_105ec18e4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3f28;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_70 = lVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126aef38;
  _objc_alloc(PTR_PTR_1126aef38);
  puVar7 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0048e0(puVar6);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar8 = PTR_PTR_1126aef40;
  _objc_alloc(PTR_PTR_1126aef40);
  puVar7 = PTR_PTR_1126aef30;
  func_0x00010c25d9a0(PTR_PTR_1126aef30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020120(puVar8);
  _objc_release(lVar1);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126aef48;
  puVar9 = PTR_PTR_1126aef50;
  _objc_alloc(PTR_PTR_1126aef50);
  func_0x00010c05a5c0();
  func_0x00010c2453a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  _objc_initWeak(&lStack_70,param_1);
  func_0x00010c0b6b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,&lStack_70);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fe0(0x3ff8000000000000,param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(&lStack_70);
  _objc_release(puVar7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(&lStack_70);
  __Unwind_Resume(param_3);
  return;
}



/* Entry: 105ec03a8; end: 105ec03ab;  */

void FUN_105ec03a8(void)

{
  return;
}



/* Entry: 105ec03ac; end: 105ec075b;  */

void FUN_105ec03ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf31f40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf31b00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105ec075c;
    puStack_a0 = &UNK_110850cf8;
    _objc_copyWeak(auStack_80,param_1 + 0x38);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar12);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    uStack_98 = uVar12;
    _objc_retain(uVar13);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    uStack_90 = uVar13;
    _objc_retain(uVar12);
    uStack_88 = uVar12;
    _objc_retain(lVar2);
    _objc_retain(lVar3);
    _objc_retain(uVar11);
    _objc_retain(uVar14);
    ppuVar4 = &puStack_b8;
    _objc_retain(ppuVar4);
    puVar5 = PTR_PTR_1126ae558;
    FUN_105ec18e4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3f28;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_70 = lVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126aef38;
    _objc_alloc(PTR_PTR_1126aef38);
    puVar8 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0048e0(puVar7);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar9 = PTR_PTR_1126aef40;
    _objc_alloc(PTR_PTR_1126aef40);
    puVar8 = PTR_PTR_1126aef30;
    func_0x00010c25d9a0(PTR_PTR_1126aef30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020120(puVar9);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126aef48;
    puVar10 = PTR_PTR_1126aef50;
    _objc_alloc(PTR_PTR_1126aef50);
    func_0x00010c05a5c0();
    func_0x00010c2453a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(&puStack_b8);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x28));
    _objc_release(puVar8);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  lVar1 = lVar1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be01100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ec075c; end: 105ec0793;  */

void FUN_105ec075c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ec0794; end: 105ec0a87; -[SCLensStudioPairSnapcodeViewModelProvider _pairingSucceedWithDecodedId:scannableId:] */

void FUN_105ec0794(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bf31f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf31b00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae558;
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar3 = lVar1;
  _objc_retain(lVar1);
  FUN_105ec18e4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3f28;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_70 = lVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_70,&ppuStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126aef38;
  _objc_alloc(PTR_PTR_1126aef38);
  puVar7 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0048e0(puVar6,param_2,puVar5,PTR____NSDictionary0__struct_11034ab58,
                      PTR____NSDictionary0__struct_11034ab58,puVar7,puVar8,puVar9,
                      &PTR___NSConcreteGlobalBlock_1108f1ca0);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar8 = PTR_PTR_1126aef40;
  _objc_alloc(PTR_PTR_1126aef40);
  puVar7 = PTR_PTR_1126aef30;
  func_0x00010c25d9a0(PTR_PTR_1126aef30,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020120(puVar8,param_2,puVar4,lVar1,puVar7,puVar6);
  _objc_release(lVar1);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126aef48;
  puVar9 = PTR_PTR_1126aef50;
  _objc_alloc(PTR_PTR_1126aef50);
  func_0x00010c05a5c0();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c2453a0(puVar7,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,puVar7);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar10);
  _objc_release(puVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105ec0a88; end: 105ec0a8b;  */

void FUN_105ec0a88(void)

{
  return;
}



/* Entry: 105ec0a8c; end: 105ec0b0f; -[SCLensStudioPairSnapcodeViewModelProvider .cxx_destruct] */

void FUN_105ec0a8c(long param_1)

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



/* Entry: 105ec0b10; end: 105ec0c13; -[SCLensStudioPairSnapcodeViewModelProviderV2 initWithPerformerProvider:lensStudioPairManager:notificationPool:] */

undefined1 *
FUN_105ec0b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126edba8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ec0c14; end: 105ec0c5b; -[SCLensStudioPairSnapcodeViewModelProviderV2 performer] */

void FUN_105ec0c14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105ec0c5c; end: 105ec0c5f; -[SCLensStudioPairSnapcodeViewModelProviderV2 cardTitle] */

void FUN_105ec0c5c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2fe58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2fe58,
                      &PTR____CFConstantStringClassReference_110e2fe38,0);
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



/* Entry: 105ec0c60; end: 105ec0c63; -[SCLensStudioPairSnapcodeViewModelProviderV2 cardButtonPairTitle] */

void FUN_105ec0c60(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2fe78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2fe78,
                      &PTR____CFConstantStringClassReference_110e2fe38,0);
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



/* Entry: 105ec0c64; end: 105ec0c67; -[SCLensStudioPairSnapcodeViewModelProviderV2 cardButtonConnectingTitle] */

void FUN_105ec0c64(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2fe98;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2fe98,
                      &PTR____CFConstantStringClassReference_110e2fe38,0);
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



/* Entry: 105ec0c68; end: 105ec0c6b; -[SCLensStudioPairSnapcodeViewModelProviderV2 generalErrorTitle] */

void FUN_105ec0c68(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2ff18;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2ff18,
                      &PTR____CFConstantStringClassReference_110e2fe38,0);
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



/* Entry: 105ec0c6c; end: 105ec0c6f; -[SCLensStudioPairSnapcodeViewModelProviderV2 generalErrorText] */

void FUN_105ec0c6c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2ff38;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2ff38,
                      &PTR____CFConstantStringClassReference_110e2fe38,0);
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



/* Entry: 105ec0c70; end: 105ec0c73; -[SCLensStudioPairSnapcodeViewModelProviderV2 updateRequiredTitle] */

void FUN_105ec0c70(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2fed8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2fed8,
                      &PTR____CFConstantStringClassReference_110e2fe38,0);
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



/* Entry: 105ec0c74; end: 105ec0c77; -[SCLensStudioPairSnapcodeViewModelProviderV2 updateRequiredText] */

void FUN_105ec0c74(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2fef8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2fef8,
                      &PTR____CFConstantStringClassReference_110e2fe38,0);
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



/* Entry: 105ec0c78; end: 105ec0c7b; -[SCLensStudioPairSnapcodeViewModelProviderV2 continueButtonTitle] */

void FUN_105ec0c78(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf898;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110daf898,
                      &PTR____CFConstantStringClassReference_110f7c3f8,0);
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



/* Entry: 105ec0c7c; end: 105ec0c7f; -[SCLensStudioPairSnapcodeViewModelProviderV2 successToast] */

void FUN_105ec0c7c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2ff58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2ff58,
                      &PTR____CFConstantStringClassReference_110e2fe38,0);
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



/* Entry: 105ec0c80; end: 105ec0ca7; -[SCLensStudioPairSnapcodeViewModelProviderV2 scanResultViewModels] */

void FUN_105ec0c80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ec0ca8; end: 105ec0e1b; -[SCLensStudioPairSnapcodeViewModelProviderV2 configureWithContext:] */

void FUN_105ec0ca8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_3;
    func_0x00010c2450c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e0ea0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010beeee20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar1;
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ec0e1c; end: 105ec0e63;  */

void FUN_105ec0e1c(long param_1,undefined8 param_2)

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



/* Entry: 105ec0e64; end: 105ec1053; -[SCLensStudioPairSnapcodeViewModelProviderV2 _handleSnapcodeMetadata:] */

void FUN_105ec0e64(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28ff20();
  if (lVar1 == 0xc) {
    puVar2 = PTR_PTR_1126bc0e0;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0f6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_68 = 0;
    func_0x00010c008360(puVar2,param_2,lVar3,&lStack_68);
    lVar1 = lStack_68;
    _objc_retain(lStack_68);
    _objc_release(lVar3);
    if ((lVar1 == 0) && (puVar2 != (undefined *)0x0)) {
      puVar4 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar4;
      _objc_release(uVar8);
      puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
      puVar5 = puVar2;
      func_0x00010c097120(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010c057e80(puVar4,param_2,puVar6);
      _objc_release(puVar5);
      lVar3 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = param_3;
      func_0x00010c14f740(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be04700(param_1,param_2,puVar4,lVar7,lVar3);
      puVar5 = PTR_PTR_1126aef58;
      _objc_alloc(PTR_PTR_1126aef58);
      puVar6 = puVar5;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b920(puVar5,param_2,puVar6,0xfffffffffffffffc,*(undefined8 *)(param_1 + 0x38));
      _objc_release(puVar6);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30),param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(lVar3);
      _objc_release(lVar7);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ec1054; end: 105ec143f; -[SCLensStudioPairSnapcodeViewModelProviderV2 _displayInitialStateWithStudioTokenUUID:decodedUuid:scannableId:] */

void FUN_105ec1054(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_80,param_1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105ec1440;
  puStack_a8 = &UNK_110850cf8;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  lStack_a0 = param_3;
  _objc_retain(param_4);
  uStack_98 = param_4;
  _objc_retain(param_5);
  ppuVar1 = &puStack_c0;
  uStack_90 = param_5;
  _objc_retainBlock();
  lVar2 = param_1;
  func_0x00010bf31f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf31b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar2);
  _objc_retain(lVar3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar4 = ppuVar1;
  _objc_retain(ppuVar1);
  puVar5 = PTR_PTR_1126ae558;
  FUN_105ec18e4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3f40;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_70 = lVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126aef38;
  _objc_alloc(PTR_PTR_1126aef38);
  puVar8 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0048e0(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar9 = PTR_PTR_1126aef40;
  _objc_alloc(PTR_PTR_1126aef40);
  puVar8 = PTR_PTR_1126aef30;
  func_0x00010c25d9a0(PTR_PTR_1126aef30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020120(puVar9);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126aef48;
  puVar10 = PTR_PTR_1126aef50;
  _objc_alloc(PTR_PTR_1126aef50);
  func_0x00010c05a5c0();
  func_0x00010c2453a0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
  _objc_release(puVar8);
  _objc_release(ppuVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(lStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  param_3 = param_3 + 0x38;
  _objc_loadWeakRetained(param_3);
  func_0x00010be01100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ec1440; end: 105ec1477;  */

void FUN_105ec1440(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ec1478; end: 105ec15cb; -[SCLensStudioPairSnapcodeViewModelProviderV2 _didTapPairActionWithStudioId:decodedUuid:scannableId:] */

void FUN_105ec1478(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c127200(uVar1);
  _objc_release(uVar1);
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



/* Entry: 105ec15cc; end: 105ec162f;  */

void FUN_105ec15cc(long param_1,long param_2)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 1) {
    func_0x00010be6fd00(param_1);
  }
  else {
    func_0x00010be6fcc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ec1630; end: 105ec16d7; -[SCLensStudioPairSnapcodeViewModelProviderV2 _pairingFailedWithStudioId:decodedUuid:scannableId:pairStatus:] */

void FUN_105ec1630(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long in_x5;
  
  lVar1 = param_1;
  if (in_x5 == 3) {
    func_0x00010c289500();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfbece0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf57f80(PTR_PTR_1126afde0,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
  func_0x00010bf84020(*(undefined8 *)(param_1 + 0x40),param_2,0xc);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ec16d8; end: 105ec1767; -[SCLensStudioPairSnapcodeViewModelProviderV2 _pairingSucceedWithDecodedId:scannableId:] */

void FUN_105ec16d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  func_0x00010c261860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57f80(puVar2,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
  func_0x00010be033a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105ec1768; end: 105ec179f; -[SCLensStudioPairSnapcodeViewModelProviderV2 _dismissScanCard] */

void FUN_105ec1768(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf84030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_dismissParentScopes__1125be9b0,0xc);
  return;
}



/* Entry: 105ec17a0; end: 105ec180b; -[SCLensStudioPairSnapcodeViewModelProviderV2 .cxx_destruct] */

void FUN_105ec17a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ec180c; end: 105ec18e3;  */

void FUN_105ec180c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2fe58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2fe58,
                      &PTR____CFConstantStringClassReference_110e2fe38,0);
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



/* Entry: 105ec18e4; end: 105ec195f;  */

void FUN_105ec18e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126c5898;
  _objc_opt_class(PTR_PTR_1126c5898);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e2ff78,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ec1960; end: 105ec19c7; +[SCSnapcodePayloadPairLensStudio descriptor] */

void FUN_105ec1960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c23a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aa7cf0,
                        &PTR____CFConstantStringClassReference_110e2ff98,&PTR_DAT_11312fc70,
                        &PTR_DAT_11312fc88,1,0x10,0x1c);
    puRam00000001136c23a8 = puVar1;
  }
  return;
}



/* Entry: 105ec19c8; end: 105ec1a3b; -[SCPromptLensResponseMessageReportingPlugin initWithLensPromptDataProvider:] */

undefined1 * FUN_105ec19c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126edbb0;
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



/* Entry: 105ec1a3c; end: 105ec1a6b; -[SCPromptLensResponseMessageReportingPlugin identifier] */

void FUN_105ec1a3c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e5fa58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e5fa58);
  return;
}



/* Entry: 105ec1a6c; end: 105ec1c77; -[SCPromptLensResponseMessageReportingPlugin reportedChatMessageContentForMessage:] */

void FUN_105ec1a6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar5 = param_3;
  func_0x00010bf4df40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c118740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1185e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf4df40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c118740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1185c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010bfc92c0(uVar5);
  _objc_release(uVar5);
  puVar6 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105ec1c78; end: 105ec1dbb;  */

void FUN_105ec1c78(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126b2b98;
    _objc_opt_new(PTR_PTR_1126b2b98);
    func_0x00010bf43d60(uVar3);
    _objc_release(puVar2);
  }
  else {
    lVar1 = param_2;
    func_0x00010c118500(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c0be4c0(lVar1);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105ec1dbc; end: 105ec1e9b;  */

void FUN_105ec1dbc(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_5;
  lVar2 = param_4;
  if (param_4 == 0 || param_5 == 0) {
    lVar1 = param_3;
    lVar2 = param_2;
  }
  _objc_retain(lVar2);
  _objc_retain(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6af20();
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ec1e9c; end: 105ec1ea3; -[SCPromptLensResponseMessageReportingPlugin isReportableForMessage:] */

undefined8 FUN_105ec1e9c(void)

{
  return 1;
}



/* Entry: 105ec1ea4; end: 105ec1ef3; -[SCPromptLensResponseMessageReportingPlugin _onPromptFetchedWithImageUrl:promptEncryptionKey:message:promise:] */

void FUN_105ec1ea4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 in_x5;
  
  puVar1 = PTR_PTR_1126b2b98;
  _objc_retain(in_x5);
  _objc_opt_new(puVar1);
  func_0x00010bf43d60(in_x5,param_2,puVar1);
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ec1ef4; end: 105ec1eff; -[SCPromptLensResponseMessageReportingPlugin .cxx_destruct] */

void FUN_105ec1ef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ec1f00; end: 105ec1f0b; +[SCCMultiFriendArrivalNotificationsComponent componentPath] */

undefined ** FUN_105ec1f00(void)

{
  return &PTR____CFConstantStringClassReference_110e2ffb8;
}



/* Entry: 105ec1f0c; end: 105ec1f3f; -[SCCMultiFriendArrivalNotificationsComponent initWithViewModel:componentContext:runtime:] */

void FUN_105ec1f0c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edbb8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105ec1f40; end: 105ec1f8f; -[SCCMultiFriendArrivalNotificationsComponent setViewModel:] */

void FUN_105ec1f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ec1f90; end: 105ec1fd3; -[SCCMultiFriendArrivalNotificationsComponent viewModel] */

void FUN_105ec1f90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ec1fd4; end: 105ec2013; -[SCCMultiFriendArrivalNotificationsContext initWithOrderedFriendIds:] */

void FUN_105ec1fd4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edbc0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105ec2014; end: 105ec203b; +[SCCMultiFriendArrivalNotificationsContext valdiMarshallableObjectDescriptor] */

void FUN_105ec2014(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f1d50;
  param_1[1] = &PTR_s_SCComposerPeopleUserProviding_1108f1dc8;
  param_1[2] = &PTR_s_od_v_1108f1d20;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec203c; end: 105ec205f;  */

undefined8 FUN_105ec203c(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 105ec2060; end: 105ec20df;  */

void FUN_105ec2060(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105ec20e0;
  puStack_30 = &UNK_110853170;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105ec20e0; end: 105ec210b;  */

void FUN_105ec20e0(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105ec210c; end: 105ec212b; +[SCCExpandedMapPageActionHandlers valdiMarshallableObjectDescriptor] */

void FUN_105ec210c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f1e40;
  param_1[1] = &PTR_DAT_1108f1f78;
  param_1[2] = &PTR_s_oobo_v_1108f1de0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105ec212c; end: 105ec2157;  */

undefined8 FUN_105ec212c(void)

{
  code *extraout_x8;
  
  func_0x000105ec2634();
  (*extraout_x8)();
  return 0;
}



/* Entry: 105ec2158; end: 105ec21a7;  */

void FUN_105ec2158(void)

{
  func_0x000105ec2614();
  func_0x000105ec25e4();
  func_0x000105ec25bc(FUN_105ec24d8);
  func_0x000105ec261c();
  func_0x000105ec25d8();
  func_0x000105ec25f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ec21a8; end: 105ec21cf;  */

undefined8 FUN_105ec21a8(void)

{
  code *extraout_x8;
  
  func_0x000105ec2634();
  (*extraout_x8)();
  return 0;
}



/* Entry: 105ec21d0; end: 105ec221f;  */

void FUN_105ec21d0(void)

{
  func_0x000105ec2614();
  func_0x000105ec25e4();
  func_0x000105ec25bc(0x105ec2508);
  func_0x000105ec261c();
  func_0x000105ec25d8();
  func_0x000105ec25f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ec2220; end: 105ec2243;  */

undefined8 FUN_105ec2220(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x000105ec2634();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  return 0;
}



/* Entry: 105ec2244; end: 105ec2293;  */

void FUN_105ec2244(void)

{
  func_0x000105ec2614();
  func_0x000105ec25e4();
  func_0x000105ec25bc(0x105ec2524);
  func_0x000105ec261c();
  func_0x000105ec25d8();
  func_0x000105ec25f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ec2294; end: 105ec22b3; +[SCCMapInputBarActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105ec2294(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f2010;
  param_1[1] = &PTR_DAT_1108f21c0;
  param_1[2] = &PTR_s_oobo_v_1108f1f98;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105ec22b4; end: 105ec22e3;  */

undefined8 FUN_105ec22b4(void)

{
  code *extraout_x8;
  
  func_0x000105ec2634();
  (*extraout_x8)();
  return 0;
}



/* Entry: 105ec22e4; end: 105ec2333;  */

void FUN_105ec22e4(void)

{
  func_0x000105ec2614();
  func_0x000105ec25e4();
  func_0x000105ec25bc(0x105ec2548);
  func_0x000105ec261c();
  func_0x000105ec25d8();
  func_0x000105ec25f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ec2334; end: 105ec2347;  */

void FUN_105ec2334(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105ec2344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2));
  return;
}



/* Entry: 105ec2348; end: 105ec2397;  */

void FUN_105ec2348(void)

{
  func_0x000105ec2614();
  func_0x000105ec25e4();
  func_0x000105ec25bc(0x105ec2578);
  func_0x000105ec261c();
  func_0x000105ec25d8();
  func_0x000105ec25f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ec2398; end: 105ec23bb;  */

undefined8 FUN_105ec2398(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x000105ec2634();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x10));
  return 0;
}



/* Entry: 105ec23bc; end: 105ec240b;  */

void FUN_105ec23bc(void)

{
  func_0x000105ec2614();
  func_0x000105ec25e4();
  func_0x000105ec25bc(0x105ec2594);
  func_0x000105ec261c();
  func_0x000105ec25d8();
  func_0x000105ec25f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ec240c; end: 105ec2417; +[SCCMapInputBarComponent componentPath] */

undefined ** FUN_105ec240c(void)

{
  return &PTR____CFConstantStringClassReference_110e2ffd8;
}



/* Entry: 105ec2418; end: 105ec244b; -[SCCMapInputBarComponent initWithViewModel:componentContext:runtime:] */

void FUN_105ec2418(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edbc8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105ec244c; end: 105ec2497; -[SCCMapInputBarComponent setViewModel:] */

void FUN_105ec244c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x000105ec25f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ec2498; end: 105ec24d7; -[SCCMapInputBarComponent viewModel] */

void FUN_105ec2498(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105ec25f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105ec24d8; end: 105ec25bb;  */

void FUN_105ec24d8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105ec25bc; end: 105ec2653;  */

void FUN_105ec25bc(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 105ec2654; end: 105ec265b; -[SCCExpandedMapShareMode__Enum init] */

void FUN_105ec2654(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 105ec265c; end: 105ec2663; -[SCCFriendSharingType__Enum init] */

void FUN_105ec265c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 105ec2664; end: 105ec266b; -[SCCLocationPermissionRequestStatus__Enum init] */

void FUN_105ec2664(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 105ec266c; end: 105ec2673; -[SCCMapInputBarTrayCellType__Enum init] */

void FUN_105ec266c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}


