/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b51f80; end: 106b51fff; -[SCPasswordResetSuccessViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b51f80(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f50f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_loadView_112604be0);
  puVar1 = PTR_PTR_1126af168;
  _objc_alloc();
  func_0x00010c04ed60();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758b3c);
  *(undefined **)(param_1 + _DAT_112758b3c) = puVar1;
  _objc_release(uVar2);
  func_0x00010c222380(param_1);
  return;
}



/* Entry: 106b52000; end: 106b52033; -[SCPasswordResetSuccessViewController _backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b52000(long param_1)

{
  param_1 = param_1 + _DAT_112758b30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f5500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b52034; end: 106b523cb; -[SCPasswordResetSuccessViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b52034(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = PTR_PTR_1126f50f0;
  lStack_b0 = param_1;
  _objc_msgSendSuper2(&lStack_b0,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar14 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar16 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar14,uVar15,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar16);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  func_0x000106b66b58();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar2);
  lVar13 = (long)_DAT_112758b38;
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bf6a7c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1);
  _objc_release(uVar3);
  func_0x00010c213040(puVar1);
  func_0x00010c1cfce0(puVar1);
  lVar12 = (long)_DAT_112758b3c;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  func_0x00010c219b60(puVar1);
  func_0x00010bf69880(*(undefined8 *)(param_1 + lVar13));
  func_0x00010bf6a7e0(*(undefined8 *)(param_1 + lVar13));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493c0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_a0 = puVar5;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c1408a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf493c0(-dVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  puStack_98 = puVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c274200(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493c0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar15);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(puVar4);
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf13860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf4fa60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + _DAT_112758b34,0);
  _objc_storeStrong(puVar1 + _DAT_112758b38,0);
  _objc_storeStrong(puVar1 + _DAT_112758b3c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(puVar1 + _DAT_112758b30);
  return;
}



/* Entry: 106b523cc; end: 106b52427; -[SCPasswordResetSuccessViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b523cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758b34,0);
  _objc_storeStrong(param_1 + _DAT_112758b38,0);
  _objc_storeStrong(param_1 + _DAT_112758b3c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758b30);
  return;
}



/* Entry: 106b52428; end: 106b524eb; -[SCRecoverPasswordAlert initWithScreen:window:emailFirstEnabled:] */

undefined1 *
FUN_106b52428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f50f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126af178;
    _objc_alloc();
    func_0x00010c063220();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    func_0x00010bec1580(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b524ec; end: 106b52593; -[SCRecoverPasswordAlert _startRenderingViewModels] */

void FUN_106b524ec(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106b52594; end: 106b525db;  */

void FUN_106b52594(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed23c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b525dc; end: 106b525df; -[SCRecoverPasswordAlert _update:] */

void FUN_106b525dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beba2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showOptionsAlert_11258c250);
  return;
}



/* Entry: 106b525e0; end: 106b5290f; -[SCRecoverPasswordAlert _showOptionsAlert] */

void FUN_106b525e0(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_b0;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126af180;
  func_0x000106b66a50();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106b52910;
  puStack_c0 = &UNK_110848a18;
  _objc_copyWeak(auStack_b8,auStack_b0);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126af180;
  func_0x000106b66a68();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar4;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x106b5293c;
  puStack_e8 = &UNK_110848a18;
  _objc_copyWeak(auStack_e0,auStack_b0);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126af180;
  func_0x000108b9a87c();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_108,auStack_b0);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar5 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000106b66a38();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    puStack_90 = puVar3;
    puStack_88 = puVar2;
    puStack_80 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_a8 = puVar2;
    puStack_a0 = puVar3;
    puStack_98 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c235c40(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_e0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b8);
  puVar1 = auStack_b0;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  __Unwind_Resume(puVar1);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be87d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b52910; end: 106b529c7;  */

void FUN_106b52910(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be87d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b529c8; end: 106b52a1f; -[SCRecoverPasswordAlert _cancel] */

void FUN_106b529c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d0af0;
  func_0x00010bf2dba0(PTR_PTR_1126d0af0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf83750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_dismissCurrentAlertView_1125be778);
  return;
}



/* Entry: 106b52a20; end: 106b52a77; -[SCRecoverPasswordAlert _recoverPasswordViaEmail] */

void FUN_106b52a20(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d0af0;
  func_0x00010c1240e0(PTR_PTR_1126d0af0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf83750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_dismissCurrentAlertView_1125be778);
  return;
}



/* Entry: 106b52a78; end: 106b52acf; -[SCRecoverPasswordAlert _recoverPasswordViaPhone] */

void FUN_106b52a78(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d0af0;
  func_0x00010c124140(PTR_PTR_1126d0af0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf83750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_dismissCurrentAlertView_1125be778);
  return;
}



/* Entry: 106b52ad0; end: 106b52aff; -[SCRecoverPasswordAlert .cxx_destruct] */

void FUN_106b52ad0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b52b00; end: 106b52bd3; -[SCRecoverPasswordAlertBusinessLogic initWithDelegate:logger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106b52b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_3);
  _objc_retain(param_4);
  puStack_40 = PTR_PTR_1126f5100;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_38;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112758b4c,puVar2);
    _objc_release(puVar2);
    lVar4 = (long)_DAT_112758b50;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  return puVar1;
}



