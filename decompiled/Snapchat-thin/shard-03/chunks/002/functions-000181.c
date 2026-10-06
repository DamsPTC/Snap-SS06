/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026a0d30; end: 1026a0d8b; -[_TtC23MapRouterImplementation26FriendStoryPlaylistFetcher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026a0d30(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb4550 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb4558));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb4560));
  param_1 = param_1 + _DAT_112eb4570;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026a0d8c; end: 1026a0dab;  */

void FUN_1026a0d8c(void)

{
  func_0x000107c61168(&PTR_PTR_112858308);
  return;
}



/* Entry: 1026a0dac; end: 1026a0e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1026a0dac(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  lVar3 = param_1;
  FUN_1026a0d8c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112eb4560) = 0;
  *(undefined8 *)(lVar4 + _DAT_112eb4568) = 0;
  func_0x000107c61614(lVar4 + _DAT_112eb4570,0);
  plVar1 = (long *)(lVar4 + _DAT_112eb4550);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  *(undefined8 *)(lVar4 + _DAT_112eb4558) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_50,puVar2);
  func_0x000107c61180();
  func_0x0001026a05d4();
  func_0x000107c61170(plVar5);
  func_0x000107c61170(param_3);
  return (undefined1 *)plVar5;
}



/* Entry: 1026a0e88; end: 1026a0edb;  */

void FUN_1026a0e88(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1026a0edc;
  plVar3[0x16] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x17] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x18] = lVar1;
  plVar3[0x19] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026a0724,lVar1,lVar2);
  return;
}



/* Entry: 1026a0edc; end: 1026a0f17;  */

void FUN_1026a0edc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026a0f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026a0f18; end: 1026a0f2f;  */

long FUN_1026a0f18(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 1026a0f30; end: 1026a0f73;  */

void FUN_1026a0f30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5f6b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126d5360;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d5f6b8 = puVar1;
  return;
}



/* Entry: 1026a0f74; end: 1026a100b;  */

undefined8 FUN_1026a0f74(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026a100c; end: 1026a102f;  */

void FUN_1026a100c(void)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 1026a1030; end: 1026a10f7;  */

undefined * FUN_1026a1030(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x10);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126aad60;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined **)(unaff_x20 + 0x10) = puVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 1026a10f8; end: 1026a1123;  */

void FUN_1026a10f8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026a1124; end: 1026a1133;  */

undefined1  [16] FUN_1026a1124(void)

{
  return ZEXT816(0x110534fb0);
}



/* Entry: 1026a1134; end: 1026a1153;  */

void FUN_1026a1134(void)

{
  func_0x000107c61168(&PTR_PTR_112eb45f0);
  return;
}



/* Entry: 1026a1154; end: 1026a129f;  */

/* WARNING: Possible PIC construction at 0x0001026a1190: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a1194) */
/* WARNING: Removing unreachable block (ram,0x0001026a11bc) */
/* WARNING: Removing unreachable block (ram,0x0001026a11d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a1154(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112eb4678);
  lVar6 = lVar7;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar6 == 0) {
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112eb4668) + _DAT_112eb7ef8);
    uVar2 = *puVar1;
    uVar4 = puVar1[1];
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112eb4668) + _DAT_112eb7f00);
    uVar3 = *puVar1;
    uVar5 = puVar1[1];
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    func_0x00010437b394(uVar2,uVar4,uVar3,uVar5);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uVar5);
    func_0x000107c42c1c(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1026a12a0; end: 1026a12ff; -[_TtC23MapRouterImplementation15AddressWorkflow init] */

void FUN_1026a12a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.AddressWorkflow",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026a12cc);
  (*pcVar1)();
}



/* Entry: 1026a1300; end: 1026a137f; -[_TtC23MapRouterImplementation15AddressWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026a1300(long param_1)

{
  func_0x000100cffa3c(*(undefined8 *)(param_1 + _DAT_112eb4658),
                      ((undefined8 *)(param_1 + _DAT_112eb4658))[1]);
  func_0x000100cffa3c(*(undefined8 *)(param_1 + _DAT_112eb4660),
                      ((undefined8 *)(param_1 + _DAT_112eb4660))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb4668));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb4670));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb4678));
  param_1 = param_1 + _DAT_112eb4680;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026a1380; end: 1026a139f;  */

void FUN_1026a1380(void)

{
  func_0x000107c61168(&PTR_PTR_1128583e8);
  return;
}



/* Entry: 1026a13a0; end: 1026a13a3;  */

/* WARNING: Possible PIC construction at 0x0001026a1190: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a1194) */
/* WARNING: Removing unreachable block (ram,0x0001026a11bc) */
/* WARNING: Removing unreachable block (ram,0x0001026a11d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a13a0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112eb4678);
  lVar6 = lVar7;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar6 == 0) {
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112eb4668) + _DAT_112eb7ef8);
    uVar2 = *puVar1;
    uVar4 = puVar1[1];
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112eb4668) + _DAT_112eb7f00);
    uVar3 = *puVar1;
    uVar5 = puVar1[1];
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    func_0x00010437b394(uVar2,uVar4,uVar3,uVar5);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uVar5);
    func_0x000107c42c1c(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1026a13a4; end: 1026a1433;  */

bool FUN_1026a13a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1026e6b90(0);
  func_0x000107c61480(param_1,uVar1);
  return param_1 != 0;
}



/* Entry: 1026a1434; end: 1026a145b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026a1434(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112eb4658);
  func_0x000107c61428(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*(code *)&SUB_100b64c10)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1026a145c; end: 1026a149b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026a145c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4658;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4658,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026a149c;
  return auVar2;
}



/* Entry: 1026a149c; end: 1026a14b3;  */

void FUN_1026a149c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026a14b4; end: 1026a1513;  */

undefined1  [16] FUN_1026a14b4(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_3);
  func_0x000107c61428(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*param_4)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1026a1514; end: 1026a1527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a1514(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4660);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_1026a17a0(uVar2,uVar3);
  return;
}



/* Entry: 1026a1528; end: 1026a1583;  */

void FUN_1026a1528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,code *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_5);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*param_6)(uVar2,uVar3);
  return;
}



/* Entry: 1026a1584; end: 1026a15c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026a1584(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4660;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4660,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026a17a0;
  return auVar2;
}



/* Entry: 1026a15c4; end: 1026a168b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a15c4(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112eb4678);
  lVar2 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8();
    lVar2 = unaff_x20 + _DAT_112eb4680;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c50358();
      func_0x000107c615e8(lVar2);
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4658);
    func_0x000107c61428(puVar1,auStack_48,0,0);
    pcVar5 = (code *)*puVar1;
    if (pcVar5 != (code *)0x0) {
      uVar4 = puVar1[1];
      func_0x000107c6157c(uVar4);
      (*pcVar5)();
      func_0x000100cffa3c(pcVar5,uVar4);
    }
  }
  return;
}



/* Entry: 1026a168c; end: 1026a16b3; -[_TtC23MapRouterImplementation15AddressWorkflow didCloseSelectionTray] */

void FUN_1026a168c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1026a15c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026a16b4; end: 1026a179f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a16b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_5;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112eb4658);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112eb4660);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar3 = _DAT_112eb4680;
  func_0x000107c61614(lVar4 + _DAT_112eb4680,0);
  *(undefined8 *)(lVar4 + _DAT_112eb4668) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112eb4670) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112eb4678) = param_3;
  func_0x000107c61604(lVar4 + lVar3,param_4);
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = param_5;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_60,puVar2);
  return;
}



/* Entry: 1026a17a0; end: 1026a17ab;  */

