/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a9d378; end: 106a9d383; -[SCShakeInfoHolderImpl setExternalImageAttachmentProvider:] */

void FUN_106a9d378(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106a9d384; end: 106a9d38b; -[SCShakeInfoHolderImpl shouldCensorScreenshot] */

undefined1 FUN_106a9d384(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106a9d38c; end: 106a9d393; -[SCShakeInfoHolderImpl setShouldCensorScreenshot:] */

void FUN_106a9d38c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106a9d394; end: 106a9d39b; -[SCShakeInfoHolderImpl .cxx_destruct] */

void FUN_106a9d394(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 106a9d39c; end: 106a9d76b; -[SCShakeOldVersionWarningContainer initWithFrame:updateInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106a9d39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puStack_a8 = PTR_PTR_1126f4980;
  puVar12 = &uStack_b0;
  uStack_b0 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar12,PTR_s_initWithFrame__1125e2948);
  if (puVar12 != (undefined8 *)0x0) {
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar14 = (long)_DAT_112757294;
    uVar13 = *(undefined8 *)((long)puVar12 + lVar14);
    *(undefined **)((long)puVar12 + lVar14) = puVar1;
    _objc_release(uVar13);
    func_0x00010c219b60(*(undefined8 *)((long)puVar12 + lVar14));
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c28d1a0(param_7);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar2 = param_7;
    func_0x00010c298be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar12 + lVar14));
    _objc_release(puVar1);
    _objc_release(lVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar12 + lVar14));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar12 + lVar14));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar12 + lVar14));
    _objc_release(puVar1);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar12 + lVar14));
    func_0x00010befbb60(puVar12);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar12 + lVar14);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar12;
    func_0x00010c08e400(puVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar13;
    uVar5 = *(undefined8 *)((long)puVar12 + lVar14);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010c1408a0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar12;
    uStack_98 = uVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar12 + lVar14);
    func_0x00010bfe0660(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar13);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar12;
  }
  ___stack_chk_fail();
  puVar12 = *(undefined8 **)(param_7 + _DAT_112757294);
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar12,PTR_s_intrinsicContentSize_1125f8080);
  return puVar12;
}



/* Entry: 106a9d76c; end: 106a9d77b; -[SCShakeOldVersionWarningContainer intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9d76c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112757294),PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 106a9d77c; end: 106a9d78f; -[SCShakeOldVersionWarningContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9d77c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112757294,0);
  return;
}



/* Entry: 106a9d790; end: 106a9d82b; -[SCShakeOldVersionWarningView initWithUpdateInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106a9d790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4988;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d01b0;
    _objc_alloc();
    func_0x00010c0150a0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112757298);
    *(undefined **)((long)puVar1 + (long)_DAT_112757298) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a9d82c; end: 106a9d83b; -[SCShakeOldVersionWarningView oldVersionWarning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a9d82c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112757298);
}



/* Entry: 106a9d83c; end: 106a9d84f; -[SCShakeOldVersionWarningView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9d83c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112757298,0);
  return;
}



/* Entry: 106a9d850; end: 106a9d8df; -[SCShakeProjectViewProvider init] */

undefined1 * FUN_106a9d850(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4990;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d01b8;
    _objc_alloc(PTR_PTR_1126d01b8);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c19ace0(puVar1);
    _objc_release(puVar2);
    func_0x00010be3a2c0(puVar1);
    func_0x00010be3a2e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106a9d8e0; end: 106a9dc07; -[SCShakeProjectViewProvider setupTapToSelect:projectText:] */

void FUN_106a9d8e0(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2696c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    func_0x00010c211f00(param_1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    lVar1 = param_1;
    func_0x00010c2696c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar3;
    _objc_release(uVar5);
    func_0x00010c212f20(*(undefined8 *)(param_1 + 8),param_2,param_3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + 8),param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + 8),param_2,puVar3);
    _objc_release(puVar3);
    if (param_4 == (undefined **)0x0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e69718;
    }
    else {
      ppuVar4 = param_4;
      func_0x00010bf51e00(param_4);
    }
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar3;
    _objc_release(uVar5);
    func_0x00010c212f20(*(undefined8 *)(param_1 + 0x10),param_2,ppuVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x94);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
    _objc_release(puVar3);
    lVar1 = param_1;
    func_0x00010c2696c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106a9dc08;
    puStack_80 = &UNK_1108471b0;
    lStack_78 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_98);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c2696c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    puStack_c0 = puVar3;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_106a9dd68;
    puStack_a8 = &UNK_1108471b0;
    lStack_a0 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_c0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a9dc08; end: 106a9dd67;  */

void FUN_106a9dc08(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2696c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2696c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a9dd68; end: 106a9de53;  */

void FUN_106a9dd68(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2696c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a9de54; end: 106a9dfcf; -[SCShakeProjectViewProvider setupSelectProjectTeam] */

void FUN_106a9de54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010bfa2da0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c117cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      return;
    }
  }
  lVar1 = param_1;
  func_0x00010bfa2da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212fc0(0x4000000000000000);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc(PTR__OBJC_CLASS___UIScrollView_1126af098);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1e49a0(param_1,param_2,puVar3);
  _objc_release(puVar3);
  lVar1 = param_1;
  func_0x00010c117cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(lVar1);
  func_0x00010be75f80(param_1);
  lVar1 = param_1;
  func_0x00010c117cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2025c0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c117cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(lVar1);
  func_0x00010c117cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a9dfd0; end: 106a9e2f7; -[SCShakeProjectViewProvider setupSubProjectTapToSelectWithSubProjectName:] */