/* Entry: 106b52bd4; end: 106b52c23; -[SCRecoverPasswordAlertBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b52bd4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5100;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_begin_1125a3840);
  func_0x00010c0a6cc0(*(undefined8 *)(param_1 + _DAT_112758b50));
  return;
}



/* Entry: 106b52c24; end: 106b52c2b; -[SCRecoverPasswordAlertBusinessLogic viewModel] */

undefined8 FUN_106b52c24(void)

{
  return 0;
}



/* Entry: 106b52c2c; end: 106b52cb7; -[SCRecoverPasswordAlertBusinessLogic handleAction:] */

void FUN_106b52c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b52cb8;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106b52cf0;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x106b52d44;
  puStack_70 = &UNK_110842e18;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bce20(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 106b52cb8; end: 106b52d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b52cb8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112758b4c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c124020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b52d98; end: 106b52dd3; -[SCRecoverPasswordAlertBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b52d98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758b50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758b4c);
  return;
}



/* Entry: 106b52dd4; end: 106b52f33; -[SCRecoverPasswordPhoneEntryBusinessLogic initWithDelegate:phoneEntry:passwordResetInitiator:usernameOrEmail:logger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b52dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f5108;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112758b54),param_3);
    lVar3 = (long)_DAT_112758b58;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112758b5c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar3));
    lVar3 = (long)_DAT_112758b60;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758b64;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112758b68) = 1;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b52f34; end: 106b52f87; -[SCRecoverPasswordPhoneEntryBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b52f34(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5108;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_begin_1125a3840);
  func_0x00010c0ae4a0(*(undefined8 *)(param_1 + _DAT_112758b5c));
  return;
}



/* Entry: 106b52f88; end: 106b52fbf; -[SCRecoverPasswordPhoneEntryBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b52f88(void)

{
  _objc_alloc(PTR_PTR_1126d0af8);
  func_0x00010c01eba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b52fc0; end: 106b530ab; -[SCRecoverPasswordPhoneEntryBusinessLogic handleAction:] */

void FUN_106b52fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106b530ac;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x106b530d0;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106b530f8;
  puStack_80 = &UNK_1108480f8;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106b53150;
  puStack_a8 = &UNK_110842e18;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x106b53188;
  puStack_d0 = &UNK_110842e18;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_106b531c0;
  puStack_f8 = &UNK_110841f20;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0bfc20(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110);
  return;
}



/* Entry: 106b530ac; end: 106b530f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b530ac(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758b6c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c25f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758b58),
             PTR_s_submitPhone_112675718);
  return;
}



/* Entry: 106b530f8; end: 106b5314f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b530f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = (long)_DAT_112758b54;
  _objc_retain(param_2);
  lVar1 = lVar1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1240c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b53150; end: 106b531bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b53150(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112758b54;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1240a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b531c0; end: 106b531cb;  */

void FUN_106b531c0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc36b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__1TLCheckboxToggled__11254e748,param_2);
  return;
}



/* Entry: 106b531cc; end: 106b53217; -[SCRecoverPasswordPhoneEntryBusinessLogic phoneEntryDidSubmitPhoneNumber:withCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b531cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758b70);
  *(undefined8 *)(param_1 + _DAT_112758b70) = param_4;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be3be90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__initiatePasswordReset__11256c940,
             *(undefined8 *)(param_1 + _DAT_112758b6c));
  return;
}



/* Entry: 106b53218; end: 106b5321b; -[SCRecoverPasswordPhoneEntryBusinessLogic phoneEntryDidUpdatePhoneNumber:] */

void FUN_106b53218(void)

{
  return;
}



