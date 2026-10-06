/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10194a54c; end: 10194a56b;  */

void FUN_10194a54c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10194a56c; end: 10194a587;  */

void FUN_10194a56c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000101949c34(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),7)
  ;
  return;
}



/* Entry: 10194a588; end: 10194a5c7;  */

void FUN_10194a588(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10194a5c8; end: 10194a603;  */

void FUN_10194a5c8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c614ac(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10194a604; end: 10194a69b;  */

/* WARNING: Possible PIC construction at 0x000101949d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101949d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101949e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101949e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101949e50) */
/* WARNING: Removing unreachable block (ram,0x000101949d90) */
/* WARNING: Removing unreachable block (ram,0x000101949d60) */
/* WARNING: Removing unreachable block (ram,0x000101949db0) */
/* WARNING: Removing unreachable block (ram,0x000101949db4) */
/* WARNING: Removing unreachable block (ram,0x000101949e54) */
/* WARNING: Removing unreachable block (ram,0x000101949e5c) */
/* WARNING: Removing unreachable block (ram,0x000101949df4) */
/* WARNING: Removing unreachable block (ram,0x000101949d6c) */
/* WARNING: Removing unreachable block (ram,0x000101949e74) */

void FUN_10194a604(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570,lVar1,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c490d4();
  if (lVar1 != 0) {
    uVar3 = 0;
    FUN_10194a588(0,0x112dd7968,&PTR_PTR_1126a7e90);
    func_0x000107c5fc48(lVar1,uVar3);
  }
  func_0x000107c610f8(PTR_PTR_1126a7e98);
  func_0x000107c46b10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10194a69c; end: 10194a71b;  */

void FUN_10194a69c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_10194a85c();
  uVar1 = param_2;
  func_0x000107c610f8();
  func_0x000107c453e4();
  param_1[3] = param_2;
  param_1[4] = &PTR_DAT_110416de8;
  *param_1 = uVar1;
  return;
}



/* Entry: 10194a71c; end: 10194a73b;  */

void FUN_10194a71c(void)

{
  func_0x000107c61168(&PTR_PTR_112dd7a58);
  return;
}



/* Entry: 10194a73c; end: 10194a7ef; -[_TtC14MinervaAPIImpl36MinervaGenerativeLoggingServicesImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10194a73c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar3 = PTR_PTR_1126a7ea0;
  func_0x000107c610f8(PTR_PTR_1126a7ea0);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126a7ea8;
  func_0x000107c610f8();
  func_0x000107c477dc();
  func_0x000107c61170(puVar3);
  lVar5 = 0;
  FUN_10194a71c();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined **)(lVar6 + 0x10) = puVar4;
  plVar1 = (long *)(param_1 + _DAT_112dd79e8);
  plVar1[3] = lVar5;
  plVar1[4] = (long)&PTR_DAT_110416e18;
  *plVar1 = lVar6;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10194a7f0; end: 10194a823;  */

void FUN_10194a7f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10194a824; end: 10194a85b; -[_TtC14MinervaAPIImpl36MinervaGenerativeLoggingServicesImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10194a824(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112dd79e8))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dd79e8));
  return;
}



/* Entry: 10194a85c; end: 10194a89f;  */

void FUN_10194a85c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ecfe0);
  return;
}



/* Entry: 10194a8a0; end: 10194a987;  */

/* WARNING: Possible PIC construction at 0x00010194a8f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010194a8fc) */

void FUN_10194a8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c4bbfc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10194a988; end: 10194aa37;  */

void FUN_10194a988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c4bbe8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10194aa38; end: 10194abeb;  */

