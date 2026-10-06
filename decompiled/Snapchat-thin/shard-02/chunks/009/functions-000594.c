/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1022a2458; end: 1022a248f;  */

void FUN_1022a2458(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c5a100(param_1,param_2,5);
  func_0x000107c5251c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1c83b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe0000000000000,param_1,PTR_s_setMinimumScaleFactor__11264fb10);
  return;
}



/* Entry: 1022a2490; end: 1022a28f7;  */

undefined * FUN_1022a2490(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b0c40;
  func_0x000107c61168(PTR_PTR_1126b0c40);
  func_0x000107c45110(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c55260(puVar1);
  func_0x000107c59a2c(puVar1);
  func_0x000107c61174(puVar1);
  func_0x000107c5a050();
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f07fb80);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 1022a28f8; end: 1022a2917;  */

void FUN_1022a28f8(void)

{
  func_0x000107c61168(&PTR_PTR_112831ab0);
  return;
}



/* Entry: 1022a2918; end: 1022a292f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a2918(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112e7a360),PTR_s_setEnabled__112642f38,param_1 & 1);
  return;
}



/* Entry: 1022a2930; end: 1022a293f; -[SCMemoriesMultiSelectActionBar setCreateVideoButtonState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a2930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112e7a360),PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 1022a2940; end: 1022a29f3;  */

/* WARNING: Possible PIC construction at 0x0001022a29d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022a29d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a2940(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126b0c40;
  func_0x000107c61168(PTR_PTR_1126b0c40);
  func_0x000107c45110(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  lVar1 = _DAT_112e7a360;
  func_0x000107c55260(*(undefined8 *)(unaff_x20 + _DAT_112e7a360));
  if (param_2 != 0) {
    puVar2 = *(undefined **)(unaff_x20 + lVar1);
    func_0x000107c61174(puVar2);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c59e1c(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1022a29f4; end: 1022a2a5f; -[SCMemoriesMultiSelectActionBar applyCreateVideoDirectToSnapEditorStyleWithTitle:] */

void FUN_1022a29f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_1022a2940(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1022a2a60; end: 1022a2aa3;  */

/* WARNING: Possible PIC construction at 0x0001022a2a84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022a2a88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a2a60(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112e7a368),PTR_s_setHidden__1126479f8,
             (param_1 ^ 0xffffffff) & 1);
  return;
}



/* Entry: 1022a2aa4; end: 1022a2b0f; -[SCMemoriesMultiSelectActionBar setEditButtonVisible:] */

/* WARNING: Possible PIC construction at 0x0001022a2af8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022a2afc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a2aa4(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e7a368);
  func_0x000107c61174();
  func_0x000107c550d8(uVar1,param_2,param_3 ^ 1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e7a360);
  func_0x000107c61174(uVar1);
  func_0x000107c550d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1022a2b10; end: 1022a2b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a2b10(uint param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = _DAT_112e7a368;
  uVar2 = 0x3ff0000000000000;
  if ((param_1 & 1) == 0) {
    uVar2 = 0x3fe0000000000000;
  }
  func_0x000107c54514(*(undefined8 *)(unaff_x20 + _DAT_112e7a368),param_2,param_1 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,*(undefined8 *)(unaff_x20 + lVar1),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1022a2b5c; end: 1022a2be3; -[SCMemoriesMultiSelectActionBar setEditButtonEnabled:] */

/* WARNING: Possible PIC construction at 0x0001022a2bc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022a2bc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a2b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112e7a368;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e7a368);
  func_0x000107c61174();
  func_0x000107c54514(uVar2,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  uVar3 = 0x3ff0000000000000;
  if ((int)param_3 == 0) {
    uVar3 = 0x3fe0000000000000;
  }
  func_0x000107c61174(uVar2);
  func_0x000107c526c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1022a2be4; end: 1022a2c77;  */

/* WARNING: Possible PIC construction at 0x0001022a2c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a2c44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022a2c28) */
/* WARNING: Removing unreachable block (ram,0x0001022a2c48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a2be4(uint param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = _DAT_112e7a350;
  uVar2 = 0x3ff0000000000000;
  if ((param_1 & 1) == 0) {
    uVar2 = 0x3fe0000000000000;
  }
  func_0x000107c54514(*(undefined8 *)(unaff_x20 + _DAT_112e7a350),param_2,param_1 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,*(undefined8 *)(unaff_x20 + lVar1),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1022a2c78; end: 1022a2ca7; -[SCMemoriesMultiSelectActionBar setSendButtonsEnabled:] */

void FUN_1022a2c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1022a2be4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022a2ca8; end: 1022a2d13; -[SCMemoriesMultiSelectActionBar layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a2ca8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_1022a28f8();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  func_0x000107c4abfc(*(undefined8 *)(param_1 + _DAT_112e7a330));
  FUN_1022a2d14();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1022a2d14; end: 1022a2d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a2d14(double param_1)

{
  long lVar1;
  bool bVar2;
  long unaff_x20;
  double dVar3;
  
  lVar1 = _DAT_112e7a350;
  if ((*(byte *)(unaff_x20 + _DAT_112e7a328) & 1) == 0) {
    func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + _DAT_112e7a350));
    func_0x000107c609cc();
    dVar3 = param_1;
    func_0x000107c498ec(*(undefined8 *)(unaff_x20 + lVar1));
    bVar2 = false;
    if ((0.0 < param_1) && (bVar2 = false, !NAN(param_1) && !NAN(dVar3))) {
      bVar2 = param_1 < dVar3;
    }
    if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010c216270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(unaff_x20 + lVar1),PTR_s_setTitle_forState__1126632c0,0,0);
      return;
    }
  }
  return;
}