/* Entry: 106b5321c; end: 106b53253; -[SCRecoverPasswordPhoneEntryBusinessLogic phoneEntryDidSelectPhoneNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b5321c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758b74);
  *(undefined8 *)(param_1 + _DAT_112758b74) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b53254; end: 106b53257; -[SCRecoverPasswordPhoneEntryBusinessLogic phoneEntrySuggestionPromptDidSelectWithSuggestionType:accept:] */

void FUN_106b53254(void)

{
  return;
}



/* Entry: 106b53258; end: 106b5325b; -[SCRecoverPasswordPhoneEntryBusinessLogic phoneEntryDidSelectRerouteToLogIn:] */

void FUN_106b53258(void)

{
  return;
}



/* Entry: 106b5325c; end: 106b5325f; -[SCRecoverPasswordPhoneEntryBusinessLogic phoneEntryDidSelectCountryPicker:] */

void FUN_106b5325c(void)

{
  return;
}



/* Entry: 106b53260; end: 106b53263; -[SCRecoverPasswordPhoneEntryBusinessLogic phoneEntryDidEndCountryPicker] */

void FUN_106b53260(void)

{
  return;
}



/* Entry: 106b53264; end: 106b53393; -[SCRecoverPasswordPhoneEntryBusinessLogic _initiatePasswordReset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b53264(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  ppuVar2 = &puStack_70;
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106b53394;
  puStack_58 = &UNK_110962498;
  _objc_retain();
  lStack_50 = lVar1;
  uStack_40 = param_3;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retainBlock(&puStack_70);
  func_0x00010c0ae520(*(undefined8 *)(param_1 + _DAT_112758b5c));
  func_0x00010c064d60(*(undefined8 *)(param_1 + _DAT_112758b60));
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(lStack_50);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106b53394; end: 106b5345b;  */

void FUN_106b53394(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b5345c;
  puStack_50 = &UNK_110842a68;
  _objc_retain(param_2);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = param_2;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_68);
  _objc_destroyWeak(auStack_40);
  _objc_release(uStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106b5345c; end: 106b5364f;  */

void FUN_106b5345c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106b53650;
  puStack_88 = &UNK_110962468;
  uStack_78 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_80,param_1 + 0x28);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106b536b0;
  puStack_b0 = &UNK_110843540;
  _objc_copyWeak(auStack_a8,param_1 + 0x28);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x106b536f8;
  puStack_d8 = &UNK_110842c58;
  _objc_copyWeak(auStack_d0,param_1 + 0x28);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_106b53740;
  puStack_100 = &UNK_11087d7c8;
  _objc_copyWeak(auStack_f8,param_1 + 0x28);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_106b537c0;
  puStack_128 = &UNK_1108434b0;
  _objc_copyWeak(auStack_120,param_1 + 0x28);
  _objc_copyWeak(auStack_148,param_1 + 0x28);
  func_0x00010c0c08e0(uVar2);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 106b53650; end: 106b536af;  */

void FUN_106b53650(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be70a60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b536b0; end: 106b5373f;  */

void FUN_106b536b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be70a00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b53740; end: 106b537bf;  */

void FUN_106b53740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be709a0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b537c0; end: 106b53833;  */

void FUN_106b537c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be709c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b53834; end: 106b53897; -[SCRecoverPasswordPhoneEntryBusinessLogic _passwordResetInitiationFailed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b53834(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112758b70;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,0);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0ae4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112758b5c),
               PTR_s_logResetPasswordSendPhoneCodeFai_112609348,1);
    return;
  }
  return;
}