void FUN_1026a17a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026a17ac; end: 1026a22af;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a17ac(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long unaff_x20;
  undefined8 uVar18;
  long lVar19;
  ulong *puVar20;
  code *pcVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined *apuStack_c0 [4];
  
  lVar19 = _DAT_112eb46c0;
  lVar14 = *(long *)(unaff_x20 + _DAT_112eb46c0);
  uVar16 = *(ulong *)(lVar14 + 0x38);
  if (uVar16 >> 0x3e == 0) {
    if (*(long *)((uVar16 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_1026a1908;
LAB_1026a1808:
    uVar18 = 0;
    if (*(long *)(*(long *)(lVar14 + 0x30) + 0x10) != 1) goto LAB_1026a1908;
    lVar14 = *(long *)(unaff_x20 + _DAT_112eb46e8);
    FUN_1026a1030();
    func_0x000105edbe6c();
    func_0x000107c61170(uVar18);
    uVar16 = *(ulong *)(lVar14 + 0x10);
    func_0x000105edbdf4(uVar16,1);
    FUN_1026a22b0();
    uVar3 = uVar16;
    FUN_1026a1030();
    if ((uVar16 & 1) != 0) goto LAB_1026a1ba0;
LAB_1026a1868:
    func_0x000105edbf5c();
    func_0x000107c61170(uVar3);
    plVar1 = (long *)(unaff_x20 + _DAT_112eb46b8);
    func_0x000107c61428(plVar1,&puStack_f0,0,0);
    pcVar21 = (code *)*plVar1;
    if (pcVar21 != (code *)0x0) {
      lVar14 = plVar1[1];
      uVar18 = *(undefined8 *)(*(long *)(unaff_x20 + lVar19) + 0x30);
      FUN_1026e772c(0);
      func_0x000107c610f8();
      func_0x000100cffa6c(pcVar21,lVar14);
      func_0x000107c61434(uVar18);
      func_0x0001026e74cc();
LAB_1026a1c04:
      (*pcVar21)();
      func_0x000107c61170(uVar18);
      func_0x000100cffa5c(pcVar21,lVar14);
    }
  }
  else {
    uVar3 = uVar16 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar16) {
      uVar3 = uVar16;
    }
    func_0x000107c60480();
    lVar14 = *(long *)(unaff_x20 + lVar19);
    if (uVar3 == 0) goto LAB_1026a1808;
LAB_1026a1908:
    if (*(long *)(lVar14 + 0x48) == 0) {
      bVar2 = 1 < *(ulong *)(*(long *)(lVar14 + 0x30) + 0x10);
    }
    else {
      bVar2 = false;
    }
    uVar16 = *(ulong *)(lVar14 + 0x38);
    if (uVar16 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uVar16 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar16) {
        uVar3 = uVar16;
      }
      func_0x000107c60480();
    }
    uVar22 = *(ulong *)(unaff_x20 + _DAT_112eb46e0);
    uVar16 = uVar22;
    func_0x000107c4c458(uVar22);
    func_0x000107c61180();
    func_0x000107c5ea20();
    dVar26 = param_1;
    func_0x000107c615e8(uVar16);
    uVar16 = uVar22;
    func_0x000107c4c2f8();
    func_0x000107c61180();
    func_0x000107c4c8c8();
    func_0x000107c615e8();
    FUN_1026a1030();
    if (((bool)(uVar3 != 0 | bVar2)) && (param_1 < dVar26 + -2.220446049250313e-16)) {
      func_0x000105edbee4(uVar16,1);
      func_0x000107c61170(uVar16);
      puVar9 = *(undefined **)(*(long *)(unaff_x20 + lVar19) + 0x30);
      uVar16 = *(ulong *)(*(long *)(unaff_x20 + lVar19) + 0x38);
      if (uVar16 >> 0x3e == 0) {
        uVar3 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = uVar16 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar16) {
          uVar3 = uVar16;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434();
      func_0x000107c61434(uVar16);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar3 != 0) {
        uVar24 = 0;
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          if ((uVar16 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x1026a226c);
              (*pcVar21)();
            }
            uVar4 = *(ulong *)(uVar16 + uVar24 * 8 + 0x20);
            func_0x000107c61174();
            lVar19 = _DAT_112fed688;
          }
          else {
            uVar4 = uVar24;
            FUN_1026a60d0(uVar24,uVar16);
            lVar19 = _DAT_112fed688;
          }
          _DAT_112fed688 = lVar19;
          if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x1026a1b6c);
            (*pcVar21)();
          }
          uVar25 = uVar24 + 1;
          func_0x000107c61428(uVar4 + lVar19,apuStack_c0,0,0);
          lVar14 = *(long *)(uVar4 + lVar19);
          func_0x000107c61434(lVar14);
          func_0x000107c61170(uVar4);
          uVar4 = *(ulong *)(lVar14 + 0x10);
          lVar19 = *(long *)(puVar8 + 0x10);
          if (SCARRY8(lVar19,uVar4)) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x1026a2270);
            (*pcVar21)();
          }
          puVar5 = puVar8;
          func_0x000107c61558();
          if (((int)puVar5 == 0) ||
             (uVar15 = *(ulong *)(puVar8 + 0x18) >> 1, (long)uVar15 < (long)(lVar19 + uVar4))) {
            func_0x0001000d182c();
            uVar15 = *(ulong *)(puVar5 + 0x18) >> 1;
            puVar8 = puVar5;
            if (*(long *)(lVar14 + 0x10) == 0) goto LAB_1026a1a28;
LAB_1026a1b08:
            if (uVar15 - *(long *)(puVar5 + 0x10) < uVar4) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x1026a2278);
              (*pcVar21)();
            }
            func_0x000107c6140c(puVar5 + *(long *)(puVar5 + 0x10) * 0x10 + 0x20,lVar14 + 0x20,uVar4,
                                PTR___sSSN_11034da80);
            func_0x000107c6142c(lVar14);
            if (uVar4 != 0) {
              if (SCARRY8(*(long *)(puVar5 + 0x10),uVar4)) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x1026a227c);
                (*pcVar21)();
              }
              *(ulong *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + uVar4;
            }
          }
          else {
            puVar5 = puVar8;
            if (*(long *)(lVar14 + 0x10) != 0) goto LAB_1026a1b08;
LAB_1026a1a28:
            func_0x000107c6142c(lVar14);
            puVar5 = puVar8;
            if (uVar4 != 0) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x1026a2274);
              (*pcVar21)();
            }
          }
          uVar24 = uVar24 + 1;
          puVar8 = puVar5;
        } while (uVar25 != uVar3);
      }
      func_0x000107c6142c(uVar16);
      puStack_f0 = puVar9;
      func_0x00010109a32c(puVar5);
      puVar9 = puStack_f0;
      puVar5 = puStack_f0;
      func_0x000100403a6c();
      func_0x000107c6142c(puVar9);
      puVar20 = (ulong *)(puVar5 + 0x38);
      uVar3 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
      uVar16 = 0xffffffffffffffff;
      if (-uVar3 < 0x40) {
        uVar16 = ~(-1L << (-uVar3 & 0x3f));
      }
      uVar16 = uVar16 & *puVar20;
      lVar23 = *(long *)(unaff_x20 + _DAT_112eb46d0);
      func_0x000107c61434(puVar5);
      lVar19 = 0;
      lVar14 = lVar19;
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while( true ) {
        while (uVar16 != 0) {
          uVar24 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
          uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
          uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
          uVar16 = uVar16 - 1 & uVar16;
          puVar17 = (undefined8 *)
                    (*(long *)(puVar5 + 0x30) + LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) * 0x10 +
                    lVar19 * 0x400);
          uVar18 = *puVar17;
          uVar30 = puVar17[1];
          func_0x000107c61434(uVar30);
          func_0x000107c5fadc(uVar18,uVar30);
          lVar6 = lVar23;
          func_0x000107c4e67c();
          func_0x000107c61180();
          func_0x000107c6142c(uVar30);
          func_0x000107c61170(uVar18);
          lVar14 = lVar19;
          if (lVar6 != 0) {
            puVar8 = puVar9;
            func_0x000107c61550();
            if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
               (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar9 >> 0x3e == 0) {
                puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar9) {
                  puVar7 = puVar9;
                }
                func_0x000107c60480(puVar7);
              }
              puVar8 = (undefined *)0x0;
              FUN_10264996c(0,puVar7 + 1,1,puVar9);
            }
            uVar4 = (ulong)puVar8 & 0xffffffffffffff8;
            uVar24 = *(ulong *)(uVar4 + 0x10);
            puVar9 = puVar8;
            if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar24) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar4 + 0x18));
              FUN_10264996c(puVar9,uVar24 + 1,1,puVar8);
              uVar4 = (ulong)puVar9 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar4 + 0x10) = uVar24 + 1;
            *(long *)(uVar4 + uVar24 * 8 + 0x20) = lVar6;
          }
        }
        bVar2 = SCARRY8(lVar19,1);
        lVar19 = lVar19 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x1026a2268);
          (*pcVar21)();
        }
        if ((long)(0x3f - uVar3 >> 6) <= lVar19) break;
        uVar16 = puVar20[lVar19];
      }
      func_0x00010109bac0(puVar5,puVar20,~uVar3,lVar14,0);
      puVar8 = puVar9;
      FUN_10263a8d4(puVar9);
      func_0x000107c6142c(puVar9);
      puVar9 = puVar8;
      func_0x000107c5fc48(puVar8,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(puVar8);
      pcStack_d0 = FUN_1026a2304;
      uStack_c8 = 0;
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      dVar27 = 5.47077039858234e-315;
      uStack_e8 = 0x42000000;
      puStack_e0 = &UNK_1011450fc;
      puStack_d8 = &UNK_110535068;
      ppuVar10 = &puStack_f0;
      func_0x000107c60bc4(ppuVar10);
      func_0x000108d31a2c(puVar9,ppuVar10);
      dVar26 = dVar27;
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(puVar9);
      uVar16 = uVar22;
      func_0x000107c4c458();
      func_0x000107c61180();
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c51768();
      uVar3 = uVar16;
      uVar18 = param_3;
      uVar28 = param_4;
      func_0x000107c3f24c(dVar27,param_2,param_3,param_4,dVar26 + 52.0 + 70.0 + 20.0,
                          0x4052c00000000000,0x4064000000000000,0x4052c00000000000);
      func_0x000107c61180();
      func_0x000107c615e8(uVar16);
      puVar9 = PTR_PTR_1126b1e08;
      func_0x000107c61168(PTR_PTR_1126b1e08);
      uVar16 = uVar22;
      func_0x000107c4c458(uVar22);
      func_0x000107c61180();
      uVar24 = uVar16;
      func_0x000107c3f040();
      func_0x000107c61180();
      func_0x000107c615e8(uVar16);
      func_0x000107c3ec60(uVar22);
      uVar30 = uVar18;
      func_0x000107c423a4(uVar18,uVar28,puVar9);
      func_0x000107c61170(uVar24);
      uVar16 = uVar22;
      func_0x000107c3f140();
      func_0x000107c61180();
      uVar24 = uVar16;
      func_0x000107c49cd8();
      func_0x000107c61170(uVar16);
      lVar19 = _DAT_112fecff8;
      if ((uVar24 & 1) == 0) {
        func_0x000107c4c458(uVar22);
        func_0x000107c61180();
        func_0x000107c43718(uVar18);
        func_0x000107c615e8(uVar22);
LAB_1026a2194:
        FUN_1026a23a4(dVar27,param_2,param_3,param_4,puVar5);
        func_0x000107c61170(uVar3);
        func_0x000107c6142c(puVar5);
      }
      else {
        uVar29 = *(undefined8 *)(uVar3 + _DAT_112fed000);
        uVar31 = *(undefined8 *)(uVar3 + _DAT_112fecff8);
        puVar17 = (undefined8 *)(uVar3 + _DAT_112fecfe8);
        uVar32 = *puVar17;
        func_0x000107c3ec60(uVar22);
        func_0x000108d316c0(uVar29,uVar31,uVar32,uVar30,uVar28);
        puVar9 = PTR_PTR_1126b1dc8;
        func_0x000107c61168();
        puVar8 = puVar9;
        func_0x000107c5cb10(*puVar17,puVar17[1]);
        func_0x000107c61180();
        if (puVar8 != (undefined *)0x0) {
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c466c0(uVar29);
          uVar30 = *(undefined8 *)(uVar3 + _DAT_112fecff0);
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c466c0(uVar30);
          uVar30 = *(undefined8 *)(uVar3 + lVar19);
          puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c466c0(uVar30);
          puVar13 = puVar9;
          func_0x000107c3f168();
          func_0x000107c61180();
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar12);
          if (puVar13 != (undefined *)0x0) {
            func_0x000107c3dd08(uVar18,puVar9);
            func_0x000107c61180();
            func_0x000107c3f140(uVar22);
            func_0x000107c61180();
            func_0x000107c4d150();
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar13);
            func_0x000107c61170(puVar9);
            func_0x000107c61170(uVar22);
            goto LAB_1026a2194;
          }
          func_0x000107c61170(puVar8);
        }
        func_0x000107c6142c(puVar5);
        func_0x000107c61170(uVar3);
      }
      ppuVar10 = &puStack_f0;
      goto LAB_1026a2200;
    }
    func_0x000105edbe6c(uVar16,1);
    func_0x000107c61170();
    FUN_1026a22b0();
    uVar3 = uVar16;
    FUN_1026a1030();
    if ((uVar16 & 1) == 0) goto LAB_1026a1868;
LAB_1026a1ba0:
    func_0x000105edbfd4();
    func_0x000107c61170(uVar3);
    plVar1 = (long *)(unaff_x20 + _DAT_112eb46b8);
    func_0x000107c61428(plVar1,&puStack_f0,0,0);
    pcVar21 = (code *)*plVar1;
    if (pcVar21 != (code *)0x0) {
      lVar14 = plVar1[1];
      FUN_1026e876c(0);
      func_0x000107c610f8();
      func_0x000107c6157c(lVar14);
      uVar18 = 0x61;
      func_0x0001026e8540(0x61,0,0,0);
      goto LAB_1026a1c04;
    }
  }
  ppuVar10 = apuStack_c0;
LAB_1026a2200:
  puVar17 = (undefined8 *)(unaff_x20 + _DAT_112eb46b0);
  func_0x000107c61428(puVar17,ppuVar10,0,0);
  pcVar21 = (code *)*puVar17;
  if (pcVar21 != (code *)0x0) {
    uVar18 = puVar17[1];
    func_0x000107c6157c(uVar18);
    (*pcVar21)();
    func_0x000100cffa5c(pcVar21,uVar18);
  }
  return;
}



/* Entry: 1026a22b0; end: 1026a2303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026a22b0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112eb46c0) + 0x30);
  if (*(long *)(lVar2 + 0x10) != 1) {
    return 0;
  }
  lVar1 = *(long *)(lVar2 + 0x20);
  if (lVar1 != *(long *)(unaff_x20 + _DAT_112eb46c8) ||
      *(long *)(lVar2 + 0x28) != ((long *)(unaff_x20 + _DAT_112eb46c8))[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 1026a2304; end: 1026a23a3;  */

