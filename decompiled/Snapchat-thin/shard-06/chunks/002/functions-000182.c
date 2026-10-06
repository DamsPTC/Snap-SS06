/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10464638c; end: 1046463eb; -[_TtC21SCWebBrowsingServices30SCWebBrowsingUserScopedService init] */

void FUN_10464638c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCWebBrowsingServices.SCWebBrowsingUserScopedService",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046463b8);
  (*pcVar1)();
}



/* Entry: 1046463ec; end: 10464651b; -[_TtC21SCWebBrowsingServices30SCWebBrowsingUserScopedService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046463ec(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b2b8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b2c0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b2c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308b2d0));
  return;
}



/* Entry: 10464651c; end: 10464653f;  */

void FUN_10464651c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104646540; end: 10464657f;  */

void FUN_104646540(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd22f88;
  _swift_getWitnessTable(&UNK_10dd22f88,&UNK_110792d70);
  puRam000000011308b300 = puVar1;
  return;
}



/* Entry: 104646580; end: 10464658f;  */

undefined1  [16] FUN_104646580(void)

{
  return ZEXT816(0x110792d70);
}



/* Entry: 104646590; end: 1046465bf;  */

void FUN_104646590(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1046487dc(param_1);
  return;
}



/* Entry: 1046465c0; end: 104646e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046465c0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  code *pcVar30;
  undefined8 uVar31;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar18 = 0;
  FUN_1046305a8();
  iVar14 = *(int *)(lVar18 + 0x14);
  lVar19 = 0;
  __s10Foundation3URLVMa();
  pcVar30 = *(code **)(*(long *)(lVar19 + -8) + 0x38);
  (*pcVar30)((long)param_1 + (long)iVar14,1,1,lVar19);
  iVar15 = *(int *)(lVar18 + 0x18);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar18 + 0x20));
  plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar18 + 0x40));
  *plVar2 = 0;
  *(undefined1 *)(plVar2 + 1) = 1;
  plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar18 + 0x6c));
  *plVar3 = 0;
  *(undefined1 *)(plVar3 + 1) = 1;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar18 + 0x90));
  *puVar4 = 0;
  *(undefined1 *)(puVar4 + 1) = 1;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar18 + 0xa8));
  *puVar5 = 0;
  *(undefined1 *)(puVar5 + 1) = 1;
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar18 + 0xac));
  *puVar6 = 0;
  *(undefined1 *)(puVar6 + 1) = 1;
  iVar16 = *(int *)(lVar18 + 0xb8);
  lVar21 = 1;
  (*pcVar30)((long)param_1 + (long)iVar16,1,1,lVar19);
  puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar18 + 0xd8));
  puVar7[6] = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  puVar7[1] = 0;
  *puVar7 = 0;
  puVar8 = (undefined8 *)(param_2 + _DAT_11308b308);
  uVar20 = puVar8[1];
  uVar28 = *puVar8;
  param_1[1] = puVar8[1];
  *param_1 = uVar28;
  lVar22 = _DAT_113814f78;
  _swift_bridgeObjectRetain(uVar20);
  lVar19 = (long)param_1 + (long)iVar14;
  func_0x00010137dd74(param_2 + lVar22);
  uVar20 = *(undefined8 *)(param_2 + _DAT_113814f80);
  *(undefined8 *)((long)param_1 + (long)iVar15) = uVar20;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0x1c)) =
       *(undefined1 *)(param_2 + _DAT_113814f88);
  lVar22 = *(long *)(param_2 + _DAT_113814f90);
  if (lVar22 == 0) {
    uVar28 = 0;
    uVar27 = 1;
    uVar26 = 0;
  }
  else {
    puVar8 = (undefined8 *)(lVar22 + _DAT_11308b710);
    puVar9 = (undefined8 *)(lVar22 + _DAT_11308b718);
    uVar27 = puVar8[1];
    uVar26 = *puVar8;
    uVar25 = puVar8[1];
    uStack_78 = puVar9[1];
    uStack_80 = *puVar9;
    uVar28 = *(undefined8 *)(lVar22 + _DAT_11308b720);
    _swift_bridgeObjectRetain(puVar9[1]);
    _swift_bridgeObjectRetain(uVar25);
  }
  puVar1[1] = uVar27;
  *puVar1 = uVar26;
  puVar1[3] = uStack_78;
  puVar1[2] = uStack_80;
  puVar1[4] = uVar28;
  iVar14 = *(int *)(lVar18 + 0x38);
  puVar1 = (undefined8 *)(param_2 + _DAT_113814f98);
  uVar28 = *puVar1;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar18 + 0x24));
  puVar8[1] = puVar1[1];
  *puVar8 = uVar28;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0x28)) =
       *(undefined1 *)(param_2 + _DAT_113814fa0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0x2c)) =
       *(undefined1 *)(param_2 + _DAT_113814fa8);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar18 + 0x30)) =
       *(undefined8 *)(param_2 + _DAT_113814fb0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0x34)) =
       *(undefined1 *)(param_2 + _DAT_113814fb8);
  *(undefined8 *)((long)param_1 + (long)iVar14) = *(undefined8 *)(param_2 + _DAT_113814fc0);
  uVar28 = puVar1[1];
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0x3c)) =
       *(undefined1 *)(param_2 + _DAT_113814fc8);
  lVar22 = *(long *)(param_2 + _DAT_113814fd0);
  bVar10 = lVar22 == 0;
  if (bVar10) {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar28);
    lVar22 = 0;
  }
  else {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar28);
    func_0x00010c067fc0();
  }
  *plVar2 = lVar22;
  *(bool *)(plVar2 + 1) = bVar10;
  iVar11 = *(int *)(lVar18 + 0x48);
  iVar14 = *(int *)(lVar18 + 0x58);
  iVar12 = *(int *)(lVar18 + 0x5c);
  iVar15 = *(int *)(lVar18 + 0x60);
  iVar13 = *(int *)(lVar18 + 100);
  iVar17 = *(int *)(lVar18 + 0x68);
  puVar1 = (undefined8 *)(param_2 + _DAT_113814fd8);
  uVar28 = puVar1[1];
  uVar20 = *puVar1;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar18 + 0x44));
  puVar8[1] = puVar1[1];
  *puVar8 = uVar20;
  puVar1 = (undefined8 *)(param_2 + _DAT_113814fe0);
  uVar20 = *puVar1;
  puVar8 = (undefined8 *)((long)param_1 + (long)iVar11);
  puVar8[1] = puVar1[1];
  *puVar8 = uVar20;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0x4c)) =
       *(undefined1 *)(param_2 + _DAT_113814fe8);
  uVar26 = puVar1[1];
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0x50)) =
       *(undefined1 *)(param_2 + _DAT_113814ff0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0x54)) =
       *(undefined1 *)(param_2 + _DAT_113814ff8);
  puVar1 = (undefined8 *)(param_2 + _DAT_113815000);
  uVar29 = puVar1[1];
  uVar20 = *puVar1;
  puVar8 = (undefined8 *)((long)param_1 + (long)iVar14);
  puVar8[1] = puVar1[1];
  *puVar8 = uVar20;
  puVar1 = (undefined8 *)(param_2 + _DAT_113815008);
  uVar25 = puVar1[1];
  uVar20 = *puVar1;
  puVar8 = (undefined8 *)((long)param_1 + (long)iVar12);
  puVar8[1] = puVar1[1];
  *puVar8 = uVar20;
  puVar1 = (undefined8 *)(param_2 + _DAT_113815010);
  uVar27 = puVar1[1];
  uVar20 = *puVar1;
  puVar8 = (undefined8 *)((long)param_1 + (long)iVar15);
  puVar8[1] = puVar1[1];
  *puVar8 = uVar20;
  puVar1 = (undefined8 *)(param_2 + _DAT_113815018);
  uVar20 = *puVar1;
  puVar8 = (undefined8 *)((long)param_1 + (long)iVar13);
  puVar8[1] = puVar1[1];
  *puVar8 = uVar20;
  uVar31 = puVar1[1];
  puVar1 = (undefined8 *)(param_2 + _DAT_113815020);
  uVar20 = puVar1[1];
  uVar23 = *puVar1;
  puVar8 = (undefined8 *)((long)param_1 + (long)iVar17);
  puVar8[1] = puVar1[1];
  *puVar8 = uVar23;
  lVar22 = *(long *)(param_2 + _DAT_113815028);
  bVar10 = lVar22 == 0;
  if (bVar10) {
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar28);
    _swift_bridgeObjectRetain(uVar26);
    _swift_bridgeObjectRetain(uVar29);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar31);
    lVar22 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar28);
    _swift_bridgeObjectRetain(uVar26);
    _swift_bridgeObjectRetain(uVar29);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar31);
    func_0x00010c067fc0();
  }
  *plVar3 = lVar22;
  *(bool *)(plVar3 + 1) = bVar10;
  iVar14 = *(int *)(lVar18 + 0x80);
  iVar15 = *(int *)(lVar18 + 0x8c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar18 + 0x70)) =
       *(undefined8 *)(param_2 + _DAT_113815030);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar18 + 0x74)) =
       *(undefined8 *)(param_2 + _DAT_113815038);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar18 + 0x78)) =
       *(undefined8 *)(param_2 + _DAT_113815040);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar18 + 0x7c)) =
       *(undefined8 *)(param_2 + _DAT_113815048);
  puVar1 = (undefined8 *)(param_2 + _DAT_113815050);
  uVar28 = *puVar1;
  puVar8 = (undefined8 *)((long)param_1 + (long)iVar14);
  puVar8[1] = puVar1[1];
  *puVar8 = uVar28;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar18 + 0x84)) =
       *(undefined8 *)(param_2 + _DAT_113815058);
  uVar20 = puVar1[1];
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0x88)) =
       *(undefined1 *)(param_2 + _DAT_113815060);
  *(undefined8 *)((long)param_1 + (long)iVar15) = *(undefined8 *)(param_2 + _DAT_113815068);
  lVar22 = *(long *)(param_2 + _DAT_113815070);
  if (lVar22 == 0) {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar20);
    uVar28 = 0;
  }
  else {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar20);
    func_0x00010bf885a0(lVar22);
  }
  *puVar4 = uVar28;
  *(bool *)(puVar4 + 1) = lVar22 == 0;
  puVar1 = (undefined8 *)(param_2 + _DAT_113815078);
  uVar28 = *puVar1;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar18 + 0x94));
  puVar4[1] = puVar1[1];
  *puVar4 = uVar28;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0x98)) =
       *(undefined1 *)(param_2 + _DAT_113815080);
  uVar20 = puVar1[1];
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0x9c)) =
       *(undefined1 *)(param_2 + _DAT_113815088);
  lVar22 = *(long *)(param_2 + _DAT_113815090);
  if (lVar22 == 0) {
    _swift_bridgeObjectRetain(uVar20);
    lVar22 = 0;
    lVar19 = 0;
    lVar21 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar20);
    _objc_retain();
    func_0x00010483fb54();
  }
  plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar18 + 0xa0));
  *plVar2 = lVar22;
  plVar2[1] = lVar19;
  plVar2[2] = lVar21;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0xa4)) =
       *(undefined1 *)(param_2 + _DAT_113815098);
  uVar20 = 0;
  bVar10 = *(long *)(param_2 + _DAT_1138150a0) == 0;
  if (bVar10) {
    uVar28 = 0;
  }
  else {
    func_0x00010bf885a0();
  }
  *puVar5 = uVar28;
  *(bool *)(puVar5 + 1) = bVar10;
  bVar10 = *(long *)(param_2 + _DAT_1138150a8) == 0;
  if (!bVar10) {
    func_0x00010bf885a0();
    uVar20 = uVar28;
  }
  *puVar6 = uVar20;
  *(bool *)(puVar6 + 1) = bVar10;
  iVar14 = *(int *)(lVar18 + 0xc0);
  iVar15 = *(int *)(lVar18 + 0xc4);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar18 + 0xb0)) =
       *(undefined8 *)(param_2 + _DAT_1138150b0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0xb4)) =
       *(undefined1 *)(param_2 + _DAT_1138150b8);
  func_0x00010137dd74(param_2 + _DAT_1138150c0,(long)param_1 + (long)iVar16);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0xbc)) =
       *(undefined1 *)(param_2 + _DAT_1138150c8);
  puVar1 = (undefined8 *)(param_2 + _DAT_1138150d0);
  uVar20 = *puVar1;
  puVar4 = (undefined8 *)((long)param_1 + (long)iVar14);
  puVar4[1] = puVar1[1];
  *puVar4 = uVar20;
  puVar4 = (undefined8 *)(param_2 + _DAT_1138150d8);
  uVar20 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)iVar15);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar20;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 200)) =
       *(undefined1 *)(param_2 + _DAT_1138150e0);
  uVar31 = puVar1[1];
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0xcc)) =
       *(undefined1 *)(param_2 + _DAT_1138150e8);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0xd0)) =
       *(undefined1 *)(param_2 + _DAT_1138150f0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar18 + 0xd4)) =
       *(undefined1 *)(param_2 + _DAT_1138150f8);
  uVar24 = puVar4[1];
  lVar19 = *(long *)(param_2 + _DAT_113815100);
  uVar20 = *puVar7;
  uVar27 = puVar7[1];
  uVar28 = puVar7[2];
  uVar25 = puVar7[3];
  uVar26 = puVar7[4];
  uVar29 = puVar7[5];
  uVar23 = puVar7[6];
  _swift_bridgeObjectRetain(uVar31);
  _swift_bridgeObjectRetain(uVar24);
  func_0x0001034a6828(uVar20,uVar27,uVar28,uVar25,uVar26,uVar29,uVar23);
  if (lVar19 == 0) {
    _objc_release(param_2);
    puVar7[6] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    return;
  }
  uVar26 = ((undefined8 *)(lVar19 + _DAT_113091678))[1];
  uVar20 = *(undefined8 *)(lVar19 + _DAT_113091680);
  uVar27 = ((undefined8 *)(lVar19 + _DAT_113091680))[1];
  uVar28 = *(undefined8 *)(lVar19 + _DAT_113091688);
  uVar25 = ((undefined8 *)(lVar19 + _DAT_113091688))[1];
  uVar29 = *(undefined8 *)(lVar19 + _DAT_113091690);
  *puVar7 = *(undefined8 *)(lVar19 + _DAT_113091678);
  puVar7[1] = uVar26;
  puVar7[2] = uVar20;
  puVar7[3] = uVar27;
  puVar7[4] = uVar28;
  puVar7[5] = uVar25;
  puVar7[6] = uVar29;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar27);
  _swift_bridgeObjectRetain(uVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104646e20; end: 104646e47;  */