/* Entry: 1022a2d8c; end: 1022a31ef;  */

/* WARNING: Possible PIC construction at 0x0001022a2e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a2ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a2ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a2eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a3004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a3038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a3088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a30e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a3138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a3190: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022a313c) */
/* WARNING: Removing unreachable block (ram,0x0001022a30e4) */
/* WARNING: Removing unreachable block (ram,0x0001022a308c) */
/* WARNING: Removing unreachable block (ram,0x0001022a303c) */
/* WARNING: Removing unreachable block (ram,0x0001022a3008) */
/* WARNING: Removing unreachable block (ram,0x0001022a2ef0) */
/* WARNING: Removing unreachable block (ram,0x0001022a2ed8) */
/* WARNING: Removing unreachable block (ram,0x0001022a2ea8) */
/* WARNING: Removing unreachable block (ram,0x0001022a2e94) */
/* WARNING: Removing unreachable block (ram,0x0001022a3194) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a2d8c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e7a330);
  func_0x000107c3d89c();
  lVar1 = _DAT_112e7a358;
  func_0x000107c3d5b4(uVar5);
  lVar2 = _DAT_112e7a360;
  func_0x000107c3d5b4(uVar5);
  lVar3 = _DAT_112e7a368;
  func_0x000107c3d5b4(uVar5);
  if (*(char *)(unaff_x20 + _DAT_112e7a328) == '\x01') {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e7a338);
    func_0x000107c3d5b4(uVar5);
    lVar1 = _DAT_112e7a340;
    func_0x000107c3d5b4(uVar6);
    func_0x000107c3d5b4(uVar6);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c5e308(uVar5);
    func_0x000107c61180();
    func_0x000107c40290(0x404a000000000000);
    func_0x000107c61180();
  }
  else {
    func_0x000107c3d5b4(uVar5);
    func_0x000107c3d8b8(*(undefined8 *)(unaff_x20 + _DAT_112e7a350));
    func_0x000107c3d8b8(*(undefined8 *)(unaff_x20 + lVar2));
    func_0x000107c3d8b8(*(undefined8 *)(unaff_x20 + lVar3));
    func_0x000107c3d8b8(*(undefined8 *)(unaff_x20 + lVar1));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar4 + 0x18) = 0xd;
    *(undefined8 *)(puVar4 + 0x10) = 6;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c5e308(uVar5);
    func_0x000107c61180();
    func_0x000107c40290(0x404a000000000000);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1022a31f0; end: 1022a324b; -[SCMemoriesMultiSelectActionBar didPressSendWithSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a31f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7a320;
  func_0x000107c61428(param_1 + _DAT_112e7a320,auStack_38,0,0);
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4d1a0();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1022a324c; end: 1022a32a7; -[SCMemoriesMultiSelectActionBar didPressCreateVideoWithSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a324c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7a320;
  func_0x000107c61428(param_1 + _DAT_112e7a320,auStack_38,0,0);
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4d194();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1022a32a8; end: 1022a3303; -[SCMemoriesMultiSelectActionBar didPressEditWithSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a32a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7a320;
  func_0x000107c61428(param_1 + _DAT_112e7a320,auStack_38,0,0);
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4d198();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1022a3304; end: 1022a335f; -[SCMemoriesMultiSelectActionBar didPressMoreWithSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a3304(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7a320;
  func_0x000107c61428(param_1 + _DAT_112e7a320,auStack_38,0,0);
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4d19c();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1022a3360; end: 1022a338f;  */

void FUN_1022a3360(void)

{
  FUN_1022a28f8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022a3390; end: 1022a346b; -[SCMemoriesMultiSelectActionBar .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022a33bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a33dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a33fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a341c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022a3400) */
/* WARNING: Removing unreachable block (ram,0x0001022a33e0) */
/* WARNING: Removing unreachable block (ram,0x0001022a33c0) */
/* WARNING: Removing unreachable block (ram,0x0001022a3420) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a3390(long param_1)

{
  func_0x0001022a3448(param_1 + _DAT_112e7a320);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7a330));
  return;
}



/* Entry: 1022a346c; end: 1022a349f;  */

void FUN_1022a346c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1022a34a0; end: 1022a36ff;  */

void FUN_1022a34a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e7a3a0,&UNK_10da84680);
  puVar1 = &UNK_1104ee8b0;
  func_0x000107c613fc(&UNK_1104ee8b0,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_10;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_9;
  *(undefined8 *)(puVar1 + 0x30) = param_8;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_1;
  *(undefined8 *)(puVar1 + 0x50) = param_3;
  *(undefined8 *)(puVar1 + 0x58) = param_4;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_11);
  func_0x0001000823a8(0x1022a35c4,puVar1);
  return;
}



/* Entry: 1022a3700; end: 1022a370f;  */

undefined1  [16] FUN_1022a3700(void)

{
  return ZEXT816(0x1104ee8d8);
}



/* Entry: 1022a3710; end: 1022a3783;  */