void FUN_106a9dfd0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c25e780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
    func_0x00010c20ee00(param_1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    lVar1 = param_1;
    func_0x00010c25e780(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar3;
    _objc_release(uVar4);
    func_0x00010c212f20(*(undefined8 *)(param_1 + 0x18),param_2,
                        &PTR____CFConstantStringClassReference_110e69758);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar3;
    _objc_release(uVar4);
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      func_0x00010c212f20(*(undefined8 *)(param_1 + 0x20),param_2,
                          &PTR____CFConstantStringClassReference_110e69718);
    }
    else {
      lVar1 = param_3;
      func_0x00010bf51e00(param_3);
      func_0x00010c212f20(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
      _objc_release(lVar1);
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x94);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + 0x20),param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + 0x20),param_2,puVar3);
    _objc_release(puVar3);
    lVar1 = param_1;
    func_0x00010c25e780(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106a9e2f8;
    puStack_80 = &UNK_1108471b0;
    lStack_78 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_98);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c25e780(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    puStack_c0 = puVar3;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_106a9e458;
    puStack_a8 = &UNK_1108471b0;
    lStack_a0 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_c0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a9e2f8; end: 106a9e457;  */

void FUN_106a9e2f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25e780(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25e780(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a9e458; end: 106a9e543;  */

void FUN_106a9e458(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25e780(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a9e544; end: 106a9e7a3; -[SCShakeProjectViewProvider setupSelectSubProjectTeam] */

void FUN_106a9e544(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x00010c25e4a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c25e7c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      return;
    }
  }
  puVar3 = PTR_PTR_1126d01b8;
  _objc_alloc(PTR_PTR_1126d01b8);
  uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
  func_0x00010c20eca0(param_1,param_2,puVar3);
  _objc_release(puVar3);
  lVar1 = param_1;
  func_0x00010c25e4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212fc0(0x4000000000000000);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc(PTR__OBJC_CLASS___UIScrollView_1126af098);
  func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
  func_0x00010c20ee20(param_1,param_2,puVar3);
  _objc_release(puVar3);
  lVar1 = param_1;
  func_0x00010c25e7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c25e7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2025c0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c25e7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c25e7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7e20();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar3;
  _objc_release(uVar4);
  lVar1 = param_1;
  func_0x00010c25e7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106a9e7a4;
  puStack_60 = &UNK_1108471b0;
  lStack_58 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106a9e7a4; end: 106a9ea67;  */

void FUN_106a9e7a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25e7c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25e7c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c113d60();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25e7c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar7,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7f30);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a9ea68; end: 106a9ed23; -[SCShakeProjectViewProvider setupSelectFeature:] */

void FUN_106a9ea68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfa2da0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bfa35c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) goto LAB_106a9ed00;
  }
  lVar1 = param_1;
  func_0x00010bfa2da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212fc0(0x4000000000000000);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc(PTR__OBJC_CLASS___UITableView_1126aed40);
  uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c014e80(uVar4,uVar5,uVar6,uVar7);
  func_0x00010c19af20(param_1,param_2,puVar3);
  _objc_release(puVar3);
  lVar1 = param_1;
  func_0x00010bfa35c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
  _objc_opt_class(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
  func_0x00010c125fe0(lVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e22938);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfa35c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar1);
  _objc_release(puVar3);
  lVar1 = param_1;
  func_0x00010bfa35c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfa35c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfa35c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7e20();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfa35c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(lVar1);
  uVar8 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar9 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar10 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar11 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  lVar1 = param_1;
  func_0x00010bfa35c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fce00(uVar8,uVar9,uVar10,uVar11);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
  func_0x00010bfa35c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211660();
  _objc_release(param_1);
  _objc_release(puVar3);
LAB_106a9ed00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a9ed24; end: 106a9eff3; -[SCShakeProjectViewProvider setupProjectWarning] */

void FUN_106a9ed24(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_1;
  func_0x00010bfa3120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bfa30e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_release(lVar1);
    }
    else {
      lVar3 = param_1;
      func_0x00010bfa3100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        return;
      }
    }
  }
  puVar4 = PTR_PTR_1126d01b8;
  _objc_alloc(PTR_PTR_1126d01b8);
  uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  func_0x00010c19ad60(param_1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  func_0x00010c19ad20(param_1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  func_0x00010c19ad40(param_1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfa3100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(lVar1);
  _objc_release(puVar4);
  lVar1 = param_1;
  func_0x00010bfa3100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfa3100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfa3100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(lVar1);
  _objc_release(puVar4);
  lVar1 = param_1;
  func_0x00010bfa30e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfa3100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bfa3100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 106a9eff4; end: 106a9f157;  */

void FUN_106a9eff4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa30e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa30e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0bc080();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf87140();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x3ff199999999999a);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a9f158; end: 106a9f277; -[SCShakeProjectViewProvider setupAssignToMe] */

void FUN_106a9f158(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d01b8;
  _objc_alloc(PTR_PTR_1126d01b8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c16aba0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf0bc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212fc0(0x4000000000000000);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b50b8;
  func_0x00010c24d760(PTR_PTR_1126b50b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  func_0x00010c161a60(puVar1,param_2,2);
  func_0x00010c1fadc0(puVar1,param_2,0);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar1,param_2,puVar4);
  func_0x00010c16ab80(param_1,param_2,puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a9f278; end: 106a9f2b3; -[SCShakeProjectViewProvider assignToMeSelected] */

undefined8 FUN_106a9f278(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0bc40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07d660();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106a9f2b4; end: 106a9f357; -[SCShakeProjectViewProvider setProjectLabelName:] */

void FUN_106a9f2b4(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c2696c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e69718;
    if (param_3 != (undefined **)0x0) {
      ppuVar1 = param_3;
    }
    func_0x00010c212f20(*(undefined8 *)(param_1 + 0x10),param_2,ppuVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x94);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c212f20(*(undefined8 *)(param_1 + 0x20),param_2,
                        &PTR____CFConstantStringClassReference_110e69718);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a9f358; end: 106a9f3bf; -[SCShakeProjectViewProvider setSubProjectLabelName:] */

void FUN_106a9f358(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c25e780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e69718;
    if (param_3 != (undefined **)0x0) {
      ppuVar1 = param_3;
    }
    func_0x00010c212f20(*(undefined8 *)(param_1 + 0x20),param_2,ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a9f3c0; end: 106a9f4b7; -[SCShakeProjectViewProvider setFeatureLabelNameWithIndex:] */

void FUN_106a9f3c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c2696c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_release();
  if (uVar1 == 0) {
    return;
  }
  if (-1 < (long)param_3) {
    uVar2 = param_1;
    func_0x00010be0e960();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (param_3 < uVar1) {
      uVar2 = param_1;
      func_0x00010be0e960(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c09e3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + 0x10),param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar1);
      goto LAB_106a9f494;
    }
  }
  func_0x000106ac11e4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + 0x10),param_2,uVar2);
LAB_106a9f494:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106a9f4b8; end: 106a9f55f; -[SCShakeProjectViewProvider getSelectedProject] */

void FUN_106a9f4b8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = param_1;
  func_0x00010c2696c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar5 = 0;
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      func_0x000106ac11e4();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0720c0(uVar2,param_2,uVar3);
      uVar5 = 0;
      if ((int)uVar4 == 0) {
        uVar5 = uVar2;
      }
      _objc_retain(uVar5);
      _objc_release(uVar3);
    }
    else {
      uVar5 = 0;
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106a9f560; end: 106a9f5d7; -[SCShakeProjectViewProvider getSelectedSubProject] */

void FUN_106a9f560(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010c2696c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    uVar4 = 0;
    if ((int)uVar3 == 0) {
      uVar4 = uVar2;
    }
    _objc_retain(uVar4);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106a9f5d8; end: 106a9f6bf; -[SCShakeProjectViewProvider showProjectTeamView:] */

/* WARNING: Possible PIC construction at 0x000106a9f60c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106a9f62c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106a9f65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106a9f674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106a9f68c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106a9f6a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a9f690) */
/* WARNING: Removing unreachable block (ram,0x000106a9f678) */
/* WARNING: Removing unreachable block (ram,0x000106a9f660) */
/* WARNING: Removing unreachable block (ram,0x000106a9f630) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x000106a9f610) */
/* WARNING: Removing unreachable block (ram,0x000106a9f6a8) */

void FUN_106a9f5d8(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
  }
  else {
    func_0x00010bfca000(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setHidden__1126479f8,param_3 == 0);
  return;
}



/* Entry: 106a9f6c0; end: 106a9f70b; -[SCShakeProjectViewProvider getFeatureByIndex:] */

void FUN_106a9f6c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be0e960();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a9f70c; end: 106a9f753; -[SCShakeProjectViewProvider highlightChoose] */

void FUN_106a9f70c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a9f754; end: 106a9fb53; -[SCShakeProjectViewProvider _reloadSubProjectTeamView] */

void FUN_106a9f754(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bfca040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bfca000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d960(*(undefined8 *)(param_1 + 0x28));
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar2 == 0) || (lVar3 = lVar2, func_0x00010bf529e0(), lVar3 == 0)) {
      lVar3 = param_1;
      func_0x00010c25e7c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar3);
      lVar3 = param_1;
      func_0x00010c25e780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar3);
      func_0x00010c25e4a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(param_1);
    }
    else {
      lVar3 = param_1;
      func_0x00010c25e4a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar3);
      lVar3 = param_1;
      func_0x00010c25e7c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar3);
      lVar3 = param_1;
      func_0x00010c25e780(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar3);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar2);
      lVar5 = lVar2;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      if (lVar5 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        do {
          lVar9 = 0;
          lVar11 = lVar10;
          do {
            if (lRam0000000000000000 != lVar3) {
              _objc_enumerationMutation(lVar2);
            }
            lVar10 = param_1;
            func_0x00010bdeb860();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar11);
            func_0x00010befa120(puVar4);
            lVar9 = lVar9 + 1;
            lVar11 = lVar10;
          } while (lVar5 != lVar9);
          lVar5 = lVar2;
          func_0x00010bf52a60();
        } while (lVar5 != 0);
      }
      _objc_release(lVar2);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c14df20();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2803c0();
      _objc_release(uVar6);
      _objc_release(uVar7);
      uVar6 = *(undefined8 *)(param_1 + 0x90);
      _objc_retain(lVar10);
      func_0x00010c0bbfc0(uVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar10);
      _objc_release(lVar10);
      _objc_release(puVar4);
    }
    _objc_release(lVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return;
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010c25e4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c25e7c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    func_0x00010c25e780();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c1a7f60();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) goto code_r0x00010bdbf3e4;
  }
  param_1 = param_2;
  ___stack_chk_fail();
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar1 + 0x20);
  func_0x00010c0bc000(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  (**(code **)(lVar8 + 0x10))(lVar8,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  (**(code **)(lVar3 + 0x10))(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  func_0x00010c25e7c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))(lVar10,uVar7,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7f30);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar10);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar6);
  _objc_release(lVar8);
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a9fb54; end: 106a9fc83;  */