/* WARNING: Possible PIC construction at 0x00010194ada4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010194adc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010194aff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010194b67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010194ac1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010194b680) */
/* WARNING: Removing unreachable block (ram,0x00010194aff4) */
/* WARNING: Removing unreachable block (ram,0x00010194aff8) */
/* WARNING: Removing unreachable block (ram,0x00010194adc8) */
/* WARNING: Removing unreachable block (ram,0x00010194ac20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10194aa38(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint in_w12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  undefined8 extraout_x13_00;
  ulong unaff_x19;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong unaff_x20;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int unaff_w21;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 *unaff_x29;
  undefined8 *puVar28;
  undefined8 unaff_x30;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 *in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined1 auStack_100 [256];
  
  uVar19 = uRam4c414e5245544e71;
  pcVar1 = pcRam4c414e5245544e69;
  uVar9 = 0xee00524f5252455f;
  uVar2 = 0x4c414e5245544e49;
  puVar12 = (undefined8 *)(param_1 & 0xff);
  uVar11 = 0xd99aa60;
  uVar17 = (uint)*(byte *)(puVar12 + 0x21b3354c);
  uVar15 = uVar17 * 4 + 0x194aa78;
  uVar10 = (uint)puVar12;
  uVar23 = uVar2;
  puVar28 = unaff_x29;
  uVar16 = uVar15;
  switch(puVar12) {
  default:
    uVar2 = 0x4f4e;
  case (undefined8 *)0x11:
  case (undefined8 *)0x19:
  case (undefined8 *)0x21:
  case (undefined8 *)0x29:
  case (undefined8 *)0x31:
  case (undefined8 *)0x39:
  case (undefined8 *)0x49:
  case (undefined8 *)0x51:
  case (undefined8 *)0x59:
  case (undefined8 *)0x69:
  case (undefined8 *)0xf2:
    uVar2 = uVar2 & 0xffffffff0000ffff | 0x5f540000;
  case (undefined8 *)0xbf:
  case (undefined8 *)0xd3:
  case (undefined8 *)0xdb:
  case (undefined8 *)0xe3:
  case (undefined8 *)0xeb:
  case (undefined8 *)0xff:
    uVar2 = uVar2 & 0xffff0000ffffffff | 0x4f4600000000;
  case (undefined8 *)0x71:
  case (undefined8 *)0xc1:
  case (undefined8 *)0xca:
    uVar2 = uVar2 & 0xffffffffffff | 0x4e55000000000000;
  case (undefined8 *)0xcc:
    uVar9 = 0x44;
  case (undefined8 *)0xfb:
    auVar29._8_8_ = uVar9 & 0xffffffffffff | 0xe900000000000000;
    auVar29._0_8_ = uVar2;
    return auVar29;
  case (undefined8 *)0x2:
    auVar34._8_8_ = 0xeb00000000545345;
    auVar34._0_8_ = 0x555145525f444142;
    return auVar34;
  case (undefined8 *)0x3:
    auVar35._8_8_ = 0xee00454c42415450;
    auVar35._0_8_ = 0x454343415f544f4e;
    return auVar35;
  case (undefined8 *)0x4:
    auVar31._8_8_ = 0xe800000000000000;
    auVar31._0_8_ = 0x5443494c464e4f43;
    return auVar31;
  case (undefined8 *)0x5:
  case (undefined8 *)0xf9:
    puVar12 = (undefined8 *)0xa;
  case (undefined8 *)0xc0:
    auVar37._8_8_ = (ulong)puVar12 | 0xe900000000000044;
    auVar37._0_8_ = 0x4544444942524f46;
    return auVar37;
  case (undefined8 *)0x6:
    uVar9 = 0x544e;
  case (undefined8 *)0xb5:
    uVar9 = uVar9 & 0xffffffffffff | 0xea00000000000000;
    uVar2 = 0x4e4f435f4f4e;
  case (undefined8 *)0x87:
  case (undefined8 *)0xa7:
    auVar38._0_8_ = uVar2 & 0xffffffffffff | 0x4554000000000000;
    auVar38._8_8_ = uVar9;
    return auVar38;
  case (undefined8 *)0x7:
    auVar36._8_8_ = 0xe700000000000000;
    auVar36._0_8_ = 0x54554f454d4954;
    return auVar36;
  case (undefined8 *)0x8:
    auVar40._8_8_ = 0x800000010efc19d0;
    auVar40._0_8_ = 0xd000000000000011;
    return auVar40;
  case (undefined8 *)0x9:
  case (undefined8 *)0xdc:
    auVar33._8_8_ = 0xec00000044455a49;
    auVar33._0_8_ = 0x524f485455414e55;
    return auVar33;
  case (undefined8 *)0xa:
    uVar9 = 0xe700000000000000;
    uVar2 = 0x5553;
  case (undefined8 *)0x80:
  case (undefined8 *)0xa0:
    uVar2 = uVar2 & 0xffffffff0000ffff | 0x43430000;
  case (undefined8 *)0xdd:
  case (undefined8 *)0xe5:
  case (undefined8 *)0xed:
    uVar2 = uVar2 & 0xffffffff | 0x53534500000000;
  case (undefined8 *)0x8c:
  case (undefined8 *)0xac:
    auVar39._8_8_ = uVar9;
    auVar39._0_8_ = uVar2;
    return auVar39;
  case (undefined8 *)0xb:
    auVar30._8_8_ = 0xee00444545524547;
    auVar30._0_8_ = 0x474952545f444c41;
    return auVar30;
  case (undefined8 *)0xc:
    uVar9 = 0xe700000000000000;
    uVar2 = 0x4e574f4e4b4e55;
  case (undefined8 *)0x0:
    auVar32._8_8_ = uVar9;
    auVar32._0_8_ = uVar2;
    return auVar32;
  case (undefined8 *)0x28:
  case (undefined8 *)0x30:
    unaff_x19 = uVar9;
  case (undefined8 *)0x68:
    uVar2 = unaff_x19;
    func_0x000107c6157c(uRam4c414e5245544e71);
    func_0x000107c61174(uVar2);
    (*pcVar1)();
    func_0x000107c61574(uVar19);
  case (undefined8 *)0xfc:
  case (undefined8 *)0xbe:
  case (undefined8 *)0xd2:
  case (undefined8 *)0xda:
  case (undefined8 *)0xe2:
  case (undefined8 *)0xea:
  case (undefined8 *)0xfe:
    break;
  case (undefined8 *)0x40:
  case (undefined8 *)0xc2:
    func_0x000107c615e8(*(undefined8 *)(unaff_x19 + _DAT_112dd7ac8));
    uVar2 = *(ulong *)(unaff_x19 + _DAT_112dd7ad0);
    break;
  case (undefined8 *)0x50:
    param_3 = param_3 + 0xb70;
  case (undefined8 *)0xfa:
    uVar9 = 0x24;
    param_4 = 6;
    param_5 = 0;
  case (undefined8 *)0xd0:
  case (undefined8 *)0xd8:
  case (undefined8 *)0xe0:
  case (undefined8 *)0xe8:
    func_0x000107c60eb0(0x4c414e5245544e49,uVar9,param_3,param_4,param_5);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10194ad44);
    (*pcVar1)();
  case (undefined8 *)0x70:
    puVar28 = &stack0x00000060;
    in_stack_00000060 = unaff_x29;
    in_stack_00000068 = unaff_x30;
  case (undefined8 *)0xd6:
    register0x00000008 = (BADSPACEBASE *)auStack_100;
    puVar28[-0x16] = unaff_x20;
    puVar28[-0x14] = param_5;
    puVar28[-0x19] = param_4;
    puVar28[-0x18] = param_3;
    unaff_x19 = uVar9;
  case (undefined8 *)0xdf:
  case (undefined8 *)0xe7:
  case (undefined8 *)0xef:
    puVar12 = puVar28 + -6;
  case (undefined8 *)0x10:
    puVar12[-0x20] = 0x4c414e5245544e49;
    uVar2 = 0;
    func_0x000107c5eea4();
    unaff_x24 = uVar2;
  case (undefined8 *)0x48:
    unaff_x25 = *(long *)(uVar2 - 8);
  case (undefined8 *)0xd4:
  case (undefined8 *)0xde:
  case (undefined8 *)0xe6:
  case (undefined8 *)0xee:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar13 = (long)register0x00000008 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
    puVar28[-0x1d] = lVar13;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar13 = lVar13 - extraout_x12;
    puVar28[-0x1e] = extraout_x13_00;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar3 = PTR_PTR_1126b2798;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar28[-0x24] = puVar3;
    func_0x000107c60f34();
    puVar4 = puVar3;
    func_0x000107c60f34();
    puVar28[-0x25] = puVar4;
    puVar4 = &UNK_110416e88;
    func_0x000107c613fc(&UNK_110416e88,0x18,7);
    puVar28[-0x17] = puVar4;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    puVar4 = &UNK_110416eb0;
    uVar9 = 0x11;
    func_0x000107c613fc(&UNK_110416eb0,0x11,7);
    puVar28[-0x15] = puVar4;
    puVar4[0x10] = 0;
    uVar2 = unaff_x19;
    func_0x000107c450ec();
    uVar19 = 0x4e574f4e4b4e55;
    if (uVar2 == 1) {
      uVar19 = 0x45434e41484e45;
    }
    uVar14 = 0x4843554f544552;
    if (uVar2 != 2) {
      uVar14 = uVar19;
    }
    uVar19 = 0x444e45545845;
    if (uVar2 != 0) {
      uVar19 = uVar14;
    }
    uVar14 = 0xe600000000000000;
    if (uVar2 != 0) {
      uVar14 = 0xe700000000000000;
    }
    puVar28[-0x1a] = uVar14;
    puVar28[-0x1c] = lVar13 - extraout_x12_00;
    func_0x000107c5eea0(lVar13 - extraout_x12_00);
    func_0x000107c5eea0(lVar13);
    func_0x000107c60f38(puVar3);
    uVar2 = unaff_x19;
    func_0x000107c45068();
    func_0x000107c61180();
    puVar28[-0x27] = unaff_x19;
    if (uVar2 == 0) {
      *(undefined4 *)(puVar28 + -0x1f) = 0;
      puVar4 = &UNK_110416ed8;
      func_0x000107c613fc(&UNK_110416ed8,0x18,7);
      puVar28[-0x2b] = puVar4;
      lVar20 = puVar28[-0x16];
      func_0x000107c61614(puVar4 + 0x10,lVar20);
      pcVar1 = *(code **)(unaff_x25 + 0x10);
      puVar28[-0x29] = pcVar1;
      uVar18 = puVar28[-0x1d];
      (*pcVar1)(uVar18,lVar13,unaff_x24);
      uVar2 = (ulong)*(byte *)(unaff_x25 + 0x50);
      puVar28[-0x2a] = uVar2;
      uVar23 = uVar2 + 0x38 & (uVar2 ^ 0xffffffffffffffff);
      puVar5 = &UNK_110416f00;
      func_0x000107c613fc(&UNK_110416f00,uVar23 + puVar28[-0x1e],uVar2 | 7);
      uVar14 = puVar28[-0x17];
      *(undefined **)(puVar5 + 0x10) = puVar3;
      *(undefined8 *)(puVar5 + 0x18) = uVar14;
      *(undefined **)(puVar5 + 0x20) = puVar4;
      *(undefined8 *)(puVar5 + 0x28) = uVar19;
      puVar28[-0x1b] = uVar19;
      uVar24 = puVar28[-0x1a];
      *(undefined8 *)(puVar5 + 0x30) = uVar24;
      pcVar1 = *(code **)(unaff_x25 + 0x20);
      puVar28[-0x28] = pcVar1;
      (*pcVar1)(puVar5 + uVar23,uVar18,unaff_x24);
      puVar4 = &UNK_110416ed8;
      puVar6 = puVar4;
      func_0x000107c613fc(&UNK_110416ed8,0x18,7);
      puVar28[-0x20] = unaff_x24;
      func_0x000107c61614(puVar6 + 0x10,lVar20);
      puVar7 = &UNK_110416f28;
      func_0x000107c613fc(&UNK_110416f28,0x58,7);
      puVar28[-0x22] = lVar13;
      *(undefined **)(puVar7 + 0x10) = puVar3;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      *(undefined8 *)(puVar7 + 0x20) = uVar19;
      *(undefined8 *)(puVar7 + 0x28) = uVar24;
      uVar14 = puVar28[-0x27];
      *(undefined8 *)(puVar7 + 0x30) = puVar28[-0x15];
      *(undefined8 *)(puVar7 + 0x38) = uVar14;
      uVar19 = puVar28[-0x19];
      *(undefined8 *)(puVar7 + 0x40) = puVar28[-0x18];
      *(undefined8 *)(puVar7 + 0x48) = uVar19;
      *(undefined8 *)(puVar7 + 0x50) = puVar28[-0x14];
      puVar28[-0x21] = *(undefined8 *)(lVar20 + _DAT_112dd7ac8);
      func_0x000107c613fc(&UNK_110416ed8,0x18,7);
      puVar28[-0x23] = unaff_x25;
      func_0x000107c61614(puVar4 + 0x10,lVar20);
      puVar8 = &UNK_110416f50;
      func_0x000107c613fc(&UNK_110416f50,0x48,7);
      uVar18 = puVar28[-0x26];
      *(undefined8 *)(puVar8 + 0x10) = uVar18;
      *(undefined **)(puVar8 + 0x18) = puVar4;
      puVar8[0x20] = (char)*(undefined4 *)(puVar28 + -0x1f);
      *(code **)(puVar8 + 0x28) = FUN_10194e550;
      *(undefined **)(puVar8 + 0x30) = puVar7;
      *(code **)(puVar8 + 0x38) = FUN_10194e508;
      *(undefined **)(puVar8 + 0x40) = puVar5;
      puVar28[-0xf] = FUN_10194e978;
      puVar28[-0xe] = puVar8;
      puVar28[-0x13] = PTR___NSConcreteStackBlock_11034bd00;
      puVar28[-0x12] = 0x42000000;
      puVar28[-0x11] = &UNK_1000f6b44;
      puVar28[-0x10] = &UNK_110416f68;
      puVar12 = puVar28 + -0x13;
      func_0x000107c60bc4(puVar12);
      puVar28[-0x2c] = puVar28[-0xe];
      func_0x000107c61174();
      func_0x000107c61438(uVar24,2);
      func_0x000107c61174();
      puVar28[-0x1f] = puVar3;
      uVar25 = puVar28[-0x17];
      func_0x000107c6157c(uVar25);
      uVar19 = puVar28[-0x2b];
      func_0x000107c6157c(uVar19);
      func_0x000107c6157c(puVar6);
      func_0x000107c6157c(puVar28[-0x15]);
      func_0x000107c61174();
      puVar28[-0x27] = uVar14;
      uVar21 = puVar28[-0x18];
      func_0x000107c615f0(uVar21);
      func_0x000107c6157c(puVar28[-0x14]);
      func_0x000107c61174(uVar18);
      func_0x000107c6157c(puVar7);
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(puVar28[-0x2c]);
      uVar27 = puVar28[-0x21];
      func_0x000107c4e524(uVar27);
      func_0x000107c60bd0(puVar12);
      func_0x000107c61574(uVar19);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar7);
      uVar24 = puVar28[-0x25];
      func_0x000107c60f38(uVar24);
      puVar4 = &UNK_110416ed8;
      func_0x000107c613fc(&UNK_110416ed8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,puVar28[-0x16]);
      puVar3 = &UNK_110416fa0;
      func_0x000107c613fc(&UNK_110416fa0,0x78,7);
      uVar18 = puVar28[-0x24];
      *(undefined8 *)(puVar3 + 0x10) = uVar18;
      *(undefined8 *)(puVar3 + 0x18) = uVar25;
      *(undefined8 *)(puVar3 + 0x20) = uVar24;
      *(undefined **)(puVar3 + 0x28) = puVar4;
      *(undefined8 *)(puVar3 + 0x30) = uVar14;
      *(undefined8 *)(puVar3 + 0x38) = 0x53534543435553;
      uVar19 = puVar28[-0x1b];
      uVar14 = puVar28[-0x1a];
      *(undefined8 *)(puVar3 + 0x40) = 0xe700000000000000;
      *(undefined8 *)(puVar3 + 0x48) = uVar19;
      uVar26 = puVar28[-0x15];
      *(undefined8 *)(puVar3 + 0x50) = uVar14;
      *(undefined8 *)(puVar3 + 0x58) = uVar26;
      uVar19 = puVar28[-0x19];
      *(undefined8 *)(puVar3 + 0x60) = uVar21;
      *(undefined8 *)(puVar3 + 0x68) = uVar19;
      uVar22 = puVar28[-0x14];
      *(undefined8 *)(puVar3 + 0x70) = uVar22;
      func_0x000107c615f4(uVar27,2);
      func_0x000107c61434(uVar14);
      func_0x000107c6157c(uVar25);
      func_0x000107c6157c(uVar26);
      uVar19 = puVar28[-0x27];
      func_0x000107c61174();
      puVar28[-0x26] = uVar19;
      func_0x000107c615f0(uVar21);
      func_0x000107c6157c(uVar22);
      func_0x000107c61174();
      puVar28[-0x27] = uVar18;
      func_0x000107c61174();
      puVar28[-0x24] = uVar24;
      func_0x000107c6157c(puVar4);
      func_0x00010488b768(uVar27,FUN_10194e9a8,puVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c615e8(uVar27);
      func_0x000107c61574(puVar3);
      puVar4 = &UNK_110416ed8;
      func_0x000107c613fc(&UNK_110416ed8,0x18,7);
      puVar28[-0x25] = puVar4;
      func_0x000107c61614(puVar4 + 0x10,puVar28[-0x16]);
      uVar19 = puVar28[-0x1d];
      uVar22 = puVar28[-0x20];
      (*(code *)puVar28[-0x29])(uVar19,puVar28[-0x1c],uVar22);
      uVar2 = puVar28[-0x2a];
      uVar23 = uVar2 + 0x48 & (uVar2 ^ 0xffffffffffffffff);
      uVar9 = puVar28[-0x1e] + uVar23 + 7 & 0xfffffffffffffff8;
      puVar3 = &UNK_110416fc8;
      func_0x000107c613fc(&UNK_110416fc8,uVar9 + 0x18,uVar2 | 7);
      uVar24 = puVar28[-0x17];
      *(undefined8 *)(puVar3 + 0x10) = uVar18;
      *(undefined8 *)(puVar3 + 0x18) = uVar24;
      uVar14 = puVar28[-0x1b];
      uVar18 = puVar28[-0x1a];
      *(undefined **)(puVar3 + 0x20) = puVar4;
      *(undefined8 *)(puVar3 + 0x28) = uVar14;
      uVar21 = puVar28[-0x15];
      *(undefined8 *)(puVar3 + 0x30) = uVar18;
      *(undefined8 *)(puVar3 + 0x38) = uVar21;
      uVar25 = puVar28[-0x26];
      *(undefined8 *)(puVar3 + 0x40) = uVar25;
      (*(code *)puVar28[-0x28])(puVar3 + uVar23,uVar19,uVar22);
      uVar19 = puVar28[-0x19];
      uVar14 = puVar28[-0x18];
      *(undefined8 *)(puVar3 + uVar9) = uVar14;
      uVar22 = puVar28[-0x14];
      *(undefined8 *)(puVar3 + uVar9 + 8) = uVar19;
      *(undefined8 *)((long)(puVar3 + uVar9 + 8) + 8) = uVar22;
      func_0x000107c61434(uVar18);
      func_0x000107c6157c(uVar24);
      func_0x000107c6157c(uVar21);
      func_0x000107c61174(uVar25);
      func_0x000107c615f0(uVar14);
      func_0x000107c6157c(uVar22);
      uVar24 = puVar28[-0x27];
      func_0x000107c61174();
      puVar28[-0x1d] = uVar24;
      uVar25 = puVar28[-0x25];
      func_0x000107c6157c(uVar25);
      uVar24 = puVar28[-0x21];
      uVar26 = puVar28[-0x24];
      func_0x00010488b768(uVar24,0x10194e9e4,puVar3);
      func_0x000107c61574(uVar25);
      func_0x000107c615e8(uVar24);
      func_0x000107c61574(puVar3);
      puVar4 = &UNK_110416ed8;
      func_0x000107c613fc(&UNK_110416ed8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,puVar28[-0x16]);
      puVar3 = &UNK_110416ff0;
      uVar9 = 0x58;
      func_0x000107c613fc(&UNK_110416ff0,0x58,7);
      uVar2 = puVar28[-0x1f];
      *(undefined **)(puVar3 + 0x10) = puVar4;
      *(ulong *)(puVar3 + 0x18) = uVar2;
      *(undefined8 *)(puVar3 + 0x20) = uVar26;
      *(undefined8 *)(puVar3 + 0x28) = uVar21;
      *(undefined8 *)(puVar3 + 0x30) = uVar14;
      *(undefined8 *)(puVar3 + 0x38) = uVar19;
      uVar19 = puVar28[-0x1b];
      *(undefined8 *)(puVar3 + 0x40) = uVar22;
      *(undefined8 *)(puVar3 + 0x48) = uVar19;
      *(undefined8 *)(puVar3 + 0x50) = uVar18;
      puVar28[-0xf] = 0x10194ea58;
      puVar28[-0xe] = puVar3;
      puVar28[-0x13] = PTR___NSConcreteStackBlock_11034bd00;
      puVar28[-0x12] = 0x42000000;
      puVar28[-0x11] = &UNK_1000b0c7c;
      puVar28[-0x10] = &UNK_110417008;
      puVar12 = puVar28 + -0x13;
      func_0x000107c60bc4(puVar12);
      uVar19 = puVar28[-0xe];
      func_0x000107c61174(uVar2);
      func_0x000107c6157c(uVar21);
      func_0x000107c615f0(uVar14);
      func_0x000107c6157c(uVar22);
      func_0x000107c61174(uVar26);
      func_0x000107c61574(uVar19);
      func_0x000107c3d5fc(puVar28[-0x1d]);
      func_0x000107c60bd0(puVar12);
    }
    else {
      func_0x000107c42298();
    }
    break;
  case (undefined8 *)0x86:
  case (undefined8 *)0x89:
  case (undefined8 *)0xa6:
  case (undefined8 *)0xa9:
    func_0x000107c5ed2c();
    unaff_x19 = uVar2;
  case (undefined8 *)0x8f:
  case (undefined8 *)0xaf:
    func_0x000107c3f038();
    unaff_x20 = uVar23;
  case (undefined8 *)0x83:
  case (undefined8 *)0x8b:
  case (undefined8 *)0x90:
  case (undefined8 *)0xa3:
  case (undefined8 *)0xab:
  case (undefined8 *)0xb0:
    uVar23 = unaff_x19;
  case (undefined8 *)0x8a:
  case (undefined8 *)0xaa:
    uVar2 = unaff_x20;
    func_0x000107c614ac(uVar23);
  case (undefined8 *)0x81:
  case (undefined8 *)0xa1:
    break;
  case (undefined8 *)0x88:
  case (undefined8 *)0xa8:
    uVar15 = 7;
  case (undefined8 *)0x82:
  case (undefined8 *)0xa2:
    uVar16 = uVar15;
    if (!in_ZR) {
      uVar16 = uVar10;
    }
  case (undefined8 *)0x8e:
  case (undefined8 *)0x93:
  case (undefined8 *)0xae:
  case (undefined8 *)0xb3:
  case (undefined8 *)0xb8:
    uVar15 = 0;
    if (unaff_w21 != 500) {
      uVar15 = uVar16;
    }
    in_ZR = unaff_w21 == 0x1ad;
  case (undefined8 *)0x84:
  case (undefined8 *)0x8d:
  case (undefined8 *)0x94:
  case (undefined8 *)0xa4:
  case (undefined8 *)0xad:
  case (undefined8 *)0xb4:
  case (undefined8 *)0xb6:
  case (undefined8 *)0xb7:
  case (undefined8 *)0xb9:
    uVar11 = 0xd99aa60;
    if (!in_ZR) {
      uVar11 = uVar15;
    }
  case (undefined8 *)0x91:
  case (undefined8 *)0x92:
  case (undefined8 *)0xb1:
  case (undefined8 *)0xb2:
    uVar15 = 3;
    uVar17 = 4;
    in_ZR = unaff_w21 == 0x19a;
  case (undefined8 *)0x85:
  case (undefined8 *)0xa5:
    in_w12 = 0xb;
    if (!in_ZR) {
      in_w12 = uVar10;
    }
  case (undefined8 *)0xec:
    if (unaff_w21 != 0x199) {
      uVar17 = in_w12;
    }
    if (unaff_w21 != 0x196) {
      uVar15 = uVar17;
    }
  case (undefined8 *)0xd5:
    if (unaff_w21 < 0x1ad) {
      uVar11 = uVar15;
    }
    uVar15 = 1;
    if (unaff_w21 != 0x194) {
      uVar15 = uVar10;
    }
    uVar17 = 5;
    if (unaff_w21 != 0x193) {
      uVar17 = uVar15;
    }
    uVar15 = 9;
    if (unaff_w21 != 0x191) {
      uVar15 = uVar17;
    }
    uVar17 = 6;
  case (undefined8 *)0xf8:
    uVar16 = 2;
    if (unaff_w21 != 400) {
      uVar16 = uVar10;
    }
    if (unaff_w21 != 0xcc) {
      uVar17 = uVar16;
    }
    if (unaff_w21 < 0x191) {
      uVar15 = uVar17;
    }
    puVar12 = (undefined8 *)(ulong)uVar15;
    in_OV = SBORROW4(unaff_w21,0x195);
    in_NG = unaff_w21 + -0x195 < 0;
    in_ZR = unaff_w21 == 0x195;
  case (undefined8 *)0x20:
    if (in_ZR || in_NG != in_OV) {
      uVar11 = (uint)puVar12;
    }
    uVar2 = (ulong)uVar11;
  case (undefined8 *)0x58:
  case (undefined8 *)0x38:
  case (undefined8 *)0x18:
    auVar42._8_8_ = 0xee00524f5252455f;
    auVar42._0_8_ = uVar2;
    return auVar42;
  case (undefined8 *)0xbc:
    auVar43._8_8_ = 0xee00524f5252455f;
    auVar43._0_8_ = 0x4c414e5245544e49;
    return auVar43;
  case (undefined8 *)0xbd:
  case (undefined8 *)0xd1:
  case (undefined8 *)0xd9:
  case (undefined8 *)0xe1:
  case (undefined8 *)0xe9:
  case (undefined8 *)0xfd:
    break;
  case (undefined8 *)0xe4:
    auVar41._8_8_ = 0xee00524f5252455f;
    auVar41._0_8_ = 0x7070617257746e69;
    return auVar41;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  auVar44._8_8_ = uVar9;
  auVar44._0_8_ = uVar2;
  return auVar44;
}



/* Entry: 10194abec; end: 10194ad17;  */

