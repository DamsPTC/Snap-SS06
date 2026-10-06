/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1018cc420; end: 1018cc4df;  */

void FUN_1018cc420(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018cc4e0; end: 1018cc53f; -[_TtC47SponsoredSnapFeedRequestMetadataServiceProvider40SponsoredSnapFeedRequestMetadataProvider init] */

void FUN_1018cc4e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapFeedRequestMetadataServiceProvider.SponsoredSnapFeedRequestMetadataProvider"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cc50c);
  (*pcVar1)();
}



/* Entry: 1018cc540; end: 1018cc607; -[_TtC47SponsoredSnapFeedRequestMetadataServiceProvider40SponsoredSnapFeedRequestMetadataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001018cc55c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cc57c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cc59c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cc5bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cc5ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018cc5c0) */
/* WARNING: Removing unreachable block (ram,0x0001018cc5a0) */
/* WARNING: Removing unreachable block (ram,0x0001018cc580) */
/* WARNING: Removing unreachable block (ram,0x0001018cc560) */
/* WARNING: Removing unreachable block (ram,0x0001018cc5f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018cc540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dcf4f0));
  return;
}



/* Entry: 1018cc608; end: 1018cc6df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1018cc608(ulong param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  lVar2 = lStack_38;
  uVar3 = (uint)param_1;
  if (lStack_38 == 0) {
    param_1 = 0;
  }
  else {
    FUN_1018cc6e0();
    func_0x000107c615e8(lVar2);
    uVar3 = (uint)lVar2;
  }
  func_0x0001000d224c(&lStack_38);
  lVar2 = lStack_38;
  if (lStack_38 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x0001018cc744();
    func_0x000107c615e8(lVar2);
  }
  func_0x0001000d224c(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c441a0(lStack_38);
  func_0x000107c615e8(lStack_38);
  uVar1 = 1;
  if ((param_1 & 1) != 0) {
    uVar1 = (int)lVar2 == 1 | uVar3;
  }
  return uVar1 & 1;
}



/* Entry: 1018cc6e0; end: 1018cc7a7;  */

undefined8 FUN_1018cc6e0(ulong param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x000104041f50();
  if ((param_1 & 1) == 0) {
    uVar1 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010efbd4a0);
    func_0x000107c3ebdc();
    func_0x000107c61170(uVar1);
  }
  else {
    unaff_x20 = 1;
  }
  return unaff_x20;
}



/* Entry: 1018cc7a8; end: 1018cc8eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1018cc7a8(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uStack_40;
  ulong uStack_38;
  
  puVar4 = &uStack_40;
  func_0x000104041f50();
  if ((param_1 & 1) == 0) {
    func_0x0001000d224c(&uStack_38);
    uVar3 = uStack_38;
    if (uStack_38 != 0) {
      FUN_1018cc6e0();
      func_0x000107c615e8(uVar3);
      if ((param_1 & 1) != 0) {
        func_0x0001000d224c(&uStack_38);
        uVar3 = uStack_38;
        func_0x000107c441a0();
        func_0x000107c615e8(uStack_38);
        if (uVar3 == 2) {
          return 4;
        }
        if (uVar3 == 1) {
          return 3;
        }
        if (uVar3 == 0) {
          return 2;
        }
        goto LAB_1018cc8c4;
      }
    }
    uVar2 = 1;
  }
  else {
    func_0x0001000d224c(&uStack_38);
    uVar3 = uStack_38;
    func_0x000107c441a0();
    func_0x000107c615e8(uStack_38);
    if (2 < uVar3) {
      puVar4 = &uStack_38;
LAB_1018cc8c4:
      func_0x000107c60614(&UNK_110713170,puVar4,&UNK_110713170,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cc8d0);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(&UNK_10d9910c0 + uVar3 * 8);
  }
  return uVar2;
}



/* Entry: 1018cc8ec; end: 1018cc957;  */

void FUN_1018cc8ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 5000) = unaff_x20;
  *(undefined4 *)(unaff_x22 + 0x13f0) = param_3;
  *(undefined4 *)(unaff_x22 + 0x13ec) = param_2;
  *(undefined4 *)(unaff_x22 + 0x13e8) = param_1;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x1390) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x1398) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x13a0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018cc958,0,0);
  return;
}



/* Entry: 1018cc958; end: 1018ccba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018cc958(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  *(undefined8 *)(unaff_x22 + 0x13a8) =
       *(undefined8 *)(*(long *)(unaff_x22 + 5000) + _DAT_112dcf500);
  func_0x0001000d224c(unaff_x22 + 0x1358);
  uVar5 = *(ulong *)(unaff_x22 + 0x1358);
  if (uVar5 == 0) {
    uVar6 = 1;
  }
  else {
    param_2 = 0x800000010efbd700;
    uVar2 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010efbd700);
    uVar6 = uVar5;
    func_0x000107c49818(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8();
    param_1 = uVar5;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x13a0);
  lVar9 = *(long *)(unaff_x22 + 0x1398);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1390);
  lVar10 = *(long *)(unaff_x22 + 5000);
  func_0x000107c5eec4(uVar2);
  func_0x000107c5eeac();
  (**(code **)(lVar9 + 8))(uVar2,uVar8);
  FUN_1018cdfbc(param_1,param_2,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU));
  *(ulong *)(unaff_x22 + 0x13b0) = param_1;
  func_0x000107c6142c(param_2);
  func_0x0001000d224c(unaff_x22 + 0x1360);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1360);
  uVar2 = uVar8;
  func_0x000107c50760();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x13b8) = uVar2;
  func_0x000107c615e8(uVar8);
  func_0x00010481c348(0);
  uVar8 = 0;
  func_0x000104759828(0,0,0xc,0,0);
  *(undefined8 *)(unaff_x22 + 0x13c0) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x13c8) = *(undefined8 *)(lVar10 + _DAT_112dcf410);
  func_0x0001000d224c(unaff_x22 + 0x1368);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1368);
  func_0x0001000bf56c();
  uVar2 = uVar7;
  func_0x0001063fa50c(uVar7,uVar8);
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x13d0) = uVar2;
  func_0x000107c61170(uVar8);
  func_0x000107c615e8(uVar7);
  lVar9 = *(long *)(lVar10 + _DAT_112dcf408);
  if (lVar9 != 0) {
    func_0x000107c442c8();
  }
  *(char *)(unaff_x22 + 0x13f4) = (char)lVar9;
  func_0x0001000d224c(unaff_x22 + 0x1330);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1348);
  lVar9 = *(long *)(unaff_x22 + 0x1350);
  func_0x0001000a8868(unaff_x22 + 0x1330,uVar2);
  piVar4 = *(int **)(lVar9 + 8);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x13d8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1018ccba4;
                    /* WARNING: Could not recover jumptable at 0x0001018ccba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(uVar2,lVar9);
  return;
}



/* Entry: 1018ccba4; end: 1018ccbf3;  */

void FUN_1018ccba4(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x13e0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x13d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ccbf4,0,0);
  return;
}



/* Entry: 1018ccbf4; end: 1018ccfc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ccbf4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  
  lVar16 = *(long *)(unaff_x22 + 0x13e0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x13d0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x13c0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x13b0);
  func_0x0001000834e4(unaff_x22 + 0x1330);
  uVar6 = uVar13;
  func_0x000107c5fc48(uVar13,PTR___sSSN_11034da80);
  func_0x000107c6142c(uVar13);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  func_0x0001000d224c(unaff_x22 + 0x1370);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1370);
  func_0x0001000d224c(unaff_x22 + 0x1378);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1378);
  if (lVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x13e0);
    uVar5 = 0;
    func_0x00010427a344(0);
    uVar11 = uVar10;
    func_0x000107c5fc48(uVar10,uVar5);
    func_0x000107c6142c();
  }
  uVar4 = *(undefined1 *)(unaff_x22 + 0x13f4);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x13d0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x13c0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x13b8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x13a0);
  uVar1 = *(undefined4 *)(unaff_x22 + 0x13f0);
  uVar2 = *(undefined4 *)(unaff_x22 + 0x13ec);
  uVar3 = *(undefined4 *)(unaff_x22 + 0x13e8);
  func_0x0001000d224c(unaff_x22 + 0x1380);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1380);
  func_0x0001000bf56c();
  uVar5 = uVar6;
  func_0x0001063f8f54(0,uVar6,uVar15,0x16,uVar17,uVar8,0,0,0,uVar12,uVar13,4,uVar11,1,uVar14,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(uVar14);
  func_0x000107c61170(uVar11);
  func_0x000107c615e8(uVar13);
  func_0x000107c615e8(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar5);
  func_0x000104275300(unaff_x22 + 0x670);
  *(undefined4 *)(unaff_x22 + 0x7e4) = uVar3;
  *(undefined1 *)(unaff_x22 + 0x7e8) = 0;
  func_0x000107c610b4(unaff_x22 + 0x10,unaff_x22 + 0x670,0x198);
  uVar6 = 0;
  func_0x000104277ac8(0);
  func_0x000107c610f8();
  func_0x0001018ce650(unaff_x22 + 0x10,unaff_x22 + 0x808);
  lVar16 = unaff_x22 + 0x10;
  func_0x0001042761c8(lVar16);
  func_0x000107c61170(uVar5);
  func_0x0001018ce68c(unaff_x22 + 0x670);
  func_0x000107c61174(lVar16);
  func_0x000104275300(unaff_x22 + 0x9a0);
  *(undefined4 *)(unaff_x22 + 0xb1c) = uVar2;
  *(undefined1 *)(unaff_x22 + 0xb20) = 0;
  func_0x000107c610b4(unaff_x22 + 0x1a8,unaff_x22 + 0x9a0,0x198);
  func_0x000107c610f8(uVar6);
  func_0x0001018ce650(unaff_x22 + 0x1a8,unaff_x22 + 0xb38);
  lVar7 = unaff_x22 + 0x1a8;
  func_0x0001042761c8(lVar7);
  func_0x000107c61170(lVar16);
  func_0x0001018ce68c(unaff_x22 + 0x9a0);
  func_0x000107c61174(lVar7);
  func_0x000104275300(unaff_x22 + 0xcd0);
  *(undefined4 *)(unaff_x22 + 0xe54) = uVar1;
  *(undefined1 *)(unaff_x22 + 0xe58) = 0;
  func_0x000107c610b4(unaff_x22 + 0x340,unaff_x22 + 0xcd0,0x198);
  func_0x000107c610f8(uVar6);
  func_0x0001018ce650(unaff_x22 + 0x340,unaff_x22 + 0xe68);
  lVar16 = unaff_x22 + 0x340;
  func_0x0001042761c8(lVar16);
  func_0x000107c61170(lVar7);
  lVar7 = unaff_x22 + 0xcd0;
  func_0x0001018ce68c();
  FUN_1018cc7a8();
  func_0x000107c61174(lVar16);
  func_0x000104275300(unaff_x22 + 0x1000);
  *(long *)(unaff_x22 + 0x1190) = lVar7;
  func_0x000107c610b4(unaff_x22 + 0x4d8,unaff_x22 + 0x1000,0x198);
  func_0x000107c610f8(uVar6);
  func_0x0001018ce650(unaff_x22 + 0x4d8,unaff_x22 + 0x1198);
  lVar7 = unaff_x22 + 0x4d8;
  func_0x0001042761c8(lVar7);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar17);
  func_0x0001018ce68c(unaff_x22 + 0x1000);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001018ccfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar7);
  return;
}



/* Entry: 1018ccfc4; end: 1018ccfe3;  */

