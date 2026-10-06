/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1089613a0; end: 108961453;  */

void FUN_1089613a0(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  puVar5 = (uint *)param_1[1];
  lVar6 = param_1[2];
  param_1[2] = param_2;
  plVar4 = param_1;
  func_0x000107516d6c();
  lVar8 = param_1[1];
  for (lVar7 = 0; lVar6 != lVar7; lVar7 = lVar7 + 1) {
    if (-1 < *(char *)(lVar1 + lVar7)) {
      uVar2 = *puVar5;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)uVar2;
      func_0x0001089629a8();
      func_0x000108962900((SUB164(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
                          (int)((long)&PTR_LOOP_110c8acd8 + (ulong)uVar2) * -0x14c7d297) & 0x7f);
      func_0x0001089629b4();
      *(undefined8 *)(lVar8 + (long)plVar4 * 8) = *(undefined8 *)puVar5;
    }
    puVar5 = puVar5 + 2;
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 108961454; end: 108961467;  */

ulong FUN_108961454(undefined8 param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_2) * -0x622015f714c7d297;
}



/* Entry: 108961468; end: 1089614af;  */

undefined8 FUN_108961468(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_1089606c8(*param_3);
  param_3 = (undefined8 *)*param_3;
  FUN_10896077c(param_3,*(undefined1 *)(*param_1 + 1));
  (**(code **)(*(long *)*param_3 + 0x28))();
  return 1;
}



/* Entry: 1089614b0; end: 1089614b3;  */

undefined8 FUN_1089614b0(void)

{
  return 0;
}



/* Entry: 1089614b4; end: 1089614db;  */

undefined8 FUN_1089614b4(long param_1)

{
  func_0x0001089627b8();
  if (param_1 != 0) {
    func_0x0001089627cc();
  }
  func_0x000108962850();
  return 1;
}



/* Entry: 1089614dc; end: 108961527;  */

undefined8 FUN_1089614dc(void)

{
  undefined1 *unaff_x19;
  
  func_0x000108962b1c();
  func_0x00010896273c();
  func_0x0001089627d8();
  *unaff_x19 = 2;
  func_0x0001089627f4();
  func_0x0001089615c4();
  return 1;
}



/* Entry: 108961528; end: 10896152b;  */

undefined8 FUN_108961528(void)

{
  return 0;
}



/* Entry: 10896152c; end: 10896164f;  */

undefined8 FUN_10896152c(void)

{
  undefined1 *unaff_x19;
  
  func_0x000108962b1c();
  func_0x00010896273c();
  func_0x0001089627d8();
  *unaff_x19 = 2;
  func_0x0001089627f4();
  func_0x0001089615c4();
  return 1;
}



/* Entry: 108961650; end: 108961653;  */

undefined8 FUN_108961650(void)

{
  return 0;
}



/* Entry: 108961654; end: 10896167b;  */

undefined8 FUN_108961654(long param_1)

{
  func_0x0001089627b8();
  if (param_1 != 0) {
    func_0x0001089627cc();
  }
  func_0x000108962850();
  return 1;
}



/* Entry: 10896167c; end: 108961683;  */

undefined8 FUN_10896167c(void)

{
  return 1;
}



/* Entry: 108961684; end: 10896169b;  */

undefined8 FUN_108961684(void)

{
  func_0x00010896285c();
  return 1;
}



/* Entry: 10896169c; end: 1089616bb;  */

undefined8 FUN_10896169c(void)

{
  func_0x000108962780();
  func_0x00010896298c();
  return 1;
}



/* Entry: 1089616bc; end: 1089616c3;  */

undefined8 FUN_1089616bc(void)

{
  return 1;
}



/* Entry: 1089616c4; end: 108961757;  */

undefined8 FUN_1089616c4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auStack_b0 [96];
  undefined1 uStack_50;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  param_3 = (undefined8 *)*param_3;
  puVar1 = param_3;
  FUN_10896077c(param_3,*(undefined1 *)((long)param_1 + 1));
  plVar2 = (long *)*puVar1;
  FUN_108959644(auStack_b0,param_3 + 0x14);
  uStack_50 = *(undefined1 *)(param_3 + 0x20);
  uStack_4c = *param_1;
  uStack_44 = (undefined4)param_1[1];
  uStack_38 = *(undefined8 *)((long)param_1 + 0x14);
  uStack_40 = (undefined4)*(undefined8 *)((long)param_1 + 0xc);
  uStack_3c = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
  (**(code **)(*plVar2 + 0x20))(plVar2,auStack_b0);
  FUN_1089596d8(auStack_b0);
  return 1;
}



/* Entry: 108961758; end: 10896177b;  */

undefined8 FUN_108961758(void)

{
  func_0x00010896275c();
  func_0x00010896282c();
  return 1;
}



/* Entry: 10896177c; end: 10896177f;  */

undefined8 FUN_10896177c(void)

{
  return 0;
}



/* Entry: 108961780; end: 1089617eb;  */

undefined8 FUN_108961780(void)

{
  func_0x00010896275c();
  func_0x00010896282c();
  return 1;
}



/* Entry: 1089617ec; end: 1089617ef;  */

undefined8 FUN_1089617ec(void)

{
  return 0;
}



/* Entry: 1089617f0; end: 108961817;  */

undefined8 FUN_1089617f0(long param_1)

{
  func_0x0001089627b8();
  if (param_1 != 0) {
    func_0x0001089627cc();
  }
  func_0x000108962850();
  return 1;
}



/* Entry: 108961818; end: 10896181b;  */

undefined8 FUN_108961818(void)

{
  return 0;
}



/* Entry: 10896181c; end: 1089618b7;  */

undefined8 FUN_10896181c(long param_1,undefined8 param_2,long *param_3)