void FUN_1022a3710(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022a3784; end: 1022a3b0b;  */

void FUN_1022a3784(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar13 = param_2[2];
  func_0x0001000285a8(0x112e7a3b0,&UNK_10da846c8);
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  puVar9 = &uStack_80;
  uStack_70 = uVar13;
  func_0x0001000838ec(puVar9);
  uVar13 = uVar10;
  FUN_1022a8fbc(uVar10,uVar4,uVar1);
  func_0x000100082720("MemoriesLockedSnapsSnapMutatorServiceProvider",0x2d,2);
  FUN_1022a9128(uVar10,uVar5,uVar2,uVar1,uVar6);
  func_0x000100082720("MemoriesLockedSnapsSnapStoreServiceProvider",0x2b,2);
  func_0x0001022a38dc(uVar11,uVar7,uVar3,uVar8,puVar9,uVar13,uVar10,uVar12);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(puVar9);
  func_0x000100082720("LockedSnapsPageLauncherEntryPointProvider",0x29,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 1022a3b0c; end: 1022a3b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a3b0c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long unaff_x20;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar10 = lVar2;
  func_0x000100083b20(&uStack_80);
  FUN_1022a49fc();
  lVar11 = lVar10;
  func_0x000107c610f8();
  *(long *)(lVar11 + _DAT_112e7a3c0) = lVar2;
  *(undefined8 *)(lVar11 + _DAT_112e7a3c8) = uVar5;
  *(undefined8 *)(lVar11 + _DAT_112e7a3d0) = uVar3;
  *(undefined8 *)(lVar11 + _DAT_112e7a3d8) = uVar6;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112e7a3e0);
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  puVar1[2] = uStack_70;
  *(undefined8 *)(lVar11 + _DAT_112e7a3e8) = uVar7;
  *(undefined8 *)(lVar11 + _DAT_112e7a3f0) = uVar4;
  *(undefined8 *)(lVar11 + _DAT_112e7a3f8) = uVar8;
  puVar9 = PTR_s_init_1125d9248;
  lStack_90 = lVar11;
  lStack_88 = lVar10;
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar8);
  plVar12 = &lStack_90;
  func_0x000107c61154(plVar12,puVar9);
  *param_1 = (long)plVar12;
  return;
}



/* Entry: 1022a3b20; end: 1022a42f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a3b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e7a3c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a3c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a3d0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a3d8) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e7a3e0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1[2] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a3e8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a3f0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a3f8) = param_10;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022a42f8; end: 1022a43b7;  */

void FUN_1022a42f8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c409cc();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c508d0(lVar1);
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c40974();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c41408(lVar3);
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 1022a43b8; end: 1022a44d3;  */

void FUN_1022a43b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_1104eea38;
  func_0x000107c613fc(&UNK_1104eea38,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  puVar2 = &UNK_1104eea60;
  func_0x000107c613fc(&UNK_1104eea60,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10da84760;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar3 = 0;
  func_0x0001022a4bd0();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  uVar4 = 0x40;
  func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10da84770,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  *param_1 = uVar4;
  return;
}



/* Entry: 1022a44d4; end: 1022a4547;  */

void FUN_1022a44d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022a4548,uVar1,uVar2);
  return;
}



/* Entry: 1022a4548; end: 1022a4747;  */