void FUN_1018ccfc4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined4 *)(unaff_x22 + 0xdc) = param_2;
  *(undefined4 *)(unaff_x22 + 0xe0) = param_3;
  *(undefined4 *)(unaff_x22 + 0xd8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ccfe4,0,0);
  return;
}



/* Entry: 1018ccfe4; end: 1018cd4ef;  */

/* WARNING: Possible PIC construction at 0x0001018cd210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cd224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cd42c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cd36c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cd3b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cd2fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cd314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cd2d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cd2e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cd29c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cd2b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cd320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cd240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018cd250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018cd244) */
/* WARNING: Removing unreachable block (ram,0x0001018cd324) */
/* WARNING: Removing unreachable block (ram,0x0001018cd2b8) */
/* WARNING: Removing unreachable block (ram,0x0001018cd2a0) */
/* WARNING: Removing unreachable block (ram,0x0001018cd2e4) */
/* WARNING: Removing unreachable block (ram,0x0001018cd2d4) */
/* WARNING: Removing unreachable block (ram,0x0001018cd318) */
/* WARNING: Removing unreachable block (ram,0x0001018cd300) */
/* WARNING: Removing unreachable block (ram,0x0001018cd370) */
/* WARNING: Removing unreachable block (ram,0x0001018cd39c) */
/* WARNING: Removing unreachable block (ram,0x0001018cd374) */
/* WARNING: Removing unreachable block (ram,0x0001018cd430) */
/* WARNING: Removing unreachable block (ram,0x0001018cd228) */
/* WARNING: Removing unreachable block (ram,0x0001018cd328) */
/* WARNING: Removing unreachable block (ram,0x0001018cd22c) */
/* WARNING: Removing unreachable block (ram,0x0001018cd3b4) */
/* WARNING: Removing unreachable block (ram,0x0001018cd424) */
/* WARNING: Removing unreachable block (ram,0x0001018cd3d8) */
/* WARNING: Removing unreachable block (ram,0x0001018cc8ec) */
/* WARNING: Removing unreachable block (ram,0x000107c615e0) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0560) */
/* WARNING: Removing unreachable block (ram,0x0001018cd214) */
/* WARNING: Removing unreachable block (ram,0x0001018cd254) */
/* WARNING: Removing unreachable block (ram,0x0001018cd268) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ccfe4(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x22;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  FUN_1018cc608();
  if ((param_1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001018cd290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  uVar7 = *(ulong *)(*(long *)(unaff_x22 + 0xa0) + _DAT_112dcf408);
  if (uVar7 == 0) {
    uVar9 = 0;
    uVar6 = 0;
    uVar8 = 0;
    param_2 = 0;
  }
  else {
    uVar6 = uVar7;
    func_0x000107c43eac();
    func_0x000107c61180();
    if (uVar6 == 0) {
      uVar8 = 0;
      param_2 = 0;
    }
    else {
      uVar8 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
    }
    uVar9 = uVar7;
    func_0x000107c43eb0();
    func_0x000107c61180();
    if (uVar9 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar9;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar9);
    }
    uVar5 = uVar7;
    func_0x000107c43eb4();
    func_0x000107c61180();
    if (uVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar5;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar5);
    }
  }
  *(ulong *)(unaff_x22 + 0xa8) = uVar8;
  *(ulong *)(unaff_x22 + 0xb0) = param_2;
  func_0x0001000d224c(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  if (uVar7 != 0) {
    func_0x000107c43ea8();
    func_0x000107c61180();
    if (uVar7 != 0) goto LAB_1018cd120;
  }
  uVar7 = 0;
LAB_1018cd120:
  uVar1 = uVar4;
  func_0x00010848d1d0(uVar4,uVar7,0);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(uVar4);
  uVar7 = 0;
  func_0x00010848cca0(0,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar7;
    func_0x000107c5f9e8(uVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(uVar7);
  }
  puVar2 = &UNK_11040cdb0;
  func_0x000107c613fc(&UNK_11040cdb0,0x18,7);
  *(undefined **)(unaff_x22 + 0xb8) = puVar2;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *(undefined **)(puVar2 + 0x10) = puVar3;
  if (param_2 != 0) {
    uVar7 = uVar8 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar7 = param_2 >> 0x38 & 0xf;
    }
    if (uVar7 == 0) {
      func_0x000107c6142c(param_2);
    }
    else if (uVar6 == 0) {
      uVar5 = param_2;
      if (uVar9 == 0) {
        uVar5 = 0;
      }
    }
    else if (uVar9 == 0) {
      func_0x000107c6142c(param_2);
      uVar5 = 0;
    }
    else if (*(long *)(uVar6 + 0x10) == *(long *)(uVar9 + 0x10)) {
      FUN_1018ce080(uVar6,uVar9);
      uVar5 = uVar6;
    }
    else {
      func_0x000107c6142c(param_2);
      uVar5 = uVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 1018cd4f0; end: 1018cd53f;  */

void FUN_1018cd4f0(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xd0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018cd540,0,0);
  return;
}



/* Entry: 1018cd540; end: 1018cd6d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018cd540(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  if ((*(byte *)(*(long *)(unaff_x22 + 0xd0) + _DAT_11306a180) & 1) != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c61170(*(long *)(unaff_x22 + 0xd0));
    func_0x000107c61574(uVar1);
    func_0x000107c615e8(uVar9);
    func_0x000107c6142c(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001018cd5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x98;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1018cd6d4;
  lVar3 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar3,0);
  puVar4 = &UNK_11040cdd8;
  func_0x000107c613fc(&UNK_11040cdd8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,uVar7);
  puVar5 = &UNK_11040ce00;
  func_0x000107c613fc(&UNK_11040ce00,0x38,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(long *)(puVar5 + 0x18) = lVar3;
  *(undefined8 *)(puVar5 + 0x20) = uVar9;
  *(undefined8 *)(puVar5 + 0x28) = uVar2;
  puVar8 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(puVar5 + 0x30) = uVar1;
  *(code **)(unaff_x22 + 0x70) = FUN_1018ce054;
  *(undefined **)(unaff_x22 + 0x78) = puVar5;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_1018c5b18;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11040ce18;
  func_0x000107c60bc4(puVar8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61434(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar9);
  func_0x000107c4f524(uVar6);
  func_0x000107c60bd0(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1018cd6d4; end: 1018cd713;  */

void FUN_1018cd6d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018cd714,0,0);
  return;
}



/* Entry: 1018cd714; end: 1018cd773;  */