{
  byte *pbVar1;
  long extraout_x8;
  char cVar2;
  undefined1 *unaff_x19;
  
  func_0x000108962b1c();
  if (*(char *)(*param_3 + 0x100) == '\x01') {
    func_0x0001089627a4();
    cVar2 = *(char *)(param_1 + 1);
    if (cVar2 != '\x02') {
      cVar2 = '\x1e';
    }
    pbVar1 = (byte *)(extraout_x8 + 0x68);
    FUN_1089618b8(pbVar1,cVar2);
    if ((*pbVar1 & 1) == 0) {
      func_0x000108962a74();
      func_0x00010896270c();
      FUN_108962a80(4);
      func_0x000108962a74();
      func_0x00010896270c();
      if (((ulong)pbVar1 & 1) == 0) {
        func_0x00010896270c(*unaff_x19);
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 1089618b8; end: 10896197f;  */

long FUN_1089618b8(ulong *param_1,uint param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  long extraout_x8;
  ulong uVar3;
  ulong extraout_x9;
  byte bVar4;
  ulong uVar5;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x11;
  ulong uVar7;
  long extraout_x12;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  ulong uVar17;
  
  lVar2 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)param_2;
  uVar3 = *param_1;
  Hint_Prefetch(uVar3,0,2,0);
  uVar5 = SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + (ulong)param_2) * -0x622015f714c7d297;
  uVar7 = uVar3 >> 0xc ^ uVar5 >> 7;
  bVar4 = (byte)uVar5 & 0x7f;
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  bVar10 = bVar4;
  bVar11 = bVar4;
  bVar12 = bVar4;
  bVar13 = bVar4;
  bVar14 = bVar4;
  bVar15 = bVar4;
  bVar16 = bVar4;
  while( true ) {
    uVar17 = *(ulong *)(uVar3 + (uVar7 & uVar6));
    for (uVar8 = CONCAT17(-((byte)(uVar17 >> 0x38) == bVar16),
                          CONCAT16(-((byte)(uVar17 >> 0x30) == bVar15),
                                   CONCAT15(-((byte)(uVar17 >> 0x28) == bVar14),
                                            CONCAT14(-((byte)(uVar17 >> 0x20) == bVar13),
                                                     CONCAT13(-((byte)(uVar17 >> 0x18) == bVar12),
                                                              CONCAT12(-((byte)(uVar17 >> 0x10) ==
                                                                        bVar11),CONCAT11(-((byte)(
                                                  uVar17 >> 8) == bVar10),-((byte)uVar17 == bVar4)))
                                                  ))))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = (uVar7 & uVar6) + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar6;
      if (*(uint *)(uVar5 + uVar9 * 8) == param_2) {
        if (uVar3 != 0) {
          return uVar5 + uVar9 * 8 + 4;
        }
        goto LAB_10896197c;
      }
    }
    func_0x000108962b30(lVar2);
    if ((uVar17 & 1) != 0) break;
    lVar2 = extraout_x8 + 8;
    uVar7 = lVar2 + extraout_x12;
    uVar3 = extraout_x9;
    uVar5 = extraout_x10;
    uVar6 = extraout_x11;
  }
LAB_10896197c:
  func_0x000108962b04();
  return 0;
}



/* Entry: 108961980; end: 108961983;  */

undefined8 FUN_108961980(void)

{
  return 0;
}



/* Entry: 108961984; end: 1089619eb;  */

undefined8 FUN_108961984(long param_1)

{
  func_0x0001089627b8();
  if (param_1 != 0) {
    func_0x0001089627cc();
  }
  func_0x000108962850();
  return 1;
}



/* Entry: 1089619ec; end: 1089619f3;  */

undefined8 FUN_1089619ec(void)

{
  return 1;
}



/* Entry: 1089619f4; end: 108961a0b;  */

undefined8 FUN_1089619f4(void)

{
  func_0x00010896285c();
  return 1;
}



/* Entry: 108961a0c; end: 108961a2b;  */

undefined8 FUN_108961a0c(void)

{
  func_0x000108962780();
  func_0x00010896298c();
  return 1;
}



/* Entry: 108961a2c; end: 108961a2f;  */

undefined8 FUN_108961a2c(void)

{
  return 0;
}



/* Entry: 108961a30; end: 108961aa7;  */

byte FUN_108961a30(undefined8 param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  undefined8 *unaff_x21;
  
  bVar1 = *(byte *)(*param_3 + 0x100);
  if ((bVar1 & 1) == 0) {
    func_0x00010896273c();
    func_0x0001089627d8();
    FUN_108962a80(5);
    FUN_1089606c8(*unaff_x21);
    func_0x000108962a74();
    func_0x00010896270c();
  }
  return bVar1 ^ 1;
}



/* Entry: 108961aa8; end: 108961b33;  */

undefined8
FUN_108961aa8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  long *plVar1;
  code *extraout_x8;
  long *plVar2;
  long in_stack_00000008;
  
  func_0x000108962b1c();
  plVar2 = (long *)*param_3;
  plVar1 = plVar2;
  FUN_10896077c(plVar2,*(undefined1 *)(param_1 + 1));
  if (plVar2[0x11] == *plVar1) {
    in_stack_00000008 = param_1;
    func_0x000108962b64(*param_5);
    (*extraout_x8)();
    *param_5 = 5;
    in_stack_00000008 = param_1;
    FUN_108961b84(&stack0x00000008);
  }
  return 1;
}



/* Entry: 108961b34; end: 108961b37;  */

undefined8 FUN_108961b34(void)

{
  return 0;
}



/* Entry: 108961b38; end: 108961b5f;  */

undefined8 FUN_108961b38(long param_1)

{
  func_0x0001089627b8();
  if (param_1 != 0) {
    func_0x0001089627cc();
  }
  func_0x000108962850();
  return 1;
}



/* Entry: 108961b60; end: 108961b6b;  */

undefined8 FUN_108961b60(void)

{
  return 1;
}



/* Entry: 108961b6c; end: 108961b83;  */

undefined8 FUN_108961b6c(void)

{
  func_0x00010896285c();
  return 1;
}



/* Entry: 108961b84; end: 108961bb3;  */

undefined8 FUN_108961b84(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  FUN_108960e20(*(undefined8 *)(*param_3 + 0x20),*param_1);
  func_0x00010896298c();
  return 1;
}



/* Entry: 108961bb4; end: 108961bb7;  */

undefined8 FUN_108961bb4(void)

{
  return 0;
}



/* Entry: 108961bb8; end: 108961d07;  */

uint FUN_108961bb8(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  code *extraout_x8;
  char cVar4;
  
  func_0x000108962b1c();
  uVar1 = (uint)*(byte *)(param_1 + 1);
  FUN_108961d08(*(byte *)(param_1 + 1),*param_3);
  if (uVar1 == 0) {
    uVar2 = (ulong)*(byte *)(param_1 + 1);
    FUN_108961d08(uVar2,*param_3);
    if ((uVar2 & 1) == 0) {
      cVar4 = *(char *)(param_1 + 1);
      if (cVar4 != '\x02') {
        cVar4 = '\x1e';
      }
      puVar3 = (undefined1 *)(*param_3 + 0x68);
      FUN_1089618b8(puVar3,cVar4);
      *puVar3 = 1;
    }
    uVar1 = (uint)uVar2 ^ 1;
  }
  else {
    func_0x000108962b64(*param_5);
    (*extraout_x8)();
    *param_5 = 0;
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 108961d08; end: 108961d3b;  */

undefined1 FUN_108961d08(char param_1,long param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0x1e;
  if (param_1 != '\x02') {
    uVar2 = 2;
  }
  puVar1 = (undefined1 *)(param_2 + 0x68);
  FUN_1089618b8(puVar1,uVar2);
  return *puVar1;
}



/* Entry: 108961d3c; end: 108961d3f;  */

undefined8 FUN_108961d3c(void)

{
  return 0;
}



/* Entry: 108961d40; end: 108961d67;  */

undefined8 FUN_108961d40(long param_1)

{
  func_0x0001089627b8();
  if (param_1 != 0) {
    func_0x0001089627cc();
  }
  func_0x000108962850();
  return 1;
}



/* Entry: 108961d68; end: 108961d73;  */

undefined8 FUN_108961d68(void)

{
  return 1;
}



/* Entry: 108961d74; end: 108961d8b;  */

undefined8 FUN_108961d74(void)

{
  func_0x00010896285c();
  return 1;
}



/* Entry: 108961d8c; end: 108961ddf;  */

undefined8 FUN_108961d8c(void)

{
  func_0x000108962780();
  func_0x00010896298c();
  return 1;
}



/* Entry: 108961de0; end: 108961de3;  */

undefined8 FUN_108961de0(void)

{
  return 0;
}



/* Entry: 108961de4; end: 108961e6b;  */

undefined8 FUN_108961de4(void)

{
  func_0x000108962b1c();
  func_0x00010896273c();
  func_0x0001089627d8();
  func_0x00010896291c();
  func_0x000108962a74();
  func_0x00010896270c();
  return 1;
}



/* Entry: 108961e6c; end: 108961ea3;  */

undefined8 FUN_108961e6c(void)

{
  undefined1 *in_x4;
  
  func_0x0001089627d8(*in_x4);
  *in_x4 = 0;
  return 1;
}



/* Entry: 108961ea4; end: 108961ea7;  */

undefined8 FUN_108961ea4(void)

{
  return 0;
}



/* Entry: 108961ea8; end: 108961ecf;  */

undefined8 FUN_108961ea8(long param_1)

{
  func_0x0001089627b8();
  if (param_1 != 0) {
    func_0x0001089627cc();
  }
  func_0x000108962850();
  return 1;
}



/* Entry: 108961ed0; end: 108961edb;  */

undefined8 FUN_108961ed0(void)

{
  return 1;
}



/* Entry: 108961edc; end: 108961ef3;  */

undefined8 FUN_108961edc(void)

{
  func_0x00010896285c();
  return 1;
}



/* Entry: 108961ef4; end: 108961f13;  */

undefined8 FUN_108961ef4(void)

{
  func_0x000108962780();
  func_0x00010896298c();
  return 1;
}



/* Entry: 108961f14; end: 108961f17;  */

undefined8 FUN_108961f14(void)

{
  return 0;
}



/* Entry: 108961f18; end: 108961f5b;  */

undefined8 FUN_108961f18(void)

{
  func_0x000108962b1c();
  func_0x00010896273c();
  func_0x0001089627d8();
  func_0x000108962b78();
  func_0x000108962a74();
  func_0x00010896270c();
  return 1;
}



/* Entry: 108961f5c; end: 108961f5f;  */

undefined8 FUN_108961f5c(void)

{
  return 0;
}



/* Entry: 108961f60; end: 108961f87;  */

undefined8 FUN_108961f60(long param_1)

{
  func_0x0001089627b8();
  if (param_1 != 0) {
    func_0x0001089627cc();
  }
  func_0x000108962850();
  return 1;
}



/* Entry: 108961f88; end: 108961f93;  */

undefined8 FUN_108961f88(void)

{
  return 1;
}



/* Entry: 108961f94; end: 108961fab;  */

undefined8 FUN_108961f94(void)

{
  func_0x00010896285c();
  return 1;
}



/* Entry: 108961fac; end: 108961fcb;  */

undefined8 FUN_108961fac(void)

{
  func_0x000108962780();
  func_0x00010896298c();
  return 1;
}



/* Entry: 108961fcc; end: 108961fcf;  */

undefined8 FUN_108961fcc(void)

{
  return 0;
}



/* Entry: 108961fd0; end: 10896248b;  */

undefined8 * FUN_108961fd0(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  long *plVar24;
  long lStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f0 [13];
  undefined4 uStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  
  plVar20 = param_1;
  plVar13 = param_3;
  func_0x000108962ac4();
  plVar14 = (long *)*plVar13;
  puVar7 = (undefined8 *)(ulong)*(byte *)((long)plVar20 + 9);
  plVar20 = plVar14;
  uStack_70 = extraout_x8;
  FUN_10896077c();
  uVar5 = plVar14[0x11] == *plVar20;
  if (!(bool)uVar5) goto LAB_108962024;
  puVar7 = (undefined8 *)*param_1;
  if (*(int *)((long)param_1 + 0x24) != 0) {
    uVar5 = *(int *)((long)param_1 + 0x24) == 1;
    if ((bool)uVar5) {
      (**(code **)(**(long **)(*param_3 + 0x20) + 0x10))();
    }
    goto LAB_108962024;
  }
  puVar6 = *(undefined8 **)(*param_3 + 0x98);
  (**(code **)*puVar6)();
  uVar5 = (int)puVar6 == 1;
  if (!(bool)uVar5) goto LAB_108962024;
  plVar20 = (long *)(param_2 + 0x90);
  puVar12 = *(undefined8 **)(param_2 + 0x70);
  puVar6 = *(undefined8 **)(param_2 + 0x78);
  uVar2 = (long)puVar6 - (long)puVar12;
  lVar10 = 0;
  if (uVar2 != 0) {
    lVar10 = ((long)puVar6 - (long)puVar12) * 4 + -1;
  }
  uStack_88 = 0xb;
  puVar22 = (undefined8 *)(param_2 + 0x68);
  pcStack_80 = FUN_108962554;
  pcStack_78 = FUN_108962554;
  uVar8 = *(ulong *)(param_2 + 0x88);
  uVar5 = 0;
  if (lVar10 == *plVar20 + uVar8) {
    if (uVar8 < 0x20) {
      puVar21 = (undefined8 *)(param_2 + 0x80);
      puVar15 = (undefined8 *)*puVar21;
      puVar18 = *(undefined8 **)(param_2 + 0x68);
      if ((ulong)((long)puVar15 - (long)puVar18) <= uVar2) {
        plVar14 = (long *)((long)puVar15 - (long)puVar18 >> 2);
        if (puVar15 == puVar18) {
          plVar14 = (long *)0x1;
        }
        puStack_128 = puVar21;
        func_0x0001089624b4();
        plVar16 = (long *)((long)plVar14 + uVar2);
        plVar23 = plVar14 + (long)puVar7;
        lVar10 = 0x1000;
        puVar15 = puVar7;
        plStack_148 = plVar14;
        plStack_140 = plVar16;
        plStack_138 = plVar16;
        plStack_130 = plVar23;
        __Znwm();
        uStack_150 = 0x20;
        plVar24 = plVar16;
        plStack_158 = plVar20;
        if (uVar2 == (long)puVar7 * 8) {
          if (puVar6 == puVar12) {
            plVar24 = (long *)0x1;
            lStack_160 = lVar10;
            puStack_100 = puVar21;
            func_0x0001089624b4();
            plStack_108 = plVar24 + (long)puVar15;
            plVar13 = plVar16;
            plStack_120 = plVar24;
            plStack_118 = plVar24;
            plStack_110 = plVar24;
            FUN_10896248c(&plStack_120,plVar16);
            plVar1 = plStack_108;
            plVar24 = plStack_110;
            plVar9 = plStack_118;
            plVar19 = plStack_120;
            plStack_148 = plStack_120;
            plStack_140 = plStack_118;
            plStack_130 = plStack_108;
            plStack_120 = plVar14;
            plStack_118 = plVar16;
            plStack_110 = plVar16;
            plStack_108 = plVar23;
            func_0x000108962514(&plStack_120);
            plVar14 = plVar19;
            plVar16 = plVar9;
            plVar23 = plVar1;
          }
          else {
            plVar16 = plVar16 + (((long)plVar16 - (long)plVar14 >> 3) + 1) / -2;
            plVar24 = plVar16;
            plStack_140 = plVar16;
          }
        }
        plVar19 = plVar24 + 1;
        *plVar24 = lVar10;
        lStack_160 = 0;
        plVar24 = *(long **)(param_2 + 0x78);
        plStack_138 = plVar19;
        while( true ) {
          plVar9 = *(long **)(param_2 + 0x70);
          uVar5 = plVar24 == plVar9;
          if ((bool)uVar5) break;
          plVar9 = plVar16;
          if (plVar16 == plVar14) {
            if (plVar19 < plVar23) {
              plVar13 = (long *)((long)plVar19 - (long)plVar14);
              plVar1 = plVar19 + (((long)plVar23 - (long)plVar19 >> 3) + 1) / 2;
              plVar9 = (long *)((long)plVar1 - ((long)plVar19 - (long)plVar14));
              plVar19 = plVar1;
              if (plVar13 != (long *)0x0) {
                _memmove(plVar9,plVar16);
              }
            }
            else {
              lVar10 = (long)plVar23 - (long)plVar14 >> 2;
              if ((long)plVar23 - (long)plVar14 == 0) {
                lVar10 = 1;
              }
              puStack_100 = puVar21;
              func_0x0001089624b4(lVar10);
              func_0x000108962a58(lVar10 << 1);
              plVar13 = plVar19;
              FUN_10896248c(&plStack_120,plVar14);
              plVar4 = plStack_108;
              plVar3 = plStack_110;
              plVar9 = plStack_118;
              plVar1 = plStack_120;
              plStack_120 = plVar14;
              plStack_118 = plVar16;
              plStack_110 = plVar19;
              plStack_108 = plVar23;
              func_0x000108962514(&plStack_120);
              plVar14 = plVar1;
              plVar19 = plVar3;
              plVar23 = plVar4;
            }
          }
          plVar24 = plVar24 + -1;
          plVar16 = plVar9 + -1;
          *plVar16 = *plVar24;
        }
        plStack_148 = *(long **)(param_2 + 0x68);
        *(long **)(param_2 + 0x68) = plVar14;
        *(long **)(param_2 + 0x70) = plVar16;
        plStack_130 = *(long **)(param_2 + 0x80);
        plStack_138 = *(long **)(param_2 + 0x78);
        *(long **)(param_2 + 0x78) = plVar19;
        *(long **)(param_2 + 0x80) = plVar23;
        plStack_140 = plVar9;
        func_0x0001089624e8(&lStack_160);
        func_0x000108962514(&plStack_148);
        goto LAB_108962354;
      }
      uVar17 = 0x1000;
      __Znwm();
      if (puVar15 == puVar6) {
        if (puVar12 == puVar18) {
          lVar10 = (long)puVar15 - (long)puVar12 >> 2;
          if (puVar6 == puVar12) {
            lVar10 = 1;
          }
          puStack_100 = puVar21;
          func_0x0001089624b4(lVar10);
          func_0x000108962a58(lVar10 << 1);
          plVar13 = *(long **)(param_2 + 0x78);
          FUN_10896248c(&plStack_120,*(undefined8 *)(param_2 + 0x70));
          func_0x000108962964();
          puVar12 = *(undefined8 **)(param_2 + 0x70);
        }
        puVar12[-1] = uVar17;
        puVar7 = *(undefined8 **)(param_2 + 0x70);
        puVar6 = *(undefined8 **)(param_2 + 0x78);
        puVar12 = puVar7 + -1;
        *(undefined8 **)(param_2 + 0x70) = puVar12;
        goto LAB_1089620f8;
      }
      *puVar6 = uVar17;
      uVar5 = 0;
    }
    else {
      *(ulong *)(param_2 + 0x88) = uVar8 - 0x20;
      puVar7 = puVar12 + 1;
LAB_1089620f8:
      uVar17 = *puVar12;
      *(undefined8 **)(param_2 + 0x70) = puVar7;
      uVar5 = 0;
      if (puVar6 == *(undefined8 **)(param_2 + 0x80)) {
        puVar12 = (undefined8 *)*puVar22;
        if (puVar7 < puVar12 || (long)puVar7 - (long)puVar12 == 0) {
          uVar5 = (long)puVar6 - (long)puVar12 == 0;
          plVar13 = (long *)((long)puVar6 - (long)puVar12 >> 2);
          if ((bool)uVar5) {
            plVar13 = (long *)0x1;
          }
          plVar14 = plVar13;
          puStack_100 = (undefined8 *)(param_2 + 0x80);
          func_0x0001089624b4();
          plStack_118 = plVar14 + ((ulong)plVar13 >> 2);
          plStack_108 = plVar14 + (long)puVar7;
          plVar13 = *(long **)(param_2 + 0x78);
          plStack_120 = plVar14;
          plStack_110 = plStack_118;
          FUN_10896248c(&plStack_120,*(undefined8 *)(param_2 + 0x70));
          func_0x000108962964();
          puVar6 = *(undefined8 **)(param_2 + 0x78);
        }
        else {
          lVar10 = (((long)puVar7 - (long)puVar12 >> 3) + 1) / -2;
          puVar12 = puVar7 + lVar10;
          plVar14 = (long *)((long)puVar6 - (long)puVar7);
          uVar5 = plVar14 == (long *)0x0;
          if (!(bool)uVar5) {
            plVar13 = plVar14;
            _memmove(puVar12);
            puVar7 = *(undefined8 **)(param_2 + 0x70);
          }
          puVar6 = (undefined8 *)((long)puVar12 + (long)plVar14);
          *(undefined8 **)(param_2 + 0x70) = puVar7 + lVar10;
          *(undefined8 **)(param_2 + 0x78) = puVar6;
        }
      }
      *puVar6 = uVar17;
    }
    *(long *)(param_2 + 0x78) = *(long *)(param_2 + 0x78) + 8;
  }
LAB_108962354:
  FUN_108960d80();
  *(undefined4 *)(puVar22 + 0xd) = uStack_88;
  puVar22[0xe] = pcStack_80;
  puVar22[0xf] = pcStack_78;
  puVar7 = auStack_f0;
  (*pcStack_78)();
  *plVar20 = *plVar20 + 1;
  FUN_108960db0(auStack_f0);
LAB_108962024:
  func_0x000108962994(uStack_70);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x0001089624e8(&lStack_160);
    func_0x000108962514(&plStack_148);
    puVar6 = auStack_f0;
    FUN_108960db0();
    func_0x000108962a28();
    lVar11 = (long)plVar13 - (long)puVar7;
    lVar10 = (long)puVar6[2] + lVar11;
    puVar12 = (undefined8 *)puVar6[2];
    for (; lVar11 != 0; lVar11 = lVar11 + -8) {
      *puVar12 = *puVar7;
      puVar12 = puVar12 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar6[2] = lVar10;
    return puVar6;
  }
  return (undefined8 *)0x1;
}



/* Entry: 10896248c; end: 1089624b3;  */

void FUN_10896248c(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1089624b4; end: 108962553;  */

undefined1  [16] FUN_1089624b4(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 108962554; end: 10896255f;  */

void FUN_108962554(void)

{
  return;
}



/* Entry: 108962560; end: 10896258f;  */

undefined8 FUN_108962560(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  (**(code **)**(undefined8 **)(*param_3 + 0x88))(*(undefined8 **)(*param_3 + 0x88),*param_1);
  return 1;
}



/* Entry: 108962590; end: 108962593;  */

undefined8 FUN_108962590(void)

{
  return 0;
}



/* Entry: 108962594; end: 1089625bb;  */

undefined8 FUN_108962594(undefined8 param_1,undefined8 param_2,long *param_3)

{
  (**(code **)(**(long **)(*param_3 + 0x98) + 8))();
  return 1;
}



/* Entry: 1089625bc; end: 10896265f;  */

void FUN_1089625bc(long param_1)

{
  ulong uVar1;
  
  FUN_108960db0(*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 5) * 8) +
                (*(ulong *)(param_1 + 0x20) & 0x1f) * 0x80);
  uVar1 = *(long *)(param_1 + 0x20) + 1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(ulong *)(param_1 + 0x20) = uVar1;
  if (0x3f < uVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x20;
  }
  return;
}



/* Entry: 108962660; end: 108962663;  */

void FUN_108962660(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9f590;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108962664; end: 108962677;  */

void FUN_108962664(void)

{
  func_0x000108962688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108962678; end: 108962697;  */

void FUN_108962678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108962680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 108962698; end: 1089626bf;  */

long FUN_108962698(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1089626c0; end: 108962a7f;  */

void FUN_1089626c0(void)

{
  long unaff_x20;
  long unaff_x21;
  
                    /* WARNING: Could not recover jumptable at 0x0001089626f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 +
              (long)*(int *)(*(long *)(*(long *)(unaff_x20 + 0xb0) +
                                      (*(ulong *)(unaff_x20 + 200) >> 5) * 8) +
                             (*(ulong *)(unaff_x20 + 200) & 0x1f) * 0x80 + 0x68) * 0x10))
            (unaff_x20 + 0x40);
  return;
}



/* Entry: 108962a80; end: 108962aa7;  */

undefined8 * FUN_108962a80(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 in_w8;
  int extraout_w10;
  undefined1 *unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 *puVar4;
  
  *unaff_x19 = in_w8;
  puVar4 = (undefined8 *)*unaff_x21;
  puVar1 = puVar4;
  FUN_10896077c(puVar4,*(undefined1 *)(unaff_x23 + 1));
  uVar2 = *puVar1;
  lVar3 = puVar1[1];
  if (lVar3 != 0) {
    do {
      func_0x000108962a18();
    } while (extraout_w10 != 0);
  }
  puVar4[0x11] = uVar2;
  puVar4[0x12] = lVar3;
  func_0x000108962a30();
  return puVar4 + 0x11;
}



/* Entry: 108962aa8; end: 108962b97;  */

void FUN_108962aa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9eec0;
  param_1[1] = &PTR_DAT_110a9ef38;
  return;
}



/* Entry: 108962b98; end: 108962ceb;  */

void FUN_108962b98(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_110 [8];
  ulong uStack_108;
  uint uStack_100;
  undefined1 auStack_70 [38];
  byte bStack_4a;
  undefined1 uStack_49;
  undefined1 uStack_46;
  
  FUN_108962cec(auStack_110);
  func_0x000108962cf4(auStack_110);
  FUN_1089a2f50();
  FUN_1089a2d18(auStack_110,param_2 + 0xd8,param_2 + 0xf0,*(undefined1 *)(param_2 + 0x2c),
                *(undefined1 *)(param_2 + 0x2d),param_2 + 0x108);
  bStack_4a = *(byte *)(param_2 + 0x21) ^ 1;
  uStack_49 = *(undefined1 *)(param_2 + 0x22);
  uStack_100 = uStack_100 | 0xc00;
  uStack_46 = 0xc4;
  func_0x000107c30180(&UNK_10f4ed6c4,0x18,0);
  uStack_100 = uStack_100 | 0x4000;
  FUN_1089a30d0(auStack_110,param_3);
  FUN_1089a3008(auStack_110,param_4);
  uStack_100 = uStack_100 | 8;
  if ((uStack_108 & 1) != 0) {
    uStack_108 = *(ulong *)(uStack_108 & 0xfffffffffffffffe);
  }
  func_0x00010539283c(auStack_70,*(long *)(param_2 + 0xb8),
                      *(long *)(param_2 + 0xc0) - *(long *)(param_2 + 0xb8),uStack_108);
  func_0x000108963348();
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x10) = 2;
  func_0x000108962d04(param_1);
  func_0x00010b4fd9d8();
  func_0x00010b4fd010(auStack_110);
  return;
}



/* Entry: 108962cec; end: 108962d13;  */

undefined8 * FUN_108962cec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cf61e8;
  param_1[1] = 0;
  func_0x00010b4fcfcc();
  return param_1;
}



/* Entry: 108962d14; end: 108962dc3;  */

void FUN_108962d14(undefined8 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_f0 [8];
  ulong uStack_e8;
  uint uStack_e0;
  undefined1 auStack_90 [84];
  undefined4 uStack_3c;
  
  puVar1 = auStack_f0;
  FUN_108962dc4(auStack_f0);
  uStack_e0 = uStack_e0 | 0x1001;
  uStack_3c = 7;
  if ((uStack_e8 & 1) != 0) {
    uStack_e8 = *(ulong *)(uStack_e8 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(auStack_90,param_2,uStack_e8);
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x000108962dcc();
    *(undefined8 *)(puVar1 + 0x18) = *param_1;
    *(uint *)(puVar1 + 0x10) = *(uint *)(puVar1 + 0x10) | 1;
  }
  func_0x000108963388();
  func_0x000108963368();
  return;
}



/* Entry: 108962dc4; end: 108962ddb;  */

undefined8 * FUN_108962dc4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cf6198;
  param_1[1] = 0;
  func_0x00010b4ff7f8();
  return param_1;
}



/* Entry: 108962ddc; end: 108962e23;  */

void FUN_108962ddc(long param_1,undefined8 param_2)

{
  func_0x000108963348(param_2,param_2);
  *(undefined4 *)(param_1 + 0x38) = 6;
  *(undefined4 *)(param_1 + 0x10) = 2;
  FUN_10896311c(param_1 + 0x18);
  return;
}



/* Entry: 108962e24; end: 108962f4b;  */

void FUN_108962e24(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  uint uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  undefined4 uStack_3c;
  
  FUN_108962dc4(auStack_f0);
  uStack_e0 = uStack_e0 | 0x1000;
  uStack_3c = 0x10;
  puVar2 = auStack_f0;
  FUN_108962f4c();
  bVar1 = *(char *)(param_2 + 1) != '\x02';
  if (bVar1) {
    uStack_120 = 0;
    uStack_114 = *(undefined8 *)(param_2 + 0x10);
    uStack_11c = *(undefined8 *)(param_2 + 8);
    uStack_10c = *(undefined4 *)(param_2 + 0x18);
  }
  else {
    uStack_120 = *(undefined4 *)(param_2 + 4);
    uStack_114 = 0;
    uStack_11c = 0;
    uStack_10c = 0;
  }
  uStack_124 = (uint)bVar1;
  func_0x00010bd4358c(auStack_108,&uStack_124);
  *(uint *)(puVar2 + 0x10) = *(uint *)(puVar2 + 0x10) | 1;
  uVar3 = *(ulong *)(puVar2 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x000107c3024c(puVar2 + 0x18,auStack_108,uVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  *(uint *)(puVar2 + 0x20) =
       (uint)(*(ushort *)(param_2 + 2) >> 8) | (*(ushort *)(param_2 + 2) & 0xff00ff) << 8;
  *(uint *)(puVar2 + 0x10) = *(uint *)(puVar2 + 0x10) | 2;
  FUN_108962ddc(param_1,auStack_f0);
  func_0x00010b4ff840(auStack_f0);
  return;
}



/* Entry: 108962f4c; end: 108962f5b;  */

void FUN_108962f4c(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  if (*(long *)(param_1 + 0x70) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089633a8();
    }
    func_0x0001089632d8();
    *(ulong *)(param_1 + 0x70) = uVar1;
  }
  return;
}



/* Entry: 108962f5c; end: 108962faf;  */

void FUN_108962f5c(void)

{
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  undefined4 uStack_2c;
  
  FUN_108962dc4(auStack_e0);
  uStack_d0 = uStack_d0 | 0x1000;
  uStack_2c = 3;
  func_0x000108963388();
  func_0x000108963368();
  return;
}



/* Entry: 108962fb0; end: 10896311b;  */

void FUN_108962fb0(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0xa8) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089633a8();
    }
    func_0x000108962fe4();
    *(ulong *)(param_1 + 0xa8) = uVar1;
  }
  return;
}



/* Entry: 10896311c; end: 10896319f;  */

ulong FUN_10896311c(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *extraout_x8;
  ulong *extraout_x8_00;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_1[1];
  puVar1 = param_1;
  func_0x000107c28174();
  if ((int)uVar2 < (int)puVar1) {
    func_0x000108963324();
    uVar2 = *extraout_x8;
    if (uVar2 != param_2) {
      uVar3 = *(ulong *)(uVar2 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      uVar4 = *(ulong *)(param_2 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      if (uVar3 == uVar4) {
        func_0x00010b50019c(uVar2);
      }
      else {
        func_0x00010b500168(uVar2);
      }
    }
    return uVar2;
  }
  func_0x00010563f22c(param_1);
  uVar2 = *param_1;
  if ((uVar2 & 1) != 0) {
    *(int *)(uVar2 - 1) = *(int *)(uVar2 - 1) + 1;
  }
  uVar2 = param_1[2];
  FUN_108963204(uVar2,param_2);
  func_0x000108963324();
  *extraout_x8_00 = uVar2;
  return uVar2;
}



/* Entry: 1089631a0; end: 108963203;  */

long FUN_1089631a0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b50019c(param_1);
    }
    else {
      func_0x00010b500168(param_1);
    }
  }
  return param_1;
}



/* Entry: 108963204; end: 108963227;  */

void FUN_108963204(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_108963228(&uStack_18);
  return;
}



/* Entry: 108963228; end: 10896326f;  */

void FUN_108963228(long *param_1)

{
  if (*param_1 == 0) {
    __Znwm(0xc0);
  }
  else {
    func_0x00010b4d80e0(*param_1,0xc0);
  }
  FUN_108963270();
  return;
}



/* Entry: 108963270; end: 1089632a3;  */

undefined8 FUN_108963270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b4ff7cc();
  FUN_1089631a0(param_1,param_3);
  return param_1;
}



/* Entry: 1089632a4; end: 10896331b;  */

void FUN_1089632a4(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089633a8();
    }
    func_0x0001089632d8();
    *(ulong *)(param_1 + 0x70) = uVar1;
  }
  return;
}



