/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100112190; end: 100112287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100112190(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_48;
  
  if (*(char *)(param_2 + _DAT_11307ce50) == '\x01') {
    FUN_100083b20(&lStack_48);
    uVar2 = *(undefined8 *)(lStack_48 + _DAT_113097748);
    func_0x000107c615f0(uVar2);
    func_0x000107c61170(lStack_48);
    func_0x000107c5bb50(uVar2);
    func_0x000107c615e8(uVar2);
    FUN_1000b9aa4();
    uVar1 = 0;
    func_0x00010305243c(0);
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c57f18(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 100112288; end: 1001122bb;  */

void FUN_100112288(void)

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



/* Entry: 1001122bc; end: 1001122c7;  */

undefined ** FUN_1001122bc(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1001122c8; end: 100112353;  */

void FUN_1001122c8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100112354,param_1);
  return;
}



/* Entry: 100112354; end: 10011235b;  */

void FUN_100112354(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_78 [48];
  undefined8 *puStack_48;
  
  FUN_100083b20(&puStack_48);
  func_0x00010018cc1c();
  func_0x000107c613fc();
  *(undefined8 **)(unaff_x20 + 0x10) = puStack_48;
  puVar1 = puStack_48;
  func_0x000107c615f0();
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000024;
  FUN_1000a9a18(0xd000000000000024,0x800000010effc560);
  func_0x000107c61170(uVar2);
  func_0x000107c3e85c(puStack_48);
  func_0x000107c61428(puVar1,auStack_78,0,0);
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  FUN_1000aa0a8(uVar3);
  func_0x000107c615e8(puStack_48);
  func_0x000107c61170(uVar2);
  *param_1 = unaff_x20;
  param_1[1] = (long)&PTR_DAT_110445348;
  return;
}



/* Entry: 10011235c; end: 100112457;  */

void FUN_10011235c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [48];
  undefined8 *puStack_48;
  
  FUN_100083b20(&puStack_48);
  func_0x00010018cc1c();
  func_0x000107c613fc();
  *(undefined8 **)(param_2 + 0x10) = puStack_48;
  puVar1 = puStack_48;
  func_0x000107c615f0();
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000024;
  FUN_1000a9a18(0xd000000000000024,0x800000010effc560);
  func_0x000107c61170(uVar2);
  func_0x000107c3e85c(puStack_48);
  func_0x000107c61428(puVar1,auStack_78,0,0);
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  FUN_1000aa0a8(uVar3);
  func_0x000107c615e8(puStack_48);
  func_0x000107c61170(uVar2);
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_110445348;
  return;
}



/* Entry: 100112458; end: 100112c57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100112458(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 auStack_278 [3];
  undefined1 auStack_260 [24];
  long alStack_248 [3];
  undefined1 auStack_230 [24];
  long alStack_218 [3];
  undefined1 auStack_200 [24];
  undefined8 auStack_1e8 [3];
  undefined1 auStack_1d0 [24];
  undefined8 auStack_1b8 [3];
  undefined8 auStack_1a0 [3];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined8 auStack_158 [3];
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [3];
  undefined1 auStack_f8 [24];
  undefined8 auStack_e0 [3];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  long alStack_98 [7];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *param_2;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000002f;
  FUN_1000a9a18(0xd00000000000002f,0x800000010effc590);
  func_0x000107c61170(uVar2);
  FUN_100083b20(alStack_98);
  cVar1 = *(char *)(alStack_98[0] + _DAT_11307ce50);
  func_0x000107c61170();
  func_0x000107c61428(param_2,alStack_98,0,0);
  uVar2 = *param_2;
  func_0x000107c61174(uVar2);
  FUN_1000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = 0;
  if (cVar1 == '\x03') {
    func_0x0001000ad7c4();
  }
  func_0x000107c61428(param_2,auStack_b0,0,0);
  uVar3 = *param_2;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000002d;
  FUN_1000a9a18(0xd00000000000002d,0x800000010effc5c0);
  func_0x000107c61170(uVar3);
  FUN_100083b20(auStack_e0);
  func_0x000107c61428(param_2,auStack_c8,0,0);
  uVar3 = *param_2;
  func_0x000107c61174(uVar3);
  FUN_1000aa0a8(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61428(param_2,auStack_e0,0,0);
  uVar3 = *param_2;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000002c;
  FUN_1000a9a18(0xd00000000000002c,0x800000010effc5f0);
  func_0x000107c61170(uVar3);
  FUN_100083b20(auStack_110);
  func_0x000107c61428(param_2,auStack_f8,0,0);
  uVar3 = *param_2;
  func_0x000107c61174(uVar3);
  FUN_1000aa0a8(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61428(param_2,auStack_110,0,0);
  uVar3 = *param_2;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000002f;
  FUN_1000a9a18(0xd00000000000002f,0x800000010effc620);
  func_0x000107c61170(uVar3);
  FUN_100083b20(auStack_140);
  func_0x000107c61428(param_2,auStack_128,0,0);
  uVar3 = *param_2;
  func_0x000107c61174(uVar3);
  FUN_1000aa0a8(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61428(param_2,auStack_140,0,0);
  uVar3 = *param_2;
  func_0x000107c61174(uVar3);
  uVar5 = 0xd000000000000022;
  FUN_1000a9a18(0xd000000000000022,0x800000010effc650);
  func_0x000107c61170(uVar3);
  FUN_100083b20(auStack_158);
  uVar4 = auStack_158[0];
  func_0x000107c4acf4();
  func_0x000107c61180();
  func_0x000107c61170(auStack_158[0]);
  func_0x000107c61428(param_2,auStack_158,0,0);
  uVar3 = *param_2;
  func_0x000107c61174(uVar3);
  FUN_1000aa0a8(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61428(param_2,auStack_170,0,0);
  uVar3 = *param_2;
  func_0x000107c61174(uVar3);
  uVar5 = 0xd00000000000002b;
  FUN_1000a9a18(0xd00000000000002b,0x800000010effc680);
  func_0x000107c61170(uVar3);
  FUN_100083b20(auStack_1a0);
  func_0x000107c61428(param_2,auStack_188,0,0);
  uVar3 = *param_2;
  func_0x000107c61174(uVar3);
  FUN_1000aa0a8(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61428(param_2,auStack_1a0,0,0);
  uVar3 = *param_2;
  func_0x000107c61174(uVar3);
  uVar6 = 0xd000000000000027;
  FUN_1000a9a18(0xd000000000000027,0x800000010effc6b0);
  func_0x000107c61170(uVar3);
  FUN_100083b20(auStack_1b8);
  uVar5 = auStack_1b8[0];
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(auStack_1b8[0]);
  func_0x000107c61428(param_2,auStack_1b8,0,0);
  uVar3 = *param_2;
  func_0x000107c61174(uVar3);
  FUN_1000aa0a8(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61428(param_2,auStack_1d0,0,0);
  uVar3 = *param_2;
  func_0x000107c61174(uVar3);
  uVar7 = 0xd00000000000002e;
  FUN_1000a9a18(0xd00000000000002e,0x800000010effc6e0);
  func_0x000107c61170(uVar3);
  FUN_100083b20(auStack_1e8);
  uVar6 = auStack_1e8[0];
  func_0x000107c5dabc();
  func_0x000107c61180();
  func_0x000107c61170(auStack_1e8[0]);
  func_0x000107c61428(param_2,auStack_1e8,0,0);
  uVar3 = *param_2;
  func_0x000107c61174(uVar3);
  FUN_1000aa0a8(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61428(param_2,auStack_200,0,0);
  uVar7 = *param_2;
  func_0x000107c61174(uVar7);
  uVar3 = 0xd000000000000036;
  FUN_1000a9a18(0xd000000000000036,0x800000010effc710);
  func_0x000107c61170(uVar7);
  FUN_100083b20(alStack_218);
  uVar8 = *(undefined8 *)(alStack_218[0] + _DAT_1130837d0);
  func_0x000107c61174();
  func_0x000107c61170(alStack_218[0]);
  func_0x000107c61428(param_2,alStack_218,0,0);
  uVar7 = *param_2;
  func_0x000107c61174(uVar7);
  FUN_1000aa0a8(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61428(param_2,auStack_230,0,0);
  uVar3 = *param_2;
  func_0x000107c61174(uVar3);
  uVar7 = 0xd00000000000002f;
  FUN_1000a9a18(0xd00000000000002f,0x800000010effc750);
  func_0x000107c61170(uVar3);
  FUN_100083b20(alStack_248);
  uVar9 = *(undefined8 *)(alStack_248[0] + _DAT_11305f238);
  func_0x000107c61174();
  func_0x000107c61170(alStack_248[0]);
  func_0x000107c61428(param_2,alStack_248,0,0);
  uVar3 = *param_2;
  func_0x000107c61174(uVar3);
  FUN_1000aa0a8(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61428(param_2,auStack_260,0,0);
  uVar7 = *param_2;
  func_0x000107c61174(uVar7);
  uVar3 = 0xd00000000000003c;
  FUN_1000a9a18(0xd00000000000003c,0x800000010effc780);
  func_0x000107c61170(uVar7);
  FUN_100083b20(auStack_278);
  uVar7 = auStack_278[0];
  func_0x000107c5e144();
  func_0x000107c61180();
  func_0x000107c61170(auStack_278[0]);
  func_0x000107c61428(param_2,auStack_278,0,0);
  uVar10 = *param_2;
  func_0x000107c61174(uVar10);
  FUN_1000aa0a8(uVar3);
  func_0x000107c61170(uVar10);
  puVar11 = PTR_PTR_1126c5598;
  func_0x000107c61168();
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126a89e8;
  func_0x000107c610f8();
  func_0x000107c4571c();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(auStack_e0[0]);
  func_0x000107c615e8(auStack_110[0]);
  func_0x000107c615e8(auStack_140[0]);
  func_0x000107c615e8(uVar4);
  func_0x000107c615e8(auStack_1a0[0]);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar2);
  *param_1 = puVar12;
  return;
}



/* Entry: 100112c58; end: 100112c93;  */

void FUN_100112c58(void)

{
  long unaff_x20;
  
  FUN_100112458(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 100112c94; end: 100112c9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100112c94(long *param_1)

{
  long unaff_x20;
  long lStack_38;
  
  FUN_100083b20(&lStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170();
  FUN_100083b20(&lStack_38);
  *param_1 = lStack_38;
  return;
}



/* Entry: 100112ca0; end: 100112d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100112ca0(long *param_1)

{
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  func_0x000107c61170();
  FUN_100083b20(&lStack_38);
  *param_1 = lStack_38;
  return;
}



/* Entry: 100112d1c; end: 100112d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100112d1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_113091b58);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_38);
  puVar2 = PTR_PTR_1126a89d8;
  func_0x000107c610f8();
  func_0x000107c45710();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 100112d24; end: 100112da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100112d24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_113091b58);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_38);
  puVar2 = PTR_PTR_1126a89d8;
  func_0x000107c610f8();
  func_0x000107c45710();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 100112da4; end: 100112e0f; -[SCManagerApplicationDataChecker initWithApplication:] */

undefined1 * FUN_100112da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126ed918;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100112e10; end: 100112e43;  */

void FUN_100112e10(void)

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



/* Entry: 100112e44; end: 100112fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100112e44(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  FUN_100113000();
  lVar4 = _DAT_112daa578;
  func_0x000107c4b940(*(undefined8 *)(lVar3 + _DAT_112daa578));
  lVar6 = *(long *)(lVar3 + _DAT_112daa580);
  *(long *)(lVar3 + _DAT_112daa580) = param_1;
  func_0x000107c5d278(*(undefined8 *)(lVar3 + lVar4));
  if ((int)param_1 != (int)lVar6) {
    uVar5 = *(undefined8 *)(lVar3 + _DAT_112daa568);
    FUN_10010ab90(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar5);
    lVar4 = param_1;
    FUN_10010abb0(param_1);
    func_0x000107c4d664(uVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar5);
  }
  uVar1 = lVar6 + 1;
  lStack_60 = lVar6;
  if (uVar1 < 6) {
    if ((1L << (uVar1 & 0x3f) & 0x2cU) == 0) {
      if ((1L << (uVar1 & 0x3f) & 3U) == 0) goto LAB_100112fd8;
      if (1 < param_1 - 1U) {
        if (param_1 == 0) goto LAB_100112fb4;
        lStack_60 = param_1;
        if (param_1 != 4) goto LAB_100112fd8;
      }
      uVar5 = *(undefined8 *)(lVar3 + _DAT_112daa570);
      FUN_10010ab90(0);
      func_0x000107c610f8();
      func_0x000107c61174(uVar5);
      FUN_10010abb0(param_1);
      func_0x000107c4d664(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar3);
      lVar3 = param_1;
    }
LAB_100112fb4:
    func_0x000107c61170(lVar3);
    return;
  }
LAB_100112fd8:
  func_0x000107c60614(&UNK_11077d010,&lStack_60,&UNK_11077d010,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100112ff8);
  (*pcVar2)();
}



/* Entry: 100113000; end: 1001131f7;  */

undefined8 FUN_100113000(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  
  lVar1 = 0;
  func_0x000107c5f23c();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f260();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = lVar7 - extraout_x12;
  func_0x000107c5f264(uVar8);
  pcVar12 = *(code **)(lVar10 + 0x68);
  (*pcVar12)(lVar7,*(undefined4 *)PTR___s7Network6NWPathV6StatusO9satisfiedyA2EmFWC_110351520,lVar2)
  ;
  uVar3 = uVar8;
  func_0x000107c5f25c(uVar8,lVar7);
  pcVar11 = *(code **)(lVar10 + 8);
  (*pcVar11)(lVar7,lVar2);
  (*pcVar11)(uVar8,lVar2);
  if ((uVar3 & 1) == 0) {
    func_0x000107c5f264(uVar8);
    (*pcVar12)(lVar7,*(undefined4 *)
                      PTR___s7Network6NWPathV6StatusO18requiresConnectionyA2EmFWC_110351510,lVar2);
    uVar3 = uVar8;
    func_0x000107c5f25c(uVar8,lVar7);
    (*pcVar11)(lVar7,lVar2);
    (*pcVar11)(uVar8,lVar2);
    uVar5 = 4;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
  }
  else {
    pcVar11 = *(code **)(lVar9 + 0x68);
    (*pcVar11)(puVar6,*(undefined4 *)
                       PTR___s7Network11NWInterfaceV13InterfaceTypeO4wifiyA2EmFWC_1103514b8,lVar1);
    puVar4 = puVar6;
    func_0x000107c5f258();
    pcVar12 = *(code **)(lVar9 + 8);
    (*pcVar12)(puVar6,lVar1);
    if (((ulong)puVar4 & 1) == 0) {
      (*pcVar11)(puVar6,*(undefined4 *)
                         PTR___s7Network11NWInterfaceV13InterfaceTypeO8cellularyA2EmFWC_1103514c0,
                 lVar1);
      puVar4 = puVar6;
      func_0x000107c5f258();
      (*pcVar12)(puVar6,lVar1);
      uVar5 = 4;
      if (((ulong)puVar4 & 1) != 0) {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 2;
    }
  }
  return uVar5;
}



/* Entry: 1001131f8; end: 100113267; -[SCConfigMetricLoggerImpl logStudyExposure:experimentId:] */

/* WARNING: Possible PIC construction at 0x000100113248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010011324c) */

void FUN_1001131f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3fcd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100113268; end: 100113277; -[SCConfigMetricGraphene2 cofABStudy:experimentId:] */

void FUN_100113268(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_110879a48);
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(lVar1 + 8);
      func_0x000107c61174(param_4);
      if (param_4 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = param_4;
        func_0x000107c61178(param_4);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_78,pcVar3);
      func_0x000107c61174(param_3);
      if (param_3 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        func_0x000107c61178(param_3);
        pcVar3 = param_3;
        func_0x000107c3ac4c(param_3);
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_60,pcVar3);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110879a48,&uStack_98,1000);
      puStack_80 = &uStack_98;
      FUN_10007e5dc(&puStack_80);
      lVar1 = 0;
      do {
        if ((&cStack_49)[lVar1] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
  }
  func_0x000107c61170(param_3);
  pcVar3 = param_4;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c60bd8();
                    /* WARNING: Could not recover jumptable at 0x00010be92c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(pcVar3 + 0x20),PTR_s__resetFiltering_1125824a8);
  return;
}



/* Entry: 100113278; end: 1001134cb;  */

void FUN_100113278(long param_1,char *param_2,char *param_3,long param_4)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110879a48);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_78,pcVar2);
      func_0x000107c61174(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        func_0x000107c61178(param_3);
        pcVar2 = param_3;
        func_0x000107c3ac4c(param_3);
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_60,pcVar2);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110879a48,&uStack_98,param_4 * 1000);
      puStack_80 = &uStack_98;
      FUN_10007e5dc(&puStack_80);
      lVar3 = 0;
      do {
        if ((&cStack_49)[lVar3] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar3));
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
  }
  func_0x000107c61170(param_3);
  pcVar2 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
                    /* WARNING: Could not recover jumptable at 0x00010be92c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(pcVar2 + 0x20),PTR_s__resetFiltering_1125824a8);
  return;
}



/* Entry: 1001134cc; end: 1001134db;  */

void FUN_1001134cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resetFiltering_1125824a8);
  return;
}