void FUN_106a9fb54(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25e7c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar7,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7f30);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a9fc84; end: 106a9fd2b; -[SCShakeProjectViewProvider _reloadProjectWarningView] */

void FUN_106a9fc84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bfca000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c0e00e0(lVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (lVar3 = lVar2, func_0x00010c08fa60(), lVar3 == 0)) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x60),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x98),param_2,1);
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x60),param_2,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x98),param_2,0);
    func_0x00010c212f20(*(undefined8 *)(param_1 + 0xa0),param_2,lVar2);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a9fd2c; end: 106a9fd43; -[SCShakeProjectViewProvider _initProjectNameToSubprojects] */

void FUN_106a9fd2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = PTR____NSDictionary0__struct_11034ab58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a9fd44; end: 106a9fd5b; -[SCShakeProjectViewProvider _initProjectNameToWarnings] */

void FUN_106a9fd44(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = PTR____NSDictionary0__struct_11034ab58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a9fd5c; end: 106a9fdcf; -[SCShakeProjectViewProvider _getUserEmail] */

void FUN_106a9fd5c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c25d300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e505f8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106a9fdd0; end: 106a9fdf7; -[SCShakeProjectViewProvider _featureNames] */

void FUN_106a9fdd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a9fdf8; end: 106aa0447; -[SCShakeProjectViewProvider _populateProjectsScrollView] */

void FUN_106a9fdf8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be82fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  dVar18 = 0.0;
  _objc_retain(lVar1);
  lVar14 = lVar1;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  if (lVar14 != 0) {
    iVar15 = 0;
    iVar17 = 0;
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(lVar1);
        }
        uVar11 = *(undefined8 *)(lVar12 * 8);
        if (iVar15 < iVar17) {
          func_0x00010befa120(puVar4);
          func_0x00010c14dce0(uVar11);
          dVar18 = dVar18 + 40.0 + (double)iVar15;
          iVar15 = (int)dVar18;
        }
        else {
          func_0x00010befa120(puVar3);
          func_0x00010c14dce0(uVar11);
          dVar18 = dVar18 + 40.0 + (double)iVar17;
          iVar17 = (int)dVar18;
        }
        lVar12 = lVar12 + 1;
      } while (lVar14 != lVar12);
      lVar14 = lVar1;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
  }
  _objc_release(lVar1);
  puVar5 = puVar3;
  func_0x00010bf51e00();
  puVar6 = puVar4;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar11 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar11,uVar19,uVar20,uVar21);
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar11,uVar19,uVar20,uVar21);
  func_0x00010befbb60(puVar4);
  puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar11,uVar19,uVar20,uVar21);
  func_0x00010befbb60(puVar4);
  lVar16 = param_1;
  func_0x00010c117cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d960();
  _objc_release(lVar16);
  lVar16 = param_1;
  func_0x00010c117cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar16);
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  func_0x00010c0bbfc0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar3;
  _objc_release(uVar11);
  _objc_retain(puVar5);
  puVar3 = puVar5;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  lVar16 = 0;
  while (puVar3 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    lVar12 = lVar16;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(puVar5);
      }
      lVar16 = param_1;
      func_0x00010bdeb860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
      puVar13 = puVar13 + 1;
      lVar12 = lVar16;
    } while (puVar3 != puVar13);
    puVar3 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_retain(puVar6);
  puVar3 = puVar6;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  lVar14 = 0;
  while (puVar3 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    lVar9 = lVar14;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(puVar6);
      }
      lVar14 = param_1;
      func_0x00010bdeb860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
      puVar13 = puVar13 + 1;
      lVar9 = lVar14;
    } while (puVar3 != puVar13);
    puVar3 = puVar6;
    func_0x00010bf52a60();
  }
  _objc_release(puVar6);
  _objc_retain(puVar4);
  _objc_retain(lVar16);
  func_0x00010c0bbfc0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(lVar14);
  _objc_retain(puVar4);
  func_0x00010c0bbfc0(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(lVar14);
  _objc_release(puVar4);
  _objc_release(lVar16);
  _objc_release(puVar4);
  _objc_release(lVar14);
  _objc_release(lVar16);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  _objc_retain(param_2);
  lVar16 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar14;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar10;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar12;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar5 + 0x20);
  func_0x00010c117cc0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))(lVar9,uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(lVar9);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar14);
  _objc_release(lVar1);
  _objc_release(lVar16);
  lVar16 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar5 + 0x20);
  func_0x00010c117cc0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(lVar1);
  _objc_release(lVar16);
  lVar16 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar14;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar10;
  func_0x00010c113d60();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar12 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar14);
  _objc_release(lVar1);
  _objc_release(lVar16);
  lVar16 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar16);
  lVar16 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar1 = lVar16;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar16);
  return;
}