/* Entry: 10896331c; end: 1089633b3;  */

void FUN_10896331c(void)

{
  return;
}



/* Entry: 1089633b4; end: 108963407;  */

void FUN_1089633b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x78;
  __Znwm();
  FUN_10894d820();
  *param_1 = uVar1;
  return;
}



/* Entry: 108963408; end: 10896354b;  */

long ** FUN_108963408(long *param_1,undefined8 param_2,long param_3)

{
  long **pplVar1;
  undefined8 *puVar2;
  long **pplVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x9;
  long lVar5;
  undefined1 auStack_c8 [24];
  long *plStack_b0;
  undefined8 **ppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long *plStack_90;
  long *plStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long alStack_68 [6];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  alStack_68[0] = param_3 * 1000;
  FUN_10894f5a8(*param_1,alStack_68);
  param_1 = (long *)*param_1;
  FUN_1080dea64(alStack_68,param_2);
  lVar5 = *param_1;
  puVar2 = (undefined8 *)0xa0;
  plStack_90 = alStack_68;
  plStack_80 = alStack_68;
  func_0x00010bd3faa4();
  puStack_70 = (undefined8 *)0x0;
  *puVar2 = 0;
  puVar2[1] = FUN_108963578;
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puStack_78 = puVar2;
  FUN_1080dea64(puVar2 + 7,alStack_68);
  FUN_10894fe4c(puVar2 + 0xd,0,0,param_1 + 8);
  *(undefined1 *)(param_1 + 2) = 1;
  puStack_70 = puVar2;
  FUN_10894f6c4(*(undefined8 *)(lVar5 + 0x58),lVar5 + 0x28,param_1 + 1,param_1 + 3,puVar2);
  puStack_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  pplVar1 = &plStack_80;
  FUN_108963554();
  FUN_1089639e0(alStack_68);
  func_0x0001089639ec(uStack_38);
  if (extraout_x9 == extraout_x8) {
    return pplVar1;
  }
  ___stack_chk_fail();
  pplVar3 = pplVar1;
  FUN_1089639e0(alStack_68);
  func_0x000108963a04();
  plVar4 = *pplVar3;
  pcStack_98 = FUN_10896354c;
  plStack_b0 = param_1;
  ppuStack_a8 = pplVar1;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010895066c();
  pplVar1 = (long **)*plVar4;
  FUN_10894f024(pplVar1,plVar4 + 1,auStack_c8);
  func_0x000107c2a674(auStack_c8,&UNK_10f4ed4fe);
  return pplVar1;
}