void FUN_1022a4548(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  puVar3 = PTR_PTR_1126aa2f0;
  func_0x000107c610f8(PTR_PTR_1126aa2f0);
  func_0x000107c453e4();
  func_0x000107c59558();
  puVar4 = puVar3;
  func_0x000107c55724(puVar3);
  FUN_1022a68cc();
  func_0x000107c598d8(puVar3);
  func_0x000107c61170(puVar4);
  FUN_1022a68cc();
  func_0x000107c598d4(puVar3);
  func_0x000107c61170(puVar4);
  FUN_1022a68cc();
  func_0x000107c564cc(puVar3);
  func_0x000107c61170(puVar4);
  FUN_1022a68cc();
  func_0x000107c564c8(puVar3);
  func_0x000107c61170(puVar4);
  puVar4 = &UNK_1104eea88;
  func_0x000107c613fc(&UNK_1104eea88,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar7;
  *(code **)(unaff_x22 + 0x30) = FUN_1022a4c14;
  *(undefined **)(unaff_x22 + 0x38) = puVar4;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puVar6 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1104eeaa0;
  puVar5 = puVar6;
  func_0x000107c60bc4(puVar6);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61174(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c56fcc(puVar3);
  func_0x000107c60bd0(puVar5);
  puVar4 = &UNK_1104eead8;
  func_0x000107c613fc(&UNK_1104eead8,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x1022a4c50;
  *(undefined **)(unaff_x22 + 0x38) = puVar4;
  *puVar6 = puVar2;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1104eeaf0;
  func_0x000107c60bc4(puVar6);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c615f0(uVar1);
  func_0x000107c61574(uVar7);
  func_0x000107c56d08(puVar3);
  func_0x000107c60bd0(puVar6);
                    /* WARNING: Could not recover jumptable at 0x0001022a4744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar3);
  return;
}



/* Entry: 1022a4748; end: 1022a47fb;  */

void FUN_1022a4748(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1104eeb28;
  func_0x000107c613fc(&UNK_1104eeb28,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  uStack_40 = 0x1022a4c58;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104eeb40;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar1);
  func_0x000100162d98("LockedSnapsPageLauncher.onDismiss",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1022a47fc; end: 1022a4853;  */

void FUN_1022a47fc(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1022a4854;
                    /* WARNING: Could not recover jumptable at 0x0001022a4850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))();
  return;
}



/* Entry: 1022a4854; end: 1022a4897;  */

void FUN_1022a4854(undefined8 param_1)

{
  undefined8 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined8 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001022a4894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1022a4898; end: 1022a48bf; -[_TtC15LockedSnapsPage23LockedSnapsPageLauncher launch] */

void FUN_1022a4898(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001022a3c0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022a48c0; end: 1022a48db;  */

void FUN_1022a48c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  code *pcStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar7 = *(long *)(*unaff_x20 + 0x50);
  lVar5 = 0;
  func_0x000100082288(0,lVar7);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = (long)&pcStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar12 - extraout_x12;
  lStack_108 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar6 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12_00;
  lVar13 = unaff_x20[3];
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar4 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar4 != 0) {
    lVar10 = *(long *)(*unaff_x20 + 0x68);
    func_0x000107c61428((long)unaff_x20 + lVar10,auStack_100,0,0);
    (**(code **)(lVar9 + 0x10))(lVar8,(long)unaff_x20 + lVar10,lVar5);
    lVar10 = lVar8;
    func_0x000107c614c4(lVar8,lVar5);
    if ((int)lVar10 == 1) {
      pcVar11 = *(code **)(lStack_108 + 0x20);
      (*pcVar11)(lVar6,lVar8,lVar7);
      (*pcVar11)(param_1,lVar6,lVar7);
      return;
    }
    (**(code **)(lVar9 + 8))(lVar8,lVar5);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  func_0x000107c61428(puVar1,auStack_80,0,0);
  if (*(char *)((long)puVar1 + 0x11) == '\x01') {
    func_0x000107c6157c();
  }
  else {
    uStack_120 = *puVar1;
    uVar2 = puVar1[1];
    uVar3 = *(undefined1 *)(puVar1 + 2);
    uStack_118 = param_1;
    func_0x000107c61428(0x1138153c0,auStack_c0,0,0);
    func_0x00010008a8e8(0x1138153c0,auStack_e8);
    if (lStack_d0 != 0) {
      func_0x000104857124(auStack_e8,auStack_a8);
      lStack_128 = lVar9;
      func_0x0001000a8868(auStack_a8,uStack_90);
      pcStack_130 = *(code **)(lStack_88 + 8);
      func_0x000107c61580();
      lVar9 = lStack_128;
      (*pcStack_130)(uStack_120,uVar2,uVar3,&UNK_104857794);
      func_0x000107c61574();
      func_0x0001000834e4(auStack_a8);
      param_1 = uStack_118;
      goto code_r0x000100083dec;
    }
    func_0x000107c6157c();
    func_0x00010008a938(auStack_e8);
    param_1 = uStack_118;
  }
  func_0x000100083ec8();
code_r0x000100083dec:
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar4 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100083eb4);
    (*pcVar11)();
  }
  lVar6 = *(long *)(*unaff_x20 + 0x68);
  func_0x000107c61428((long)unaff_x20 + lVar6,auStack_a8,0,0);
  (**(code **)(lVar9 + 0x10))(lVar12,(long)unaff_x20 + lVar6,lVar5);
  lVar8 = lVar12;
  func_0x000107c614c4(lVar12,lVar5);
  lVar6 = lStack_110;
  if ((int)lVar8 == 1) {
    pcVar11 = *(code **)(lStack_108 + 0x20);
    (*pcVar11)(lStack_110,lVar12,lVar7);
    (*pcVar11)(param_1,lVar6,lVar7);
    func_0x000107c61574();
    return;
  }
  (**(code **)(lVar9 + 8))(lVar12,lVar5);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x100083ec8);
  (*pcVar11)();
}



/* Entry: 1022a48dc; end: 1022a493b; -[_TtC15LockedSnapsPage23LockedSnapsPageLauncher init] */

void FUN_1022a48dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LockedSnapsPage.LockedSnapsPageLauncher",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a4908);
  (*pcVar1)();
}



/* Entry: 1022a493c; end: 1022a494b;  */

undefined1  [16] FUN_1022a493c(void)

{
  return ZEXT816(0x1104eea18);
}



/* Entry: 1022a494c; end: 1022a49fb; -[_TtC15LockedSnapsPage23LockedSnapsPageLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a494c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e7a3d8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e7a3f8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e7a3c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e7a3c0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e7a3d0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e7a3f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e7a3e8));
  puVar1 = (undefined8 *)(param_1 + _DAT_112e7a3e0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  func_0x000107c61170(puVar1[2]);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 1022a49fc; end: 1022a4a67;  */

void FUN_1022a49fc(void)

{
  func_0x000107c61168(&PTR_PTR_112831cf0);
  return;
}



/* Entry: 1022a4a68; end: 1022a4adf;  */

void FUN_1022a4a68(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1022a4ae0;
  plVar7[0xc] = lVar1;
  plVar7[0xd] = lVar4;
  plVar7[10] = lVar5;
  plVar7[0xb] = lVar3;
  plVar7[8] = lVar6;
  plVar7[9] = lVar2;
  lVar5 = 0;
  func_0x000107c5fcec();
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar7[0xe] = lVar6;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar5,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022a4548,lVar5,lVar6);
  return;
}



/* Entry: 1022a4ae0; end: 1022a4b23;  */

void FUN_1022a4ae0(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001022a4b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1022a4b24; end: 1022a4b93;  */

void FUN_1022a4b24(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1022a4b94;
  plVar5[2] = param_1;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[3] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_1022a4854;
                    /* WARNING: Could not recover jumptable at 0x0001022a4850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 1022a4b94; end: 1022a4c13;  */

void FUN_1022a4b94(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001022a4bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1022a4c14; end: 1022a4c33;  */

void FUN_1022a4c14(void)

{
  FUN_1022a62e0();
  return;
}



/* Entry: 1022a4c34; end: 1022a4c77;  */

void FUN_1022a4c34(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1022a4c78; end: 1022a4dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1022a4c78(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112e7a470;
  pcVar2 = *(code **)(unaff_x20 + _DAT_112e7a470);
  pcVar4 = pcVar2;
  if (pcVar2 == (code *)0x0) {
    puVar3 = &UNK_1104eeba0;
    func_0x000107c613fc(&UNK_1104eeba0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    uVar5 = 0x112e7a4a8;
    func_0x0001000285a8(0x112e7a4a8,&UNK_10da847c0);
    func_0x000107c613fc();
    pcVar4 = FUN_1022a61a4;
    func_0x0001000bdd8c(FUN_1022a61a4,puVar3,uVar5);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(code **)(unaff_x20 + lVar1) = pcVar4;
    func_0x000107c6157c();
    func_0x000107c61574(uVar5);
    pcVar2 = (code *)0x0;
  }
  func_0x000107c6157c(pcVar2);
  return pcVar4;
}



/* Entry: 1022a4dc4; end: 1022a4e5b;  */

void FUN_1022a4dc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1022a623c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022a4e5c,uVar2,uVar3);
  return;
}



/* Entry: 1022a4e5c; end: 1022a4f9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a4e5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xa0) = lVar6;
  if (lVar6 != 0) {
    plVar7 = *(long **)(lVar6 + _DAT_112e7a448);
    *(long **)(unaff_x22 + 0xa8) = plVar7;
    uVar2 = 0x112d510f8;
    func_0x0001000285a8(0x112d510f8,&UNK_10d917b20);
    *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
    plVar8 = (long *)0xa0;
    func_0x000107c6157c(plVar7);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb0) = plVar8;
    plVar4 = plVar8;
    func_0x000100faa6a0();
    *(long **)(unaff_x22 + 0xb8) = plVar4;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1022a4fa0;
    plVar8[0xb] = (long)plVar4;
    plVar8[0xc] = unaff_x22 + 0x38;
    plVar8[9] = unaff_x22 + 0x30;
    plVar8[10] = (long)&UNK_1107a6f08;
    plVar8[8] = unaff_x22 + 0x28;
    lVar5 = *plVar7;
    plVar8[0xd] = (long)&PTR_DAT_1107a6e88;
    lVar6 = 0x10;
    _swift_task_alloc();
    plVar8[0xe] = lVar6;
    lVar6 = *(long *)(lVar5 + 0x50);
    plVar8[0xf] = lVar6;
    lVar6 = *(long *)(lVar6 + -8);
    plVar8[0x10] = lVar6;
    uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar8[0x11] = uVar3;
    plVar4 = (long *)0x70;
    _swift_task_alloc();
    plVar8[0x12] = (long)plVar4;
    *plVar4 = (long)plVar8;
    plVar4[1] = (long)&UNK_104876614;
    plVar4[5] = uVar3;
    plVar4[6] = (long)plVar7;
    lVar5 = *(long *)(*plVar7 + 0x50);
    plVar4[7] = lVar5;
    lVar6 = 0;
    __sSqMa(0,lVar5);
    plVar4[8] = lVar6;
    lVar6 = *(long *)(lVar6 + -8);
    plVar4[9] = lVar6;
    uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar4[10] = uVar3;
    lVar6 = *(long *)(lVar5 + -8);
    plVar4[0xb] = lVar6;
    uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar4[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  uVar1 = 0;
  func_0x000107c5fcbc(0);
  uVar2 = 0x112d4e4a0;
  FUN_1022a623c(0x112d4e4a0,PTR___sScEMa_11034fba8,PTR___sScEs5ErrorsMc_11034fbb0);
  func_0x000107c613f8(uVar1,uVar2,0,0);
  func_0x000107c5f9d4(uVar2);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x0001022a4f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022a4fa0; end: 1022a500b;  */

void FUN_1022a4fa0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar4 + 0xa8);
  *(long *)(lVar4 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xb0));
  func_0x000107c61574(uVar2);
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x90);
    uVar3 = *(undefined8 *)(lVar4 + 0x98);
    pcVar1 = FUN_1022a500c;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x90);
    uVar3 = *(undefined8 *)(lVar4 + 0x98);
    pcVar1 = FUN_1022a53e8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1022a500c; end: 1022a5143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a500c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar8 = *(long *)(unaff_x22 + 0xc0);
  uVar1 = uVar5;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8(uVar5);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  func_0x0001000285a8(0x112d51a60,&UNK_10d9189e0);
  func_0x0001048da110(unaff_x22 + 0x48);
  if (lVar8 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
    puVar2 = *(undefined8 **)(unaff_x22 + 0x80);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c61574();
    func_0x000100faaf10();
    func_0x000107c613f8(&UNK_1107b5fe0,puVar2,0,0);
    *puVar2 = uVar9;
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001022a50dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar8 = *(long *)(unaff_x22 + 0xa0);
  func_0x000107c615e8(uVar1);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x48);
  plVar6 = *(long **)(lVar8 + _DAT_112e7a450);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1022a5144;
  plVar3[5] = unaff_x22 + 0x58;
  plVar3[6] = (long)plVar6;
  lVar7 = *(long *)(*plVar6 + 0x50);
  plVar3[7] = lVar7;
  lVar8 = 0;
  __sSqMa(0,lVar7);
  plVar3[8] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar3[9] = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[10] = uVar4;
  lVar8 = *(long *)(lVar7 + -8);
  plVar3[0xb] = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 1022a5144; end: 1022a51d3;  */

void FUN_1022a5144(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd0));
  uVar4 = *(undefined8 *)(lVar3 + 0x58);
  *(undefined8 *)(lVar3 + 0xd8) = uVar4;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(lVar3 + 0xe0) = plVar1;
  uVar2 = 0;
  func_0x0001022a627c(0,0x112e7a440,&PTR_PTR_1126aa2f0);
  *plVar1 = lVar5;
  plVar1[1] = (long)FUN_1022a51d4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(lVar3 + 0x60,uVar4,uVar2);
  return;
}