/* Entry: 1001134dc; end: 100113583;  */

void FUN_1001134dc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x000107c61168();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  FUN_100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c3e7cc(puVar1);
  func_0x000107c61170(uVar2);
  FUN_100083b20(&uStack_38);
  FUN_1000d46b0();
  func_0x000107c61170(uStack_38);
  func_0x000107c3e7d4(puVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 100113584; end: 10011358b;  */

void FUN_100113584(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c40d94();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10011358c; end: 1001135e7;  */

void FUN_10011358c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c40d94();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1001135e8; end: 1001135ef;  */

void FUN_1001135e8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a7198;
  func_0x000107c610f8();
  func_0x000107c46278();
  func_0x000107c615e8(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1001135f0; end: 1001136df;  */

void FUN_1001135f0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a7198;
  func_0x000107c610f8();
  func_0x000107c46278();
  func_0x000107c615e8(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1001136e0; end: 100113747; +[DeviceConfig descriptor] */

void FUN_1001136e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136ba360 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a28900,
                        &PTR____CFConstantStringClassReference_110dd1198,
                        &PTR_s_snapchat_camera_1130cd900,&PTR_s_resolutionHeight_1130cd918,0x14,0x30
                        ,0x1c);
    puRam00000001136ba360 = puVar1;
  }
  return;
}



/* Entry: 100113748; end: 1001137a3; -[SCAsyncQueueImpl providerWithScope:] */

void FUN_100113748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b71e0;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c464d0();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1001137a4; end: 100113847; -[SCAsyncQueueProviderImpl initWithDelegate:scope:] */

undefined1 *
FUN_1001137a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e76c0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100113848; end: 100113923; -[SCCriticalSectionImpl initWithCriticalSectionTimeoutInSeconds:asyncQueueProvider:] */

undefined1 *
FUN_100113848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e76e0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    func_0x000107c61170(uVar3);
    uVar3 = param_4;
    func_0x000107c4f7fc();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    func_0x000107c61170(uVar4);
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100113924; end: 10011392b; -[SCAsyncQueueProviderImpl queueWithType:feature:] */

void FUN_100113924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11e110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_queueWithType_feature_mustUseFIF_112625260,param_3,param_4,1);
  return;
}