/* Entry: 10896354c; end: 108963553;  */

undefined8 FUN_10896354c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  param_1 = (undefined8 *)*param_1;
  func_0x00010895066c();
  uVar1 = *param_1;
  FUN_10894f024(uVar1,param_1 + 1,auStack_38);
  func_0x000107c2a674(auStack_38,&UNK_10f4ed4fe);
  return uVar1;
}



/* Entry: 108963554; end: 108963577;  */

undefined8 FUN_108963554(undefined8 param_1)

{
  FUN_108963788();
  return param_1;
}



/* Entry: 108963578; end: 108963787;  */

void FUN_108963578(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  long extraout_x8;
  long extraout_x9;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 uStack_169;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [48];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [32];
  long lStack_e0;
  undefined1 auStack_c8 [40];
  long lStack_a0;
  undefined8 auStack_90 [9];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_188 = (undefined1 *)(param_2 + 0x38);
  lStack_180 = param_2;
  lStack_178 = param_2;
  func_0x00010bd3f54c(auStack_100,param_2 + 0x68);
  FUN_1080dea64(auStack_148,(undefined1 *)(param_2 + 0x38));
  uStack_110 = *(undefined8 *)(param_2 + 0x20);
  uStack_118 = *(undefined8 *)(param_2 + 0x18);
  uStack_108 = *(undefined8 *)(param_2 + 0x28);
  puStack_188 = auStack_148;
  FUN_108963788(&puStack_188);
  if (param_1 != 0) {
    if (lStack_e0 == 0) {
      func_0x0001089637ec(auStack_148);
    }
    else {
      func_0x00010bd3f5e0(auStack_c8,auStack_100,&UNK_10df77d6e,0);
      if (*(code **)(lStack_a0 + 0x18) == (code *)0x0) {
        pcVar3 = *(code **)(lStack_a0 + 0x10);
        puVar1 = auStack_90;
        func_0x00010896383c(puVar1,auStack_148);
        puStack_160 = &uStack_169;
        func_0x00010bd42e30();
        FUN_10894fc9c();
        uStack_150 = 0;
        puStack_158 = puVar1;
        func_0x00010896383c(puVar1 + 1,auStack_90);
        *puVar1 = FUN_108963890;
        puStack_158 = (undefined8 *)0x0;
        puStack_168 = puVar1;
        FUN_10896386c(&puStack_160);
        (*pcVar3)(auStack_c8,&puStack_168);
        FUN_10894e00c(&puStack_168);
        FUN_1089639e0(auStack_90);
      }
      else {
        (**(code **)(lStack_a0 + 0x18))(auStack_c8,FUN_108963868,auStack_148);
      }
      func_0x00010bd43af0(auStack_c8);
    }
    DataMemoryBarrier(2,3);
  }
  FUN_1089639e0(auStack_148);
  func_0x00010bd43af0(auStack_100);
  FUN_108963554();
  func_0x0001089639ec(uStack_48);
  if (extraout_x9 == extraout_x8) {
    return;
  }
  ___stack_chk_fail();
  FUN_10894e00c(&puStack_168);
  FUN_1089639e0(auStack_90);
  func_0x00010bd43af0(auStack_c8);
  DataMemoryBarrier(2,3);
  FUN_1089639e0(auStack_148);
  func_0x00010bd43af0(auStack_100);
  ppuVar2 = &puStack_188;
  FUN_108963554();
  func_0x000108963a04();
  puVar4 = ppuVar2[2];
  if (puVar4 != (undefined1 *)0x0) {
    func_0x00010bd43af0(puVar4 + 0x68);
    (*(code *)**(undefined8 **)(puVar4 + 0x40))(puVar4 + 0x40);
    ppuVar2[2] = (undefined1 *)0x0;
  }
  if (ppuVar2[1] != (undefined1 *)0x0) {
    func_0x00010bd3facc(ppuVar2[1],0xa0);
    ppuVar2[1] = (undefined1 *)0x0;
  }
  return;
}