void FUN_104646e20(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x00010bf885a0(*param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 104646e48; end: 104646e53; -[SCAdWebBrowserConfig browserClientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104646e48(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308b308))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308b308);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104646e54; end: 104646e5f; -[SCAdWebBrowserConfig expectedInitialURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104646e54(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_10464ea80(param_1 + _DAT_113814f78,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104646e60; end: 104646e6b; -[SCAdWebBrowserConfig initialRequestHeaders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104646e60(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113814f80);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104646e6c; end: 104646e7b; -[SCAdWebBrowserConfig alwaysSendInitialRequestHeaders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104646e6c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113814f88);
}



/* Entry: 104646e7c; end: 104646e8b; -[SCAdWebBrowserConfig attributionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104646e7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113814f90));
  return;
}



/* Entry: 104646e8c; end: 104646e97; -[SCAdWebBrowserConfig popupBridgeURLScheme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104646e8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113814f98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113814f98);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104646e98; end: 104646ea7; -[SCAdWebBrowserConfig ignoreSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104646e98(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113814fa0);
}



/* Entry: 104646ea8; end: 104646eb7; -[SCAdWebBrowserConfig isAdWebview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104646ea8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113814fa8);
}



/* Entry: 104646eb8; end: 104646ec7; -[SCAdWebBrowserConfig source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104646eb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113814fb0);
}



/* Entry: 104646ec8; end: 104646ed7; -[SCAdWebBrowserConfig allowSafariBrowser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104646ec8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113814fb8);
}



/* Entry: 104646ed8; end: 104646f33; -[SCAdWebBrowserConfig initialRedirectQueryItemsToRetain] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104646ed8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113814fc0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    __s10Foundation12URLQueryItemVMa(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104646f34; end: 104646f43; -[SCAdWebBrowserConfig hasServerRedirect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104646f34(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113814fc8);
}



/* Entry: 104646f44; end: 104646f53; -[SCAdWebBrowserConfig expectedServerRedirectCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104646f44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113814fd0));
  return;
}



/* Entry: 104646f54; end: 104646f5f; -[SCAdWebBrowserConfig expectedServerRedirectResolvedUrlPrefix] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104646f54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113814fd8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113814fd8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104646f60; end: 104646f6b; -[SCAdWebBrowserConfig prefetchHintsId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104646f60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113814fe0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113814fe0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104646f6c; end: 104646f7b; -[SCAdWebBrowserConfig enableUsePrefetchHintsLoadedWebView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104646f6c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113814fe8);
}



/* Entry: 104646f7c; end: 104646f8b; -[SCAdWebBrowserConfig enableExternalBrowser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104646f7c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113814ff0);
}



/* Entry: 104646f8c; end: 104646f9b; -[SCAdWebBrowserConfig isRedirectExb] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104646f8c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113814ff8);
}



/* Entry: 104646f9c; end: 104646fa7; -[SCAdWebBrowserConfig ghostWriterUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104646f9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113815000))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113815000);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104646fa8; end: 104646fb3; -[SCAdWebBrowserConfig ghostWriterConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104646fa8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113815008))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113815008);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104646fb4; end: 104646fbf; -[SCAdWebBrowserConfig adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104646fb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113815010))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113815010);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104646fc0; end: 104646fcb; -[SCAdWebBrowserConfig pageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104646fc0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113815018))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113815018);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104646fcc; end: 104646fd7; -[SCAdWebBrowserConfig adServeItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104646fcc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113815020))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113815020);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104646fd8; end: 104646fe7; -[SCAdWebBrowserConfig interactiveIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104646fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113815028));
  return;
}



/* Entry: 104646fe8; end: 104646ff7; -[SCAdWebBrowserConfig trackSeqNum] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104646fe8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113815030);
}



/* Entry: 104646ff8; end: 104647007; -[SCAdWebBrowserConfig viewSeqNum] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104646ff8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113815038);
}



/* Entry: 104647008; end: 104647017; -[SCAdWebBrowserConfig adType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104647008(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113815040);
}



/* Entry: 104647018; end: 104647027; -[SCAdWebBrowserConfig adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104647018(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113815048);
}



/* Entry: 104647028; end: 104647033; -[SCAdWebBrowserConfig adRequestClientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104647028(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113815050))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113815050);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104647034; end: 104647043; -[SCAdWebBrowserConfig snapIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104647034(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113815058);
}



/* Entry: 104647044; end: 104647053; -[SCAdWebBrowserConfig allowPreloading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104647044(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113815060);
}



/* Entry: 104647054; end: 10464705f; -[SCAdWebBrowserConfig cidParmas] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104647054(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113815068);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104647060; end: 1046470bb;  */

void FUN_104647060(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1046470bc; end: 1046470cb; -[SCAdWebBrowserConfig cidAutoCorrectServerRedirectDistance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046470bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113815070));
  return;
}



/* Entry: 1046470cc; end: 1046470d7; -[SCAdWebBrowserConfig exbAfterHtmlUrlResolvePrefixMatch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046470cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113815078))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113815078);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046470d8; end: 1046470e7; -[SCAdWebBrowserConfig exbAfterHtmlUrlResolve] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1046470d8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113815080);
}



/* Entry: 1046470e8; end: 1046470f7; -[SCAdWebBrowserConfig exbSubNavOnly] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1046470e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113815088);
}



/* Entry: 1046470f8; end: 104647107; -[SCAdWebBrowserConfig urlParameterUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046470f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113815090));
  return;
}



/* Entry: 104647108; end: 104647117; -[SCAdWebBrowserConfig allowDeeplink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104647108(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113815098);
}



/* Entry: 104647118; end: 104647127; -[SCAdWebBrowserConfig lifecycleExtensionTtlMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104647118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138150a0));
  return;
}



/* Entry: 104647128; end: 104647137; -[SCAdWebBrowserConfig lifecycleExtensionMinDwellTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104647128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138150a8));
  return;
}



/* Entry: 104647138; end: 104647147; -[SCAdWebBrowserConfig thirdPartyLoginSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104647138(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1138150b0);
}



/* Entry: 104647148; end: 104647157; -[SCAdWebBrowserConfig isInOperaLayerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104647148(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138150b8);
}



/* Entry: 104647158; end: 104647163; -[SCAdWebBrowserConfig destinationUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104647158(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_10464ea80(param_1 + _DAT_1138150c0,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104647164; end: 104647243;  */

void FUN_104647164(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_10464ea80(param_1 + *param_3,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104647244; end: 104647253; -[SCAdWebBrowserConfig enablePromoInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104647244(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138150c8);
}



/* Entry: 104647254; end: 10464725f; -[SCAdWebBrowserConfig said] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104647254(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138150d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138150d0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104647260; end: 10464726b; -[SCAdWebBrowserConfig dynamicScriptConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104647260(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138150d8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138150d8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10464726c; end: 1046472c3;  */

void FUN_10464726c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046472c4; end: 1046472d3; -[SCAdWebBrowserConfig disallowPrivacyPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1046472c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138150e0);
}



/* Entry: 1046472d4; end: 1046472e3; -[SCAdWebBrowserConfig enableAppendingClickIdForExb] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1046472d4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138150e8);
}



/* Entry: 1046472e4; end: 1046472f3; -[SCAdWebBrowserConfig enableSkoverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1046472e4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138150f0);
}



/* Entry: 1046472f4; end: 104647303; -[SCAdWebBrowserConfig disableCustomUserAgent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1046472f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138150f8);
}



/* Entry: 104647304; end: 104647313; -[SCAdWebBrowserConfig retargetPromptInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104647304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113815100));
  return;
}



/* Entry: 104647314; end: 104647e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104647314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined4 param_22,undefined4 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined1 param_42,undefined4 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined4 param_48,
             undefined4 param_49,undefined8 param_50,undefined1 param_51,undefined4 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined1 param_56,
             undefined4 param_57,undefined8 param_58,undefined1 param_59,undefined4 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined4 param_65,undefined4 param_66,undefined8 param_67)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b308);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_10464ea80(param_3,unaff_x20 + _DAT_113814f78,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(unaff_x20 + _DAT_113814f80) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113814f88) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113814f90) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113814f98);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_113814fa0) = (undefined1)param_9;
  *(undefined1 *)(unaff_x20 + _DAT_113814fa8) = param_9._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_113814fb0) = param_11;
  *(undefined1 *)(unaff_x20 + _DAT_113814fb8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_113814fc0) = param_14;
  *(undefined1 *)(unaff_x20 + _DAT_113814fc8) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_113814fd0) = param_17;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113814fd8);
  *puVar1 = param_18;
  puVar1[1] = param_19;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113814fe0);
  *puVar1 = param_20;
  puVar1[1] = param_21;
  *(undefined1 *)(unaff_x20 + _DAT_113814fe8) = (undefined1)param_22;
  *(undefined1 *)(unaff_x20 + _DAT_113814ff0) = param_22._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_113814ff8) = param_22._2_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815000);
  *puVar1 = param_24;
  puVar1[1] = param_25;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815008);
  *puVar1 = param_26;
  puVar1[1] = param_27;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815010);
  *puVar1 = param_28;
  puVar1[1] = param_29;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815018);
  *puVar1 = param_30;
  puVar1[1] = param_31;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815020);
  *puVar1 = param_32;
  puVar1[1] = param_33;
  *(undefined8 *)(unaff_x20 + _DAT_113815028) = param_34;
  *(undefined8 *)(unaff_x20 + _DAT_113815030) = param_35;
  *(undefined8 *)(unaff_x20 + _DAT_113815038) = param_36;
  *(undefined8 *)(unaff_x20 + _DAT_113815040) = param_37;
  *(undefined8 *)(unaff_x20 + _DAT_113815048) = param_38;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815050);
  *puVar1 = param_39;
  puVar1[1] = param_40;
  *(undefined8 *)(unaff_x20 + _DAT_113815058) = param_41;
  *(undefined1 *)(unaff_x20 + _DAT_113815060) = param_42;
  *(undefined8 *)(unaff_x20 + _DAT_113815068) = param_44;
  *(undefined8 *)(unaff_x20 + _DAT_113815070) = param_45;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815078);
  *puVar1 = param_46;
  puVar1[1] = param_47;
  *(undefined1 *)(unaff_x20 + _DAT_113815080) = (undefined1)param_48;
  *(undefined1 *)(unaff_x20 + _DAT_113815088) = param_48._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_113815090) = param_50;
  *(undefined1 *)(unaff_x20 + _DAT_113815098) = param_51;
  *(undefined8 *)(unaff_x20 + _DAT_1138150a0) = param_53;
  *(undefined8 *)(unaff_x20 + _DAT_1138150a8) = param_54;
  *(undefined8 *)(unaff_x20 + _DAT_1138150b0) = param_55;
  *(undefined1 *)(unaff_x20 + _DAT_1138150b8) = param_56;
  FUN_10464ea80(param_58,unaff_x20 + _DAT_1138150c0,0x112d36580,&UNK_10d9016d0);
  *(undefined1 *)(unaff_x20 + _DAT_1138150c8) = param_59;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138150d0);
  *puVar1 = param_61;
  puVar1[1] = param_62;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138150d8);
  *puVar1 = param_63;
  puVar1[1] = param_64;
  *(undefined1 *)(unaff_x20 + _DAT_1138150e0) = (undefined1)param_65;
  *(undefined1 *)(unaff_x20 + _DAT_1138150e8) = param_65._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_1138150f0) = param_65._2_1_;
  *(undefined1 *)(unaff_x20 + _DAT_1138150f8) = param_65._3_1_;
  *(undefined8 *)(unaff_x20 + _DAT_113815100) = param_67;
  puVar2 = auStack_78;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x00010464eac8(param_58,0x112d36580,&UNK_10d9016d0);
  func_0x00010464eac8(param_3,0x112d36580,&UNK_10d9016d0);
  return puVar2;
}



/* Entry: 104647e24; end: 1046487db; -[SCAdWebBrowserConfig initWithBrowserClientId:expectedInitialURL:initialRequestHeaders:alwaysSendInitialRequestHeaders:attributionInfo:popupBridgeURLScheme:ignoreSafeAreaInsets:isAdWebview:source:allowSafariBrowser:initialRedirectQueryItemsToRetain:hasServerRedirect:expectedServerRedirectCount:expectedServerRedirectResolvedUrlPrefix:prefetchHintsId:enableUsePrefetchHintsLoadedWebView:enableExternalBrowser:isRedirectExb:ghostWriterUrl:ghostWriterConfig:adId:pageId:adServeItemId:interactiveIndex:trackSeqNum:viewSeqNum:adType:adProductType:adRequestClientId:snapIndex:allowPreloading:cidParmas:cidAutoCorrectServerRedirectDistance:exbAfterHtmlUrlResolvePrefixMatch:exbAfterHtmlUrlResolve:exbSubNavOnly:urlParameterUpdate:allowDeeplink:lifecycleExtensionTtlMs:lifecycleExtensionMinDwellTimeMs:thirdPartyLoginSource:isInOperaLayerView:destinationUrl:enablePromoInfo:said:dynamicScriptConfig:disallowPrivacyPrompt:enableAppendingClickIdForExb:enableSkoverlay:disableCustomUserAgent:retargetPromptInfo:] */

void FUN_104647e24(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined4 param_6,undefined8 param_7,long param_8,uint param_9,
                  undefined4 param_10,long param_11,byte param_12,undefined4 param_13,long param_14,
                  byte param_15,undefined4 param_16,undefined8 param_17,long param_18,long param_19,
                  uint param_20,undefined4 param_21,long param_22,long param_23,long param_24,
                  long param_25,long param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,long param_30,undefined8 param_31,long param_32,
                  undefined8 param_33,undefined1 param_34,undefined4 param_35,long param_36,
                  undefined8 param_37,long param_38,undefined4 param_39,undefined4 param_40,
                  undefined8 param_41,byte param_42,undefined4 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,byte param_47,undefined4 param_48,
                  long param_49,byte param_50,undefined4 param_51,long param_52,long param_53,
                  undefined4 param_54,undefined4 param_55,undefined8 param_56)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  byte abStack_390 [8];
  long lStack_388;
  byte abStack_380 [8];
  long lStack_378;
  byte abStack_370 [8];
  long alStack_368 [5];
  byte abStack_340 [8];
  long alStack_338 [18];
  undefined1 auStack_2a8 [8];
  long alStack_2a0 [4];
  undefined1 auStack_280 [8];
  undefined8 uStack_278;
  byte abStack_270 [8];
  undefined8 auStack_268 [3];
  byte abStack_250 [8];
  long lStack_248;
  byte abStack_240 [8];
  long alStack_238 [4];
  byte abStack_218 [8];
  undefined8 auStack_210 [2];
  uint uStack_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  undefined8 uStack_1e8;
  uint uStack_1dc;
  ulong uStack_1d8;
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar15 = 0x112d36580;
  puVar11 = &UNK_10d9016d0;
  uStack_dc = param_6;
  uStack_d8 = param_1;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  lVar15 = (long)&uStack_200 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_70 = lVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar15 - extraout_x12;
  if (param_3 == 0) {
    puStack_f8 = (undefined *)0x0;
    lStack_f0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_f8 = puVar11;
    lStack_f0 = param_3;
  }
  lStack_128 = param_56;
  lStack_80 = param_52;
  lStack_78 = param_53;
  lStack_88 = param_49;
  lStack_b0 = param_45;
  puStack_130 = (undefined *)param_44;
  uStack_138 = param_41;
  lStack_90 = param_38;
  uStack_120 = param_37;
  lStack_a0 = param_32;
  lStack_98 = param_36;
  uStack_118 = param_27;
  lStack_a8 = param_26;
  lStack_c0 = param_24;
  lStack_b8 = param_25;
  lStack_d0 = param_19;
  lStack_c8 = param_22;
  if (param_4 == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar15,param_4);
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  puVar11 = (undefined *)(ulong)(param_4 == 0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar15,puVar11,1);
  lStack_e8 = lVar15;
  if (param_5 == 0) {
    lStack_100 = 0;
  }
  else {
    puVar11 = PTR___sSSN_11034da80;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    lStack_100 = param_5;
  }
  _objc_retain();
  lVar3 = param_8;
  uStack_108 = param_7;
  _objc_retain();
  lStack_150 = param_14;
  _objc_retain();
  _objc_retain();
  lStack_160 = param_18;
  uStack_110 = param_17;
  _objc_retain();
  lVar12 = lStack_d0;
  _objc_retain();
  lVar4 = lStack_c8;
  _objc_retain();
  puStack_190 = (undefined *)param_23;
  _objc_retain();
  lVar5 = lStack_c0;
  _objc_retain();
  lVar6 = lStack_b8;
  _objc_retain();
  lVar7 = lStack_a8;
  puStack_198 = (undefined *)lVar6;
  _objc_retain();
  _objc_retain();
  lVar6 = lStack_a0;
  _objc_retain();
  lVar8 = lStack_98;
  puStack_1a0 = (undefined *)lVar6;
  _objc_retain();
  puStack_1a8 = (undefined *)lVar8;
  _objc_retain();
  lVar6 = lStack_90;
  _objc_retain();
  lStack_188 = lVar6;
  _objc_retain();
  puVar9 = puStack_130;
  _objc_retain();
  lVar6 = lStack_b0;
  uStack_140 = puVar9;
  _objc_retain();
  lVar8 = lStack_88;
  uStack_148 = lVar6;
  _objc_retain();
  lVar6 = lStack_80;
  _objc_retain();
  lVar10 = lStack_78;
  lStack_178 = lVar6;
  _objc_retain();
  lVar6 = lStack_128;
  lStack_b0 = lVar10;
  _objc_retain();
  uStack_158 = lVar6;
  if (lVar3 == 0) {
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_130 = puVar11;
    lStack_128 = param_8;
    _objc_release(lVar3);
  }
  if (param_14 == 0) {
    lStack_150 = 0;
  }
  else {
    puVar11 = (undefined *)0x0;
    __s10Foundation12URLQueryItemVMa();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(param_14);
  }
  if (param_18 == 0) {
    lStack_160 = 0;
    puStack_168 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_168 = puVar11;
    _objc_release(param_18);
  }
  if (lVar12 == 0) {
    lStack_d0 = 0;
    puStack_170 = (undefined *)0x0;
    lVar3 = lStack_70;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_170 = puVar11;
    _objc_release(lVar12);
    lVar3 = lStack_70;
  }
  lStack_70 = lVar3;
  if (lVar4 == 0) {
    lStack_c8 = 0;
    puStack_180 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_180 = puVar11;
    _objc_release(lVar4);
  }
  lVar12 = lStack_188;
  if (param_23 == 0) {
    lStack_188 = 0;
    puStack_190 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_188 = (long)puStack_190;
    puStack_190 = puVar11;
    _objc_release(param_23);
  }
  puVar9 = puStack_198;
  if (lVar5 == 0) {
    lStack_c0 = 0;
    puStack_198 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_198 = puVar11;
    _objc_release(lVar5);
  }
  puVar2 = puStack_1a0;
  puVar1 = puStack_1a8;
  if (puVar9 == (undefined *)0x0) {
    lStack_b8 = 0;
    puStack_1a0 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_1a0 = puVar11;
    _objc_release(puVar9);
  }
  if (lVar7 == 0) {
    lStack_a8 = 0;
    puStack_1a8 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_1a8 = puVar11;
    _objc_release(lVar7);
  }
  if (puVar2 == (undefined *)0x0) {
    lStack_a0 = 0;
    puStack_1b0 = (undefined *)0x0;
    puVar9 = PTR___sSSN_11034da80;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_1b0 = puVar11;
    _objc_release(puVar2);
    puVar9 = PTR___sSSN_11034da80;
  }
  PTR___sSSN_11034da80 = puVar9;
  if (puVar1 == (undefined *)0x0) {
    lStack_98 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (lStack_98,puVar9,puVar9,PTR___sSSSHsWP_11034da90);
    _objc_release(puVar1);
    puVar11 = puVar9;
  }
  if (lVar12 == 0) {
    lStack_90 = 0;
    puStack_1b8 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_1b8 = puVar11;
    _objc_release(lVar12);
  }
  if (lVar8 != 0) {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar3,lStack_88);
    _objc_release(lVar8);
  }
  uVar13 = (ulong)(lVar8 == 0);
  lVar12 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar3,uVar13,1,lVar12);
  lVar3 = lStack_178;
  if (lStack_178 == 0) {
    lVar12 = 0;
    uVar13 = 0;
  }
  else {
    lVar12 = lStack_80;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar3);
  }
  lVar3 = lStack_78;
  if (lStack_b0 == 0) {
    uVar14 = 0;
    lVar3 = 0;
  }
  else {
    lStack_178 = param_30;
    lStack_78 = CONCAT44(lStack_78._4_4_,(uint)param_12);
    lStack_88 = param_11;
    uStack_1bc = (uint)param_9._1_1_;
    uStack_1c0 = param_9 & 0xff;
    uStack_1c4 = (uint)param_15;
    uStack_1c8 = (uint)param_20._2_1_;
    uStack_1cc = (uint)param_20._1_1_;
    uStack_1fc = param_20 & 0xff;
    uStack_1dc = (uint)param_47;
    uStack_1f0 = (uint)param_54._3_1_;
    uStack_1f4 = (uint)param_54._2_1_;
    uStack_1e8 = param_46;
    uStack_1ec = (uint)param_50;
    uStack_1f8 = (uint)param_54._1_1_;
    uStack_200 = (uint)param_42;
    uVar14 = param_29;
    uStack_1d8 = uVar13;
    lStack_80 = lVar12;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lStack_b0);
    param_42 = (byte)uStack_200;
    param_54._1_1_ = (byte)uStack_1f8;
    param_50 = (byte)uStack_1ec;
    param_54._2_1_ = (byte)uStack_1f4;
    param_54._3_1_ = (byte)uStack_1f0;
    param_47 = (byte)uStack_1dc;
    param_20._0_1_ = (undefined1)uStack_1fc;
    param_20._1_1_ = (byte)uStack_1cc;
    param_20._2_1_ = (byte)uStack_1c8;
    param_15 = (byte)uStack_1c4;
    param_9._0_1_ = (undefined1)uStack_1c0;
    param_9._1_1_ = (byte)uStack_1bc;
    param_12 = (byte)lStack_78;
    param_30 = lStack_178;
    param_11 = lStack_88;
    lVar12 = lStack_80;
    uVar13 = uStack_1d8;
    param_46 = uStack_1e8;
  }
  *(undefined8 *)(lVar15 + -0x10) = uStack_158;
  *(byte *)(lVar15 + -0x15) = param_54._3_1_;
  *(byte *)(lVar15 + -0x16) = param_54._2_1_;
  *(byte *)(lVar15 + -0x17) = param_54._1_1_;
  *(undefined1 *)(lVar15 + -0x18) = (undefined1)param_54;
  *(long *)(lVar15 + -0x28) = lVar3;
  *(undefined8 *)(lVar15 + -0x20) = uVar14;
  *(long *)(lVar15 + -0x38) = lVar12;
  *(ulong *)(lVar15 + -0x30) = uVar13;
  *(byte *)(lVar15 + -0x40) = param_50;
  *(long *)(lVar15 + -0x48) = lStack_70;
  *(byte *)(lVar15 + -0x50) = param_47;
  *(undefined8 *)(lVar15 + -0x58) = param_46;
  *(undefined8 *)(lVar15 + -0x60) = uStack_148;
  *(undefined8 *)(lVar15 + -0x68) = uStack_140;
  *(byte *)(lVar15 + -0x70) = param_42;
  *(undefined8 *)(lVar15 + -0x78) = uStack_138;
  *(undefined1 *)(lVar15 + -0x7f) = param_39._1_1_;
  *(undefined1 *)(lVar15 + -0x80) = (undefined1)param_39;
  *(undefined **)(lVar15 + -0x88) = puStack_1b8;
  *(long *)(lVar15 + -0x90) = lStack_90;
  *(undefined8 *)(lVar15 + -0x98) = uStack_120;
  *(long *)(lVar15 + -0xa0) = lStack_98;
  *(undefined1 *)(lVar15 + -0xa8) = param_34;
  *(undefined8 *)(lVar15 + -0xb0) = param_33;
  *(undefined **)(lVar15 + -0xb8) = puStack_1b0;
  lVar3 = lStack_a0;
  *(undefined8 *)(lVar15 + -200) = param_31;
  *(long *)(lVar15 + -0xc0) = lVar3;
  *(undefined8 *)(lVar15 + -0xd8) = param_29;
  *(long *)(lVar15 + -0xd0) = param_30;
  *(undefined8 *)(lVar15 + -0xe0) = param_28;
  *(undefined8 *)(lVar15 + -0xe8) = uStack_118;
  *(undefined **)(lVar15 + -0xf0) = puStack_1a8;
  *(long *)(lVar15 + -0xf8) = lStack_a8;
  *(undefined **)(lVar15 + -0x100) = puStack_1a0;
  *(long *)(lVar15 + -0x108) = lStack_b8;
  *(undefined **)(lVar15 + -0x110) = puStack_198;
  *(long *)(lVar15 + -0x118) = lStack_c0;
  *(undefined **)(lVar15 + -0x120) = puStack_190;
  *(long *)(lVar15 + -0x128) = lStack_188;
  *(undefined **)(lVar15 + -0x130) = puStack_180;
  *(long *)(lVar15 + -0x138) = lStack_c8;
  *(byte *)(lVar15 + -0x13e) = param_20._2_1_;
  *(byte *)(lVar15 + -0x13f) = param_20._1_1_;
  *(undefined1 *)(lVar15 + -0x140) = (undefined1)param_20;
  *(undefined **)(lVar15 + -0x148) = puStack_170;
  *(long *)(lVar15 + -0x150) = lStack_d0;
  *(undefined **)(lVar15 + -0x158) = puStack_168;
  *(long *)(lVar15 + -0x160) = lStack_160;
  *(undefined8 *)(lVar15 + -0x168) = uStack_110;
  *(byte *)(lVar15 + -0x170) = param_15;
  *(long *)(lVar15 + -0x178) = lStack_150;
  *(byte *)(lVar15 + -0x180) = param_12;
  *(long *)(lVar15 + -0x188) = param_11;
  *(byte *)(lVar15 + -399) = param_9._1_1_;
  *(undefined1 *)(lVar15 + -400) = (undefined1)param_9;
  func_0x00010464789c(lStack_f0,puStack_f8,lStack_e8,lStack_100,uStack_dc,uStack_108,lStack_128,
                      puStack_130);
  return;
}