/* Entry: 10011392c; end: 100113937; -[SCAsyncQueueProviderImpl queueWithType:feature:mustUseFIFO:] */

void FUN_10011392c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_queueWithType_feature_mustUseFIF_112625268);
  return;
}



/* Entry: 100113938; end: 1001139cb; -[SCAsyncQueueImpl queueWithType:feature:mustUseFIFO:scope:] */

void FUN_100113938(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  if (param_3 == 3) {
    uVar2 = 0x11;
  }
  else if (param_3 == 2) {
    uVar2 = 0x19;
  }
  else {
    if (param_3 == 0) {
      FUN_1004f22a8();
      func_0x000107c61180();
      goto LAB_1001139ac;
    }
    uVar2 = 0x21;
  }
  uVar1 = param_6;
  FUN_1001139cc(param_6,uVar2,0,param_5);
  func_0x000107c61180();
LAB_1001139ac:
  func_0x000107c61170(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1001139cc; end: 100113a4f;  */

void FUN_1001139cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6ae8;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c610f4(puVar1);
  func_0x000107c3ba10();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100113a50; end: 100113acb; -[SCBandwidthEstimatorExperiment _resetFiltering] */

/* WARNING: Possible PIC construction at 0x000100113a94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100113a98) */

void FUN_100113a50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5a214(param_1,param_2,0xffffffffffffffff);
  func_0x000107c55a2c(param_1,param_2,0xffffffffffffd8f1);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100113acc; end: 100113ad3; -[SCBandwidthEstimatorExperiment setUploadBandwidth:] */

void FUN_100113acc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 100113ad4; end: 100113adf; -[GPBMessage initWithData:error:] */

void FUN_100113ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c008390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithData_extensionRegistry_e_1125dfab0,param_3,0,param_4);
  return;
}



/* Entry: 100113ae0; end: 100113c27; -[sc_async_queue_concrete _initWithLabel:qos:parent:mustUseFIFO:] */

undefined8
FUN_100113ae0(undefined8 param_1,undefined8 param_2,long param_3,int param_4,long param_5,
             ulong param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x000107c61174(param_5);
  func_0x000107c61178();
  func_0x000107c3ac4c();
  if ((((param_6 & 1) == 0) && (param_4 != 9)) && (param_4 != 0x11)) {
    lVar1 = param_3;
    func_0x000107c60f98();
    func_0x000107c60f78();
    if (lVar1 != 0) goto LAB_100113bbc;
  }
  uVar2 = 0;
  func_0x000107c60f44(0);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c60f4c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000107c60f48(uVar3,1);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c60f50(param_3,uVar2);
  func_0x000107c61170(uVar2);
  lVar1 = param_3;
LAB_100113bbc:
  if (param_5 != 0) {
    lVar4 = param_5;
    func_0x000107c4f7c0(param_5);
    func_0x000107c61180();
    func_0x000107c60f7c(lVar1,lVar4);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c60f20(lVar1);
  func_0x000107c3ba00(param_1);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_5);
  return param_1;
}