undefined1  [16] FUN_1026a2304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_3,auStack_50);
  uVar1 = 0;
  FUN_1026a2af4(0,0x112d5ec90,&PTR_PTR_1126bf100);
  puVar2 = &uStack_58;
  func_0x000107c6147c(puVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
  if (((ulong)puVar2 & 1) == 0) {
    param_1 = *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
    param_2 = *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8);
  }
  else {
    func_0x000107c4077c(uStack_58);
    func_0x000107c61170(uStack_58);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1026a23a4; end: 1026a26c7;  */

/* WARNING: Possible PIC construction at 0x0001026a24bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a24c0) */
/* WARNING: Removing unreachable block (ram,0x0001026a24f0) */
/* WARNING: Removing unreachable block (ram,0x0001026a2504) */
/* WARNING: Removing unreachable block (ram,0x0001026a2508) */
/* WARNING: Removing unreachable block (ram,0x0001026a250c) */
/* WARNING: Removing unreachable block (ram,0x0001026a258c) */
/* WARNING: Removing unreachable block (ram,0x0001026a2594) */
/* WARNING: Removing unreachable block (ram,0x0001026a2514) */
/* WARNING: Removing unreachable block (ram,0x0001026a251c) */
/* WARNING: Removing unreachable block (ram,0x0001026a2530) */
/* WARNING: Removing unreachable block (ram,0x0001026a2560) */
/* WARNING: Removing unreachable block (ram,0x0001026a2548) */
/* WARNING: Removing unreachable block (ram,0x0001026a255c) */
/* WARNING: Removing unreachable block (ram,0x0001026a24c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a23a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  ulong *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112eb46d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    return;
  }
  puVar9 = (ulong *)(param_5 + 0x38);
  uVar8 = -1L << ((ulong)*(byte *)(param_5 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar10 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar10 = uVar10 & *puVar9;
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112eb46d0);
  func_0x000107c61434(param_5);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar12 = 0;
  lVar7 = 0;
  do {
    if (uVar10 != 0) {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(param_5 + 0x30) + LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) * 0x10 +
               lVar12 * 0x400);
      puVar6 = (undefined *)*puVar1;
      uVar5 = puVar1[1];
      func_0x000107c61434(uVar5);
      func_0x000107c5fadc(puVar6,uVar5);
      func_0x000107c4e680(uVar11);
      func_0x000107c61180();
      func_0x000107c6142c(uVar5);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar6);
      return;
    }
    lVar12 = lVar7 + 1;
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1026a26c8);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar8 >> 6) <= lVar12) {
      func_0x00010109bac0(param_5,puVar9,~uVar8,0,0);
      func_0x000108d312f8(param_3,param_4,param_1,param_2);
      uVar5 = 0;
      uVar11 = param_3;
      FUN_1026a2af4(0,0x112d5ecd8,&PTR_PTR_1126bf130);
      puVar6 = puVar2;
      func_0x000107c5fc48(puVar2,uVar5);
      func_0x000107c6142c(puVar2);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eb46e0);
      func_0x000107c4c458(uVar5);
      func_0x000107c61180();
      func_0x000107c5ea20();
      func_0x000107c615e8(uVar5);
      func_0x000107c5df4c(param_3,param_4,uVar11,lVar4);
      func_0x000107c615e8(lVar4);
      goto code_r0x000107c61170;
    }
    uVar10 = puVar9[lVar12];
    lVar7 = lVar7 + 1;
  } while( true );
}



/* Entry: 1026a26c8; end: 1026a2727; -[_TtC23MapRouterImplementation15ClusterWorkflow init] */

void FUN_1026a26c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.ClusterWorkflow",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026a26f4);
  (*pcVar1)();
}



/* Entry: 1026a2728; end: 1026a27cb; -[_TtC23MapRouterImplementation15ClusterWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001026a276c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a2770) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a2728(long param_1)

{
  func_0x000100cffa5c(*(undefined8 *)(param_1 + _DAT_112eb46b0),
                      ((undefined8 *)(param_1 + _DAT_112eb46b0))[1]);
  func_0x000100cffa5c(*(undefined8 *)(param_1 + _DAT_112eb46b8),
                      ((undefined8 *)(param_1 + _DAT_112eb46b8))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb46c0));
  return;
}



/* Entry: 1026a27cc; end: 1026a27eb;  */

void FUN_1026a27cc(void)

{
  func_0x000107c61168(&PTR_PTR_1128584d0);
  return;
}



/* Entry: 1026a27ec; end: 1026a27ef;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a27ec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  ulong *puVar20;
  long unaff_x20;
  code *pcVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined *apuStack_c0 [4];
  
  lVar19 = _DAT_112eb46c0;
  lVar14 = *(long *)(unaff_x20 + _DAT_112eb46c0);
  uVar16 = *(ulong *)(lVar14 + 0x38);
  if (uVar16 >> 0x3e == 0) {
    if (*(long *)((uVar16 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_1026a1908;
LAB_1026a1808:
    uVar18 = 0;
    if (*(long *)(*(long *)(lVar14 + 0x30) + 0x10) != 1) goto LAB_1026a1908;
    lVar14 = *(long *)(unaff_x20 + _DAT_112eb46e8);
    FUN_1026a1030();
    func_0x000105edbe6c();
    func_0x000107c61170(uVar18);
    uVar16 = *(ulong *)(lVar14 + 0x10);
    func_0x000105edbdf4(uVar16,1);
    FUN_1026a22b0();
    uVar3 = uVar16;
    FUN_1026a1030();
    if ((uVar16 & 1) != 0) goto LAB_1026a1ba0;
LAB_1026a1868:
    func_0x000105edbf5c();
    func_0x000107c61170(uVar3);
    plVar1 = (long *)(unaff_x20 + _DAT_112eb46b8);
    func_0x000107c61428(plVar1,&puStack_f0,0,0);
    pcVar21 = (code *)*plVar1;
    if (pcVar21 != (code *)0x0) {
      lVar14 = plVar1[1];
      uVar18 = *(undefined8 *)(*(long *)(unaff_x20 + lVar19) + 0x30);
      FUN_1026e772c(0);
      func_0x000107c610f8();
      func_0x000100cffa6c(pcVar21,lVar14);
      func_0x000107c61434(uVar18);
      func_0x0001026e74cc();
LAB_1026a1c04:
      (*pcVar21)();
      func_0x000107c61170(uVar18);
      func_0x000100cffa5c(pcVar21,lVar14);
    }
  }
  else {
    uVar3 = uVar16 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar16) {
      uVar3 = uVar16;
    }
    func_0x000107c60480();
    lVar14 = *(long *)(unaff_x20 + lVar19);
    if (uVar3 == 0) goto LAB_1026a1808;
LAB_1026a1908:
    if (*(long *)(lVar14 + 0x48) == 0) {
      bVar2 = 1 < *(ulong *)(*(long *)(lVar14 + 0x30) + 0x10);
    }
    else {
      bVar2 = false;
    }
    uVar16 = *(ulong *)(lVar14 + 0x38);
    if (uVar16 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uVar16 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar16) {
        uVar3 = uVar16;
      }
      func_0x000107c60480();
    }
    uVar22 = *(ulong *)(unaff_x20 + _DAT_112eb46e0);
    uVar16 = uVar22;
    func_0x000107c4c458(uVar22);
    func_0x000107c61180();
    func_0x000107c5ea20();
    dVar26 = param_1;
    func_0x000107c615e8(uVar16);
    uVar16 = uVar22;
    func_0x000107c4c2f8();
    func_0x000107c61180();
    func_0x000107c4c8c8();
    func_0x000107c615e8();
    FUN_1026a1030();
    if (((bool)(uVar3 != 0 | bVar2)) && (param_1 < dVar26 + -2.220446049250313e-16)) {
      func_0x000105edbee4(uVar16,1);
      func_0x000107c61170(uVar16);
      puVar9 = *(undefined **)(*(long *)(unaff_x20 + lVar19) + 0x30);
      uVar16 = *(ulong *)(*(long *)(unaff_x20 + lVar19) + 0x38);
      if (uVar16 >> 0x3e == 0) {
        uVar3 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = uVar16 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar16) {
          uVar3 = uVar16;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434();
      func_0x000107c61434(uVar16);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar3 != 0) {
        uVar24 = 0;
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          if ((uVar16 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x1026a226c);
              (*pcVar21)();
            }
            uVar4 = *(ulong *)(uVar16 + uVar24 * 8 + 0x20);
            func_0x000107c61174();
            lVar19 = _DAT_112fed688;
          }
          else {
            uVar4 = uVar24;
            FUN_1026a60d0(uVar24,uVar16);
            lVar19 = _DAT_112fed688;
          }
          _DAT_112fed688 = lVar19;
          if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x1026a1b6c);
            (*pcVar21)();
          }
          uVar25 = uVar24 + 1;
          func_0x000107c61428(uVar4 + lVar19,apuStack_c0,0,0);
          lVar14 = *(long *)(uVar4 + lVar19);
          func_0x000107c61434(lVar14);
          func_0x000107c61170(uVar4);
          uVar4 = *(ulong *)(lVar14 + 0x10);
          lVar19 = *(long *)(puVar8 + 0x10);
          if (SCARRY8(lVar19,uVar4)) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x1026a2270);
            (*pcVar21)();
          }
          puVar5 = puVar8;
          func_0x000107c61558();
          if (((int)puVar5 == 0) ||
             (uVar15 = *(ulong *)(puVar8 + 0x18) >> 1, (long)uVar15 < (long)(lVar19 + uVar4))) {
            func_0x0001000d182c();
            uVar15 = *(ulong *)(puVar5 + 0x18) >> 1;
            puVar8 = puVar5;
            if (*(long *)(lVar14 + 0x10) == 0) goto LAB_1026a1a28;
LAB_1026a1b08:
            if (uVar15 - *(long *)(puVar5 + 0x10) < uVar4) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x1026a2278);
              (*pcVar21)();
            }
            func_0x000107c6140c(puVar5 + *(long *)(puVar5 + 0x10) * 0x10 + 0x20,lVar14 + 0x20,uVar4,
                                PTR___sSSN_11034da80);
            func_0x000107c6142c(lVar14);
            if (uVar4 != 0) {
              if (SCARRY8(*(long *)(puVar5 + 0x10),uVar4)) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x1026a227c);
                (*pcVar21)();
              }
              *(ulong *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + uVar4;
            }
          }
          else {
            puVar5 = puVar8;
            if (*(long *)(lVar14 + 0x10) != 0) goto LAB_1026a1b08;
LAB_1026a1a28:
            func_0x000107c6142c(lVar14);
            puVar5 = puVar8;
            if (uVar4 != 0) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x1026a2274);
              (*pcVar21)();
            }
          }
          uVar24 = uVar24 + 1;
          puVar8 = puVar5;
        } while (uVar25 != uVar3);
      }
      func_0x000107c6142c(uVar16);
      puStack_f0 = puVar9;
      func_0x00010109a32c(puVar5);
      puVar9 = puStack_f0;
      puVar5 = puStack_f0;
      func_0x000100403a6c();
      func_0x000107c6142c(puVar9);
      puVar20 = (ulong *)(puVar5 + 0x38);
      uVar3 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
      uVar16 = 0xffffffffffffffff;
      if (-uVar3 < 0x40) {
        uVar16 = ~(-1L << (-uVar3 & 0x3f));
      }
      uVar16 = uVar16 & *puVar20;
      lVar23 = *(long *)(unaff_x20 + _DAT_112eb46d0);
      func_0x000107c61434(puVar5);
      lVar19 = 0;
      lVar14 = lVar19;
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while( true ) {
        while (uVar16 != 0) {
          uVar24 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
          uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
          uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
          uVar16 = uVar16 - 1 & uVar16;
          puVar17 = (undefined8 *)
                    (*(long *)(puVar5 + 0x30) + LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) * 0x10 +
                    lVar19 * 0x400);
          uVar18 = *puVar17;
          uVar30 = puVar17[1];
          func_0x000107c61434(uVar30);
          func_0x000107c5fadc(uVar18,uVar30);
          lVar6 = lVar23;
          func_0x000107c4e67c();
          func_0x000107c61180();
          func_0x000107c6142c(uVar30);
          func_0x000107c61170(uVar18);
          lVar14 = lVar19;
          if (lVar6 != 0) {
            puVar8 = puVar9;
            func_0x000107c61550();
            if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
               (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar9 >> 0x3e == 0) {
                puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar9) {
                  puVar7 = puVar9;
                }
                func_0x000107c60480(puVar7);
              }
              puVar8 = (undefined *)0x0;
              FUN_10264996c(0,puVar7 + 1,1,puVar9);
            }
            uVar4 = (ulong)puVar8 & 0xffffffffffffff8;
            uVar24 = *(ulong *)(uVar4 + 0x10);
            puVar9 = puVar8;
            if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar24) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar4 + 0x18));
              FUN_10264996c(puVar9,uVar24 + 1,1,puVar8);
              uVar4 = (ulong)puVar9 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar4 + 0x10) = uVar24 + 1;
            *(long *)(uVar4 + uVar24 * 8 + 0x20) = lVar6;
          }
        }
        bVar2 = SCARRY8(lVar19,1);
        lVar19 = lVar19 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x1026a2268);
          (*pcVar21)();
        }
        if ((long)(0x3f - uVar3 >> 6) <= lVar19) break;
        uVar16 = puVar20[lVar19];
      }
      func_0x00010109bac0(puVar5,puVar20,~uVar3,lVar14,0);
      puVar8 = puVar9;
      FUN_10263a8d4(puVar9);
      func_0x000107c6142c(puVar9);
      puVar9 = puVar8;
      func_0x000107c5fc48(puVar8,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(puVar8);
      pcStack_d0 = FUN_1026a2304;
      uStack_c8 = 0;
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      dVar27 = 5.47077039858234e-315;
      uStack_e8 = 0x42000000;
      puStack_e0 = &UNK_1011450fc;
      puStack_d8 = &UNK_110535068;
      ppuVar10 = &puStack_f0;
      func_0x000107c60bc4(ppuVar10);
      func_0x000108d31a2c(puVar9,ppuVar10);
      dVar26 = dVar27;
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(puVar9);
      uVar16 = uVar22;
      func_0x000107c4c458();
      func_0x000107c61180();
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c51768();
      uVar3 = uVar16;
      uVar18 = param_3;
      uVar28 = param_4;
      func_0x000107c3f24c(dVar27,param_2,param_3,param_4,dVar26 + 52.0 + 70.0 + 20.0,
                          0x4052c00000000000,0x4064000000000000,0x4052c00000000000);
      func_0x000107c61180();
      func_0x000107c615e8(uVar16);
      puVar9 = PTR_PTR_1126b1e08;
      func_0x000107c61168(PTR_PTR_1126b1e08);
      uVar16 = uVar22;
      func_0x000107c4c458(uVar22);
      func_0x000107c61180();
      uVar24 = uVar16;
      func_0x000107c3f040();
      func_0x000107c61180();
      func_0x000107c615e8(uVar16);
      func_0x000107c3ec60(uVar22);
      uVar30 = uVar18;
      func_0x000107c423a4(uVar18,uVar28,puVar9);
      func_0x000107c61170(uVar24);
      uVar16 = uVar22;
      func_0x000107c3f140();
      func_0x000107c61180();
      uVar24 = uVar16;
      func_0x000107c49cd8();
      func_0x000107c61170(uVar16);
      lVar19 = _DAT_112fecff8;
      if ((uVar24 & 1) == 0) {
        func_0x000107c4c458(uVar22);
        func_0x000107c61180();
        func_0x000107c43718(uVar18);
        func_0x000107c615e8(uVar22);
LAB_1026a2194:
        FUN_1026a23a4(dVar27,param_2,param_3,param_4,puVar5);
        func_0x000107c61170(uVar3);
        func_0x000107c6142c(puVar5);
      }
      else {
        uVar29 = *(undefined8 *)(uVar3 + _DAT_112fed000);
        uVar31 = *(undefined8 *)(uVar3 + _DAT_112fecff8);
        puVar17 = (undefined8 *)(uVar3 + _DAT_112fecfe8);
        uVar32 = *puVar17;
        func_0x000107c3ec60(uVar22);
        func_0x000108d316c0(uVar29,uVar31,uVar32,uVar30,uVar28);
        puVar9 = PTR_PTR_1126b1dc8;
        func_0x000107c61168();
        puVar8 = puVar9;
        func_0x000107c5cb10(*puVar17,puVar17[1]);
        func_0x000107c61180();
        if (puVar8 != (undefined *)0x0) {
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c466c0(uVar29);
          uVar30 = *(undefined8 *)(uVar3 + _DAT_112fecff0);
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c466c0(uVar30);
          uVar30 = *(undefined8 *)(uVar3 + lVar19);
          puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c466c0(uVar30);
          puVar13 = puVar9;
          func_0x000107c3f168();
          func_0x000107c61180();
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar12);
          if (puVar13 != (undefined *)0x0) {
            func_0x000107c3dd08(uVar18,puVar9);
            func_0x000107c61180();
            func_0x000107c3f140(uVar22);
            func_0x000107c61180();
            func_0x000107c4d150();
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar13);
            func_0x000107c61170(puVar9);
            func_0x000107c61170(uVar22);
            goto LAB_1026a2194;
          }
          func_0x000107c61170(puVar8);
        }
        func_0x000107c6142c(puVar5);
        func_0x000107c61170(uVar3);
      }
      ppuVar10 = &puStack_f0;
      goto LAB_1026a2200;
    }
    func_0x000105edbe6c(uVar16,1);
    func_0x000107c61170();
    FUN_1026a22b0();
    uVar3 = uVar16;
    FUN_1026a1030();
    if ((uVar16 & 1) == 0) goto LAB_1026a1868;
LAB_1026a1ba0:
    func_0x000105edbfd4();
    func_0x000107c61170(uVar3);
    plVar1 = (long *)(unaff_x20 + _DAT_112eb46b8);
    func_0x000107c61428(plVar1,&puStack_f0,0,0);
    pcVar21 = (code *)*plVar1;
    if (pcVar21 != (code *)0x0) {
      lVar14 = plVar1[1];
      FUN_1026e876c(0);
      func_0x000107c610f8();
      func_0x000107c6157c(lVar14);
      uVar18 = 0x61;
      func_0x0001026e8540(0x61,0,0,0);
      goto LAB_1026a1c04;
    }
  }
  ppuVar10 = apuStack_c0;
LAB_1026a2200:
  puVar17 = (undefined8 *)(unaff_x20 + _DAT_112eb46b0);
  func_0x000107c61428(puVar17,ppuVar10,0,0);
  pcVar21 = (code *)*puVar17;
  if (pcVar21 != (code *)0x0) {
    uVar18 = puVar17[1];
    func_0x000107c6157c(uVar18);
    (*pcVar21)();
    func_0x000100cffa5c(pcVar21,uVar18);
  }
  return;
}



/* Entry: 1026a27f0; end: 1026a2863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1026a27f0(undefined **param_1)

{
  undefined **ppuVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  ppuVar1 = param_1;
  func_0x000107c611b4();
  if (ppuVar1 == &PTR_PTR_112eb8038 && param_1 != (undefined **)0x0) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112eb46c0);
    *(undefined ***)(unaff_x20 + _DAT_112eb46c0) = param_1;
    func_0x000107c615f4(param_1,2);
    func_0x000107c61574(uVar2);
    FUN_1026a17ac();
    func_0x000107c615e8(param_1);
  }
  return ppuVar1 == &PTR_PTR_112eb8038 && param_1 != (undefined **)0x0;
}



/* Entry: 1026a2864; end: 1026a288f;  */