/* Entry: 1022a51d4; end: 1022a521f;  */

void FUN_1022a51d4(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xd8);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe0));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1022a5220,*(undefined8 *)(lVar2 + 0x90),*(undefined8 *)(lVar2 + 0x98));
  return;
}



/* Entry: 1022a5220; end: 1022a523b;  */

void FUN_1022a5220(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022a523c,0,0);
  return;
}



/* Entry: 1022a523c; end: 1022a52a3;  */

void FUN_1022a523c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xf0) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022a52a4,uVar2,uVar1);
  return;
}



/* Entry: 1022a52a4; end: 1022a5387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a52a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x22;
  long lVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar4 = *(long *)(unaff_x22 + 0xa0);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  FUN_1022a5454(uVar1);
  func_0x000107c5a6a4(uVar1);
  (**(code **)(lVar4 + _DAT_112e7a468))(lVar4);
  func_0x000107c53e8c(uVar1);
  func_0x000107c615e8(lVar4);
  puVar2 = PTR_PTR_1126aa300;
  func_0x000107c610f8(PTR_PTR_1126aa300);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126aa2f8;
  func_0x000107c610f8();
  func_0x000107c49520();
  func_0x000107c61170(puVar2);
  *puVar5 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1022a5388,*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 1022a5388; end: 1022a53e7;  */