/* Entry: 1046487dc; end: 10464902f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1046487dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 in_x7;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _swift_getObjectType();
  uVar10 = param_1[1];
  uVar12 = *param_1;
  puVar8 = (undefined8 *)(unaff_x20 + _DAT_11308b308);
  puVar8[1] = param_1[1];
  *puVar8 = uVar12;
  lVar3 = 0;
  FUN_1046305a8();
  FUN_10464ea80((long)param_1 + (long)*(int *)(lVar3 + 0x14),unaff_x20 + _DAT_113814f78,0x112d36580,
                &UNK_10d9016d0);
  uVar12 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x18));
  *(undefined8 *)(unaff_x20 + _DAT_113814f80) = uVar12;
  *(undefined1 *)(unaff_x20 + _DAT_113814f88) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x1c));
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x20));
  lVar14 = puVar8[1];
  if (lVar14 == 1) {
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar10);
    plVar4 = (long *)0x0;
  }
  else {
    uVar13 = puVar8[3];
    uVar15 = puVar8[4];
    uVar17 = puVar8[2];
    uVar16 = *puVar8;
    lVar5 = 0;
    FUN_10465ea2c();
    lVar6 = lVar5;
    _objc_allocWithZone();
    puVar8 = (undefined8 *)(lVar6 + _DAT_11308b710);
    *puVar8 = uVar16;
    puVar8[1] = lVar14;
    puVar8 = (undefined8 *)(lVar6 + _DAT_11308b718);
    *puVar8 = uVar17;
    puVar8[1] = uVar13;
    *(undefined8 *)(lVar6 + _DAT_11308b720) = uVar15;
    puVar7 = PTR_s_init_1125d9248;
    lStack_c8 = lVar6;
    lStack_c0 = lVar5;
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(lVar14);
    _swift_bridgeObjectRetain(uVar13);
    plVar4 = &lStack_c8;
    _objc_msgSendSuper2(plVar4,puVar7);
  }
  *(long **)(unaff_x20 + _DAT_113814f90) = plVar4;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  uVar10 = *puVar8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113814f98);
  puVar1[1] = puVar8[1];
  *puVar1 = uVar10;
  *(undefined1 *)(unaff_x20 + _DAT_113814fa0) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x28));
  *(undefined1 *)(unaff_x20 + _DAT_113814fa8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c));
  *(undefined8 *)(unaff_x20 + _DAT_113814fb0) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30));
  *(undefined1 *)(unaff_x20 + _DAT_113814fb8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x34));
  uVar10 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x38));
  *(undefined8 *)(unaff_x20 + _DAT_113814fc0) = uVar10;
  *(undefined1 *)(unaff_x20 + _DAT_113814fc8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x3c));
  uVar12 = puVar8[1];
  if (*(char *)((long)param_1 + (long)*(int *)(lVar3 + 0x40) + 8) == '\x01') {
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar12);
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar12);
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_113814fd0) = puVar7;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x44));
  uVar10 = puVar8[1];
  uVar12 = *puVar8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113814fd8);
  puVar1[1] = puVar8[1];
  *puVar1 = uVar12;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x48));
  uVar12 = *puVar8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113814fe0);
  puVar1[1] = puVar8[1];
  *puVar1 = uVar12;
  uVar13 = puVar8[1];
  *(undefined1 *)(unaff_x20 + _DAT_113814fe8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x4c));
  *(undefined1 *)(unaff_x20 + _DAT_113814ff0) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x50));
  *(undefined1 *)(unaff_x20 + _DAT_113814ff8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x54));
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x58));
  uVar15 = puVar8[1];
  uVar12 = *puVar8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815000);
  puVar1[1] = puVar8[1];
  *puVar1 = uVar12;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x5c));
  uVar16 = puVar8[1];
  uVar12 = *puVar8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815008);
  puVar1[1] = puVar8[1];
  *puVar1 = uVar12;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x60));
  uVar17 = puVar8[1];
  uVar12 = *puVar8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815010);
  puVar1[1] = puVar8[1];
  *puVar1 = uVar12;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 100));
  uVar18 = puVar8[1];
  uVar12 = *puVar8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815018);
  puVar1[1] = puVar8[1];
  *puVar1 = uVar12;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x68));
  uVar12 = puVar8[1];
  uVar11 = *puVar8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815020);
  puVar1[1] = puVar8[1];
  *puVar1 = uVar11;
  if (*(char *)((long)param_1 + (long)*(int *)(lVar3 + 0x6c) + 8) == '\x01') {
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar18);
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar18);
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_113815028) = puVar7;
  *(undefined8 *)(unaff_x20 + _DAT_113815030) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x70));
  *(undefined8 *)(unaff_x20 + _DAT_113815038) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x74));
  *(undefined8 *)(unaff_x20 + _DAT_113815040) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x78));
  *(undefined8 *)(unaff_x20 + _DAT_113815048) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x7c));
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x80));
  uVar10 = *puVar8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815050);
  puVar1[1] = puVar8[1];
  *puVar1 = uVar10;
  *(undefined8 *)(unaff_x20 + _DAT_113815058) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x84));
  *(undefined1 *)(unaff_x20 + _DAT_113815060) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x88));
  uVar10 = puVar8[1];
  uVar12 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x8c));
  *(undefined8 *)(unaff_x20 + _DAT_113815068) = uVar12;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x90));
  if (*(char *)(puVar8 + 1) == '\x01') {
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar10);
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar13 = *puVar8;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar10);
    func_0x00010c00e360(uVar13);
  }
  *(undefined **)(unaff_x20 + _DAT_113815070) = puVar7;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x94));
  uVar10 = *puVar8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815078);
  puVar1[1] = puVar8[1];
  *puVar1 = uVar10;
  uVar10 = puVar8[1];
  *(undefined1 *)(unaff_x20 + _DAT_113815080) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x98));
  *(undefined1 *)(unaff_x20 + _DAT_113815088) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x9c));
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0xa0));
  lVar14 = puVar8[1];
  if (lVar14 == 0) {
    _swift_bridgeObjectRetain(uVar10);
    uVar12 = 0;
  }
  else {
    uVar13 = puVar8[2];
    uVar12 = *puVar8;
    FUN_104840a2c(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(lVar14);
    _swift_bridgeObjectRetain(uVar13);
    FUN_10483fd3c(uVar12,lVar14,uVar13);
  }
  *(undefined8 *)(unaff_x20 + _DAT_113815090) = uVar12;
  *(undefined1 *)(unaff_x20 + _DAT_113815098) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0xa4));
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0xa8));
  if (*(char *)(puVar8 + 1) == '\x01') {
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar10 = *puVar8;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar10);
  }
  *(undefined **)(unaff_x20 + _DAT_1138150a0) = puVar7;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0xac));
  if (*(char *)(puVar8 + 1) == '\x01') {
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar10 = *puVar8;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar10);
  }
  *(undefined **)(unaff_x20 + _DAT_1138150a8) = puVar7;
  *(undefined8 *)(unaff_x20 + _DAT_1138150b0) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0xb0));
  *(undefined1 *)(unaff_x20 + _DAT_1138150b8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0xb4));
  FUN_10464ea80((long)param_1 + (long)*(int *)(lVar3 + 0xb8),unaff_x20 + _DAT_1138150c0,0x112d36580,
                &UNK_10d9016d0);
  *(undefined1 *)(unaff_x20 + _DAT_1138150c8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0xbc));
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0xc0));
  uVar10 = *puVar8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138150d0);
  puVar1[1] = puVar8[1];
  *puVar1 = uVar10;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0xc4));
  uVar10 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1138150d8);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar10;
  uVar10 = puVar8[1];
  *(undefined1 *)(unaff_x20 + _DAT_1138150e0) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 200));
  *(undefined1 *)(unaff_x20 + _DAT_1138150e8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0xcc));
  uVar12 = puVar1[1];
  *(undefined1 *)(unaff_x20 + _DAT_1138150f0) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0xd0));
  *(undefined1 *)(unaff_x20 + _DAT_1138150f8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0xd4));
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0xd8));
  lVar3 = puVar8[1];
  if (lVar3 == 0) {
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar10);
    puVar8 = (undefined8 *)0x0;
  }
  else {
    uVar13 = puVar8[5];
    uVar16 = puVar8[6];
    uVar15 = puVar8[3];
    uVar17 = puVar8[4];
    uVar19 = puVar8[2];
    uVar11 = *puVar8;
    uVar18 = 0;
    uStack_a8 = uVar11;
    lStack_a0 = lVar3;
    uStack_98 = uVar19;
    uStack_90 = uVar15;
    uStack_88 = uVar17;
    uStack_80 = uVar13;
    uStack_78 = uVar16;
    FUN_10483cd2c();
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar10);
    func_0x000103bfd2e8(uVar11,lVar3,uVar19,uVar15,uVar17,uVar13,uVar16,in_x7,uVar18);
    puVar8 = &uStack_a8;
    FUN_10483c554();
  }
  *(undefined8 **)(unaff_x20 + _DAT_113815100) = puVar8;
  puVar9 = &stack0xffffffffffffff48;
  _objc_msgSendSuper2(puVar9,PTR_s_init_1125d9248);
  func_0x0001018cf918(param_1);
  return puVar9;
}



/* Entry: 104649030; end: 104649063; -[SCAdWebBrowserConfig hash] */

