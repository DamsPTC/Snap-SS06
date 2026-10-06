/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1dbccc; end: 10b1dbd9b;  */

void FUN_10b1dbccc(long param_1,undefined8 *param_2)

{
  undefined4 extraout_w10;
  undefined1 extraout_w11;
  undefined8 uStack_58;
  uint uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  uStack_58 = *param_2;
  uStack_50 = uStack_50 & 0xffffff00;
  uStack_18 = 0;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    func_0x00010b1ed7e8(&uStack_58);
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  else {
    uStack_50 = *(uint *)(param_2 + 1);
    uStack_40 = param_2[3];
    uStack_48 = param_2[2];
    uStack_38 = param_2[4];
    param_2[2] = 0;
    param_2[3] = 0;
    uStack_28 = param_2[6];
    uStack_30 = param_2[5];
    uStack_20 = param_2[7];
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    func_0x00010b1ed444();
    *(undefined4 *)(param_1 + 8) = extraout_w10;
    *(undefined8 *)(param_1 + 0x20) = uStack_38;
    *(undefined8 *)(param_1 + 0x18) = uStack_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    uStack_48 = 0;
    uStack_40 = 0;
    *(undefined8 *)(param_1 + 0x38) = uStack_20;
    *(undefined8 *)(param_1 + 0x30) = uStack_28;
    *(undefined8 *)(param_1 + 0x28) = uStack_30;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    *(undefined1 *)(param_1 + 0x40) = extraout_w11;
  }
  func_0x00010b1ebd28();
  return;
}



/* Entry: 10b1dbd9c; end: 10b1dbdc7;  */

void FUN_10b1dbd9c(void)

{
  func_0x00010b1ecc48();
  func_0x000107c27b9c();
  func_0x00010b1eb6f8();
  func_0x000107c27b9c();
  return;
}



/* Entry: 10b1dbdc8; end: 10b1dbdeb;  */

void FUN_10b1dbdc8(void)

{
  func_0x00010b1ecc74();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b1eb938();
  return;
}



/* Entry: 10b1dbdec; end: 10b1dbdf7;  */

void FUN_10b1dbdec(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_68 [56];
  
  func_0x00010b1eafa8();
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ed23c();
    FUN_10b1dbe94();
    func_0x00010b1eb918();
    FUN_10b1dbe58();
    FUN_10b1dbdc8(auStack_68);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x40) == '\x01') {
    FUN_10b1dbdc8();
    *(undefined1 *)(lVar1 + 0x38) = 0;
  }
  return;
}



/* Entry: 10b1dbdf8; end: 10b1dbe57;  */

void FUN_10b1dbdf8(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_58 [56];
  
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ed23c();
    FUN_10b1dbe94();
    func_0x00010b1eb918();
    FUN_10b1dbe58();
    FUN_10b1dbdc8(auStack_58);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x40) == '\x01') {
    FUN_10b1dbdc8();
    *(undefined1 *)(lVar1 + 0x38) = 0;
  }
  return;
}



/* Entry: 10b1dbe58; end: 10b1dbe93;  */

long FUN_10b1dbe58(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10b1dbd9c(param_1);
  }
  else {
    func_0x00010b1ebdd4();
    func_0x00010b1ecc24();
  }
  return param_1;
}



/* Entry: 10b1dbe94; end: 10b1dbedf;  */

void FUN_10b1dbe94(undefined4 param_1)

{
  undefined4 *unaff_x19;
  
  func_0x00010b1eb720();
  func_0x00010b1ebb88();
  *unaff_x19 = param_1;
  func_0x00010b1eb940(unaff_x19 + 2);
  func_0x000107c313dc();
  func_0x00010b1ebc20(unaff_x19 + 8);
  func_0x000107c313dc();
  return;
}



/* Entry: 10b1dbee0; end: 10b1dbf07;  */

void FUN_10b1dbee0(void)

{
  uint extraout_w8;
  
  func_0x00010b1eb8fc();
  if ((extraout_w8 & 1) == 0) {
    FUN_10b1dbf08();
  }
  return;
}



/* Entry: 10b1dbf08; end: 10b1dbf4b;  */

void FUN_10b1dbf08(long param_1)

{
  long unaff_x21;
  
  func_0x00010b1ebf60();
  if (unaff_x21 != 0) {
    func_0x00010b1ec018();
    while (param_1 != unaff_x21) {
      param_1 = param_1 + -0x38;
      FUN_10b1dbdc8();
    }
    func_0x00010b1eb23c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1dbf4c; end: 10b1dbf8b;  */

void FUN_10b1dbf4c(long param_1)

{
  undefined1 in_ZR;
  
  func_0x00010b1eada8();
  *(undefined1 *)(param_1 + 0x40) = 0;
  func_0x00010b1ecd0c();
  if ((bool)in_ZR) {
    func_0x00010b1ebec8();
    FUN_10b1dbf8c();
    func_0x00010b1ee514();
  }
  return;
}



/* Entry: 10b1dbf8c; end: 10b1dbfc3;  */

void FUN_10b1dbf8c(void)

{
  func_0x00010b1ecc48();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x00010b1eb6f8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  return;
}



/* Entry: 10b1dbfc4; end: 10b1dbfe3;  */

void FUN_10b1dbfc4(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10b1dbdc8();
  }
  return;
}



/* Entry: 10b1dbfe4; end: 10b1dc007;  */

void FUN_10b1dbfe4(void)

{
  func_0x00010b1eb198();
  FUN_10b1dbf08();
  return;
}



/* Entry: 10b1dc008; end: 10b1dc05f;  */

long FUN_10b1dc008(long param_1)

{
  long lVar1;
  undefined1 auStack_70 [64];
  undefined8 uStack_30;
  
  uStack_30 = 0;
  lVar1 = param_1;
  func_0x00010b1eb8c0();
  if (*(char *)(lVar1 + 0x48) != '\0') {
    func_0x00010b1dbd78(param_1 + 0x10);
  }
  FUN_10b1dbfc4((ulong)auStack_70 | 8);
  func_0x00010b1ebc2c();
  func_0x000107c31408();
  FUN_10b1dbfc4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b1dc060; end: 10b1dc07f;  */

void FUN_10b1dc060(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1dbfe4();
  }
  return;
}



/* Entry: 10b1dc080; end: 10b1dc0b7;  */

void FUN_10b1dc080(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3c18)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1dc0b8; end: 10b1dc0c3;  */

void FUN_10b1dc0b8(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b1dbfe4();
  }
  return;
}



/* Entry: 10b1dc0c4; end: 10b1dc11f;  */

void FUN_10b1dc0c4(void)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x00010b1ebbb0();
  func_0x00010b1ee5b0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x28,unaff_x21 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x21 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x21 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  return;
}