/* Entry: 106aa0448; end: 106aa06ef;  */

void FUN_106aa0448(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c117cc0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c117cc0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c113d60();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106aa06f0; end: 106aa0cb7;  */

void FUN_106aa06f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c113d60();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = param_2;
    func_0x00010c140820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfce1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0bc000(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(0x4020000000000000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106aa0cb8; end: 106aa0da7; -[SCShakeProjectViewProvider _selectProject:] */

void FUN_106aa0cb8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c271420(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c117ca0(param_1);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106aa0da8; end: 106aa0e0b; -[SCShakeProjectViewProvider assignToMeTapped] */

void FUN_106aa0da8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf0bc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07d660();
  func_0x00010bf0bc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fadc0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aa0e0c; end: 106aa0eeb; -[SCShakeProjectViewProvider _projectNames] */

void FUN_106aa0e0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  func_0x00010c0d3c80(PTR____NSArray0__struct_11034ab48);
  puVar2 = puVar1;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  _objc_retain(&PTR____CFConstantStringClassReference_110daafd8);
  func_0x00010c08fa60();
  puVar5 = puVar2;
  if (ppuVar3 != (undefined **)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110e697d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaea40(puVar2,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110daafd8);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106aa0eec; end: 106aa0eef; -[SCShakeProjectViewProvider allProjectNames] */

void FUN_106aa0eec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__projectNames_11257e598);
  return;
}



/* Entry: 106aa0ef0; end: 106aa0ef7; -[SCShakeProjectViewProvider subProjectNamesForProject:] */

void FUN_106aa0ef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 106aa0ef8; end: 106aa0f3b; -[SCShakeProjectViewProvider collectionView:cellForItemAtIndexPath:] */

void FUN_106aa0ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 106aa0f3c; end: 106aa0f43; -[SCShakeProjectViewProvider collectionView:numberOfItemsInSection:] */

undefined8 FUN_106aa0f3c(void)

{
  return 0;
}



/* Entry: 106aa0f44; end: 106aa0f4b; -[SCShakeProjectViewProvider numberOfSectionsInTableView:] */

undefined8 FUN_106aa0f44(void)

{
  return 1;
}



/* Entry: 106aa0f4c; end: 106aa0f87; -[SCShakeProjectViewProvider tableView:numberOfRowsInSection:] */

undefined8 FUN_106aa0f4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be0e960();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106aa0f88; end: 106aa10ff; -[SCShakeProjectViewProvider tableView:cellForRowAtIndexPath:] */

void FUN_106aa0f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  func_0x00010bf6e080(param_3,param_2,&PTR____CFConstantStringClassReference_110e22938,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0e960(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  uVar2 = param_1;
  func_0x00010c0dfd40(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c09e3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26c280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c26c280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar1);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf634a0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c26c280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106aa1100; end: 106aa11cf; -[SCShakeProjectViewProvider tableView:didSelectRowAtIndexPath:] */

void FUN_106aa1100(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  func_0x00010bf6e880(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c142240(param_4);
      func_0x00010bfa2aa0(param_1);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106aa11d0; end: 106aa12bf; -[SCShakeProjectViewProvider _selectSubproject:] */

void FUN_106aa11d0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c271420(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25e760(param_1);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106aa12c0; end: 106aa1517; -[SCShakeProjectViewProvider _createButtonWithLabel:withState:previousButton:forContainer:withAction:isVertical:] */

void FUN_106aa12c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 auStack_b0 [5];
  undefined8 auStack_88 [5];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_retain(param_3);
  _objc_alloc(puVar4);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c216260();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c271420(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c181e40(0,0x4030000000000000,0,0x4030000000000000,puVar4);
  puVar5 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff8000000000000);
  _objc_release(puVar5);
  func_0x00010bea2680(param_1,param_2,puVar4,param_4);
  func_0x00010befbb60(param_6,param_2,puVar4);
  puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  puVar1 = auStack_88;
  if (param_8 == 0) {
    puVar1 = auStack_b0;
  }
  uVar2 = param_6;
  pcVar3 = FUN_106aa1518;
  if (param_8 == 0) {
    uVar2 = param_5;
    pcVar3 = FUN_106aa15e4;
  }
  *puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puVar1[1] = 0xc2000000;
  puVar1[2] = pcVar3;
  puVar1[3] = &UNK_1108471b0;
  _objc_retain(uVar2);
  puVar1[4] = uVar2;
  func_0x00010c0bbfc0(puVar4,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1[4]);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106aa1518; end: 106aa15e3;  */

void FUN_106aa1518(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106aa15e4; end: 106aa176f;  */

void FUN_106aa15e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7f18;
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = *(undefined ***)(param_1 + 0x20);
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar3 = ppuVar6;
    func_0x00010c0bc000(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  if (ppuVar6 != (undefined **)0x0) {
    _objc_release(ppuVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106aa1770; end: 106aa1823; -[SCShakeProjectViewProvider _setButtonState:withState:] */

void FUN_106aa1770(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_4 < 3) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10dde3c60 + param_4 * 8));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  func_0x00010c216380(param_3,param_2,puVar2,0);
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc0fe0();
  uVar1 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106aa1824; end: 106aa18d3; -[SCShakeProjectViewProvider _textFieldDidChange:] */

void FUN_106aa1824(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8dae0();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106aa18d4; end: 106aa196f; -[SCShakeProjectViewProvider _tapToSelectSingleTap:] */

void FUN_106aa18d4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2696e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106aa1970; end: 106aa1a0b; -[SCShakeProjectViewProvider _subProjectTapToSelectSingleTap:] */

void FUN_106aa1970(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25e7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106aa1a0c; end: 106aa1a23; -[SCShakeProjectViewProvider delegate] */

void FUN_106aa1a0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106aa1a24; end: 106aa1a2f; -[SCShakeProjectViewProvider setDelegate:] */

void FUN_106aa1a24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 106aa1a30; end: 106aa1a37; -[SCShakeProjectViewProvider featureTeamSeparator] */

undefined8 FUN_106aa1a30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106aa1a38; end: 106aa1a67; -[SCShakeProjectViewProvider setFeatureTeamSeparator:] */

void FUN_106aa1a38(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106aa1a68; end: 106aa1a6f; -[SCShakeProjectViewProvider subFeatureTeamSeparator] */

undefined8 FUN_106aa1a68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106aa1a70; end: 106aa1a9f; -[SCShakeProjectViewProvider setSubFeatureTeamSeparator:] */

void FUN_106aa1a70(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106aa1aa0; end: 106aa1aa7; -[SCShakeProjectViewProvider featureWarningSeparator] */

undefined8 FUN_106aa1aa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106aa1aa8; end: 106aa1ad7; -[SCShakeProjectViewProvider setFeatureWarningSeparator:] */

void FUN_106aa1aa8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106aa1ad8; end: 106aa1adf; -[SCShakeProjectViewProvider assignToMeSeparator] */

undefined8 FUN_106aa1ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106aa1ae0; end: 106aa1b0f; -[SCShakeProjectViewProvider setAssignToMeSeparator:] */

void FUN_106aa1ae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aa1b10; end: 106aa1b17; -[SCShakeProjectViewProvider assignToMeCell] */

undefined8 FUN_106aa1b10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106aa1b18; end: 106aa1b47; -[SCShakeProjectViewProvider setAssignToMeCell:] */

void FUN_106aa1b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aa1b48; end: 106aa1b4f; -[SCShakeProjectViewProvider tapToSelectContainer] */

undefined8 FUN_106aa1b48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106aa1b50; end: 106aa1b7f; -[SCShakeProjectViewProvider setTapToSelectContainer:] */

void FUN_106aa1b50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aa1b80; end: 106aa1b87; -[SCShakeProjectViewProvider subProjectTapToSelectContainer] */

undefined8 FUN_106aa1b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106aa1b88; end: 106aa1bb7; -[SCShakeProjectViewProvider setSubProjectTapToSelectContainer:] */

void FUN_106aa1b88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aa1bb8; end: 106aa1bbf; -[SCShakeProjectViewProvider projectsScrollView] */

undefined8 FUN_106aa1bb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106aa1bc0; end: 106aa1bef; -[SCShakeProjectViewProvider setProjectsScrollView:] */

void FUN_106aa1bc0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106aa1bf0; end: 106aa1bf7; -[SCShakeProjectViewProvider subProjectsScrollView] */

undefined8 FUN_106aa1bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106aa1bf8; end: 106aa1c27; -[SCShakeProjectViewProvider setSubProjectsScrollView:] */

void FUN_106aa1bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aa1c28; end: 106aa1c2f; -[SCShakeProjectViewProvider featureWarningContainer] */

undefined8 FUN_106aa1c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106aa1c30; end: 106aa1c5f; -[SCShakeProjectViewProvider setFeatureWarningContainer:] */

void FUN_106aa1c30(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106aa1c60; end: 106aa1c67; -[SCShakeProjectViewProvider featureWarningLabel] */

undefined8 FUN_106aa1c60(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106aa1c68; end: 106aa1c97; -[SCShakeProjectViewProvider setFeatureWarningLabel:] */

void FUN_106aa1c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aa1c98; end: 106aa1c9f; -[SCShakeProjectViewProvider featuresTableView] */

undefined8 FUN_106aa1c98(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 106aa1ca0; end: 106aa1ccf; -[SCShakeProjectViewProvider setFeaturesTableView:] */

void FUN_106aa1ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aa1cd0; end: 106aa1cd7; -[SCShakeProjectViewProvider featureNames] */

undefined8 FUN_106aa1cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106aa1cd8; end: 106aa1cdf; -[SCShakeProjectViewProvider setFeatureNames:] */

void FUN_106aa1cd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106aa1ce0; end: 106aa1dfb; -[SCShakeProjectViewProvider .cxx_destruct] */

void FUN_106aa1ce0(long param_1)

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
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 106aa1dfc; end: 106aa1f5b; -[SCShakeToReportInfoProviderRegistryImpl enumerateInternalLogProviders:] */

void FUN_106aa1dfc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte abStack_381 [9];
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_2b8;
  byte bStack_251;
  byte abStack_250 [8];
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  byte bStack_121;
  byte abStack_120 [8];
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  abStack_120[0] = 0;
  abStack_120[1] = 0;
  abStack_120[2] = 0;
  abStack_120[3] = 0;
  abStack_120[4] = 0;
  abStack_120[5] = 0;
  abStack_120[6] = 0;
  abStack_120[7] = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar4 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar4);
  pbVar2 = abStack_120;
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        bStack_121 = 0;
        pbVar2 = &bStack_121;
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(lStack_118 + lVar6 * 8));
        if ((bStack_121 & 1) != 0) goto LAB_106aa1ee4;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      pbVar2 = abStack_120;
      lVar1 = lVar4;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
LAB_106aa1ee4:
  _objc_release(lVar4);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x20);
  __Unwind_Resume();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pbVar2);
  _os_unfair_lock_lock(param_3 + 0x30);
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = 0;
  abStack_250[0] = 0;
  abStack_250[1] = 0;
  abStack_250[2] = 0;
  abStack_250[3] = 0;
  abStack_250[4] = 0;
  abStack_250[5] = 0;
  abStack_250[6] = 0;
  abStack_250[7] = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  lVar4 = *(long *)(param_3 + 0x28);
  _objc_retain(lVar4);
  pbVar3 = abStack_250;
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_240;
    do {
      lVar6 = 0;
      do {
        if (*plStack_240 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        bStack_251 = 0;
        pbVar3 = &bStack_251;
        (**(code **)(pbVar2 + 0x10))(pbVar2,*(undefined8 *)(lStack_248 + lVar6 * 8));
        if ((bStack_251 & 1) != 0) goto LAB_106aa2044;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      pbVar3 = abStack_250;
      lVar1 = lVar4;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
LAB_106aa2044:
  _objc_release(lVar4);
  _os_unfair_lock_unlock(param_3 + 0x30);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_3 + 0x30);
  __Unwind_Resume();
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pbVar3);
  _os_unfair_lock_lock(pbVar2 + 0x10);
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  lStack_378 = 0;
  abStack_381[1] = 0;
  abStack_381[2] = 0;
  abStack_381[3] = 0;
  abStack_381[4] = 0;
  abStack_381[5] = 0;
  abStack_381[6] = 0;
  abStack_381[7] = 0;
  abStack_381[8] = 0;
  uStack_368 = 0;
  plStack_370 = (long *)0x0;
  lVar4 = *(long *)(pbVar2 + 8);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_370;
    do {
      lVar6 = 0;
      do {
        if (*plStack_370 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        abStack_381[0] = 0;
        (**(code **)(pbVar3 + 0x10))(pbVar3,*(undefined8 *)(lStack_378 + lVar6 * 8),abStack_381);
        if ((abStack_381[0] & 1) != 0) goto LAB_106aa21a4;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
LAB_106aa21a4:
  _objc_release(lVar4);
  _os_unfair_lock_unlock(pbVar2 + 0x10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(pbVar2 + 0x10);
  __Unwind_Resume(pbVar3);
  _objc_storeStrong(pbVar3 + 0x28,0);
  _objc_storeStrong(pbVar3 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(pbVar3 + 8,0);
  return;
}



/* Entry: 106aa1f5c; end: 106aa20bb; -[SCShakeToReportInfoProviderRegistryImpl enumerateAsyncLogProviders:] */

void FUN_106aa1f5c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte abStack_251 [9];
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  byte bStack_121;
  byte abStack_120 [8];
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  abStack_120[0] = 0;
  abStack_120[1] = 0;
  abStack_120[2] = 0;
  abStack_120[3] = 0;
  abStack_120[4] = 0;
  abStack_120[5] = 0;
  abStack_120[6] = 0;
  abStack_120[7] = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar3);
  pbVar2 = abStack_120;
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        bStack_121 = 0;
        pbVar2 = &bStack_121;
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(lStack_118 + lVar5 * 8));
        if ((bStack_121 & 1) != 0) goto LAB_106aa2044;
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      pbVar2 = abStack_120;
      lVar1 = lVar3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
LAB_106aa2044:
  _objc_release(lVar3);
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x30);
  __Unwind_Resume();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pbVar2);
  _os_unfair_lock_lock(param_3 + 0x10);
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = 0;
  abStack_251[1] = 0;
  abStack_251[2] = 0;
  abStack_251[3] = 0;
  abStack_251[4] = 0;
  abStack_251[5] = 0;
  abStack_251[6] = 0;
  abStack_251[7] = 0;
  abStack_251[8] = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  lVar3 = *(long *)(param_3 + 8);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_240;
    do {
      lVar5 = 0;
      do {
        if (*plStack_240 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        abStack_251[0] = 0;
        (**(code **)(pbVar2 + 0x10))(pbVar2,*(undefined8 *)(lStack_248 + lVar5 * 8),abStack_251);
        if ((abStack_251[0] & 1) != 0) goto LAB_106aa21a4;
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
LAB_106aa21a4:
  _objc_release(lVar3);
  _os_unfair_lock_unlock(param_3 + 0x10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_3 + 0x10);
  __Unwind_Resume(pbVar2);
  _objc_storeStrong(pbVar2 + 0x28,0);
  _objc_storeStrong(pbVar2 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(pbVar2 + 8,0);
  return;
}



/* Entry: 106aa20bc; end: 106aa221b; -[SCShakeToReportInfoProviderRegistryImpl enumerateMetaInfoProviders:] */

void FUN_106aa20bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte abStack_121 [9];
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  abStack_121[1] = 0;
  abStack_121[2] = 0;
  abStack_121[3] = 0;
  abStack_121[4] = 0;
  abStack_121[5] = 0;
  abStack_121[6] = 0;
  abStack_121[7] = 0;
  abStack_121[8] = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 8);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar3 = *plStack_110;
    do {
      lVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(lVar2);
        }
        abStack_121[0] = 0;
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(lStack_118 + lVar4 * 8),abStack_121);
        if ((abStack_121[0] & 1) != 0) goto LAB_106aa21a4;
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
LAB_106aa21a4:
  _objc_release(lVar2);
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x10);
  __Unwind_Resume(param_3);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106aa221c; end: 106aa2257; -[SCShakeToReportInfoProviderRegistryImpl .cxx_destruct] */

void FUN_106aa221c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106aa2258; end: 106aa25c3; -[SCSnapchatNetworkRequestSender uploadMetaData:workQueue:successBlock:failureBlock:] */

void FUN_106aa2258(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_2;
  func_0x00010be90520(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d01c0;
  _objc_opt_new();
  func_0x00010c166940();
  puVar4 = PTR_PTR_1126b86e8;
  _objc_opt_new(PTR_PTR_1126b86e8);
  func_0x00010c166920();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  param_1 = param_1 * 1000.0;
  func_0x00010c197720(puVar4,param_3,(long)param_1);
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25c500();
  _objc_release(uVar6);
  lVar7 = param_2;
  func_0x00010be3e420();
  lVar8 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    lVar9 = lVar2;
    func_0x00010c25e480();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar9 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar8);
  func_0x00010be55f80(param_2,param_3,lVar7,bVar1,1);
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar10 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_3,
                      &PTR____CFConstantStringClassReference_110e018f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc34c0(puVar5,param_3,&PTR____CFConstantStringClassReference_110e697f8,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126d01c8;
  _objc_opt_new(PTR_PTR_1126d01c8);
  lVar8 = lVar2;
  func_0x00010bfe5ea0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb4a0(puVar10,param_3,lVar8);
  _objc_release(lVar8);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf63640(puVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar11;
  func_0x00010bf225e0(uVar11,param_3,1,puVar5,0,puVar12,&PTR___NSConcreteGlobalBlock_11095b090);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(uVar11);
  _CACurrentMediaTime();
  uVar11 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106aa25c8;
  puStack_a0 = &UNK_11095b0b0;
  uStack_78 = (undefined1)lVar7;
  lStack_98 = param_2;
  uStack_90 = param_6;
  uStack_88 = param_7;
  dStack_80 = param_1;
  uStack_77 = bVar1;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c25f600(uVar11,param_3,uVar6,0,param_5,&puStack_b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar6);
  _objc_release(puVar10);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 106aa25c4; end: 106aa25c7;  */

void FUN_106aa25c4(void)

{
  return;
}



/* Entry: 106aa25c8; end: 106aa26bb;  */

void FUN_106aa25c8(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_5);
  func_0x00010c252ee0(param_5);
  func_0x00010be5a280(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  _CACurrentMediaTime();
  dVar3 = *(double *)(param_2 + 0x38);
  func_0x00010c252ee0(param_5);
  func_0x00010be5a2a0(param_1 - dVar3,uVar2);
  lVar1 = 0x28;
  uVar2 = param_6;
  if (param_4 != 0) {
    lVar1 = 0x30;
    uVar2 = param_7;
  }
  (**(code **)(*(long *)(param_2 + lVar1) + 0x10))(*(long *)(param_2 + lVar1),param_5,uVar2);
  _objc_release(param_5);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106aa26bc; end: 106aa28e3; -[SCSnapchatNetworkRequestSender _logUploadLatencyGraphene:outcome:statusCode:isAuthed:isManualEmail:isSpectrum:] */

void FUN_106aa26bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d0168;
  func_0x00010c143100(PTR_PTR_1126d0168);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110daf4d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110db9558,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110dd2cf8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dadab8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110e69878,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 0x20),param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106aa28e4; end: 106aa2abf; -[SCSnapchatNetworkRequestSender _logLegacyMetadataUploadLatency:outcome:statusCode:isAuthed:isManualEmail:] */

void FUN_106aa28e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d0168;
  func_0x00010c143060(PTR_PTR_1126d0168);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110daf4d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110db9558,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110dd2cf8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dadab8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 0x20),param_3,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}