undefined4 FUN_10194abec(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar3 = param_1;
  func_0x000107c5ed2c();
  uVar4 = uVar3;
  func_0x000107c3f038();
  func_0x000107c614ac(param_1);
  func_0x000107c61170(uVar3);
  iVar7 = (int)uVar4;
  uVar2 = 7;
  if (iVar7 != 0x1f8) {
    uVar2 = 0xc;
  }
  uVar5 = 0;
  if (iVar7 != 500) {
    uVar5 = uVar2;
  }
  uVar2 = 8;
  if (iVar7 != 0x1ad) {
    uVar2 = uVar5;
  }
  uVar5 = 0xb;
  if (iVar7 != 0x19a) {
    uVar5 = 0xc;
  }
  uVar6 = 4;
  if (iVar7 != 0x199) {
    uVar6 = uVar5;
  }
  uVar5 = 3;
  if (iVar7 != 0x196) {
    uVar5 = uVar6;
  }
  if (iVar7 < 0x1ad) {
    uVar2 = uVar5;
  }
  uVar5 = 1;
  if (iVar7 != 0x194) {
    uVar5 = 0xc;
  }
  uVar6 = 5;
  if (iVar7 != 0x193) {
    uVar6 = uVar5;
  }
  uVar5 = 9;
  if (iVar7 != 0x191) {
    uVar5 = uVar6;
  }
  uVar6 = 2;
  if (iVar7 != 400) {
    uVar6 = 0xc;
  }
  uVar1 = 6;
  if (iVar7 != 0xcc) {
    uVar1 = uVar6;
  }
  if (iVar7 < 0x191) {
    uVar5 = uVar1;
  }
  if (iVar7 < 0x196) {
    uVar2 = uVar5;
  }
  return uVar2;
}



/* Entry: 10194ad18; end: 10194ad77; -[_TtC14MinervaAPIImpl21MinervaImageProcessor init] */

void FUN_10194ad18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MinervaAPIImpl.MinervaImageProcessor",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10194ad44);
  (*pcVar1)();
}



/* Entry: 10194ad78; end: 10194adef; -[_TtC14MinervaAPIImpl21MinervaImageProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010194ad94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010194adc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010194ad98) */
/* WARNING: Removing unreachable block (ram,0x00010194adc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10194ad78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dd7ab8));
  return;
}



/* Entry: 10194adf0; end: 10194ae0f;  */

void FUN_10194adf0(void)

{
  func_0x000107c61168(&PTR_PTR_1127ed098);
  return;
}