/* Entry: 106b53898; end: 106b53967; -[SCRecoverPasswordPhoneEntryBusinessLogic _passwordResetChallengedCOS:authSessionPayload:clientNetworkRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b53898(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = (long)_DAT_112758b70;
  lVar1 = *(long *)(param_1 + lVar3);
  uVar2 = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
  }
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  param_1 = param_1 + _DAT_112758b54;
  _objc_loadWeakRetained(param_1);
  func_0x00010c291660();
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b53968; end: 106b53a17; -[SCRecoverPasswordPhoneEntryBusinessLogic _passwordResetInitiationSucceeded:codeSentViaSMS:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b53968(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112758b70;
  lVar1 = *(long *)(param_1 + lVar3);
  uVar2 = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
  }
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  func_0x00010c0ae500(*(undefined8 *)(param_1 + _DAT_112758b5c));
  param_1 = param_1 + _DAT_112758b54;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f54e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b53a18; end: 106b53ac3; -[SCRecoverPasswordPhoneEntryBusinessLogic _passwordResetEncounteredUsernameChallengeWithMaskedUsername:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b53a18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112758b70;
  lVar1 = *(long *)(param_1 + lVar3);
  uVar2 = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
  }
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  param_1 = param_1 + _DAT_112758b54;
  _objc_loadWeakRetained(param_1);
  func_0x00010c294480();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b53ac4; end: 106b53b6f; -[SCRecoverPasswordPhoneEntryBusinessLogic _passwordResetEncounteredUserChallengeWithChallengePrompts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b53ac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112758b70;
  lVar1 = *(long *)(param_1 + lVar3);
  uVar2 = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
  }
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  param_1 = param_1 + _DAT_112758b54;
  _objc_loadWeakRetained(param_1);
  func_0x00010c291600();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b53b70; end: 106b53bef; -[SCRecoverPasswordPhoneEntryBusinessLogic _passwordResetEncounteredMagicCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b53b70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112758b70;
  lVar1 = *(long *)(param_1 + lVar3);
  uVar2 = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
  }
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  param_1 = param_1 + _DAT_112758b54;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0b6360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b53bf0; end: 106b53c2f; -[SCRecoverPasswordPhoneEntryBusinessLogic _1TLCheckboxToggled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b53bf0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112758b68) = param_3;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b53c30; end: 106b53cbb; -[SCRecoverPasswordPhoneEntryBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b53c30(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758b5c,0);
  _objc_storeStrong(param_1 + _DAT_112758b74,0);
  _objc_storeStrong(param_1 + _DAT_112758b70,0);
  _objc_storeStrong(param_1 + _DAT_112758b64,0);
  _objc_storeStrong(param_1 + _DAT_112758b60,0);
  _objc_storeStrong(param_1 + _DAT_112758b58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758b54);
  return;
}



/* Entry: 106b53cbc; end: 106b53e3f; -[SCRecoverPasswordPhoneEntryViewController initWithPhoneEntryScreen:recoverPasswordPhoneEntryScreen:styleHelper:window:inAppSupportEnabled:accountRecoveryViaSignIn:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b53cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f5110;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126af178;
    _objc_alloc();
    func_0x00010c063220();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112758b78);
    *(undefined **)((long)puVar1 + (long)_DAT_112758b78) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112758b7c;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112758b80;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112758b84;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112758b88) = param_7;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112758b8c) = param_8;
    lVar4 = (long)_DAT_112758b90;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar3);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b53e40; end: 106b53e47; -[SCRecoverPasswordPhoneEntryViewController pageViewName] */

undefined8 FUN_106b53e40(void)

{
  return 0xf2;
}



/* Entry: 106b53e48; end: 106b53eab; -[SCRecoverPasswordPhoneEntryViewController viewWillAppear:] */

void FUN_106b53e48(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5110;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar1);
  return;
}



/* Entry: 106b53eac; end: 106b53f1b; -[SCRecoverPasswordPhoneEntryViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b53eac(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5110;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_112758b94));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758b90);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 106b53f1c; end: 106b53f6b; -[SCRecoverPasswordPhoneEntryViewController viewDidLoad] */

void FUN_106b53f1c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5110;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  return;
}



/* Entry: 106b53f6c; end: 106b54087; -[SCRecoverPasswordPhoneEntryViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b53f6c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758b80);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106b54088;
  puStack_58 = &UNK_1108489e8;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c250380(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758b84);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106b54088; end: 106b54117;  */

