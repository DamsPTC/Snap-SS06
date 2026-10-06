/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006883c4; end: 1006883d7;  */

void FUN_1006883c4(void)

{
  return;
}



/* Entry: 1006883d8; end: 100688523;  */

void FUN_1006883d8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  bool bVar1;
  undefined1 uVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  long *plVar4;
  undefined1 auStack_c0 [24];
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_48;
  
  FUN_1006883c4();
  bVar1 = (int)param_3 == 7;
  if (bVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x28);
    FUN_100688524(extraout_x8);
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010068844c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return;
    }
  }
  else {
    plVar4 = param_1;
    uStack_48 = extraout_x8;
    (**(code **)(*param_1 + 0x30))(param_1,param_4,param_5,0,param_3);
    plVar3 = param_1;
    func_0x000107c2c7b4(param_1,param_4,0);
    if ((plVar3 == (long *)0x0) || (plVar4 == (long *)0x0)) {
      plVar4 = (long *)param_1[0x15];
    }
    uVar2 = plVar4 == (long *)0x0;
    if ((long)plVar4 < 1) {
      *unaff_x19 = 0;
      unaff_x19[0x10] = 0;
    }
    else {
      puStack_a8 = &UNK_10b2de9c8;
      ppuStack_a0 = &PTR_DAT_110cd3288;
      plStack_98 = param_1;
      uStack_90 = param_2;
      plStack_88 = plVar4;
      FUN_1006885e4(auStack_c0,param_1[7],&puStack_a8,param_6 + (long)plVar4 * 1000000);
      FUN_100689930();
      func_0x000100689940();
    }
    FUN_100688524(uStack_48);
    if ((bool)uVar2) {
      return;
    }
  }
  func_0x000107c60e78();
  FUN_100689930();
  func_0x000107c359b4();
  return;
}



/* Entry: 100688524; end: 100688537;  */

void FUN_100688524(void)

{
  return;
}



/* Entry: 100688538; end: 1006885e3;  */

void FUN_100688538(long param_1,undefined **param_2,long param_3,ulong param_4,long param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar5;
  undefined1 *unaff_x19;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined8 *apuStack_1a8 [11];
  long lStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined8 *puStack_138;
  long lStack_e8;
  undefined1 auStack_a0 [24];
  undefined *puStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined8 uStack_28;
  
  FUN_1006883c4();
  uStack_28 = extraout_x8;
  if ((param_4 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0xa8);
    in_ZR = lVar4 == 0;
    param_3 = lVar4;
    if (lVar4 < 1) {
      *unaff_x19 = 0;
      unaff_x19[0x10] = 0;
      goto LAB_1006885ac;
    }
  }
  lVar5 = *(long *)(param_1 + 0x38);
  puStack_88 = &UNK_10b2deabc;
  ppuStack_80 = &PTR_DAT_110cd32b8;
  lVar4 = param_5 + param_3 * 1000000;
  ppuVar3 = &puStack_88;
  lStack_78 = param_1;
  ppuStack_70 = param_2;
  lStack_68 = param_3;
  FUN_1006885e4(auStack_a0);
  FUN_100689930();
  func_0x000100689940();
  param_1 = lVar5;
  param_2 = ppuVar3;
LAB_1006885ac:
  FUN_100688524(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_100689930();
  func_0x000107c359b4();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_1;
  lStack_1b8 = lVar4;
  FUN_10028c49c();
  puStack_1b0 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_1a8,param_2 + 1);
  puStack_148 = &UNK_10bcce56c;
  ppuStack_140 = &PTR_FUN_110d9a228;
  puVar1 = (undefined8 *)0x68;
  lStack_150 = lVar5;
  func_0x000107c60e20();
  *puVar1 = puStack_1b0;
  (*(code *)apuStack_1a8[0][2])(puVar1 + 1,apuStack_1a8);
  puVar1[0xc] = lStack_150;
  puStack_138 = puVar1;
  (*(code *)*apuStack_1a8[0])(apuStack_1a8);
  ppuVar3 = &puStack_148;
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (extraout_x8_00,*(long **)(param_1 + 8),ppuVar3,param_1,&lStack_1b8);
  pppuVar2 = &ppuStack_140;
  (*(code *)*ppuStack_140)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  func_0x000107c60e78();
  (*(code *)*ppuStack_140)(&ppuStack_140);
  func_0x000107c60bd8();
  *pppuVar2 = &PTR_DAT_110cd32b8;
  ppuVar7 = (undefined **)ppuVar3[2];
  ppuVar6 = (undefined **)ppuVar3[1];
  pppuVar2[3] = (undefined **)ppuVar3[3];
  pppuVar2[2] = ppuVar7;
  pppuVar2[1] = ppuVar6;
  return;
}



/* Entry: 1006885e4; end: 10068872f;  */

void FUN_1006885e4(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *apuStack_108 [11];
  long lStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2;
  uStack_118 = param_4;
  FUN_10028c49c();
  uStack_110 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_108,param_3 + 1);
  puStack_a8 = &UNK_10bcce56c;
  ppuStack_a0 = &PTR_FUN_110d9a228;
  puVar2 = (undefined8 *)0x68;
  lStack_b0 = lVar1;
  func_0x000107c60e20();
  *puVar2 = uStack_110;
  (*(code *)apuStack_108[0][2])(puVar2 + 1,apuStack_108);
  puVar2[0xc] = lStack_b0;
  puStack_98 = puVar2;
  (*(code *)*apuStack_108[0])(apuStack_108);
  ppuVar4 = &puStack_a8;
  (**(code **)(**(long **)(param_2 + 8) + 0x10))
            (param_1,*(long **)(param_2 + 8),ppuVar4,param_2,&uStack_118);
  pppuVar3 = &ppuStack_a0;
  (*(code *)*ppuStack_a0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  func_0x000107c60bd8();
  *pppuVar3 = &PTR_DAT_110cd32b8;
  ppuVar6 = (undefined **)ppuVar4[2];
  ppuVar5 = (undefined **)ppuVar4[1];
  pppuVar3[3] = (undefined **)ppuVar4[3];
  pppuVar3[2] = ppuVar6;
  pppuVar3[1] = ppuVar5;
  return;
}