void FUN_1022a5388(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001022a53e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022a53e8; end: 1022a5453;  */

void FUN_1022a53e8(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c613f8(&UNK_1107a6f08,puVar2,0,0);
  *puVar2 = uVar3;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001022a5450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022a5454; end: 1022a55df;  */

/* WARNING: Possible PIC construction at 0x0001022a54c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a55b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a55c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022a54cc) */
/* WARNING: Removing unreachable block (ram,0x0001022a55c8) */
/* WARNING: Removing unreachable block (ram,0x0001022a54d0) */
/* WARNING: Removing unreachable block (ram,0x0001022a55b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a5454(long param_1)

{
  long unaff_x20;
  
  func_0x000107c3dae0();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c3dae4(*(undefined8 *)(unaff_x20 + _DAT_112e7a458));
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1022a55e0; end: 1022a566f;  */

void FUN_1022a55e0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1022a623c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022a5670,uVar2,uVar3);
  return;
}



/* Entry: 1022a5670; end: 1022a56cf;  */

void FUN_1022a5670(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  
  FUN_1022a4c78();
  *(long **)(unaff_x22 + 0x40) = param_1;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1022a56d0;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)param_1;
  lVar4 = *(long *)(*param_1 + 0x50);
  plVar1[7] = lVar4;
  lVar2 = 0;
  __sSqMa(0,lVar4);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar4 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 1022a56d0; end: 1022a578b;  */

void FUN_1022a56d0(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar5 + 0x40);
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x48));
  func_0x000107c61574(uVar3);
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  *(undefined8 *)(lVar5 + 0x50) = uVar4;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(lVar5 + 0x58) = plVar1;
  uVar2 = 0;
  func_0x0001022a627c(0,0x112e7a4a0,&PTR_PTR_1126aa2f8);
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar1 = lVar6;
  plVar1[1] = (long)FUN_1022a578c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)
            (lVar5 + 0x18,uVar4,uVar2,uVar3,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 1022a578c; end: 1022a57f3;  */

void FUN_1022a578c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x50);
  *(long *)(lVar3 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x58));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1022a57f4;
  }
  else {
    pcVar2 = (code *)0x1022a582c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar2,*(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x38));
  return;
}



/* Entry: 1022a57f4; end: 1022a585f;  */

void FUN_1022a57f4(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001022a5828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Entry: 1022a5860; end: 1022a58c3; -[_TtC15LockedSnapsPage29LockedSnapsPageViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a5860(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112e7a470) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LockedSnapsPage/LockedSnapsPageViewController.swift",0x33,2,0x53,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a58c4);
  (*pcVar1)();
}



/* Entry: 1022a58c4; end: 1022a5b6f;  */

void FUN_1022a58c4(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_loadView_112604be0);
  puVar2 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  func_0x000107c610f8();
  func_0x000107c45558();
  func_0x000107c61180();
  func_0x000107c5a050();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a5b68);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 5;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  puVar4 = puVar2;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar7 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar3 + 0x20) = puVar7;
    puVar4 = puVar2;
    func_0x000107c3f764();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar6 = lVar5;
      func_0x000107c3f764(lVar5);
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      puVar8 = puVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar6);
      *(undefined **)(lVar3 + 0x28) = puVar8;
      uVar9 = 0;
      func_0x0001022a627c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar5 = lVar3;
      func_0x000107c5fc48(lVar3,uVar9);
      func_0x000107c61574(lVar3);
      func_0x000107c3d048(puVar7);
      func_0x000107c61170(lVar5);
      func_0x000107c5ba54(puVar2);
      puVar4 = &UNK_1104eeb78;
      func_0x000107c613fc(&UNK_1104eeb78,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar2;
      *(long *)(puVar4 + 0x18) = unaff_x20;
      func_0x000107c61174(puVar2);
      func_0x000107c61174();
      uVar9 = 0x40;
      func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10da847a8,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(puVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar9);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a5b70);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a5b6c);
  (*pcVar1)();
}



/* Entry: 1022a5b70; end: 1022a5bd7;  */

void FUN_1022a5b70(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(long *)(unaff_x22 + 0x18) = param_3;
  uVar4 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1022a5bd8;
  plVar5[4] = param_3;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[5] = lVar3;
  lVar3 = 0x112d45220;
  FUN_1022a623c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar5[6] = lVar2;
  plVar5[7] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022a5670,lVar2,lVar3);
  return;
}



/* Entry: 1022a5bd8; end: 1022a5c73;  */

void FUN_1022a5bd8(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(lVar3 + 0x38) = param_1;
  *(long *)(lVar3 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x30));
  uVar1 = 0x112d45220;
  FUN_1022a623c(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1022a5c74;
  }
  else {
    pcVar2 = FUN_1022a5f94;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar4,uVar1);
  return;
}