void FUN_1026a2864(void)

{
  return;
}



/* Entry: 1026a2890; end: 1026a28cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026a2890(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb46b0;
  func_0x000107c61428(unaff_x20 + _DAT_112eb46b0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026a28d0;
  return auVar2;
}



/* Entry: 1026a28d0; end: 1026a28e7;  */

void FUN_1026a28d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026a28e8; end: 1026a2947;  */

undefined1  [16] FUN_1026a28e8(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_3);
  func_0x000107c61428(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*param_4)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1026a2948; end: 1026a295b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a2948(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb46b8);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_1026a17a0(uVar2,uVar3);
  return;
}



/* Entry: 1026a295c; end: 1026a29b7;  */

void FUN_1026a295c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,code *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_5);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*param_6)(uVar2,uVar3);
  return;
}



/* Entry: 1026a29b8; end: 1026a29f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026a29b8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb46b8;
  func_0x000107c61428(unaff_x20 + _DAT_112eb46b8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026a2b34;
  return auVar2;
}



/* Entry: 1026a29f8; end: 1026a2ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a29f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_8;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar2 + _DAT_112eb46b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112eb46b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_112eb46c0) = param_1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112eb46c8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(lVar2 + _DAT_112eb46d0) = param_4;
  *(undefined8 *)(lVar2 + _DAT_112eb46d8) = param_5;
  *(undefined8 *)(lVar2 + _DAT_112eb46e0) = param_6;
  *(undefined8 *)(lVar2 + _DAT_112eb46e8) = param_7;
  lStack_60 = lVar2;
  lStack_58 = param_8;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026a2ad8; end: 1026a2af3;  */

void FUN_1026a2ad8(long param_1,long param_2)

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



/* Entry: 1026a2af4; end: 1026a2b33;  */

void FUN_1026a2af4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1026a2b34; end: 1026a2b37;  */

void FUN_1026a2b34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026a2b38; end: 1026a2b73;  */