/* Entry: 100688730; end: 100688757;  */

void FUN_100688730(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110cd32b8;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 100688758; end: 1006887d7;  */

/* WARNING: Possible PIC construction at 0x000100689098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010068909c) */
/* WARNING: Removing unreachable block (ram,0x0001006890a4) */
/* WARNING: Removing unreachable block (ram,0x0001006890d4) */
/* WARNING: Removing unreachable block (ram,0x0001006890c0) */
/* WARNING: Removing unreachable block (ram,0x0001006890dc) */
/* WARNING: Removing unreachable block (ram,0x000100689178) */
/* WARNING: Removing unreachable block (ram,0x0001006890ec) */
/* WARNING: Removing unreachable block (ram,0x000100689180) */
/* WARNING: Removing unreachable block (ram,0x000100689124) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100688758(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  long alStack_80 [4];
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar5 = param_2;
  func_0x000107c60d9c();
  uVar2 = 0;
  func_0x000107c60f94(0,*param_5 - lVar5);
  FUN_1006887d8(param_1,param_2,param_3,param_4,param_5);
  lVar5 = *(long *)(param_2 + 0x60);
  func_0x000107c61174(lVar5);
  if ((bRam0000000113817cc8 & 1) == 0) {
    iVar1 = 0x13817cc8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar4 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_after_f");
      pcRam0000000113817cc0 = pcVar4;
      func_0x000107c60e4c(0x113817cc8);
    }
  }
  puVar3 = (undefined8 *)0x10;
  func_0x000107c610a0();
  if (puVar3 == (undefined8 *)0x0) {
    func_0x000107c60e0c();
    func_0x000104bd46a0();
    uStack_60 = 0;
    puStack_58 = &UNK_10bcd06c4;
    uStack_50 = uVar2;
    lStack_48 = lVar5;
    FUN_100083b20(alStack_80,uVar2);
    lVar5 = alStack_80[0];
    func_0x000107c4ddf8();
    func_0x000107c61180();
    func_0x000107c615e8(alStack_80[0]);
    func_0x000107c61434(*(undefined8 *)(lVar5 + _DAT_1130826e0));
  }
  else {
    *puVar3 = 0;
    puVar3[1] = &UNK_10bcd06c4;
    (*pcRam0000000113817cc0)(uVar2,lVar5,puVar3,FUN_10028db1c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1006887d8; end: 10068889b;  */

void FUN_1006887d8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_4;
  func_0x000107c60d28(param_2 + 8);
  FUN_10068889c(param_2 + 0x48,param_3,&uStack_38,param_5);
  lVar3 = *(long *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(lVar3 + -0x10);
  lVar2 = *(long *)(lVar3 + -8);
  uStack_48 = uVar1;
  lStack_40 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010028c1b4();
    } while (extraout_w10 != 0);
    lVar3 = *(long *)(param_2 + 0x50);
  }
  FUN_100688e58(*(undefined8 *)(param_2 + 0x48),lVar3);
  if (lVar2 != 0) {
    do {
      func_0x00010028c1b4();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = uVar1;
  param_1[1] = lVar2;
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_100688f2c(&uStack_58);
  func_0x000100688f50(&uStack_48);
  func_0x000107c60d2c(param_2 + 8);
  return;
}



/* Entry: 10068889c; end: 1006888d7;  */

long FUN_10068889c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000107c314c4();
    lVar2 = uVar1 + 0x80;
  }
  else {
    lVar2 = param_1;
    FUN_100688918();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x80;
}



/* Entry: 1006888d8; end: 100688917;  */

ulong FUN_1006888d8(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  if (param_2 >> 0x39 == 0) {
    uVar2 = param_1[2] - *param_1 >> 6;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffff7f < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0x1ffffffffffffff;
    }
    return uVar2;
  }
  func_0x000107c314cc();
  plVar1 = param_1;
  FUN_1006888d8();
  func_0x000100688a0c(auStack_68,plVar1,param_1[1] - *param_1 >> 7,param_1 + 2);
  FUN_100688a54(lStack_58,param_2,param_3,param_4);
  lStack_58 = lStack_58 + 0x80;
  FUN_100688c18(param_1,auStack_68);
  uVar2 = param_1[1];
  FUN_100688d88(auStack_68);
  return uVar2;
}



/* Entry: 100688918; end: 1006889cb;  */

long FUN_100688918(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_1006888d8(param_1,(param_1[1] - *param_1 >> 7) + 1);
  func_0x000100688a0c(auStack_58,plVar1,param_1[1] - *param_1 >> 7,param_1 + 2);
  FUN_100688a54(lStack_48,param_2,param_3,param_4);
  lStack_48 = lStack_48 + 0x80;
  FUN_100688c18(param_1,auStack_58);
  lVar2 = param_1[1];
  FUN_100688d88(auStack_58);
  return lVar2;
}



/* Entry: 1006889cc; end: 1006889e7;  */

void FUN_1006889cc(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x39 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 7);
    return;
  }
  func_0x000104bd35f4();
  FUN_1006889cc();
  return;
}



/* Entry: 1006889e8; end: 100688a53;  */

void FUN_1006889e8(void)

{
  FUN_1006889cc();
  return;
}



/* Entry: 100688a54; end: 100688a5b;  */

undefined8 *
FUN_100688a54(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uStack_31;
  
  uVar1 = *param_3;
  *param_1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 1);
  uVar2 = *param_4;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  uStack_31 = 0;
  FUN_100688afc(param_1 + 0xe,&uStack_31);
  return param_1;
}



/* Entry: 100688a5c; end: 100688ad7;  */

undefined8 *
FUN_100688a5c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 uStack_31;
  
  *param_1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 1);
  uVar1 = *param_4;
  param_1[0xc] = param_3;
  param_1[0xd] = uVar1;
  uStack_31 = 0;
  FUN_100688afc(param_1 + 0xe,&uStack_31);
  return param_1;
}



/* Entry: 100688ad8; end: 100688afb;  */