undefined8 FUN_104649030(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104649064();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104649064; end: 104649a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104649064(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [72];
  
  lVar7 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar6 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar6 - extraout_x12;
  __ss6HasherVABycfC(auStack_98);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b308))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b308);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  FUN_10464ea80(unaff_x20 + _DAT_113814f78,lVar7,0x112d36580,&UNK_10d9016d0);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar2 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar8 = lVar7;
  (*pcVar10)(lVar7,1,lVar2);
  if ((int)lVar8 == 1) {
    func_0x00010464eac8(lVar7,0x112d36580,&UNK_10d9016d0);
    lVar7 = 0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar9 + 8))(lVar7,lVar2);
    lVar7 = lVar8;
    func_0x00010bfde980(lVar8);
    _objc_release(lVar8);
  }
  __ss6HasherV8_combineyySuF(lVar7);
  lVar7 = *(long *)(unaff_x20 + _DAT_113814f80);
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    lVar8 = lVar7;
    func_0x00010bfde980();
    _objc_release(lVar7);
  }
  __ss6HasherV8_combineyySuF(lVar8);
  uVar3 = (ulong)*(byte *)(unaff_x20 + _DAT_113814f88);
  __ss6HasherV8_combineyys5UInt8VF(uVar3);
  if (*(long *)(unaff_x20 + _DAT_113814f90) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10465dfdc();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_113814f98))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113814f98);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113814fa0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113814fa8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113814fb0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113814fb8));
  lVar7 = *(long *)(unaff_x20 + _DAT_113814fc0);
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    uVar4 = 0;
    __s10Foundation12URLQueryItemVMa(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar7,uVar4);
    lVar8 = lVar7;
    func_0x00010bfde980();
    _objc_release(lVar7);
  }
  __ss6HasherV8_combineyySuF(lVar8);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113814fc8));
  lVar7 = *(long *)(unaff_x20 + _DAT_113814fd0);
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar7);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_98);
    _objc_release(lVar7);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_113814fd8))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113814fd8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_113814fe0))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113814fe0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113814fe8));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113814ff0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113814ff8));
  if (((undefined8 *)(unaff_x20 + _DAT_113815000))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815000);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_113815008))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815008);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_113815010))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815010);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_113815018))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815018);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_113815020))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815020);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  lVar7 = *(long *)(unaff_x20 + _DAT_113815028);
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar7);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_98);
    _objc_release(lVar7);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113815030));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113815038));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113815040));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113815048));
  if (((undefined8 *)(unaff_x20 + _DAT_113815050))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815050);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113815058));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113815060));
  lVar7 = *(long *)(unaff_x20 + _DAT_113815068);
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    lVar8 = lVar7;
    func_0x00010bfde980();
    _objc_release(lVar7);
  }
  __ss6HasherV8_combineyySuF(lVar8);
  lVar7 = *(long *)(unaff_x20 + _DAT_113815070);
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar7);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_98);
    _objc_release(lVar7);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_113815078))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815078);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113815080));
  uVar3 = (ulong)*(byte *)(unaff_x20 + _DAT_113815088);
  __ss6HasherV8_combineyys5UInt8VF(uVar3);
  if (*(long *)(unaff_x20 + _DAT_113815090) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010483f9a8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113815098));
  lVar7 = *(long *)(unaff_x20 + _DAT_1138150a0);
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar7);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_98);
    _objc_release(lVar7);
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_1138150a8);
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar7);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_98);
    _objc_release(lVar7);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1138150b0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1138150b8));
  FUN_10464ea80(unaff_x20 + _DAT_1138150c0,puVar6,0x112d36580,&UNK_10d9016d0);
  puVar5 = puVar6;
  (*pcVar10)(puVar6,1,lVar2);
  if ((int)puVar5 == 1) {
    func_0x00010464eac8(puVar6,0x112d36580,&UNK_10d9016d0);
    puVar6 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    puVar6 = puVar5;
    func_0x00010bfde980(puVar5);
    _objc_release(puVar5);
  }
  __ss6HasherV8_combineyySuF(puVar6);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1138150c8));
  if (((undefined8 *)(unaff_x20 + _DAT_1138150d0))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1138150d0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_1138150d8))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1138150d8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1138150e0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1138150e8));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1138150f0));
  uVar3 = (ulong)*(byte *)(unaff_x20 + _DAT_1138150f8);
  __ss6HasherV8_combineyys5UInt8VF(uVar3);
  if (*(long *)(unaff_x20 + _DAT_113815100) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010483c034();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104649a40; end: 10464af53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104649a40(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  long lVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  code *pcVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lStack_1e0;
  uint uStack_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  long lStack_198;
  long lStack_190;
  uint uStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  int iStack_110;
  int iStack_10c;
  uint uStack_108;
  uint uStack_104;
  code *pcStack_100;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  long lStack_c8;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  long alStack_88 [5];
  
  lVar12 = unaff_x20;
  _swift_getObjectType();
  uVar8 = 0;
  __s10Foundation3URLVMa();
  lVar18 = *(long *)(uVar8 - 8);
  uStack_98 = uVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar10 = (long)&lStack_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  lStack_a0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  lVar15 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar15 - extraout_x12;
  lVar14 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  lVar14 = lVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = lVar14 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar22 - extraout_x12_02;
  FUN_10464ea80(param_1,alStack_88,0x112d387f8,&UNK_10d902650);
  if (alStack_88[3] == 0) {
    func_0x00010464eac8(alStack_88,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar9 = &lStack_90;
    _swift_dynamicCast(plVar9,alStack_88,PTR___sypN_11034f1a8 + 8,lVar12,6);
    if (((ulong)plVar9 & 1) != 0) {
      lVar12 = ((long *)(unaff_x20 + _DAT_11308b308))[1];
      lVar13 = ((long *)(lStack_90 + _DAT_11308b308))[1];
      uStack_c0 = (uint)(lVar12 == 0 && lVar13 == 0);
      lStack_b0 = lVar18;
      if ((lVar12 != 0) && (lVar13 != 0)) {
        lVar18 = *(long *)(unaff_x20 + _DAT_11308b308);
        if ((lVar18 == *(long *)(lStack_90 + _DAT_11308b308)) && (lVar12 == lVar13)) {
          uStack_c0 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_c0 = (uint)lVar18;
        }
      }
      lVar18 = _DAT_113814f78;
      lStack_1e0 = lVar10;
      lStack_c8 = lVar15;
      FUN_10464ea80(lStack_90 + _DAT_113814f78,lVar21,0x112d36580,&UNK_10d9016d0);
      lVar12 = (long)*(int *)(lStack_a0 + 0x30);
      FUN_10464ea80(unaff_x20 + lVar18,lVar23,0x112d36580,&UNK_10d9016d0);
      FUN_10464ea80(lVar21,lVar23 + lVar12,0x112d36580,&UNK_10d9016d0);
      uVar8 = uStack_98;
      lVar15 = lStack_b0;
      pcVar19 = *(code **)(lStack_b0 + 0x30);
      lVar18 = lVar23;
      (*pcVar19)(lVar23,1,uStack_98);
      pcStack_100 = pcVar19;
      if ((int)lVar18 == 1) {
        func_0x00010464eac8(lVar21,0x112d36580,&UNK_10d9016d0);
        lVar12 = lVar23 + lVar12;
        (*pcVar19)(lVar12,1,uVar8);
        if ((int)lVar12 == 1) {
          func_0x00010464eac8(lVar23,0x112d36580,&UNK_10d9016d0);
          uStack_cc = 1;
        }
        else {
LAB_104649db0:
          func_0x00010464eac8(lVar23,0x112d7e680,&UNK_10d95e350);
          uStack_cc = 0;
        }
      }
      else {
        FUN_10464ea80(lVar23,lVar22,0x112d36580,&UNK_10d9016d0);
        lVar18 = lVar23 + lVar12;
        (*pcVar19)(lVar18,1,uVar8);
        lVar10 = lStack_1e0;
        if ((int)lVar18 == 1) {
          func_0x00010464eac8(lVar21,0x112d36580,&UNK_10d9016d0);
          (**(code **)(lVar15 + 8))(lVar22,uVar8);
          goto LAB_104649db0;
        }
        (**(code **)(lVar15 + 0x20))(lStack_1e0,lVar23 + lVar12,uVar8);
        uVar11 = 0x112d7e688;
        FUN_10464edc0(0x112d7e688,PTR___s10Foundation3URLVMa_110350988,
                      PTR___s10Foundation3URLVSQAAMc_1103509a8);
        lVar12 = lVar22;
        __sSQ2eeoiySbx_xtFZTj(lVar22,lVar10,uVar8,uVar11);
        uStack_cc = (uint)lVar12;
        pcVar19 = *(code **)(lVar15 + 8);
        (*pcVar19)(lVar10,uVar8);
        func_0x00010464eac8(lVar21,0x112d36580,&UNK_10d9016d0);
        (*pcVar19)(lVar22,uVar8);
        func_0x00010464eac8(lVar23,0x112d36580,&UNK_10d9016d0);
      }
      lVar15 = *(long *)(unaff_x20 + _DAT_113814f80);
      lVar12 = *(long *)(lStack_90 + _DAT_113814f80);
      uVar17 = (uint)(lVar15 == 0 && lVar12 == 0);
      if ((lVar15 != 0) && (lVar12 != 0)) {
        _swift_bridgeObjectRetain(lVar12);
        lVar18 = lVar15;
        _swift_bridgeObjectRetain();
        uVar17 = (uint)lVar18;
        func_0x000101058cd4();
        _swift_bridgeObjectRelease(lVar15);
        _swift_bridgeObjectRelease(lVar12);
      }
      uStack_d8 = (uint)*(byte *)(lStack_90 + _DAT_113814f88);
      uStack_d4 = (uint)*(byte *)(unaff_x20 + _DAT_113814f88);
      if (*(long *)(unaff_x20 + _DAT_113814f90) == 0) {
        uStack_dc = (uint)(*(long *)(lStack_90 + _DAT_113814f90) == 0);
      }
      else {
        lVar12 = *(long *)(lStack_90 + _DAT_113814f90);
        if (lVar12 == 0) {
          lVar15 = 0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          lVar15 = 0;
          FUN_10465ea2c();
        }
        alStack_88[0] = lVar12;
        alStack_88[3] = lVar15;
        _objc_retain(lVar12);
        uStack_dc = (uint)alStack_88;
        FUN_10465e0b4();
        func_0x00010464eac8(alStack_88,0x112d387f8,&UNK_10d902650);
      }
      lVar12 = ((long *)(unaff_x20 + _DAT_113814f98))[1];
      lVar15 = ((long *)(lStack_90 + _DAT_113814f98))[1];
      uStack_e0 = (uint)(lVar12 == 0 && lVar15 == 0);
      if ((lVar12 != 0) && (lVar15 != 0)) {
        lVar18 = *(long *)(unaff_x20 + _DAT_113814f98);
        if ((lVar18 == *(long *)(lStack_90 + _DAT_113814f98)) && (lVar12 == lVar15)) {
          uStack_e0 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_e0 = (uint)lVar18;
        }
      }
      uStack_ec = (uint)*(byte *)(lStack_90 + _DAT_113814fa0);
      uStack_e8 = (uint)*(byte *)(unaff_x20 + _DAT_113814fa0);
      uStack_f4 = (uint)*(byte *)(lStack_90 + _DAT_113814fa8);
      uStack_f0 = (uint)*(byte *)(unaff_x20 + _DAT_113814fa8);
      iStack_10c = *(int *)(unaff_x20 + _DAT_113814fb0);
      iStack_110 = *(int *)(lStack_90 + _DAT_113814fb0);
      uStack_108 = (uint)*(byte *)(lStack_90 + _DAT_113814fb8);
      uStack_104 = (uint)*(byte *)(unaff_x20 + _DAT_113814fb8);
      lVar15 = *(long *)(unaff_x20 + _DAT_113814fc0);
      lVar12 = *(long *)(lStack_90 + _DAT_113814fc0);
      uVar16 = (uint)(lVar15 == 0 && lVar12 == 0);
      if ((lVar15 != 0) && (lVar12 != 0)) {
        _swift_bridgeObjectRetain(lVar12);
        lVar18 = lVar15;
        _swift_bridgeObjectRetain();
        uVar16 = (uint)lVar18;
        FUN_10464eb08();
        _swift_bridgeObjectRelease(lVar15);
        _swift_bridgeObjectRelease(lVar12);
      }
      uStack_114 = (uint)*(byte *)(unaff_x20 + _DAT_113814fc8);
      uStack_118 = (uint)*(byte *)(lStack_90 + _DAT_113814fc8);
      lVar15 = *(long *)(unaff_x20 + _DAT_113814fd0);
      lVar12 = *(long *)(lStack_90 + _DAT_113814fd0);
      uVar20 = (uint)(lVar15 == 0 && lVar12 == 0);
      if ((lVar15 != 0) && (lVar12 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar12);
        _objc_retain();
        lVar18 = lVar15;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar20 = (uint)lVar18;
        _objc_release(lVar15);
        _objc_release(lVar12);
      }
      lVar12 = ((long *)(unaff_x20 + _DAT_113814fd8))[1];
      lVar15 = ((long *)(lStack_90 + _DAT_113814fd8))[1];
      uStack_120 = (uint)(lVar12 == 0 && lVar15 == 0);
      if ((lVar12 != 0) && (lVar15 != 0)) {
        lVar18 = *(long *)(unaff_x20 + _DAT_113814fd8);
        if ((lVar18 == *(long *)(lStack_90 + _DAT_113814fd8)) && (lVar12 == lVar15)) {
          uStack_120 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_120 = (uint)lVar18;
        }
      }
      lVar12 = ((long *)(unaff_x20 + _DAT_113814fe0))[1];
      lVar15 = ((long *)(lStack_90 + _DAT_113814fe0))[1];
      uStack_124 = (uint)(lVar12 == 0 && lVar15 == 0);
      if ((lVar12 != 0) && (lVar15 != 0)) {
        lVar18 = *(long *)(unaff_x20 + _DAT_113814fe0);
        if ((lVar18 == *(long *)(lStack_90 + _DAT_113814fe0)) && (lVar12 == lVar15)) {
          uStack_124 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_124 = (uint)lVar18;
        }
      }
      uStack_128 = (uint)*(byte *)(unaff_x20 + _DAT_113814fe8);
      uStack_12c = (uint)*(byte *)(lStack_90 + _DAT_113814fe8);
      uStack_130 = (uint)*(byte *)(unaff_x20 + _DAT_113814ff0);
      uStack_134 = (uint)*(byte *)(lStack_90 + _DAT_113814ff0);
      uStack_138 = (uint)*(byte *)(unaff_x20 + _DAT_113814ff8);
      uStack_13c = (uint)*(byte *)(lStack_90 + _DAT_113814ff8);
      lVar12 = ((long *)(unaff_x20 + _DAT_113815000))[1];
      lVar15 = ((long *)(lStack_90 + _DAT_113815000))[1];
      uStack_140 = (uint)(lVar12 == 0 && lVar15 == 0);
      if ((lVar12 != 0) && (lVar15 != 0)) {
        lVar18 = *(long *)(unaff_x20 + _DAT_113815000);
        if ((lVar18 == *(long *)(lStack_90 + _DAT_113815000)) && (lVar12 == lVar15)) {
          uStack_140 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_140 = (uint)lVar18;
        }
      }
      lVar12 = ((long *)(unaff_x20 + _DAT_113815008))[1];
      lVar15 = ((long *)(lStack_90 + _DAT_113815008))[1];
      uStack_144 = (uint)(lVar12 == 0 && lVar15 == 0);
      if ((lVar12 != 0) && (lVar15 != 0)) {
        lVar18 = *(long *)(unaff_x20 + _DAT_113815008);
        if ((lVar18 == *(long *)(lStack_90 + _DAT_113815008)) && (lVar12 == lVar15)) {
          uStack_144 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_144 = (uint)lVar18;
        }
      }
      lVar12 = ((long *)(unaff_x20 + _DAT_113815010))[1];
      lVar15 = ((long *)(lStack_90 + _DAT_113815010))[1];
      uStack_148 = (uint)(lVar12 == 0 && lVar15 == 0);
      if ((lVar12 != 0) && (lVar15 != 0)) {
        lVar18 = *(long *)(unaff_x20 + _DAT_113815010);
        if ((lVar18 == *(long *)(lStack_90 + _DAT_113815010)) && (lVar12 == lVar15)) {
          uStack_148 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_148 = (uint)lVar18;
        }
      }
      lVar12 = ((long *)(unaff_x20 + _DAT_113815018))[1];
      lVar15 = ((long *)(lStack_90 + _DAT_113815018))[1];
      uStack_14c = (uint)(lVar12 == 0 && lVar15 == 0);
      if ((lVar12 != 0) && (lVar15 != 0)) {
        lVar18 = *(long *)(unaff_x20 + _DAT_113815018);
        if ((lVar18 == *(long *)(lStack_90 + _DAT_113815018)) && (lVar12 == lVar15)) {
          uStack_14c = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_14c = (uint)lVar18;
        }
      }
      lVar12 = ((long *)(unaff_x20 + _DAT_113815020))[1];
      lVar15 = ((long *)(lStack_90 + _DAT_113815020))[1];
      uStack_150 = (uint)(lVar12 == 0 && lVar15 == 0);
      if ((lVar12 != 0) && (lVar15 != 0)) {
        lVar18 = *(long *)(unaff_x20 + _DAT_113815020);
        if ((lVar18 == *(long *)(lStack_90 + _DAT_113815020)) && (lVar12 == lVar15)) {
          uStack_150 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_150 = (uint)lVar18;
        }
      }
      lVar15 = *(long *)(unaff_x20 + _DAT_113815028);
      lVar12 = *(long *)(lStack_90 + _DAT_113815028);
      uStack_b4 = (uint)(lVar15 == 0 && lVar12 == 0);
      if ((lVar15 != 0) && (lVar12 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar12);
        _objc_retain();
        lVar18 = lVar15;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_b4 = (uint)lVar18;
        _objc_release(lVar15);
        _objc_release(lVar12);
      }
      lStack_158 = *(long *)(unaff_x20 + _DAT_113815030);
      lStack_168 = *(long *)(lStack_90 + _DAT_113815030);
      lStack_160 = *(long *)(unaff_x20 + _DAT_113815038);
      lStack_170 = *(long *)(lStack_90 + _DAT_113815038);
      iStack_174 = *(int *)(unaff_x20 + _DAT_113815040);
      iStack_178 = *(int *)(lStack_90 + _DAT_113815040);
      iStack_17c = *(int *)(unaff_x20 + _DAT_113815048);
      iStack_180 = *(int *)(lStack_90 + _DAT_113815048);
      lVar12 = ((long *)(unaff_x20 + _DAT_113815050))[1];
      lVar15 = ((long *)(lStack_90 + _DAT_113815050))[1];
      uStack_184 = (uint)(lVar12 == 0 && lVar15 == 0);
      if ((lVar12 != 0) && (lVar15 != 0)) {
        lVar18 = *(long *)(unaff_x20 + _DAT_113815050);
        if ((lVar18 == *(long *)(lStack_90 + _DAT_113815050)) && (lVar12 == lVar15)) {
          uStack_184 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_184 = (uint)lVar18;
        }
      }
      lStack_190 = *(long *)(unaff_x20 + _DAT_113815058);
      lStack_198 = *(long *)(lStack_90 + _DAT_113815058);
      uStack_19c = (uint)*(byte *)(unaff_x20 + _DAT_113815060);
      uStack_1a0 = (uint)*(byte *)(lStack_90 + _DAT_113815060);
      lVar15 = *(long *)(unaff_x20 + _DAT_113815068);
      lVar12 = *(long *)(lStack_90 + _DAT_113815068);
      uStack_b8 = (uint)(lVar15 == 0 && lVar12 == 0);
      if ((lVar15 != 0) && (lVar12 != 0)) {
        _swift_bridgeObjectRetain(lVar12);
        lVar18 = lVar15;
        _swift_bridgeObjectRetain();
        uVar7 = (uint)lVar18;
        func_0x000101058cd4();
        uStack_b8 = uVar7;
        _swift_bridgeObjectRelease(lVar15);
        _swift_bridgeObjectRelease(lVar12);
      }
      lVar15 = *(long *)(unaff_x20 + _DAT_113815070);
      lVar12 = *(long *)(lStack_90 + _DAT_113815070);
      uVar7 = (uint)(lVar15 == 0 && lVar12 == 0);
      if ((lVar15 != 0) && (lVar12 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar12);
        _objc_retain();
        lVar18 = lVar15;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar7 = (uint)lVar18;
        _objc_release(lVar15);
        _objc_release(lVar12);
      }
      lVar12 = ((long *)(unaff_x20 + _DAT_113815078))[1];
      lVar15 = ((long *)(lStack_90 + _DAT_113815078))[1];
      uStack_1a8 = (uint)(lVar12 == 0 && lVar15 == 0);
      if ((lVar12 != 0) && (lVar15 != 0)) {
        lVar18 = *(long *)(unaff_x20 + _DAT_113815078);
        if ((lVar18 == *(long *)(lStack_90 + _DAT_113815078)) && (lVar12 == lVar15)) {
          uStack_1a8 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_1a8 = (uint)lVar18;
        }
      }
      uStack_1b0 = (uint)*(byte *)(unaff_x20 + _DAT_113815080);
      uStack_1b4 = (uint)*(byte *)(lStack_90 + _DAT_113815080);
      uStack_1b8 = (uint)*(byte *)(unaff_x20 + _DAT_113815088);
      uStack_1bc = (uint)*(byte *)(lStack_90 + _DAT_113815088);
      if (*(long *)(unaff_x20 + _DAT_113815090) == 0) {
        uStack_1ac = (uint)(*(long *)(lStack_90 + _DAT_113815090) == 0);
      }
      else {
        lVar12 = *(long *)(lStack_90 + _DAT_113815090);
        if (lVar12 == 0) {
          lVar15 = 0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          lVar15 = 0;
          FUN_104840a2c();
        }
        alStack_88[0] = lVar12;
        alStack_88[3] = lVar15;
        _objc_retain(lVar12);
        uStack_1ac = (uint)alStack_88;
        func_0x00010483fa58();
        func_0x00010464eac8(alStack_88,0x112d387f8,&UNK_10d902650);
      }
      uStack_1c0 = (uint)*(byte *)(unaff_x20 + _DAT_113815098);
      uStack_1c4 = (uint)*(byte *)(lStack_90 + _DAT_113815098);
      lVar15 = *(long *)(unaff_x20 + _DAT_1138150a0);
      lVar12 = *(long *)(lStack_90 + _DAT_1138150a0);
      uStack_bc = (uint)(lVar15 == 0 && lVar12 == 0);
      uStack_1a4 = uVar7;
      if ((lVar15 != 0) && (lVar12 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar12);
        _objc_retain();
        lVar18 = lVar15;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_bc = (uint)lVar18;
        _objc_release(lVar15);
        _objc_release(lVar12);
      }
      lVar15 = *(long *)(unaff_x20 + _DAT_1138150a8);
      lVar12 = *(long *)(lStack_90 + _DAT_1138150a8);
      uVar7 = (uint)(lVar15 == 0 && lVar12 == 0);
      uStack_11c = uVar20;
      uStack_e4 = uVar16;
      uStack_d0 = uVar17;
      if ((lVar15 != 0) && (lVar12 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar12);
        _objc_retain();
        lVar18 = lVar15;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar7 = (uint)lVar18;
        _objc_release(lVar15);
        _objc_release(lVar12);
      }
      lVar15 = _DAT_1138150c0;
      iStack_1c8 = *(int *)(unaff_x20 + _DAT_1138150b0);
      iStack_1cc = *(int *)(lStack_90 + _DAT_1138150b0);
      uStack_1d4 = (uint)*(byte *)(unaff_x20 + _DAT_1138150b8);
      uStack_1d8 = (uint)*(byte *)(lStack_90 + _DAT_1138150b8);
      uStack_1d0 = uVar7;
      FUN_10464ea80(lStack_90 + _DAT_1138150c0,lVar14,0x112d36580,&UNK_10d9016d0);
      lVar18 = lStack_c8;
      lVar12 = (long)*(int *)(lStack_a0 + 0x30);
      FUN_10464ea80(unaff_x20 + lVar15,lStack_c8,0x112d36580,&UNK_10d9016d0);
      FUN_10464ea80(lVar14,lVar18 + lVar12,0x112d36580,&UNK_10d9016d0);
      uVar8 = uStack_98;
      pcVar19 = pcStack_100;
      lVar10 = lVar18;
      (*pcStack_100)(lVar18,1,uStack_98);
      lVar15 = lStack_a8;
      if ((int)lVar10 == 1) {
        func_0x00010464eac8(lVar14,0x112d36580,&UNK_10d9016d0);
        lVar12 = lVar18 + lVar12;
        (*pcVar19)(lVar12,1,uVar8);
        if ((int)lVar12 != 1) {
LAB_10464a990:
          func_0x00010464eac8(lVar18,0x112d7e680,&UNK_10d95e350);
          uVar17 = 1;
          goto LAB_10464aa5c;
        }
        func_0x00010464eac8(lVar18,0x112d36580,&UNK_10d9016d0);
        uStack_98 = uStack_98 & 0xffffffff00000000;
      }
      else {
        FUN_10464ea80(lVar18,lStack_a8,0x112d36580,&UNK_10d9016d0);
        lVar10 = lVar18 + lVar12;
        (*pcVar19)(lVar10,1,uVar8);
        lVar22 = lStack_b0;
        lVar21 = lStack_1e0;
        if ((int)lVar10 == 1) {
          func_0x00010464eac8(lVar14,0x112d36580,&UNK_10d9016d0);
          (**(code **)(lStack_b0 + 8))(lVar15,uVar8);
          goto LAB_10464a990;
        }
        (**(code **)(lStack_b0 + 0x20))(lStack_1e0,lVar18 + lVar12,uVar8);
        uVar11 = 0x112d7e688;
        FUN_10464edc0(0x112d7e688,PTR___s10Foundation3URLVMa_110350988,
                      PTR___s10Foundation3URLVSQAAMc_1103509a8);
        lVar12 = lVar15;
        __sSQ2eeoiySbx_xtFZTj(lVar15,lVar21,uVar8,uVar11);
        pcVar19 = *(code **)(lVar22 + 8);
        (*pcVar19)(lVar21,uVar8);
        func_0x00010464eac8(lVar14,0x112d36580,&UNK_10d9016d0);
        (*pcVar19)(lVar15,uVar8);
        func_0x00010464eac8(lVar18,0x112d36580,&UNK_10d9016d0);
        uVar17 = (uint)lVar12 ^ 1;
LAB_10464aa5c:
        uStack_98 = CONCAT44(uStack_98._4_4_,uVar17);
      }
      lStack_a0 = CONCAT44(lStack_a0._4_4_,(uint)*(byte *)(unaff_x20 + _DAT_1138150c8));
      lStack_a8 = CONCAT44(lStack_a8._4_4_,(uint)*(byte *)(lStack_90 + _DAT_1138150c8));
      lVar14 = ((long *)(unaff_x20 + _DAT_1138150d0))[1];
      lVar12 = ((long *)(lStack_90 + _DAT_1138150d0))[1];
      uVar17 = (uint)(lVar14 == 0 && lVar12 == 0);
      if ((lVar14 != 0) && (lVar12 != 0)) {
        lVar15 = *(long *)(unaff_x20 + _DAT_1138150d0);
        if ((lVar15 == *(long *)(lStack_90 + _DAT_1138150d0)) && (lVar14 == lVar12)) {
          uVar17 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar17 = (uint)lVar15;
        }
      }
      lStack_b0 = CONCAT44(lStack_b0._4_4_,uVar17);
      lVar14 = ((long *)(unaff_x20 + _DAT_1138150d8))[1];
      lVar12 = ((long *)(lStack_90 + _DAT_1138150d8))[1];
      uVar17 = (uint)(lVar14 == 0 && lVar12 == 0);
      if ((lVar14 != 0) && (lVar12 != 0)) {
        lVar15 = *(long *)(unaff_x20 + _DAT_1138150d8);
        if ((lVar15 == *(long *)(lStack_90 + _DAT_1138150d8)) && (lVar14 == lVar12)) {
          uVar17 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar17 = (uint)lVar15;
        }
      }
      lStack_c8 = CONCAT44(lStack_c8._4_4_,(uint)*(byte *)(unaff_x20 + _DAT_1138150e0));
      pcStack_100 = (code *)CONCAT44(pcStack_100._4_4_,(uint)*(byte *)(lStack_90 + _DAT_1138150e0));
      bVar1 = *(byte *)(unaff_x20 + _DAT_1138150e8);
      bVar2 = *(byte *)(lStack_90 + _DAT_1138150e8);
      bVar3 = *(byte *)(unaff_x20 + _DAT_1138150f0);
      bVar4 = *(byte *)(lStack_90 + _DAT_1138150f0);
      bVar5 = *(byte *)(unaff_x20 + _DAT_1138150f8);
      bVar6 = *(byte *)(lStack_90 + _DAT_1138150f8);
      if (*(long *)(unaff_x20 + _DAT_113815100) == 0) {
        lVar12 = *(long *)(lStack_90 + _DAT_113815100);
        lVar14 = lVar12;
        _objc_retain(lVar12);
        _objc_release(lStack_90);
        if (lVar12 == 0) {
          uVar16 = 1;
        }
        else {
          _objc_release(lVar14);
          uVar16 = 0;
        }
      }
      else {
        lVar14 = *(long *)(lStack_90 + _DAT_113815100);
        if (lVar14 == 0) {
          uVar11 = 0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          uVar11 = 0;
          FUN_10483cd2c();
        }
        alStack_88[0] = lVar14;
        alStack_88[3] = uVar11;
        _objc_retain(lVar14);
        plVar9 = alStack_88;
        FUN_10483c130(plVar9);
        uVar16 = (uint)plVar9;
        _objc_release(lStack_90);
        func_0x00010464eac8(alStack_88,0x112d387f8,&UNK_10d902650);
      }
      uVar20 = 0;
      if (lStack_160 == lStack_170) {
        uVar20 = ((((uStack_c0 & uStack_cc &
                     uStack_d0 & (uStack_d4 ^ uStack_d8 ^ 1) & uStack_dc & uStack_e0 ^ 1 |
                    uStack_e8 ^ uStack_ec | uStack_f0 ^ uStack_f4 | (uint)(iStack_10c != iStack_110)
                    | uStack_104 ^ uStack_108 | uStack_e4 ^ 1 | uStack_114 ^ uStack_118) ^ 1) &
                   uStack_11c & uStack_120 & uStack_124 ^ 1 |
                  uStack_128 ^ uStack_12c | uStack_130 ^ uStack_134 | uStack_138 ^ uStack_13c) ^ 1)
                 & uStack_140 & uStack_144 & uStack_148 & uStack_14c & uStack_150 & uStack_b4 &
                   (uint)(lStack_158 == lStack_168);
      }
      uVar7 = 0;
      if (iStack_174 == iStack_178) {
        uVar7 = uVar20;
      }
      uVar20 = 0;
      if (iStack_17c == iStack_180) {
        uVar20 = uVar7;
      }
      uVar20 = uVar20 & uStack_184 ^ 1;
      if (lStack_190 != lStack_198) {
        uVar20 = 1;
      }
      uVar17 = ((((((uVar20 | uStack_19c ^ uStack_1a0) ^ 1) & uStack_b8 & uStack_1a4 & uStack_1a8 ^
                   1 | uStack_1b0 ^ uStack_1b4 | uStack_1b8 ^ uStack_1bc | uStack_1ac ^ 1 |
                       uStack_1c0 ^ uStack_1c4) ^ 1) & uStack_bc & uStack_1d0 ^ 1 |
                (uint)(iStack_1c8 != iStack_1cc) | uStack_1d4 ^ uStack_1d8 | (uint)uStack_98 |
                (uint)lStack_a0 ^ (uint)lStack_a8) ^ 1) &
               (uint)lStack_b0 & uVar17 & ((uint)lStack_c8 ^ (uint)pcStack_100 ^ 1) &
               ((bVar1 ^ bVar2) ^ 1) & ((bVar3 ^ bVar4) ^ 1) & ((bVar5 ^ bVar6) ^ 1) & uVar16;
      goto LAB_10464af28;
    }
  }
  uVar17 = 0;
LAB_10464af28:
  return uVar17 & 1;
}



/* Entry: 10464af54; end: 10464afe3; -[SCAdWebBrowserConfig isEqual:] */

uint FUN_10464af54(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_104649a40(&uStack_40);
  _objc_release(param_1);
  func_0x00010464eac8(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 10464afe4; end: 10464afe7; -[SCAdWebBrowserConfig copyWithZone:] */

void FUN_10464afe4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10464afe8; end: 10464c0cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10464afe8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar7 - extraout_x12;
  if (((undefined8 *)(unaff_x20 + _DAT_11308b308))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b308);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f2096c0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  FUN_10464ea80(unaff_x20 + _DAT_113814f78,lVar5,0x112d36580,&UNK_10d9016d0);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar3 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar4 = lVar5;
  (*pcVar10)(lVar5,1,lVar3);
  lVar8 = 0;
  if ((int)lVar4 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar9 + 8))(lVar5,lVar3);
    lVar8 = lVar4;
  }
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f2096e0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar8);
  _objc_release(uVar1);
  lVar5 = *(long *)(unaff_x20 + _DAT_113814f80);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f209700);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar5);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f209720);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f209750);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113814f98))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113814f98);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f209770);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f209790);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x45575f44415f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45575f44415f5349,0xed00005745495642);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x454352554f53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454352554f53,0xe600000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f2097b0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  lVar5 = *(long *)(unaff_x20 + _DAT_113814fc0);
  if (lVar5 != 0) {
    uVar1 = 0;
    __s10Foundation12URLQueryItemVMa(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar5,uVar1);
  }
  uVar1 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f2097d0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar5);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f209800);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f209820);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113814fd8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113814fd8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd00000000000002c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002c,0x800000010f209840);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113814fe0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113814fe0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f209870);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000029;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f209890);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f2098c0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x52494445525f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52494445525f5349,0xef4258455f544345);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113815000))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815000);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f2098e0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113815008))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815008);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f209900);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113815010))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815010);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x44495f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4441,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113815018))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815018);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x44495f45474150;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f45474150,0xe700000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113815020))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815020);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f0b4d20);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f209920);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x45535f4b43415254;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45535f4b43415254,0xed00004d554e5f51);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5145535f57454956;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5145535f57454956,0xec0000004d554e5f);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x455059545f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441,0xe700000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x55444f52505f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441,0xef455059545f5443);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113815050))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815050);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1eeb50);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x444e495f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444e495f50414e53,0xea00000000005845);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f209940);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  lVar5 = *(long *)(unaff_x20 + _DAT_113815068);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  uVar1 = 0x4d5241505f444943;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d5241505f444943,0xea00000000005341);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar5);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000029;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f209960);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113815078))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815078);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000027;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000027,0x800000010f209990);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f2099c0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f2099e0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f209a00);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x45445f574f4c4c41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45445f574f4c4c41,0xee004b4e494c5045);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f209a20);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f209a40);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f209a70);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f209a90);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  FUN_10464ea80(unaff_x20 + _DAT_1138150c0,puVar7,0x112d36580,&UNK_10d9016d0);
  puVar6 = puVar7;
  (*pcVar10)(puVar7,1,lVar3);
  if ((int)puVar6 == 1) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar9 + 8))(puVar7,lVar3);
  }
  uVar1 = 0x54414e4954534544;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54414e4954534544,0xef4c52555f4e4f49);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(puVar6);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f209ab0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_1138150d0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1138150d0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x44494153;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44494153,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1138150d8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1138150d8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f209ad0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f209af0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f209b10);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f209b40);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f209b60);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f209b80);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 10464c0d0; end: 10464c11f; -[SCAdWebBrowserConfig encodeWithCoder:] */