/* Entry: 100113c28; end: 100113eaf; -[SCCameraCaptureFormatSelectionFrameworkConfigurationImpl _deviceSettingsForDeviceConfig:fallbackSettings:] */

void FUN_100113c28(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
    puVar3 = param_4;
  }
  else {
    puVar1 = PTR_PTR_1126b7128;
    func_0x000107c3f09c(PTR_PTR_1126b7128,param_2,param_4);
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c3b778(param_1,param_2,param_3);
    func_0x000107c61180();
    if (lVar2 == 0) {
      puVar3 = param_4;
      func_0x000107c4390c(param_4);
      func_0x000107c61180();
      func_0x000107c5e574(puVar1,param_2,puVar3);
      func_0x000107c611b0();
      func_0x000107c61170(puVar3);
    }
    else {
      func_0x000107c5e574(puVar1,param_2,lVar2);
      func_0x000107c611b0();
    }
    func_0x000107c61170(lVar2);
    lVar2 = param_1;
    func_0x000107c3c3a0(param_1,param_2,param_3);
    func_0x000107c61180();
    if (lVar2 == 0) {
      puVar3 = param_4;
      func_0x000107c50594(param_4);
      func_0x000107c61180();
      func_0x000107c5e760(puVar1,param_2,puVar3);
      func_0x000107c611b0();
      func_0x000107c61170(puVar3);
    }
    else {
      func_0x000107c5e760(puVar1,param_2,lVar2);
      func_0x000107c611b0();
    }
    func_0x000107c61170(lVar2);
    lVar2 = param_1;
    func_0x000107c3c124(param_1,param_2,param_3);
    func_0x000107c61180();
    if (lVar2 == 0) {
      puVar3 = param_4;
      func_0x000107c4e700(param_4);
      func_0x000107c61180();
      func_0x000107c5e718(puVar1,param_2,puVar3);
      func_0x000107c611b0();
      func_0x000107c61170(puVar3);
    }
    else {
      func_0x000107c5e718(puVar1,param_2,lVar2);
      func_0x000107c611b0();
    }
    func_0x000107c61170(lVar2);
    lVar2 = param_1;
    func_0x000107c3cdb8(param_1,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c5e880(puVar1,param_2,lVar2);
    func_0x000107c611b0();
    func_0x000107c61170(lVar2);
    func_0x000107c3bef8(param_1,param_2,param_3);
    func_0x000107c61180();
    if (param_1 == 0) {
      puVar3 = param_4;
      func_0x000107c4ca4c(param_4);
      func_0x000107c61180();
      func_0x000107c5e6a8(puVar1,param_2,puVar3);
      func_0x000107c611b0();
      func_0x000107c61170(puVar3);
    }
    else {
      func_0x000107c5e6a8(puVar1,param_2,param_1);
      func_0x000107c611b0();
    }
    func_0x000107c61170(param_1);
    puVar3 = puVar1;
    func_0x000107c3ecc8(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100113eb0; end: 100113f33; -[sc_async_queue_concrete _initUnsafeWithQueue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100113eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126f9f78;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s__init_11256be78);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11276ac78;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100113f34; end: 100114157; +[SCCameraDeviceSettingsBuilder cameraDeviceSettingsFromExistingCameraDeviceSettings:] */

void FUN_100113f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  
  puVar1 = PTR_PTR_1126b7128;
  func_0x000107c61174(param_3);
  func_0x000107c3f098();
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c4390c();
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c5e574(puVar1,param_2,uVar2);
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c50594();
  func_0x000107c61180();
  puVar5 = puVar3;
  func_0x000107c5e760(puVar3,param_2,uVar4);
  func_0x000107c61180();
  uVar6 = param_3;
  func_0x000107c4ca4c(param_3);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c5e6a8(puVar5,param_2,uVar6);
  func_0x000107c61180();
  uVar8 = param_3;
  func_0x000107c4e700(param_3);
  func_0x000107c61180();
  puVar9 = puVar7;
  func_0x000107c5e718(puVar7,param_2,uVar8);
  func_0x000107c61180();
  uVar10 = param_3;
  func_0x000107c5dd6c(param_3);
  func_0x000107c61180();
  puVar11 = puVar9;
  func_0x000107c5e880(puVar9,param_2,uVar10);
  func_0x000107c61180();
  uVar12 = param_3;
  func_0x000107c42c3c(param_3);
  func_0x000107c61180();
  puVar13 = puVar11;
  func_0x000107c5e54c(puVar11,param_2,uVar12);
  func_0x000107c61180();
  uVar14 = param_3;
  func_0x000107c42e78(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  puVar15 = puVar13;
  func_0x000107c5e558(puVar13,param_2,uVar14);
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 100114158; end: 10011418b; -[sc_async_queue _init] */

void FUN_100114158(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270e658;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10011418c; end: 100114193; -[SCBandwidthEstimatorExperiment setLastDownloadBandwidthClass:] */

void FUN_10011418c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 100114194; end: 1001141af; +[SCCameraDeviceSettingsBuilder cameraDeviceSettings] */

void FUN_100114194(void)

{
  func_0x000107c610fc(PTR_PTR_1126b7128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1001141b0; end: 1001141b7; -[SCCameraDeviceSettings frameRateConstraint] */

undefined8 FUN_1001141b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1001141b8; end: 100114247; -[SCExponentialGeometricFilter initWithFilterCoefficient:initialValue:includeInitialValueInFiltering:] */

void FUN_1001141b8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706118;
  uStack_40 = param_3;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(double *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined1 *)((long)puVar1 + 0x10) = param_5;
    if (param_1 == 1.0) {
      lVar2 = -1;
    }
    else {
      lVar2 = (long)(1.0 / (1.0 - param_1));
    }
    *(long *)((long)puVar1 + 8) = lVar2;
  }
  return;
}



/* Entry: 100114248; end: 10011425f;  */

void FUN_100114248(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be594f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logStudyTriggeredEvent_experime_112573ed8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),3,
             *(undefined1 *)(param_1 + 0x38));
  return;
}



/* Entry: 100114260; end: 1001143a3; -[SCExperimentPreferenceStore _logStudyTriggeredEvent:experimentId:source:requireUserInfoInLog:] */

void FUN_100114260(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_5 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    FUN_1001143dc(param_3,param_4,0,uVar3,uVar2,param_6);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x10);
    func_0x000107c40404();
    if ((uVar1 & 1) != 0) goto LAB_100114378;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    FUN_1001143dc(param_3,param_4,param_5,uVar3,uVar2,param_6);
    func_0x000107c61170(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x10011a954;
    puStack_68 = &UNK_110841f80;
    lStack_60 = param_1;
    func_0x000107c61174(param_3);
    uStack_58 = param_3;
    FUN_10010a3e8(uVar3,&puStack_80);
    uVar2 = uStack_58;
  }
  func_0x000107c61170(uVar2);
LAB_100114378:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1001143a4; end: 1001143db; -[SCCameraDeviceSettingsBuilder withFrameRateConstraint:] */

long FUN_1001143a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1001143dc; end: 10011447b;  */

/* WARNING: Possible PIC construction at 0x000100114460: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100114464) */

void FUN_1001143dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000107c4bb40(param_4);
  func_0x000107c42bb0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10011447c; end: 10011456f; -[SCExposureLogBlizzard logExposure:experimentId:requireUserInfo:] */

/* WARNING: Possible PIC construction at 0x0001001144d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001144e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010011451c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100114554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100114520) */
/* WARNING: Removing unreachable block (ram,0x00010011454c) */
/* WARNING: Removing unreachable block (ram,0x000100114544) */
/* WARNING: Removing unreachable block (ram,0x000100114550) */
/* WARNING: Removing unreachable block (ram,0x0001001144e8) */
/* WARNING: Removing unreachable block (ram,0x0001001144d4) */
/* WARNING: Removing unreachable block (ram,0x000100114558) */

void FUN_10011447c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7880;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61160(puVar1);
  func_0x000107c59a24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100114570; end: 100114583; -[SCCircumstanceEngineConfigurationKey .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100114570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127875bc,0);
  return;
}



/* Entry: 100114584; end: 10011458b; -[SCAMapSerializable init] */

void FUN_100114584(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00e4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithDrainNestedObjects__1125e1308,0);
  return;
}



/* Entry: 10011458c; end: 10011465f; -[SCAMapSerializable initWithDrainNestedObjects:] */

undefined1 * FUN_10011458c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270e2c8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c56bd8(*(undefined8 *)((long)puVar1 + 0x28));
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100114660; end: 100114667; -[SCCameraDeviceSettings resolutionConstraint] */

undefined8 FUN_100114660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100114668; end: 10011466f; -[SCCriticalSectionImpl criticalSectionObservable] */

undefined8 FUN_100114668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100114670; end: 100114747; -[SCIdleMonitorV1 beginObservingCriticalSection:] */

void FUN_100114670(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  func_0x000107c6111c(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x000107c5c320();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100114748; end: 10011481f; -[SCIdleMonitorV1 beginObservingUIEvents:] */

void FUN_100114748(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  func_0x000107c6111c(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x000107c5c320();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100114820; end: 10011485b; -[SCNConfigConfigurationKey .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100114838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010011483c) */

void FUN_100114820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10011485c; end: 100114863;  */

void FUN_10011485c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100114864; end: 1001148e7;  */

void FUN_100114864(undefined8 *param_1,long param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    FUN_1000fbca4(&uStack_38,param_2);
    param_1[1] = uStack_30;
    *param_1 = uStack_38;
    param_1[2] = uStack_28;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_38 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    func_0x000107c60ca0(&uStack_38);
  }
  FUN_1001148e8();
  return;
}



/* Entry: 1001148e8; end: 1001148fb;  */

void FUN_1001148e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1001148fc; end: 10011491b;  */

void FUN_1001148fc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 10011491c; end: 100114923;  */

void FUN_10011491c(void)

{
  FUN_100100fec(&stack0x00000080);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000050);
  return;
}



/* Entry: 100114924; end: 10011494b;  */

void FUN_100114924(long param_1)

{
  FUN_100100fec(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10011494c; end: 100114987;  */

long FUN_10011494c(void)

{
  long unaff_x29;
  long lStack_28;
  
  lStack_28 = unaff_x29 + -0x70;
  func_0x000100100fd4(&lStack_28);
  return unaff_x29 + -0x70;
}



/* Entry: 100114988; end: 100114aeb;  */

undefined8 * FUN_100114988(undefined8 *param_1)

{
  int iVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [40];
  char cStack_28;
  undefined1 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  auStack_50[0] = 0;
  cStack_28 = '\0';
  func_0x000107c60c94(&uStack_68);
  FUN_100114fd0(&uStack_a0,&uStack_68,0);
  FUN_10011a4f8(auStack_50,&uStack_a0);
  func_0x00010011a53c(&uStack_a0);
  if (cStack_28 == '\x01') {
    iVar1 = (int)auStack_50;
    FUN_10011a590();
    if (iVar1 == 0) goto LAB_100114a70;
    puVar2 = auStack_50;
    FUN_10011a55c(puVar2,&UNK_10f7436f4);
    iVar1 = (int)puVar2;
    FUN_100115e08();
    *(char *)(param_1 + 3) = (char)iVar1;
    if (iVar1 != 0) {
      uStack_98 = uStack_60;
      uStack_a0 = uStack_68;
      uStack_90 = uStack_58;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_68 = 0;
      goto LAB_100114a7c;
    }
  }
  else {
LAB_100114a70:
    *(undefined1 *)(param_1 + 3) = 0;
  }
  FUN_100100cfc(&uStack_a0);
LAB_100114a7c:
  FUN_100066230(param_1,&uStack_a0);
  func_0x000100114974();
  func_0x000107c60ca0(&uStack_68);
  func_0x00010011a53c(auStack_50);
  return param_1;
}



/* Entry: 100114aec; end: 100114ccf;  */

long * FUN_100114aec(long *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uStack_178;
  uint uStack_170;
  undefined8 *puStack_160;
  uint auStack_158 [2];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_51;
  
  if ((char)param_1[1] == '\0') {
    auStack_158[0] = CONCAT22(auStack_158[0]._2_2_,7);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_150 = 0;
    puVar3 = (undefined8 *)0x18;
    func_0x000107c60e20();
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = puVar3 + 1;
    puStack_160 = puVar3;
    FUN_1001150b4(&puStack_160,param_1);
    func_0x0001001151c0(&puStack_160);
  }
  else if ((char)param_1[1] != '\a') {
    func_0x000107c2ac5c(&puStack_160);
    func_0x000107c2ac6c(&puStack_160,&UNK_10f588006,0x40);
    func_0x000107c2ac60(&uStack_178,auStack_158,&uStack_51);
    func_0x000107c2ad58(&uStack_178);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100114b60);
    (*pcVar2)();
  }
  uVar1 = (param_3 - (int)param_2) * 4 | 2;
  lVar6 = *param_1;
  plVar7 = (long *)(lVar6 + 8);
  plVar8 = (long *)*plVar7;
  uStack_178 = param_2;
  uStack_170 = uVar1;
  if (plVar8 != (long *)0x0) {
    do {
      plVar4 = plVar8 + 4;
      FUN_1001158d4(plVar4,&uStack_178);
      lVar6 = 8;
      if ((int)plVar4 == 0) {
        lVar6 = 0;
        plVar7 = plVar8;
      }
      plVar8 = *(long **)((long)plVar8 + lVar6);
    } while (plVar8 != (long *)0x0);
    lVar6 = *param_1;
  }
  if (plVar7 != (long *)(lVar6 + 8)) {
    uVar5 = plVar7[4];
    FUN_100115988(uVar5,(int)plVar7[5],param_2,uVar1);
    plVar8 = plVar7;
    if ((uVar5 & 1) != 0) goto LAB_100114c60;
  }
  FUN_1001151fc();
  FUN_10011538c(&puStack_160,&uStack_178);
  plVar8 = (long *)*param_1;
  FUN_100115690(plVar8,plVar7,&puStack_160,&puStack_160);
  func_0x0001001151c0(&uStack_150);
  if ((puStack_160 != (undefined8 *)0x0) && ((auStack_158[0] & 3) == 1)) {
    func_0x000107c60fd0();
  }
LAB_100114c60:
  return plVar8 + 6;
}



/* Entry: 100114cd0; end: 100114f73;  */

void FUN_100114cd0(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = 5;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_58._0_1_ = 1;
  uVar1 = param_1;
  FUN_100114aec(param_1,&UNK_10f587bf6,&UNK_10f587c05);
  FUN_1001150b4(&uStack_58,uVar1);
  func_0x0001001151c0(&uStack_58);
  uStack_50 = 5;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_58._0_1_ = 1;
  uVar1 = param_1;
  FUN_100114aec(param_1,&UNK_10f587c06,&UNK_10f587c13);
  FUN_1001150b4(&uStack_58,uVar1);
  func_0x0001001151c0(&uStack_58);
  uStack_50 = 5;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_58._0_1_ = 0;
  uVar1 = param_1;
  FUN_100114aec(param_1,&UNK_10f587c14,&UNK_10f587c1e);
  FUN_1001150b4(&uStack_58,uVar1);
  func_0x0001001151c0(&uStack_58);
  uStack_50 = 5;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_58._0_1_ = 0;
  uVar1 = param_1;
  FUN_100114aec(param_1,&UNK_10f587c1f,&UNK_10f587c3b);
  FUN_1001150b4(&uStack_58,uVar1);
  func_0x0001001151c0(&uStack_58);
  uStack_50 = 5;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_58._0_1_ = 0;
  uVar1 = param_1;
  FUN_100114aec(param_1,&UNK_10f587c3c,&UNK_10f587c4c);
  FUN_1001150b4(&uStack_58,uVar1);
  func_0x0001001151c0(&uStack_58);
  uStack_50 = 5;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_58 = (ulong)uStack_58._1_7_ << 8;
  uVar1 = param_1;
  FUN_100114aec(param_1,&UNK_10f587c4d,&UNK_10f587c5e);
  FUN_1001150b4(&uStack_58,uVar1);
  func_0x0001001151c0(&uStack_58);
  uStack_50 = 1;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_58 = 1000;
  uVar1 = param_1;
  FUN_100114aec(param_1,&UNK_10f587c5f,&UNK_10f587c69);
  FUN_1001150b4(&uStack_58,uVar1);
  func_0x0001001151c0(&uStack_58);
  uStack_50 = 5;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_58 = uStack_58 & 0xffffffffffffff00;
  uVar1 = param_1;
  FUN_100114aec(param_1,&UNK_10f587c6a,&UNK_10f587c75);
  FUN_1001150b4(&uStack_58,uVar1);
  func_0x0001001151c0(&uStack_58);
  uStack_50 = 5;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_58 = uStack_58 & 0xffffffffffffff00;
  uVar1 = param_1;
  FUN_100114aec(param_1,&UNK_10f587c76,&UNK_10f587c83);
  FUN_1001150b4(&uStack_58,uVar1);
  func_0x0001001151c0(&uStack_58);
  uStack_50 = 5;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_58 = uStack_58 & 0xffffffffffffff00;
  FUN_100114aec(param_1,&UNK_10f587c84,&UNK_10f587c96);
  FUN_1001150b4(&uStack_58,param_1);
  func_0x0001001151c0(&uStack_58);
  return;
}



/* Entry: 100114f74; end: 100114fcf;  */

undefined8 * FUN_100114f74(undefined8 *param_1)

{
  *param_1 = &PTR_SUB_110b1c938;
  *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xfe00;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  FUN_100114cd0(param_1 + 1);
  return param_1;
}



/* Entry: 100114fd0; end: 1001150b3;  */

void FUN_100114fd0(undefined1 *param_1)

{
  long *plVar1;
  long alStack_88 [6];
  undefined1 auStack_58 [8];
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  FUN_100114f74(alStack_88);
  plVar1 = alStack_88;
  FUN_100115a88();
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) == 0) {
    *param_1 = 0;
    param_1[0x28] = 0;
  }
  else {
    FUN_100119958(param_1,auStack_58);
  }
  FUN_100119974();
  func_0x00010011a490(alStack_88);
  func_0x0001001151c0(auStack_58);
  return;
}



/* Entry: 1001150b4; end: 100115153;  */

void FUN_1001150b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  uVar1 = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = uVar1;
  uVar4 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar4;
  plVar2 = param_1 + 2;
  lVar7 = *plVar2;
  *plVar2 = 0;
  plVar6 = param_2 + 2;
  lVar5 = *plVar6;
  *plVar6 = 0;
  lVar3 = *plVar2;
  *plVar2 = lVar5;
  if (lVar3 != 0) {
    func_0x000107c2ada4();
  }
  lVar3 = *plVar6;
  *plVar6 = lVar7;
  if (lVar3 != 0) {
    func_0x000107c2ada4(plVar6);
  }
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  param_2[3] = uVar4;
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  param_2[4] = uVar4;
  return;
}



/* Entry: 100115154; end: 1001151fb;  */

void FUN_100115154(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(ushort *)(param_1 + 1) & 0xff;
  if (uVar1 - 6 < 2) {
    lVar2 = *param_1;
    if (lVar2 != 0) {
      func_0x00010011a42c(lVar2,*(undefined8 *)(lVar2 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar2);
      return;
    }
  }
  else if ((uVar1 == 4) && ((*(ushort *)(param_1 + 1) >> 8 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*param_1);
    return;
  }
  return;
}



/* Entry: 1001151fc; end: 10011529f;  */

undefined8 FUN_1001151fc(void)

{
  int iVar1;
  
  if ((bRam000000011382b9b0 & 1) == 0) {
    iVar1 = 0x1382b9b0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam000000011382b990 = uRam000000011382b990 & 0xfe00;
      uRam000000011382b9a0 = 0;
      uRam000000011382b9a8 = 0;
      uRam000000011382b998 = 0;
      func_0x000107c60e34(&UNK_1098f2dfc,0x11382b988,0x100000000);
      func_0x000107c60e4c(0x11382b9b0);
    }
  }
  return 0x11382b988;
}



/* Entry: 1001152a0; end: 10011538b;  */

long * FUN_1001152a0(long *param_1,long *param_2)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_58 [24];
  
  lVar3 = *param_2;
  if (((*(uint *)(param_2 + 1) & 3) != 0) && (lVar3 != 0)) {
    uVar4 = (ulong)(*(uint *)(param_2 + 1) >> 2);
    lVar3 = uVar4 + 1;
    func_0x000107c610a0();
    if (lVar3 == 0) {
      FUN_10002d4d8(auStack_58,&UNK_10f588100);
      func_0x000107c2ad54(auStack_58);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100115370);
      (*pcVar1)();
    }
    func_0x000107c610b4();
    *(undefined1 *)(lVar3 + uVar4) = 0;
  }
  *param_1 = lVar3;
  uVar2 = *(uint *)(param_2 + 1) & 3;
  if (*param_2 != 0) {
    uVar2 = (uint)(uVar2 != 0);
  }
  *(uint *)(param_1 + 1) = uVar2 | *(uint *)(param_1 + 1) & 0xfffffffc;
  *(uint *)(param_1 + 1) = *(uint *)(param_2 + 1) & 0xfffffffc | uVar2;
  return param_1;
}