/* Entry: 108963788; end: 108963867;  */

void FUN_108963788(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    func_0x00010bd43af0(lVar1 + 0x68);
    (*(code *)**(undefined8 **)(lVar1 + 0x40))((undefined8 *)(lVar1 + 0x40));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bd3facc(*(long *)(param_1 + 8),0xa0);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 108963868; end: 10896386b;  */

void FUN_108963868(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [24];
  
  FUN_10894fc44(auStack_38,0x59,0);
  puVar1 = param_1 + 6;
  func_0x00010894fa8c(puVar1,auStack_38);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)*param_1)(param_1);
  }
  return;
}



/* Entry: 10896386c; end: 10896388f;  */

undefined8 FUN_10896386c(undefined8 param_1)

{
  FUN_108963938();
  return param_1;
}



/* Entry: 108963890; end: 108963937;  */

void FUN_108963890(undefined8 param_1,int param_2)

{
  undefined1 **ppuVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_71;
  undefined1 auStack_70 [72];
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_90;
  func_0x0001089639ec(param_1);
  puStack_90 = &uStack_71;
  uStack_88 = param_1;
  uStack_80 = param_1;
  uStack_28 = extraout_x9;
  func_0x00010896383c(auStack_70,extraout_x8 + 8);
  FUN_108963938(&puStack_90);
  if (param_2 != 0) {
    func_0x0001089637ec(auStack_70);
  }
  func_0x0001089639e0(auStack_70);
  FUN_10896386c();
  func_0x0001089639ec(uStack_28);
  if (extraout_x9_00 == extraout_x8_00) {
    return;
  }
  ___stack_chk_fail();
  FUN_10896386c();
  func_0x000108963a04();
  if (*(long *)((long)ppuVar1 + 0x10) != 0) {
    (*(code *)**(undefined8 **)(*(long *)((long)ppuVar1 + 0x10) + 0x10))();
    *(undefined8 *)((long)ppuVar1 + 0x10) = 0;
  }
  if (*(long *)((long)ppuVar1 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894fe18();
    *(undefined8 *)((long)ppuVar1 + 8) = 0;
  }
  return;
}