void FUN_100688ad8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 100688afc; end: 100688b17;  */

void FUN_100688afc(void)

{
  func_0x000100688af0();
  FUN_100688b34();
  return;
}



/* Entry: 100688b18; end: 100688b33;  */

void FUN_100688b18(void)

{
  return;
}



/* Entry: 100688b34; end: 100688b93;  */

undefined1  [16] FUN_100688b34(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *unaff_x20;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  FUN_100688b18();
  FUN_100688b94();
  FUN_100688ba0();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_110877d38;
  puStack_30[1] = 0;
  *(undefined1 *)(puStack_30 + 3) = *unaff_x20;
  FUN_100688bdc();
  func_0x000100688bf4();
  func_0x0001005766b4(uStack_28);
  if ((bool)in_ZR) {
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  auVar1._8_8_ = 1;
  auVar1._0_8_ = auStack_40;
  return auVar1;
}



/* Entry: 100688b94; end: 100688b9f;  */

void FUN_100688b94(void)

{
  return;
}



/* Entry: 100688ba0; end: 100688bbf;  */

void FUN_100688ba0(void)

{
  FUN_1004b5274();
  FUN_100688bc0();
  func_0x0001004b52e0();
  return;
}



/* Entry: 100688bc0; end: 100688bdb;  */

undefined1 * FUN_100688bc0(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  long *unaff_x19;
  long in_stack_00000000;
  
  if (param_2 >> 0x3b == 0) {
    puVar1 = (undefined1 *)(param_2 << 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  *unaff_x19 = in_stack_00000000 + 0x18;
  unaff_x19[1] = in_stack_00000000;
  return &stack0xfffffffffffffff0;
}



/* Entry: 100688bdc; end: 100688c17;  */

void FUN_100688bdc(void)

{
  long *unaff_x19;
  long in_stack_00000010;
  
  *unaff_x19 = in_stack_00000010 + 0x18;
  unaff_x19[1] = in_stack_00000010;
  return;
}



/* Entry: 100688c18; end: 100688c93;  */

void FUN_100688c18(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_100688c94();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_100688ca0(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 100688c94; end: 100688c9f;  */

void FUN_100688c94(void)

{
  return;
}



/* Entry: 100688ca0; end: 100688d2b;  */

void FUN_100688ca0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x80) {
    FUN_100b44968(param_4,lVar1);
    param_4 = lStack_38 + 0x80;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x80) {
    func_0x000100b449b0(param_2);
  }
  FUN_100688d2c(&uStack_60);
  return;
}



/* Entry: 100688d2c; end: 100688d6f;  */

long FUN_100688d2c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x80;
      func_0x000100b449b0();
    }
  }
  return param_1;
}



/* Entry: 100688d70; end: 100688d87;  */

void FUN_100688d70(void)

{
  return;
}



/* Entry: 100688d88; end: 100688de7;  */

long * FUN_100688d88(long *param_1)

{
  func_0x000100688d80();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100688de8; end: 100688e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100688de8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fe9ea0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fe9ea8) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100688e4c; end: 100688e57;  */