void FUN_1018cd714(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd0));
  func_0x000107c615e8(uVar2);
  func_0x000107c6142c(uVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001018cd770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 1018cd774; end: 1018cd8ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018cd774(undefined8 param_1,ulong param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if (param_2 >> 0x3c < 0xf) {
    uStack_68 = param_5;
    uStack_60 = param_6;
    func_0x000100de78a0();
    func_0x000100de78a0(param_1,param_2);
    func_0x000107c61434(param_6);
    puVar1 = &uStack_68;
    puVar2 = PTR___sSSN_11034da80;
    func_0x000107c5fbd4(puVar1,PTR___sSSN_11034da80,
                        PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0)
    ;
    func_0x000107c61428(param_7 + 0x10,&uStack_68,0,0);
    uVar4 = *(undefined8 *)(param_7 + 0x10);
    func_0x000103deb1ac(0);
    func_0x000107c610f8();
    func_0x000107c61434(uVar4);
    uVar3 = param_1;
    func_0x000103dead74(param_1,param_2,puVar1,puVar2,uVar4);
    **(undefined8 **)(*(long *)(param_4 + 0x40) + 0x28) = uVar3;
    func_0x000107c6144c(param_4);
    func_0x0001000b44c0(param_1,param_2);
  }
  else {
    func_0x000107c61428(param_3 + 0x10,&uStack_68,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      uVar3 = *(undefined8 *)(param_3 + _DAT_112dcf418);
      func_0x000107c61174(uVar3);
      func_0x000107c61170(param_3);
      func_0x00010541dd18(uVar3,1);
      func_0x000107c61170(uVar3);
    }
    **(undefined8 **)(*(long *)(param_4 + 0x40) + 0x28) = 0;
    func_0x000107c6144c(param_4);
  }
  return;
}



/* Entry: 1018cd8f0; end: 1018cda3f; -[_TtC47SponsoredSnapFeedRequestMetadataServiceProvider40SponsoredSnapFeedRequestMetadataProvider getProtoAdRequestMetadataWithNumChatsPresent:numPinnedChats:numUnreadConversations:completionHandler:] */

void FUN_1018cd8f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11040ce60;
  func_0x000107c613fc(&UNK_11040ce60,0x30,7);
  *(undefined4 *)(puVar1 + 0x10) = param_3;
  *(undefined4 *)(puVar1 + 0x14) = param_4;
  *(undefined4 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffb0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11040ce88;
  func_0x000107c613fc(&UNK_11040ce88,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d991098;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11040ceb0;
  func_0x000107c613fc(&UNK_11040ceb0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d9910a8;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&UNK_10d9910b8,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 1018cda40; end: 1018cdac3;  */

void FUN_1018cda40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  long param_5)

{
  long unaff_x22;
  long *plVar1;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  *(long *)(unaff_x22 + 0x18) = param_5;
  plVar1 = (long *)0xf0;
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1018cdac4;
  plVar1[0x14] = param_5;
  *(undefined4 *)((long)plVar1 + 0xdc) = param_2;
  *(undefined4 *)(plVar1 + 0x1c) = param_3;
  *(undefined4 *)(plVar1 + 0x1b) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ccfe4,0,0);
  return;
}



/* Entry: 1018cdac4; end: 1018cdb2f;  */

void FUN_1018cdac4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x10);
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  func_0x000107c61170(uVar1);
  (**(code **)(lVar3 + 0x10))(lVar3,param_1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001018cdb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Entry: 1018cdb30; end: 1018cdbab;  */

void FUN_1018cdb30(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018cdb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018cdbac; end: 1018cdfbb;  */

void FUN_1018cdbac(long param_1,long param_2,uint param_3,long *param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong *puVar17;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar12 = *(long *)(param_1 + 0x10);
  func_0x000107c61434();
  func_0x000107c61434(param_2);
  if ((lVar12 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    uVar8 = *(ulong *)(param_1 + 0x20);
    uVar15 = *(ulong *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    uVar16 = *(undefined8 *)(param_2 + 0x28);
    lVar11 = *param_4;
    func_0x000107c61434(uVar15);
    func_0x000107c61434(uVar16);
    uVar13 = uVar8;
    uVar6 = uVar15;
    func_0x000100029284();
    lVar7 = *(long *)(lVar11 + 0x10);
    uVar9 = (ulong)~(uint)uVar6 & 1;
    lVar12 = lVar7 + uVar9;
    if (SCARRY8(lVar7,uVar9)) {
LAB_1018cdef0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1018cdef4);
      (*pcVar4)();
    }
    if (*(long *)(lVar11 + 0x18) < lVar12) {
      func_0x0001001833c8(lVar12,param_3 & 1);
      uVar13 = uVar8;
      uVar9 = uVar15;
      func_0x000100029284();
      if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
LAB_1018cdf00:
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1018cdf10);
        (*pcVar4)();
      }
    }
    else if ((param_3 & 1) == 0) {
      func_0x000100184498();
    }
    if ((uVar6 & 1) != 0) {
LAB_1018cdc94:
      puVar5 = PTR___ss11_MergeErrorON_11034e460;
      func_0x000107c613f8(PTR___ss11_MergeErrorON_11034e460,PTR___ss11_MergeErrorOs0B0sWP_11034e468,
                          0,0);
      func_0x000107c61654();
      func_0x000107c614b0(puVar5);
      uVar13 = 0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c6147c();
      if ((uVar13 & 1) == 0) {
        func_0x000107c61430(param_2,2);
        func_0x000107c61430(param_1,2);
        func_0x000107c6142c(uVar15);
        func_0x000107c6142c(uVar16);
        func_0x000107c614ac(puVar5);
        return;
      }
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x1e);
      func_0x000107c5fb78(0xd00000000000001b,0x800000010efbd6e0);
      uStack_80 = uVar8;
      uStack_78 = uVar15;
      func_0x000107c603d0(&uStack_80,&uStack_70,PTR___sSSN_11034da80,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x27,0xe100000000000000);
      func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,
                          "Swift/arm64e-apple-ios.swiftinterface",0x25,2,0x3c44,0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1018cdfbc);
      (*pcVar4)();
    }
    lVar7 = *param_4;
    lVar12 = lVar7 + (uVar13 >> 6) * 8;
    *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar13 & 0x3f);
    puVar17 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar13 * 0x10);
    *puVar17 = uVar8;
    puVar17[1] = uVar15;
    puVar14 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar13 * 0x10);
    *puVar14 = uVar3;
    puVar14[1] = uVar16;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_1018cdef4:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1018cdef8);
      (*pcVar4)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    uVar8 = *(ulong *)(param_1 + 0x10);
    if (uVar8 != 1) {
      puVar17 = (ulong *)(param_1 + 0x38);
      puVar14 = (undefined8 *)(param_2 + 0x38);
      uVar13 = 1;
      do {
        if (uVar8 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1018cdefc);
          (*pcVar4)();
        }
        if (uVar13 == *(ulong *)(param_2 + 0x10)) break;
        if (*(ulong *)(param_2 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1018cdf00);
          (*pcVar4)();
        }
        uVar8 = puVar17[-1];
        uVar15 = *puVar17;
        uVar3 = puVar14[-1];
        uVar16 = *puVar14;
        lVar11 = *param_4;
        func_0x000107c61434(uVar15);
        func_0x000107c61434(uVar16);
        uVar6 = uVar8;
        uVar9 = uVar15;
        func_0x000100029284();
        lVar7 = *(long *)(lVar11 + 0x10);
        uVar10 = (ulong)~(uint)uVar9 & 1;
        lVar12 = lVar7 + uVar10;
        if (SCARRY8(lVar7,uVar10)) goto LAB_1018cdef0;
        if (*(long *)(lVar11 + 0x18) < lVar12) {
          func_0x0001001833c8(lVar12,1);
          uVar6 = uVar8;
          uVar10 = uVar15;
          func_0x000100029284();
          if (((uint)uVar9 & 1) != ((uint)uVar10 & 1)) goto LAB_1018cdf00;
        }
        if ((uVar9 & 1) != 0) goto LAB_1018cdc94;
        lVar7 = *param_4;
        lVar12 = lVar7 + (uVar6 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar6 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar6 * 0x10);
        *puVar1 = uVar8;
        puVar1[1] = uVar15;
        puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar6 * 0x10);
        *puVar2 = uVar3;
        puVar2[1] = uVar16;
        if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_1018cdef4;
        uVar13 = uVar13 + 1;
        *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
        uVar8 = *(ulong *)(param_1 + 0x10);
        puVar17 = puVar17 + 2;
        puVar14 = puVar14 + 2;
      } while (uVar13 != uVar8);
    }
  }
  func_0x000107c61430(param_2,2);
  func_0x000107c61430(param_1,2);
  return;
}



/* Entry: 1018cdfbc; end: 1018ce053;  */

undefined * FUN_1018cdfbc(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018ce054);
    (*pcVar1)();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_3 != (undefined *)0x0) {
    puVar2 = param_3;
    func_0x000107c5fc70(param_3,PTR___sSSN_11034da80);
    *(undefined **)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x20) = param_1;
    *(undefined8 *)(puVar2 + 0x28) = param_2;
    param_3 = param_3 + -1;
    if (param_3 != (undefined *)0x0) {
      puVar3 = (undefined8 *)(puVar2 + 0x38);
      do {
        puVar3[-1] = param_1;
        *puVar3 = param_2;
        func_0x000107c61434(param_2);
        puVar3 = puVar3 + 2;
        param_3 = param_3 + -1;
      } while (param_3 != (undefined *)0x0);
    }
    func_0x000107c61434(param_2);
  }
  return puVar2;
}



/* Entry: 1018ce054; end: 1018ce07f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ce054(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  if (param_2 >> 0x3c < 0xf) {
    uStack_60 = uVar6;
    func_0x000100de78a0();
    func_0x000100de78a0(param_1,param_2);
    func_0x000107c61434(uVar6);
    puVar3 = &uStack_68;
    puVar4 = PTR___sSSN_11034da80;
    func_0x000107c5fbd4(puVar3,PTR___sSSN_11034da80,
                        PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0)
    ;
    func_0x000107c61428(lVar5 + 0x10,&uStack_68,0,0);
    uVar7 = *(undefined8 *)(lVar5 + 0x10);
    func_0x000103deb1ac(0);
    func_0x000107c610f8();
    func_0x000107c61434(uVar7);
    uVar6 = param_1;
    func_0x000103dead74(param_1,param_2,puVar3,puVar4,uVar7);
    **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = uVar6;
    func_0x000107c6144c(lVar1);
    func_0x0001000b44c0(param_1,param_2);
  }
  else {
    func_0x000107c61428(lVar2 + 0x10,&uStack_68,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      uVar6 = *(undefined8 *)(lVar2 + _DAT_112dcf418);
      func_0x000107c61174(uVar6);
      func_0x000107c61170(lVar2);
      func_0x00010541dd18(uVar6,1);
      func_0x000107c61170(uVar6);
    }
    **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = 0;
    func_0x000107c6144c(lVar1);
  }
  return;
}



/* Entry: 1018ce080; end: 1018ce147;  */

/* WARNING: Removing unreachable block (ram,0x0001018ce128) */

undefined * FUN_1018ce080(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_38;
  
  puVar2 = *(undefined **)(param_2 + 0x10);
  if (*(undefined **)(param_1 + 0x10) <= *(undefined **)(param_2 + 0x10)) {
    puVar2 = *(undefined **)(param_1 + 0x10);
  }
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar2 != (undefined *)0x0) {
    uVar1 = 0x112d38330;
    func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
    func_0x000107c60498(puVar2,uVar1);
    puStack_38 = puVar2;
  }
  func_0x000107c61434(param_1);
  func_0x000107c61434(param_2);
  FUN_1018cdbac(param_1,param_2,1,&puStack_38);
  return puStack_38;
}



/* Entry: 1018ce148; end: 1018ce3bb;  */