/* Entry: 10194ae10; end: 10194b94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10194ae10(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long extraout_x13_00;
  code *pcVar17;
  long unaff_x20;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined *puStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  code *pcStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar5 = 0;
  lStack_140 = param_1;
  uStack_d8 = param_4;
  uStack_d0 = param_3;
  func_0x000107c5eea4();
  lVar20 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = (long)&puStack_170 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  puStack_f8 = (undefined *)lVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar21 - extraout_x12;
  lStack_100 = extraout_x13_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar6 = PTR_PTR_1126b2798;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puStack_130 = puVar6;
  func_0x000107c60f34();
  puVar7 = puVar6;
  func_0x000107c60f34();
  puVar8 = &UNK_110416e88;
  puStack_138 = puVar7;
  func_0x000107c613fc(&UNK_110416e88,0x18,7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  puVar7 = &UNK_110416eb0;
  puStack_c8 = puVar8;
  func_0x000107c613fc(&UNK_110416eb0,0x11,7);
  puVar7[0x10] = 0;
  lVar9 = param_2;
  func_0x000107c450ec();
  uVar1 = 0x4e574f4e4b4e55;
  if (lVar9 == 1) {
    uVar1 = 0x45434e41484e45;
  }
  uVar2 = 0x4843554f544552;
  if (lVar9 != 2) {
    uVar2 = uVar1;
  }
  uVar1 = 0x444e45545845;
  if (lVar9 != 0) {
    uVar1 = uVar2;
  }
  uStack_e0 = 0xe600000000000000;
  if (lVar9 != 0) {
    uStack_e0 = 0xe700000000000000;
  }
  lStack_f0 = lVar21 - extraout_x12_00;
  func_0x000107c5eea0(lVar21 - extraout_x12_00);
  func_0x000107c5eea0(lVar21);
  func_0x000107c60f38(puVar6);
  lVar9 = param_2;
  func_0x000107c45068();
  func_0x000107c61180();
  puStack_148 = (undefined *)param_2;
  if (lVar9 != 0) {
    lVar10 = lVar9;
    func_0x000107c42298();
    func_0x000107c61170(lVar9);
    if ((int)lVar10 != 0) {
      func_0x000107c450ec();
      uStack_108 = (undefined *)CONCAT44(uStack_108._4_4_,(uint)(param_2 == 0));
      goto LAB_10194b014;
    }
  }
  uStack_108 = (undefined *)((ulong)uStack_108._4_4_ << 0x20);
LAB_10194b014:
  puVar8 = &UNK_110416ed8;
  func_0x000107c613fc(&UNK_110416ed8,0x18,7);
  puStack_168 = puVar8;
  func_0x000107c61614(puVar8 + 0x10,unaff_x20);
  puVar13 = puStack_f8;
  pcStack_158 = *(code **)(lVar20 + 0x10);
  (*pcStack_158)(puStack_f8,lVar21,lVar5);
  uStack_160 = (ulong)*(byte *)(lVar20 + 0x50);
  uVar18 = uStack_160 + 0x38 & (uStack_160 ^ 0xffffffffffffffff);
  puVar11 = &UNK_110416f00;
  func_0x000107c613fc(&UNK_110416f00,uVar18 + lStack_100,uStack_160 | 7);
  uVar2 = uStack_e0;
  *(undefined **)(puVar11 + 0x10) = puVar6;
  *(undefined **)(puVar11 + 0x18) = puStack_c8;
  *(undefined **)(puVar11 + 0x20) = puVar8;
  *(undefined8 *)(puVar11 + 0x28) = uVar1;
  *(undefined8 *)(puVar11 + 0x30) = uStack_e0;
  pcStack_150 = *(code **)(lVar20 + 0x20);
  uStack_e8 = uVar1;
  (*pcStack_150)(puVar11 + uVar18,puVar13,lVar5);
  puVar8 = &UNK_110416ed8;
  puVar12 = puVar8;
  func_0x000107c613fc(&UNK_110416ed8,0x18,7);
  lStack_110 = lVar5;
  func_0x000107c61614(puVar12 + 0x10,unaff_x20);
  puVar13 = &UNK_110416f28;
  func_0x000107c613fc(&UNK_110416f28,0x58,7);
  puVar16 = puStack_148;
  *(undefined **)(puVar13 + 0x10) = puVar6;
  *(undefined **)(puVar13 + 0x18) = puVar12;
  *(undefined8 *)(puVar13 + 0x20) = uVar1;
  *(undefined8 *)(puVar13 + 0x28) = uVar2;
  *(undefined **)(puVar13 + 0x30) = puVar7;
  *(undefined **)(puVar13 + 0x38) = puStack_148;
  *(undefined8 *)(puVar13 + 0x40) = uStack_d0;
  *(undefined8 *)(puVar13 + 0x48) = uStack_d8;
  *(undefined8 *)(puVar13 + 0x50) = param_5;
  uStack_118 = *(undefined8 *)(unaff_x20 + _DAT_112dd7ac8);
  lStack_120 = lVar21;
  func_0x000107c613fc(&UNK_110416ed8,0x18,7);
  lStack_128 = lVar20;
  func_0x000107c61614(puVar8 + 0x10,unaff_x20);
  puVar14 = &UNK_110416f50;
  func_0x000107c613fc(&UNK_110416f50,0x48,7);
  lVar9 = lStack_140;
  *(long *)(puVar14 + 0x10) = lStack_140;
  *(undefined **)(puVar14 + 0x18) = puVar8;
  puVar14[0x20] = (char)uStack_108;
  *(code **)(puVar14 + 0x28) = FUN_10194e550;
  *(undefined **)(puVar14 + 0x30) = puVar13;
  *(code **)(puVar14 + 0x38) = FUN_10194e508;
  *(undefined **)(puVar14 + 0x40) = puVar11;
  pcStack_88 = FUN_10194e978;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110416f68;
  ppuVar15 = &puStack_a8;
  puStack_80 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  puStack_170 = puStack_80;
  func_0x000107c61174();
  func_0x000107c61438(uVar2,2);
  func_0x000107c61174();
  puVar14 = puStack_c8;
  uStack_108 = puVar6;
  func_0x000107c6157c(puStack_c8);
  puVar8 = puStack_168;
  func_0x000107c6157c(puStack_168);
  func_0x000107c6157c(puVar12);
  func_0x000107c6157c(puVar7);
  func_0x000107c61174();
  uVar3 = uStack_d0;
  puStack_148 = puVar16;
  func_0x000107c615f0(uStack_d0);
  func_0x000107c6157c(param_5);
  func_0x000107c61174(lVar9);
  func_0x000107c6157c(puVar13);
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puStack_170);
  uVar1 = uStack_118;
  func_0x000107c4e524(uStack_118);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar13);
  puVar11 = puStack_138;
  func_0x000107c60f38(puStack_138);
  puVar8 = &UNK_110416ed8;
  func_0x000107c613fc(&UNK_110416ed8,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,unaff_x20);
  puVar6 = &UNK_110416fa0;
  func_0x000107c613fc(&UNK_110416fa0,0x78,7);
  uVar2 = uStack_e0;
  puVar13 = puStack_130;
  *(undefined **)(puVar6 + 0x10) = puStack_130;
  *(undefined **)(puVar6 + 0x18) = puVar14;
  *(undefined **)(puVar6 + 0x20) = puVar11;
  *(undefined **)(puVar6 + 0x28) = puVar8;
  *(undefined **)(puVar6 + 0x30) = puVar16;
  *(undefined8 *)(puVar6 + 0x38) = 0x53534543435553;
  *(undefined8 *)(puVar6 + 0x40) = 0xe700000000000000;
  *(undefined8 *)(puVar6 + 0x48) = uStack_e8;
  *(undefined8 *)(puVar6 + 0x50) = uStack_e0;
  *(undefined **)(puVar6 + 0x58) = puVar7;
  *(undefined8 *)(puVar6 + 0x60) = uVar3;
  *(undefined8 *)(puVar6 + 0x68) = uStack_d8;
  *(undefined8 *)(puVar6 + 0x70) = param_5;
  func_0x000107c615f4(uVar1,2);
  func_0x000107c61434(uVar2);
  func_0x000107c6157c(puVar14);
  func_0x000107c6157c(puVar7);
  puVar14 = puStack_148;
  func_0x000107c61174();
  lStack_140 = (long)puVar14;
  func_0x000107c615f0(uVar3);
  func_0x000107c6157c(param_5);
  func_0x000107c61174();
  puStack_148 = puVar13;
  func_0x000107c61174();
  puStack_130 = puVar11;
  func_0x000107c6157c(puVar8);
  func_0x00010488b768(uVar1,FUN_10194e9a8,puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(puVar6);
  puVar8 = &UNK_110416ed8;
  func_0x000107c613fc(&UNK_110416ed8,0x18,7);
  puStack_138 = puVar8;
  func_0x000107c61614(puVar8 + 0x10,unaff_x20);
  puVar11 = puStack_f8;
  lVar5 = lStack_110;
  (*pcStack_158)(puStack_f8,lStack_f0,lStack_110);
  uVar18 = uStack_160 + 0x48 & (uStack_160 ^ 0xffffffffffffffff);
  uVar19 = lStack_100 + uVar18 + 7 & 0xfffffffffffffff8;
  puVar6 = &UNK_110416fc8;
  func_0x000107c613fc(&UNK_110416fc8,uVar19 + 0x18,uStack_160 | 7);
  puVar14 = puStack_c8;
  uVar2 = uStack_e0;
  lVar9 = lStack_140;
  *(undefined **)(puVar6 + 0x10) = puVar13;
  *(undefined **)(puVar6 + 0x18) = puStack_c8;
  *(undefined **)(puVar6 + 0x20) = puVar8;
  *(undefined8 *)(puVar6 + 0x28) = uStack_e8;
  *(undefined8 *)(puVar6 + 0x30) = uStack_e0;
  *(undefined **)(puVar6 + 0x38) = puVar7;
  *(long *)(puVar6 + 0x40) = lStack_140;
  (*pcStack_150)(puVar6 + uVar18,puVar11,lVar5);
  uVar4 = uStack_d0;
  uVar3 = uStack_d8;
  *(undefined8 *)(puVar6 + uVar19) = uStack_d0;
  *(undefined8 *)(puVar6 + uVar19 + 8) = uStack_d8;
  *(undefined8 *)((long)(puVar6 + uVar19 + 8) + 8) = param_5;
  func_0x000107c61434(uVar2);
  func_0x000107c6157c(puVar14);
  func_0x000107c6157c(puVar7);
  func_0x000107c61174(lVar9);
  func_0x000107c615f0(uVar4);
  func_0x000107c6157c(param_5);
  puVar11 = puStack_148;
  func_0x000107c61174();
  puVar8 = puStack_138;
  puStack_f8 = puVar11;
  func_0x000107c6157c(puStack_138);
  uVar1 = uStack_118;
  puVar11 = puStack_130;
  func_0x00010488b768(uStack_118,0x10194e9e4,puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(puVar6);
  puVar8 = &UNK_110416ed8;
  func_0x000107c613fc(&UNK_110416ed8,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,unaff_x20);
  puVar6 = &UNK_110416ff0;
  func_0x000107c613fc(&UNK_110416ff0,0x58,7);
  puVar13 = uStack_108;
  *(undefined **)(puVar6 + 0x10) = puVar8;
  *(undefined **)(puVar6 + 0x18) = uStack_108;
  *(undefined **)(puVar6 + 0x20) = puVar11;
  *(undefined **)(puVar6 + 0x28) = puVar7;
  *(undefined8 *)(puVar6 + 0x30) = uVar4;
  *(undefined8 *)(puVar6 + 0x38) = uVar3;
  *(undefined8 *)(puVar6 + 0x40) = param_5;
  *(undefined8 *)(puVar6 + 0x48) = uStack_e8;
  *(undefined8 *)(puVar6 + 0x50) = uVar2;
  pcStack_88 = (code *)0x10194ea58;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000b0c7c;
  puStack_90 = &UNK_110417008;
  ppuVar15 = &puStack_a8;
  puStack_80 = puVar6;
  func_0x000107c60bc4(ppuVar15);
  puVar8 = puStack_80;
  func_0x000107c61174(puVar13);
  func_0x000107c6157c(puVar7);
  func_0x000107c615f0(uVar4);
  func_0x000107c6157c(param_5);
  func_0x000107c61174(puVar11);
  func_0x000107c61574(puVar8);
  puVar8 = puStack_f8;
  func_0x000107c3d5fc(puStack_f8);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar11);
  lVar9 = lStack_110;
  pcVar17 = *(code **)(lStack_128 + 8);
  (*pcVar17)(lStack_120,lStack_110);
  (*pcVar17)(lStack_f0,lVar9);
  func_0x000107c61574(puStack_c8);
  func_0x000107c61574(puVar7);
  return puVar8;
}



/* Entry: 10194b950; end: 10194c6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10194b950(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long extraout_x8;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar1 = 0;
  uStack_118 = param_7;
  uStack_110 = param_8;
  uStack_100 = param_2;
  func_0x000107c5f83c();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar10 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
  lVar2 = param_3 + 0x10;
  func_0x000107c61618();
  lStack_108 = lVar1;
  if (lVar2 != 0) {
    uVar8 = *(undefined8 *)(lVar2 + _DAT_112dd7ae0);
    func_0x000107c61174(uVar8);
    func_0x000107c61170(lVar2);
    uVar3 = 0x4552554c494146;
    func_0x000107c5fadc(0x4552554c494146,0xe700000000000000);
    uVar11 = param_4;
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c4bbfc(uVar8);
    lVar1 = lStack_108;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar11);
  }
  func_0x000107c61428(param_6 + 0x10,auStack_98,0,0);
  if ((*(byte *)(param_6 + 0x10) & 1) == 0) {
    puStack_f8 = param_1;
    func_0x000107c614b0(param_1);
    uVar11 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = auStack_b0;
    func_0x000107c6147c(puVar4,&puStack_f8,uVar11,&UNK_1104176c8,6);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x00010194f788(auStack_b0[0]);
    }
    func_0x000107c61428(param_3 + 0x10,auStack_b0,0,0);
    lVar2 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c61170();
      func_0x000107c450ec(uStack_118);
      puVar5 = PTR_PTR_1126a7eb0;
      uStack_118 = param_5;
      func_0x000107c610f8();
      func_0x000107c46e10();
      func_0x000107c61428(param_6 + 0x10,auStack_c8,0x21,0);
      puVar6 = &UNK_110417608;
      func_0x000107c613fc(&UNK_110417608,0x38,7);
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(undefined **)(puVar6 + 0x18) = param_1;
      *(undefined8 *)(puVar6 + 0x20) = param_9;
      *(undefined8 *)(puVar6 + 0x28) = param_10;
      *(undefined **)(puVar6 + 0x30) = puVar5;
      uStack_d8 = 0x10194f780;
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0x42000000;
      puStack_e8 = &UNK_1000f6b44;
      puStack_e0 = &UNK_110417620;
      ppuVar7 = &puStack_f8;
      puStack_d0 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_d0;
      func_0x000107c614b0(param_1);
      lVar1 = lStack_108;
      func_0x000107c6157c(param_10);
      func_0x000107c61174(puVar5);
      func_0x000107c61574(puVar6);
      func_0x000107c4e524(uStack_110);
      *(undefined1 *)(param_6 + 0x10) = 1;
      func_0x000107c614a8(auStack_c8);
      param_5 = uStack_118;
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61428(param_3 + 0x10,&puStack_f8,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      uVar11 = *(undefined8 *)(param_3 + _DAT_112dd7ae0);
      func_0x000107c5fadc(param_4,param_5);
      func_0x000107c4bbec(uVar11);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
    }
  }
  func_0x000107c5f830(puVar10);
  puVar4 = puVar10;
  func_0x000107c5ffb0();
  (**(code **)(lVar9 + 8))(puVar10,lVar1);
  func_0x000107c5f7f4(puVar4,0);
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000107c60f3c(uStack_100);
  }
  return;
}



/* Entry: 10194c6ec; end: 10194c937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10194c6ec(double param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar2 = 0;
  uStack_c8 = param_7;
  uStack_c0 = param_8;
  uStack_b8 = param_9;
  uStack_a8 = param_3;
  func_0x000107c5f83c();
  lVar8 = *(long *)(lVar2 + -8);
  lStack_b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar9 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_4 + 0x10,auStack_88,1,0);
  uVar7 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_4 + 0x10) = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61170(uVar7);
  func_0x000107c61428(param_5 + 0x10,auStack_a0,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    uVar3 = *(undefined8 *)(param_5 + _DAT_112dd7ae0);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(param_5);
    func_0x000107c5fadc(param_6,uStack_c8);
    uVar7 = uStack_c0;
    func_0x000107c5fadc(uStack_c0,uStack_b8);
    func_0x000107c5eea0(lVar9);
    func_0x000107c5ee68(param_10);
    (**(code **)(lVar5 + 8))(lVar9,lVar2);
    dVar10 = (double)(long)(param_1 * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10194c930);
      (*pcVar1)();
    }
    if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10194c934);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10194c938);
      (*pcVar1)();
    }
    func_0x000107c4bbf0(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(uVar7);
  }
  func_0x000107c5f830(puVar6);
  uVar7 = uStack_a8;
  puVar4 = puVar6;
  func_0x000107c5ffb0();
  (**(code **)(lVar8 + 8))(puVar6,lStack_b0);
  func_0x000107c5f7f4(puVar4,0);
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000107c60f3c(uVar7);
  }
  return;
}



/* Entry: 10194c938; end: 10194d9af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10194c938(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  long extraout_x8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar1 = 0;
  uStack_118 = param_3;
  func_0x000107c5f83c();
  lStack_128 = *(long *)(lVar1 + -8);
  lStack_120 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_128 + 0x40));
  puVar10 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + 0x10,auStack_80,1,0);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  func_0x000107c61170(uVar2);
  func_0x000107c614b0(param_1);
  uVar2 = param_1;
  FUN_10194abec(param_1);
  puVar8 = auStack_98;
  func_0x000107c61428(param_4 + 0x10,puVar8,0,0);
  lVar1 = param_4 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar9 = *(undefined8 *)(lVar1 + _DAT_112dd7ae0);
    func_0x000107c61174(uVar9);
    func_0x000107c61170(lVar1);
    uVar3 = uVar2;
    FUN_10194aa38(uVar2);
    func_0x000107c5fadc();
    lStack_130 = param_4;
    func_0x000107c6142c(puVar8);
    uVar4 = param_5;
    func_0x000107c5fadc(param_5,param_6);
    func_0x000107c4bbf0(uVar9);
    func_0x000107c61170(uVar9);
    param_4 = lStack_130;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
  }
  uStack_138 = param_6;
  lStack_130 = param_5;
  func_0x000107c61428(param_7 + 0x10,auStack_b0,0,0);
  if ((*(byte *)(param_7 + 0x10) & 1) == 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_c8,0,0);
    lVar1 = param_4 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c61170();
      func_0x000107c450ec(param_8);
      func_0x00010194abd8(uVar2);
      puVar5 = PTR_PTR_1126a7eb0;
      func_0x000107c610f8();
      func_0x000107c46e10();
      func_0x000107c61428(param_7 + 0x10,auStack_e0,0x21,0);
      puVar6 = &UNK_110417400;
      func_0x000107c613fc(&UNK_110417400,0x38,7);
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x18) = param_1;
      *(undefined8 *)(puVar6 + 0x20) = param_10;
      *(undefined8 *)(puVar6 + 0x28) = param_11;
      *(undefined **)(puVar6 + 0x30) = puVar5;
      uStack_f0 = 0x10194f77c;
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0x42000000;
      puStack_100 = &UNK_1000f6b44;
      puStack_f8 = &UNK_110417418;
      ppuVar7 = &puStack_110;
      puStack_e8 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_e8;
      func_0x000107c614b0(param_1);
      func_0x000107c6157c(param_11);
      func_0x000107c61174(puVar5);
      func_0x000107c61574(puVar6);
      func_0x000107c4e524(param_9);
      *(undefined1 *)(param_7 + 0x10) = 1;
      func_0x000107c614a8(auStack_e0);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61428(param_4 + 0x10,&puStack_110,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      uVar2 = *(undefined8 *)(param_4 + _DAT_112dd7ae0);
      lVar1 = lStack_130;
      func_0x000107c5fadc(lStack_130,uStack_138);
      func_0x000107c4bbec(uVar2);
      func_0x000107c61170(param_4);
      func_0x000107c61170(lVar1);
    }
  }
  func_0x000107c5f830(puVar10);
  puVar8 = puVar10;
  func_0x000107c5ffb0();
  (**(code **)(lStack_128 + 8))(puVar10,lStack_120);
  func_0x000107c5f7f4(puVar8,0);
  if (((ulong)puVar8 & 1) == 0) {
    func_0x000107c60f3c(uStack_118);
  }
  return;
}



/* Entry: 10194d9b0; end: 10194de2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10194d9b0(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long extraout_x8;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar2 = 0;
  uStack_120 = param_2;
  uStack_118 = param_4;
  uStack_110 = param_5;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&uStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
  lVar3 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar8 = *(undefined8 *)(lVar3 + _DAT_112dd7ae0);
    func_0x000107c61174(uVar8);
    func_0x000107c61170(lVar3);
    uVar4 = uStack_118;
    func_0x000107c5fadc(uStack_118,uStack_110);
    func_0x000107c5eea0(lVar9);
    func_0x000107c5ee68(param_6);
    (**(code **)(lVar10 + 8))(lVar9,lVar2);
    param_1 = (double)(long)(param_1 * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10194de0c);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10194de10);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10194de14);
      (*pcVar1)();
    }
    func_0x000107c4bbe8(uVar8);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61428(param_7 + 0x10,auStack_a8,0,0);
  if ((*(byte *)(param_7 + 0x10) & 1) == 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_c0,0,0);
    lVar3 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c61170();
      func_0x000107c450ec(param_8);
      func_0x000107c5eea0(lVar9);
      func_0x000107c5ee68(param_9);
      (**(code **)(lVar10 + 8))(lVar9,lVar2);
      dVar11 = (double)(long)(param_1 * 1000.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10194de18);
        (*pcVar1)();
      }
      if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10194de1c);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10194de24);
        (*pcVar1)();
      }
      uStack_130 = param_10;
      puVar5 = PTR_PTR_1126a7eb0;
      uStack_128 = param_9;
      func_0x000107c610f8();
      func_0x000107c46e10();
      func_0x000107c61428(param_7 + 0x10,auStack_d8,0x21,0);
      puVar6 = &UNK_110417180;
      func_0x000107c613fc(&UNK_110417180,0x38,7);
      uVar4 = uStack_120;
      *(undefined8 *)(puVar6 + 0x10) = uStack_120;
      *(undefined8 *)(puVar6 + 0x18) = 0;
      *(undefined8 *)(puVar6 + 0x20) = param_11;
      *(undefined8 *)(puVar6 + 0x28) = param_12;
      *(undefined **)(puVar6 + 0x30) = puVar5;
      uStack_e8 = 0x10194f770;
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      param_1 = 5.47077039858234e-315;
      uStack_100 = 0x42000000;
      puStack_f8 = &UNK_1000f6b44;
      puStack_f0 = &UNK_110417198;
      ppuVar7 = &puStack_108;
      puStack_e0 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_e0;
      func_0x000107c61174(uVar4);
      func_0x000107c6157c(param_12);
      func_0x000107c61174(puVar5);
      param_9 = uStack_128;
      func_0x000107c61574(puVar6);
      func_0x000107c4e524(uStack_130);
      *(undefined1 *)(param_7 + 0x10) = 1;
      func_0x000107c614a8(auStack_d8);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61428(param_3 + 0x10,&puStack_108,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      uVar8 = *(undefined8 *)(param_3 + _DAT_112dd7ae0);
      func_0x000107c61174(uVar8);
      func_0x000107c61170(param_3);
      uVar4 = uStack_118;
      func_0x000107c5fadc(uStack_118,uStack_110);
      func_0x000107c5eea0(lVar9);
      func_0x000107c5ee68(param_9);
      (**(code **)(lVar10 + 8))(lVar9,lVar2);
      dVar11 = (double)(long)(param_1 * 1000.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10194de20);
        (*pcVar1)();
      }
      if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10194de28);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10194de2c);
        (*pcVar1)();
      }
      func_0x000107c4bbec(uVar8);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar4);
    }
  }
  return;
}



/* Entry: 10194de2c; end: 10194e3c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10194de2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  ppuVar6 = &puStack_f0;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(lVar1 + _DAT_112dd7ae0);
    func_0x000107c61174(uVar7);
    func_0x000107c61170(lVar1);
    uVar8 = param_3;
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c4bbe8(uVar7);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
  }
  func_0x000107c61428(param_5 + 0x10,auStack_90,0,0);
  if ((*(byte *)(param_5 + 0x10) & 1) == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_a8,0,0);
    puVar2 = (undefined1 *)(param_2 + 0x10);
    func_0x000107c61618();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x000107c61170();
      FUN_101945d90();
      puVar3 = &UNK_1104176c8;
      func_0x000107c613f8(&UNK_1104176c8,puVar2,0,0);
      *puVar2 = (char)param_1;
      func_0x000107c450ec(param_6);
      func_0x00010194f788(param_1);
      puVar4 = PTR_PTR_1126a7eb0;
      func_0x000107c610f8();
      func_0x000107c46e10();
      func_0x000107c61428(param_5 + 0x10,auStack_c0,0x21,0);
      puVar5 = &UNK_1104171d0;
      func_0x000107c613fc(&UNK_1104171d0,0x38,7);
      *(undefined8 *)(puVar5 + 0x10) = 0;
      *(undefined **)(puVar5 + 0x18) = puVar3;
      *(undefined8 *)(puVar5 + 0x20) = param_8;
      *(undefined8 *)(puVar5 + 0x28) = param_9;
      *(undefined **)(puVar5 + 0x30) = puVar4;
      uStack_d0 = 0x10194f774;
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0x42000000;
      puStack_e0 = &UNK_1000f6b44;
      puStack_d8 = &UNK_1104171e8;
      puStack_c8 = puVar5;
      func_0x000107c60bc4(&puStack_f0);
      puVar5 = puStack_c8;
      func_0x000107c614b0(puVar3);
      func_0x000107c6157c(param_9);
      func_0x000107c61174(puVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c4e524(param_7);
      *(undefined1 *)(param_5 + 0x10) = 1;
      func_0x000107c614a8(auStack_c0);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(puVar4);
      func_0x000107c614ac(puVar3);
    }
    func_0x000107c61428(param_2 + 0x10,&puStack_f0,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      uVar8 = *(undefined8 *)(param_2 + _DAT_112dd7ae0);
      func_0x000107c5fadc(param_3,param_4);
      func_0x000107c4bbec(uVar8);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 10194e3c8; end: 10194e49f; -[_TtC14MinervaAPIImpl21MinervaImageProcessor processImage:parameters:completionPerformer:completion:] */