/* Entry: 10b1dc120; end: 10b1dc147;  */

long FUN_10b1dc120(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  FUN_10b1dc204(param_1 + 0x50);
  func_0x00010b1ec7dc(param_1);
  func_0x00010b1eca60();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b1dc148; end: 10b1dc14b;  */

long FUN_10b1dc148(long param_1)

{
  long lVar1;
  long extraout_x8;
  long *plVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x00010b1ed474(&PTR_FUN_110cc3cb0);
  if (extraout_x8 != 0) {
    func_0x00010b1eb3d4();
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b1dc30c(auStack_50);
    FUN_10b1dc35c(alStack_40,auStack_50);
    FUN_10b1dc1e0(auStack_50);
    FUN_10b1dc1e0(&uStack_60);
    lVar1 = alStack_40[0];
    __ZNSt3__15mutex4lockEv(alStack_40[0] + 0x60);
    __ZNSt13exception_ptraSERKS_(lVar1 + 0xa0,auStack_68);
    plVar2 = *(long **)(lVar1 + 0xa8);
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x60);
    if (plVar2 == (long *)0x0) {
      __ZNSt3__118condition_variable10notify_allEv(lVar1 + 0x30);
    }
    else {
      func_0x00010b1edac4(*(undefined8 *)(*plVar2 + 0x10));
      func_0x00010b1eb140();
    }
    func_0x00010b1ed0d8();
    func_0x00010b1ec73c();
    func_0x00010b1ec5dc();
    func_0x00010b1ede74();
  }
  FUN_10b1dc1e0(param_1 + 0x18);
  FUN_10b1dc1e0();
  return param_1;
}



/* Entry: 10b1dc14c; end: 10b1dc15f;  */

void FUN_10b1dc14c(void)

{
  FUN_10b1dc204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1dc160; end: 10b1dc163;  */

long FUN_10b1dc160(long param_1)

{
  long lVar1;
  long extraout_x8;
  long *plVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x00010b1ed474(&PTR_FUN_110cc3cb0);
  if (extraout_x8 != 0) {
    func_0x00010b1eb3d4();
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b1dc30c(auStack_50);
    FUN_10b1dc35c(alStack_40,auStack_50);
    FUN_10b1dc1e0(auStack_50);
    FUN_10b1dc1e0(&uStack_60);
    lVar1 = alStack_40[0];
    __ZNSt3__15mutex4lockEv(alStack_40[0] + 0x60);
    __ZNSt13exception_ptraSERKS_(lVar1 + 0xa0,auStack_68);
    plVar2 = *(long **)(lVar1 + 0xa8);
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x60);
    if (plVar2 == (long *)0x0) {
      __ZNSt3__118condition_variable10notify_allEv(lVar1 + 0x30);
    }
    else {
      func_0x00010b1edac4(*(undefined8 *)(*plVar2 + 0x10));
      func_0x00010b1eb140();
    }
    func_0x00010b1ed0d8();
    func_0x00010b1ec73c();
    func_0x00010b1ec5dc();
    func_0x00010b1ede74();
  }
  FUN_10b1dc1e0(param_1 + 0x18);
  FUN_10b1dc1e0();
  return param_1;
}



/* Entry: 10b1dc164; end: 10b1dc177;  */

void FUN_10b1dc164(void)