/* Entry: 10011538c; end: 1001153e7;  */

long FUN_10011538c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1001152a0();
  FUN_1001154b4(lVar1 + 0x10,0x11382b988);
  return param_1;
}



/* Entry: 1001153e8; end: 1001154b3;  */

void FUN_1001153e8(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  bVar1 = *(byte *)(param_2 + 1);
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfe00 | (ushort)bVar1;
  if (bVar1 < 8) {
    uVar2 = 1 << (ulong)(bVar1 & 0x1f);
    if ((uVar2 & 0x2f) == 0) {
      if ((uVar2 & 0xc0) == 0) {
        puVar4 = (undefined4 *)*param_2;
        if ((puVar4 == (undefined4 *)0x0) || ((*(ushort *)(param_2 + 1) >> 8 & 1) == 0)) {
          *param_1 = puVar4;
        }
        else {
          puVar5 = puVar4 + 1;
          FUN_1001192b8(puVar5,*puVar4);
          *param_1 = puVar5;
          *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) | 0x100;
        }
      }
      else {
        uVar3 = 0x18;
        func_0x000107c60e20();
        func_0x000107c2adbc();
        *param_1 = uVar3;
      }
    }
    else {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1001154b4; end: 10011551f;  */

long FUN_1001154b4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1001153e8();
  FUN_10011562c((undefined8 *)(param_1 + 0x10),param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return param_1;
}



/* Entry: 100115520; end: 10011562b;  */

long * FUN_100115520(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = 0;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = 0x48;
    func_0x000107c60e20();
    lVar4 = 0;
    do {
      param_2 = (long *)(lVar1 + lVar4);
      plVar2 = (long *)(lVar3 + lVar4);
      if (*(char *)((long)plVar2 + 0x17) < '\0') {
        FUN_100033dac(param_2,*plVar2,plVar2[1]);
      }
      else {
        lVar6 = plVar2[1];
        lVar5 = *plVar2;
        param_2[2] = plVar2[2];
        param_2[1] = lVar6;
        *param_2 = lVar5;
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != 0x48);
    plVar2 = (long *)*param_1;
    *param_1 = lVar1;
    if (plVar2 != (long *)0x0) {
      if (plVar2 != (long *)0x0) {
        lVar3 = 0;
        do {
          if (*(char *)((long)plVar2 + lVar3 + 0x47) < '\0') {
            __ZdlPv(*(undefined8 *)((long)plVar2 + lVar3 + 0x30));
          }
          lVar3 = lVar3 + -0x18;
        } while (lVar3 != -0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar2);
        return plVar2;
      }
      return param_1;
    }
  }
  return param_2;
}



/* Entry: 10011562c; end: 10011568f;  */

long * FUN_10011562c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  FUN_100115520(&lStack_28,param_2);
  lVar1 = lStack_28;
  lStack_28 = 0;
  lVar2 = *param_1;
  *param_1 = lVar1;
  if (lVar2 != 0) {
    func_0x000107c2ada4(param_1);
    lVar1 = lStack_28;
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x000107c2ada4(&lStack_28);
    }
  }
  return param_1;
}