void FUN_1018ce148(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar17 = 0;
  while( true ) {
    while (uVar18 != 0) {
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = lVar17 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11);
      uStack_80 = *puVar1;
      uVar3 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11);
      uStack_70 = *puVar1;
      uVar4 = puVar1[1];
      uStack_78 = uVar3;
      uStack_68 = uVar4;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar4);
      (*param_2)(&uStack_a0,&uStack_80);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar3);
      uVar4 = uStack_88;
      uVar3 = uStack_90;
      uVar5 = uStack_98;
      uVar11 = uStack_a0;
      lVar15 = *param_5;
      uVar9 = uStack_a0;
      uVar10 = uStack_98;
      func_0x000100029284();
      lVar12 = *(long *)(lVar15 + 0x10);
      uVar14 = (ulong)~(uint)uVar10 & 1;
      lVar16 = lVar12 + uVar14;
      if (SCARRY8(lVar12,uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1018ce3a8);
        (*pcVar6)();
      }
      if (*(long *)(lVar15 + 0x18) < lVar16) {
        func_0x0001001833c8(lVar16,param_4 & 1);
        uVar9 = uVar11;
        uVar14 = uVar5;
        func_0x000100029284();
        if (((uint)uVar10 & 1) != ((uint)uVar14 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1018ce3bc);
          (*pcVar6)();
        }
      }
      else if ((param_4 & 1) == 0) {
        func_0x000100184498();
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar16 = *param_5;
      if ((uVar10 & 1) == 0) {
        lVar12 = lVar16 + (uVar9 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        if (SCARRY8(*(long *)(lVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1018ce3ac);
          (*pcVar6)();
        }
        *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar5);
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        uVar8 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        func_0x000107c6142c(uVar8);
      }
      param_4 = 1;
    }
    bVar7 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1018ce3a4);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar17) break;
    uVar18 = ((ulong *)(param_1 + 0x40))[lVar17];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1018ce3bc; end: 1018ce3fb;  */

void FUN_1018ce3bc(void)

{
  func_0x000107c61168(&PTR_PTR_112dcf478);
  return;
}



/* Entry: 1018ce3fc; end: 1018ce47b;  */

void FUN_1018ce3fc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  long *plVar7;
  
  uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined4 *)(unaff_x20 + 0x14);
  uVar4 = *(undefined4 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1018ce47c;
  plVar6[2] = lVar3;
  plVar6[3] = lVar5;
  plVar7 = (long *)0xf0;
  func_0x000107c61174();
  func_0x000107c615b8();
  plVar6[4] = (long)plVar7;
  *plVar7 = (long)plVar6;
  plVar7[1] = (long)FUN_1018cdac4;
  plVar7[0x14] = lVar5;
  *(undefined4 *)((long)plVar7 + 0xdc) = uVar2;
  *(undefined4 *)(plVar7 + 0x1c) = uVar4;
  *(undefined4 *)(plVar7 + 0x1b) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ccfe4,0,0);
  return;
}



/* Entry: 1018ce47c; end: 1018ce4b7;  */

void FUN_1018ce47c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018ce4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018ce4b8; end: 1018ce52f;  */

void FUN_1018ce4b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018ce6cc;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018ce530; end: 1018ce55b;  */

void FUN_1018ce530(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1018ce55c; end: 1018ce5df;  */

void FUN_1018ce55c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018ce6d0;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018ce5e0; end: 1018ce6bf;  */

void FUN_1018ce5e0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1018ce6c0; end: 1018ce6d3;  */

void FUN_1018ce6c0(long param_1,long param_2)

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



/* Entry: 1018ce6d4; end: 1018ce77b;  */

long FUN_1018ce6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x20;
  
  func_0x000107c61170(param_8);
  func_0x000107c613fc();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_10;
  *(undefined8 *)(unaff_x20 + 0x40) = param_9;
  *(undefined8 *)(unaff_x20 + 0x50) = param_11;
  return unaff_x20;
}



/* Entry: 1018ce77c; end: 1018ce7f7;  */

/* WARNING: Possible PIC construction at 0x0001018ce7d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018ce7d8) */

void FUN_1018ce77c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  FUN_1018ce3bc();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11040ce40;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1018ce7f8; end: 1018ce803;  */

/* WARNING: Possible PIC construction at 0x0001018ce7d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018ce7d8) */

void FUN_1018ce7f8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  FUN_1018ce3bc();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_11040ce40;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1018ce804; end: 1018ce997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ce804(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126a7d28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = 0;
  func_0x0001018ce3dc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112dcf4f0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112dcf4f8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112dcf410) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112dcf500) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112dcf508) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112dcf408) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112dcf420) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112dcf428) = param_9;
  *(undefined **)(lVar3 + _DAT_112dcf418) = puVar1;
  *(undefined8 *)(lVar3 + _DAT_112dcf510) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112dcf518) = param_11;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1018ce998; end: 1018cea9b;  */

void FUN_1018ce998(void)

{
  long unaff_x20;
  
  FUN_1018ce804(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1018cea9c; end: 1018ceabf;  */

void FUN_1018cea9c(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010040e9b4();
  *param_1 = param_2;
  return;
}



/* Entry: 1018ceac0; end: 1018ceaf3;  */

void FUN_1018ceac0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018ceaf4; end: 1018ceb53; -[SCAdWebviewOperationEventRepositoryImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001018ceb34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018ceb38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ceaf4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dcf678));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dcf680));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dcf6a0 + 8))
  ;
  return;
}



/* Entry: 1018ceb54; end: 1018cec5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ceb54(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = param_1;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_adWebviewOperationEventObservabl_11259b328);
  if ((uVar1 & 1) != 0) {
    func_0x000107c3d558(param_1);
    func_0x000107c61180();
    puVar2 = &UNK_11040d010;
    func_0x000107c613fc(&UNK_11040d010,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_40 = FUN_1018cec60;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_1018cf064;
    puStack_48 = &UNK_11040d028;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    uVar1 = param_1;
    func_0x000107c5c320(param_1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    func_0x000107c3e924(uVar1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1018cec60; end: 1018cec63;  */