void FUN_10464c0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10464afe8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10464c120; end: 10464c14f;  */

void FUN_10464c120(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10464c150(param_1);
  return;
}



/* Entry: 10464c150; end: 10464e74f;  */

undefined8 FUN_10464c150(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  long extraout_x8;
  code *pcVar30;
  long lVar31;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar32;
  long lVar33;
  undefined8 unaff_x20;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined1 auStack_3e0 [8];
  ulong uStack_3d8;
  undefined1 auStack_3d0 [8];
  long lStack_3c8;
  undefined1 auStack_3c0 [8];
  long alStack_3b8 [3];
  undefined1 auStack_3a0 [8];
  long alStack_398 [12];
  undefined1 auStack_338 [8];
  long alStack_330 [3];
  undefined1 auStack_318 [8];
  long lStack_310;
  undefined1 auStack_308 [8];
  long alStack_300 [3];
  undefined1 auStack_2e8 [8];
  long lStack_2e0;
  undefined1 auStack_2d8 [8];
  long alStack_2d0 [2];
  undefined1 auStack_2c0 [8];
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  long lStack_260;
  long lStack_258;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_e0;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar35 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar35 + -8) + 0x40));
  lVar35 = (long)&lStack_2b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar37 = lVar35 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar31 = lVar37 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar32 = lVar31 - extraout_x12_01;
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f2096c0);
  uVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
    lStack_110 = 0;
    lStack_d0 = 0;
  }
  else {
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lStack_110 = lStack_c0;
    lStack_d0 = lStack_b8;
    if ((int)plVar4 == 0) {
      lStack_110 = 0;
      lStack_d0 = 0;
    }
  }
  lVar33 = lStack_d0;
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f2096e0);
  uVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
    lVar5 = 0;
    __s10Foundation3URLVMa();
    pcVar30 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
    uVar29 = 1;
  }
  else {
    lVar5 = 0;
    __s10Foundation3URLVMa();
    lVar6 = lVar32;
    _swift_dynamicCast(lVar32,&uStack_90,puVar1 + 8,lVar5,6);
    pcVar30 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
    uVar29 = (uint)lVar6 ^ 1;
  }
  (*pcVar30)(lVar32,uVar29,1,lVar5);
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f209700);
  uVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
    lVar5 = 0;
  }
  else {
    uVar2 = 0x112d550a0;
    func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
    lVar5 = lStack_c0;
    if ((int)plVar4 == 0) {
      lVar5 = 0;
    }
  }
  uVar2 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f209720);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f209750);
  uVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
    lStack_c8 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10465ea2c(0);
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
    lStack_c8 = lStack_c0;
    if ((int)plVar4 == 0) {
      lStack_c8 = 0;
    }
  }
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f209770);
  uVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
    lStack_118 = 0;
    lVar6 = 0;
  }
  else {
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_b8;
    lStack_118 = lStack_c0;
    if ((int)plVar4 == 0) {
      lStack_118 = 0;
      lVar6 = 0;
    }
  }
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f209790);
  uVar3 = param_1;
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0x45575f44415f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45575f44415f5349,0xed00005745495642);
  uVar7 = param_1;
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0x454352554f53;
  uVar29 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454352554f53);
  uVar8 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar2);
  func_0x0001030be878();
  if ((uVar29 & 0xff) == 1) {
    _objc_release(lStack_c8);
    _objc_release(param_1);
  }
  else {
    uVar2 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f2097b0);
    uVar9 = param_1;
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0xd000000000000026;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f2097d0);
    uVar10 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar10 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar10);
      _swift_unknownObjectRelease(uVar10);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
      lStack_120 = 0;
    }
    else {
      uVar2 = 0x11308b310;
      func_0x0001000285a8(0x11308b310,&UNK_10dd22fd0);
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
      lStack_120 = lStack_c0;
      if ((int)plVar4 == 0) {
        lStack_120 = 0;
      }
    }
    uVar2 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f209800);
    uVar10 = param_1;
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0xd00000000000001e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f209820);
    uVar11 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar11 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar11);
      _swift_unknownObjectRelease(uVar11);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
      lStack_100 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
      lStack_100 = lStack_c0;
      if ((int)plVar4 == 0) {
        lStack_100 = 0;
      }
    }
    uVar2 = 0xd00000000000002c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002c,0x800000010f209840);
    uVar11 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar11 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar11);
      _swift_unknownObjectRelease(uVar11);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
      lStack_190 = 0;
      lStack_128 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_190 = lStack_c0;
      lStack_128 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_190 = 0;
        lStack_128 = 0;
      }
    }
    uVar2 = 0xd000000000000011;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f209870);
    uVar11 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar11 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar11);
      _swift_unknownObjectRelease(uVar11);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
      lStack_198 = 0;
      lStack_130 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_198 = lStack_c0;
      lStack_130 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_198 = 0;
        lStack_130 = 0;
      }
    }
    uVar2 = 0xd000000000000029;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f209890);
    uVar11 = param_1;
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0xd000000000000017;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f2098c0);
    uVar12 = param_1;
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0x52494445525f5349;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52494445525f5349,0xef4258455f544345);
    uVar13 = param_1;
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0xd000000000000010;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f2098e0);
    uVar14 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar14 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar14);
      _swift_unknownObjectRelease(uVar14);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
      lStack_1a0 = 0;
      lStack_138 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_1a0 = lStack_c0;
      lStack_138 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_1a0 = 0;
        lStack_138 = 0;
      }
    }
    uVar2 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f209900);
    uVar14 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar14 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar14);
      _swift_unknownObjectRelease(uVar14);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
      lStack_1a8 = 0;
      lStack_140 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_1a8 = lStack_c0;
      lStack_140 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_1a8 = 0;
        lStack_140 = 0;
      }
    }
    uVar2 = 0x44495f4441;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4441,0xe500000000000000);
    uVar14 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar14 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar14);
      _swift_unknownObjectRelease(uVar14);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
      lStack_1b0 = 0;
      lStack_148 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_1b0 = lStack_c0;
      lStack_148 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_1b0 = 0;
        lStack_148 = 0;
      }
    }
    uVar2 = 0x44495f45474150;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f45474150,0xe700000000000000);
    uVar14 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar14 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar14);
      _swift_unknownObjectRelease(uVar14);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
      lStack_1b8 = 0;
      lStack_150 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_1b8 = lStack_c0;
      lStack_150 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_1b8 = 0;
        lStack_150 = 0;
      }
    }
    uVar2 = 0xd000000000000010;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f0b4d20);
    uVar14 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar14 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar14);
      _swift_unknownObjectRelease(uVar14);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
      lStack_1c0 = 0;
      lStack_158 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_1c0 = lStack_c0;
      lStack_158 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_1c0 = 0;
        lStack_158 = 0;
      }
    }
    uVar2 = 0xd000000000000011;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f209920);
    uVar14 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar14 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar14);
      _swift_unknownObjectRelease(uVar14);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
      lStack_108 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
      lStack_108 = lStack_c0;
      if ((int)plVar4 == 0) {
        lStack_108 = 0;
      }
    }
    uVar2 = 0x45535f4b43415254;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45535f4b43415254,0xed00004d554e5f51);
    uVar14 = param_1;
    func_0x00010bf66f40();
    _objc_release(uVar2);
    uVar2 = 0x5145535f57454956;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5145535f57454956,0xec0000004d554e5f);
    uVar15 = param_1;
    func_0x00010bf66f40();
    _objc_release(uVar2);
    uVar2 = 0x455059545f4441;
    uVar29 = 0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441);
    uVar16 = param_1;
    func_0x00010bf66f40();
    _objc_release(uVar2);
    func_0x000100dbcf50();
    if ((uVar29 & 0xff) != 1) {
      uVar2 = 0x55444f52505f4441;
      uVar29 = 0x545f5443;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441);
      uVar17 = param_1;
      func_0x00010bf66f40();
      _objc_release(uVar2);
      func_0x000100dbcf50();
      if ((uVar29 & 0xff) != 1) {
        uVar2 = 0xd000000000000014;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1eeb50)
        ;
        uVar18 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (uVar18 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar18);
          _swift_unknownObjectRelease(uVar18);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
          lStack_238 = 0;
          lStack_1e8 = 0;
        }
        else {
          plVar4 = &lStack_c0;
          _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
          lStack_238 = lStack_c0;
          lStack_1e8 = lStack_b8;
          if ((int)plVar4 == 0) {
            lStack_238 = 0;
            lStack_1e8 = 0;
          }
        }
        uVar2 = 0x444e495f50414e53;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444e495f50414e53,0xea00000000005845)
        ;
        uVar18 = param_1;
        func_0x00010bf66f40();
        _objc_release(uVar2);
        uVar2 = 0xd000000000000010;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f209940)
        ;
        uVar19 = param_1;
        func_0x00010bf66ce0();
        _objc_release(uVar2);
        uVar2 = 0x4d5241505f444943;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d5241505f444943,0xea00000000005341)
        ;
        uVar20 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (uVar20 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar20);
          _swift_unknownObjectRelease(uVar20);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
          lStack_1f0 = 0;
        }
        else {
          uVar2 = 0x112d550a0;
          func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
          plVar4 = &lStack_c0;
          _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
          lStack_1f0 = lStack_c0;
          if ((int)plVar4 == 0) {
            lStack_1f0 = 0;
          }
        }
        uVar2 = 0xd000000000000029;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f209960)
        ;
        uVar20 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (uVar20 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar20);
          _swift_unknownObjectRelease(uVar20);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
          lStack_1d0 = 0;
        }
        else {
          uVar2 = 0;
          func_0x0001002ed07c(0);
          plVar4 = &lStack_c0;
          _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
          lStack_1d0 = lStack_c0;
          if ((int)plVar4 == 0) {
            lStack_1d0 = 0;
          }
        }
        uVar2 = 0xd000000000000027;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000027,0x800000010f209990)
        ;
        uVar20 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (uVar20 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar20);
          _swift_unknownObjectRelease(uVar20);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
          lStack_240 = 0;
          lStack_1f8 = 0;
        }
        else {
          plVar4 = &lStack_c0;
          _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
          lStack_240 = lStack_c0;
          lStack_1f8 = lStack_b8;
          if ((int)plVar4 == 0) {
            lStack_240 = 0;
            lStack_1f8 = 0;
          }
        }
        uVar2 = 0xd00000000000001a;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f2099c0)
        ;
        uVar20 = param_1;
        func_0x00010bf66ce0();
        _objc_release(uVar2);
        uVar2 = 0xd000000000000010;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f2099e0)
        ;
        uVar21 = param_1;
        func_0x00010bf66ce0();
        _objc_release(uVar2);
        uVar2 = 0xd000000000000014;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f209a00)
        ;
        uVar22 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (uVar22 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar22);
          _swift_unknownObjectRelease(uVar22);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
          lStack_1d8 = 0;
        }
        else {
          uVar2 = 0;
          FUN_104840a2c(0);
          plVar4 = &lStack_c0;
          _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
          lStack_1d8 = lStack_c0;
          if ((int)plVar4 == 0) {
            lStack_1d8 = 0;
          }
        }
        uVar2 = 0x45445f574f4c4c41;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45445f574f4c4c41,0xee004b4e494c5045)
        ;
        uVar22 = param_1;
        func_0x00010bf66ce0();
        _objc_release(uVar2);
        uVar2 = 0xd00000000000001a;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f209a20)
        ;
        uVar23 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (uVar23 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar23);
          _swift_unknownObjectRelease(uVar23);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
          lStack_1e0 = 0;
        }
        else {
          uVar2 = 0;
          func_0x0001002ed07c(0);
          plVar4 = &lStack_c0;
          _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
          lStack_1e0 = lStack_c0;
          if ((int)plVar4 == 0) {
            lStack_1e0 = 0;
          }
        }
        uVar2 = 0xd000000000000025;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f209a40)
        ;
        uVar23 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (uVar23 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar23);
          _swift_unknownObjectRelease(uVar23);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
          lVar36 = 0;
        }
        else {
          uVar2 = 0;
          func_0x0001002ed07c(0);
          plVar4 = &lStack_c0;
          _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
          lVar36 = lStack_c0;
          if ((int)plVar4 == 0) {
            lVar36 = 0;
          }
        }
        uVar2 = 0xd000000000000018;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f209a70)
        ;
        uVar23 = param_1;
        func_0x00010bf66f40();
        _objc_release(uVar2);
        if (uVar23 < 2) {
          uVar2 = 0xd000000000000016;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000016,0x800000010f209a90);
          uVar24 = param_1;
          func_0x00010bf66ce0();
          _objc_release(uVar2);
          uVar2 = 0x54414e4954534544;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0x54414e4954534544,0xef4c52555f4e4f49);
          uVar25 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          if (uVar25 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar25);
            _swift_unknownObjectRelease(uVar25);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
            lVar26 = 0;
            __s10Foundation3URLVMa();
            pcVar30 = *(code **)(*(long *)(lVar26 + -8) + 0x38);
            uVar29 = 1;
          }
          else {
            lVar26 = 0;
            __s10Foundation3URLVMa();
            lVar34 = lVar31;
            _swift_dynamicCast(lVar31,&uStack_90,puVar1 + 8,lVar26,6);
            pcVar30 = *(code **)(*(long *)(lVar26 + -8) + 0x38);
            uVar29 = (uint)lVar34 ^ 1;
          }
          (*pcVar30)(lVar31,uVar29,1,lVar26);
          uVar2 = 0xd000000000000011;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000011,0x800000010f209ab0);
          uVar25 = param_1;
          func_0x00010bf66ce0();
          _objc_release(uVar2);
          uVar2 = 0x44494153;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44494153,0xe400000000000000);
          uVar27 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          if (uVar27 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar27);
            _swift_unknownObjectRelease(uVar27);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
            lStack_2a8 = 0;
            lStack_258 = 0;
          }
          else {
            plVar4 = &lStack_c0;
            _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
            lStack_2a8 = lStack_c0;
            lStack_258 = lStack_b8;
            if ((int)plVar4 == 0) {
              lStack_2a8 = 0;
              lStack_258 = 0;
            }
          }
          uVar2 = 0xd000000000000015;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000015,0x800000010f209ad0);
          uVar27 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          if (uVar27 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar27);
            _swift_unknownObjectRelease(uVar27);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
            lStack_2b0 = 0;
            lStack_260 = 0;
          }
          else {
            plVar4 = &lStack_c0;
            _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
            lStack_2b0 = lStack_c0;
            lStack_260 = lStack_b8;
            if ((int)plVar4 == 0) {
              lStack_2b0 = 0;
              lStack_260 = 0;
            }
          }
          uVar2 = 0xd000000000000017;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000017,0x800000010f209af0);
          uVar27 = param_1;
          func_0x00010bf66ce0();
          _objc_release(uVar2);
          uVar2 = 0xd000000000000021;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000021,0x800000010f209b10);
          uVar28 = param_1;
          func_0x00010bf66ce0();
          uStack_274 = (undefined4)uVar28;
          _objc_release(uVar2);
          uVar2 = 0xd000000000000010;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000010,0x800000010f209b40);
          uVar28 = param_1;
          func_0x00010bf66ce0();
          uStack_278 = (undefined4)uVar28;
          _objc_release(uVar2);
          uVar2 = 0xd000000000000019;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000019,0x800000010f209b60);
          uVar28 = param_1;
          func_0x00010bf66ce0();
          uStack_27c = (undefined4)uVar28;
          _objc_release(uVar2);
          uVar2 = 0xd000000000000014;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000014,0x800000010f209b80);
          uVar28 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          if (uVar28 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar28);
            _swift_unknownObjectRelease(uVar28);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            func_0x00010464eac8(&uStack_90,0x112d387f8,&UNK_10d902650);
            lStack_d0 = 0;
          }
          else {
            uVar2 = 0;
            FUN_10483cd2c(0);
            plVar4 = &lStack_c0;
            _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
            lStack_d0 = lStack_c0;
            if ((int)plVar4 == 0) {
              lStack_d0 = 0;
            }
          }
          if (lVar33 == 0) {
            lStack_288 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_110,lVar33);
            lStack_288 = lStack_110;
            _swift_bridgeObjectRelease(lVar33);
          }
          func_0x00010464ea80(lVar32,lVar37,0x112d36580,&UNK_10d9016d0);
          lVar26 = 0;
          __s10Foundation3URLVMa();
          lVar34 = *(long *)(lVar26 + -8);
          pcVar30 = *(code **)(lVar34 + 0x30);
          lVar33 = lVar37;
          (*pcVar30)(lVar37,1,lVar26);
          lStack_248 = 0;
          if ((int)lVar33 != 1) {
            __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
            (**(code **)(lVar34 + 8))(lVar37,lVar26);
            lStack_248 = lVar33;
          }
          if (lVar5 == 0) {
            lStack_298 = 0;
          }
          else {
            lVar37 = lVar5;
            __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                      (lVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
            lStack_298 = lVar37;
            _swift_bridgeObjectRelease(lVar5);
          }
          if (lVar6 == 0) {
            lStack_2a0 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_118,lVar6);
            lStack_2a0 = lStack_118;
            _swift_bridgeObjectRelease(lVar6);
          }
          if (lStack_120 == 0) {
            lStack_200 = 0;
          }
          else {
            uVar2 = 0;
            __s10Foundation12URLQueryItemVMa(0);
            lStack_200 = lStack_120;
            __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_120,uVar2);
            _swift_bridgeObjectRelease(lStack_120);
          }
          if (lStack_128 == 0) {
            lStack_e0 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_190,lStack_128);
            _swift_bridgeObjectRelease(lStack_128);
            lStack_e0 = lStack_190;
          }
          if (lStack_130 == 0) {
            lStack_120 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_198,lStack_130);
            _swift_bridgeObjectRelease(lStack_130);
            lStack_120 = lStack_198;
          }
          if (lStack_138 == 0) {
            lStack_128 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1a0,lStack_138);
            _swift_bridgeObjectRelease(lStack_138);
            lStack_128 = lStack_1a0;
          }
          if (lStack_140 == 0) {
            lStack_130 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1a8,lStack_140);
            _swift_bridgeObjectRelease(lStack_140);
            lStack_130 = lStack_1a8;
          }
          if (lStack_148 == 0) {
            lStack_1b0 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1b0,lStack_148);
            _swift_bridgeObjectRelease(lStack_148);
          }
          if (lStack_150 == 0) {
            lStack_138 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1b8,lStack_150);
            _swift_bridgeObjectRelease(lStack_150);
            lStack_138 = lStack_1b8;
          }
          if (lStack_158 == 0) {
            lStack_1c0 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1c0,lStack_158);
            _swift_bridgeObjectRelease(lStack_158);
          }
          if (lStack_1e8 == 0) {
            lStack_110 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_238,lStack_1e8);
            _swift_bridgeObjectRelease(lStack_1e8);
            lStack_110 = lStack_238;
          }
          if (lStack_1f0 == 0) {
            lStack_118 = 0;
          }
          else {
            lStack_118 = lStack_1f0;
            __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                      (lStack_1f0,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90
                      );
            _swift_bridgeObjectRelease(lStack_1f0);
          }
          if (lStack_1f8 == 0) {
            lStack_240 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_240,lStack_1f8);
            _swift_bridgeObjectRelease(lStack_1f8);
          }
          func_0x00010464ea80(lVar31,lVar35,0x112d36580,&UNK_10d9016d0);
          lVar37 = lVar35;
          (*pcVar30)(lVar35,1,lVar26);
          if ((int)lVar37 == 1) {
            lVar37 = 0;
          }
          else {
            __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
            (**(code **)(lVar34 + 8))(lVar35,lVar26);
          }
          if (lStack_258 == 0) {
            lVar35 = 0;
          }
          else {
            lVar35 = lStack_2a8;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_2a8,lStack_258);
            _swift_bridgeObjectRelease(lStack_258);
          }
          lStack_290 = lVar32;
          if (lStack_260 == 0) {
            lVar33 = 0;
          }
          else {
            lVar33 = lStack_2b0;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_2b0,lStack_260);
            _swift_bridgeObjectRelease(lStack_260);
          }
          *(char *)(lVar32 + -0xd) = (char)uStack_27c;
          *(char *)(lVar32 + -0xe) = (char)uStack_278;
          *(char *)(lVar32 + -0xf) = (char)uStack_274;
          *(char *)(lVar32 + -0x10) = (char)uVar27;
          *(char *)(lVar32 + -0x28) = (char)uVar25;
          *(char *)(lVar32 + -0x38) = (char)uVar24;
          *(ulong *)(lVar32 + -0x40) = uVar23;
          *(char *)(lVar32 + -0x58) = (char)uVar22;
          *(char *)(lVar32 + -0x67) = (char)uVar21;
          *(char *)(lVar32 + -0x68) = (char)uVar20;
          *(char *)(lVar32 + -0x88) = (char)uVar19;
          *(ulong *)(lVar32 + -0x90) = uVar18;
          *(ulong *)(lVar32 + -0xa0) = uVar17;
          *(ulong *)(lVar32 + -0xa8) = uVar16;
          *(ulong *)(lVar32 + -0xb0) = uVar15;
          *(ulong *)(lVar32 + -0xb8) = uVar14;
          *(char *)(lVar32 + -0xee) = (char)uVar13;
          *(char *)(lVar32 + -0xef) = (char)uVar12;
          *(char *)(lVar32 + -0xf0) = (char)uVar11;
          *(long *)(lVar32 + -8) = lStack_d0;
          *(long *)(lVar32 + -0x20) = lVar35;
          *(long *)(lVar32 + -0x18) = lVar33;
          *(long *)(lVar32 + -0x30) = lVar37;
          *(long *)(lVar32 + -0x48) = lVar36;
          *(long *)(lVar32 + -0x50) = lStack_1e0;
          *(long *)(lVar32 + -0x60) = lStack_1d8;
          *(long *)(lVar32 + -0x70) = lStack_240;
          *(long *)(lVar32 + -0x78) = lStack_1d0;
          *(long *)(lVar32 + -0x80) = lStack_118;
          *(long *)(lVar32 + -0x98) = lStack_110;
          *(long *)(lVar32 + -200) = lStack_1c0;
          *(long *)(lVar32 + -0xc0) = lStack_108;
          *(long *)(lVar32 + -0xd8) = lStack_1b0;
          *(long *)(lVar32 + -0xd0) = lStack_138;
          *(long *)(lVar32 + -0xe0) = lStack_130;
          *(long *)(lVar32 + -0xe8) = lStack_128;
          *(long *)(lVar32 + -0xf8) = lStack_120;
          *(long *)(lVar32 + -0x100) = lStack_e0;
          *(long *)(lVar32 + -0x108) = lStack_100;
          *(char *)(lVar32 + -0x110) = (char)uVar10;
          *(long *)(lVar32 + -0x118) = lStack_200;
          *(char *)(lVar32 + -0x120) = (char)uVar9;
          *(ulong *)(lVar32 + -0x128) = uVar8;
          *(char *)(lVar32 + -0x12f) = (char)uVar7;
          *(char *)(lVar32 + -0x130) = (char)uVar3;
          lVar6 = lStack_288;
          lVar5 = lStack_298;
          lVar32 = lStack_2a0;
          func_0x00010bff9780();
          _objc_release(lVar6);
          _objc_release(lStack_248);
          _objc_release(lVar5);
          _objc_release(lVar32);
          _objc_release(lStack_200);
          _objc_release(lStack_e0);
          _objc_release(lStack_120);
          _objc_release(lStack_128);
          _objc_release(lStack_130);
          _objc_release(lStack_1b0);
          _objc_release(lStack_138);
          _objc_release(lStack_1c0);
          _objc_release(lStack_110);
          _objc_release(lStack_118);
          _objc_release(lStack_240);
          _objc_release(lVar37);
          _objc_release(lVar35);
          _objc_release(lVar33);
          _objc_release(param_1);
          _objc_release(lStack_d0);
          _objc_release(lStack_1d0);
          _objc_release(lStack_1d8);
          _objc_release(lStack_1e0);
          _objc_release(lVar36);
          _objc_release(lStack_100);
          _objc_release(lStack_108);
          _objc_release(lStack_c8);
          func_0x00010464eac8(lVar31,0x112d36580,&UNK_10d9016d0);
          func_0x00010464eac8(lStack_290,0x112d36580,&UNK_10d9016d0);
          return unaff_x20;
        }
        _objc_release(lStack_c8);
        _objc_release(lStack_100);
        _objc_release(lStack_108);
        _objc_release(lStack_1d0);
        _objc_release(lStack_1d8);
        _objc_release(lStack_1e0);
        _objc_release(lVar36);
        _objc_release(param_1);
        _swift_bridgeObjectRelease(lStack_1f8);
        _swift_bridgeObjectRelease(lStack_1f0);
        _swift_bridgeObjectRelease(lStack_1e8);
        _swift_bridgeObjectRelease(lStack_158);
        _swift_bridgeObjectRelease(lStack_150);
        _swift_bridgeObjectRelease(lStack_148);
        _swift_bridgeObjectRelease(lStack_140);
        _swift_bridgeObjectRelease(lStack_138);
        _swift_bridgeObjectRelease(lStack_130);
        _swift_bridgeObjectRelease(lStack_128);
        _swift_bridgeObjectRelease(lStack_120);
        goto LAB_10464d244;
      }
    }
    _objc_release(lStack_c8);
    _objc_release(lStack_100);
    _objc_release(lStack_108);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lStack_158);
    _swift_bridgeObjectRelease(lStack_150);
    _swift_bridgeObjectRelease(lStack_148);
    _swift_bridgeObjectRelease(lStack_140);
    _swift_bridgeObjectRelease(lStack_138);
    _swift_bridgeObjectRelease(lStack_130);
    _swift_bridgeObjectRelease(lStack_128);
    _swift_bridgeObjectRelease(lStack_120);
  }