void FUN_106b54088(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2b40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b54118; end: 106b542a3; -[SCRecoverPasswordPhoneEntryViewController _updateUIWithPhoneEntryViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b54118(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112758b94;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  lVar1 = param_3;
  func_0x00010bfb60e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db100(uVar2,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf2c700();
  *(char *)(param_1 + _DAT_112758b98) = (char)lVar1;
  lVar3 = (long)_DAT_112758b9c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf4fa60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf2c700(param_3);
  func_0x00010c21e900(uVar2,param_2,lVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf4fa60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c076be0(param_3);
  func_0x00010c162d80(uVar2,param_2,(uint)lVar1 ^ 1,0);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  lVar1 = param_3;
  func_0x00010bfb6000(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184b20(uVar2,param_2,lVar1,0);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  lVar1 = param_3;
  func_0x00010bf98d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1971a0(uVar2,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf535c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf535c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7ad00(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b542a4; end: 106b542d7; -[SCRecoverPasswordPhoneEntryViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b542a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c06b180(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1749f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758ba0),PTR_s_setButtonSelected__11263ac98,param_3);
  return;
}



/* Entry: 106b542d8; end: 106b54313; -[SCRecoverPasswordPhoneEntryViewController _initSubviews] */

void FUN_106b542d8(undefined8 param_1)

{
  func_0x00010be398c0();
  func_0x00010be3a880(param_1);
  func_0x00010be3a140(param_1);
  func_0x00010be3a000(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be39390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__init1TLCheckboxIfNeeded_11256be80);
  return;
}



/* Entry: 106b54314; end: 106b5443b; -[SCRecoverPasswordPhoneEntryViewController _initContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b54314(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126af168;
  _objc_alloc();
  func_0x00010c04ed60();
  lVar4 = (long)_DAT_112758b9c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106b5443c;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf4fa60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf13860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar3);
  return;
}



/* Entry: 106b5443c; end: 106b5456b;  */

void FUN_106b5443c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(lVar7,uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b5456c; end: 106b5471b; -[SCRecoverPasswordPhoneEntryViewController _initTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b5456c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112758ba4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000108b9a9b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar3),param_2,
                      &PTR____CFConstantStringClassReference_110e75238);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3),param_2,0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758b9c);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b5471c;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106b5471c; end: 106b5497b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b5471c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112758b9c;
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112758b7c;
  func_0x00010bf69880(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
  (**(code **)(lVar7 + 0x10))(lVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar10);
  func_0x00010bf4b2a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6a800(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
  (**(code **)(lVar7 + 0x10))(lVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar8);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b5497c; end: 106b54a77; -[SCRecoverPasswordPhoneEntryViewController _initPhoneEntryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b5497c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112758ba4);
  _objc_retain(uVar3);
  puVar1 = PTR_PTR_1126af268;
  _objc_alloc();
  func_0x00010c00aec0();
  lVar4 = (long)_DAT_112758b94;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758b9c);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b54a78;
  puStack_48 = &UNK_11084fc58;
  lStack_40 = param_1;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  func_0x00010c0bbfc0(uVar2,param_2,&puStack_60);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106b54a78; end: 106b54deb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b54a78(double param_1,long param_2,long param_3)

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
  undefined8 uVar10;
  long lVar11;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112758b7c;
  func_0x00010bf69860(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar11));
  param_1 = param_1 + 2.8;
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar11));
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(-(param_1 + 2.8));
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0bbea0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6a7a0(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar11));
  (**(code **)(lVar5 + 0x10))(lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar10);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b54dec; end: 106b5504f; -[SCRecoverPasswordPhoneEntryViewController _initNeedHelpButtonIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b54dec(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_2 + _DAT_112758b88) == '\x01') {
    puVar1 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0(PTR_PTR_1126aec40,param_3,4);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_112758ba8;
    uVar8 = *(undefined8 *)(param_2 + lVar12);
    *(undefined **)(param_2 + lVar12) = puVar1;
    _objc_release(uVar8);
    uVar9 = *(undefined8 *)(param_2 + lVar12);
    FUN_106b66a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar9);
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)(param_2 + lVar12));
    func_0x00010c16e480(*(undefined8 *)(param_2 + lVar12));
    func_0x00010c216380(*(undefined8 *)(param_2 + lVar12));
    func_0x00010befbd60(*(undefined8 *)(param_2 + lVar12));
    lVar10 = (long)_DAT_112758b9c;
    uVar8 = *(undefined8 *)(param_2 + lVar10);
    func_0x00010bf4b2a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(uVar8);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x20 = *(long *)(param_2 + lVar12);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + lVar10);
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = unaff_x20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar12);
    lStack_78 = lVar10;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = *(undefined **)(param_2 + _DAT_112758b94);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 10.0;
    uVar9 = uVar3;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar4;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar4);
    _objc_release(uVar9);
    _objc_release(unaff_x19);
    _objc_release(uVar3);
    _objc_release(lVar10);
    _objc_release(uVar8);
    _objc_release(uVar2);
    param_2 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_106b55050;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  if (*(char *)(param_2 + _DAT_112758b8c) == '\x01') {
    puVar1 = PTR_PTR_1126af088;
    _objc_opt_new();
    lVar12 = (long)_DAT_112758ba0;
    uVar8 = *(undefined8 *)(param_2 + lVar12);
    *(undefined **)(param_2 + lVar12) = puVar1;
    _objc_release(uVar8);
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar12));
    func_0x00010c1749e0(*(undefined8 *)(param_2 + lVar12));
    func_0x00010c160fc0(*(undefined8 *)(param_2 + lVar12));
    lVar11 = (long)_DAT_112758b9c;
    func_0x00010befbb60(*(undefined8 *)(param_2 + lVar11));
    func_0x00010c219b60(*(undefined8 *)(param_2 + lVar12));
    puStack_110 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar10 = *(long *)(param_2 + lVar12);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = *(long *)(param_2 + lVar11);
    lStack_108 = lVar10;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf69860(*(undefined8 *)(param_2 + _DAT_112758b7c));
    func_0x00010bf49520(param_1 * -2.0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar12);
    lStack_100 = lVar10;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010bf34860(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + lVar12);
    uStack_f8 = uVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010bf4fa60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_f0 = uVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_4 = unaff_x19;
    func_0x00010beef8c0(puStack_110);
    _objc_release(unaff_x19);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(lVar10);
    _objc_release(unaff_x20);
    param_2 = lStack_108;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_106b552c8;
  lStack_130 = unaff_x20;
  puStack_128 = unaff_x19;
  ppuStack_120 = &puStack_90;
  _objc_retain(param_4);
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_106b55350;
  puStack_148 = &UNK_110841f80;
  lStack_140 = param_2;
  puStack_138 = param_4;
  _objc_retain(param_4);
  func_0x0001000d76cc("APPSTORE",&puStack_160);
  _objc_release(puStack_138);
  _objc_release(param_4);
  return;
}



