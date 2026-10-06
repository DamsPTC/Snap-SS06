/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d97bd8; end: 105d97c0b; -[SCPreviewFeaturePollsStickerImpl hasPollStickerOnSnap] */

bool FUN_105d97bd8(long param_1)

{
  func_0x00010be0bee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 105d97c0c; end: 105d97c4f; -[SCPreviewFeaturePollsStickerImpl existingPoll] */

void FUN_105d97c0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be0bee0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1031c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d97c50; end: 105d97d07; -[SCPreviewFeaturePollsStickerImpl setPollPlaceholderWithSnapSessionId:] */

void FUN_105d97c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c103760(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0bee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c1031c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da380(uVar1,param_2,param_3,lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105d97d08; end: 105d97ddb; -[SCPreviewFeaturePollsStickerImpl didTapPreviewContainerView:] */

undefined8 FUN_105d97d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c253b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5c90;
  _objc_opt_class(PTR_PTR_1126b5c90);
  uVar4 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar3);
  _objc_release(uVar1);
  uVar5 = 1;
  if (((uVar4 & 1) != 0) && (uVar1 != 0)) {
    func_0x00010c10d9c0(param_1);
    uVar5 = 0;
  }
  _objc_release(uVar2);
  return uVar5;
}



/* Entry: 105d97ddc; end: 105d97e6b; -[SCPreviewFeaturePollsStickerImpl _hidePollStickerView:] */

void FUN_105d97ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105d97e6c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03400(0x3fb999999999999a,puVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105d97e6c; end: 105d97e77;  */

void FUN_105d97e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105d97e78; end: 105d980b3; -[SCPreviewFeaturePollsStickerImpl _createOrUpdatePollSticker:] */

void FUN_105d97e78(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be0bee0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar3 = param_3;
    func_0x000108e4ff08(param_3,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bc960;
    func_0x00010c290480();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined1 *)(param_1 + 0x41);
    lVar5 = *(long *)(param_1 + 0x48);
    func_0x00010c269d40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c29ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_initWeak(auStack_68,param_1);
    lVar5 = lVar6;
    func_0x00010c0e0460(lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(puVar4);
    lVar7 = lVar5;
    uStack_70 = uVar1;
    func_0x00010c25ff60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  else {
    func_0x00010c1dea00(lVar2);
    puVar3 = (undefined *)(param_1 + 0x20);
    _objc_loadWeakRetained(puVar3);
    puVar4 = puVar3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar6);
    func_0x00010be0bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2be0(puVar4);
    _objc_release(param_1);
  }
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105d980b4; end: 105d9816b;  */

void FUN_105d980b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d9816c; end: 105d982df;  */

void FUN_105d9816c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0846e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c253ee0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126ba960;
  _objc_alloc(PTR_PTR_1126ba960);
  func_0x00010c04c640();
  _objc_release(param_2);
  puVar4 = PTR_PTR_1126c3d58;
  _objc_opt_new(PTR_PTR_1126c3d58);
  func_0x00010c2aa4a0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1340(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0ec0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b08c0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x20) + 0x20;
  _objc_loadWeakRetained(lVar5);
  puVar6 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066e80(lVar5);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d982e0; end: 105d982e3;  */

void FUN_105d982e0(void)

{
  return;
}



/* Entry: 105d982e4; end: 105d9837b; -[SCPreviewFeaturePollsStickerImpl _removeExistingPoll:] */

void FUN_105d982e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105d9837c;
  puStack_30 = &UNK_1108e8530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c12e5c0(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105d9837c; end: 105d9848b;  */

long FUN_105d9837c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x00010c271a60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c103540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1032c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1032a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(param_2);
  if ((lVar4 == 0) || (lVar6 = lVar4, func_0x00010c08fa60(), lVar6 == 0)) {
    lVar6 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c1032a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c0720c0(lVar4);
    _objc_release(uVar5);
  }
  _objc_release(lVar4);
  return lVar6;
}



/* Entry: 105d9848c; end: 105d984ff; -[SCPreviewFeaturePollsStickerImpl _existingPollSticker] */

void FUN_105d9848c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010be0bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b5c90;
  _objc_opt_class(PTR_PTR_1126b5c90);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d98500; end: 105d98667; -[SCPreviewFeaturePollsStickerImpl _existingPreviewStickerContainingPollSticker] */

void FUN_105d98500(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
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
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar5 = lVar1;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
        uVar2 = uVar8;
        func_0x00010bf4dce0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b5c90;
        _objc_opt_class(PTR_PTR_1126b5c90);
        uVar4 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar3);
        _objc_release(uVar2);
        if (((uVar4 & 1) != 0) && (uVar2 != 0)) {
          _objc_retain(uVar8);
          goto LAB_105d98620;
        }
        lVar10 = lVar10 + 1;
      } while (lVar5 != lVar10);
      lVar5 = lVar1;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  uVar8 = 0;
LAB_105d98620:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(lVar1 + 0x38);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5,puVar7);
    uVar6 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x38) = 0;
    _objc_release(uVar6);
  }
  *(undefined1 *)(lVar1 + 0x41) = 0;
  return;
}