LAB_10464d244:
  _swift_bridgeObjectRelease(lVar6);
  _swift_bridgeObjectRelease(lVar5);
  _swift_bridgeObjectRelease(lStack_d0);
  func_0x00010464eac8(lVar32,0x112d36580,&UNK_10d9016d0);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10464e750; end: 10464e777; -[SCAdWebBrowserConfig initWithCoder:] */

void FUN_10464e750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10464c150();
  return;
}



/* Entry: 10464e778; end: 10464e7ef; -[SCAdWebBrowserConfig description] */

void FUN_10464e778(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1046465c0(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001018cf918(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10464e7f0; end: 10464e86b; -[SCAdWebBrowserConfig init] */

void FUN_10464e7f0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCWebBrowsingServices/AdWebBrowserConfigWrapper.swift",0x35,2,0x267,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10464e838);
  (*pcVar1)();
}



/* Entry: 10464e86c; end: 10464ea7f; -[SCAdWebBrowserConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10464e86c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b308 + 8));
  func_0x00010464eac8(param_1 + _DAT_113814f78,0x112d36580,&UNK_10d9016d0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113814f80));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113814f90));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113814f98 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113814fc0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113814fd0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113814fd8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113814fe0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815000 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815008 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815010 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815018 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815020 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113815028));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815050 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815068));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113815070));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815078 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113815090));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1138150a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1138150a8));
  func_0x00010464eac8(param_1 + _DAT_1138150c0,0x112d36580,&UNK_10d9016d0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138150d0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138150d8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113815100));
  return;
}



/* Entry: 10464ea80; end: 10464eb07;  */

undefined8 FUN_10464ea80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10464eb08; end: 10464ec87;  */

uint FUN_10464eb08(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  ulong uVar4;
  long extraout_x12;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  uint uVar9;
  code *pcVar10;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0;
  __s10Foundation12URLQueryItemVMa();
  lStack_68 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar6 = (long)puVar5 - extraout_x12;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_2 + 0x10)) {
    if ((lVar3 == 0) || (param_1 == param_2)) {
      uVar9 = 1;
    }
    else {
      uVar4 = (ulong)*(byte *)(lStack_68 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lStack_68 + 0x50) ^ 0xffffffffffffffff);
      param_1 = param_1 + uVar4;
      param_2 = param_2 + uVar4;
      lVar7 = *(long *)(lStack_68 + 0x48);
      pcVar8 = *(code **)(lStack_68 + 0x10);
      do {
        lVar3 = lVar3 + -1;
        (*pcVar8)(uVar6,param_1,lVar1);
        (*pcVar8)(puVar5,param_2,lVar1);
        uVar2 = 0x112ffb288;
        FUN_10464edc0(0x112ffb288,PTR___s10Foundation12URLQueryItemVMa_1103504f0,
                      PTR___s10Foundation12URLQueryItemVSQAAMc_110350508);
        uVar4 = uVar6;
        __sSQ2eeoiySbx_xtFZTj(uVar6,puVar5,lVar1,uVar2);
        uVar9 = (uint)uVar4;
        pcVar10 = *(code **)(lStack_68 + 8);
        (*pcVar10)(puVar5,lVar1);
        (*pcVar10)(uVar6,lVar1);
        if ((uVar4 & 1) == 0) break;
        param_2 = param_2 + lVar7;
        param_1 = param_1 + lVar7;
      } while (lVar3 != 0);
    }
  }
  else {
    uVar9 = 0;
  }
  return uVar9 & 1;
}