long FUN_100688e4c(long param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_x8;
  long lVar5;
  long lVar6;
  long unaff_x19;
  ulong uVar7;
  undefined1 auStack_c8 [104];
  long lStack_60;
  undefined8 uStack_48;
  
  lVar4 = param_2 - param_1 >> 7;
  FUN_10028be94();
  uVar2 = lVar4 - 2U == 0;
  lVar3 = param_1;
  uStack_48 = extraout_x8;
  if (1 < lVar4) {
    uVar7 = lVar4 - 2U >> 1;
    lVar4 = param_1 + uVar7 * 0x80;
    lVar5 = *(long *)(lVar4 + 0x68);
    uVar2 = lVar5 == *(long *)(param_2 + -0x18);
    unaff_x19 = param_1;
    if (*(long *)(param_2 + -0x18) < lVar5) {
      FUN_100b44968(auStack_c8,param_2 + -0x80);
      lVar5 = param_2 + -0x80;
      do {
        lVar3 = lVar5;
        func_0x000107c314c0(lVar3,lVar4);
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1 >> 1;
        lVar1 = param_1 + uVar7 * 0x80;
        lVar6 = *(long *)(lVar1 + 0x68);
        uVar2 = lVar6 == lStack_60;
        lVar5 = lVar4;
        lVar4 = lVar1;
      } while (!(bool)uVar2 && lStack_60 <= lVar6);
      func_0x000107c3a5bc();
      func_0x000107c3a59c();
    }
  }
  func_0x00010028c18c(uStack_48);
  if ((bool)uVar2) {
    return lVar3;
  }
  func_0x000107c60e78();
  FUN_100554494();
  if (lVar3 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 100688e58; end: 100688e73;  */

void FUN_100688e58(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_100688e4c(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 100688e74; end: 100688f2b;  */

long FUN_100688e74(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 extraout_x8;
  long lVar4;
  long lVar5;
  long unaff_x19;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_c8 [104];
  long lStack_60;
  undefined8 uStack_48;
  
  FUN_10028be94();
  uVar2 = param_4 - 2U == 0;
  lVar3 = param_1;
  uStack_48 = extraout_x8;
  if (1 < param_4) {
    uVar6 = param_4 - 2U >> 1;
    lVar7 = param_1 + uVar6 * 0x80;
    lVar4 = *(long *)(lVar7 + 0x68);
    uVar2 = lVar4 == *(long *)(param_2 + -0x18);
    unaff_x19 = param_1;
    if (*(long *)(param_2 + -0x18) < lVar4) {
      FUN_100b44968(auStack_c8,param_2 + -0x80);
      lVar4 = param_2 + -0x80;
      do {
        lVar3 = lVar4;
        func_0x000107c314c0(lVar3,lVar7);
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1 >> 1;
        lVar1 = param_1 + uVar6 * 0x80;
        lVar5 = *(long *)(lVar1 + 0x68);
        uVar2 = lVar5 == lStack_60;
        lVar4 = lVar7;
        lVar7 = lVar1;
      } while (!(bool)uVar2 && lStack_60 <= lVar5);
      func_0x000107c3a5bc();
      func_0x000107c3a59c();
    }
  }
  func_0x00010028c18c(uStack_48);
  if ((bool)uVar2) {
    return lVar3;
  }
  func_0x000107c60e78();
  FUN_100554494();
  if (lVar3 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 100688f2c; end: 100688f73;  */

void FUN_100688f2c(long param_1)

{
  FUN_100554494();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100688f74; end: 10068902f;  */

/* WARNING: Possible PIC construction at 0x000100689098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010068909c) */
/* WARNING: Removing unreachable block (ram,0x0001006890a4) */
/* WARNING: Removing unreachable block (ram,0x0001006890d4) */
/* WARNING: Removing unreachable block (ram,0x0001006890c0) */
/* WARNING: Removing unreachable block (ram,0x0001006890dc) */
/* WARNING: Removing unreachable block (ram,0x000100689178) */
/* WARNING: Removing unreachable block (ram,0x0001006890ec) */
/* WARNING: Removing unreachable block (ram,0x000100689180) */
/* WARNING: Removing unreachable block (ram,0x000100689124) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100688f74(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long alStack_80 [4];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  func_0x000107c61174(param_2);
  if ((bRam0000000113817cc8 & 1) == 0) {
    iVar1 = 0x13817cc8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_after_f");
      pcRam0000000113817cc0 = pcVar3;
      func_0x000107c60e4c(0x113817cc8);
    }
  }
  puVar2 = (undefined8 *)0x10;
  func_0x000107c610a0();
  if (puVar2 == (undefined8 *)0x0) {
    func_0x000107c60e0c();
    func_0x000104bd46a0();
    pcStack_38 = FUN_100689030;
    uStack_60 = param_3;
    uStack_58 = param_4;
    uStack_50 = param_1;
    lStack_48 = param_2;
    puStack_40 = &stack0xfffffffffffffff0;
    FUN_100083b20(alStack_80,param_1);
    param_2 = alStack_80[0];
    func_0x000107c4ddf8();
    func_0x000107c61180();
    func_0x000107c615e8(alStack_80[0]);
    func_0x000107c61434(*(undefined8 *)(param_2 + _DAT_1130826e0));
  }
  else {
    *puVar2 = param_3;
    puVar2[1] = param_4;
    (*pcRam0000000113817cc0)(param_1,param_2,puVar2,FUN_10028db1c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100689030; end: 100689037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100689030(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf8();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_1130826e0);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ef6ef0;
    uVar5 = 0;
    FUN_1000285a8(0x112ef6ef0);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1006890dc;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1006890dc:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ef6ef0;
    FUN_1000285a8(0x112ef6ef0,&UNK_10db25bb8);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      FUN_1005c6da8(0);
      func_0x000107c610f8();
      func_0x0001006c8900(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000003a,0x800000010f142900);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006891a0);
  (*pcVar1)();
}



/* Entry: 100689038; end: 10068919f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100689038(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf8();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_1130826e0);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ef6ef0;
    uVar5 = 0;
    FUN_1000285a8(0x112ef6ef0);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1006890dc;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1006890dc:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ef6ef0;
    FUN_1000285a8(0x112ef6ef0,&UNK_10db25bb8);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      FUN_1005c6da8(0);
      func_0x000107c610f8();
      func_0x0001006c8900(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000003a,0x800000010f142900);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006891a0);
  (*pcVar1)();
}



/* Entry: 1006891a0; end: 1006892e3;  */

void FUN_1006891a0(undefined8 *param_1)

{
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
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  func_0x000100689d78();
  func_0x000107c610f8();
  FUN_100689d98(uStack_68,uStack_70,uStack_78,uStack_80,uStack_88,uStack_90,uStack_98,uStack_a0,
                uStack_a8,uStack_b0);
  *param_1 = uStack_68;
  return;
}



/* Entry: 1006892e4; end: 100689317;  */

void FUN_1006892e4(void)

{
  long unaff_x20;
  
  FUN_1006891a0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 100689318; end: 100689323;  */

void FUN_100689318(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  uVar3 = uVar2;
  func_0x0001000ad7c4();
  FUN_10023bc48(0);
  func_0x000107c610f8();
  FUN_1006893a0(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  return;
}



/* Entry: 100689324; end: 10068939f;  */

void FUN_100689324(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001000ad7c4();
  uVar1 = param_2;
  func_0x0001000ad7c4();
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  FUN_10023bc48(0);
  func_0x000107c610f8();
  FUN_1006893a0(param_2,uVar1,uVar2);
  *param_1 = param_2;
  return;
}



/* Entry: 1006893a0; end: 100689413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006893a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113016c08) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113016c10) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113016c18) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100689414; end: 100689447;  */

void FUN_100689414(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100689448; end: 10068944f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100689448(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10023bcb4();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113074ed8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100689450; end: 1006894bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100689450(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10023bcb4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113074ed8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1006894bc; end: 100689713;  */

/* WARNING: Possible PIC construction at 0x000100689634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100689644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100689654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100689664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100689674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100689684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100689694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006896a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006896b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006896c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006896d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006896e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006896d8) */
/* WARNING: Removing unreachable block (ram,0x0001006896c8) */
/* WARNING: Removing unreachable block (ram,0x0001006896b8) */
/* WARNING: Removing unreachable block (ram,0x0001006896a8) */
/* WARNING: Removing unreachable block (ram,0x000100689698) */
/* WARNING: Removing unreachable block (ram,0x000100689688) */
/* WARNING: Removing unreachable block (ram,0x000100689678) */
/* WARNING: Removing unreachable block (ram,0x000100689668) */
/* WARNING: Removing unreachable block (ram,0x000100689658) */
/* WARNING: Removing unreachable block (ram,0x000100689648) */
/* WARNING: Removing unreachable block (ram,0x000100689638) */
/* WARNING: Removing unreachable block (ram,0x0001006896e8) */

void FUN_1006894bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1105a2718;
  func_0x000107c613fc(&UNK_1105a2718,0xd8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  uVar2 = 0x112ef6ed8;
  FUN_1000285a8(0x112ef6ed8,&UNK_10db25ba0);
  func_0x000107c613fc();
  pcVar3 = FUN_100692798;
  FUN_1000841f8(FUN_100692798,puVar1,uVar2);
  FUN_100084214(&UNK_10db25b70,0x28,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100689714; end: 100689717;  */

void FUN_100689714(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100689718; end: 10068976b;  */

void FUN_100689718(void)

{
  long unaff_x20;
  
  FUN_1006894bc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0));
  return;
}



/* Entry: 10068976c; end: 10068976f;  */

void FUN_10068976c(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100689770; end: 100689853;  */

void FUN_100689770(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100689854; end: 10068985b;  */

void FUN_100689854(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = 0x112dbeec0;
  FUN_1000285a8(0x112dbeec0,&UNK_10db88e60);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  FUN_10017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10068985c; end: 1006898e7;  */

void FUN_10068985c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = 0x112dbeec0;
  FUN_1000285a8(0x112dbeec0,&UNK_10db88e60);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  FUN_10017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1006898e8; end: 1006898ef;  */

void FUN_1006898e8(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1006898f0; end: 10068992f;  */

void FUN_1006898f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 100689930; end: 100689993;  */

void FUN_100689930(void)

{
  long unaff_x20;
  undefined8 *in_stack_00000020;
  
                    /* WARNING: Could not recover jumptable at 0x00010068993c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_00000020)(unaff_x20 + 8);
  return;
}



/* Entry: 100689994; end: 1006899b7;  */

undefined8 FUN_100689994(undefined8 param_1)

{
  func_0x00010068995c();
  return param_1;
}



/* Entry: 1006899b8; end: 1006899d7;  */

void FUN_1006899b8(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_100688f2c();
  }
  return;
}



/* Entry: 1006899d8; end: 100689a27;  */

void FUN_1006899d8(void)

{
  return;
}



/* Entry: 100689a28; end: 100689bbf;  */

void FUN_100689a28(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  code *extraout_x8_03;
  long unaff_x19;
  long lVar4;
  long lStack_198;
  long alStack_190 [12];
  long lStack_130;
  long lStack_128;
  undefined1 auStack_120 [112];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_58;
  
  func_0x000100689a14();
  plVar1 = alStack_190;
  lStack_198 = param_1;
  uStack_58 = extraout_x8;
  FUN_10067b954();
  FUN_10060f340();
  if ((int)plVar1 != 0) {
    func_0x000107c3573c();
    (*extraout_x8_00)();
    if (((ulong)plVar1 & 1) == 0) {
      func_0x000107c2c654(&lStack_130,*(undefined8 *)(unaff_x19 + 8),
                          *(undefined8 *)(unaff_x19 + 0x10));
      func_0x000107c2c658(auStack_120,&lStack_198);
      func_0x000107c35740();
      func_0x000107c35724();
      puStack_88 = &UNK_10b2d88c0;
      ppuStack_80 = &PTR_DAT_110cd26f0;
      plVar1 = (long *)0x78;
      func_0x000107c60e20();
      plVar1[1] = lStack_128;
      *plVar1 = lStack_130;
      lStack_130 = 0;
      lStack_128 = 0;
      func_0x000107c2c658(plVar1 + 2,auStack_120);
      func_0x000107c3574c();
      *(undefined8 *)(lStack_90 + 0x18) = extraout_x8_02;
      *(undefined **)(lStack_90 + 0x20) = &UNK_10b2d88c0;
      func_0x000107c357c0();
      func_0x000107c2c650();
      func_0x000107c3572c();
      func_0x000107c2c65c(&lStack_130);
      lStack_128 = lStack_90;
      uStack_b0 = 0;
      uStack_a8 = 0;
      lStack_130 = (long)plVar1;
      func_0x00010067cdbc(*(undefined8 *)(unaff_x19 + 0xe0));
      plVar1 = &lStack_130;
      (*extraout_x8_03)();
      FUN_100576684(&lStack_130);
      func_0x000107c3575c();
      goto LAB_100689b24;
    }
  }
  func_0x00010067cdbc(*(undefined8 *)(lStack_198 + 0x28));
  plVar1 = alStack_190;
  (*extraout_x8_01)();
LAB_100689b24:
  FUN_1005ae430();
  func_0x00010068e834(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_100576684(&lStack_130);
  func_0x000107c3575c();
  plVar2 = alStack_190;
  FUN_1005ae430();
  func_0x000107c35748();
  plVar3 = plVar2;
  func_0x000107c6110c();
  lVar4 = plVar2[3];
  FUN_1005ad2e0(plVar1);
  func_0x000107c61180();
  func_0x000107c4dcec(lVar4);
  func_0x00010068e820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(plVar3);
  return;
}



/* Entry: 100689bc0; end: 100689c1f;  */

void FUN_100689bc0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_1005ad2e0(param_2);
  func_0x000107c61180();
  func_0x000107c4dcec(uVar2);
  func_0x00010068e820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 100689c20; end: 100689c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100689c20(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1005c5468();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef46e8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100689c28; end: 100689c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100689c28(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1005c5468();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ef46e8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100689c94; end: 100689c9b;  */

/* WARNING: Possible PIC construction at 0x000100689d2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100689d30) */

void FUN_100689c94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_11058a2c0;
  func_0x000107c613fc(&UNK_11058a2c0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112ee3938;
  FUN_1000285a8(0x112ee3938,&UNK_10db0ea00);
  func_0x000107c613fc();
  puVar4 = &UNK_102a37cb0;
  FUN_1000841f8(&UNK_102a37cb0,puVar2,uVar3);
  FUN_100084214(&UNK_10db0e9c0,0x39,2);
  *param_1 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100689c9c; end: 100689d43;  */

/* WARNING: Possible PIC construction at 0x000100689d2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100689d30) */

void FUN_100689c9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_11058a2c0;
  func_0x000107c613fc(&UNK_11058a2c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112ee3938;
  FUN_1000285a8(0x112ee3938,&UNK_10db0ea00);
  func_0x000107c613fc();
  puVar3 = &UNK_102a37cb0;
  FUN_1000841f8(&UNK_102a37cb0,puVar1,uVar2);
  FUN_100084214(&UNK_10db0e9c0,0x39,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100689d44; end: 100689d4b;  */

void FUN_100689d44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100689d4c; end: 100689d97;  */

void FUN_100689d4c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100689d98; end: 10068a233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100689d98(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4,long param_5,
             long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  long lVar18;
  long unaff_x20;
  long lVar19;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar19 = _DAT_112ef40d8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  *(undefined8 *)(unaff_x20 + lVar19) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef40e0) = param_1;
  *(undefined8 **)(unaff_x20 + _DAT_112ef40e8) = param_2;
  lVar19 = *(long *)(param_6 + _DAT_113016c10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar19 != 0) {
    lVar4 = *(long *)(param_5 + _DAT_113076478);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      puVar5 = param_2;
      FUN_10068a46c(param_2,param_1,param_4);
      puVar6 = param_2;
      FUN_10068b2c4(param_2,param_1);
      puVar7 = puVar6;
      FUN_1004575f0();
      puVar8 = puVar7;
      FUN_10068b5b8();
      uVar3 = *puVar8;
      uVar17 = puVar8[1];
      func_0x000107c61434(uVar17);
      func_0x000107c5fadc(uVar3,uVar17);
      func_0x000107c6142c(uVar17);
      lVar9 = lVar19;
      func_0x000107c412b4();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(uVar3);
      lVar10 = lVar4;
      func_0x000107c5df60();
      func_0x000107c61180();
      lVar11 = lVar9;
      func_0x000107c615f0(lVar9);
      FUN_1004575f0();
      func_0x000107c61174();
      func_0x000107c61174();
      uVar17 = 1;
      lVar12 = lVar10;
      lVar18 = lVar9;
      FUN_1006912cc();
      func_0x000107c61170(lVar10);
      func_0x000107c615e8(lVar9);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_9);
      *(long *)(unaff_x20 + _DAT_112ef40c8) = lVar12;
      *(undefined8 *)(unaff_x20 + _DAT_112ef40f0) = param_8;
      puVar7 = (undefined8 *)(unaff_x20 + _DAT_112ef40d0);
      *puVar7 = uVar17;
      puVar7[1] = lVar18;
      func_0x000107c61174(lVar12);
      func_0x000107c61174(param_8);
      func_0x000107c615f0(uVar17);
      lVar10 = lVar9;
      func_0x000107c5ba38();
      func_0x000107c61180();
      *(long *)(unaff_x20 + _DAT_112ef40f8) = lVar10;
      func_0x000107c42c1c(param_8);
      puVar13 = &stack0xffffffffffffff88;
      func_0x000107c61154(puVar13,PTR_s_init_1125d9248);
      uVar3 = *(undefined8 *)(param_4 + _DAT_113074f68);
      puVar14 = &UNK_11059e828;
      func_0x000107c613fc(&UNK_11059e828,0x18,7);
      func_0x000107c61614(puVar14 + 0x10,puVar13);
      puVar15 = &UNK_11059e850;
      func_0x000107c613fc(&UNK_11059e850,0x30,7);
      *(undefined **)(puVar15 + 0x10) = puVar14;
      *(long *)(puVar15 + 0x18) = lVar9;
      *(undefined8 **)(puVar15 + 0x20) = puVar6;
      *(long *)(puVar15 + 0x28) = lVar2;
      pcStack_88 = FUN_1006c6f04;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_1006c6ebc;
      puStack_90 = &UNK_11059e868;
      ppuVar16 = &puStack_a8;
      puStack_80 = puVar15;
      func_0x000107c60bc4(ppuVar16);
      puVar14 = puStack_80;
      func_0x000107c615f0(lVar9);
      func_0x000107c61174(puVar13);
      func_0x000107c61174(uVar3);
      func_0x000107c6157c(puVar6);
      func_0x000107c61574(puVar14);
      func_0x000107c4db94(uVar3);
      func_0x000107c60bd0(ppuVar16);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_10);
      func_0x000107c615e8(lVar19);
      func_0x000107c615e8(lVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar6);
      func_0x000107c615e8(lVar9);
      func_0x000107c61170(lVar12);
      func_0x000107c615e8(uVar17);
      func_0x000107c61170(uVar3);
      return puVar13;
    }
    func_0x000107c615e8(lVar19);
  }
  func_0x0001048d9980(0xd000000000000057,0x800000010f0f15c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10068a234);
  (*pcVar1)();
}



/* Entry: 10068a234; end: 10068a23b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10068a234(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  FUN_100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(lStack_48 + _DAT_113074f68);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_48);
  FUN_100083b20(&lStack_50);
  uVar2 = *(undefined8 *)(lStack_50 + _DAT_113074f90);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_50);
  FUN_100083b20(&uStack_58);
  uVar3 = uStack_58;
  func_0x000107c40114(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  puVar4 = PTR_PTR_1126a76e0;
  func_0x000107c610f8();
  func_0x000107c45bd8();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 10068a23c; end: 10068a337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10068a23c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  FUN_100083b20(&lStack_48);
  uVar1 = *(undefined8 *)(lStack_48 + _DAT_113074f68);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_48);
  FUN_100083b20(&lStack_50);
  uVar2 = *(undefined8 *)(lStack_50 + _DAT_113074f90);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_50);
  FUN_100083b20(&uStack_58);
  uVar3 = uStack_58;
  func_0x000107c40114(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  puVar4 = PTR_PTR_1126a76e0;
  func_0x000107c610f8();
  func_0x000107c45bd8();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 10068a338; end: 10068a33f; -[SCAudioSessionServices configurationFactory] */

undefined8 FUN_10068a338(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10068a340; end: 10068a40b; -[SCCameraLegacyDataSourceFactoryImpl initWithCameraHardwareResource:captureDeviceManager:configurationFactory:] */

undefined1 *
FUN_10068a340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126e7cb8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10068a40c; end: 10068a437;  */

void FUN_10068a40c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10068a438; end: 10068a46b;  */

void FUN_10068a438(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10068a46c; end: 10068a657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10068a46c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = 0x112d3b3f8;
  FUN_1000285a8(0x112d3b3f8,&UNK_10d904aa0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_113082480);
  func_0x0001000b637c(uVar1);
  uVar2 = param_3;
  FUN_10068a684();
  puVar3 = &UNK_11059e930;
  func_0x000107c613fc(&UNK_11059e930,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  uVar4 = 0;
  FUN_1005f57cc(0);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(uVar2);
  pcVar5 = FUN_100854b64;
  FUN_10068b194(FUN_100854b64,puVar3,uVar4);
  func_0x000107c61574(puVar3);
  FUN_1000285a8(0x112d51030,&UNK_10d917a40);
  uVar6 = *(undefined8 *)(param_2 + _DAT_113091b70);
  func_0x000107c41b80(uVar6);
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x0001000b637c();
  func_0x000107c61170(uVar6);
  puVar3 = &UNK_102b2bacc;
  FUN_1000bfde0(&UNK_102b2bacc,0,uVar4);
  FUN_10068b250(0x112d3b3f8,&UNK_10d904aa0,0x112ef4130,&UNK_10db22d88);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 5;
  *(undefined8 *)(lVar8 + 0x10) = 2;
  *(code **)(lVar8 + 0x20) = pcVar5;
  *(undefined **)(lVar8 + 0x28) = puVar3;
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(puVar3);
  lVar9 = lVar8;
  FUN_1000c19f0(lVar8);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(lVar8);
  return lVar9;
}



/* Entry: 10068a658; end: 10068a683;  */

void FUN_10068a658(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10068a684; end: 10068a7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10068a684(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char *pcVar7;
  
  lVar1 = *(long *)(param_1 + _DAT_113074f88);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4c940();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5d58c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        FUN_1000285a8(0x112d5a928,&UNK_10db22d90);
        lVar4 = lVar3;
        func_0x0001000b637c(lVar3);
        uVar5 = 0;
        FUN_1002ed07c(0);
        puVar6 = &UNK_102b2bb00;
        FUN_1000d5158(&UNK_102b2bb00,0,uVar5);
        pcVar7 = "didCapturePhotoObservable(cameraHardwareServices:)";
        func_0x0001000c10c0("didCapturePhotoObservable(cameraHardwareServices:)");
        func_0x000107c61180();
        FUN_100471e0c();
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61574(lVar4);
        func_0x000107c61574(puVar6);
        func_0x000107c615e8(pcVar7);
        return;
      }
      func_0x000107c615e8(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10068a7c0; end: 10068a7f3; -[SCManagedCapturerStateCoordinatorImpl mediaCaptureStateManager] */

void FUN_10068a7c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10068a814();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10068a7f4; end: 10068a813;  */

void FUN_10068a7f4(void)

{
  func_0x000107c61168(&PTR_PTR_1127d7db0);
  return;
}



/* Entry: 10068a814; end: 10068a8c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10068a814(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lStack_50;
  long lStack_48;
  
  lVar2 = _DAT_112da08d8;
  plVar5 = &lStack_50;
  puVar6 = *(undefined1 **)(unaff_x20 + _DAT_112da08d8);
  puVar8 = puVar6;
  if (puVar6 == (undefined1 *)0x1) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112da08c0);
    lVar3 = 0;
    FUN_10068a7f4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112da0860) = uVar7;
    puVar1 = PTR_s_init_1125d9248;
    lStack_50 = lVar4;
    lStack_48 = lVar3;
    func_0x000107c61174(uVar7);
    func_0x000107c61154(&lStack_50,puVar1);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long **)(unaff_x20 + lVar2) = plVar5;
    func_0x000107c61174();
    FUN_10011ecd0(uVar7);
    puVar8 = (undefined1 *)plVar5;
  }
  func_0x00010011ece0(puVar6);
  return puVar8;
}



/* Entry: 10068a8c8; end: 10068adef; -[SCHTTPRequestCallback onRequestStarted:] */

/* WARNING: Possible PIC construction at 0x00010068a90c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068a954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068a9b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068aa14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068aa60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068aac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068ab40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068ab50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068abe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068abf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068ac08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068ac40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068ac84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068ad20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068ad30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068ad40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068ad50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068ada0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068adb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068adc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010068adb4) */
/* WARNING: Removing unreachable block (ram,0x00010068ada4) */
/* WARNING: Removing unreachable block (ram,0x00010068ad54) */
/* WARNING: Removing unreachable block (ram,0x00010068ad44) */
/* WARNING: Removing unreachable block (ram,0x00010068ad34) */
/* WARNING: Removing unreachable block (ram,0x00010068ad24) */
/* WARNING: Removing unreachable block (ram,0x00010068ac88) */
/* WARNING: Removing unreachable block (ram,0x00010068ac44) */
/* WARNING: Removing unreachable block (ram,0x00010068ac0c) */
/* WARNING: Removing unreachable block (ram,0x00010068abfc) */
/* WARNING: Removing unreachable block (ram,0x00010068abec) */
/* WARNING: Removing unreachable block (ram,0x00010068ab54) */
/* WARNING: Removing unreachable block (ram,0x00010068ab44) */
/* WARNING: Removing unreachable block (ram,0x00010068aac4) */
/* WARNING: Removing unreachable block (ram,0x00010068aa64) */
/* WARNING: Removing unreachable block (ram,0x00010068aa18) */
/* WARNING: Removing unreachable block (ram,0x00010068a9bc) */
/* WARNING: Removing unreachable block (ram,0x00010068a958) */
/* WARNING: Removing unreachable block (ram,0x00010068aacc) */
/* WARNING: Removing unreachable block (ram,0x00010068a960) */
/* WARNING: Removing unreachable block (ram,0x00010068a910) */
/* WARNING: Removing unreachable block (ram,0x00010068adc4) */

void FUN_10068a8c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10068adf0; end: 10068ae27; -[SCRequestTask taskWillRun] */

void FUN_10068adf0(undefined8 param_1)

{
  func_0x000107c4bfcc();
  func_0x000107c61180();
  func_0x000107c5c798();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10068ae28; end: 10068ae7b; -[SCRequestTaskLogger taskWillRun:] */

void FUN_10068ae28(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c6071c();
  *(double *)(param_2 + 0x10) = param_1;
  func_0x000107c5d664(param_4,param_3,(long)((param_1 - *(double *)(param_2 + 8)) * 1000.0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10068ae7c; end: 10068ae9b; -[SCManagedCapturerMediaCaptureStateManagerImpl updateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10068ae7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(*(long *)(param_1 + _DAT_112da0860) + _DAT_112da0950));
  return;
}



/* Entry: 10068ae9c; end: 10068aebb;  */

void FUN_10068ae9c(void)

{
  func_0x000107c61168(&PTR_PTR_1129ac880);
  return;
}



/* Entry: 10068aebc; end: 10068aec3; -[SCRequestTask updateTaskQueuingLatency:] */

void FUN_10068aebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e6870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setQueuingLatency__112657440);
  return;
}



/* Entry: 10068aec4; end: 10068aecb; -[SCRequest setQueuingLatency:] */

void FUN_10068aec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x140) = param_3;
  return;
}



/* Entry: 10068aecc; end: 10068aed3; -[SCRequestTask numOfRequestAttempts] */

undefined8 FUN_10068aecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10068aed4; end: 10068aedb; -[SCRequestTask setNumOfRequestAttempts:] */

void FUN_10068aed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10068aedc; end: 10068b027; -[SCAPISessionTaskBookkeeper addSCRequestTaskForNNM:] */

void FUN_10068aedc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c50300();
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_10068b028();
  func_0x000107c61170(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x000107c50300(param_3);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5d7e8();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    uVar1 = param_3;
    func_0x000107c5c788(param_3);
    func_0x000107c61180();
    func_0x000107c61144(auStack_48,param_3);
    func_0x000107c6111c(auStack_50,auStack_48);
    func_0x000107c3ad30(param_1);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10068b028; end: 10068b073;  */

uint FUN_10068b028(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dfdb0;
  func_0x000107c61174();
  func_0x000107c61158(puVar1);
  uVar2 = param_1;
  func_0x000107c6115c(param_1,puVar1);
  func_0x000107c61170(param_1);
  return (uint)uVar2 & 1;
}



/* Entry: 10068b074; end: 10068b07b; -[SCRequestTask taskId] */

undefined8 FUN_10068b074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10068b07c; end: 10068b187; -[SCAPISessionTaskBookkeeper _addTask:key:session:cancelTask:] */

void FUN_10068b07c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10068badc;
  puStack_70 = &UNK_110852488;
  uStack_68 = param_3;
  lStack_60 = param_1;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_88);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10068b188; end: 10068b193;  */

void FUN_10068b188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e8209f4);
  return;
}



/* Entry: 10068b194; end: 10068b207;  */

long * FUN_10068b194(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_10068b188(0,*(undefined8 *)(*unaff_x20 + 0x50));
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  FUN_1000c0ea8(lVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  return unaff_x20;
}



/* Entry: 10068b208; end: 10068b20b;  */

void FUN_10068b208(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10068b20c; end: 10068b24f;  */

void FUN_10068b20c(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___syycWV_11034f1c0 + 0x40;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0xb8);
  return;
}



/* Entry: 10068b250; end: 10068b2c3;  */

void FUN_10068b250(long param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if ((iVar1 != 0) && (FUN_1000285a8(param_1,param_2), param_1 != 0)) {
    param_3 = (ulong *)0x112d36e60;
    param_4 = (long *)&UNK_10d901170;
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10068b2c4; end: 10068b46f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10068b2c4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  FUN_1000285a8(0x112d3b3f8,&UNK_10d904aa0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_113082480);
  func_0x0001000b637c(uVar1);
  FUN_1000285a8(0x112d51030,&UNK_10d917a40);
  uVar2 = *(undefined8 *)(param_2 + _DAT_113091b70);
  func_0x000107c41b80(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x0001000b637c();
  func_0x000107c61170(uVar2);
  uVar2 = 0;
  FUN_1002ed07c(0);
  pcVar4 = FUN_100854868;
  FUN_1000d5158(FUN_100854868,0,uVar2);
  puVar5 = &UNK_102b2b9f8;
  FUN_1000bfde0(&UNK_102b2b9f8,0,uVar2);
  lVar6 = 0x112d53860;
  FUN_1000285a8(0x112d53860,&UNK_10d92b600);
  FUN_10068b250(0x112d53860,&UNK_10d92b600,0x112d64e80,&UNK_10d929f90);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 5;
  *(undefined8 *)(lVar6 + 0x10) = 2;
  *(code **)(lVar6 + 0x20) = pcVar4;
  *(undefined **)(lVar6 + 0x28) = puVar5;
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  lVar7 = lVar6;
  FUN_1000c19f0(lVar6);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(lVar6);
  return lVar7;
}



/* Entry: 10068b470; end: 10068b5b7; +[SCNetworkRadioStatusEstimator networkActivityIdentifierForRequest:trackingInfo:] */

void FUN_10068b470(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  ppuVar1 = param_3;
  func_0x000107c5dc20(param_3,param_2,&PTR____CFConstantStringClassReference_110f9c858);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c4a0ec(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar1);
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000107c61174(ppuVar1);
    ppuVar3 = ppuVar1;
  }
  else {
    ppuVar3 = param_4;
    func_0x000107c50374();
    func_0x000107c61180();
    func_0x000107c61170();
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar3 = param_4;
      func_0x000107c50374();
      func_0x000107c61180();
    }
  }
  ppuVar4 = param_3;
  func_0x000107c3abfc();
  func_0x000107c61180();
  ppuVar5 = ppuVar4;
  func_0x000107c4e430();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc4098);
  func_0x000107c61180();
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(ppuVar1);
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10068b5b8; end: 10068b5c3;  */

undefined * FUN_10068b5b8(void)

{
  return &UNK_10dcf53f0;
}