void FUN_1018cec60(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1018cec64(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1018cec64; end: 1018cf063;  */

/* WARNING: Removing unreachable block (ram,0x0001018cece4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018cec64(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar5 = param_1;
  func_0x000107c30ca8();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar5);
  func_0x000107c610f8(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
  lVar5 = lVar6;
  func_0x00010130c4a4(lVar6,param_2);
  func_0x00010006c090(lVar6,param_2);
  func_0x000107c57e2c(lVar5);
  lVar6 = lVar5;
  func_0x000107c41478();
  func_0x000107c61180();
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c60234(&uStack_b0);
    func_0x000107c615e8(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000107c61170(lVar5);
    func_0x00010006e7f4(&uStack_90);
    return;
  }
  uVar7 = 0;
  func_0x00010464ec90(0);
  plVar8 = &lStack_b8;
  puVar13 = &uStack_90;
  func_0x000107c6147c(plVar8,puVar13,PTR___sypN_11034f1a8 + 8,uVar7,6);
  lVar6 = _DAT_112dcf680;
  if (((ulong)plVar8 & 1) == 0) goto LAB_1018cf03c;
  puVar1 = (ulong *)(lStack_b8 + _DAT_113815020);
  puVar11 = (undefined8 *)puVar1[1];
  lVar9 = lStack_b8;
  if (puVar11 != (undefined8 *)0x0) {
    if (*(long *)(unaff_x20 + _DAT_112dcf680) == 0) {
LAB_1018cee2c:
      puVar11 = puVar13;
      *(undefined8 *)(unaff_x20 + _DAT_112dcf698) = 0;
    }
    else {
      uVar14 = *puVar1;
      puVar2 = (ulong *)(*(long *)(unaff_x20 + _DAT_112dcf680) + _DAT_113815020);
      uVar3 = *puVar2;
      puVar4 = (undefined8 *)puVar2[1];
      func_0x000107c61434(puVar4);
      if (puVar4 == (undefined8 *)0x0) goto LAB_1018cee2c;
      if ((uVar14 == uVar3) && (puVar11 == puVar4)) {
        func_0x000107c6142c(puVar4);
        puVar11 = puVar13;
      }
      else {
        func_0x000107c605b8(uVar14,puVar11,uVar3,puVar4,0);
        func_0x000107c6142c(puVar4);
        puVar13 = puVar11;
        if ((uVar14 & 1) == 0) goto LAB_1018cee2c;
      }
    }
    puVar13 = (undefined8 *)puVar1[1];
    if (*(long *)(unaff_x20 + lVar6) == 0) {
      if (puVar13 == (undefined8 *)0x0) goto LAB_1018ceec8;
    }
    else {
      uVar14 = *puVar1;
      puVar1 = (ulong *)(*(long *)(unaff_x20 + lVar6) + _DAT_113815020);
      uVar3 = *puVar1;
      puVar4 = (undefined8 *)puVar1[1];
      func_0x000107c61434(puVar4);
      if (puVar13 == (undefined8 *)0x0) {
        if (puVar4 == (undefined8 *)0x0) goto LAB_1018ceec8;
        func_0x000107c6142c(puVar4);
      }
      else if (puVar4 != (undefined8 *)0x0) {
        if ((uVar14 == uVar3) && (puVar13 == puVar4)) {
          func_0x000107c6142c(puVar4);
        }
        else {
          func_0x000107c605b8(uVar14,puVar13,uVar3,puVar4,0);
          func_0x000107c6142c(puVar4);
          puVar11 = puVar13;
          if ((uVar14 & 1) == 0) goto LAB_1018ceee4;
        }
LAB_1018ceec8:
        lVar10 = param_1;
        func_0x000107c30c9c();
        if ((int)lVar10 == 7) {
          *(undefined8 *)(unaff_x20 + _DAT_112dcf698) = 0;
        }
      }
    }
LAB_1018ceee4:
    uVar7 = *(undefined8 *)(unaff_x20 + lVar6);
    *(long *)(unaff_x20 + lVar6) = lStack_b8;
    func_0x000107c61174(lStack_b8);
    func_0x000107c61170(uVar7);
    lVar10 = param_1;
    func_0x000107c30c9c();
    lVar6 = _DAT_112dcf688;
    *(long *)(unaff_x20 + _DAT_112dcf688) = lVar10;
    lVar10 = param_1;
    func_0x000107c30ca0();
    func_0x000107c61180();
    if (lVar10 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = lVar10;
      func_0x000107c49820();
      func_0x000107c61170(lVar10);
    }
    *(long *)(unaff_x20 + _DAT_112dcf690) = lVar12;
    lVar10 = param_1;
    func_0x000107c30cac();
    func_0x000107c61180();
    lVar12 = lVar10;
    func_0x000107c5faec();
    puVar13 = puVar11;
    func_0x000107c61170(lVar10);
    plVar8 = (long *)(unaff_x20 + _DAT_112dcf6a0);
    lVar10 = plVar8[1];
    *plVar8 = lVar12;
    plVar8[1] = (long)puVar11;
    func_0x000107c6142c(lVar10);
    lVar10 = param_1;
    func_0x000107c30cb0();
    func_0x000107c61180();
    if (lVar10 == 0) {
      lVar12 = 0;
      puVar13 = (undefined8 *)0x0;
    }
    else {
      lVar12 = lVar10;
      func_0x000107c5faec();
      func_0x000107c61170(lVar10);
    }
    plVar8 = (long *)(unaff_x20 + _DAT_112dcf6a8);
    lVar10 = plVar8[1];
    *plVar8 = lVar12;
    plVar8[1] = (long)puVar13;
    func_0x000107c6142c(lVar10);
    if (*(int *)(unaff_x20 + lVar6) == 8) {
      func_0x000107c30ca4();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar6 = param_1;
        func_0x000107c49820();
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(param_1);
        *(long *)(unaff_x20 + _DAT_112dcf698) = lVar6;
        return;
      }
    }
  }
  func_0x000107c61170(lVar9);
LAB_1018cf03c:
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 1018cf064; end: 1018cf0af;  */

void FUN_1018cf064(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1018cf0b0; end: 1018cf0cb;  */

void FUN_1018cf0b0(long param_1,long param_2)

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



/* Entry: 1018cf0cc; end: 1018cf0d7; -[SCAdWebviewOperationEventRepositoryImpl beginObservationWithAdUnifiedEventStreams:] */

void FUN_1018cf0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1018ceb54(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018cf0d8; end: 1018cf1c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018cf0d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c3d558();
  func_0x000107c61180();
  puVar1 = &UNK_11040d010;
  func_0x000107c613fc(&UNK_11040d010,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uStack_40 = 0x1018cf95c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1018cf064;
  puStack_48 = &UNK_11040d050;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar3 = param_1;
  func_0x000107c5c320(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  func_0x000107c3e924(uVar3);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1018cf1c4; end: 1018cf21b;  */

void FUN_1018cf1c4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1018cec64(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1018cf21c; end: 1018cf227; -[SCAdWebviewOperationEventRepositoryImpl beginObservationWithAdWebviewEventStreams:] */

void FUN_1018cf21c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1018cf0d8(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018cf228; end: 1018cf27b;  */

void FUN_1018cf228(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018cf27c; end: 1018cf35b; -[SCAdWebviewOperationEventRepositoryImpl getMetaInfoByProject:subProject:description:] */

void FUN_1018cf27c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c5faec(param_3);
  lVar1 = param_2;
  func_0x000107c5faec(param_4);
  lVar2 = 0;
  if (param_5 != 0) {
    lVar2 = lVar1;
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_1);
  lVar3 = param_2;
  FUN_1018cf35c(param_3,param_2,param_4,lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar1);
  func_0x000107c6142c(lVar2);
  if (lVar3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,lVar3);
    func_0x000107c6142c(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1018cf35c; end: 1018cf8b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1018cf35c(ulong param_1,ulong param_2,ulong param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = (ulong *)0x0;
  func_0x0001046305a8();
  puVar5 = puVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar4[-1] + 0x40));
  lVar7 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar7 - extraout_x12;
  func_0x00010406fc98();
  if ((((param_1 == *puVar5 && param_2 == puVar5[1]) ||
       (func_0x000107c605b8(param_1,param_2,*puVar5,puVar5[1],0), (param_1 & 1) != 0)) &&
      (((param_3 == 0x6976626557206441 && (param_4 == -0x15ffffffffff889b)) ||
       (func_0x000107c605b8(param_3,param_4,0x6976626557206441,0xea00000000007765,0),
       (param_3 & 1) != 0)))) && (lVar6 = *(long *)(unaff_x20 + _DAT_112dcf680), lVar6 != 0)) {
    lVar11 = ((undefined8 *)(lVar6 + _DAT_113815020))[1];
    if (lVar11 != 0) {
      uVar13 = *(undefined8 *)(lVar6 + _DAT_113815020);
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c61174();
      func_0x000107c61434(lVar11);
      func_0x000107c602fc(0xe4);
      func_0x000107c5fb78(0xd000000000000036,0x800000010efbd7c0);
      func_0x000107c5fb78(uVar13,lVar11);
      func_0x000107c6142c(lVar11);
      func_0x000107c5fb78(0xd00000000000001c,0x800000010efbd800);
      uStack_80 = *(undefined8 *)(unaff_x20 + _DAT_112dcf688);
      uVar12 = 0xe500000000000000;
      uVar13 = 0x7465736e55;
      switch(uStack_80) {
      case 0:
        break;
      case 1:
        uVar12 = 0xe400000000000000;
        uVar13 = 0x74696e49;
        break;
      case 2:
        uVar12 = 0xe800000000000000;
        uVar13 = 0x64616f6c204c5255;
        break;
      case 3:
        uVar12 = 0xe900000000000064;
        uVar13 = 0x616f6c204c4d5448;
        break;
      case 4:
        uVar12 = 0xee006e6565726373;
        uVar13 = 0x206e6f2077656956;
        break;
      case 5:
        uVar12 = 0xef6e656572637320;
        uVar13 = 0x66666f2077656956;
        break;
      case 6:
        uVar12 = 0x800000010efbd8e0;
        uVar13 = 0xd000000000000010;
        break;
      case 7:
        uVar12 = 0x800000010efbd8c0;
        uVar13 = 0xd000000000000011;
        break;
      case 8:
        uVar12 = 0xef6c696166206e6f;
        uVar13 = 0x697461676976614e;
        break;
      case 9:
        uVar12 = 0xee006e65706f206b;
        uVar13 = 0x6e696c2070656544;
        break;
      case 10:
        uVar12 = 0xe800000000000000;
        uVar13 = 0x6e65706f20425845;
        break;
      case 0xb:
        uVar13 = 0x7465736552;
        break;
      case 0xc:
        uVar12 = 0xe700000000000000;
        uVar13 = 0x636f6c6c616544;
        break;
      default:
        func_0x000107c60614(&UNK_110798e50,&uStack_80,&UNK_110798e50,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1018cf8b4);
        (*pcVar3)();
      }
      func_0x000107c5fb78(uVar13,uVar12);
      func_0x000107c6142c(uVar12);
      func_0x000107c5fb78(0xd000000000000018,0x800000010efbd820);
      puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      puVar2 = PTR___sSiN_11034deb0;
      uStack_80 = *(undefined8 *)(unaff_x20 + _DAT_112dcf690);
      puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar8);
      func_0x000107c5fb78(0xd00000000000001a,0x800000010efbd840);
      uStack_80 = *(undefined8 *)(unaff_x20 + _DAT_112dcf698);
      func_0x000107c6057c(puVar2,puVar9);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar9);
      func_0x000107c5fb78(0xd000000000000017,0x800000010efbd860);
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112dcf6a0);
      uVar12 = ((undefined8 *)(unaff_x20 + _DAT_112dcf6a0))[1];
      func_0x000107c61434(uVar12);
      func_0x000107c5fb78(uVar13,uVar12);
      func_0x000107c6142c(uVar12);
      func_0x000107c5fb78(0xd00000000000001a,0x800000010efbd880);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcf6a8);
      uStack_78 = puVar1[1];
      uStack_80 = *puVar1;
      func_0x000107c61434(puVar1[1]);
      uVar13 = 0x112d35ff8;
      func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
      func_0x000107c5fb18(&uStack_80,uVar13);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar13);
      func_0x000107c5fb78(0xd00000000000001a,0x800000010efbd8a0);
      func_0x000107c61174(lVar6);
      func_0x0001046465c0(lVar10);
      FUN_1018cf8d4(lVar10,lVar7);
      func_0x000107c5fb18(lVar7,puVar4);
      func_0x0001018cf918(lVar10);
      func_0x000107c5fb78(lVar7,puVar4);
      func_0x000107c6142c(puVar4);
      func_0x000107c5fb78(0x7d65646f637b0a,0xe700000000000000);
      func_0x000107c61170(lVar6);
      goto LAB_1018cf870;
    }
  }
  uStack_70 = 0;
  uStack_68 = 0;
LAB_1018cf870:
  auVar14._8_8_ = uStack_68;
  auVar14._0_8_ = uStack_70;
  return auVar14;
}



/* Entry: 1018cf8b4; end: 1018cf8d3;  */

void FUN_1018cf8b4(void)

{
  func_0x000107c61168(&PTR_PTR_1127ea970);
  return;
}



/* Entry: 1018cf8d4; end: 1018cf953;  */

undefined8 FUN_1018cf8d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001046305a8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1018cf954; end: 1018cf95f;  */

void FUN_1018cf954(long param_1,long param_2)

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



/* Entry: 1018cf960; end: 1018cfa9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018cf960(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar1 = _DAT_112dcf6d8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001018d0dc0();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  (**(code **)(lVar5 + 0x68))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar2);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efbd900);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined **)(unaff_x20 + _DAT_112dcf6e0) = puVar3;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1018cfa9c; end: 1018cfabb; -[AdNetworkResponseLoggerImpl init] */

void FUN_1018cfa9c(void)

{
  FUN_1018cf960();
  return;
}



/* Entry: 1018cfabc; end: 1018cff67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018cfabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_a8 = param_1;
  uStack_a0 = param_4;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  lVar10 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = auStack_b0 + -(lVar10 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar9 - extraout_x12;
  func_0x000107c5eea0(lVar6);
  uStack_98 = *(undefined8 *)(unaff_x20 + _DAT_112dcf6e0);
  puVar2 = &UNK_11040d130;
  func_0x000107c613fc(&UNK_11040d130,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  (**(code **)(lVar8 + 0x10))(puVar9,lVar6,lVar1);
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar7 = uVar5 + 0x38 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &UNK_11040d158;
  func_0x000107c613fc(&UNK_11040d158,uVar7 + lVar10,uVar5 | 7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uStack_a8;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(undefined8 *)(puVar3 + 0x30) = uStack_a0;
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar7,puVar9,lVar1);
  pcStack_70 = FUN_1018d0eac;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11040d170;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_68;
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uStack_98);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lVar8 + 8))(lVar6,lVar1);
  return;
}



/* Entry: 1018cff68; end: 1018d0107; -[AdNetworkResponseLoggerImpl logNetworkRequestInfo:adIdentifiers:logContextType:] */

/* WARNING: Possible PIC construction at 0x0001018cffe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018cffe4) */

void FUN_1018cff68(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  if (param_4 != 0) {
    func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  }
  func_0x000107c61174(param_1);
  FUN_1018cfabc(param_3,param_2,param_4,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1018d0108; end: 1018d057b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d0108(long param_1,code *param_2,ulong param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long alStack_c0 [2];
  code *pcStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar3 = 0;
  func_0x000107c5fb10();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = (long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_98 = lVar15;
  FUN_1018d12d8();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar15 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = _DAT_112dcf6d8;
  lVar16 = lVar15 - extraout_x12;
  if (param_2 == (code *)0x0) {
    return;
  }
  lStack_a0 = lVar14;
  func_0x000107c61428(unaff_x20 + _DAT_112dcf6d8,&uStack_78,0x20,0);
  lVar13 = *(long *)(unaff_x20 + lVar13);
  if (*(long *)(lVar13 + 0x10) == 0) {
    func_0x000107c6157c(param_3);
  }
  else {
    uVar9 = param_3;
    func_0x00010130f950(param_2);
    func_0x000107c61434(lVar13);
    FUN_1018d0678();
    if ((uVar9 & 1) != 0) {
      lVar14 = *(long *)(*(long *)(lVar13 + 0x38) + param_1 * 8);
      func_0x000107c61434(lVar14);
      func_0x000107c614a8(&uStack_78);
      func_0x000107c6142c(lVar13);
      lVar13 = *(long *)(lVar14 + 0x10);
      if (lVar13 != 0) {
        puVar5 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
        alStack_c0[1] = lVar3;
        pcStack_b0 = param_2;
        uStack_a8 = param_3;
        func_0x000107c610f8();
        func_0x000107c453e4();
        uVar6 = 0xd000000000000017;
        func_0x000107c5fadc(0xd000000000000017,0x800000010efbd920);
        puStack_90 = puVar5;
        func_0x000107c53e28(puVar5);
        func_0x000107c61170(uVar6);
        uStack_78 = 0xd00000000000002d;
        uStack_70 = 0x800000010efbd940;
        lVar3 = lVar14 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
        lVar12 = *(long *)(lVar12 + 0x48);
        alStack_c0[0] = lVar14;
        do {
          FUN_1018d13a4(lVar3,lVar16);
          lVar14 = lVar16;
          lVar10 = lVar15;
          func_0x0001018d13e8(lVar16,lVar15);
          lStack_88 = *(long *)(lVar15 + *(int *)(lVar4 + 0x18));
          if (*(long *)(lStack_88 + 0x10) != 0) {
            uVar6 = 0x112d38270;
            func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
            uVar8 = uVar6;
            func_0x00010011d734();
            uVar11 = 0xef3d726569666974;
            func_0x000107c5fa80(0x6e65644964615b5d,0xef3d726569666974,uVar6,uVar8);
            lStack_88 = 0x746e65644964615b;
            lStack_80 = 0xee003d7265696669;
            func_0x000107c5fb78();
            func_0x000107c6142c(uVar11);
            lVar14 = lStack_80;
            func_0x000107c61434(lStack_80);
            func_0x000107c5fb78(0x5d,0xe100000000000000);
            func_0x000107c6142c(lVar14);
            lVar10 = lStack_80;
            lVar14 = lStack_88;
            lStack_88 = 10;
            lStack_80 = -0x1f00000000000000;
            func_0x000107c5fb78(lVar14,lVar10);
            func_0x000107c6142c(lVar10);
            lVar14 = lStack_80;
            lVar10 = lStack_80;
            func_0x000107c5fb78(lStack_88,lStack_80);
            func_0x000107c6142c(lVar14);
          }
          lStack_88 = 10;
          lStack_80 = 0xe100000000000000;
          func_0x000107c5ee70();
          puVar5 = puStack_90;
          func_0x000107c5c1b8(puStack_90);
          func_0x000107c61180();
          func_0x000107c61170(lVar14);
          puVar7 = puVar5;
          func_0x000107c5faec(puVar5);
          func_0x000107c61170(puVar5);
          func_0x000107c5fb78(puVar7,lVar10);
          func_0x000107c6142c(lVar10);
          func_0x000107c5fb78(10,0xe100000000000000);
          puVar1 = (undefined8 *)(lVar15 + *(int *)(lVar4 + 0x14));
          func_0x000107c5fb78(*puVar1,puVar1[1]);
          lVar14 = lStack_80;
          func_0x000107c5fb78(lStack_88,lStack_80);
          func_0x000107c6142c(lVar14);
          func_0x0001018d142c(lVar15);
          lVar3 = lVar3 + lVar12;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        lVar3 = alStack_c0[0];
        func_0x000107c6142c(alStack_c0[0]);
        lVar13 = lStack_98;
        func_0x000107c5fb04(lStack_98);
        func_0x000100e8b654();
        uVar6 = 0;
        lVar4 = lVar13;
        func_0x000107c60214(lVar13,0,PTR___sSSN_11034da80,lVar3);
        (**(code **)(lStack_a0 + 8))(lVar13,alStack_c0[1]);
        uVar9 = uStack_a8;
        pcVar2 = pcStack_b0;
        (*pcStack_b0)(lVar4,uVar6);
        func_0x000107c61170(puStack_90);
        func_0x0001000b44c0(lVar4,uVar6);
        func_0x00010130f8ec(pcVar2,uVar9);
        func_0x000107c6142c(uStack_70);
        return;
      }
      func_0x000107c6142c(lVar14);
      goto LAB_1018d04ac;
    }
    func_0x000107c6142c(lVar13);
  }
  func_0x000107c614a8(&uStack_78);
LAB_1018d04ac:
  (*param_2)(0,0xf000000000000000);
  func_0x00010130f8ec(param_2,param_3);
  return;
}



/* Entry: 1018d057c; end: 1018d060b; -[AdNetworkResponseLoggerImpl loadRequestData:completion:] */

void FUN_1018d057c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_11040d1f8;
    func_0x000107c613fc(&UNK_11040d1f8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    pcVar2 = FUN_1018d139c;
  }
  func_0x000107c61174(param_1);
  func_0x0001018d000c(param_3,pcVar2,puVar1);
  func_0x00010130f8ec(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018d060c; end: 1018d063f;  */

void FUN_1018d060c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018d0640; end: 1018d0677; -[AdNetworkResponseLoggerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d0640(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dcf6e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dcf6d8));
  return;
}



/* Entry: 1018d0678; end: 1018d06cf;  */

void FUN_1018d0678(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((int)*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == (int)param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1018d06d0; end: 1018d0733;  */

void FUN_1018d06d0(int param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((int)*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1018d0734; end: 1018d0863;  */

void FUN_1018d0734(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_1018d0678();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d07f8);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_1018d09c0(lVar5);
    uVar2 = param_2;
    FUN_1018d0678();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_110713690);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d07c4);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1018d0864();
    lVar5 = *unaff_x20;
    goto joined_r0x0001018d080c;
  }
  lVar5 = *unaff_x20;
joined_r0x0001018d080c:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d0864);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 1018d0864; end: 1018d09bf;  */

void FUN_1018d0864(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112dcf798,&UNK_10d991220);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_1018d0940;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61434();
        if (uVar6 != 0) break;
LAB_1018d0940:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d09c0);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_1018d0998;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_1018d0998:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1018d09c0; end: 1018d0c43;  */

void FUN_1018d09c0(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar14 = 0x112dcf798;
  func_0x0001000285a8(0x112dcf798,&UNK_10d991220);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar14);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_1018d0c10:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar6 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d0c40);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_1018d0c10;
        }
        uVar12 = puVar13[lVar16];
        lVar6 = lVar6 + 1;
      } while (uVar12 == 0);
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar16 << 6;
    uVar15 = *(ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar14);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    uVar9 = uVar15;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar9 >> 6;
    uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar2 = false;
      uVar5 = 0x3f - uVar10 >> 6;
      do {
        uVar9 = uVar7 + 1;
        if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d0c44);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar9 != uVar5) {
          uVar7 = uVar9;
        }
        bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        uVar9 = *(ulong *)(lVar1 + uVar7 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar7);
    *(ulong *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = uVar15;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar6 = lVar16;
  } while( true );
}



/* Entry: 1018d0c44; end: 1018d0eab;  */

undefined * FUN_1018d0c44(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d0dc0);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112dcf7a0;
    func_0x0001000285a8(0x112dcf7a0,&UNK_10d991228);
    lVar5 = 0;
    FUN_1018d12d8();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d0db8);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d0dbc);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_1018d12d8();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 1018d0eac; end: 1018d0ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d0eac(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long extraout_x8;
  ulong uVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  ulong auStack_b0 [3];
  undefined1 auStack_98 [24];
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar10 = 0;
  func_0x000107c5eea4();
  uVar13 = (ulong)*(byte *)(*(long *)(lVar10 + -8) + 0x50);
  lVar10 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(ulong *)(unaff_x20 + 0x18);
  uVar3 = *(ulong *)(unaff_x20 + 0x20);
  puVar9 = *(undefined **)(unaff_x20 + 0x28);
  lVar12 = *(long *)(unaff_x20 + 0x30);
  lVar5 = 0;
  FUN_1018d12d8();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = (long)auStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar10 + 0x10,auStack_78,0,0);
  uVar6 = lVar10 + 0x10;
  func_0x000107c61618();
  lVar10 = _DAT_112dcf6d8;
  if (uVar6 == 0) {
    return;
  }
  if (uVar3 == 0) goto LAB_1018cff04;
  uVar2 = uVar4 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar2 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) goto LAB_1018cff04;
  puVar11 = auStack_98;
  auStack_b0[1] = lVar12;
  func_0x000107c61428(uVar6 + _DAT_112dcf6d8,puVar11,0x20,0);
  lVar12 = *(long *)(uVar6 + lVar10);
  lVar16 = *(long *)(lVar12 + 0x10);
  auStack_b0[0] = uVar6;
  func_0x000107c61434(uVar3);
  if (lVar16 == 0) {
LAB_1018cfdf4:
    func_0x000107c614a8(auStack_98);
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(lVar12);
    uVar6 = auStack_b0[1];
    FUN_1018d0678();
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(lVar12);
      goto LAB_1018cfdf4;
    }
    puVar17 = *(undefined **)(*(long *)(lVar12 + 0x38) + uVar6 * 8);
    func_0x000107c61434(puVar17);
    func_0x000107c614a8(auStack_98);
    func_0x000107c6142c(lVar12);
    if (*(long *)(puVar17 + 0x10) == 0x28) {
      puVar8 = puVar17;
      func_0x000107c61558();
      if (((int)puVar8 == 0) || (*(ulong *)(puVar17 + 0x18) < 0x4e)) {
        puStack_80 = puVar17;
        FUN_1018d0c44();
        puVar17 = puVar8;
      }
      puStack_80 = puVar17;
      FUN_1018d1468(0,1,0);
    }
  }
  lVar12 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar12 + -8) + 0x10))
            (lVar15,unaff_x20 + (uVar13 + 0x38 & (uVar13 ^ 0xffffffffffffffff)),lVar12);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar9 != (undefined *)0x0) {
    puVar8 = puVar9;
  }
  puVar1 = (ulong *)(lVar15 + *(int *)(lVar5 + 0x14));
  *puVar1 = uVar4;
  puVar1[1] = uVar3;
  *(undefined **)(lVar15 + *(int *)(lVar5 + 0x18)) = puVar8;
  *(ulong *)(lVar15 + *(int *)(lVar5 + 0x1c)) = auStack_b0[1];
  func_0x000107c61434(puVar9);
  puVar9 = puVar17;
  func_0x000107c61558();
  puVar8 = puVar17;
  if (((ulong)puVar9 & 1) == 0) {
    puVar8 = (undefined *)0x0;
    FUN_1018d0c44(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
  }
  uVar6 = *(ulong *)(puVar8 + 0x10);
  puVar9 = puVar8;
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar6) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
    FUN_1018d0c44(puVar9,uVar6 + 1,1,puVar8);
  }
  *(ulong *)(puVar9 + 0x10) = uVar6 + 1;
  func_0x0001018d13e8(lVar15,puVar9 + *(long *)(lVar14 + 0x48) * uVar6 +
                                      ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                                      ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)));
  uVar6 = auStack_b0[0];
  func_0x000107c61428(auStack_b0[0] + lVar10,auStack_98,0x21,0);
  func_0x000107c61434(puVar9);
  uVar7 = *(undefined8 *)(uVar6 + lVar10);
  func_0x000107c61558(uVar7);
  auStack_b0[2] = *(undefined8 *)(uVar6 + lVar10);
  *(undefined8 *)(uVar6 + lVar10) = 0x8000000000000000;
  FUN_1018d0734(puVar9,auStack_b0[1],uVar7);
  *(ulong *)(uVar6 + lVar10) = auStack_b0[2];
  func_0x000107c614a8(auStack_98);
  func_0x000107c6142c(puVar9);