/* Entry: 100115690; end: 10011587f;  */

long * FUN_100115690(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plStack_58;
  
  if ((param_1 + 1 == param_2) ||
     (uVar3 = param_3, FUN_1001158d4(param_3,param_2 + 4), (int)uVar3 != 0)) {
    plVar5 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar4 = param_2;
      plVar1 = (long *)*param_2;
      if ((long *)*param_2 == (long *)0x0) {
        do {
          plVar5 = (long *)plVar4[2];
          bVar2 = (long *)*plVar5 == plVar4;
          plVar4 = plVar5;
        } while (bVar2);
      }
      else {
        do {
          plVar5 = plVar1;
          plVar1 = (long *)plVar5[1];
        } while ((long *)plVar5[1] != (long *)0x0);
      }
      plVar4 = plVar5 + 4;
      FUN_1001158d4(plVar4,param_3);
      if ((int)plVar4 == 0) goto LAB_1001157c0;
    }
    plStack_58 = param_2;
    if (*param_2 == 0) goto LAB_1001157dc;
    plVar4 = plVar5 + 1;
    plStack_58 = plVar5;
  }
  else {
    plVar5 = param_2 + 4;
    FUN_1001158d4(plVar5,param_3);
    if ((int)plVar5 == 0) {
      return param_2;
    }
    plVar4 = param_2 + 1;
    plVar6 = (long *)*plVar4;
    plVar5 = param_2;
    plVar1 = plVar6;
    if (plVar6 == (long *)0x0) {
      do {
        plVar7 = (long *)plVar5[2];
        bVar2 = (long *)*plVar7 != plVar5;
        plVar5 = plVar7;
      } while (bVar2);
    }
    else {
      do {
        plVar7 = plVar1;
        plVar1 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
    if (plVar7 != param_1 + 1) {
      uVar3 = param_3;
      FUN_1001158d4(param_3,plVar7 + 4);
      if ((int)uVar3 == 0) {
LAB_1001157c0:
        plVar4 = param_1;
        func_0x000107c2adb4(param_1,&plStack_58,param_3);
        goto LAB_1001157d4;
      }
      plVar6 = (long *)*plVar4;
    }
    plStack_58 = param_2;
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar7;
      plStack_58 = plVar7;
    }
  }
LAB_1001157d4:
  param_2 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    return (long *)*plVar4;
  }