/* Entry: 106b55050; end: 106b552c7; -[SCRecoverPasswordPhoneEntryViewController _init1TLCheckboxIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b55050(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *unaff_x19;
  long lVar10;
  undefined8 unaff_x20;
  long lVar11;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_2 + _DAT_112758b8c) == '\x01') {
    puVar1 = PTR_PTR_1126af088;
    _objc_opt_new();
    lVar10 = (long)_DAT_112758ba0;
    uVar9 = *(undefined8 *)(param_2 + lVar10);
    *(undefined **)(param_2 + lVar10) = puVar1;
    _objc_release(uVar9);
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar10));
    func_0x00010c1749e0(*(undefined8 *)(param_2 + lVar10));
    func_0x00010c160fc0(*(undefined8 *)(param_2 + lVar10));
    lVar11 = (long)_DAT_112758b9c;
    func_0x00010befbb60(*(undefined8 *)(param_2 + lVar11));
    func_0x00010c219b60(*(undefined8 *)(param_2 + lVar10));
    puStack_90 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar2 = *(long *)(param_2 + lVar10);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = *(undefined8 *)(param_2 + lVar11);
    lStack_88 = lVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf69860(*(undefined8 *)(param_2 + _DAT_112758b7c));
    func_0x00010bf49520(param_1 * -2.0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar10);
    lStack_80 = lVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010bf34860(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + lVar10);
    uStack_78 = uVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010bf4fa60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_4 = unaff_x19;
    func_0x00010beef8c0(puStack_90);
    _objc_release(unaff_x19);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(unaff_x20);
    param_2 = lStack_88;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_106b552c8;
  uStack_b0 = unaff_x20;
  puStack_a8 = unaff_x19;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106b55350;
  puStack_c8 = &UNK_110841f80;
  lStack_c0 = param_2;
  puStack_b8 = param_4;
  _objc_retain(param_4);
  func_0x0001000d76cc("APPSTORE",&puStack_e0);
  _objc_release(puStack_b8);
  _objc_release(param_4);
  return;
}



/* Entry: 106b552c8; end: 106b5534f; -[SCRecoverPasswordPhoneEntryViewController _presentCountryPicker:] */