/* Entry: 105d98668; end: 105d986a7; -[SCPreviewFeaturePollsStickerImpl _callCompletionWithAction:] */

void FUN_105d98668(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar2);
  }
  *(undefined1 *)(param_1 + 0x41) = 0;
  return;
}



/* Entry: 105d986a8; end: 105d98777; -[SCPreviewFeaturePollsStickerImpl _pollStickerCompletedWithAction:] */

void FUN_105d986a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c161880();
  _objc_release(lVar1);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb220(lVar1);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be0bee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdd8bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__callCompletionWithAction__112553c90,param_3)
  ;
  return;
}



/* Entry: 105d98778; end: 105d987b7; -[SCPreviewFeaturePollsStickerImpl pollStickerCreationCancelled] */

void FUN_105d98778(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010be0bee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar1 = 1;
  if (lVar2 != 0) {
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be757d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__pollStickerCompletedWithAction__11257af90,uVar1);
  return;
}



/* Entry: 105d987b8; end: 105d9885b; -[SCPreviewFeaturePollsStickerImpl pollStickerCreationCompleted:] */

void FUN_105d987b8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be0bee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    func_0x00010be8bf80(param_1);
  }
  else {
    func_0x00010bdf0e00();
  }
  _objc_release(param_3);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be757d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__pollStickerCompletedWithAction__11257af90,uVar1);
  return;
}



/* Entry: 105d9885c; end: 105d98863; -[SCPreviewFeaturePollsStickerImpl responderChainPriority] */

undefined8 FUN_105d9885c(void)

{
  return 0x7fffffff;
}



/* Entry: 105d98864; end: 105d9887b; -[SCPreviewFeaturePollsStickerImpl parentViewControllerDelegate] */