void FUN_1026a2b38(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026a2b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026a2b74; end: 1026a2ce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a2b74(void)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  bVar1 = *(byte *)(*(long *)(unaff_x20 + 0x30) + _DAT_112eb80f0);
  if ((char)bVar1 < '\0') {
    FUN_1026a3544(bVar1 & 1);
    func_0x0001026e7134(0);
    uVar4 = 0;
    FUN_1026e6fd0();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar4;
    func_0x000107c61170(uVar5);
  }
  else if ((*(byte *)(unaff_x20 + 0x98) & 1) == 0) {
    iVar2 = (int)*(undefined8 *)(unaff_x20 + 0x70);
    func_0x0001090222b4();
    if (iVar2 == 0) {
      if (*(long *)(unaff_x20 + 0xa0) == 0) {
        uVar4 = 0;
        func_0x0001000c6560();
        func_0x000107c613fc();
        func_0x0001000c6580();
        uVar5 = *(undefined8 *)(unaff_x20 + 0xa0);
        *(undefined8 *)(unaff_x20 + 0xa0) = uVar4;
        func_0x000107c61574(uVar5);
        FUN_1026a4954();
        FUN_1026a4ac0();
        FUN_1026a4cd0();
      }
      FUN_1026a2ce4(bVar1 & 1);
      FUN_1026a33a4();
    }
    else {
      puVar3 = &UNK_1105350f8;
      func_0x000107c613fc(&UNK_1105350f8,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      uVar4 = 0x72;
      func_0x0001001ca524(0x72,0,0x3c,4,0,0,&UNK_10daca7a0,puVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uVar4);
    }
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c3eca4(uVar4);
  func_0x000107c61180();
  func_0x000107c53f78();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar4);
  return;
}



/* Entry: 1026a2ce4; end: 1026a33a3;  */

void FUN_1026a2ce4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long unaff_x20;
  int iVar18;
  long lVar19;
  ulong uVar20;
  double dVar21;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x40);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar4 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = uVar4;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar4);
  }
  uVar4 = uVar17;
  FUN_1026a3c7c();
  lVar19 = *(long *)(unaff_x20 + 0x68);
  lVar6 = lVar19;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 != 0) {
    FUN_1026a5904();
    func_0x000107c4bc28(lVar6);
    func_0x000107c615e8(lVar6);
  }
  if (uVar17 == 0) {
    if (uVar4 >> 0x3e == 0) {
      uVar20 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
      puVar5 = PTR_PTR_1126b1e08;
    }
    else {
      uVar20 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar20 = uVar4;
      }
      func_0x000107c60480();
      puVar5 = PTR_PTR_1126b1e08;
    }
    PTR_PTR_1126b1e08 = puVar5;
    if (uVar20 == 0) {
      func_0x000107c6142c(uVar4);
      lVar6 = *(long *)(unaff_x20 + 0x60);
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar4 = 0;
      if (lVar6 != 0) {
        uVar4 = 0;
        func_0x0001072433f8(0,0,0);
        func_0x000107c61180();
        func_0x000107c4bcb0(lVar6);
        func_0x000107c615e8(lVar6);
        func_0x000107c61170();
      }
      FUN_1026a3ef0();
      if ((uVar4 & 1) != 0) {
        return;
      }
      lVar6 = *(long *)(unaff_x20 + 0x50);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 == 0) {
        return;
      }
      lVar15 = lVar6;
      func_0x000107c448d0();
      func_0x000107c615e8(lVar6);
      if ((int)lVar15 == 0) {
        return;
      }
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar19 != 0) {
        uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
        func_0x000107c4c458(uVar16);
        func_0x000107c61180();
        func_0x000107c5ea20();
        func_0x000107c615e8(uVar16);
        FUN_1026a5904();
        func_0x000107c4bc2c(param_1,lVar19);
        func_0x000107c615e8(lVar19);
      }
      *(undefined1 *)(unaff_x20 + 0x98) = 1;
      uVar16 = *(undefined8 *)(unaff_x20 + 0xa0);
      *(undefined8 *)(unaff_x20 + 0xa0) = 0;
      func_0x000107c61574(uVar16);
      func_0x000107c61428(unaff_x20 + 0x10,&stack0xffffffffffffffc8,0,0);
      pcVar3 = *(code **)(unaff_x20 + 0x10);
      if (pcVar3 != (code *)0x0) {
        uVar16 = *(undefined8 *)(unaff_x20 + 0x18);
        func_0x000107c6157c(uVar16);
        (*pcVar3)();
        func_0x000100cffa7c(pcVar3,uVar16);
      }
      return;
    }
    func_0x000107c61168(puVar5);
    uVar16 = 0;
    FUN_1026a67d4(0,0x112da2440,&PTR__OBJC_CLASS___CLLocation_1126b30c8);
    uVar20 = uVar4;
    func_0x000107c5fc48(uVar4,uVar16);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c4c458(uVar16);
    func_0x000107c61180();
    param_1 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
    param_2 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    param_3 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    param_4 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    func_0x000107c49638(param_1,param_2,param_3,param_4,0x4010000000000000,0x4028000000000000,puVar5
                       );
    dVar21 = param_1;
    func_0x000107c61170(uVar20);
    func_0x000107c615e8(uVar16);
  }
  else {
    uVar20 = uVar17;
    func_0x000107c61174(uVar17);
    FUN_1026a3f68();
    dVar21 = param_1;
    func_0x000107c61170(uVar20);
  }
  bVar1 = *(byte *)(unaff_x20 + 0x98);
  if (uVar4 >> 0x3e == 0) {
    uVar20 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar20 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar20 = uVar4;
    }
    func_0x000107c60480();
  }
  bVar1 = bVar1 ^ 1;
  func_0x000107c6142c(uVar4);
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c51768();
  lVar6 = *(long *)(unaff_x20 + 0x90);
  if (lVar6 == 0) {
    puVar12 = PTR_PTR_1126b1e08;
    func_0x000107c61168(PTR_PTR_1126b1e08);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c4c458(uVar16);
    func_0x000107c61180();
    puVar5 = &UNK_1105350f8;
    func_0x000107c613fc(&UNK_1105350f8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    puVar13 = &UNK_110535170;
    func_0x000107c613fc(&UNK_110535170,0x22,7);
    puVar13[0x10] = bVar1 & 1;
    *(undefined **)(puVar13 + 0x18) = puVar5;
    puVar13[0x20] = uVar17 != 0;
    puVar13[0x21] = (long)(ulong)(uVar17 != 0) < (long)uVar20;
    uStack_a0 = 0x1026a5e14;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000b0c7c;
    puStack_a8 = &UNK_110535188;
    ppuVar14 = &puStack_c0;
    puStack_98 = puVar13;
    func_0x000107c60bc4(ppuVar14);
    func_0x000107c61574(puStack_98);
    func_0x000107c3f754(param_1,param_2,param_3,param_4,dVar21 + 52.0 + 70.0 + 20.0,
                        0x4052c00000000000,0x4064000000000000,0x4052c00000000000,puVar12);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c615e8(uVar16);
  }
  else {
    func_0x000107c61174();
    FUN_1026a413c(&puStack_c0,param_1,param_2,param_3,param_4);
    uVar2 = uStack_a0;
    puVar12 = puStack_a8;
    puVar13 = puStack_b0;
    uVar16 = uStack_b8;
    puVar5 = puStack_c0;
    puVar7 = PTR_PTR_1126b1dc8;
    func_0x000107c61168();
    puVar8 = puVar7;
    func_0x000107c3f160();
    func_0x000107c61180();
    if (puVar8 != (undefined *)0x0) {
      puVar9 = &UNK_1105350f8;
      func_0x000107c613fc(&UNK_1105350f8,0x18,7);
      func_0x000107c61644(puVar9 + 0x10);
      puVar10 = &UNK_1105351c0;
      func_0x000107c613fc(&UNK_1105351c0,0x1b,7);
      *(undefined **)(puVar10 + 0x10) = puVar9;
      puVar10[0x18] = bVar1 & 1;
      puVar10[0x19] = uVar17 != 0;
      puVar10[0x1a] = (long)(ulong)(uVar17 != 0) < (long)uVar20;
      puVar11 = PTR_PTR_1126c5bb8;
      func_0x000107c610f8(PTR_PTR_1126c5bb8);
      uStack_a0 = 0x1026a5e44;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000f6b44;
      puStack_a8 = &UNK_1105351d8;
      ppuVar14 = &puStack_c0;
      puStack_98 = puVar10;
      func_0x000107c60bc4(ppuVar14);
      puVar10 = puStack_98;
      func_0x000107c6157c(puVar9);
      func_0x000107c61574(puVar10);
      func_0x000107c45a20(puVar11);
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c61574(puVar9);
      puVar9 = puVar7;
      func_0x000107c5cafc(uVar16,puVar13,puVar12,uVar2);
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1026a33a4);
        (*pcVar3)();
      }
      func_0x000107c543a0(lVar6);
      func_0x000107c61170(puVar9);
      uVar16 = 0x3fd3333333333333;
      if ((param_5 & 1) == 0) {
        uVar16 = 0;
      }
      func_0x000107c3dd0c(uVar16,puVar7);
      func_0x000107c61180();
      func_0x000107c4d14c(lVar6);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar7);
    }
    func_0x000107c61170(lVar6);
    func_0x000107c61170(puVar5);
  }
  uVar4 = *(ulong *)(unaff_x20 + 0x50);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar4 == 0) {
    iVar18 = 0;
  }
  else {
    uVar20 = uVar4;
    func_0x000107c448d0();
    iVar18 = (int)uVar20;
    func_0x000107c615e8();
  }
  if ((uVar17 != 0) || (FUN_1026a3ef0(), (uVar4 & 1) == 0)) {
    if (iVar18 != 0) {
      FUN_1026a399c();
    }
    func_0x000107c61170(uVar17);
  }
  return;
}



/* Entry: 1026a33a4; end: 1026a3543;  */

/* WARNING: Possible PIC construction at 0x0001026a3518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a351c) */

void FUN_1026a33a4(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  puVar3 = &stack0xffffffffffffff90;
  puVar6 = &stack0xffffffffffffff90;
  if ((*(byte *)(unaff_x20 + 0x13) & 1) == 0) {
    uVar7 = *unaff_x20;
    lVar1 = unaff_x20[8];
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4b88c();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c6157c();
        func_0x000107c5fb18(&stack0xffffffffffffff90,uVar7);
        uVar4 = 0;
        func_0x0001048b0ec8(0);
        func_0x000107c610f8();
        func_0x0001048b0b48(puVar3,uVar7,0x18,uVar4);
        FUN_1026a67d4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        func_0x000107c5ffdc();
        puVar5 = &UNK_1105350f8;
        func_0x000107c613fc(&UNK_1105350f8,0x18,7);
        func_0x000107c61644(puVar5 + 0x10);
        func_0x000107c60bc4(&stack0xffffffffffffff90);
        func_0x000107c61574(puVar5);
        func_0x000107c503b0(0x4024000000000000,lVar1);
        func_0x000107c60bd0(puVar6);
      }
      else {
        func_0x000107c61170();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1026a3544; end: 1026a38d3;  */

/* WARNING: Possible PIC construction at 0x0001026a35fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a3614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a37c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a386c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a38ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a3750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a3760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a38b0) */
/* WARNING: Removing unreachable block (ram,0x0001026a3870) */
/* WARNING: Removing unreachable block (ram,0x0001026a38cc) */
/* WARNING: Removing unreachable block (ram,0x0001026a387c) */
/* WARNING: Removing unreachable block (ram,0x0001026a37c4) */
/* WARNING: Removing unreachable block (ram,0x0001026a3754) */
/* WARNING: Removing unreachable block (ram,0x0001026a381c) */
/* WARNING: Removing unreachable block (ram,0x0001026a3618) */
/* WARNING: Removing unreachable block (ram,0x0001026a3600) */
/* WARNING: Removing unreachable block (ram,0x0001026a3790) */
/* WARNING: Removing unreachable block (ram,0x0001026a3794) */
/* WARNING: Removing unreachable block (ram,0x0001026a3604) */
/* WARNING: Removing unreachable block (ram,0x0001026a3764) */

void FUN_1026a3544(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      if (((param_3 & 1) == 0) || (lVar1 = *(long *)(unaff_x20 + 0x90), lVar1 == 0)) {
        func_0x000107c4077c(lVar2);
        uVar3 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
        uVar4 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
        uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
        lVar1 = 0;
        func_0x000103b354c8(0);
        func_0x000107c610f8();
        func_0x000103b3520c(param_1,param_2,0,0,0x40d1940000000000,uVar3,uVar4,uVar5);
        if ((param_3 & 1) == 0) {
          func_0x000103b356d8(0);
          func_0x000107c610f8();
          uVar4 = 0x3fd3333333333333;
          uVar3 = 3;
        }
        else {
          uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
          func_0x000107c4c458(uVar3);
          func_0x000107c61180();
          func_0x000107c573c4(0);
          func_0x000107c615e8(uVar3);
          func_0x000103b356d8(0);
          func_0x000107c610f8();
          uVar4 = 0xbff0000000000000;
          uVar3 = 4;
        }
        func_0x000103b3550c(uVar4,uVar3);
        uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
        func_0x000107c61174();
        func_0x000107c4c458(uVar3);
        func_0x000107c61180();
        func_0x000107c52fac();
        func_0x000107c615e8(uVar3);
      }
      else {
        func_0x000107c61174();
        func_0x000107c561cc();
        func_0x000107c43f60(lVar1);
        func_0x000107c61180();
        func_0x000107c3f160();
        func_0x000107c61180();
        func_0x000107c4e788();
        func_0x000107c61180();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1026a38d4; end: 1026a399b;  */

void FUN_1026a38d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_48;
  
  iVar1 = (int)*(undefined8 *)(unaff_x20 + 0x70);
  func_0x0001090222b4();
  if (iVar1 == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x68);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) goto LAB_1026a397c;
    uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c4c458(uVar4);
    func_0x000107c61180();
    func_0x000107c5ea20();
    func_0x000107c615e8(uVar4);
    uVar2 = (uint)uVar4;
    FUN_1026a5904();
    func_0x000107c4bc2c(param_1,lVar3,param_3,4,uVar2 & 0x1010101);
  }
  else {
    func_0x0001048580f8(&lStack_48);
    func_0x000107c5bdf4(lStack_48);
    lVar3 = lStack_48;
  }
  func_0x000107c615e8(lVar3);
LAB_1026a397c:
  FUN_1026a399c();
  return;
}



/* Entry: 1026a399c; end: 1026a3a07;  */

void FUN_1026a399c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  *(undefined1 *)(unaff_x20 + 0x98) = 1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  func_0x000107c61574(uVar1);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  if (pcVar2 != (code *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c6157c(uVar1);
    (*pcVar2)();
    func_0x000100cffa7c(pcVar2,uVar1);
  }
  return;
}



/* Entry: 1026a3a08; end: 1026a3a73;  */

void FUN_1026a3a08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar1;
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026a3a74,uVar1,uVar2);
  return;
}



/* Entry: 1026a3a74; end: 1026a3baf;  */

void FUN_1026a3a74(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x90,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x88);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    func_0x0001048580f8(unaff_x22 + 0xa8);
    func_0x000107c61574(uVar2);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar3;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1026a3bb0;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    uVar2 = 0x112d4e498;
    func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
    *(long *)(unaff_x22 + 0x70) = lVar1;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x1026a3c5c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110535110;
    func_0x000107c5bc48(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  lVar1 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x50,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1026a399c();
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001026a3bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026a3bb0; end: 1026a3c7b;  */

void FUN_1026a3bb0(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1026a3bec,*(undefined8 *)(*unaff_x22 + 0xc0),*(undefined8 *)(*unaff_x22 + 200));
  return;
}