LAB_1018cff04:
  func_0x000107c61170();
  return;
}



/* Entry: 1018d0ee4; end: 1018d0eff;  */

void FUN_1018d0ee4(long param_1,long param_2)

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



/* Entry: 1018d0f00; end: 1018d0f77;  */

void FUN_1018d0f00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_1018d0108(uVar2,uVar1,uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1018d0f78; end: 1018d0f97;  */

void FUN_1018d0f78(void)

{
  func_0x000107c61168(&PTR_PTR_1127eaa58);
  return;
}



/* Entry: 1018d0f98; end: 1018d1047;  */

long * FUN_1018d0f98(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar5 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    iVar3 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    uVar7 = *(undefined8 *)((long)param_2 + (long)iVar3);
    *(undefined8 *)((long)param_1 + (long)iVar3) = uVar7;
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    func_0x000107c61434();
    func_0x000107c61434(uVar7);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1018d1048; end: 1018d109b;  */

/* WARNING: Possible PIC construction at 0x0001018d1084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018d1088) */

void FUN_1018d1048(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  return;
}



/* Entry: 1018d109c; end: 1018d12bf;  */

long FUN_1018d109c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  iVar3 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + iVar3);
  *(undefined8 *)(param_1 + iVar3) = uVar5;
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  func_0x000107c61434();
  func_0x000107c61434(uVar5);
  return param_1;
}