/* Entry: 10464ec88; end: 10464ec8f;  */

void FUN_10464ec88(void)

{
  if (lRam000000011308b340 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e8167bc);
  return;
}



/* Entry: 10464ec90; end: 10464ecc7;  */

void FUN_10464ec90(undefined8 param_1)

{
  if (lRam000000011308b340 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e8167bc);
  return;
}



/* Entry: 10464ecc8; end: 10464edbf;  */

void FUN_10464ecc8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_1c8 = &UNK_10dd22ff8;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_1c0 = *(long *)(lVar1 + -8) + 0x40;
    puStack_1b8 = &UNK_10dd23010;
    puStack_1b0 = &UNK_10dd23028;
    puStack_1a8 = &UNK_10dd23010;
    puStack_1a0 = &UNK_10dd22ff8;
    puStack_198 = &UNK_10dd23028;
    puStack_188 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_190 = &UNK_10dd23028;
    puStack_180 = &UNK_10dd23028;
    puStack_178 = &UNK_10dd23010;
    puStack_170 = &UNK_10dd23028;
    puStack_168 = &UNK_10dd23010;
    puStack_160 = &UNK_10dd22ff8;
    puStack_158 = &UNK_10dd22ff8;
    puStack_150 = &UNK_10dd23028;
    puStack_148 = &UNK_10dd23028;
    puStack_140 = &UNK_10dd23028;
    puStack_138 = &UNK_10dd22ff8;
    puStack_130 = &UNK_10dd22ff8;
    puStack_128 = &UNK_10dd22ff8;
    puStack_120 = &UNK_10dd22ff8;
    puStack_118 = &UNK_10dd22ff8;
    puStack_110 = &UNK_10dd23010;
    puStack_e8 = &UNK_10dd22ff8;
    puStack_d8 = &UNK_10dd23028;
    puStack_d0 = &UNK_10dd23010;
    puStack_c8 = &UNK_10dd23010;
    puStack_c0 = &UNK_10dd22ff8;
    puStack_b8 = &UNK_10dd23028;
    puStack_b0 = &UNK_10dd23028;
    puStack_a8 = &UNK_10dd23010;
    puStack_a0 = &UNK_10dd23028;
    puStack_98 = &UNK_10dd23010;
    puStack_90 = &UNK_10dd23010;
    puStack_80 = &UNK_10dd23028;
    puStack_70 = &UNK_10dd23028;
    puStack_68 = &UNK_10dd22ff8;
    puStack_60 = &UNK_10dd22ff8;
    puStack_58 = &UNK_10dd23028;
    puStack_50 = &UNK_10dd23028;
    puStack_48 = &UNK_10dd23028;
    puStack_40 = &UNK_10dd23028;
    puStack_38 = &UNK_10dd23010;
    puStack_108 = puStack_188;
    puStack_100 = puStack_188;
    puStack_f8 = puStack_188;
    puStack_f0 = puStack_188;
    puStack_e0 = puStack_188;
    puStack_88 = puStack_188;
    lStack_78 = lStack_1c0;
    _swift_updateClassMetadata2(param_1,0x100,0x33,&puStack_1c8,param_1 + 0x50);
  }
  return;
}