/* Entry: 1022a5c74; end: 1022a5f93;  */

void FUN_1022a5c74(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  long lVar9;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar3 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c61174(uVar4);
  func_0x000107c5a050();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a5f84);
    (*pcVar1)();
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar5 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c3d89c();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 9;
  *(undefined8 *)(lVar3 + 0x10) = 4;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a5f88);
    (*pcVar1)();
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar8 = *(long *)(unaff_x22 + 0x18);
  lVar9 = lVar5;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  uVar7 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar3 + 0x20) = uVar7;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a5f8c);
    (*pcVar1)();
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar9 = *(long *)(unaff_x22 + 0x18);
  lVar5 = lVar8;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  uVar4 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar8 = *(long *)(unaff_x22 + 0x18);
    lVar5 = lVar9;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    uVar4 = uVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar7);
    *(undefined8 *)(lVar3 + 0x30) = uVar4;
    uVar4 = uVar6;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar8 != 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar5 = lVar8;
      func_0x000107c3ec1c(lVar8);
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      uVar7 = uVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar4);
      *(undefined8 *)(lVar3 + 0x38) = uVar7;
      uVar4 = 0;
      func_0x0001022a627c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar5 = lVar3;
      func_0x000107c5fc48(lVar3,uVar4);
      func_0x000107c61574(lVar3);
      func_0x000107c3d048(puVar2);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c4ff34(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001022a5f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a5f94);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a5f90);
  (*pcVar1)();
}



/* Entry: 1022a5f94; end: 1022a5fd7;  */

void FUN_1022a5f94(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c614ac(uVar1);
  func_0x000107c4ff34(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001022a5fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022a5fd8; end: 1022a5fff; -[_TtC15LockedSnapsPage29LockedSnapsPageViewController loadView] */

void FUN_1022a5fd8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1022a58c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022a6000; end: 1022a605f; -[_TtC15LockedSnapsPage29LockedSnapsPageViewController initWithNibName:bundle:] */

void FUN_1022a6000(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LockedSnapsPage.LockedSnapsPageViewController",0x2d,"init(nibName:bundle:)",
                      0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a602c);
  (*pcVar1)();
}



/* Entry: 1022a6060; end: 1022a60db; -[_TtC15LockedSnapsPage29LockedSnapsPageViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022a607c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a60c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022a6080) */
/* WARNING: Removing unreachable block (ram,0x0001022a60c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a6060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e7a448));
  return;
}



/* Entry: 1022a60dc; end: 1022a60fb;  */

void FUN_1022a60dc(void)

{
  func_0x000107c61168(&PTR_PTR_112831de8);
  return;
}



/* Entry: 1022a60fc; end: 1022a6103; -[_TtC15LockedSnapsPage29LockedSnapsPageViewController pageViewName] */

undefined8 FUN_1022a60fc(void)

{
  return 0x7b;
}



/* Entry: 1022a6104; end: 1022a6167;  */

void FUN_1022a6104(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1022a6168;
  plVar5[2] = lVar3;
  plVar5[3] = lVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  plVar5[4] = lVar3;
  func_0x000107c5fce8();
  plVar5[5] = lVar3;
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  plVar5[6] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_1022a5bd8;
  plVar4[4] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[5] = lVar3;
  lVar3 = 0x112d45220;
  FUN_1022a623c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[6] = lVar2;
  plVar4[7] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022a5670,lVar2,lVar3);
  return;
}



/* Entry: 1022a6168; end: 1022a61a3;  */

void FUN_1022a6168(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001022a61a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1022a61a4; end: 1022a61ab;  */

void FUN_1022a61a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001022a627c(0,0x112e7a4a0,&PTR_PTR_1126aa2f8);
  func_0x000107c6157c();
  uVar1 = 0x40;
  func_0x000100859150(0x40,0,0x48,3,0,0,&UNK_10da847d0);
  func_0x000107c61574();
  *param_1 = uVar1;
  return;
}



/* Entry: 1022a61ac; end: 1022a61ff;  */

void FUN_1022a61ac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1022a6200;
  plVar4[0xd] = param_1;
  plVar4[0xe] = unaff_x20;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  plVar4[0xf] = lVar2;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0x10] = lVar3;
  lVar3 = 0x112d45220;
  FUN_1022a623c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  plVar4[0x11] = lVar3;
  func_0x000107c5fca8();
  plVar4[0x12] = lVar2;
  plVar4[0x13] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022a4e5c,lVar2,lVar3);
  return;
}



/* Entry: 1022a6200; end: 1022a623b;  */