LAB_1001157dc:
  plVar5 = (long *)0x58;
  func_0x000107c60e20();
  FUN_1001152a0(plVar5 + 4,param_4);
  FUN_1001154b4(plVar5 + 6,param_4 + 0x10);
  FUN_100115880(param_1,plStack_58,param_2,plVar5);
  return plVar5;
}



/* Entry: 100115880; end: 1001158d3;  */

void FUN_100115880(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_100047ebc(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1001158d4; end: 100115987;  */

bool FUN_1001158d4(ulong *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 auStack_38 [24];
  
  uVar6 = *param_1;
  if (uVar6 == 0) {
    bVar5 = (uint)param_1[1] < *(uint *)(param_2 + 1);
  }
  else {
    if (*param_2 == 0) {
      FUN_10002d4d8(auStack_38,&UNK_10f587c98);
      func_0x000107c2ad58(auStack_38);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10011596c);
      (*pcVar4)();
    }
    uVar2 = (uint)param_1[1] >> 2;
    uVar3 = *(uint *)(param_2 + 1) >> 2;
    uVar1 = uVar3;
    if (uVar2 <= uVar3) {
      uVar1 = uVar2;
    }
    func_0x000107c610b0(uVar6,*param_2,uVar1);
    bVar5 = true;
    if ((uVar6 & 0x80000000) == 0) {
      bVar5 = (int)uVar6 == 0 && uVar2 < uVar3;
    }
  }
  return bVar5;
}



/* Entry: 100115988; end: 100115a17;  */

bool FUN_100115988(long param_1,ulong param_2,long param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 auStack_38 [24];
  
  if (param_1 == 0) {
    bVar2 = (uint)param_2 == param_4;
  }
  else {
    uVar3 = param_2 >> 2 & 0x3fffffff;
    if ((uint)uVar3 == param_4 >> 2) {
      if (param_3 == 0) {
        FUN_10002d4d8(auStack_38,&UNK_10f587c98);
        func_0x000107c2ad58(auStack_38);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001159fc);
        (*pcVar1)();
      }
      func_0x000107c610b0(param_1,param_3,uVar3);
      bVar2 = (int)param_1 == 0;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}



/* Entry: 100115a18; end: 100115a87; -[SCCameraHardwareResourceImpl capturerStateUpdateObservable] */

void FUN_100115a18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100115a88; end: 100115c6b;  */

void FUN_100115a88(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar16;
  
  lVar16 = param_1 + 8;
  func_0x000100115a40(lVar16,&UNK_10f587bf6);
  uVar8 = (undefined1)lVar16;
  FUN_100115e08();
  uVar17 = param_1 + 8;
  func_0x000100115a40(uVar17,&UNK_10f587c06);
  FUN_100115e08();
  lVar16 = param_1 + 8;
  func_0x000100115a40(lVar16,&UNK_10f587c14);
  iVar9 = (int)lVar16;
  FUN_100115e08();
  lVar16 = param_1 + 8;
  func_0x000100115a40(lVar16,&UNK_10f587c1f);
  iVar10 = (int)lVar16;
  FUN_100115e08();
  lVar16 = param_1 + 8;
  func_0x000100115a40(lVar16,&UNK_10f587c3c);
  iVar11 = (int)lVar16;
  FUN_100115e08();
  lVar16 = param_1 + 8;
  func_0x000100115a40(lVar16,&UNK_10f587c4d);
  iVar12 = (int)lVar16;
  FUN_100115e08();
  uVar18 = param_1 + 8;
  func_0x000100115a40(uVar18,&UNK_10f587c5f);
  FUN_100116c5c();
  lVar16 = param_1 + 8;
  func_0x000100115a40(lVar16,&UNK_10f587c6a);
  iVar13 = (int)lVar16;
  FUN_100115e08();
  lVar16 = param_1 + 8;
  func_0x000100115a40(lVar16,&UNK_10f587c76);
  iVar14 = (int)lVar16;
  FUN_100115e08();
  param_1 = param_1 + 8;
  func_0x000100115a40(param_1,&UNK_10f587c84);
  iVar15 = (int)param_1;
  FUN_100115e08();
  puVar19 = (undefined8 *)0xe8;
  func_0x000107c60e20();
  *puVar19 = &PTR_DAT_110b1c988;
  *(undefined1 *)(puVar19 + 1) = uVar8;
  puVar19[0x17] = 0;
  puVar19[0x18] = 0;
  puVar19[3] = 0;
  puVar19[2] = 0;
  puVar19[5] = 0;
  puVar19[4] = 0;
  puVar19[7] = 0;
  puVar19[6] = 0;
  puVar19[9] = 0;
  puVar19[8] = 0;
  puVar19[0xb] = 0;
  puVar19[10] = 0;
  puVar19[0xd] = 0;
  puVar19[0xc] = 0;
  puVar19[0xf] = 0;
  puVar19[0xe] = 0;
  puVar19[0x11] = 0;
  puVar19[0x10] = 0;
  puVar19[0x13] = 0;
  puVar19[0x12] = 0;
  puVar19[0x15] = 0;
  puVar19[0x14] = 0;
  *(undefined1 *)(puVar19 + 0x16) = 0;
  uVar1 = 0x100000000000000;
  if (iVar15 == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x1000000000000;
  if (iVar14 == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x10000000000;
  if (iVar13 == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x100000000;
  if (iVar12 == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x1000000;
  if (iVar11 == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x10000;
  if (iVar10 == 0) {
    uVar6 = 0;
  }
  uVar7 = 0x100;
  if (iVar9 == 0) {
    uVar7 = 0;
  }
  puVar19[0x19] = 0;
  puVar19[0x1a] = uVar7 | uVar17 & 0xffffffff | uVar6 | uVar5 | uVar4 | uVar3 | uVar2 | uVar1;
  puVar19[0x1b] = uVar18 & 0xffffffff;
  *(undefined1 *)(puVar19 + 0x1c) = 0;
  return;
}



/* Entry: 100115c6c; end: 100115ceb;  */

long * FUN_100115c6c(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      plVar2 = plVar5 + 4;
      FUN_1001158d4(plVar2,param_2);
      lVar1 = 8;
      if ((int)plVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (FUN_1001158d4(param_2,plVar4 + 4), (int)param_2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}



/* Entry: 100115cec; end: 100115e07;  */

long FUN_100115cec(long *param_1,long param_2,int param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_148 [24];
  long lStack_130;
  uint auStack_128 [65];
  undefined1 uStack_21;
  
  if ((char)param_1[1] == '\0') {
    lVar3 = 0;
  }
  else {
    if ((char)param_1[1] != '\a') {
      func_0x000107c2ac5c(&lStack_130);
      func_0x000107c2ac6c(&lStack_130,&UNK_10f588047,0x43);
      func_0x000107c2ac60(auStack_148,auStack_128,&uStack_21);
      func_0x000107c2ad58(auStack_148);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100115db4);
      (*pcVar1)();
    }
    auStack_128[0] = (param_3 - (int)param_2) * 4;
    lVar2 = *param_1;
    lStack_130 = param_2;
    FUN_100115c6c(lVar2,&lStack_130);
    lVar3 = 0;
    if (*param_1 + 8 != lVar2) {
      lVar3 = lVar2 + 0x30;
    }
    if ((lStack_130 != 0) && ((auStack_128[0] & 3) == 1)) {
      func_0x000107c60fd0();
    }
  }
  return lVar3;
}



/* Entry: 100115e08; end: 100115eef;  */

byte FUN_100115e08(double *param_1)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [263];
  undefined1 uStack_21;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 < 2) {
    bVar3 = 0;
    if (bVar1 == 0) goto LAB_100115e70;
    if (bVar1 != 1) {
LAB_100115e84:
      func_0x000107c2ac5c(auStack_130);
      func_0x000107c2ac6c(auStack_130,&UNK_10f587ef7,0x21);
      func_0x000107c2ac60(auStack_148,auStack_128,&uStack_21);
      func_0x000107c2ad58(auStack_148);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100115ec0);
      (*pcVar2)();
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 == 3) {
      bVar3 = 0.0 < *param_1 || *param_1 < 0.0;
    }
    else {
      if (bVar1 != 5) goto LAB_100115e84;
      bVar3 = *(byte *)param_1;
    }
    goto LAB_100115e70;
  }
  bVar3 = *param_1 != 0.0;
LAB_100115e70:
  return bVar3 & 1;
}



/* Entry: 100115ef0; end: 100116003; -[SCBatteryLogger initWithNetworkMonitor:blizzardLogger:idleMonitor:applicationLifecycleEvents:capturerStateUpdate:managedCapturerStateCoordinator:] */

undefined8
FUN_100115ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c470d0();
  func_0x000107c3ba24(param_1,param_2,puVar1,param_4,param_5,param_3,param_6,param_7,param_8);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100116004; end: 10011603b; -[SCCameraDeviceSettingsBuilder withResolutionConstraint:] */

long FUN_100116004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10011603c; end: 100116043; -[SCCameraDeviceSettings mediaSubtypeConstraint] */

undefined8 FUN_10011603c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100116044; end: 10011605b; -[SCAExperimentUserTreatment setStudyName:] */

void FUN_100116044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dce678,3,param_3,0);
  return;
}



/* Entry: 10011605c; end: 100116117; -[SCAMapSerializable setField:fieldNumber:value:type:] */

/* WARNING: Possible PIC construction at 0x0001001160d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001160fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001160dc) */
/* WARNING: Removing unreachable block (ram,0x000100116100) */

void FUN_10011605c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c4d960(puVar1,param_2,param_4);
  func_0x000107c61180();
  func_0x000107c4f534(param_1);
  func_0x000107c61180();
  func_0x000107c56bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100116118; end: 100116123; -[SCAMapSerializable protoFieldNumberDict] */

void FUN_100116118(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 100116124; end: 10011623b; -[SCAMapSerializable setField:value:type:] */

/* WARNING: Possible PIC construction at 0x000100116188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001161a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001161cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100116218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001161d0) */
/* WARNING: Removing unreachable block (ram,0x0001001161a8) */
/* WARNING: Removing unreachable block (ram,0x00010011618c) */
/* WARNING: Removing unreachable block (ram,0x00010011621c) */

void FUN_100116124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c40794(param_4);
  func_0x000107c4f52c(param_1);
  func_0x000107c61180();
  func_0x000107c56bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10011623c; end: 100116247; -[SCAMapSerializable protoDictionary] */

void FUN_10011623c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 100116248; end: 100116253; -[SCAMapSerializable rawDictionary] */

void FUN_100116248(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 100116254; end: 10011625f; -[SCAMapSerializable fieldTypeDict] */

void FUN_100116254(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 100116260; end: 100116277; -[SCAExperimentUserTreatment setExperimentId:] */

void FUN_100116260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e6e738,2,param_3,0);
  return;
}



/* Entry: 100116278; end: 1001162af;  */

void FUN_100116278(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1548;
  func_0x000107c61168();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  *param_1 = puVar1;
  return;
}