void FUN_10194e3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110416e60;
  func_0x000107c613fc(&UNK_110416e60,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_10194ae10(param_3,param_4,param_5,FUN_10194e500,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10194e4a0; end: 10194e4ff;  */

void FUN_10194e4a0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10194e500; end: 10194e507;  */

void FUN_10194e500(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10194e508; end: 10194e54f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10194e508(double param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar8 = 0;
  func_0x000107c5eea4();
  uVar10 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  lStack_b8 = unaff_x20 + (uVar10 + 0x38 & (uVar10 ^ 0xffffffffffffffff));
  lVar3 = 0;
  func_0x000107c5f83c();
  lVar13 = *(long *)(lVar3 + -8);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar12 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar14 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar1 + 0x10,auStack_88,1,0);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  func_0x000107c61170(uVar4);
  func_0x000107c61428(lVar8 + 0x10,auStack_a0,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 == 0) {
    func_0x000107c61174(param_2);
  }
  else {
    uVar4 = *(undefined8 *)(lVar8 + _DAT_112dd7ae0);
    func_0x000107c61174(param_2);
    func_0x000107c61174(uVar4);
    func_0x000107c61170(lVar8);
    uVar5 = 0x53534543435553;
    func_0x000107c5fadc(0x53534543435553,0xe700000000000000);
    func_0x000107c5fadc(uVar6,uVar9);
    func_0x000107c5eea0(lVar14);
    func_0x000107c5ee68(lStack_b8);
    (**(code **)(lVar11 + 8))(lVar14,lVar3);
    dVar15 = (double)(long)(param_1 * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10194b948);
      (*pcVar2)();
    }
    if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10194b94c);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10194b950);
      (*pcVar2)();
    }
    func_0x000107c4bbfc(uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
  }
  func_0x000107c5f830(puVar12);
  uVar6 = uStack_a8;
  puVar7 = puVar12;
  func_0x000107c5ffb0();
  (**(code **)(lVar13 + 8))(puVar12,lStack_b0);
  func_0x000107c5f7f4(puVar7,0);
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000107c60f3c(uVar6);
  }
  return;
}



/* Entry: 10194e550; end: 10194e583;  */