/* Entry: 1026a3c7c; end: 1026a3eef;  */

undefined * FUN_1026a3c7c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  
  puVar2 = *(undefined **)(unaff_x20 + 0x50);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar7 = puVar2;
  func_0x000107c3db8c();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_1026a67d4(0,0x112d5ecd8,&PTR_PTR_1126bf130);
  uVar4 = uVar3;
  func_0x000101158e5c();
  puVar5 = puVar7;
  func_0x000107c5fe10(puVar7,uVar3,uVar4);
  func_0x000107c61170(puVar7);
  if (param_1 == 0) {
    puVar7 = puVar2;
    func_0x000107c3e870();
    func_0x000107c61180();
    if (puVar7 != (undefined *)0x0) {
      puVar6 = puVar7;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar7);
      if ((ulong)puVar6 >> 0x3e == 0) {
        puVar7 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar7 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar6) {
          puVar7 = puVar6;
        }
        func_0x000107c60480();
      }
      if (2 < (long)puVar7) {
        func_0x000107c6142c(puVar5);
        puVar5 = puVar6;
        FUN_1026762e4();
        func_0x000107c6142c(puVar6);
        puVar7 = puVar5;
        FUN_1026a45f8();
        if ((ulong)puVar7 >> 0x3e != 0) {
          puVar6 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar6 = puVar7;
          }
          func_0x000107c60480();
          if (puVar6 != (undefined *)0x0) {
            puVar8 = puVar6;
            FUN_1026a5ed0();
            FUN_1026a6428(puVar8 + 0x20,puVar6);
            func_0x000107c6142c();
            if (puVar7 != puVar6) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1026a3e14);
              (*pcVar1)();
            }
            goto LAB_1026a3e78;
          }
          goto LAB_1026a3e90;
        }
        goto LAB_1026a3d18;
      }
      func_0x000107c6142c(puVar6);
    }
  }
  puVar7 = puVar5;
  FUN_1026a45f8();
  if ((ulong)puVar7 >> 0x3e != 0) {
    puVar6 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar6 = puVar7;
    }
    func_0x000107c60480();
    if (puVar6 != (undefined *)0x0) {
      puVar8 = puVar6;
      FUN_1026a5ed0();
      FUN_1026a6428(puVar8 + 0x20,puVar6);
      func_0x000107c6142c();
      if (puVar7 != puVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026a3ef0);
        (*pcVar1)();
      }
LAB_1026a3e78:
      func_0x000107c615e8(puVar2);
      func_0x000107c6142c(puVar5);
      return puVar8;
    }
LAB_1026a3e90:
    func_0x000107c615e8(puVar2);
    func_0x000107c6142c(puVar5);
    func_0x000107c6142c(puVar7);
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
LAB_1026a3d18:
  func_0x000107c615e8(puVar2);
  func_0x000107c6142c(puVar5);
  return (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
}



/* Entry: 1026a3ef0; end: 1026a3f67;  */

long FUN_1026a3ef0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f72698;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
    lVar3 = lVar1;
    func_0x000107c49ff8(lVar1,param_2,ppuVar2);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(ppuVar2);
  }
  return lVar3;
}



/* Entry: 1026a3f68; end: 1026a413b;  */

undefined8 FUN_1026a3f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  char *pcVar5;
  undefined8 uVar6;
  
  pcVar5 = *(char **)(unaff_x20 + 0x70);
  func_0x00010902219c(pcVar5);
  pcVar1 = pcVar5;
  uVar6 = param_1;
  func_0x0001090221fc();
  uVar3 = uVar6;
  func_0x0001005e3364();
  if (*pcVar1 == '\x01') {
    uVar2 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010f0b4900);
    pcVar1 = pcVar5;
    func_0x000107c436e8();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar2 = uVar3;
    if (pcVar1 != (char *)0x0) {
      func_0x000107c4223c(pcVar1);
      uVar2 = uVar3;
      func_0x000107c61170(pcVar1);
      param_1 = uVar3;
    }
    uVar3 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010f0b4930);
    func_0x000107c436e8();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (pcVar5 != (char *)0x0) {
      func_0x000107c4223c(pcVar5);
      func_0x000107c61170(pcVar5);
      uVar6 = uVar2;
    }
  }
  puVar4 = PTR_PTR_1126b1e08;
  func_0x000107c61168(PTR_PTR_1126b1e08);
  uVar3 = 0;
  FUN_1026a67d4(0,0x112da2440,&PTR__OBJC_CLASS___CLLocation_1126b30c8);
  func_0x000107c5fc48(param_3,uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c4c458(uVar3);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  func_0x000107c4963c(uVar2,*(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_1,uVar6,puVar4);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(uVar3);
  return uVar2;
}



/* Entry: 1026a413c; end: 1026a43a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a413c(undefined8 *param_1,double param_2,undefined8 param_3,double param_4,
                  double param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  long unaff_x20;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  dVar7 = param_2;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c51768();
  dVar10 = dVar7 + 52.0 + 70.0 + 20.0;
  lVar8 = *(long *)(unaff_x20 + 0x38);
  lVar1 = lVar8;
  func_0x000107c4c458();
  func_0x000107c61180();
  dVar6 = 75.0;
  lVar2 = lVar1;
  dVar7 = param_4;
  dVar9 = param_5;
  func_0x000107c3f24c(param_2,param_3,param_4,param_5,dVar10,0x4052c00000000000,0x4064000000000000,
                      0x4052c00000000000);
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
  uVar12 = *(undefined8 *)(lVar2 + _DAT_112fed000);
  uVar13 = *(undefined8 *)(lVar2 + _DAT_112fecff8);
  uVar11 = *(undefined8 *)(lVar2 + _DAT_112fecfe8);
  func_0x000107c3ec60(lVar8);
  func_0x000108d316c0(uVar12,uVar13,uVar11,dVar7,dVar9);
  dVar7 = 90.0;
  func_0x000108d318dc(0x4056800000000000,uVar12);
  func_0x000108d318dc(0x4052c00000000000,uVar12);
  func_0x000108d31494(param_2,param_3);
  param_2 = param_2 - dVar6;
  func_0x000108d31494(param_4,param_5);
  dVar6 = dVar6 + param_4;
  param_5 = param_5 - dVar7;
  func_0x000108d31518(param_2,param_3);
  func_0x000108d31518(dVar6,param_5);
  puVar3 = PTR_PTR_1126c5ba8;
  func_0x000107c610f8(PTR_PTR_1126c5ba8);
  func_0x000107c470e4(param_2,param_3);
  puVar4 = PTR_PTR_1126c5ba8;
  func_0x000107c610f8(PTR_PTR_1126c5ba8);
  func_0x000107c470e4(dVar6,param_5);
  puVar5 = PTR_PTR_1126c5bb0;
  func_0x000107c610f8();
  func_0x000107c48b88();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  *param_1 = puVar5;
  param_1[1] = dVar10 + -70.0 + -20.0;
  param_1[3] = 0x4064000000000000;
  param_1[2] = 0;
  param_1[4] = 0;
  return;
}



/* Entry: 1026a43a8; end: 1026a441f;  */

void FUN_1026a43a8(long param_1,ulong param_2,uint param_3,uint param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if ((param_2 & 1) != 0) {
      FUN_1026a4420(param_3 & 1,param_4 & 1);
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1026a4420; end: 1026a4583;  */

/* WARNING: Possible PIC construction at 0x0001026a447c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a4498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a44e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a4534: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a44e8) */
/* WARNING: Removing unreachable block (ram,0x0001026a4480) */
/* WARNING: Removing unreachable block (ram,0x0001026a4538) */

void FUN_1026a4420(uint param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x68);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x60);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      if (*(char *)(unaff_x20 + 0x98) == '\x01') {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar2 != 0) {
          lVar1 = *(long *)(unaff_x20 + 0x38);
          func_0x000107c4c458(lVar1);
          func_0x000107c61180();
          func_0x000107c5ea20();
          goto code_r0x000107c615e8;
        }
      }
      return;
    }
    func_0x0001072433f8(0,param_1 & 1,param_2 & 1);
    func_0x000107c61180();
    func_0x000107c4bcb0(lVar1);
  }
  else {
    lVar1 = *(long *)(unaff_x20 + 0x38);
    func_0x000107c4c458(lVar1);
    func_0x000107c61180();
    func_0x000107c5ea20();
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 1026a4584; end: 1026a45f7;  */

void FUN_1026a4584(ulong param_1,long param_2,uint param_3,uint param_4)

{
  undefined1 auStack_48 [24];
  
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      FUN_1026a4420(param_3 & 1,param_4 & 1);
      func_0x000107c61574(param_2);
    }
  }
  return;
}



/* Entry: 1026a45f8; end: 1026a4953;  */

undefined * FUN_1026a45f8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  char cVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [32];
  ulong uStack_88;
  ulong uStack_80;
  char cStack_78;
  
  uVar1 = param_3 & 0xc000000000000001;
  if (uVar1 == 0) {
    uVar15 = *(ulong *)(param_3 + 0x10);
  }
  else {
    uVar15 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar15 = param_3;
    }
    func_0x000107c6029c();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar9 = uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU);
    FUN_1026a5f60(0,uVar9,0);
    if (uVar1 == 0) {
      uVar6 = param_3 + 0x38;
      func_0x000107c60268(uVar6,~(-1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f)));
      cStack_78 = '\0';
      uVar9 = (ulong)*(uint *)(param_3 + 0x24);
    }
    else {
      uVar6 = param_3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_3) {
        uVar6 = param_3;
      }
      func_0x000107c60284();
      cStack_78 = '\x01';
    }
    uStack_88 = uVar6;
    uStack_80 = uVar9;
    if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1026a494c);
      (*pcVar5)();
    }
    uVar9 = 0;
    uVar6 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar6 = param_3;
    }
    do {
      cVar4 = cStack_78;
      uVar2 = uStack_80;
      uVar13 = uStack_88;
      if (uVar9 == uVar15) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1026a493c);
        (*pcVar5)();
      }
      uVar14 = uStack_88;
      FUN_102556968(uStack_88,uStack_80,cStack_78,param_3);
      func_0x000107c4077c();
      func_0x000107c4077c(uVar14);
      puVar8 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
      func_0x000107c610f8();
      func_0x000107c470f8(param_1,param_2);
      func_0x000107c61170(uVar14);
      uVar14 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar14) {
        FUN_1026a5f60(1 < *(ulong *)(puVar3 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar14 + 1;
      *(undefined **)(puVar3 + uVar14 * 8 + 0x20) = puVar8;
      if (uVar1 == 0) {
        if (cVar4 == '\x01') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1026a4954);
          (*pcVar5)();
        }
        uVar14 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
        if (uVar14 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1026a4940);
          (*pcVar5)();
        }
        uVar11 = uVar13 >> 6;
        uVar10 = *(ulong *)(param_3 + 0x38 + uVar11 * 8);
        if ((uVar10 >> (uVar13 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1026a4944);
          (*pcVar5)();
        }
        if (*(int *)(param_3 + 0x24) != (int)uVar2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1026a4948);
          (*pcVar5)();
        }
        uVar10 = uVar10 & -2L << (uVar13 & 0x3f);
        if (uVar10 == 0) {
          lVar16 = uVar11 << 6;
          puVar12 = (ulong *)(param_3 + 0x40 + uVar11 * 8);
          do {
            uVar11 = uVar11 + 1;
            if (uVar14 + 0x3f >> 6 <= uVar11) {
              FUN_1025572a4(uVar13,uVar2,cVar4);
              goto LAB_1026a48c8;
            }
            uVar10 = *puVar12;
            lVar16 = lVar16 + 0x40;
            puVar12 = puVar12 + 1;
          } while (uVar10 == 0);
          FUN_1025572a4(uVar13,uVar2,cVar4);
          uVar13 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar14 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + lVar16;
        }
        else {
          uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
          uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          uVar14 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | uVar13 & 0x7fffffffffffffc0;
        }
LAB_1026a48c8:
        uStack_80 = (ulong)*(uint *)(param_3 + 0x24);
        cStack_78 = '\0';
        uStack_88 = uVar14;
      }
      else {
        if (cVar4 != '\x01') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1026a4950);
          (*pcVar5)();
        }
        func_0x000107c6028c(uVar13,uVar2);
        if (uVar13 == 0) {
          uVar13 = 1;
        }
        else {
          func_0x000107c61558();
        }
        uVar7 = 0x112ea51d8;
        func_0x0001000285a8(0x112ea51d8,&UNK_10dab84d0);
        pcVar5 = (code *)auStack_a8;
        func_0x000107c5fe1c(pcVar5,uVar7);
        func_0x000107c602b8(uVar7,uVar13,uVar6);
        (*pcVar5)(auStack_a8,0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar15);
    FUN_1025572a4(uStack_88,uStack_80,cStack_78);
  }
  return puVar3;
}