void FUN_106b552c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106b55350;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106b55350; end: 106b554e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b55350(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR_PTR_1126d0b00;
  _objc_alloc(PTR_PTR_1126d0b00);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106b554e8;
  puStack_78 = &UNK_1109624f8;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c006360(puVar1);
  func_0x00010c1c8b80();
  puVar2 = puVar1;
  func_0x00010c10f380(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(puVar2);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 106b554e8; end: 106b55563;  */

void FUN_106b554e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdea100(param_1);
    func_0x00010bf84b00(param_3);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b55564; end: 106b555bf;  */

void FUN_106b55564(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdea0e0(param_1);
    func_0x00010bf84b00(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b555c0; end: 106b5560b; -[SCRecoverPasswordPhoneEntryViewController presentationControllerDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b555c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758b80);
  puVar1 = PTR_PTR_1126af280;
  func_0x00010bf53320(PTR_PTR_1126af280);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b5560c; end: 106b5569b; -[SCRecoverPasswordPhoneEntryViewController _showOptionsAlertIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b5560c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758b80);
  puVar1 = PTR_PTR_1126af280;
  func_0x00010c25ed20(PTR_PTR_1126af280);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758b84);
  puVar1 = PTR_PTR_1126d0b08;
  func_0x00010c15b900(PTR_PTR_1126d0b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b5569c; end: 106b556e7; -[SCRecoverPasswordPhoneEntryViewController _countrySelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b5569c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758b80);
  puVar1 = PTR_PTR_1126af280;
  func_0x00010bf535a0(PTR_PTR_1126af280);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b556e8; end: 106b55733; -[SCRecoverPasswordPhoneEntryViewController _countryPickerExited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b556e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758b80);
  puVar1 = PTR_PTR_1126af280;
  func_0x00010bf53320(PTR_PTR_1126af280);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b55734; end: 106b55797; -[SCRecoverPasswordPhoneEntryViewController phoneNumberString:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_106b55734(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758b80);
  puVar1 = PTR_PTR_1126af280;
  func_0x00010c0fab80(PTR_PTR_1126af280,param_2,param_3,param_6,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return 0;
}



/* Entry: 106b55798; end: 106b557c3; -[SCRecoverPasswordPhoneEntryViewController shouldSubmitPhoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b55798(long param_1)

{
  if (*(char *)(param_1 + _DAT_112758b98) == '\x01') {
    func_0x00010beba2c0();
  }
  return 0;
}



/* Entry: 106b557c4; end: 106b5580f; -[SCRecoverPasswordPhoneEntryViewController selectCountryCodeButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b557c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758b80);
  puVar1 = PTR_PTR_1126af280;
  func_0x00010c284ae0(PTR_PTR_1126af280);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b55810; end: 106b5585f; -[SCRecoverPasswordPhoneEntryViewController attributedLabel:didSelectLinkWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b55810(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758b84);
  puVar1 = PTR_PTR_1126d0b08;
  func_0x00010c124120(PTR_PTR_1126d0b08,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b55860; end: 106b558ab; -[SCRecoverPasswordPhoneEntryViewController _needHelpButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b55860(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758b84);
  puVar1 = PTR_PTR_1126d0b08;
  func_0x00010c0d70e0(PTR_PTR_1126d0b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b558ac; end: 106b558af; -[SCRecoverPasswordPhoneEntryViewController _continueButtonTapped] */

void FUN_106b558ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beba2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showOptionsAlertIfNeeded_11258c258);
  return;
}



/* Entry: 106b558b0; end: 106b558fb; -[SCRecoverPasswordPhoneEntryViewController _backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b558b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758b84);
  puVar1 = PTR_PTR_1126d0b08;
  func_0x00010bfcd2c0(PTR_PTR_1126d0b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b558fc; end: 106b55947; -[SCRecoverPasswordPhoneEntryViewController didToggleCheckbox:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b558fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758b84);
  puVar1 = PTR_PTR_1126d0b08;
  func_0x00010c272580(PTR_PTR_1126d0b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b55948; end: 106b55a07; -[SCRecoverPasswordPhoneEntryViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b55948(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758b90,0);
  _objc_storeStrong(param_1 + _DAT_112758ba0,0);
  _objc_storeStrong(param_1 + _DAT_112758ba8,0);
  _objc_storeStrong(param_1 + _DAT_112758ba4,0);
  _objc_storeStrong(param_1 + _DAT_112758b94,0);
  _objc_storeStrong(param_1 + _DAT_112758b9c,0);
  _objc_storeStrong(param_1 + _DAT_112758b7c,0);
  _objc_storeStrong(param_1 + _DAT_112758b78,0);
  _objc_storeStrong(param_1 + _DAT_112758b84,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758b80,0);
  return;
}



/* Entry: 106b55a08; end: 106b55abf; -[SCRecoverPasswordViaEmailBusinessLogic initWithDelegate:webContentNavigator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b55a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5118;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112758bac),param_3);
    lVar3 = (long)_DAT_112758bb0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar3));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b55ac0; end: 106b55b63; -[SCRecoverPasswordViaEmailBusinessLogic handleAction:] */

void FUN_106b55ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b55b64;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b55b9c;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x106b55bb0;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x106b55bc4;
  puStack_98 = &UNK_110842e18;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bdc00(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0);
  return;
}



/* Entry: 106b55b64; end: 106b55b9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b55b64(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112758bac;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c124100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b55b9c; end: 106b55bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b55b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c125050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758bb0),
             PTR_s_refresh_112626e30);
  return;
}



/* Entry: 106b55bd8; end: 106b55c27; -[SCRecoverPasswordViaEmailBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b55bd8(void)

{
  _objc_alloc(PTR_PTR_1126d0b10);
  func_0x00010c046340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b55c28; end: 106b55d2b; -[SCRecoverPasswordViaEmailBusinessLogic didFinishNavigationWithSuccess:navigationStatus:] */

void FUN_106b55c28(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106b55d2c;
  puStack_58 = &UNK_1108488f8;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_4);
  uStack_50 = param_4;
  uStack_40 = param_3;
  (**(code **)(param_1 + 0x10))(param_1,&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106b55d2c; end: 106b55deb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b55d2c(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112758bb4) = 0;
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2cac0();
    *(undefined1 *)(lVar2 + _DAT_112758bb8) = uVar1;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2cae0();
    *(char *)(lVar2 + _DAT_112758bbc) = (char)uVar3;
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      func_0x000106b66a80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar3 = 0;
    }
    uVar5 = *(undefined8 *)(lVar2 + _DAT_112758bc0);
    *(undefined8 *)(lVar2 + _DAT_112758bc0) = uVar3;
    _objc_release(uVar5);
    lVar4 = lVar2;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))();
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106b55dec; end: 106b55ee7; -[SCRecoverPasswordViaEmailBusinessLogic didStartNavigation:] */