void FUN_10194e550(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10194b950(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10194e584; end: 10194e977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10194e584(undefined1 *param_1,long param_2,ulong param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_110 [24];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar9 = auStack_80;
  func_0x000107c61428(param_2 + 0x10,puVar9,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c61170();
  if ((param_3 & 1) != 0) {
    puVar9 = auStack_110;
    func_0x000107c61428(param_2 + 0x10,puVar9,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_10194f46c(0x4088000000000000,0x4088000000000000);
      func_0x000107c61170(lVar1);
      goto LAB_10194e63c;
    }
  }
  func_0x000107c61174();
LAB_10194e63c:
  puVar10 = param_1;
  func_0x000107c60bb4(0x3ff0000000000000);
  func_0x000107c61180();
  if (puVar10 == (undefined1 *)0x0) {
    FUN_101945d90();
    puVar8 = &UNK_1104176c8;
    func_0x000107c613f8(&UNK_1104176c8,puVar10,0,0);
    *puVar10 = 1;
    (*param_4)();
  }
  else {
    puVar2 = puVar10;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar10);
    func_0x000107c61428(param_2 + 0x10,auStack_98,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    puVar10 = (undefined1 *)0x0;
    if (lVar1 != 0) {
      puVar10 = *(undefined1 **)(lVar1 + _DAT_112dd7ab8);
      func_0x000107c61174();
      func_0x000107c61170(lVar1);
      puVar3 = puVar10;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar3 != (undefined1 *)0x0) {
        func_0x000107c61428(param_2 + 0x10,auStack_b0,0,0);
        lVar1 = param_2 + 0x10;
        func_0x000107c61618();
        if (lVar1 == 0) {
          func_0x00010006c090(puVar2,puVar9);
          func_0x000107c61170(param_1);
          func_0x000107c615e8(puVar3);
          return;
        }
        uVar4 = *(undefined8 *)(lVar1 + _DAT_112dd7ac8);
        func_0x000107c615f0();
        func_0x000107c61170(lVar1);
        func_0x000107c61428(param_2 + 0x10,auStack_c8,0,0);
        param_2 = param_2 + 0x10;
        func_0x000107c61618();
        if (param_2 != 0) {
          uVar11 = *(undefined8 *)(param_2 + _DAT_112dd7ac0);
          func_0x000107c61174();
          func_0x000107c61170(param_2);
          puVar10 = puVar2;
          func_0x000107c5ee20(puVar2,puVar9);
          puVar5 = puVar3;
          func_0x000107c5d724();
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          puVar10 = puVar5;
          func_0x000107c4da88(puVar5);
          func_0x000107c61180();
          puVar8 = &UNK_110417450;
          func_0x000107c613fc(&UNK_110417450,0x30,7);
          *(code **)(puVar8 + 0x10) = param_4;
          *(undefined8 *)(puVar8 + 0x18) = param_5;
          *(undefined8 *)(puVar8 + 0x20) = param_6;
          *(undefined8 *)(puVar8 + 0x28) = param_7;
          pcStack_d8 = FUN_10194f460;
          puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_f0 = 0x42000000;
          uStack_e8 = 0x10194accc;
          puStack_e0 = &UNK_110417468;
          ppuVar6 = &puStack_f8;
          puStack_d0 = puVar8;
          func_0x000107c60bc4(ppuVar6);
          puVar8 = puStack_d0;
          func_0x000107c6157c(param_5);
          func_0x000107c6157c(param_7);
          func_0x000107c61574(puVar8);
          puVar7 = puVar10;
          func_0x000107c5c320(puVar10);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar6);
          func_0x000107c61170(puVar10);
          func_0x000107c3e924(puVar7);
          func_0x00010006c090(puVar2,puVar9);
          func_0x000107c61170(param_1);
          func_0x000107c61170(puVar7);
          func_0x000107c615e8(puVar3);
          func_0x000107c615e8(uVar4);
          func_0x000107c61170(uVar11);
          func_0x000107c61170(puVar5);
          return;
        }
        func_0x00010006c090(puVar2,puVar9);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(puVar3);
        func_0x000107c615e8(uVar4);
        return;
      }
    }
    FUN_101945d90();
    puVar8 = &UNK_1104176c8;
    func_0x000107c613f8(&UNK_1104176c8,puVar10,0,0);
    *puVar10 = 0;
    (*param_4)();
    func_0x00010006c090(puVar2,puVar9);
  }
  func_0x000107c61170(param_1);
  func_0x000107c614ac(puVar8);
  return;
}



/* Entry: 10194e978; end: 10194e9a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10194e978(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined **ppuVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined1 auStack_110 [24];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar7 = *(undefined1 **)(unaff_x20 + 0x10);
  lVar11 = *(long *)(unaff_x20 + 0x18);
  bVar5 = *(byte *)(unaff_x20 + 0x20);
  pcVar1 = *(code **)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar16 = auStack_80;
  func_0x000107c61428(lVar11 + 0x10,puVar16,0,0);
  lVar6 = lVar11 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    return;
  }
  func_0x000107c61170();
  if ((bVar5 & 1) != 0) {
    puVar16 = auStack_110;
    func_0x000107c61428(lVar11 + 0x10,puVar16,0,0);
    lVar6 = lVar11 + 0x10;
    func_0x000107c61618();
    if (lVar6 != 0) {
      FUN_10194f46c(0x4088000000000000,0x4088000000000000);
      func_0x000107c61170(lVar6);
      goto LAB_10194e63c;
    }
  }
  func_0x000107c61174();
LAB_10194e63c:
  puVar17 = puVar7;
  func_0x000107c60bb4(0x3ff0000000000000);
  func_0x000107c61180();
  if (puVar17 == (undefined1 *)0x0) {
    FUN_101945d90();
    puVar15 = &UNK_1104176c8;
    func_0x000107c613f8(&UNK_1104176c8,puVar17,0,0);
    *puVar17 = 1;
    (*pcVar1)();
  }
  else {
    puVar8 = puVar17;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar17);
    func_0x000107c61428(lVar11 + 0x10,auStack_98,0,0);
    lVar6 = lVar11 + 0x10;
    func_0x000107c61618();
    puVar17 = (undefined1 *)0x0;
    if (lVar6 != 0) {
      puVar17 = *(undefined1 **)(lVar6 + _DAT_112dd7ab8);
      func_0x000107c61174();
      func_0x000107c61170(lVar6);
      puVar9 = puVar17;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar9 != (undefined1 *)0x0) {
        func_0x000107c61428(lVar11 + 0x10,auStack_b0,0,0);
        lVar6 = lVar11 + 0x10;
        func_0x000107c61618();
        if (lVar6 == 0) {
          func_0x00010006c090(puVar8,puVar16);
          func_0x000107c61170(puVar7);
          func_0x000107c615e8(puVar9);
          return;
        }
        uVar10 = *(undefined8 *)(lVar6 + _DAT_112dd7ac8);
        func_0x000107c615f0();
        func_0x000107c61170(lVar6);
        func_0x000107c61428(lVar11 + 0x10,auStack_c8,0,0);
        lVar11 = lVar11 + 0x10;
        func_0x000107c61618();
        if (lVar11 != 0) {
          uVar18 = *(undefined8 *)(lVar11 + _DAT_112dd7ac0);
          func_0x000107c61174();
          func_0x000107c61170(lVar11);
          puVar17 = puVar8;
          func_0x000107c5ee20(puVar8,puVar16);
          puVar12 = puVar9;
          func_0x000107c5d724();
          func_0x000107c61180();
          func_0x000107c61170(puVar17);
          puVar17 = puVar12;
          func_0x000107c4da88(puVar12);
          func_0x000107c61180();
          puVar15 = &UNK_110417450;
          func_0x000107c613fc(&UNK_110417450,0x30,7);
          *(code **)(puVar15 + 0x10) = pcVar1;
          *(undefined8 *)(puVar15 + 0x18) = uVar3;
          *(undefined8 *)(puVar15 + 0x20) = uVar2;
          *(undefined8 *)(puVar15 + 0x28) = uVar4;
          pcStack_d8 = FUN_10194f460;
          puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_f0 = 0x42000000;
          uStack_e8 = 0x10194accc;
          puStack_e0 = &UNK_110417468;
          ppuVar13 = &puStack_f8;
          puStack_d0 = puVar15;
          func_0x000107c60bc4(ppuVar13);
          puVar15 = puStack_d0;
          func_0x000107c6157c(uVar3);
          func_0x000107c6157c(uVar4);
          func_0x000107c61574(puVar15);
          puVar14 = puVar17;
          func_0x000107c5c320(puVar17);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar13);
          func_0x000107c61170(puVar17);
          func_0x000107c3e924(puVar14);
          func_0x00010006c090(puVar8,puVar16);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar14);
          func_0x000107c615e8(puVar9);
          func_0x000107c615e8(uVar10);
          func_0x000107c61170(uVar18);
          func_0x000107c61170(puVar12);
          return;
        }
        func_0x00010006c090(puVar8,puVar16);
        func_0x000107c61170(puVar7);
        func_0x000107c615e8(puVar9);
        func_0x000107c615e8(uVar10);
        return;
      }
    }
    FUN_101945d90();
    puVar15 = &UNK_1104176c8;
    func_0x000107c613f8(&UNK_1104176c8,puVar17,0,0);
    *puVar17 = 0;
    (*pcVar1)();
    func_0x00010006c090(puVar8,puVar16);
  }
  func_0x000107c61170(puVar7);
  func_0x000107c614ac(puVar15);
  return;
}



/* Entry: 10194e9a8; end: 10194ea8b;  */

void FUN_10194e9a8(void)

{
  long unaff_x20;
  
  func_0x00010194bd14(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10194ea8c; end: 10194ecbb;  */

void FUN_10194ea8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar3 = &UNK_110417518;
  func_0x000107c613fc(&UNK_110417518,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  puVar4 = &UNK_110417540;
  func_0x000107c613fc(&UNK_110417540,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10194f660;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x10194f75c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x10194f784;
  puStack_88 = &UNK_110417558;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110417590;
  func_0x000107c613fc(&UNK_110417590,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  puVar7 = &UNK_1104175b8;
  func_0x000107c613fc(&UNK_1104175b8,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_10194f66c;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_80 = 0x10194f760;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_1104175d0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x5d,0x129,0x19,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10194ecb8);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x5d,0x12f,0x25,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10194ecbc);
  (*pcVar2)();
}



/* Entry: 10194ecbc; end: 10194ed43;  */

void FUN_10194ecbc(undefined1 *param_1,code *param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  
  if (param_1 != (undefined1 *)0x0) {
    func_0x000107c61174();
    (*param_4)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  FUN_101945d90();
  puVar1 = &UNK_1104176c8;
  func_0x000107c613f8(&UNK_1104176c8,param_1,0,0);
  *param_1 = 2;
  (*param_2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 10194ed44; end: 10194ef73;  */

void FUN_10194ed44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar3 = &UNK_110417310;
  func_0x000107c613fc(&UNK_110417310,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  puVar4 = &UNK_110417338;
  func_0x000107c613fc(&UNK_110417338,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x10194f418;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10194f424;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x10194f784;
  puStack_88 = &UNK_110417350;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110417388;
  func_0x000107c613fc(&UNK_110417388,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  puVar7 = &UNK_1104173b0;
  func_0x000107c613fc(&UNK_1104173b0,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_10194f444;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = (code *)0x10194f754;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_1104173c8;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x5d,0x147,0x15,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10194ef70);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x5d,0x14d,0x21,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10194ef74);
  (*pcVar2)();
}



/* Entry: 10194ef74; end: 10194f08b;  */

void FUN_10194ef74(undefined1 *param_1,code *param_2,undefined8 param_3,code *param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  if (param_1 != (undefined1 *)0x0) {
    puVar1 = param_1;
    func_0x000107c61174();
    (*param_4)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  FUN_101945d90();
  puVar2 = &UNK_1104176c8;
  func_0x000107c613f8(&UNK_1104176c8,param_1,0,0);
  *param_1 = 3;
  (*param_2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 10194f08c; end: 10194f14f;  */

/* WARNING: Possible PIC construction at 0x00010194f100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010194f104) */
/* WARNING: Removing unreachable block (ram,0x00010194f108) */

void FUN_10194f08c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  code *param_5)

{
  undefined *puVar1;
  
  if ((param_3 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c5ee20(param_1,param_2);
    func_0x000107c51770(puVar1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  (*param_5)(4);
  return;
}



/* Entry: 10194f150; end: 10194f28f;  */

/* WARNING: Possible PIC construction at 0x00010194f250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010194f254) */

void FUN_10194f150(long param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 uStack_49;
  long lStack_48;
  
  if (param_1 != 0) {
    lVar4 = param_1;
    func_0x000107c61174();
    (*param_3)(param_1,0,param_5);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  if (param_2 != 0) {
    lStack_48 = param_2;
    func_0x000107c614b0(param_2);
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar2 = &uStack_49;
    func_0x000107c6147c(puVar2,&lStack_48,uVar1,&UNK_1104176c8,6);
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010194f788(uStack_49);
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      lVar4 = -0x2fffffffffffffe0;
      func_0x000107c5fadc(0xd000000000000020,0x800000010efc1940);
      func_0x000107c466bc(puVar3);
      goto code_r0x000107c61170;
    }
  }
  func_0x000107c614b0(param_2);
  (*param_3)(0,param_2,param_5);
  func_0x000107c614ac(param_2);
  return;
}



/* Entry: 10194f290; end: 10194f293;  */

/* WARNING: Possible PIC construction at 0x00010194f250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010194f254) */

void FUN_10194f290(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 uStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  if (lVar1 != 0) {
    lVar6 = lVar1;
    func_0x000107c61174();
    (*pcVar2)(lVar1,0,uVar7);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  if (lVar6 != 0) {
    lStack_48 = lVar6;
    func_0x000107c614b0(lVar6,lVar6,pcVar2,*(undefined8 *)(unaff_x20 + 0x28));
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = &uStack_49;
    func_0x000107c6147c(puVar4,&lStack_48,uVar3,&UNK_1104176c8,6);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x00010194f788(uStack_49);
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      lVar6 = -0x2fffffffffffffe0;
      func_0x000107c5fadc(0xd000000000000020,0x800000010efc1940);
      func_0x000107c466bc(puVar5);
      goto code_r0x000107c61170;
    }
  }
  func_0x000107c614b0(lVar6);
  (*pcVar2)(0,lVar6,uVar7);
  func_0x000107c614ac(lVar6);
  return;
}



/* Entry: 10194f294; end: 10194f337;  */

void FUN_10194f294(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar5 = uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff);
  lVar2 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 7;
  uVar6 = lVar2 + uVar5 & 0xfffffffffffffff8;
  lVar7 = uVar6 + 8;
  uVar4 = uVar3 + lVar7 + 8 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = lVar2 + uVar4 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar3 + 8);
  FUN_10194d9b0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + uVar5,
                *(undefined8 *)(unaff_x20 + uVar6),*(undefined8 *)(unaff_x20 + lVar7),
                unaff_x20 + uVar4,*(undefined8 *)(unaff_x20 + uVar3),*puVar1,puVar1[1]);
  return;
}



/* Entry: 10194f338; end: 10194f367;  */

void FUN_10194f338(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10194de2c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 10194f368; end: 10194f373;  */

/* WARNING: Possible PIC construction at 0x00010194f100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010194f104) */
/* WARNING: Removing unreachable block (ram,0x00010194f108) */

void FUN_10194f368(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  if ((param_3 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c5ee20(param_1,param_2);
    func_0x000107c51770(puVar1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  (**(code **)(unaff_x20 + 0x10))(4);
  return;
}



/* Entry: 10194f374; end: 10194f3cf;  */

void FUN_10194f374(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_10194c6ec(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),
                unaff_x20 + (uVar2 + 0x48 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 10194f3d0; end: 10194f40b;  */

void FUN_10194f3d0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10194c938(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 10194f40c; end: 10194f423;  */

void FUN_10194f40c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar9 = &puStack_a0;
  ppuVar12 = &puStack_a0;
  puVar7 = &UNK_110417310;
  func_0x000107c613fc(&UNK_110417310,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar2;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  puVar8 = &UNK_110417338;
  func_0x000107c613fc(&UNK_110417338,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x10194f418;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10194f424;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x10194f784;
  puStack_88 = &UNK_110417350;
  puStack_78 = puVar8;
  func_0x000107c60bc4(&puStack_a0);
  puVar10 = puStack_78;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_110417388;
  func_0x000107c613fc(&UNK_110417388,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar1;
  *(undefined8 *)(puVar10 + 0x18) = uVar3;
  puVar11 = &UNK_1104173b0;
  func_0x000107c613fc(&UNK_1104173b0,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_10194f444;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_80 = (code *)0x10194f754;
  puStack_a0 = puVar5;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_1104173c8;
  puStack_78 = puVar11;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar5);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puVar7);
  puVar7 = puVar8;
  func_0x000107c61544(puVar8,"",0x5d,0x147,0x15,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10194ef70);
    (*pcVar6)();
  }
  puVar7 = puVar11;
  func_0x000107c61544(puVar11,"",0x5d,0x14d,0x21,1);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar7 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10194ef74);
  (*pcVar6)();
}



/* Entry: 10194f424; end: 10194f443;  */

void FUN_10194f424(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10194f444; end: 10194f45f;  */

void FUN_10194f444(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010194f010(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),3)
  ;
  return;
}



/* Entry: 10194f460; end: 10194f46b;  */

void FUN_10194f460(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar9 = &puStack_a0;
  ppuVar12 = &puStack_a0;
  puVar7 = &UNK_110417518;
  func_0x000107c613fc(&UNK_110417518,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar2;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  puVar8 = &UNK_110417540;
  func_0x000107c613fc(&UNK_110417540,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_10194f660;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x10194f75c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x10194f784;
  puStack_88 = &UNK_110417558;
  puStack_78 = puVar8;
  func_0x000107c60bc4(&puStack_a0);
  puVar10 = puStack_78;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_110417590;
  func_0x000107c613fc(&UNK_110417590,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar1;
  *(undefined8 *)(puVar10 + 0x18) = uVar3;
  puVar11 = &UNK_1104175b8;
  func_0x000107c613fc(&UNK_1104175b8,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_10194f66c;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  uStack_80 = 0x10194f760;
  puStack_a0 = puVar5;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_1104175d0;
  puStack_78 = puVar11;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar5);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puVar7);
  puVar7 = puVar8;
  func_0x000107c61544(puVar8,"",0x5d,0x129,0x19,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10194ecb8);
    (*pcVar6)();
  }
  puVar7 = puVar11;
  func_0x000107c61544(puVar11,"",0x5d,0x12f,0x25,1);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar7 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10194ecbc);
  (*pcVar6)();
}



/* Entry: 10194f46c; end: 10194f61f;  */

/* WARNING: Possible PIC construction at 0x00010194f568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010194f56c) */
/* WARNING: Removing unreachable block (ram,0x00010194f61c) */
/* WARNING: Removing unreachable block (ram,0x00010194f5dc) */

void FUN_10194f46c(double param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  dVar4 = param_1;
  dVar5 = param_2;
  func_0x000107c5b078();
  bVar1 = true;
  if ((dVar4 <= param_1) && (bVar1 = false, !NAN(param_2) && !NAN(dVar5))) {
    bVar1 = param_2 < dVar5;
  }
  if (bVar1) {
    dVar6 = param_2 / dVar5;
    if (param_1 / dVar4 <= param_2 / dVar5) {
      dVar6 = param_1 / dVar4;
    }
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x000107c486f8(dVar4 * dVar6,dVar5 * dVar6);
    puVar2 = &UNK_1104174a0;
    func_0x000107c613fc(&UNK_1104174a0,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = param_3;
    *(double *)(puVar2 + 0x18) = dVar4 * dVar6;
    *(double *)(puVar2 + 0x20) = dVar5 * dVar6;
    puVar3 = &UNK_1104174c8;
    func_0x000107c613fc(&UNK_1104174c8,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_10194f620;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    uStack_60 = 0x10194f758;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100f9148c;
    puStack_68 = &UNK_1104174e0;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10194f620; end: 10194f633;  */

void FUN_10194f620(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x10),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10194f634; end: 10194f65f;  */

void FUN_10194f634(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10194f660; end: 10194f66b;  */

void FUN_10194f660(undefined1 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  if (param_1 != (undefined1 *)0x0) {
    func_0x000107c61174();
    (*pcVar2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  FUN_101945d90(0,pcVar1,*(undefined8 *)(unaff_x20 + 0x18),pcVar2,*(undefined8 *)(unaff_x20 + 0x28))
  ;
  puVar3 = &UNK_1104176c8;
  func_0x000107c613f8(&UNK_1104176c8,param_1,0,0);
  *param_1 = 2;
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar3);
  return;
}



/* Entry: 10194f66c; end: 10194f6c3;  */

void FUN_10194f66c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010194f010(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),2)
  ;
  return;
}



/* Entry: 10194f6c4; end: 10194f903;  */

/* WARNING: Possible PIC construction at 0x00010194f250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010194f254) */

void FUN_10194f6c4(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 uStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  if (lVar1 != 0) {
    lVar6 = lVar1;
    func_0x000107c61174();
    (*pcVar2)(lVar1,0,uVar7);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  if (lVar6 != 0) {
    lStack_48 = lVar6;
    func_0x000107c614b0(lVar6,lVar6,pcVar2,*(undefined8 *)(unaff_x20 + 0x28));
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = &uStack_49;
    func_0x000107c6147c(puVar4,&lStack_48,uVar3,&UNK_1104176c8,6);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x00010194f788(uStack_49);
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      lVar6 = -0x2fffffffffffffe0;
      func_0x000107c5fadc(0xd000000000000020,0x800000010efc1940);
      func_0x000107c466bc(puVar5);
      goto code_r0x000107c61170;
    }
  }
  func_0x000107c614b0(lVar6);
  (*pcVar2)(0,lVar6,uVar7);
  func_0x000107c614ac(lVar6);
  return;
}



/* Entry: 10194f904; end: 10194f943;  */

void FUN_10194f904(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd7b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d99ab5c;
  func_0x000107c61520(&UNK_10d99ab5c,&UNK_1104176c8);
  puRam0000000112dd7b18 = puVar1;
  return;
}



/* Entry: 10194f944; end: 10194f957;  */

bool FUN_10194f944(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10194f958; end: 10194fa03;  */

void FUN_10194f958(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10194fa04; end: 10194fa13;  */

void FUN_10194fa04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10194fa14; end: 10194faaf;  */

void FUN_10194fa14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 10194fab0; end: 10194fce7;  */

undefined * FUN_10194fab0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  ppuVar8 = &puStack_80;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  func_0x000107c6162c();
  func_0x000107c61628();
  func_0x000107c61574();
  puVar3 = &UNK_110417748;
  func_0x000107c613fc(&UNK_110417748,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_10194ffc8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x1019505cc;
  puStack_68 = &UNK_110417760;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  func_0x000107c6162c();
  func_0x000107c61628();
  func_0x000107c61574();
  puVar3 = &UNK_110417798;
  func_0x000107c613fc(&UNK_110417798,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  pcStack_60 = FUN_101950244;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  uStack_70 = 0x1019505c8;
  puStack_68 = &UNK_1104177b0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  func_0x000107c6162c();
  func_0x000107c61628();
  func_0x000107c61574();
  puVar3 = &UNK_1104177e8;
  func_0x000107c613fc(&UNK_1104177e8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  pcStack_60 = FUN_10195044c;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  uStack_70 = 0x1019505d0;
  puStack_68 = &UNK_110417800;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  puVar3 = PTR_PTR_1126a7eb8;
  func_0x000107c610f8(PTR_PTR_1126a7eb8);
  func_0x000107c46e14();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar7);
  return puVar3;
}



/* Entry: 10194fce8; end: 10194ffc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10194fce8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long *plVar12;
  long lStack_70;
  long lStack_68;
  
  plVar12 = &lStack_70;
  puVar2 = PTR_PTR_1126a7ea0;
  func_0x000107c610f8(PTR_PTR_1126a7ea0);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126a7ea8;
  func_0x000107c610f8();
  func_0x000107c477dc();
  func_0x000107c61170(puVar2);
  func_0x000107c6162c(param_1);
  lVar4 = *(long *)(*(long *)(param_1 + 0x18) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c61170(puVar3);
    func_0x000107c61574(param_1);
    plVar12 = (long *)0x0;
  }
  else {
    func_0x000107c61574(param_1);
    uVar5 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010efc1ac0);
    lVar6 = lVar4;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c6162c(param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(param_1);
    uVar5 = uVar7;
    func_0x000107c43d30();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c6162c(param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c61174();
    func_0x000107c61574(param_1);
    uVar7 = uVar8;
    func_0x000107c40430();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c6162c(param_1);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174();
    func_0x000107c61574(param_1);
    uVar8 = uVar9;
    func_0x000107c4cf4c();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c610f8(PTR_PTR_1126ae810);
    func_0x000107c453e4();
    lVar10 = 0;
    FUN_10194adf0();
    lVar4 = lVar10;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar4 + _DAT_112dd7ae8);
    puVar1[1] = 0x4088000000000000;
    *puVar1 = 0x4088000000000000;
    *(undefined8 *)(lVar4 + _DAT_112dd7ab8) = uVar5;
    *(undefined8 *)(lVar4 + _DAT_112dd7ad0) = uVar7;
    *(undefined8 *)(lVar4 + _DAT_112dd7ad8) = uVar8;
    *(undefined **)(lVar4 + _DAT_112dd7ae0) = puVar3;
    *(long *)(lVar4 + _DAT_112dd7ac8) = lVar6;
    puVar11 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar8);
    func_0x000107c61174(puVar3);
    func_0x000107c615f0(lVar6);
    func_0x000107c453e4();
    *(undefined **)(lVar4 + _DAT_112dd7ac0) = puVar11;
    lStack_70 = lVar4;
    lStack_68 = lVar10;
    func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)plVar12;
}



/* Entry: 10194ffc8; end: 10194ffeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10194ffc8(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar11 = *(long *)(unaff_x20 + 0x10);
  plVar12 = &lStack_70;
  puVar2 = PTR_PTR_1126a7ea0;
  func_0x000107c610f8(PTR_PTR_1126a7ea0);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126a7ea8;
  func_0x000107c610f8();
  func_0x000107c477dc();
  func_0x000107c61170(puVar2);
  func_0x000107c6162c(lVar11);
  lVar4 = *(long *)(*(long *)(lVar11 + 0x18) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c61170(puVar3);
    func_0x000107c61574(lVar11);
    plVar12 = (long *)0x0;
  }
  else {
    func_0x000107c61574(lVar11);
    uVar5 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010efc1ac0);
    lVar6 = lVar4;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c6162c(lVar11);
    uVar7 = *(undefined8 *)(lVar11 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar11);
    uVar5 = uVar7;
    func_0x000107c43d30();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c6162c(lVar11);
    uVar8 = *(undefined8 *)(lVar11 + 0x28);
    func_0x000107c61174();
    func_0x000107c61574(lVar11);
    uVar7 = uVar8;
    func_0x000107c40430();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c6162c(lVar11);
    uVar9 = *(undefined8 *)(lVar11 + 0x20);
    func_0x000107c61174();
    func_0x000107c61574(lVar11);
    uVar8 = uVar9;
    func_0x000107c4cf4c();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c610f8(PTR_PTR_1126ae810);
    func_0x000107c453e4();
    lVar11 = 0;
    FUN_10194adf0();
    lVar4 = lVar11;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar4 + _DAT_112dd7ae8);
    puVar1[1] = 0x4088000000000000;
    *puVar1 = 0x4088000000000000;
    *(undefined8 *)(lVar4 + _DAT_112dd7ab8) = uVar5;
    *(undefined8 *)(lVar4 + _DAT_112dd7ad0) = uVar7;
    *(undefined8 *)(lVar4 + _DAT_112dd7ad8) = uVar8;
    *(undefined **)(lVar4 + _DAT_112dd7ae0) = puVar3;
    *(long *)(lVar4 + _DAT_112dd7ac8) = lVar6;
    puVar10 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar8);
    func_0x000107c61174(puVar3);
    func_0x000107c615f0(lVar6);
    func_0x000107c453e4();
    *(undefined **)(lVar4 + _DAT_112dd7ac0) = puVar10;
    lStack_70 = lVar4;
    lStack_68 = lVar11;
    func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)plVar12;
}



/* Entry: 10194ffec; end: 101950243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10194ffec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  long lStack_60;
  long lStack_58;
  
  plVar10 = &lStack_60;
  puVar1 = PTR_PTR_1126a7ea0;
  func_0x000107c610f8(PTR_PTR_1126a7ea0);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126a7ea8;
  func_0x000107c610f8();
  func_0x000107c477dc();
  func_0x000107c61170(puVar1);
  func_0x000107c6162c(param_1);
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61170(puVar2);
    func_0x000107c61574(param_1);
    plVar10 = (long *)0x0;
  }
  else {
    func_0x000107c61574(param_1);
    uVar4 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010efc1a80);
    lVar5 = lVar3;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c6162c(param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(param_1);
    uVar4 = uVar6;
    func_0x000107c43d30();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c6162c(param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174();
    func_0x000107c61574(param_1);
    uVar6 = uVar7;
    func_0x000107c4cf48();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c610f8(PTR_PTR_1126ae810);
    func_0x000107c453e4();
    lVar8 = 0;
    FUN_1019461a4();
    lVar3 = lVar8;
    func_0x000107c610f8();
    *(undefined8 *)(lVar3 + _DAT_112dd7978) = uVar4;
    *(undefined8 *)(lVar3 + _DAT_112dd7990) = uVar6;
    *(long *)(lVar3 + _DAT_112dd7988) = lVar5;
    puVar9 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar6);
    func_0x000107c615f0(lVar5);
    func_0x000107c453e4();
    *(undefined **)(lVar3 + _DAT_112dd7980) = puVar9;
    *(undefined **)(lVar3 + _DAT_112dd7998) = puVar2;
    lStack_60 = lVar3;
    lStack_58 = lVar8;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar1);
  }
  return (undefined1 *)plVar10;
}



/* Entry: 101950244; end: 10195024b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101950244(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  plVar10 = &lStack_60;
  puVar1 = PTR_PTR_1126a7ea0;
  func_0x000107c610f8(PTR_PTR_1126a7ea0);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126a7ea8;
  func_0x000107c610f8();
  func_0x000107c477dc();
  func_0x000107c61170(puVar1);
  func_0x000107c6162c(lVar9);
  lVar3 = *(long *)(*(long *)(lVar9 + 0x18) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61170(puVar2);
    func_0x000107c61574(lVar9);
    plVar10 = (long *)0x0;
  }
  else {
    func_0x000107c61574(lVar9);
    uVar4 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010efc1a80);
    lVar5 = lVar3;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c6162c(lVar9);
    uVar6 = *(undefined8 *)(lVar9 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar9);
    uVar4 = uVar6;
    func_0x000107c43d30();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c6162c(lVar9);
    uVar7 = *(undefined8 *)(lVar9 + 0x20);
    func_0x000107c61174();
    func_0x000107c61574(lVar9);
    uVar6 = uVar7;
    func_0x000107c4cf48();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c610f8(PTR_PTR_1126ae810);
    func_0x000107c453e4();
    lVar9 = 0;
    FUN_1019461a4();
    lVar3 = lVar9;
    func_0x000107c610f8();
    *(undefined8 *)(lVar3 + _DAT_112dd7978) = uVar4;
    *(undefined8 *)(lVar3 + _DAT_112dd7990) = uVar6;
    *(long *)(lVar3 + _DAT_112dd7988) = lVar5;
    puVar8 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar6);
    func_0x000107c615f0(lVar5);
    func_0x000107c453e4();
    *(undefined **)(lVar3 + _DAT_112dd7980) = puVar8;
    *(undefined **)(lVar3 + _DAT_112dd7998) = puVar2;
    lStack_60 = lVar3;
    lStack_58 = lVar9;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar1);
  }
  return (undefined1 *)plVar10;
}



/* Entry: 10195024c; end: 10195044b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10195024c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long lStack_60;
  long lStack_58;
  
  plVar9 = &lStack_60;
  puVar1 = PTR_PTR_1126a7ea0;
  func_0x000107c610f8(PTR_PTR_1126a7ea0);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126a7ea8;
  func_0x000107c610f8();
  func_0x000107c477dc();
  func_0x000107c61170(puVar1);
  func_0x000107c6162c(param_1);
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61170(puVar2);
    func_0x000107c61574(param_1);
    plVar9 = (long *)0x0;
  }
  else {
    func_0x000107c61574(param_1);
    uVar4 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010efc1a50);
    lVar5 = lVar3;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c6162c(param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174();
    func_0x000107c61574(param_1);
    uVar4 = uVar6;
    func_0x000107c4cf48();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c610f8(PTR_PTR_1126ae810);
    func_0x000107c453e4();
    lVar7 = 0;
    FUN_101943ed4();
    lVar3 = lVar7;
    func_0x000107c610f8();
    *(undefined8 *)(lVar3 + _DAT_112dd7928) = uVar4;
    *(long *)(lVar3 + _DAT_112dd7920) = lVar5;
    puVar8 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c61174(uVar4);
    func_0x000107c615f0(lVar5);
    func_0x000107c453e4();
    *(undefined **)(lVar3 + _DAT_112dd7918) = puVar8;
    *(undefined **)(lVar3 + _DAT_112dd7930) = puVar2;
    lStack_60 = lVar3;
    lStack_58 = lVar7;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar1);
  }
  return (undefined1 *)plVar9;
}



/* Entry: 10195044c; end: 101950453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10195044c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  plVar9 = &lStack_60;
  puVar1 = PTR_PTR_1126a7ea0;
  func_0x000107c610f8(PTR_PTR_1126a7ea0);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126a7ea8;
  func_0x000107c610f8();
  func_0x000107c477dc();
  func_0x000107c61170(puVar1);
  func_0x000107c6162c(lVar8);
  lVar3 = *(long *)(*(long *)(lVar8 + 0x18) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61170(puVar2);
    func_0x000107c61574(lVar8);
    plVar9 = (long *)0x0;
  }
  else {
    func_0x000107c61574(lVar8);
    uVar4 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010efc1a50);
    lVar5 = lVar3;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c6162c(lVar8);
    uVar6 = *(undefined8 *)(lVar8 + 0x20);
    func_0x000107c61174();
    func_0x000107c61574(lVar8);
    uVar4 = uVar6;
    func_0x000107c4cf48();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c610f8(PTR_PTR_1126ae810);
    func_0x000107c453e4();
    lVar8 = 0;
    FUN_101943ed4();
    lVar3 = lVar8;
    func_0x000107c610f8();
    *(undefined8 *)(lVar3 + _DAT_112dd7928) = uVar4;
    *(long *)(lVar3 + _DAT_112dd7920) = lVar5;
    puVar7 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c61174(uVar4);
    func_0x000107c615f0(lVar5);
    func_0x000107c453e4();
    *(undefined **)(lVar3 + _DAT_112dd7918) = puVar7;
    *(undefined **)(lVar3 + _DAT_112dd7930) = puVar2;
    lStack_60 = lVar3;
    lStack_58 = lVar8;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar1);
  }
  return (undefined1 *)plVar9;
}



/* Entry: 101950454; end: 10195048b;  */

void FUN_101950454(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10195048c; end: 1019504b7;  */

/* WARNING: Possible PIC construction at 0x000101950498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019504a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010195049c) */
/* WARNING: Removing unreachable block (ram,0x0001019504ac) */

void FUN_10195048c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019504b8; end: 101950513;  */

void FUN_1019504b8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101950514; end: 101950593;  */

void FUN_101950514(undefined8 param_1)

{
  if (lRam0000000112dd7b48 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e65ae78);
  return;
}



/* Entry: 101950594; end: 1019505b7;  */

void FUN_101950594(undefined8 *param_1,undefined8 param_2)

{
  FUN_10194fab0();
  *param_1 = param_2;
  return;
}



/* Entry: 1019505b8; end: 1019505d3;  */

void FUN_1019505b8(long param_1,long param_2)

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



/* Entry: 1019505d4; end: 101950627;  */

undefined8 FUN_1019505d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001006bf48c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101950628; end: 101950663;  */

void FUN_101950628(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101950664; end: 1019506a7;  */

undefined1  [16] FUN_101950664(void)

{
  return ZEXT816(0x110417960);
}



/* Entry: 1019506a8; end: 1019506fb;  */

void FUN_1019506a8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019506fc; end: 10195076b;  */

undefined8 FUN_1019506fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001006cc9ec(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 10195076c; end: 1019507af;  */

void FUN_10195076c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019507b0; end: 1019507ff;  */

undefined8 FUN_1019507b0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101950800; end: 101950843;  */

undefined1  [16] FUN_101950800(void)

{
  return ZEXT816(0x110417a28);
}



/* Entry: 101950844; end: 10195086b;  */

void FUN_101950844(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10195086c; end: 101950873;  */

undefined8 FUN_10195086c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101950874; end: 101950ec7;  */

long FUN_101950874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a7ec8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efc1b10);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2ee60);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ae00);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85500);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_9);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef38480);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar4 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0x7365636976726573;
  func_0x000107c5fadc(0x7365636976726573,0xef7265736f707845);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_11);
    *(undefined **)(unaff_x20 + 0x70) = puVar2;
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
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101950ec8);
  (*pcVar1)();
}



/* Entry: 101950ec8; end: 101950f63;  */

void FUN_101950ec8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 101950f64; end: 101950fb3;  */

undefined8 FUN_101950f64(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101950fb4; end: 101950fff;  */

undefined1  [16] FUN_101950fb4(void)

{
  return ZEXT816(0x110417af0);
}



/* Entry: 101951000; end: 10195147f;  */

long FUN_101951000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_6;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  puVar4 = PTR_PTR_1126a7ed0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar4);
  uVar5 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar4);
  uVar5 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar4);
  uVar5 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar4);
  uVar5 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar4);
  uVar5 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(puVar4);
  func_0x000107c61174();
  uVar5 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010efc1b30);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(puVar4);
  func_0x000107c61174();
  uVar5 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc1b60);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(puVar4);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10195147c);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x50) = puVar2;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(param_6);
    *(undefined **)(unaff_x20 + 0x58) = puVar3;
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101951480);
  (*pcVar1)();
}



/* Entry: 101951480; end: 101951503;  */

void FUN_101951480(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 101951504; end: 101951553;  */

undefined8 FUN_101951504(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101951554; end: 1019515a7;  */

undefined1  [16] FUN_101951554(void)

{
  return ZEXT816(0x110417bb8);
}



/* Entry: 1019515a8; end: 1019515cf;  */

void FUN_1019515a8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019515d0; end: 1019515d7;  */

undefined8 FUN_1019515d0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1019515d8; end: 101951613;  */

undefined8 FUN_1019515d8(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001006d52f4(param_1);
  return unaff_x20;
}



/* Entry: 101951614; end: 10195163f;  */

void FUN_101951614(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101951640; end: 10195168f;  */

undefined8 FUN_101951640(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101951690; end: 1019516d3;  */

undefined1  [16] FUN_101951690(void)

{
  return ZEXT816(0x110417c78);
}



/* Entry: 1019516d4; end: 1019516fb;  */

void FUN_1019516d4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019516fc; end: 101951703;  */

undefined8 FUN_1019516fc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101951704; end: 101951c77;  */

void FUN_101951704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  puVar1 = PTR_PTR_1126a7ee0;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef855a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc1b80);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ae00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
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
  *(undefined **)(unaff_x20 + 0x60) = puVar3;
  return;
}



/* Entry: 101951c78; end: 101951d03;  */

void FUN_101951c78(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}