/* Entry: 1018d12c0; end: 1018d12d7;  */

void FUN_1018d12c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1018d12d8; end: 1018d130f;  */

void FUN_1018d12d8(undefined8 param_1)

{
  if (lRam000000011347a2a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e65635c);
  return;
}



/* Entry: 1018d1310; end: 1018d139b;  */

void FUN_1018d1310(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10d991200;
    puStack_30 = PTR___sBbWV_11034d660 + 0x40;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    func_0x000107c6153c(param_1,0x100,4,&lStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 1018d139c; end: 1018d13a3;  */

void FUN_1018d139c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018d13a4; end: 1018d1467;  */

undefined8 FUN_1018d13a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1018d12d8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1018d1468; end: 1018d1573;  */

void FUN_1018d1468(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *unaff_x20;
  lVar4 = 0;
  FUN_1018d12d8();
  lVar2 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d1564);
    (*pcVar3)();
  }
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar1 = lVar8 + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff));
  lVar9 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
  lVar7 = lVar1 + lVar9 * param_1;
  func_0x000107c61408(lVar7,lVar2,lVar4);
  lVar4 = param_3 - lVar2;
  if (SBORROW8(param_3,lVar2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d1568);
    (*pcVar3)();
  }
  if (lVar4 != 0) {
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d156c);
      (*pcVar3)();
    }
    uVar6 = lVar7 + lVar9 * param_3;
    uVar5 = lVar1 + lVar9 * param_2;
    if (uVar6 < uVar5 || uVar5 + (*(long *)(lVar8 + 0x10) - param_2) * lVar9 <= uVar6) {
      func_0x000107c61414();
    }
    else if (uVar6 != uVar5) {
      func_0x000107c61410();
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d1570);
      (*pcVar3)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar4;
  }
  if ((0 < param_3) && (0 < lVar9 * param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d1574);
    (*pcVar3)();
  }
  return;
}



/* Entry: 1018d1574; end: 1018d157b;  */

void FUN_1018d1574(long param_1,long param_2)

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



/* Entry: 1018d157c; end: 1018d1587; +[AdEnumsToString stringFromRequestType:] */

void FUN_1018d157c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1018d1654(param_3);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1018d1588; end: 1018d1593; +[AdEnumsToString stringFromRequestFailedReason:] */

void FUN_1018d1588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x1018d1750)(param_3);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1018d1594; end: 1018d159f; +[AdEnumsToString stringFromInternalError:] */

void FUN_1018d1594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x1018d18a4)(param_3);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1018d15a0; end: 1018d15ab; +[AdEnumsToString stringFromInternalErrorSource:] */

void FUN_1018d15a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x1018d1a10)(param_3);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1018d15ac; end: 1018d15e3;  */

void FUN_1018d15ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  (*param_4)(param_3);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1018d15e4; end: 1018d161f; -[AdEnumsToString init] */

void FUN_1018d15e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1018d1620; end: 1018d1653;  */

void FUN_1018d1620(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018d1654; end: 1018d1bdb;  */

undefined1  [16] FUN_1018d1654(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_1 < 4) {
    if (param_1 == 0) {
      auVar4._8_8_ = 0xe500000000000000;
      auVar4._0_8_ = 0x6576726573;
      return auVar4;
    }
    if (param_1 == 1) {
      auVar8._8_8_ = 0xe500000000000000;
      auVar8._0_8_ = 0x6b63617274;
      return auVar8;
    }
    if (param_1 == 3) {
      auVar2._8_8_ = 0xeb00000000657672;
      auVar2._0_8_ = 0x65735f6f746f7270;
      return auVar2;
    }
  }
  else if (param_1 < 6) {
    if (param_1 == 4) {
      auVar6._8_8_ = 0xe400000000000000;
      auVar6._0_8_ = 0x74696e69;
      return auVar6;
    }
    if (param_1 == 5) {
      auVar1._8_8_ = 0xe500000000000000;
      auVar1._0_8_ = 0x6c65786970;
      return auVar1;
    }
  }
  else {
    if (param_1 == 6) {
      auVar7._8_8_ = 0x800000010efbdc20;
      auVar7._0_8_ = 0xd000000000000011;
      return auVar7;
    }
    if (param_1 == 7) {
      auVar3._8_8_ = 0xe800000000000000;
      auVar3._0_8_ = 0x7265747369676572;
      return auVar3;
    }
  }
  auVar5._8_8_ = 0xe700000000000000;
  auVar5._0_8_ = 0x6e776f6e6b6e75;
  return auVar5;
}



/* Entry: 1018d1bdc; end: 1018d1bfb;  */

void FUN_1018d1bdc(void)

{
  func_0x000107c61168(&PTR_PTR_1127eab18);
  return;
}



/* Entry: 1018d1bfc; end: 1018d1d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1018d1bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112dcf7d0;
  func_0x000107c61614(unaff_x20 + _DAT_112dcf7d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112dcf7d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf7e0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf7e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf7f0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf7f8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf800) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf808) = param_7;
  func_0x000107c61604(unaff_x20 + lVar2,param_8);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar3 = auStack_70;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(param_8);
  return puVar3;
}



/* Entry: 1018d1d90; end: 1018d34a7;  */