{
  FUN_10b1dc204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1dc178; end: 10b1dc17b;  */

void FUN_10b1dc178(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc3cd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1dc17c; end: 10b1dc18f;  */

void FUN_10b1dc17c(void)

{
  FUN_10b1dc1d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1dc190; end: 10b1dc1cf;  */

void FUN_10b1dc190(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (lVar1 != 0) {
    func_0x00010b1eb318();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xb8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variableD1Ev_110346608)(param_1 + 0x48);
  return;
}



/* Entry: 10b1dc1d0; end: 10b1dc1df;  */

void FUN_10b1dc1d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1dc1e0; end: 10b1dc203;  */

void FUN_10b1dc1e0(long param_1)

{
  func_0x00010b1eb954();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1dc204; end: 10b1dc30b;  */

long FUN_10b1dc204(long param_1)

{
  long lVar1;
  long extraout_x8;
  long *plVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x00010b1ed474(&PTR_FUN_110cc3cb0);
  if (extraout_x8 != 0) {
    func_0x00010b1eb3d4();
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b1dc30c(auStack_50);
    FUN_10b1dc35c(alStack_40,auStack_50);
    FUN_10b1dc1e0(auStack_50);
    FUN_10b1dc1e0(&uStack_60);
    lVar1 = alStack_40[0];
    __ZNSt3__15mutex4lockEv(alStack_40[0] + 0x60);
    __ZNSt13exception_ptraSERKS_(lVar1 + 0xa0,auStack_68);
    plVar2 = *(long **)(lVar1 + 0xa8);
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x60);
    if (plVar2 == (long *)0x0) {
      __ZNSt3__118condition_variable10notify_allEv(lVar1 + 0x30);
    }
    else {
      func_0x00010b1edac4(*(undefined8 *)(*plVar2 + 0x10));
      func_0x00010b1eb140();
    }
    func_0x00010b1ed0d8();
    func_0x00010b1ec73c();
    func_0x00010b1ec5dc();
    func_0x00010b1ede74();
  }
  FUN_10b1dc1e0(param_1 + 0x18);
  FUN_10b1dc1e0();
  return param_1;
}



/* Entry: 10b1dc30c; end: 10b1dc35b;  */

void FUN_10b1dc30c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010b1eb5dc();
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  uVar1 = *unaff_x19;
  uVar3 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x19[1] = uVar3;
  *unaff_x19 = uVar2;
  __ZNSt3__18__sp_mut6unlockEv(param_2);
  uVar1 = *unaff_x19;
  unaff_x21[1] = unaff_x19[1];
  *unaff_x21 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10b1dc35c; end: 10b1dc37f;  */

void FUN_10b1dc35c(void)

{
  func_0x00010b1eae08();
  FUN_10b1dc1e0();
  return;
}



/* Entry: 10b1dc380; end: 10b1dc833;  */

void FUN_10b1dc380(long param_1)

{
  undefined4 uVar1;
  bool bVar2;
  ulong ****ppppuVar3;
  ulong ****ppppuVar4;
  ulong ****ppppuVar5;
  ulong ***pppuVar6;
  code *pcVar7;
  undefined1 uVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  ulong extraout_x9;
  char extraout_w10;
  int extraout_w11;
  long extraout_x11;
  ulong *****pppppuVar10;
  long lVar11;
  long lVar12;
  ulong ***pppuVar13;
  ulong *****pppppuVar14;
  ulong *****pppppuVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong ****ppppuStack_210;
  ulong ****ppppuStack_208;
  ulong ****ppppuStack_200;
  ulong ***pppuStack_1f8;
  ulong ***pppuStack_1f0;
  ulong ****ppppuStack_1e0;
  ulong ****ppppuStack_1d8;
  ulong ****ppppuStack_1d0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  ulong auStack_1b8 [2];
  undefined1 uStack_1a8;
  long alStack_1a0 [10];
  long lStack_150;
  long lStack_148;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined8 uStack_12f;
  undefined8 uStack_127;
  undefined8 uStack_11f;
  uint7 uStack_117;
  char cStack_108;
  ulong ****ppppuStack_100;
  ulong ****ppppuStack_f8;
  ulong ****ppppuStack_f0;
  long lStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  char cStack_b8;
  ulong ***pppuStack_b0;
  ulong ****ppppuStack_a8;
  ulong ****ppppuStack_a0;
  ulong ****ppppuStack_98;
  ulong ***pppuStack_90;
  int iStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  uint7 uStack_28;
  
  func_0x00010b1ec024();
  func_0x00010b1eae84();
  lVar11 = *(long *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(lVar11 + 0x40);
  auStack_1b8[0] = auStack_1b8[0] & 0xffffffffffffff00;
  uStack_1a8 = 0;
  func_0x00010bccbc98(alStack_1a0,*(long *)(lVar11 + 0x48) + 0x80,&UNK_10f73824c,0x2e);
  lVar12 = *(long *)(alStack_1a0[0] + 8);
  lStack_148 = *(long *)(alStack_1a0[0] + 0x10);
  lStack_150 = lVar12;
  if (lStack_148 != 0) {
    do {
      func_0x00010b1eaf98();
      lVar12 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10b1fa7e0(auStack_140,*(undefined8 *)(lVar12 + 0x10),lVar11 + 0x10,lVar11 + 0x28,uVar1);
  if (cStack_108 != '\0') {
    uStack_38 = uStack_127;
    uStack_40 = uStack_12f;
    uStack_28 = uStack_117;
    uStack_30 = uStack_11f;
    cStack_108 = '\0';
  }
  uVar17 = (ulong)uStack_28;
  uStack_d7 = (undefined7)uStack_38;
  uStack_d0 = (undefined1)((ulong)uStack_38 >> 0x38);
  uStack_df = (undefined7)uStack_40;
  uStack_d8 = (undefined1)((ulong)uStack_40 >> 0x38);
  uStack_138 = 0;
  uVar16 = uStack_30;
  func_0x00010b1ecdf4();
  uStack_c7 = (undefined7)uVar17;
  uStack_cf = (undefined7)uVar16;
  uStack_c8 = (undefined1)((ulong)uVar16 >> 0x38);
  uStack_c0 = (undefined1)*(undefined8 *)(extraout_x8_00 + 0x1f);
  uStack_bf = (undefined7)((ulong)*(undefined8 *)(extraout_x8_00 + 0x1f) >> 8);
  ppppuStack_210 = (ulong ****)&ppppuStack_100;
  ppppuStack_208 = (ulong ****)((ulong)ppppuStack_208 & 0xffffffffffffff00);
  lStack_e8 = extraout_x11;
  uStack_e0 = extraout_w9;
  cStack_b8 = extraout_w10;
  while (ppppuVar3 = ppppuStack_100, cStack_b8 == '\x01' && lStack_e8 != 0) {
    if (ppppuStack_f8 < ppppuStack_f0) {
      ppppuStack_f8[4] = (ulong ***)CONCAT71(uStack_bf,uStack_c0);
      ppppuStack_f8[1] = (ulong ***)CONCAT71(uStack_d7,uStack_d8);
      *ppppuStack_f8 = (ulong ***)CONCAT71(uStack_df,uStack_e0);
      ppppuStack_f8[3] = (ulong ***)CONCAT71(uStack_c7,uStack_c8);
      ppppuStack_f8[2] = (ulong ***)CONCAT71(uStack_cf,uStack_d0);
      pppppuVar10 = (ulong *****)(ppppuStack_f8 + 5);
    }
    else {
      lVar12 = (long)ppppuStack_f8 - (long)ppppuStack_100;
      if (0x666666666666666 < lVar12 / 0x28 + 1U) {
        FUN_10b1dc834();
        goto LAB_10b1dc740;
      }
      func_0x00010b1ec290();
      uVar17 = extraout_x8_01;
      if (0x333333333333332 < extraout_x9) {
        uVar17 = 0x666666666666666;
      }
      if (0x666666666666666 < uVar17) {
        func_0x000104bd35f4();
        goto LAB_10b1dc740;
      }
      lVar9 = uVar17 * 0x28;
      __Znwm();
      pppppuVar15 = (ulong *****)(lVar9 + uVar17 * 0x28);
      func_0x00010b1ed514(lVar9 + lVar12);
      *(ulong *)(extraout_x8_02 + 0x20) = CONCAT71(uStack_bf,uStack_c0);
      pppppuVar10 = (ulong *****)(extraout_x8_02 + 0x28);
      pppppuVar14 = (ulong *****)(extraout_x8_02 + (lVar12 / -0x28) * 0x28);
      func_0x00010b1ebae0();
      ppppuStack_100 = (ulong ****)pppppuVar14;
      ppppuStack_f0 = (ulong ****)pppppuVar15;
      if ((ulong *****)ppppuVar3 != (ulong *****)0x0) {
        ppppuStack_f8 = (ulong ****)pppppuVar10;
        func_0x00010b1ebc10();
      }
    }
    ppppuStack_f8 = (ulong ****)pppppuVar10;
    FUN_10b1dc840(&lStack_e8);
  }
  pppppuVar10 = (ulong *****)0x1;
  ppppuStack_208 = (ulong ****)CONCAT71(ppppuStack_208._1_7_,1);
  func_0x00010b1dc964(&ppppuStack_210);
  ppppuVar5 = ppppuStack_f0;
  ppppuVar4 = ppppuStack_f8;
  ppppuVar3 = ppppuStack_100;
  ppppuStack_1e0 = ppppuStack_100;
  ppppuStack_1d8 = ppppuStack_f8;
  ppppuStack_1d0 = ppppuStack_f0;
  func_0x00010b1ecdf4();
  uStack_1c8 = 1;
  FUN_10b1dc98c(&ppppuStack_100);
  FUN_10b1dc9a0(auStack_140);
  FUN_10b1b7824(&lStack_150);
  func_0x00010bccbe4c(alStack_1a0);
  func_0x00010bccbdb4(alStack_1a0);
  ppppuStack_a8 = ppppuVar3;
  ppppuStack_a0 = ppppuVar4;
  ppppuStack_98 = ppppuVar5;
  ppppuStack_1d8 = (ulong ****)0x0;
  ppppuStack_1d0 = (ulong ****)0x0;
  ppppuStack_1e0 = (ulong ****)0x0;
  pppuStack_90 = (ulong ***)CONCAT71(pppuStack_90._1_7_,1);
  iStack_50 = 0;
  func_0x00010b1ecefc();
  func_0x00010b1ed710();
  if (iStack_50 == 0) {
    func_0x00010b1ec880();
    ppppuVar3 = ppppuStack_a0;
    uVar8 = (char)pppuStack_90 == '\x01';
    if ((bool)uVar8) {
      ppppuStack_208 = ppppuStack_a0;
      ppppuStack_210 = ppppuStack_a8;
      ppppuStack_200 = ppppuStack_98;
      ppppuStack_a0 = (ulong ****)0x0;
      ppppuStack_98 = (ulong ****)0x0;
      ppppuStack_a8 = (ulong ****)0x0;
      bVar2 = true;
      pppuStack_1f8 = (ulong ***)CONCAT71(pppuStack_1f8._1_7_,1);
      pppppuVar10 = (ulong *****)ppppuVar3;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    uVar8 = iStack_50 == 1;
    if (!(bool)uVar8) goto LAB_10b1dc73c;
    bVar2 = false;
    func_0x00010b1ec880();
  }
  func_0x00010b1ecefc();
  func_0x00010b1edcc4();
  func_0x00010b1ecac8();
  if ((!bVar2) || (uVar8 = (ulong *****)ppppuStack_210 == pppppuVar10, (bool)uVar8)) {
    pppuStack_b0 = (ulong ***)((ulong)pppuStack_b0 & 0xffffffffffffff00);
    pppppuVar10 = &ppppuStack_1e0;
  }
  else {
    ppppuStack_a8 = (ulong ****)ppppuStack_210[1];
    pppuStack_b0 = *ppppuStack_210;
    ppppuStack_98 = (ulong ****)ppppuStack_210[3];
    ppppuStack_a0 = (ulong ****)ppppuStack_210[2];
    pppuStack_90 = ppppuStack_210[4];
    pppppuVar10 = (ulong *****)&pppuStack_b0;
  }
  FUN_10b1dc9d4(&ppppuStack_210);
  uStack_1c0 = 0;
  auStack_1b8[0] = 0;
  func_0x00010b1ee44c();
  ppppuStack_208 = pppppuVar10[1];
  ppppuStack_210 = *pppppuVar10;
  pppuStack_1f8 = (ulong ***)pppppuVar10[3];
  ppppuStack_200 = pppppuVar10[2];
  pppuStack_1f0 = (ulong ***)pppppuVar10[4];
  pppuStack_b0 = (ulong ***)0x0;
  ppppuStack_a8 = (ulong ****)0x0;
  auStack_1b8[1] = 0;
  FUN_10b1dc30c(&ppppuStack_1e0,lVar11 + 0x58,auStack_1b8);
  FUN_10b1dc35c(&pppuStack_b0,&ppppuStack_1e0);
  FUN_10b1dc1e0(&ppppuStack_1e0);
  FUN_10b1dc1e0(auStack_1b8);
  pppuVar6 = pppuStack_b0;
  __ZNSt3__15mutex4lockEv(pppuStack_b0 + 0xc);
  pppuVar6[1] = (ulong **)ppppuStack_208;
  *pppuVar6 = (ulong **)ppppuStack_210;
  pppuVar6[3] = (ulong **)pppuStack_1f8;
  pppuVar6[2] = (ulong **)ppppuStack_200;
  pppuVar6[4] = (ulong **)pppuStack_1f0;
  if (((ulong)pppuVar6[5] & 1) == 0) {
    func_0x00010b1ec94c();
  }
  pppuVar13 = (ulong ***)pppuVar6[0x15];
  pppuVar6[0x15] = (ulong **)0x0;
  __ZNSt3__15mutex6unlockEv(pppuVar6 + 0xc);
  if (pppuVar13 == (ulong ***)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(pppuVar6 + 6);
  }
  else {
    func_0x00010b1ebe1c();
    func_0x00010b1ebbe0();
    func_0x00010b1eb174();
  }
  FUN_10b1dc1e0(&pppuStack_b0);
  func_0x00010b1eadc4();
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1dc73c:
  func_0x00010563ab98();
LAB_10b1dc740:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10b1dc744);
  (*pcVar7)();
}



/* Entry: 10b1dc834; end: 10b1dc83f;  */

void FUN_10b1dc834(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b1eafa8();
  func_0x00010b1eb65c();
  if ((param_1 == 0) || (func_0x000107c3141c(), (int)param_1 == 0)) {
    if (*(char *)(unaff_x19 + 6) == '\x01') {
      *(undefined1 *)(unaff_x19 + 6) = 0;
    }
  }
  else {
    func_0x00010b1dc8b0(&uStack_58,*unaff_x19);
    unaff_x19[2] = uStack_50;
    unaff_x19[1] = uStack_58;
    unaff_x19[4] = uStack_40;
    unaff_x19[3] = uStack_48;
    unaff_x19[5] = uStack_38;
    if ((*(byte *)(unaff_x19 + 6) & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 6) = 1;
    }
  }
  return;
}



/* Entry: 10b1dc840; end: 10b1dc91b;  */

void FUN_10b1dc840(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b1eb65c();
  if ((param_1 == 0) || (func_0x000107c3141c(), (int)param_1 == 0)) {
    if (*(char *)(unaff_x19 + 6) == '\x01') {
      *(undefined1 *)(unaff_x19 + 6) = 0;
    }
  }
  else {
    func_0x00010b1dc8b0(&uStack_48,*unaff_x19);
    unaff_x19[2] = uStack_40;
    unaff_x19[1] = uStack_48;
    unaff_x19[4] = uStack_30;
    unaff_x19[3] = uStack_38;
    unaff_x19[5] = uStack_28;
    if ((*(byte *)(unaff_x19 + 6) & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 6) = 1;
    }
  }
  return;
}



/* Entry: 10b1dc91c; end: 10b1dc933;  */

ulong FUN_10b1dc91c(ulong param_1)

{
  FUN_10b1dc934();
  return param_1 & 0xffffffffff;
}



/* Entry: 10b1dc934; end: 10b1dc98b;  */

void FUN_10b1dc934(int param_1)

{
  func_0x00010b1eb67c();
  if (param_1 != 5) {
    func_0x00010b1ebab8();
    func_0x00010b1ec64c();
  }
  return;
}



/* Entry: 10b1dc98c; end: 10b1dc99f;  */

void FUN_10b1dc98c(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1dc9a0; end: 10b1dc9d3;  */

long FUN_10b1dc9a0(long param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  func_0x00010b1eb490();
  func_0x000107c31408();
  return param_1;
}



/* Entry: 10b1dc9d4; end: 10b1dc9fb;  */

void FUN_10b1dc9d4(void)

{
  undefined1 in_ZR;
  
  func_0x00010b1eb60c();
  if ((bool)in_ZR) {
    FUN_10b1dc98c();
  }
  return;
}



/* Entry: 10b1dc9fc; end: 10b1dca33;  */

void FUN_10b1dc9fc(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3d10)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1dca34; end: 10b1dca3f;  */

void FUN_10b1dca34(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  
  func_0x00010b1eb60c(param_2);
  if ((bool)in_ZR) {
    FUN_10b1dc98c();
  }
  return;
}



/* Entry: 10b1dca40; end: 10b1dca5f;  */

void FUN_10b1dca40(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1dc120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1dca60; end: 10b1dca63;  */

void FUN_10b1dca60(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1dca64; end: 10b1dcaaf;  */

long FUN_10b1dca64(long param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    return param_1 + 0x40;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,param_1 + 0x40);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b1dcaa4);
  (*pcVar1)();
}



/* Entry: 10b1dcab0; end: 10b1dcccb;  */

void FUN_10b1dcab0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong extraout_x8;
  ulong extraout_x9;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 auStack_60 [8];
  undefined1 *puStack_58;
  
  puVar6 = (undefined8 *)0x60;
  __Znwm();
  *puVar6 = FUN_10b1eac34;
  puVar6[1] = FUN_10b1eace0;
  puVar6[10] = param_2;
  FUN_10b124f8c(puVar6 + 2);
  FUN_10b124f40(param_1,puVar6 + 2);
  lVar8 = *param_2;
  __ZNSt3__115recursive_mutex4lockEv(lVar8);
  bVar3 = *(byte *)(*param_2 + 0x70);
  __ZNSt3__115recursive_mutex6unlockEv(lVar8);
  if ((bVar3 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0xb) = 0;
    plVar9 = (long *)puVar6[10];
    lVar8 = *plVar9;
    func_0x00010b1edce4();
    lVar12 = *plVar9;
    if ((*(byte *)(lVar12 + 0x70) & 1) == 0) {
      puVar2 = *(undefined8 **)(lVar12 + 0x80);
      bVar5 = *(undefined8 **)(lVar12 + 0x88) <= puVar2;
      if (bVar5) {
        lVar10 = *(long *)(lVar12 + 0x78);
        lVar11 = (long)puVar2 - lVar10 >> 3;
        if (lVar11 + 1U >> 0x3d != 0) {
          func_0x00010552fc6c();
LAB_10b1dcc6c:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10b1dcc70);
          (*pcVar4)();
        }
        func_0x00010b1eb7c8((long)*(undefined8 **)(lVar12 + 0x88) - lVar10);
        uVar1 = extraout_x9;
        if (bVar5) {
          uVar1 = extraout_x8;
        }
        if (uVar1 == 0) {
          lVar7 = 0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b1dcc6c;
          }
          lVar7 = uVar1 << 3;
          __Znwm();
        }
        puVar2 = (undefined8 *)(lVar7 + ((long)puVar2 - lVar10));
        puVar13 = puVar2 + 1;
        *puVar2 = puVar6;
        func_0x00010b1ebaf0();
        *(undefined8 **)(lVar12 + 0x78) = puVar2 + -lVar11;
        *(undefined8 **)(lVar12 + 0x80) = puVar13;
        *(ulong *)(lVar12 + 0x88) = lVar7 + uVar1 * 8;
        if (lVar10 != 0) {
          func_0x00010b1ebf6c();
        }
      }
      else {
        puVar13 = puVar2 + 1;
        *puVar2 = puVar6;
      }
      *(undefined8 **)(lVar12 + 0x80) = puVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(lVar8);
      return;
    }
    func_0x00010b1ec5c0();
    (*(code *)*puVar6)(puVar6);
  }
  else {
    FUN_10b1dca64(*(undefined8 *)puVar6[10]);
    FUN_10b124fa8(puVar6 + 7);
    func_0x00010b1ed4b4();
    if (*(char *)(puVar6 + 8) == '\x01') {
      puStack_58 = auStack_60;
      func_0x00010b1ede20();
    }
    else {
      func_0x00010b1ecf4c();
      puStack_58 = (undefined1 *)(ulong)bVar3;
      func_0x00010b1ede2c();
      func_0x00010b1eb730();
    }
    func_0x00010b1ede44();
    func_0x00010b1ebc10();
  }
  return;
}



/* Entry: 10b1dcccc; end: 10b1dccd7;  */

void FUN_10b1dcccc(long param_1)

{
  ulong extraout_x8;
  undefined8 *unaff_x19;
  undefined1 auStack_48 [24];
  
  func_0x00010b1eafa8();
  func_0x00010b1eb65c();
  if ((param_1 == 0) || (func_0x000107c3141c(), (int)param_1 == 0)) {
    if (*(char *)(unaff_x19 + 4) == '\x01') {
      *(undefined1 *)(unaff_x19 + 4) = 0;
    }
  }
  else {
    func_0x00010b1dcd2c(auStack_48,*unaff_x19);
    func_0x00010b1ed6a4();
    if ((extraout_x8 & 1) == 0) {
      func_0x00010b1ed80c();
    }
  }
  return;
}



/* Entry: 10b1dccd8; end: 10b1dcd83;  */

void FUN_10b1dccd8(long param_1)

{
  ulong extraout_x8;
  undefined8 *unaff_x19;
  undefined1 auStack_38 [24];
  
  func_0x00010b1eb65c();
  if ((param_1 == 0) || (func_0x000107c3141c(), (int)param_1 == 0)) {
    if (*(char *)(unaff_x19 + 4) == '\x01') {
      *(undefined1 *)(unaff_x19 + 4) = 0;
    }
  }
  else {
    func_0x00010b1dcd2c(auStack_38,*unaff_x19);
    func_0x00010b1ed6a4();
    if ((extraout_x8 & 1) == 0) {
      func_0x00010b1ed80c();
    }
  }
  return;
}



/* Entry: 10b1dcd84; end: 10b1dcd97;  */

void FUN_10b1dcd84(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1dcd98; end: 10b1dcdc7;  */

long FUN_10b1dcd98(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
  func_0x00010b1eb490();
  func_0x000107c31408();
  return param_1;
}



/* Entry: 10b1dcdc8; end: 10b1dcdef;  */

void FUN_10b1dcdc8(void)

{
  undefined1 in_ZR;
  
  func_0x00010b1eb60c();
  if ((bool)in_ZR) {
    FUN_10b1dcd84();
  }
  return;
}



/* Entry: 10b1dcdf0; end: 10b1dce27;  */

void FUN_10b1dcdf0(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3d38)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1dce28; end: 10b1dce33;  */

void FUN_10b1dce28(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  
  func_0x00010b1eb60c(param_2);
  if ((bool)in_ZR) {
    FUN_10b1dcd84();
  }
  return;
}



/* Entry: 10b1dce34; end: 10b1dce3f;  */

void FUN_10b1dce34(long param_1)

{
  ulong extraout_x8;
  undefined8 *unaff_x19;
  undefined1 auStack_50 [32];
  
  func_0x00010b1eafa8();
  func_0x00010b1eb65c();
  if ((param_1 == 0) || (func_0x000107c3141c(), (int)param_1 == 0)) {
    if (*(char *)(unaff_x19 + 5) == '\x01') {
      *(undefined1 *)(unaff_x19 + 5) = 0;
    }
  }
  else {
    func_0x00010b1dce94(auStack_50,*unaff_x19);
    func_0x00010b1ee584();
    if ((extraout_x8 & 1) == 0) {
      func_0x00010b1ec94c();
    }
  }
  return;
}



/* Entry: 10b1dce40; end: 10b1dcf0f;  */

void FUN_10b1dce40(long param_1)

{
  ulong extraout_x8;
  undefined8 *unaff_x19;
  undefined1 auStack_40 [32];
  
  func_0x00010b1eb65c();
  if ((param_1 == 0) || (func_0x000107c3141c(), (int)param_1 == 0)) {
    if (*(char *)(unaff_x19 + 5) == '\x01') {
      *(undefined1 *)(unaff_x19 + 5) = 0;
    }
  }
  else {
    func_0x00010b1dce94(auStack_40,*unaff_x19);
    func_0x00010b1ee584();
    if ((extraout_x8 & 1) == 0) {
      func_0x00010b1ec94c();
    }
  }
  return;
}



/* Entry: 10b1dcf10; end: 10b1dcf23;  */

void FUN_10b1dcf10(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1dcf24; end: 10b1dcf53;  */

long FUN_10b1dcf24(long param_1)

{
  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  func_0x00010b1eb490();
  func_0x000107c31408();
  return param_1;
}



/* Entry: 10b1dcf54; end: 10b1dcf7b;  */

void FUN_10b1dcf54(void)

{
  undefined1 in_ZR;
  
  func_0x00010b1eb60c();
  if ((bool)in_ZR) {
    FUN_10b1dcf10();
  }
  return;
}



/* Entry: 10b1dcf7c; end: 10b1dcfb3;  */

void FUN_10b1dcf7c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3d48)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1dcfb4; end: 10b1dcfbf;  */

void FUN_10b1dcfb4(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  
  func_0x00010b1eb60c(param_2);
  if ((bool)in_ZR) {
    FUN_10b1dcf10();
  }
  return;
}



/* Entry: 10b1dcfc0; end: 10b1dd013;  */

void FUN_10b1dcfc0(void)

{
  ulong uVar1;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar2;
  code *extraout_x8_01;
  code *pcVar3;
  long extraout_x9;
  long extraout_x9_00;
  long lVar4;
  long extraout_x10;
  int extraout_w12;
  
  func_0x00010b1eb388();
  puVar2 = extraout_x8;
  lVar4 = extraout_x9;
  if (extraout_x10 != 0) {
    do {
      func_0x00010b1eb0ac();
      puVar2 = extraout_x8_00;
      lVar4 = extraout_x9_00;
    } while (extraout_w12 != 0);
  }
  pcVar3 = *(code **)*puVar2;
  uVar1 = ((undefined8 *)*puVar2)[1];
  if ((uVar1 & 1) != 0) {
    func_0x00010b1ee478(*(long *)(lVar4 + 0x10) + ((long)uVar1 >> 1));
    pcVar3 = extraout_x8_01;
  }
  (*pcVar3)();
  func_0x00010b1eb728();
  return;
}



/* Entry: 10b1dd014; end: 10b1dd023;  */

void FUN_10b1dd014(void)

{
  return;
}



/* Entry: 10b1dd024; end: 10b1dd073;  */

void FUN_10b1dd024(long param_1)

{
  func_0x00010563ab1c();
  *(undefined4 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 10b1dd074; end: 10b1dd0ab;  */

void FUN_10b1dd074(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3d70)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1dd0ac; end: 10b1dd0b3;  */

void FUN_10b1dd0ac(void)

{
  return;
}



/* Entry: 10b1dd0b4; end: 10b1dd367;  */

long * FUN_10b1dd0b4(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  long *extraout_x10;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong uVar9;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  long *extraout_x12;
  ulong uVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar11;
  ulong unaff_x21;
  ulong uVar12;
  ulong unaff_x24;
  ulong unaff_x25;
  
  func_0x00010b1ed2f4();
  func_0x00010b1ebd60();
  func_0x000107c278c4();
  func_0x00010b1ed2dc();
  if (unaff_x24 != 0) {
    uVar12 = unaff_x24 - 1;
    if ((unaff_x24 & uVar12) == 0) {
      unaff_x25 = uVar12 & unaff_x21;
      in_ZR = 1;
      in_NG = 0;
    }
    else {
      in_NG = (long)(unaff_x21 - unaff_x24) < 0;
      in_ZR = unaff_x21 == unaff_x24;
      unaff_x25 = unaff_x21;
      if (unaff_x24 <= unaff_x21) {
        func_0x00010b1ed1c8();
      }
    }
    plVar11 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    unaff_x20 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*plVar11;
          if (unaff_x20 == (long *)0x0) goto LAB_10b1dd158;
          uVar7 = unaff_x20[1];
          in_NG = (long)(uVar7 - unaff_x21) < 0;
          in_ZR = uVar7 == unaff_x21;
          plVar11 = unaff_x20;
          if (!(bool)in_ZR) break;
          func_0x00010b1ed968();
          if ((param_1 & 1) != 0) goto LAB_10b1dd330;
        }
        if ((unaff_x24 & uVar12) == 0) {
          uVar7 = uVar7 & uVar12;
        }
        else if (unaff_x24 <= uVar7) {
          uVar9 = 0;
          if (unaff_x24 != 0) {
            uVar9 = uVar7 / unaff_x24;
          }
          uVar7 = uVar7 - uVar9 * unaff_x24;
        }
        in_NG = (long)(uVar7 - unaff_x25) < 0;
        in_ZR = uVar7 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_10b1dd158:
  uVar12 = 0x50;
  __Znwm();
  func_0x00010b1ec80c();
  func_0x00010b1ecae0();
  unaff_x20[8] = 0;
  unaff_x20[7] = 0;
  unaff_x20[6] = 0;
  unaff_x20[5] = 0;
  *(undefined4 *)(unaff_x20 + 9) = 0x3f800000;
  func_0x00010b1ebed4();
  func_0x00010b1eb0f0();
  if ((unaff_x24 != 0) && (func_0x00010b1eb5ec(), uVar7 = unaff_x25, !(bool)in_NG))
  goto LAB_10b1dd2e4;
  func_0x00010b1eaff0();
  bVar3 = 2 < unaff_x24;
  bVar5 = unaff_x24 == 3;
  func_0x00010b1eaeec();
  uVar7 = extraout_x8;
  if (!bVar3 || bVar5) {
    uVar7 = extraout_x9;
  }
  if (uVar7 - 1 == 0) {
    uVar7 = 2;
  }
  else if ((uVar7 & uVar7 - 1) != 0) {
    func_0x00010b1edefc();
    uVar7 = uVar12;
  }
  unaff_x24 = unaff_x19[1];
  uVar6 = uVar7 == unaff_x24;
  if (unaff_x24 < uVar7) {
LAB_10b1dd1d4:
    if (uVar7 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1dd358);
      (*pcVar2)();
    }
    __Znwm(uVar7 << 3);
    FUN_10b1dd368();
    uVar12 = 0;
    unaff_x19[1] = uVar7;
    while (uVar6 = uVar7 == uVar12, !(bool)uVar6) {
      func_0x00010b1ebda4();
      uVar12 = extraout_x9_00;
    }
    unaff_x24 = uVar7;
    if (unaff_x19[2] != 0) {
      func_0x00010b1ec568();
      func_0x00010b1ec554();
      lVar8 = extraout_x8_00;
      uVar12 = extraout_x9_01;
      plVar11 = extraout_x10;
      uVar9 = extraout_x11;
      while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
        uVar10 = plVar11[1];
        if ((uVar7 & uVar12) == 0) {
          uVar10 = uVar10 & uVar12;
        }
        else if (uVar7 <= uVar10) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar10 / uVar7;
          }
          uVar10 = uVar10 - uVar1 * uVar7;
        }
        uVar6 = uVar10 == uVar9;
        if (!(bool)uVar6) {
          if (*(long *)(lVar8 + uVar10 * 8) == 0) {
            func_0x00010b1ebf54();
            lVar8 = extraout_x8_02;
            uVar12 = extraout_x9_03;
            plVar11 = extraout_x12;
            uVar9 = extraout_x11_01;
          }
          else {
            func_0x00010b1ead88();
            lVar8 = extraout_x8_01;
            uVar12 = extraout_x9_02;
            plVar11 = extraout_x10_00;
            uVar9 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (uVar7 < unaff_x24) {
    func_0x00010b1eafd8();
    uVar4 = 2 < unaff_x24;
    uVar6 = unaff_x24 == 3;
    if (((bool)uVar4) && (func_0x00010b1ed1a0(), extraout_x8_03 == 0)) {
      func_0x00010b1ead68();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010b1ed524();
    if ((bool)uVar4) {
      unaff_x24 = unaff_x19[1];
    }
    else {
      if (uVar7 != 0) goto LAB_10b1dd1d4;
      func_0x00010b1ed31c();
      FUN_10b1dd368();
      func_0x00010b1ed5e4();
    }
  }
  func_0x00010b1ec098();
  if ((bool)uVar6) {
    in_ZR = 1;
    uVar7 = extraout_x8_04 & unaff_x21;
  }
  else {
    in_ZR = unaff_x21 == unaff_x24;
    uVar7 = unaff_x21;
    if (unaff_x24 <= unaff_x21) {
      func_0x00010b1ed1c8();
      uVar7 = unaff_x25;
    }
  }
LAB_10b1dd2e4:
  if (*(long *)(*unaff_x19 + uVar7 * 8) == 0) {
    func_0x00010b1eb7b8();
    *(long **)(extraout_x8_05 + uVar7 * 8) = unaff_x19 + 2;
    if (*unaff_x20 != 0) {
      func_0x00010b1eb5bc();
      lVar8 = extraout_x8_06;
      if ((bool)in_ZR) {
        uVar12 = extraout_x9_04 & extraout_x10_01;
      }
      else {
        uVar12 = extraout_x9_04;
        if (unaff_x24 <= extraout_x9_04) {
          func_0x00010b1ec08c();
          lVar8 = extraout_x8_07;
          uVar12 = extraout_x9_05;
        }
      }
      *(long **)(lVar8 + uVar12 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010b1eb5cc();
  }
  func_0x00010b1ed6ec();
  FUN_10b1dd380();
LAB_10b1dd330:
  return unaff_x20 + 5;
}



/* Entry: 10b1dd368; end: 10b1dd37f;  */

void FUN_10b1dd368(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1dd380; end: 10b1dd3d3;  */

void FUN_10b1dd380(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010b1eb558();
  if (unaff_x20 != 0) {
    func_0x00010b1ec8c8();
    if ((bool)in_ZR) {
      func_0x00010b1dd3b4(unaff_x20 + 0x10);
    }
    func_0x00010b1eb70c();
  }
  return;
}



/* Entry: 10b1dd3d4; end: 10b1dd42f;  */

void FUN_10b1dd3d4(long param_1,long param_2)

{
  func_0x00010b1eb898();
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    func_0x00010b1ed7e8();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  else {
    func_0x00010b1ebc38();
  }
  func_0x00010b1eb9ac();
  return;
}



/* Entry: 10b1dd430; end: 10b1dd453;  */

void FUN_10b1dd430(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb3a4();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b1dd454; end: 10b1dd45f;  */

void FUN_10b1dd454(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1eafa8();
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ec2d4();
    FUN_10b1dd4fc();
    func_0x00010b1eb714();
    FUN_10b1dd4b8();
    func_0x00010b1eb738();
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x28) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(lVar1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10b1dd460; end: 10b1dd4b7;  */

void FUN_10b1dd460(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ec2d4();
    FUN_10b1dd4fc();
    func_0x00010b1eb714();
    FUN_10b1dd4b8();
    func_0x00010b1eb738();
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x28) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(lVar1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10b1dd4b8; end: 10b1dd4fb;  */

long FUN_10b1dd4b8(long param_1,long param_2)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10b1dd430(param_1);
  }
  else {
    func_0x00010b1eb0d4();
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    func_0x00010b1ed80c();
  }
  return param_1;
}



/* Entry: 10b1dd4fc; end: 10b1dd527;  */

void FUN_10b1dd4fc(undefined4 param_1)

{
  long unaff_x19;
  
  func_0x00010b1eb720();
  func_0x00010b1eb05c();
  func_0x00010b1eb208();
  *(undefined4 *)(unaff_x19 + 0x18) = param_1;
  return;
}



/* Entry: 10b1dd528; end: 10b1dd54f;  */

void FUN_10b1dd528(void)

{
  uint extraout_w8;
  
  func_0x00010b1eb8fc();
  if ((extraout_w8 & 1) == 0) {
    FUN_10b1dd550();
  }
  return;
}



/* Entry: 10b1dd550; end: 10b1dd58f;  */

void FUN_10b1dd550(long param_1)

{
  long unaff_x21;
  
  func_0x00010b1ebf60();
  if (unaff_x21 != 0) {
    func_0x00010b1ec018();
    while (param_1 != unaff_x21) {
      func_0x00010b1edf1c();
    }
    func_0x00010b1eb23c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1dd590; end: 10b1dd5d3;  */

void FUN_10b1dd590(long param_1,long param_2)

{
  func_0x00010b1eada8();
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x00010b1ebec8();
    FUN_10b1dd5d4();
    func_0x00010b1ec94c();
  }
  return;
}



/* Entry: 10b1dd5d4; end: 10b1dd5f3;  */

void FUN_10b1dd5d4(long param_1)

{
  long unaff_x19;
  
  func_0x00010b1ed9c0();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b1dd5f4; end: 10b1dd613;  */

void FUN_10b1dd5f4(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10b1dd614; end: 10b1dd637;  */

void FUN_10b1dd614(void)

{
  func_0x00010b1eb198();
  FUN_10b1dd550();
  return;
}



/* Entry: 10b1dd638; end: 10b1dd687;  */

void FUN_10b1dd638(long param_1)

{
  long unaff_x19;
  ulong unaff_x20;
  
  func_0x00010b1eb538();
  func_0x00010b1eb7a8();
  if (*(char *)(param_1 + 0x30) != '\0') {
    func_0x00010b1dd40c(unaff_x19 + 0x10);
  }
  FUN_10b1dd5f4(unaff_x20 | 8);
  func_0x00010b1ebc2c();
  func_0x000107c31408();
  FUN_10b1dd5f4(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b1dd688; end: 10b1dd6a7;  */

void FUN_10b1dd688(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1dd614();
  }
  return;
}



/* Entry: 10b1dd6a8; end: 10b1dd6df;  */

void FUN_10b1dd6a8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3d98)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1dd6e0; end: 10b1dd6eb;  */

void FUN_10b1dd6e0(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b1dd614();
  }
  return;
}



/* Entry: 10b1dd6ec; end: 10b1dd747;  */

void FUN_10b1dd6ec(long param_1,long param_2)

{
  func_0x00010b1eb898();
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    func_0x00010b1ed7e8();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  else {
    func_0x00010b1ebc38();
  }
  func_0x00010b1eb9b4();
  return;
}



/* Entry: 10b1dd748; end: 10b1dd76b;  */

void FUN_10b1dd748(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb3a4();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b1dd76c; end: 10b1dd777;  */

void FUN_10b1dd76c(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1eafa8();
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ec2d4();
    FUN_10b1dd814();
    func_0x00010b1eb714();
    FUN_10b1dd7d0();
    func_0x00010b1eb738();
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x28) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(lVar1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10b1dd778; end: 10b1dd7cf;  */

void FUN_10b1dd778(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ec2d4();
    FUN_10b1dd814();
    func_0x00010b1eb714();
    FUN_10b1dd7d0();
    func_0x00010b1eb738();
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x28) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(lVar1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10b1dd7d0; end: 10b1dd813;  */

long FUN_10b1dd7d0(long param_1,long param_2)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10b1dd748(param_1);
  }
  else {
    func_0x00010b1eb0d4();
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    func_0x00010b1ed80c();
  }
  return param_1;
}



/* Entry: 10b1dd814; end: 10b1dd83f;  */

void FUN_10b1dd814(undefined4 param_1)

{
  long unaff_x19;
  
  func_0x00010b1eb720();
  func_0x00010b1eb05c();
  func_0x00010b1eb208();
  *(undefined4 *)(unaff_x19 + 0x18) = param_1;
  return;
}



/* Entry: 10b1dd840; end: 10b1dd867;  */

void FUN_10b1dd840(void)

{
  uint extraout_w8;
  
  func_0x00010b1eb8fc();
  if ((extraout_w8 & 1) == 0) {
    FUN_10b1dd868();
  }
  return;
}



/* Entry: 10b1dd868; end: 10b1dd8a7;  */

void FUN_10b1dd868(long param_1)

{
  long unaff_x21;
  
  func_0x00010b1ebf60();
  if (unaff_x21 != 0) {
    func_0x00010b1ec018();
    while (param_1 != unaff_x21) {
      func_0x00010b1edf1c();
    }
    func_0x00010b1eb23c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1dd8a8; end: 10b1dd8eb;  */

void FUN_10b1dd8a8(long param_1,long param_2)

{
  func_0x00010b1eada8();
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x00010b1ebec8();
    FUN_10b1dd8ec();
    func_0x00010b1ec94c();
  }
  return;
}



/* Entry: 10b1dd8ec; end: 10b1dd90b;  */

void FUN_10b1dd8ec(long param_1)

{
  long unaff_x19;
  
  func_0x00010b1ed9c0();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b1dd90c; end: 10b1dd92b;  */

void FUN_10b1dd90c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10b1dd92c; end: 10b1dd94f;  */

void FUN_10b1dd92c(void)

{
  func_0x00010b1eb198();
  FUN_10b1dd868();
  return;
}



/* Entry: 10b1dd950; end: 10b1dd99f;  */

void FUN_10b1dd950(long param_1)

{
  long unaff_x19;
  ulong unaff_x20;
  
  func_0x00010b1eb538();
  func_0x00010b1eb7a8();
  if (*(char *)(param_1 + 0x30) != '\0') {
    func_0x00010b1dd724(unaff_x19 + 0x10);
  }
  FUN_10b1dd90c(unaff_x20 | 8);
  func_0x00010b1ebc2c();
  func_0x000107c31408();
  FUN_10b1dd90c(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b1dd9a0; end: 10b1dd9bf;  */

void FUN_10b1dd9a0(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1dd92c();
  }
  return;
}



/* Entry: 10b1dd9c0; end: 10b1dd9f7;  */

void FUN_10b1dd9c0(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3da8)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1dd9f8; end: 10b1dda03;  */

void FUN_10b1dd9f8(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b1dd92c();
  }
  return;
}



/* Entry: 10b1dda04; end: 10b1dda27;  */

void FUN_10b1dda04(long param_1,undefined8 param_2,undefined4 *param_3)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined4 *)(param_1 + 0x18) = *param_3;
  return;
}