void FUN_106b55dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b55ee8;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  (**(code **)(param_1 + 0x10))(param_1,&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106b55ee8; end: 106b55f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b55ee8(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112758bb4) = 1;
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2cac0();
    *(undefined1 *)(lVar2 + _DAT_112758bb8) = uVar1;
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2cae0();
    *(undefined1 *)(lVar2 + _DAT_112758bbc) = uVar1;
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112758bc0);
    *(undefined8 *)(lVar2 + _DAT_112758bc0) = 0;
    _objc_release(uVar3);
    lVar4 = lVar2;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))();
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106b55f88; end: 106b56083; -[SCRecoverPasswordViaEmailBusinessLogic didUpdateNavigationStatus:] */

void FUN_106b55f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b56084;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  (**(code **)(param_1 + 0x10))(param_1,&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106b56084; end: 106b56107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b56084(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2cac0();
    *(undefined1 *)(lVar2 + _DAT_112758bb8) = uVar1;
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2cae0();
    *(undefined1 *)(lVar2 + _DAT_112758bbc) = uVar1;
    lVar3 = lVar2;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))();
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106b56108; end: 106b56153; -[SCRecoverPasswordViaEmailBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b56108(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758bc0,0);
  _objc_storeStrong(param_1 + _DAT_112758bb0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758bac);
  return;
}



/* Entry: 106b56154; end: 106b5620f; -[SCRecoverPasswordViaEmailViewController initWithScreen:webView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b56154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f5120;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112758bc4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758bc8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b56210; end: 106b56937; -[SCRecoverPasswordViaEmailViewController viewDidLoad] */

void FUN_106b56210(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126f5120;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c2a3bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2a3bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126d0b18;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3feebebebebebebf,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc_init(PTR__OBJC_CLASS___UIButton_1126aec48);
  func_0x00010c16e100(param_1);
  _objc_release(puVar4);
  uVar2 = param_1;
  func_0x00010bf13860(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf13860(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf13860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf13860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf13860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar1);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc_init(PTR__OBJC_CLASS___UIButton_1126aec48);
  func_0x00010c19edc0(param_1);
  _objc_release(puVar4);
  uVar2 = param_1;
  func_0x00010bfb62a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfb62a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfb62a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfb62a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfb62a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar1);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc_init(PTR__OBJC_CLASS___UIButton_1126aec48);
  func_0x00010c1e9520(param_1);
  _objc_release(puVar4);
  uVar2 = param_1;
  func_0x00010c1250a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c1250a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c1250a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c1250a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c1250a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf13860(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  func_0x00010c0bbfc0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfb62a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  func_0x00010c0bbfc0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c1250a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  func_0x00010c0bbfc0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  func_0x00010c0bbfc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c2a3bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  func_0x00010c0bbfc0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bec1580(param_1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 106b56938; end: 106b569f7;  */

void FUN_106b56938(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