void FUN_105d98864(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d9887c; end: 105d98887; -[SCPreviewFeaturePollsStickerImpl setParentViewControllerDelegate:] */

void FUN_105d9887c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 105d98888; end: 105d98913; -[SCPreviewFeaturePollsStickerImpl .cxx_destruct] */

void FUN_105d98888(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d98914; end: 105d98b5f; -[SCPreviewFeaturePollsStickerServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d98914(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_1 == 0) {
    _objc_retain();
    uVar8 = 0;
    lVar9 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + _DAT_112735ebc);
    _objc_retain(uVar8);
    lVar9 = param_1 + _DAT_112735eb4;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar9;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar9);
  if (param_1 == 0) {
    lVar9 = 0;
    lVar10 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112735eb0;
    _objc_loadWeakRetained();
    lVar10 = param_1 + _DAT_112735eb8;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar10;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112735ec0;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar10;
  func_0x00010c084e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112735ec4;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar10;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105d98b60;
  puStack_98 = &UNK_1108e8560;
  puVar5 = PTR_PTR_1126ae720;
  uStack_90 = uVar8;
  lStack_88 = lVar1;
  lStack_80 = lVar9;
  lStack_78 = lVar2;
  lStack_70 = lVar3;
  lStack_68 = lVar4;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c4878;
  _objc_alloc(PTR_PTR_1126c4878);
  func_0x00010c037bc0();
  if (param_1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + _DAT_112735ec8);
  }
  func_0x00010bf9d660(uVar7,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(uVar8);
  return;
}



/* Entry: 105d98b60; end: 105d98b97;  */

void FUN_105d98b60(void)

{
  _objc_alloc(PTR_PTR_1126c4870);
  func_0x00010c037b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d98b98; end: 105d98c1f; -[SCPreviewFeaturePollsStickerServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d98b98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112735ec8,0);
  _objc_destroyWeak(param_1 + _DAT_112735ec4);
  _objc_destroyWeak(param_1 + _DAT_112735ec0);
  _objc_storeStrong(param_1 + _DAT_112735ebc,0);
  _objc_destroyWeak(param_1 + _DAT_112735eb8);
  _objc_destroyWeak(param_1 + _DAT_112735eb4);
  _objc_destroyWeak(param_1 + _DAT_112735eb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735eac);
  return;
}



/* Entry: 105d98c20; end: 105d98ccb; -[SCPreviewFeaturePollsStickerServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d98c20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112735ecc;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112735ed0;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c103780(lVar2);
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



/* Entry: 105d98ccc; end: 105d98d03; -[SCPreviewFeaturePollsStickerServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d98ccc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735ed0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735ecc);
  return;
}



/* Entry: 105d98d04; end: 105d98dc7; -[SCPollStickerCreationScope initWithPoll:uiContainer:delegate:] */

undefined1 *
FUN_105d98d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ed0c8;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d98dc8; end: 105d98dcf; -[SCPollStickerCreationScope poll] */

undefined8 FUN_105d98dc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105d98dd0; end: 105d98dd7; -[SCPollStickerCreationScope uiContainer] */

undefined8 FUN_105d98dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105d98dd8; end: 105d98def; -[SCPollStickerCreationScope delegate] */

void FUN_105d98dd8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d98df0; end: 105d98e27; -[SCPollStickerCreationScope .cxx_destruct] */

void FUN_105d98df0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d98e28; end: 105d98f03; -[SCPreviewFeaturePostCapturePromptImpl initWithPreviewScope:previewScopeServices:userPreferences:device:] */

undefined1 *
FUN_105d98e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ed0d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d98f04; end: 105d991b3; -[SCPreviewFeaturePostCapturePromptImpl activate] */

void FUN_105d98f04(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c247520();
  _objc_release(lVar1);
  if ((int)lVar2 == 1) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c083340();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      lVar1 = param_1 + 0x18;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c075ce0();
      _objc_release(lVar1);
      if ((int)lVar2 != 0) {
        lVar1 = param_1 + 0x10;
        _objc_loadWeakRetained();
        lVar2 = lVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar2);
        _objc_release(lVar1);
        puVar4 = PTR_PTR_1126aed70;
        if (lVar3 == 0) {
          func_0x000105d99214();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beff4c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar1);
          puVar5 = PTR_PTR_1126aed78;
          _objc_alloc(PTR_PTR_1126aed78);
          puVar6 = puVar5;
          func_0x000105d991fc();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c052ec0(puVar5);
          _objc_release(puVar7);
          _objc_release(puVar6);
          lVar1 = param_1 + 0x20;
          _objc_loadWeakRetained(lVar1);
          lVar2 = lVar1;
          func_0x00010c240640();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar3;
          func_0x00010c27ed00();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010c0cfd00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0c980();
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar3);
          _objc_release(lVar2);
          _objc_release(lVar1);
          param_1 = param_1 + 0x10;
          _objc_loadWeakRetained(param_1);
          lVar1 = param_1;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560();
          _objc_release(lVar1);
          _objc_release(param_1);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105d991b4; end: 105d991c3;  */

void FUN_105d991b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105d991c4; end: 105d991fb; -[SCPreviewFeaturePostCapturePromptImpl .cxx_destruct] */

void FUN_105d991c4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105d991fc; end: 105d9922b;  */

void FUN_105d991fc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e29ff8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e29ff8,
                      &PTR____CFConstantStringClassReference_110e2a018,0);
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



/* Entry: 105d9922c; end: 105d993c3; -[SCPreviewFeaturePreselectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d9922c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = param_1 + _DAT_112735ef0;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  puVar3 = PTR_PTR_1126ae720;
  _objc_retain(uVar1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c4888;
  _objc_alloc(PTR_PTR_1126c4888);
  func_0x00010c0387c0();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112735ef4);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  return;
}



/* Entry: 105d993c4; end: 105d9945f;  */

void FUN_105d993c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c4880;
  _objc_alloc(PTR_PTR_1126c4880);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf39940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0397c0(puVar1,param_2,uVar4,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d99460; end: 105d9947f; -[SCPreviewFeaturePreselectionEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d99460(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112735ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d99480; end: 105d99493; -[SCPreviewFeaturePreselectionEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d99480(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112735ef8,param_3);
  return;
}



/* Entry: 105d99494; end: 105d994db; -[SCPreviewFeaturePreselectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d99494(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735ef8);
  _objc_storeStrong(param_1 + _DAT_112735ef4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735ef0);
  return;
}



/* Entry: 105d994dc; end: 105d99577; -[SCPreviewFeaturePreselectionImpl initWithPreviewConfiguration:circumstanceEngine:] */

undefined1 *
FUN_105d994dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed0d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d99578; end: 105d9957f; -[SCPreviewFeaturePreselectionImpl responderChainPriority] */

undefined8 FUN_105d99578(void)

{
  return 0x7fffffff;
}



/* Entry: 105d99580; end: 105d9971b; -[SCPreviewFeaturePreselectionImpl getPreselectedItems] */

void FUN_105d99580(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)(param_1 + 8);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c096000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb88c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = (undefined *)(param_1 + 8);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c10a860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  _objc_retain(puVar1);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c07f480();
  _objc_release(lVar4);
  puVar6 = puVar1;
  puVar7 = PTR____NSArray0__struct_11034ab48;
  if ((int)lVar5 != 0) {
    func_0x00010bebefe0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_50 = param_1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      puVar7 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      func_0x00010bf09f60(puVar1,param_2,param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(param_1);
      puVar7 = PTR____NSArray0__struct_11034ab48;
    }
  }
  PTR____NSArray0__struct_11034ab48 = puVar7;
  if (puVar6 != (undefined *)0x0) {
    _objc_retain(puVar6);
    puVar7 = puVar6;
  }
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar3 = puVar3 + 8;
    _objc_loadWeakRetained(puVar3);
    puVar1 = puVar3;
    func_0x00010c096000();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bfb88e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105d9971c; end: 105d9977b; -[SCPreviewFeaturePreselectionImpl getPreselectedUserIds] */

void FUN_105d9971c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c096000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb88e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105d9977c; end: 105d997e3; -[SCPreviewFeaturePreselectionImpl hasLensPreviewAction] */

bool FUN_105d9977c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c096000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb88e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 105d997e4; end: 105d99843; -[SCPreviewFeaturePreselectionImpl lensPreviewObservable] */

void FUN_105d997e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c096000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb8900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105d99844; end: 105d998a3; -[SCPreviewFeaturePreselectionImpl friendsInSnapObservable] */

void FUN_105d99844(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010bfba480();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d998a4; end: 105d999af; -[SCPreviewFeaturePreselectionImpl friendsInThisSnapUserIds] */

void FUN_105d998a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010c10a860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(lVar3);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c10a860();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x000100504554();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105d999b0; end: 105d99a6f; -[SCPreviewFeaturePreselectionImpl _spotlightSelectionItem] */

void FUN_105d999b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b3558;
  _objc_alloc(PTR_PTR_1126b3558);
  func_0x00010c03d4e0();
  puVar2 = PTR_PTR_1126b3560;
  _objc_alloc(PTR_PTR_1126b3560);
  puVar3 = puVar2;
  func_0x000108f5833c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bce0(puVar2,param_2,puVar1,0,puVar3,0);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b3568;
  _objc_alloc(PTR_PTR_1126b3568);
  func_0x00010c03d400();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d99a70; end: 105d99a9b; -[SCPreviewFeaturePreselectionImpl .cxx_destruct] */

void FUN_105d99a70(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105d99a9c; end: 105d99b47; -[SCPreviewFeaturePreselectionServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d99a9c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112735f04;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112735f0c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c10ab20(lVar2);
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



/* Entry: 105d99b48; end: 105d99b8b; -[SCPreviewFeaturePreselectionServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d99b48(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735f0c);
  _objc_destroyWeak(param_1 + _DAT_112735f08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735f04);
  return;
}



/* Entry: 105d99b8c; end: 105d99e13; -[SCPreviewFeatureCarouselServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d99b8c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  if (param_1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = param_1 + _DAT_112735f10;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar8;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar8 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar1);
  if (param_1 == 0) {
    lVar9 = 0;
    lVar10 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112735f14;
    _objc_loadWeakRetained();
    lVar10 = param_1 + _DAT_112735f18;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar10;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar10);
  lVar10 = 0;
  if (param_1 != 0) {
    lVar10 = param_1 + _DAT_112735f1c;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar10;
  func_0x00010c093ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c093cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar10);
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c4898;
  _objc_alloc(PTR_PTR_1126c4898);
  func_0x00010bffcc40();
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105d99e14; end: 105d99e63; -[SCPreviewFeatureCarouselServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d99e14(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735f1c);
  _objc_destroyWeak(param_1 + _DAT_112735f18);
  _objc_destroyWeak(param_1 + _DAT_112735f14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735f10);
  return;
}



/* Entry: 105d99e64; end: 105d99f87; -[SCPreviewFeatureCarouselImpl initWithLensCarouselManager:lensFeaturesVisibilityController:previewConfiguration:latencyLogger:interactionStateLogger:] */

undefined1 *
FUN_105d99e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ed0e0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d99f88; end: 105d99f8f; -[SCPreviewFeatureCarouselImpl responderChainPriority] */

undefined8 FUN_105d99f88(void)

{
  return 0x7fffffff;
}



/* Entry: 105d99f90; end: 105d99fcf; -[SCPreviewFeatureCarouselImpl snapEditor:didChangeToolBarButtonItemType:selected:] */

void FUN_105d99f90(long param_1)

{
  ulong uVar1;
  undefined8 in_x4;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c070a20();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea2970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setCarouselHidden__112586400,in_x4);
  return;
}



/* Entry: 105d99fd0; end: 105d99fd3; -[SCPreviewFeatureCarouselImpl isEnabled] */

void FUN_105d99fd0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be40090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isEnabled_11256d9c0);
  return;
}



/* Entry: 105d99fd4; end: 105d9a0db; -[SCPreviewFeatureCarouselImpl beginFilterItemUpdateListening] */

void FUN_105d99fd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010be40080();
  if (((int)lVar1 != 0) && ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddbca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bef0080(uVar2);
    _objc_release(param_1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105d9a0dc; end: 105d9a10f;  */

void FUN_105d9a0dc(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be51600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105d9a110; end: 105d9a113; -[SCPreviewFeatureCarouselImpl stopFilterItemUpdateListening] */

void FUN_105d9a110(void)

{
  return;
}



/* Entry: 105d9a114; end: 105d9a16b; -[SCPreviewFeatureCarouselImpl _isEnabled] */

uint FUN_105d9a114(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06e860();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c078580(uVar3);
    uVar4 = (uint)uVar3 ^ 1;
  }
  else {
    uVar4 = 0;
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 105d9a16c; end: 105d9a1bf; -[SCPreviewFeatureCarouselImpl _setCarouselHidden:] */

void FUN_105d9a16c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be40080();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c228e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105d9a1c0; end: 105d9a227; -[SCPreviewFeatureCarouselImpl _carouselInitialActivationParameters] */

void FUN_105d9a1c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0240;
  _objc_alloc(PTR_PTR_1126b0240);
  func_0x00010bddbcc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0c60(puVar1,param_2,1,param_1,0,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d9a228; end: 105d9a287; -[SCPreviewFeatureCarouselImpl _carouselInitialSelection] */

void FUN_105d9a228(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2917c0();
  _objc_release(lVar1);
  if (lVar2 == 0x11) {
    func_0x00010c158a20(PTR_PTR_1126b00f8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d9a288; end: 105d9a2b3; -[SCPreviewFeatureCarouselImpl _logCarouselActivated] */

void FUN_105d9a288(long param_1)

{
  func_0x00010c2575c0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c0acc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_logPreviewToolReadyLatency__112608d28,0xf);
  return;
}



/* Entry: 105d9a2b4; end: 105d9a307; -[SCPreviewFeatureCarouselImpl .cxx_destruct] */

void FUN_105d9a2b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d9a308; end: 105d9a477; -[SCPreviewFeaturePrivateStoryInviteStickerImpl initWithStickerContainer:userSession:customStoriesDataMutator:customStoriesDataFetcher:inviteService:logger:] */

undefined1 *
FUN_105d9a308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ed0e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),uVar2);
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c48a0;
    _objc_alloc();
    func_0x00010c0271a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
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



/* Entry: 105d9a478; end: 105d9a47f; -[SCPreviewFeaturePrivateStoryInviteStickerImpl responderChainPriority] */

undefined8 FUN_105d9a478(void)

{
  return 0x7fffffff;
}



/* Entry: 105d9a480; end: 105d9a503; -[SCPreviewFeaturePrivateStoryInviteStickerImpl privateStoryInviteStickerIfPresent] */

void FUN_105d9a480(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105d9a504; end: 105d9a607; -[SCPreviewFeaturePrivateStoryInviteStickerImpl createStoryUsingStickerState:completionPerformer:completion:] */

void FUN_105d9a504(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010bfee000();
  puVar1 = PTR_PTR_1126c48a8;
  if (lVar2 == 10) {
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf593e0(puVar1,param_2,lVar2,param_3,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),param_4,param_5);
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105d9a608;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_5);
    lStack_48 = param_5;
    func_0x00010c0f7fc0(param_4,param_2,&puStack_68);
    lVar2 = lStack_48;
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d9a608; end: 105d9a61f;  */

void FUN_105d9a608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105d9a61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0);
  return;
}



/* Entry: 105d9a620; end: 105d9a6d7; -[SCPreviewFeaturePrivateStoryInviteStickerImpl .cxx_destruct] */

void FUN_105d9a620(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105d9a6d8; end: 105d9a7ef; -[SCPreviewFeaturePrivateStoryInviteStickerServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d9a6d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c48b8;
  _objc_alloc(PTR_PTR_1126c48b8);
  func_0x00010c03a3e0();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112735f68);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105d9a7f0; end: 105d9a9b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d9a7f0(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined *puVar13;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126c48b0;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112735f5c;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112735f54;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_112735f60;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010bf62080();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112735f60;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_112735f58;
    _objc_loadWeakRetained(lVar9);
    lVar10 = lVar9;
    func_0x00010c06a980();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_112735f64;
    _objc_loadWeakRetained(lVar11);
    lVar12 = lVar11;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04c780(puVar13,param_2,lVar2,lVar4,lVar6,lVar8,lVar10,lVar12);
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
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 105d9a9b4; end: 105d9aa2b; -[SCPreviewFeaturePrivateStoryInviteStickerServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d9a9b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112735f68,0);
  _objc_destroyWeak(param_1 + _DAT_112735f64);
  _objc_destroyWeak(param_1 + _DAT_112735f60);
  _objc_destroyWeak(param_1 + _DAT_112735f5c);
  _objc_destroyWeak(param_1 + _DAT_112735f58);
  _objc_destroyWeak(param_1 + _DAT_112735f54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735f50);
  return;
}



/* Entry: 105d9aa2c; end: 105d9aad7; -[SCPreviewFeaturePrivateStoryInviteStickerServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d9aa2c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112735f6c;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112735f70;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c114380(lVar2);
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



/* Entry: 105d9aad8; end: 105d9ab0f; -[SCPreviewFeaturePrivateStoryInviteStickerServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d9aad8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735f70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735f6c);
  return;
}



/* Entry: 105d9ab10; end: 105d9adab; -[SCPreviewFeatureRotationImpl initWithManipulatorFormat:mediaSize:caption:viewportController:snapCrop:motionManager:] */

undefined8 *
FUN_105d9ab10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_1126ed0f0;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    puVar1[2] = param_1;
    puVar1[3] = param_2;
    puVar1[4] = param_5;
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    lVar3 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5e580();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfe6060();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010c072080();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5e580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if ((lVar4 == 0) || ((int)lVar7 != 0)) {
      func_0x00010bf18460(puVar1[5]);
      _objc_initWeak(auStack_88,puVar1);
      uVar8 = puVar1[5];
      func_0x00010c297080();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_90,auStack_88);
      uVar2 = uVar8;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = puVar1[6];
      puVar1[6] = uVar2;
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_88);
    }
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 105d9adac; end: 105d9ae2b;  */

void FUN_105d9adac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010c141a80(param_4);
  uVar1 = param_1;
  func_0x00010c27ada0(param_4);
  _objc_release(param_4);
  func_0x00010c0d1280(param_1,uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d9ae2c; end: 105d9ae33; -[SCPreviewFeatureRotationImpl responderChainPriority] */

undefined8 FUN_105d9ae2c(void)

{
  return 0x7fffffff;
}



/* Entry: 105d9ae34; end: 105d9ae73; -[SCPreviewFeatureRotationImpl configureWithView:] */

void FUN_105d9ae34(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108cc6364(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 8,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d9ae74; end: 105d9aed3; -[SCPreviewFeatureRotationImpl fullMediaContentBoundsForContainerBounds:] */

undefined1  [16] FUN_105d9ae74(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar1 = param_1;
  dVar2 = param_2;
  func_0x00010be19cc0();
  func_0x00010b6908b0(param_1,param_2,param_3,param_4);
  auVar3._0_8_ = param_1 - dVar1 * 0.5;
  auVar3._8_8_ = param_2 - dVar2 * 0.5;
  return auVar3;
}



/* Entry: 105d9aed4; end: 105d9b253; -[SCPreviewFeatureRotationImpl updateMotionUpdatesListeningStateWithCurrentTouchTarget:stickerControllerIsCutting:] */

void FUN_105d9aed4(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010c06fa40();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar2;
  func_0x00010bf5e580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf5e580();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar4;
  func_0x00010bfe6060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c072080();
  _objc_release(uVar17);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  lVar6 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bf5e800();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar7 = PTR_PTR_1126ba960;
    _objc_opt_class(PTR_PTR_1126ba960);
    uVar8 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((uVar8 & 1) == 0) {
      puVar7 = PTR_PTR_1126c4850;
      _objc_opt_class(PTR_PTR_1126c4850);
      uVar8 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar7);
      uVar18 = 0;
      if (((param_4 & 1) == 0) && ((uVar8 & 1) == 0)) {
        lVar10 = param_1 + 8;
        _objc_loadWeakRetained();
        lVar11 = lVar10;
        func_0x00010c2737a0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010c1598c0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar12 == 0) {
          uVar18 = ((uint)uVar9 ^ 1) & ((uint)(lVar16 == 0) | (uint)uVar5);
        }
        else {
          lVar12 = param_1 + 8;
          _objc_loadWeakRetained();
          lVar13 = lVar12;
          func_0x00010c2737a0();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar13;
          func_0x00010c1598c0();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar14;
          func_0x00010c084c40();
          uVar18 = (uint)(lVar15 != 1) & ((uint)uVar9 ^ 1) & ((uint)(lVar16 == 0) | (uint)uVar5);
          _objc_release(lVar14);
          _objc_release(lVar13);
          _objc_release(lVar12);
        }
        _objc_release();
        _objc_release(lVar11);
        _objc_release(lVar10);
      }
      goto LAB_105d9b01c;
    }
  }
  uVar18 = 0;
LAB_105d9b01c:
  _objc_release(lVar2);
  _objc_release(lVar6);
  lVar16 = *(long *)(param_1 + 0x30);
  if (uVar18 != (lVar16 != 0)) {
    if (uVar18 == 0) {
      if (lVar16 != 0) {
        func_0x00010bf94da0(*(undefined8 *)(param_1 + 0x28));
        func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x30));
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x30) = 0;
        _objc_release(uVar9);
      }
    }
    else if (lVar16 == 0) {
      _objc_initWeak(auStack_68,param_1);
      func_0x00010bf18460(*(undefined8 *)(param_1 + 0x28));
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c297080();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      uVar9 = uVar1;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = uVar9;
      _objc_release(uVar17);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105d9b254; end: 105d9b2d3;  */

void FUN_105d9b254(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010c141a80(param_4);
  uVar1 = param_1;
  func_0x00010c27ada0(param_4);
  _objc_release(param_4);
  func_0x00010c0d1280(param_1,uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d9b2d4; end: 105d9b2e3; -[SCPreviewFeatureRotationImpl resetRotation] */

void FUN_105d9b2d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,0,param_1,PTR_s__updateRotationalViewsRotation_t_1125954c0);
  return;
}



/* Entry: 105d9b2e4; end: 105d9b33f; -[SCPreviewFeatureRotationImpl resetVisibleSubviewsRotation] */

void FUN_105d9b2e4(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c141bc0();
  _objc_release(param_1);
  return;
}



/* Entry: 105d9b340; end: 105d9b3b7; -[SCPreviewFeatureRotationImpl motionManagerDidUpdateRotation:translation:] */

void FUN_105d9b340(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (*(long *)(param_4 + 0x30) != 0) {
    lVar1 = param_4 + 8;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bedec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,param_2,param_3,param_4,PTR_s__updateRotationalViewsRotation_t_1125954c0);
      return;
    }
  }
  return;
}



/* Entry: 105d9b3b8; end: 105d9b677; -[SCPreviewFeatureRotationImpl _updateRotationalViewsRotation:translation:] */

void FUN_105d9b3b8(double param_1,double param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_120;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  dVar4 = param_1;
  func_0x00010bde8000();
  dVar5 = param_1;
  _CGAffineTransformMakeRotation(&uStack_90,param_1);
  lVar1 = param_4 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf4cf40();
  _CGRectGetHeight();
  dVar6 = param_2 * dVar5;
  lVar2 = param_4 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf4cf40();
  _CGRectGetHeight();
  uStack_e8 = uStack_88;
  uStack_f0 = uStack_90;
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  _CGAffineTransformTranslate(&uStack_c0,dVar6,param_3 * dVar5,&uStack_f0);
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  _objc_release(lVar2);
  _objc_release(lVar1);
  uStack_e8 = uStack_88;
  uStack_f0 = uStack_90;
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  _CGAffineTransformScale(&uStack_c0,1.0 / dVar4,1.0 / dVar4,&uStack_f0);
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  lVar1 = param_4 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  func_0x00010c141bc0();
  _objc_release(lVar1);
  dVar5 = *(double *)(param_4 + 0x10);
  dVar6 = *(double *)(param_4 + 0x18);
  dVar7 = 1.0;
  if ((dVar5 != dVar6) &&
     ((dVar5 != *(double *)PTR__CGSizeZero_110347620 ||
      (dVar6 != *(double *)(PTR__CGSizeZero_110347620 + 8))))) {
    dVar7 = dVar5 / dVar6;
  }
  _CGAffineTransformMakeTranslation(&uStack_c0,0x3fe0000000000000,0x3fe0000000000000);
  uStack_118 = uStack_b8;
  uStack_120 = uStack_c0;
  uStack_108 = uStack_a8;
  uStack_110 = uStack_b0;
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  _CGAffineTransformScale(&uStack_f0,0x3ff0000000000000,dVar7,&uStack_120);
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  uStack_118 = uStack_e8;
  uStack_120 = uStack_f0;
  uStack_108 = uStack_d8;
  uStack_110 = uStack_e0;
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  _CGAffineTransformRotate(&uStack_f0,param_1,&uStack_120);
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  uStack_118 = uStack_e8;
  uStack_120 = uStack_f0;
  uStack_108 = uStack_d8;
  uStack_110 = uStack_e0;
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  _CGAffineTransformScale(&uStack_f0,0x3ff0000000000000,1.0 / dVar7,&uStack_120);
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  uStack_118 = uStack_e8;
  uStack_120 = uStack_f0;
  uStack_108 = uStack_d8;
  uStack_110 = uStack_e0;
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  _CGAffineTransformTranslate(&uStack_f0,param_2,param_3,&uStack_120);
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  uStack_118 = uStack_e8;
  uStack_120 = uStack_f0;
  uStack_108 = uStack_d8;
  uStack_110 = uStack_e0;
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  _CGAffineTransformScale(&uStack_f0,dVar4,dVar4,&uStack_120);
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  uStack_118 = uStack_e8;
  uStack_120 = uStack_f0;
  uStack_108 = uStack_d8;
  uStack_110 = uStack_e0;
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  _CGAffineTransformTranslate(&uStack_f0,0xbfe0000000000000,0xbfe0000000000000,&uStack_120);
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uVar3 = *(undefined8 *)(param_4 + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  func_0x00010c2235a0();
  _objc_release(uVar3);
  return;
}



/* Entry: 105d9b678; end: 105d9b773; -[SCPreviewFeatureRotationImpl _fullMediaContentSizeForContainerBounds:] */

undefined1  [16]
FUN_105d9b678(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  if (2 < *(long *)(param_5 + 0x20) - 3U) {
    if (*(long *)(param_5 + 0x20) - 1U < 2) {
      dVar1 = param_1;
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      param_1 = (double)(long)SQRT(param_1 * param_1 + dVar1 * dVar1);
      param_4 = param_1;
    }
    goto LAB_105d9b728;
  }
  if (*(double *)(param_5 + 0x10) != 0.0) {
    if (*(double *)(param_5 + 0x18) == 0.0) {
      param_1 = INFINITY;
      goto LAB_105d9b728;
    }
    dVar1 = *(double *)(param_5 + 0x10) / *(double *)(param_5 + 0x18);
    if (dVar1 != 0.0) {
      param_1 = INFINITY;
      if ((dVar1 != INFINITY) && (param_1 = param_4 * dVar1, param_4 * dVar1 < param_3)) {
        param_1 = param_3;
        param_4 = param_3 / dVar1;
      }
      goto LAB_105d9b728;
    }
  }
  param_1 = param_3;
  param_4 = INFINITY;
LAB_105d9b728:
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 105d9b774; end: 105d9b8ff; -[SCPreviewFeatureRotationImpl _contentScaleForRotation:] */

double FUN_105d9b774(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar1 = param_5 + 8;
  dVar3 = param_1;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  dVar4 = dVar3;
  _CGRectGetWidth(dVar3,param_2,param_3,param_4);
  lVar1 = param_5 + 8;
  dVar5 = dVar4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf4cf40();
  _CGRectGetWidth();
  _objc_release(lVar1);
  dVar6 = dVar3;
  _CGRectGetHeight(dVar3,param_2,param_3,param_4);
  lVar1 = param_5 + 8;
  dVar7 = dVar6;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf4cf40();
  _CGRectGetHeight();
  _objc_release(lVar1);
  dVar8 = dVar6 / dVar7;
  if (dVar6 / dVar7 <= dVar4 / dVar5) {
    dVar8 = dVar4 / dVar5;
  }
  if ((*(long *)(param_5 + 0x20) == 3) &&
     (dVar4 = dVar3, _CGRectGetHeight(dVar3,param_2,param_3,param_4), 0.0 < dVar4)) {
    if ((*(double *)(param_5 + 0x10) != *(double *)PTR__CGSizeZero_110347620) ||
       (*(double *)(param_5 + 0x18) != *(double *)(PTR__CGSizeZero_110347620 + 8))) {
      dVar4 = param_2;
      func_0x000107ffbdb4(dVar3,param_2,param_3,param_4,*(double *)(param_5 + 0x10),
                          *(double *)(param_5 + 0x18),param_1);
      _CGRectGetHeight(dVar3,param_2,param_3,param_4);
      dVar8 = 1.0 / (dVar4 / dVar3);
    }
  }
  return dVar8;
}



/* Entry: 105d9b900; end: 105d9b917; -[SCPreviewFeatureRotationImpl delegate] */

void FUN_105d9b900(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d9b918; end: 105d9b923; -[SCPreviewFeatureRotationImpl setDelegate:] */

void FUN_105d9b918(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 105d9b924; end: 105d9b92b; -[SCPreviewFeatureRotationImpl caption] */

undefined8 FUN_105d9b924(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105d9b92c; end: 105d9b95b; -[SCPreviewFeatureRotationImpl setCaption:] */

void FUN_105d9b92c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d9b95c; end: 105d9b963; -[SCPreviewFeatureRotationImpl viewportController] */

undefined8 FUN_105d9b95c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105d9b964; end: 105d9b993; -[SCPreviewFeatureRotationImpl setViewportController:] */

void FUN_105d9b964(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105d9b994; end: 105d9b99b; -[SCPreviewFeatureRotationImpl snapCrop] */

undefined8 FUN_105d9b994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