void FUN_1022a6200(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001022a6238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1022a623c; end: 1022a62bb;  */

void FUN_1022a623c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 1022a62bc; end: 1022a62df;  */

void FUN_1022a62bc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1022a62e0; end: 1022a63f7;  */

void FUN_1022a62e0(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c614f0();
  uVar4 = 0;
  func_0x000107c60714();
  puStack_60 = unaff_x20;
  uStack_58 = uVar4;
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  func_0x000107c5fb78(0x28746e6573657270,0xe900000000000029);
  uVar4 = uStack_58;
  puVar3 = puStack_60;
  puVar1 = &UNK_1104eec18;
  func_0x000107c613fc(&UNK_1104eec18,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uStack_40 = 0x1022a68bc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104eec58;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5fb28(puVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000100162d98(puVar3 + 0x20,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 1022a63f8; end: 1022a65df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a63f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112e7a4c0;
    func_0x000107c61618();
    lVar1 = _DAT_112e7a4b0;
    lVar3 = param_1;
    if (lVar2 != 0) {
      lVar3 = *(long *)(param_1 + _DAT_112e7a4b0);
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c61170();
        uVar4 = *(undefined8 *)(param_1 + lVar1);
        func_0x000107c61174(uVar4);
        uVar6 = uVar4;
        func_0x000107c4ffe8();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        func_0x000107c615e8(uVar6);
      }
      puVar5 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      func_0x00010439c014(0);
      func_0x000107c610f8();
      uVar6 = 0xb4;
      func_0x00010439b9d8(0xb4,0,0,9,0,0,0x3d,0);
      lVar9 = *(long *)(param_1 + _DAT_112e7a4b8);
      func_0x00010439a550(0);
      func_0x000107c61174(lVar9);
      func_0x000107c61174(puVar5);
      lVar7 = param_1;
      func_0x000107c61174(param_1);
      lVar8 = lVar7;
      func_0x000104399a00();
      lVar3 = lVar9;
      func_0x000107c3eda8(lVar9);
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar8);
      func_0x000107c42c1c(*(undefined8 *)(param_1 + lVar1));
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar6);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1022a65e0; end: 1022a67a7;  */

void FUN_1022a65e0(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c614f0();
  uVar4 = 0;
  func_0x000107c60714();
  puStack_60 = unaff_x20;
  uStack_58 = uVar4;
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000019,0x800000010f07fd50);
  uVar4 = uStack_58;
  puVar3 = puStack_60;
  puVar1 = &UNK_1104eec18;
  func_0x000107c613fc(&UNK_1104eec18,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcStack_40 = FUN_1022a6898;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104eec30;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5fb28(puVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000100162d98(puVar3 + 0x20,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 1022a67a8; end: 1022a67cf; -[_TtC15LockedSnapsPage27LockedSnapsPaywallPresenter plusSubscribeDidDismiss] */

void FUN_1022a67a8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1022a65e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022a67d0; end: 1022a682f; -[_TtC15LockedSnapsPage27LockedSnapsPaywallPresenter init] */

void FUN_1022a67d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LockedSnapsPage.LockedSnapsPaywallPresenter",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a67fc);
  (*pcVar1)();
}



/* Entry: 1022a6830; end: 1022a6877; -[_TtC15LockedSnapsPage27LockedSnapsPaywallPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a6830(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7a4b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7a4b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112e7a4c0);
  return;
}



/* Entry: 1022a6878; end: 1022a6897;  */

void FUN_1022a6878(void)

{
  func_0x000107c61168(&PTR_PTR_112831ed0);
  return;
}



/* Entry: 1022a6898; end: 1022a68cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a6898(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e7a4b0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112e7a4b0);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      func_0x000107c61170();
      uVar4 = *(undefined8 *)(lVar2 + lVar1);
      func_0x000107c61174(uVar4);
      uVar5 = uVar4;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(uVar5);
    }
  }
  return;
}



/* Entry: 1022a68cc; end: 1022a693b;  */

void FUN_1022a68cc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e7a4f0;
  func_0x0001000285a8(0x112e7a4f0,&UNK_10da84800);
  func_0x000107c614e8();
  func_0x000107c6157c();
  func_0x000107c610f8(uVar1);
  FUN_1022a6960(FUN_1022a693c);
  return;
}



/* Entry: 1022a693c; end: 1022a695f;  */

undefined8 FUN_1022a693c(void)

{
  undefined8 uStack_18;
  
  func_0x0001000d224c(&uStack_18);
  return uStack_18;
}



/* Entry: 1022a6960; end: 1022a69df;  */

undefined8 FUN_1022a6960(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 unaff_x20;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  puStack_40 = &UNK_101016bdc;
  puStack_38 = &UNK_1104eed00;
  uStack_30 = param_1;
  uStack_28 = param_2;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c46b38();
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1022a69e0; end: 1022a69fb;  */

void FUN_1022a69e0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1022a69fc; end: 1022a6bb7;  */

void FUN_1022a69fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e7a4f8,&UNK_10da84810);
  puVar1 = &UNK_1104eee10;
  func_0x000107c613fc(&UNK_1104eee10,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_1022a6bb8,puVar1);
  return;
}



/* Entry: 1022a6bb8; end: 1022a6bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a6bb8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar10 = &lStack_60;
  lVar8 = lVar1;
  FUN_1022a6fbc();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(long *)(lVar9 + _DAT_112e7a500) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112e7a508) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112e7a510) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112e7a518) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112e7a520) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112e7a528) = uVar6;
  puVar7 = PTR_s_init_1125d9248;
  lStack_60 = lVar9;
  lStack_58 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_60,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 1022a6bc8; end: 1022a6c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a6bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e7a500) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a508) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a510) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a518) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a520) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a528) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022a6c7c; end: 1022a6e17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1022a6c7c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar6 = lStack_48;
  lVar2 = lStack_48;
  func_0x000107c4cd6c(lStack_48);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000100083b20(&lStack_48);
  lVar6 = lStack_48;
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_1130806d8);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lVar6);
  func_0x000100083b20(&lStack_48);
  lVar6 = lStack_48;
  lVar4 = lStack_48;
  func_0x000107c5c5a0(lStack_48);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000100083b20(&lStack_48);
  lVar6 = lStack_48;
  lVar5 = lStack_48;
  func_0x000107c4cb80(lStack_48);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000100083b20(&lStack_48);
  lVar6 = lStack_48;
  func_0x000107c4cb6c(lStack_48);
  func_0x000107c61180();
  func_0x000107c61170(lStack_48);
  puVar7 = PTR_PTR_1126c6668;
  func_0x000107c610f8();
  func_0x000107c47788();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar6);
  if (puVar7 != (undefined *)0x0) {
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a6e18);
  (*pcVar1)();
}