/* Entry: 10464edc0; end: 10464ee2f;  */

void FUN_10464edc0(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10464ee30; end: 10464ee3b; -[SCAutofillUserInfo displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10464ee30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308b350))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308b350);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10464ee3c; end: 10464ee47; -[SCAutofillUserInfo email] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10464ee3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308b358))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308b358);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10464ee48; end: 10464ee53; -[SCAutofillUserInfo phone] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10464ee48(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308b360))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308b360);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10464ee54; end: 10464ee5f; -[SCAutofillUserInfo zip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10464ee54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308b368))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308b368);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10464ee60; end: 10464ef37; -[SCAutofillUserInfo birthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10464ee60(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  FUN_10464fc90(param_1 + _DAT_113815108,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10464ef38; end: 10464ef43; -[SCAutofillUserInfo bitmojiAvatarId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10464ef38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113815110))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113815110);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10464ef44; end: 10464ef9b;  */

void FUN_10464ef44(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10464ef9c; end: 10464f0cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10464ef9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b350);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b358);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b360);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b368);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  FUN_10464fc90(param_9,unaff_x20 + _DAT_113815108,0x112d373d8,&UNK_10d9014c0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815110);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar2 = auStack_70;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x00010464fcd8(param_9,0x112d373d8,&UNK_10d9014c0);
  return puVar2;
}



/* Entry: 10464f0cc; end: 10464f333; -[SCAutofillUserInfo initWithDisplayName:email:phone:zip:birthday:bitmojiAvatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10464f0cc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                    long param_6,long param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  _swift_getObjectType();
  lVar1 = 0x112d373d8;
  puVar7 = &UNK_10d9014c0;
  lStack_78 = lVar4;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = (long)&lStack_a0 - extraout_x8;
  if (param_3 == 0) {
    puStack_88 = (undefined *)0x0;
    lStack_80 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_88 = puVar7;
    lStack_80 = param_3;
  }
  if (param_4 == 0) {
    puStack_98 = (undefined *)0x0;
    lStack_90 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_90 = param_4;
    puStack_98 = puVar7;
  }
  if (param_5 == 0) {
    lStack_a0 = 0;
    puVar6 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar6 = puVar7;
    lStack_a0 = param_5;
  }
  lVar4 = param_6;
  _objc_retain();
  lVar2 = param_7;
  _objc_retain();
  lVar3 = param_8;
  _objc_retain();
  if (lVar4 == 0) {
    param_6 = 0;
    puVar7 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar4);
  }
  if (lVar2 == 0) {
    lVar4 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar1,param_7);
    _objc_release(lVar2);
    lVar4 = 0;
    __s10Foundation4DateVMa();
  }
  uVar8 = (ulong)(lVar2 == 0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar1,uVar8,1);
  if (lVar3 == 0) {
    param_8 = 0;
    uVar8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar3);
  }
  plVar5 = (long *)(param_1 + _DAT_11308b350);
  *plVar5 = lStack_80;
  plVar5[1] = (long)puStack_88;
  plVar5 = (long *)(param_1 + _DAT_11308b358);
  *plVar5 = lStack_90;
  plVar5[1] = (long)puStack_98;
  plVar5 = (long *)(param_1 + _DAT_11308b360);
  *plVar5 = lStack_a0;
  plVar5[1] = (long)puVar6;
  plVar5 = (long *)(param_1 + _DAT_11308b368);
  *plVar5 = param_6;
  plVar5[1] = (long)puVar7;
  FUN_10464fc90(lVar1,param_1 + _DAT_113815108,0x112d373d8,&UNK_10d9014c0);
  plVar5 = (long *)(param_1 + _DAT_113815110);
  *plVar5 = param_8;
  plVar5[1] = uVar8;
  lStack_68 = lStack_78;
  plVar5 = &lStack_70;
  lStack_70 = param_1;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  func_0x00010464fcd8(lVar1,0x112d373d8,&UNK_10d9014c0);
  return plVar5;
}



/* Entry: 10464f334; end: 10464f463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10464f334(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar5 = &stack0xffffffffffffffa0;
  _swift_getObjectType();
  uVar6 = param_1[1];
  uVar7 = *param_1;
  uVar9 = param_1[3];
  uVar8 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b350);
  puVar1[1] = param_1[1];
  *puVar1 = uVar7;
  uVar7 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b358);
  puVar1[1] = uVar9;
  *puVar1 = uVar8;
  uVar8 = param_1[5];
  uVar9 = param_1[4];
  uVar11 = param_1[7];
  uVar10 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b360);
  puVar1[1] = param_1[5];
  *puVar1 = uVar9;
  uVar9 = param_1[7];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b368);
  puVar1[1] = uVar11;
  *puVar1 = uVar10;
  lVar4 = 0;
  FUN_104637d5c();
  FUN_10464fc90((long)param_1 + (long)*(int *)(lVar4 + 0x20),unaff_x20 + _DAT_113815108,0x112d373d8,
                &UNK_10d9014c0);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  uVar10 = puVar1[1];
  uVar11 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113815110);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar11;
  puVar3 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,puVar3);
  func_0x000104638a78(param_1);
  return puVar5;
}



/* Entry: 10464f464; end: 10464f497; -[SCAutofillUserInfo hash] */

undefined8 FUN_10464f464(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10464f498();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10464f498; end: 10464f713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10464f498(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [72];
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_90 + -extraout_x8;
  __ss6HasherVABycfC(auStack_88);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b350))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b350);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b358))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b358);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b360))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b360);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b368))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b368);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  FUN_10464fc90(unaff_x20 + _DAT_113815108,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  puVar3 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x00010464fcd8(puVar4,0x112d373d8,&UNK_10d9014c0);
    puVar4 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar6 + 8))(puVar4,lVar2);
    puVar4 = puVar3;
    func_0x00010bfde980(puVar3);
    _objc_release(puVar3);
  }
  __ss6HasherV8_combineyySuF(puVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_113815110))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815110);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10464f714; end: 10464fc8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10464f714(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  uint uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 auStack_b0 [8];
  undefined1 *puStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar15 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)puVar15 - extraout_x8_00;
  lVar13 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar13 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12;
  FUN_10464fc90(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x00010464fcd8(auStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar2 = &lStack_88;
    _swift_dynamicCast(plVar2,auStack_80,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar5 = ((long *)(unaff_x20 + _DAT_11308b350))[1];
      lVar6 = ((long *)(lStack_88 + _DAT_11308b350))[1];
      uStack_94 = (uint)(lVar5 == 0 && lVar6 == 0);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        lVar3 = *(long *)(unaff_x20 + _DAT_11308b350);
        if ((lVar3 == *(long *)(lStack_88 + _DAT_11308b350)) && (lVar5 == lVar6)) {
          uStack_94 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_94 = (uint)lVar3;
        }
      }
      lVar5 = ((long *)(unaff_x20 + _DAT_11308b358))[1];
      lVar6 = ((long *)(lStack_88 + _DAT_11308b358))[1];
      uStack_98 = (uint)(lVar5 == 0 && lVar6 == 0);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        lVar3 = *(long *)(unaff_x20 + _DAT_11308b358);
        if ((lVar3 == *(long *)(lStack_88 + _DAT_11308b358)) && (lVar5 == lVar6)) {
          uStack_98 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_98 = (uint)lVar3;
        }
      }
      lVar5 = ((long *)(unaff_x20 + _DAT_11308b360))[1];
      lVar6 = ((long *)(lStack_88 + _DAT_11308b360))[1];
      uStack_9c = (uint)(lVar5 == 0 && lVar6 == 0);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        lVar3 = *(long *)(unaff_x20 + _DAT_11308b360);
        if ((lVar3 == *(long *)(lStack_88 + _DAT_11308b360)) && (lVar5 == lVar6)) {
          uStack_9c = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_9c = (uint)lVar3;
        }
      }
      lVar5 = ((long *)(unaff_x20 + _DAT_11308b368))[1];
      lVar6 = ((long *)(lStack_88 + _DAT_11308b368))[1];
      uStack_a0 = (uint)(lVar5 == 0 && lVar6 == 0);
      lStack_90 = lStack_88;
      puStack_a8 = puVar15;
      if ((lVar5 != 0) && (lVar6 != 0)) {
        lVar3 = *(long *)(unaff_x20 + _DAT_11308b368);
        if ((lVar3 == *(long *)(lStack_88 + _DAT_11308b368)) && (lVar5 == lVar6)) {
          uStack_a0 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_a0 = (uint)lVar3;
        }
      }
      lVar5 = _DAT_113815108;
      FUN_10464fc90(lStack_90 + _DAT_113815108,lVar14,0x112d373d8,&UNK_10d9014c0);
      lVar9 = (long)*(int *)(lVar9 + 0x30);
      FUN_10464fc90(unaff_x20 + lVar5,lVar10,0x112d373d8,&UNK_10d9014c0);
      FUN_10464fc90(lVar14,lVar10 + lVar9,0x112d373d8,&UNK_10d9014c0);
      pcVar11 = *(code **)(lVar12 + 0x30);
      lVar5 = lVar10;
      (*pcVar11)(lVar10,1,lVar1);
      if ((int)lVar5 == 1) {
        func_0x00010464fcd8(lVar14,0x112d373d8,&UNK_10d9014c0);
        lVar9 = lVar10 + lVar9;
        (*pcVar11)(lVar9,1,lVar1);
        lVar13 = lStack_90;
        if ((int)lVar9 == 1) {
          func_0x00010464fcd8(lVar10,0x112d373d8,&UNK_10d9014c0);
          uVar7 = 1;
        }
        else {
LAB_10464fb1c:
          lVar13 = lStack_90;
          func_0x00010464fcd8(lVar10,0x112d373d0,&UNK_10d90f8f0);
          uVar7 = 0;
        }
      }
      else {
        FUN_10464fc90(lVar10,lVar13,0x112d373d8,&UNK_10d9014c0);
        lVar5 = lVar10 + lVar9;
        (*pcVar11)(lVar5,1,lVar1);
        puVar15 = puStack_a8;
        if ((int)lVar5 == 1) {
          func_0x00010464fcd8(lVar14,0x112d373d8,&UNK_10d9014c0);
          (**(code **)(lVar12 + 8))(lVar13,lVar1);
          goto LAB_10464fb1c;
        }
        puVar4 = puStack_a8;
        (**(code **)(lVar12 + 0x20))(puStack_a8,lVar10 + lVar9,lVar1);
        func_0x000100df4c40();
        lVar9 = lVar13;
        __sSQ2eeoiySbx_xtFZTj(lVar13,puVar15,lVar1,puVar4);
        uVar7 = (uint)lVar9;
        pcVar11 = *(code **)(lVar12 + 8);
        (*pcVar11)(puVar15,lVar1);
        func_0x00010464fcd8(lVar14,0x112d373d8,&UNK_10d9014c0);
        (*pcVar11)(lVar13,lVar1);
        func_0x00010464fcd8(lVar10,0x112d373d8,&UNK_10d9014c0);
        lVar13 = lStack_90;
      }
      lVar9 = ((long *)(unaff_x20 + _DAT_113815110))[1];
      lVar5 = ((long *)(lVar13 + _DAT_113815110))[1];
      if (lVar9 == 0) {
        _swift_bridgeObjectRetain(lVar5);
        _objc_release(lVar13);
        if (lVar5 == 0) {
LAB_10464fc28:
          uVar8 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar5);
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 0;
        if (lVar5 != 0) {
          lVar1 = *(long *)(unaff_x20 + _DAT_113815110);
          if ((lVar1 == *(long *)(lVar13 + _DAT_113815110)) && (lVar9 == lVar5)) {
            _objc_release(lVar13);
            goto LAB_10464fc28;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar1;
        }
        _objc_release(lVar13);
      }
      if ((uStack_94 & uStack_98 & uStack_9c & uStack_a0 & 1) != 0) {
        uVar7 = uVar7 & uVar8;
        goto LAB_10464fc6c;
      }
    }
  }
  uVar7 = 0;
LAB_10464fc6c:
  return uVar7 & 1;
}



/* Entry: 10464fc90; end: 10464fd17;  */

undefined8 FUN_10464fc90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10464fd18; end: 10464fda7; -[SCAutofillUserInfo isEqual:] */

uint FUN_10464fd18(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10464f714(&uStack_40);
  _objc_release(param_1);
  func_0x00010464fcd8(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 10464fda8; end: 10464fdab; -[SCAutofillUserInfo copyWithZone:] */

void FUN_10464fda8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}