/* WARNING: Possible PIC construction at 0x0001018d1e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d1e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d1f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d205c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d2094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d20e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d2180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d223c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d2484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d24a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d2588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d25a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d2874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d28c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d2998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d2928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d2968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d20c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d1fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d29e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018d296c) */
/* WARNING: Removing unreachable block (ram,0x0001018d292c) */
/* WARNING: Removing unreachable block (ram,0x0001018d299c) */
/* WARNING: Removing unreachable block (ram,0x0001018d28c8) */
/* WARNING: Removing unreachable block (ram,0x0001018d2990) */
/* WARNING: Removing unreachable block (ram,0x0001018d2878) */
/* WARNING: Removing unreachable block (ram,0x0001018d25a8) */
/* WARNING: Removing unreachable block (ram,0x0001018d258c) */
/* WARNING: Removing unreachable block (ram,0x0001018d25ac) */
/* WARNING: Removing unreachable block (ram,0x0001018d25b0) */
/* WARNING: Removing unreachable block (ram,0x0001018d2660) */
/* WARNING: Removing unreachable block (ram,0x0001018d2678) */
/* WARNING: Removing unreachable block (ram,0x0001018d2694) */
/* WARNING: Removing unreachable block (ram,0x0001018d269c) */
/* WARNING: Removing unreachable block (ram,0x0001018d26b0) */
/* WARNING: Removing unreachable block (ram,0x0001018d26c4) */
/* WARNING: Removing unreachable block (ram,0x0001018d2900) */
/* WARNING: Removing unreachable block (ram,0x0001018d2750) */
/* WARNING: Removing unreachable block (ram,0x0001018d2914) */
/* WARNING: Removing unreachable block (ram,0x0001018d2930) */
/* WARNING: Removing unreachable block (ram,0x0001018d2934) */
/* WARNING: Removing unreachable block (ram,0x0001018d2788) */
/* WARNING: Removing unreachable block (ram,0x0001018d27a0) */
/* WARNING: Removing unreachable block (ram,0x0001018d291c) */
/* WARNING: Removing unreachable block (ram,0x0001018d27a8) */
/* WARNING: Removing unreachable block (ram,0x0001018d2590) */
/* WARNING: Removing unreachable block (ram,0x0001018d24a4) */
/* WARNING: Removing unreachable block (ram,0x0001018d2488) */
/* WARNING: Removing unreachable block (ram,0x0001018d2240) */
/* WARNING: Removing unreachable block (ram,0x0001018d2184) */
/* WARNING: Removing unreachable block (ram,0x0001018d20ec) */
/* WARNING: Removing unreachable block (ram,0x0001018d22a4) */
/* WARNING: Removing unreachable block (ram,0x0001018d2108) */
/* WARNING: Removing unreachable block (ram,0x0001018d2114) */
/* WARNING: Removing unreachable block (ram,0x0001018d2124) */
/* WARNING: Removing unreachable block (ram,0x0001018d2134) */
/* WARNING: Removing unreachable block (ram,0x0001018d21a8) */
/* WARNING: Removing unreachable block (ram,0x0001018d21bc) */
/* WARNING: Removing unreachable block (ram,0x0001018d21d4) */
/* WARNING: Removing unreachable block (ram,0x0001018d21e0) */
/* WARNING: Removing unreachable block (ram,0x0001018d21e8) */
/* WARNING: Removing unreachable block (ram,0x0001018d21f8) */
/* WARNING: Removing unreachable block (ram,0x0001018d2264) */
/* WARNING: Removing unreachable block (ram,0x0001018d2280) */
/* WARNING: Removing unreachable block (ram,0x0001018d22b4) */
/* WARNING: Removing unreachable block (ram,0x0001018d22f8) */
/* WARNING: Removing unreachable block (ram,0x0001018d22cc) */
/* WARNING: Removing unreachable block (ram,0x0001018d2308) */
/* WARNING: Removing unreachable block (ram,0x0001018d2324) */
/* WARNING: Removing unreachable block (ram,0x0001018d2374) */
/* WARNING: Removing unreachable block (ram,0x0001018d23c0) */
/* WARNING: Removing unreachable block (ram,0x0001018d23a4) */
/* WARNING: Removing unreachable block (ram,0x0001018d23c8) */
/* WARNING: Removing unreachable block (ram,0x0001018d2408) */
/* WARNING: Removing unreachable block (ram,0x0001018d23e4) */
/* WARNING: Removing unreachable block (ram,0x0001018d2418) */
/* WARNING: Removing unreachable block (ram,0x0001018d2450) */
/* WARNING: Removing unreachable block (ram,0x0001018d2434) */
/* WARNING: Removing unreachable block (ram,0x0001018d2458) */
/* WARNING: Removing unreachable block (ram,0x0001018d24a8) */
/* WARNING: Removing unreachable block (ram,0x0001018d248c) */
/* WARNING: Removing unreachable block (ram,0x0001018d24b0) */
/* WARNING: Removing unreachable block (ram,0x0001018d24b4) */
/* WARNING: Removing unreachable block (ram,0x0001018d24d8) */
/* WARNING: Removing unreachable block (ram,0x0001018d2574) */
/* WARNING: Removing unreachable block (ram,0x0001018d2468) */
/* WARNING: Removing unreachable block (ram,0x0001018d2290) */
/* WARNING: Removing unreachable block (ram,0x0001018d2208) */
/* WARNING: Removing unreachable block (ram,0x0001018d2214) */
/* WARNING: Removing unreachable block (ram,0x0001018d221c) */
/* WARNING: Removing unreachable block (ram,0x0001018d2148) */
/* WARNING: Removing unreachable block (ram,0x0001018d2154) */
/* WARNING: Removing unreachable block (ram,0x0001018d215c) */
/* WARNING: Removing unreachable block (ram,0x0001018d2098) */
/* WARNING: Removing unreachable block (ram,0x0001018d1fe0) */
/* WARNING: Removing unreachable block (ram,0x0001018d20b4) */
/* WARNING: Removing unreachable block (ram,0x0001018d20a4) */
/* WARNING: Removing unreachable block (ram,0x0001018d2060) */
/* WARNING: Removing unreachable block (ram,0x0001018d1fd8) */
/* WARNING: Removing unreachable block (ram,0x0001018d2064) */
/* WARNING: Removing unreachable block (ram,0x0001018d206c) */
/* WARNING: Removing unreachable block (ram,0x0001018d20c0) */
/* WARNING: Removing unreachable block (ram,0x0001018d2074) */
/* WARNING: Removing unreachable block (ram,0x0001018d1f68) */
/* WARNING: Removing unreachable block (ram,0x0001018d1fb4) */
/* WARNING: Removing unreachable block (ram,0x0001018d1f88) */
/* WARNING: Removing unreachable block (ram,0x0001018d1fbc) */
/* WARNING: Removing unreachable block (ram,0x0001018d20ac) */
/* WARNING: Removing unreachable block (ram,0x0001018d1fcc) */
/* WARNING: Removing unreachable block (ram,0x0001018d1ff4) */
/* WARNING: Removing unreachable block (ram,0x0001018d29c0) */
/* WARNING: Removing unreachable block (ram,0x0001018d2000) */
/* WARNING: Removing unreachable block (ram,0x0001018d203c) */
/* WARNING: Removing unreachable block (ram,0x0001018d2020) */
/* WARNING: Removing unreachable block (ram,0x0001018d2044) */
/* WARNING: Removing unreachable block (ram,0x0001018d1e58) */
/* WARNING: Removing unreachable block (ram,0x0001018d1e64) */
/* WARNING: Removing unreachable block (ram,0x0001018d1e1c) */
/* WARNING: Removing unreachable block (ram,0x0001018d20c8) */
/* WARNING: Removing unreachable block (ram,0x0001018d20d8) */
/* WARNING: Removing unreachable block (ram,0x0001018d20e0) */
/* WARNING: Removing unreachable block (ram,0x0001018d20e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d1d90(ulong param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  
  func_0x000107c61168();
  func_0x000107c41018();
  uVar6 = param_1;
  func_0x000107c5ce34();
  func_0x000107c61180();
  if (uVar6 == 0) {
    func_0x000104041df0();
    uVar5 = 0;
    uVar3 = param_2;
  }
  else {
    func_0x000107c5faec();
    uVar3 = param_2;
    func_0x000107c61170();
    func_0x000104041df0();
    uVar5 = param_2;
  }
  if ((uVar6 & 1) == 0) {
    func_0x000107c4f918();
    func_0x000107c61180();
    lVar7 = _DAT_112dcf7d0;
    if (param_1 == 0) {
      lVar2 = unaff_x20 + _DAT_112dcf7d0;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c4bf60();
        func_0x000107c615e8(lVar2);
      }
      uVar6 = unaff_x20 + lVar7;
      func_0x000107c61618();
      if (uVar6 != 0) {
        uVar3 = uVar6;
        func_0x000107c4f548();
        func_0x000107c61180();
        func_0x000107c615e8(uVar6);
        if (uVar3 != 0) {
          uVar4 = 0;
          FUN_1018d3abc(0,0x112dcf810,&PTR_PTR_1126b9438);
          uVar5 = uVar3;
          func_0x000107c5fc54(uVar3,uVar4);
          func_0x000107c61170(uVar3);
          if (uVar5 >> 0x3e == 0) {
            uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar6 = uVar5 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar5) {
              uVar6 = uVar5;
            }
            func_0x000107c60480();
          }
          if (uVar6 == 2) {
            if ((uVar5 & 0xc000000000000001) == 0) {
              lVar7 = *(long *)((uVar5 & 0xffffffffffffff8) + 0x10);
              if (lVar7 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d2a50);
                (*pcVar1)();
              }
              if (lVar7 == 1) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d2a54);
                (*pcVar1)();
              }
              func_0x000107c61174();
              func_0x000107c61174();
            }
            else {
              FUN_1018d3714(0,uVar5,&PTR_PTR_1126b9438,0x112dcf810);
              FUN_1018d3714(1,uVar5,&PTR_PTR_1126b9438,0x112dcf810);
            }
          }
        }
      }
    }
    else {
      uVar5 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
  }
  else {
    FUN_1018d3c28();
    func_0x000107c61434(*(undefined8 *)(uVar6 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 1018d34a8; end: 1018d34f7; -[AdUnlockableTrackerSwift trackUnlockableAd:] */

/* WARNING: Possible PIC construction at 0x0001018d34e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018d34e4) */

void FUN_1018d34a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018d1d90(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018d34f8; end: 1018d352b;  */

void FUN_1018d34f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018d352c; end: 1018d35c3; -[AdUnlockableTrackerSwift .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1018d352c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dcf7d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dcf7e0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dcf7e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dcf7f0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dcf7f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dcf800));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dcf808));
  param_1 = param_1 + _DAT_112dcf7d0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1018d35c4; end: 1018d36e3;  */

/* WARNING: Possible PIC construction at 0x0001018d3618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018d361c) */

void FUN_1018d35c4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    func_0x000107c6157c(uVar2);
    func_0x000107c61174(param_2);
    (*pcVar1)(param_2,0,0xf000000000000000);
    func_0x0001000b44c0(0,0xf000000000000000);
    func_0x000107c61574(uVar2);
  }
  else {
    func_0x000107c6157c(uVar2);
    func_0x000107c61174(param_2);
    param_2 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