/* Entry: 1026a4954; end: 1026a4abf;  */

/* WARNING: Possible PIC construction at 0x0001026a4a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a4a70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a4a44) */
/* WARNING: Removing unreachable block (ram,0x0001026a4a74) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_1026a4954(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x20;
  long *plVar5;
  code *pcVar6;
  
  plVar4 = *(long **)(unaff_x20 + 0xa0);
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar5 = *(long **)(unaff_x20 + 0x50);
  func_0x000107c6157c(plVar4);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (plVar5 != (long *)0x0) {
    func_0x0001000285a8(0x112ea3480,&UNK_10dac6130);
    plVar1 = plVar5;
    func_0x000107c4b93c();
    func_0x000107c61180();
    plVar4 = plVar1;
    func_0x0001000b637c();
    func_0x000107c61170(plVar1);
    puVar2 = &UNK_1105350f8;
    func_0x000107c613fc(&UNK_1105350f8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_110535328;
    func_0x000107c613fc(&UNK_110535328,0x20,7);
    *(long **)(puVar3 + 0x10) = plVar5;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    pcVar6 = *(code **)(*plVar4 + 0x60);
    func_0x000107c615f0(plVar5);
    (*pcVar6)(FUN_1026a67cc,puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar4);
  return;
}



/* Entry: 1026a4ac0; end: 1026a4ccf;  */

/* WARNING: Possible PIC construction at 0x0001026a4b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a4bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a4c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a4c74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a4c48) */
/* WARNING: Removing unreachable block (ram,0x0001026a4bc4) */
/* WARNING: Removing unreachable block (ram,0x0001026a4b94) */
/* WARNING: Removing unreachable block (ram,0x0001026a4c78) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_1026a4ac0(void)

{
  undefined *puVar1;
  long *plVar2;
  long unaff_x20;
  long *plVar3;
  
  plVar2 = *(long **)(unaff_x20 + 0xa0);
  if (plVar2 == (long *)0x0) {
    return;
  }
  plVar3 = *(long **)(unaff_x20 + 0x58);
  func_0x000107c6157c(plVar2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (plVar3 != (long *)0x0) {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    func_0x000107c4c424();
    func_0x000107c61180();
    plVar2 = plVar3;
    func_0x0001000b637c();
    func_0x000107c61170(plVar3);
    puVar1 = &UNK_1105350f8;
    func_0x000107c613fc(&UNK_1105350f8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    (**(code **)(*plVar2 + 0x60))(0x1026a6840,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar2);
  return;
}



/* Entry: 1026a4cd0; end: 1026a4e17;  */

/* WARNING: Possible PIC construction at 0x0001026a4d98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a4dc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a4d9c) */
/* WARNING: Removing unreachable block (ram,0x0001026a4dcc) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_1026a4cd0(void)

{
  undefined *puVar1;
  long *plVar2;
  long unaff_x20;
  long *plVar3;
  
  plVar2 = *(long **)(unaff_x20 + 0xa0);
  if (plVar2 == (long *)0x0) {
    return;
  }
  plVar3 = *(long **)(unaff_x20 + 0x48);
  func_0x000107c6157c(plVar2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (plVar3 != (long *)0x0) {
    func_0x0001000285a8(0x112eafb88,&UNK_10dac3fb0);
    func_0x000107c4e640();
    func_0x000107c61180();
    plVar2 = plVar3;
    func_0x0001000b637c();
    func_0x000107c61170(plVar3);
    puVar1 = &UNK_1105350f8;
    func_0x000107c613fc(&UNK_1105350f8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    (**(code **)(*plVar2 + 0x60))(FUN_1026a65a8,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar2);
  return;
}



/* Entry: 1026a4e18; end: 1026a4e83;  */

void FUN_1026a4e18(undefined8 param_1,int param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c448d0();
  if (param_2 != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      if ((*(byte *)(param_3 + 0x98) & 1) == 0) {
        FUN_1026a2ce4(1);
      }
      func_0x000107c61574(param_3);
    }
  }
  return;
}



/* Entry: 1026a4e84; end: 1026a4fcb;  */

/* WARNING: Possible PIC construction at 0x0001026a4f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a4f7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a4f50) */
/* WARNING: Removing unreachable block (ram,0x0001026a4f80) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_1026a4e84(void)

{
  undefined *puVar1;
  long *plVar2;
  long unaff_x20;
  long *plVar3;
  
  plVar2 = *(long **)(unaff_x20 + 0xa0);
  if (plVar2 == (long *)0x0) {
    return;
  }
  plVar3 = *(long **)(unaff_x20 + 0x40);
  func_0x000107c6157c(plVar2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (plVar3 != (long *)0x0) {
    func_0x0001000285a8(0x112eb07a0,&UNK_10dac4d00);
    func_0x000107c4b930();
    func_0x000107c61180();
    plVar2 = plVar3;
    func_0x0001000b637c();
    func_0x000107c61170(plVar3);
    puVar1 = &UNK_1105350f8;
    func_0x000107c613fc(&UNK_1105350f8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    (**(code **)(*plVar2 + 0x60))(FUN_1026a6690,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar2);
  return;
}



/* Entry: 1026a4fcc; end: 1026a50cb;  */

void FUN_1026a4fcc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x98) & 1) == 0) {
      puVar1 = &UNK_1105352b0;
      func_0x000107c613fc(&UNK_1105352b0,0x20,7);
      *(undefined8 *)(puVar1 + 0x10) = 0x1026a6698;
      *(long *)(puVar1 + 0x18) = param_2;
      pcStack_58 = FUN_1026a66a0;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_10006eb60;
      puStack_60 = &UNK_1105352c8;
      ppuVar2 = &puStack_78;
      puStack_50 = puVar1;
      func_0x000107c60bc4(ppuVar2);
      puVar1 = puStack_50;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(puVar1);
      func_0x000107c4c604(uVar3);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c61574(param_2);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1026a50cc; end: 1026a5163;  */

/* WARNING: Possible PIC construction at 0x0001026a514c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a5150) */

void FUN_1026a50cc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110535300;
  func_0x000107c613fc(&UNK_110535300,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10daca7f8;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_1);
  func_0x0001001ca524(0x72,0,0x3c,4,0,0,&UNK_10daca800,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1026a5164; end: 1026a51cf;  */

void FUN_1026a5164(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026a51d0,uVar1,uVar2);
  return;
}



/* Entry: 1026a51d0; end: 1026a5203;  */

void FUN_1026a51d0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  FUN_1026a5204();
                    /* WARNING: Could not recover jumptable at 0x0001026a5200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026a5204; end: 1026a54df;  */

/* WARNING: Possible PIC construction at 0x0001026a5298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a52b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a535c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a541c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a5494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a2dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a3028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a3080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a3090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a30a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a3234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a2e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a32e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a30a4) */
/* WARNING: Removing unreachable block (ram,0x0001026a3084) */
/* WARNING: Removing unreachable block (ram,0x0001026a302c) */
/* WARNING: Removing unreachable block (ram,0x0001026a3044) */
/* WARNING: Removing unreachable block (ram,0x0001026a3048) */
/* WARNING: Removing unreachable block (ram,0x0001026a2dc0) */
/* WARNING: Removing unreachable block (ram,0x0001026a5498) */
/* WARNING: Removing unreachable block (ram,0x0001026a5420) */
/* WARNING: Removing unreachable block (ram,0x0001026a5434) */
/* WARNING: Removing unreachable block (ram,0x0001026a5480) */
/* WARNING: Removing unreachable block (ram,0x0001026a5360) */
/* WARNING: Removing unreachable block (ram,0x0001026a5390) */
/* WARNING: Removing unreachable block (ram,0x0001026a5394) */
/* WARNING: Removing unreachable block (ram,0x0001026a539c) */
/* WARNING: Removing unreachable block (ram,0x0001026a53a0) */
/* WARNING: Removing unreachable block (ram,0x0001026a529c) */
/* WARNING: Removing unreachable block (ram,0x0001026a52b8) */
/* WARNING: Removing unreachable block (ram,0x0001026a52a0) */
/* WARNING: Removing unreachable block (ram,0x0001026a2e68) */
/* WARNING: Removing unreachable block (ram,0x0001026a2e70) */
/* WARNING: Removing unreachable block (ram,0x0001026a3264) */
/* WARNING: Removing unreachable block (ram,0x0001026a3268) */
/* WARNING: Removing unreachable block (ram,0x0001026a2e7c) */
/* WARNING: Removing unreachable block (ram,0x0001026a2e80) */
/* WARNING: Removing unreachable block (ram,0x0001026a30a8) */
/* WARNING: Removing unreachable block (ram,0x0001026a31e8) */
/* WARNING: Removing unreachable block (ram,0x0001026a3218) */
/* WARNING: Removing unreachable block (ram,0x0001026a31fc) */
/* WARNING: Removing unreachable block (ram,0x0001026a3214) */
/* WARNING: Removing unreachable block (ram,0x0001026a3220) */
/* WARNING: Removing unreachable block (ram,0x0001026a3228) */
/* WARNING: Removing unreachable block (ram,0x0001026a322c) */
/* WARNING: Removing unreachable block (ram,0x0001026a3230) */
/* WARNING: Removing unreachable block (ram,0x0001026a2eac) */
/* WARNING: Removing unreachable block (ram,0x0001026a3094) */
/* WARNING: Removing unreachable block (ram,0x0001026a2ef8) */
/* WARNING: Removing unreachable block (ram,0x0001026a33a0) */
/* WARNING: Removing unreachable block (ram,0x0001026a3010) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a5204(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  code *pcVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar7 = *(long *)(unaff_x20 + 0x90);
  if (lVar7 == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c4c458(uVar3);
    func_0x000107c61180();
    uVar1 = 0;
    func_0x000107c573c4(0);
    func_0x000107c615e8(uVar3);
    lVar7 = *(long *)(unaff_x20 + 0x40);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 != 0) {
      lVar9 = lVar7;
      func_0x000107c4b88c();
      func_0x000107c61180();
      if (lVar9 != 0) {
        uVar8 = *(ulong *)(unaff_x20 + 0x38);
        func_0x000107c4c458();
        func_0x000107c61180();
        uVar5 = uVar8;
        func_0x000107c3f040();
        func_0x000107c61180();
        func_0x000107c615e8(uVar8);
        goto code_r0x000107c61170;
      }
      func_0x000107c615e8(lVar7);
    }
    uVar5 = *(ulong *)(unaff_x20 + 0x40);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar5;
      func_0x000107c4b88c();
      func_0x000107c61180();
      func_0x000107c615e8(uVar5);
    }
    uVar5 = uVar8;
    FUN_1026a3c7c();
    lVar9 = *(long *)(unaff_x20 + 0x68);
    lVar7 = lVar9;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 != 0) {
      FUN_1026a5904();
      func_0x000107c4bc28(lVar7);
      func_0x000107c615e8(lVar7);
    }
    if (uVar8 == 0) {
      if (uVar5 >> 0x3e == 0) {
        uVar8 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
        puVar4 = PTR_PTR_1126b1e08;
      }
      else {
        uVar8 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar8 = uVar5;
        }
        func_0x000107c60480();
        puVar4 = PTR_PTR_1126b1e08;
      }
      PTR_PTR_1126b1e08 = puVar4;
      if (uVar8 == 0) {
        func_0x000107c6142c(uVar5);
        uVar8 = *(ulong *)(unaff_x20 + 0x60);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (uVar8 == 0) {
          FUN_1026a3ef0();
          if ((uVar8 & 1) == 0) {
            lVar7 = *(long *)(unaff_x20 + 0x50);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar7 != 0) {
              lVar2 = lVar7;
              func_0x000107c448d0();
              func_0x000107c615e8(lVar7);
              if ((int)lVar2 != 0) {
                func_0x000107c5c734();
                func_0x000107c61180();
                if (lVar9 != 0) {
                  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
                  func_0x000107c4c458(uVar3);
                  func_0x000107c61180();
                  func_0x000107c5ea20();
                  func_0x000107c615e8(uVar3);
                  FUN_1026a5904();
                  func_0x000107c4bc2c(uVar1,lVar9);
                  func_0x000107c615e8(lVar9);
                }
                *(undefined1 *)(unaff_x20 + 0x98) = 1;
                uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
                *(undefined8 *)(unaff_x20 + 0xa0) = 0;
                func_0x000107c61574(uVar1);
                func_0x000107c61428(unaff_x20 + 0x10,&stack0xffffffffffffffc8,0,0);
                pcVar6 = *(code **)(unaff_x20 + 0x10);
                if (pcVar6 != (code *)0x0) {
                  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
                  func_0x000107c6157c(uVar1);
                  (*pcVar6)();
                  func_0x000100cffa7c(pcVar6,uVar1);
                }
                return;
              }
            }
          }
          return;
        }
        uVar5 = 0;
        func_0x0001072433f8(0,0,0);
        func_0x000107c61180();
        func_0x000107c4bcb0(uVar8);
        func_0x000107c615e8(uVar8);
      }
      else {
        func_0x000107c61168(puVar4);
        uVar1 = 0;
        FUN_1026a67d4(0,0x112da2440,&PTR__OBJC_CLASS___CLLocation_1126b30c8);
        func_0x000107c5fc48(uVar5,uVar1);
        func_0x000107c4c458(*(undefined8 *)(unaff_x20 + 0x38));
        func_0x000107c61180();
        func_0x000107c49638(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                            *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                            *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                            *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                            0x4010000000000000,0x4028000000000000,puVar4);
      }
    }
    else {
      func_0x000107c61174(uVar8);
      FUN_1026a3f68();
      uVar5 = uVar8;
    }
  }
  else {
    puVar4 = PTR_PTR_1126b1dc8;
    func_0x000107c61168(PTR_PTR_1126b1dc8);
    FUN_1026a67d4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(lVar7);
    uVar5 = 0;
    func_0x000107c60110(0);
    func_0x000107c3f168(puVar4);
    func_0x000107c61180();
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1026a54e0; end: 1026a5633;  */

void FUN_1026a54e0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  uVar5 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x98) & 1) == 0) {
      puVar2 = &UNK_110535210;
      func_0x000107c613fc(&UNK_110535210,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = 0x1026a65b0;
      *(long *)(puVar2 + 0x18) = param_2;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_78 = FUN_1026a65b8;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_10103b938;
      puStack_80 = &UNK_110535228;
      ppuVar3 = &puStack_98;
      puStack_70 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar2 = puStack_70;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(puVar2);
      pcStack_78 = FUN_1026a5784;
      puStack_70 = (undefined *)0x0;
      puStack_98 = puVar1;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_10103b93c;
      puStack_80 = &UNK_110535250;
      ppuVar4 = &puStack_98;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_70);
      func_0x000107c4c600(uVar5);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61574(param_2);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1026a5634; end: 1026a56db;  */

/* WARNING: Possible PIC construction at 0x0001026a56c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a56c4) */

void FUN_1026a5634(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (param_1 == 1) {
    FUN_1026a4e84();
    puVar1 = &UNK_110535288;
    func_0x000107c613fc(&UNK_110535288,0x20,7);
    *(undefined **)(puVar1 + 0x10) = &UNK_10daca7d0;
    *(undefined8 *)(puVar1 + 0x18) = param_2;
    func_0x000107c6157c(param_2);
    func_0x0001001ca524(0x72,0,0x3c,4,0,0,&UNK_10daca7e0,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1026a56dc; end: 1026a5747;  */

void FUN_1026a56dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026a5748,uVar1,uVar2);
  return;
}



/* Entry: 1026a5748; end: 1026a5783;  */

void FUN_1026a5748(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  FUN_1026a2ce4(1);
  FUN_1026a33a4();
                    /* WARNING: Could not recover jumptable at 0x0001026a5780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026a5784; end: 1026a5787;  */

void FUN_1026a5784(void)

{
  return;
}



/* Entry: 1026a5788; end: 1026a58a3;  */

void FUN_1026a5788(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if ((*(byte *)(param_3 + 0x98) & 1) == 0) {
      lVar1 = *(long *)(param_3 + 0x60);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        uVar2 = 1;
        func_0x0001072433f8(1,0,0);
        func_0x000107c61180();
        func_0x000107c4bcb0(lVar1);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(uVar2);
      }
      lVar1 = *(long *)(param_3 + 0x68);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x38);
        func_0x000107c4c458(uVar2);
        func_0x000107c61180();
        func_0x000107c5ea20();
        func_0x000107c615e8(uVar2);
        FUN_1026a5904();
        func_0x000107c4bc2c(param_1,lVar1);
        func_0x000107c615e8(lVar1);
      }
      FUN_1026a399c();
    }
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 1026a58a4; end: 1026a5903;  */

void FUN_1026a58a4(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x98) & 1) == 0) {
      FUN_1026a2ce4(1);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1026a5904; end: 1026a5abf;  */

uint FUN_1026a5904(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  uint uVar12;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x40);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    uVar10 = uVar1;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8();
    uVar12 = (uint)(uVar10 != 0);
  }
  FUN_1026a3ef0();
  uVar2 = *(ulong *)(unaff_x20 + 0x50);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar2 == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
    func_0x000107c615f0(uVar2);
    func_0x000107c5fadc(uVar3,uVar5);
    uVar4 = uVar2;
    func_0x000107c4e680();
    func_0x000107c61180();
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(uVar3);
    if (uVar4 != 0) {
      func_0x000107c61170(uVar4);
    }
    uVar11 = uVar2;
    func_0x000107c3db8c();
    func_0x000107c61180();
    uVar5 = 0;
    FUN_1026a67d4(0,0x112d5ecd8,&PTR_PTR_1126bf130);
    uVar3 = uVar5;
    func_0x000101158e5c();
    uVar6 = uVar11;
    func_0x000107c5fe10(uVar11,uVar5,uVar3);
    func_0x000107c61170(uVar11);
    if ((uVar6 & 0xc000000000000001) == 0) {
      uVar11 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      uVar11 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar11 = uVar6;
      }
      func_0x000107c6029c();
    }
    func_0x000107c6142c(uVar6);
    uVar6 = uVar2;
    func_0x000107c448d0();
    uVar7 = 0x1000000;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
    }
    uVar8 = 0x10000;
    if ((long)uVar11 <= (long)(ulong)(uVar4 != 0)) {
      uVar8 = 0;
    }
  }
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(uVar2);
  uVar9 = 0x100;
  if ((uVar1 & 1) == 0) {
    uVar9 = 0;
  }
  return uVar9 | uVar12 | uVar8 | uVar7;
}



/* Entry: 1026a5ac0; end: 1026a5b8b;  */

void FUN_1026a5ac0(void)

{
  long unaff_x20;
  
  func_0x000100cffa7c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100cffa7c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 1026a5b8c; end: 1026a5b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a5b8c(void)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  bVar1 = *(byte *)(*(long *)(unaff_x20 + 0x30) + _DAT_112eb80f0);
  if ((char)bVar1 < '\0') {
    FUN_1026a3544(bVar1 & 1);
    func_0x0001026e7134(0);
    uVar4 = 0;
    FUN_1026e6fd0();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar4;
    func_0x000107c61170(uVar5);
  }
  else if ((*(byte *)(unaff_x20 + 0x98) & 1) == 0) {
    iVar2 = (int)*(undefined8 *)(unaff_x20 + 0x70);
    func_0x0001090222b4();
    if (iVar2 == 0) {
      if (*(long *)(unaff_x20 + 0xa0) == 0) {
        uVar4 = 0;
        func_0x0001000c6560();
        func_0x000107c613fc();
        func_0x0001000c6580();
        uVar5 = *(undefined8 *)(unaff_x20 + 0xa0);
        *(undefined8 *)(unaff_x20 + 0xa0) = uVar4;
        func_0x000107c61574(uVar5);
        FUN_1026a4954();
        FUN_1026a4ac0();
        FUN_1026a4cd0();
      }
      FUN_1026a2ce4(bVar1 & 1);
      FUN_1026a33a4();
    }
    else {
      puVar3 = &UNK_1105350f8;
      func_0x000107c613fc(&UNK_1105350f8,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      uVar4 = 0x72;
      func_0x0001001ca524(0x72,0,0x3c,4,0,0,&UNK_10daca7a0,puVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uVar4);
    }
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c3eca4(uVar4);
  func_0x000107c61180();
  func_0x000107c53f78();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar4);
  return;
}



/* Entry: 1026a5b90; end: 1026a5bff;  */

bool FUN_1026a5b90(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = 0;
  func_0x0001026e7134(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    *(long *)(unaff_x20 + 0x30) = lVar2;
    func_0x000107c615f4(param_1,2);
    func_0x000107c61170(uVar1);
    FUN_1026a2b74();
    func_0x000107c615e8(param_1);
  }
  return lVar2 != 0;
}



/* Entry: 1026a5c00; end: 1026a5c03;  */

void FUN_1026a5c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_48;
  
  iVar1 = (int)*(undefined8 *)(unaff_x20 + 0x70);
  func_0x0001090222b4();
  if (iVar1 == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x68);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) goto LAB_1026a397c;
    uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c4c458(uVar4);
    func_0x000107c61180();
    func_0x000107c5ea20();
    func_0x000107c615e8(uVar4);
    uVar2 = (uint)uVar4;
    FUN_1026a5904();
    func_0x000107c4bc2c(param_1,lVar3,param_3,4,uVar2 & 0x1010101);
  }
  else {
    func_0x0001048580f8(&lStack_48);
    func_0x000107c5bdf4(lStack_48);
    lVar3 = lStack_48;
  }
  func_0x000107c615e8(lVar3);
LAB_1026a397c:
  FUN_1026a399c();
  return;
}



/* Entry: 1026a5c04; end: 1026a5c4f;  */

undefined1  [16] FUN_1026a5c04(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x000100cffa8c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1026a5c50; end: 1026a5c9f;  */

void FUN_1026a5c50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000100cffa7c(uVar1,uVar2);
  return;
}



/* Entry: 1026a5ca0; end: 1026a5ccf;  */

undefined1  [16] FUN_1026a5ca0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x10,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = FUN_1026a5cd0;
  return auVar1;
}



/* Entry: 1026a5cd0; end: 1026a5cd3;  */

void FUN_1026a5cd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026a5cd4; end: 1026a5d1f;  */

undefined1  [16] FUN_1026a5cd4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x000100cffa8c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1026a5d20; end: 1026a5d6f;  */

void FUN_1026a5d20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  func_0x000100cffa7c(uVar1,uVar2);
  return;
}



/* Entry: 1026a5d70; end: 1026a5d9f;  */

undefined1  [16] FUN_1026a5d70(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x20,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1026a683c;
  return auVar1;
}



/* Entry: 1026a5da0; end: 1026a5df3;  */

void FUN_1026a5da0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026a684c;
  plVar3[0x16] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x17] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x18] = lVar1;
  plVar3[0x19] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026a3a74,lVar1,lVar2);
  return;
}



/* Entry: 1026a5df4; end: 1026a5e57;  */

long FUN_1026a5df4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 1026a5e58; end: 1026a5ecf;  */

void FUN_1026a5e58(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1026a67d4(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}


