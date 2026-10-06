/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10333861c; end: 10333863b;  */

void FUN_10333861c(void)

{
  func_0x000107c61168(&PTR_PTR_1128cec38);
  return;
}



/* Entry: 10333863c; end: 10333867f;  */

void FUN_10333863c(void)

{
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_30 = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x0001002a64a8(*(undefined8 *)(unaff_x20 + 0x10),&uStack_50);
  return;
}



/* Entry: 103338680; end: 1033386b3;  */

void FUN_103338680(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10332dcdc(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033386b4; end: 1033386f3;  */

void FUN_1033386b4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1033386f4; end: 1033387cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033386f4(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112f5aaf8;
  uVar3 = 0x112f59a00;
  func_0x0001000285a8(0x112f59a00,&UNK_10dbb1a70);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined **)(unaff_x20 + _DAT_112f5ab08) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ab10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ab18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ab20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ab28) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010f0f28b0,
                      "LensInfoCardImplementation/PrimaryActionsView.swift",0x33,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033387d0);
  (*pcVar2)();
}



/* Entry: 1033387d0; end: 1033387db;  */

void FUN_1033387d0(void)

{
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_30 = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x0001002a64a8(*(undefined8 *)(unaff_x20 + 0x10),&uStack_50);
  return;
}



/* Entry: 1033387dc; end: 10333885f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033387dc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f5ab58;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112f5ab58);
  puVar2 = puVar3;
  if (puVar3 == (undefined *)0x1) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    func_0x000107c5afa0(0x4038000000000000);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar2;
    func_0x000107c61174();
    func_0x000100f01e18(uVar4);
  }
  func_0x000100f01e38(puVar3);
  return puVar2;
}



/* Entry: 103338860; end: 1033388c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103338860(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f5ab68;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f5ab68);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_103338f2c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1033388c4; end: 1033389d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033388c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_b0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ab58) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ab60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ab68) = 0;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c5afa0(0x402c000000000000);
  func_0x000107c61180();
  func_0x000107c5afa0(0x402c000000000000);
  func_0x000107c61180();
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_70 = 0xd000000000000014;
  uStack_68 = 0x800000010f13f190;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  puStack_b0 = puVar2;
  puStack_a8 = puVar1;
  uStack_80 = param_2;
  uStack_78 = param_3;
  func_0x000100b64c10(param_2,param_3);
  func_0x000103336428(&puStack_b0,param_1);
  func_0x000107c61180();
  FUN_1033389d8();
  func_0x00010058d43c(param_2,param_3);
  func_0x000107c61170(ppuVar3);
  return (undefined1 *)ppuVar3;
}



/* Entry: 1033389d8; end: 103338f2b;  */

/* WARNING: Possible PIC construction at 0x000103338a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338d98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338e40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338f08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103338ecc) */
/* WARNING: Removing unreachable block (ram,0x000103338e80) */
/* WARNING: Removing unreachable block (ram,0x000103338e44) */
/* WARNING: Removing unreachable block (ram,0x000103338df0) */
/* WARNING: Removing unreachable block (ram,0x000103338d9c) */
/* WARNING: Removing unreachable block (ram,0x000103338d50) */
/* WARNING: Removing unreachable block (ram,0x000103338d14) */
/* WARNING: Removing unreachable block (ram,0x000103338cc0) */
/* WARNING: Removing unreachable block (ram,0x000103338c68) */
/* WARNING: Removing unreachable block (ram,0x000103338c1c) */
/* WARNING: Removing unreachable block (ram,0x000103338be0) */
/* WARNING: Removing unreachable block (ram,0x000103338b8c) */
/* WARNING: Removing unreachable block (ram,0x000103338aec) */
/* WARNING: Removing unreachable block (ram,0x000103338abc) */
/* WARNING: Removing unreachable block (ram,0x000103338a98) */
/* WARNING: Removing unreachable block (ram,0x000103338a74) */
/* WARNING: Removing unreachable block (ram,0x000103338a10) */
/* WARNING: Removing unreachable block (ram,0x000103338f0c) */

void FUN_1033389d8(undefined8 param_1)

{
  FUN_1033365d4();
  FUN_103338860();
  func_0x000107c5a050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103338f2c; end: 103339013;  */

undefined * FUN_103338f2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x000107c453e4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c53840();
  FUN_1033387dc();
  func_0x000107c55258(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59e10(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c539d4(0x4028000000000000,puVar2);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 103339014; end: 103339083;  */

/* WARNING: Possible PIC construction at 0x000103339038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333903c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103339014(void)

{
  long unaff_x20;
  
  func_0x000100f01e18(*(undefined8 *)(unaff_x20 + _DAT_112f5ab58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + _DAT_112f5ab60));
  return;
}



/* Entry: 103339084; end: 1033390cb; -[_TtC26LensInfoCardImplementation22PrimarySubscribeButton .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033390b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033390b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103339084(long param_1)

{
  func_0x000100f01e18(*(undefined8 *)(param_1 + _DAT_112f5ab58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5ab60));
  return;
}



/* Entry: 1033390cc; end: 1033390eb;  */

void FUN_1033390cc(void)

{
  func_0x000107c61168(&PTR_PTR_1128ced28);
  return;
}



/* Entry: 1033390ec; end: 1033395df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033390ec(uint param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  undefined1 auStack_108 [152];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5ab98);
  bVar2 = *(byte *)(puVar1 + 5);
  func_0x000107c54054();
  uVar12 = *puVar1;
  uVar9 = puVar1[1];
  if ((bVar2 & 1) == 0) {
    lVar5 = 0x112d48380;
    func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
    lVar14 = lVar5;
    func_0x000107c61534();
    puVar4 = PTR__NSForegroundColorAttributeName_1103457f8;
    *(undefined8 *)(lVar14 + 0x18) = 2;
    *(undefined8 *)(lVar14 + 0x10) = 1;
    uVar13 = *(undefined8 *)puVar4;
    *(undefined8 *)(lVar14 + 0x20) = uVar13;
    bVar2 = *(byte *)(unaff_x20 + _DAT_112f5aba8);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    func_0x000107c61174();
    func_0x000107c5af88();
    func_0x000107c61180();
    uVar6 = 0;
    FUN_103339ac0(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
    *(undefined8 *)(lVar14 + 0x40) = uVar6;
    *(undefined **)(lVar14 + 0x28) = puVar4;
    lVar7 = lVar14;
    func_0x000100ecbca8(lVar14);
    func_0x000107c61588(lVar14);
    func_0x000100ef0820((undefined8 *)(lVar14 + 0x20));
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x000107c5fadc(uVar12,uVar9);
    uVar8 = 0;
    func_0x000100eca28c(0);
    uVar9 = uVar8;
    func_0x000100ecbdec();
    lVar14 = lVar7;
    func_0x000107c5f9dc(lVar7,uVar8,PTR___sypN_11034f1a8 + 8,uVar9);
    func_0x000107c6142c(lVar7);
    func_0x000107c48af8(puVar4);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(lVar14);
    func_0x000107c529c8();
    func_0x000107c61170(puVar4);
    lVar14 = puVar1[3];
    if (lVar14 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      uVar12 = puVar1[2];
      func_0x000107c61534(lVar5,auStack_108);
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      *(undefined8 *)(lVar5 + 0x20) = uVar13;
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168();
      func_0x000107c61174(uVar13);
      if (bVar2 < 2) {
        func_0x000107c5af88();
        func_0x000107c61180();
        puVar10 = puVar4;
      }
      else {
        func_0x000107c5af88();
        func_0x000107c61180();
        puVar10 = puVar4;
        func_0x000107c3fdd0(0x3fe8000000000000);
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
      }
      *(undefined8 *)(lVar5 + 0x40) = uVar6;
      *(undefined **)(lVar5 + 0x28) = puVar10;
      lVar7 = lVar5;
      func_0x000100ecbca8(lVar5);
      func_0x000107c61588(lVar5);
      func_0x000100ef0820((undefined8 *)(lVar5 + 0x20));
      puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x000107c5fadc(uVar12,lVar14);
      lVar5 = lVar7;
      func_0x000107c5f9dc(lVar7,uVar8,PTR___sypN_11034f1a8 + 8,uVar9);
      func_0x000107c6142c(lVar7);
      func_0x000107c48af8(puVar4);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(lVar5);
    }
    func_0x000107c529bc();
    func_0x000107c61170(puVar4);
  }
  else {
    func_0x000107c5fadc(uVar12,uVar9);
    func_0x000107c59e44();
    func_0x000107c61170(uVar12);
    if (puVar1[3] == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = (undefined *)puVar1[2];
      func_0x000107c5fadc(puVar4);
    }
    func_0x000107c5405c();
    func_0x000107c61170(puVar4);
  }
  FUN_1033395e0();
  func_0x000107c5a018();
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar10 = puVar4;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar11 = puVar10;
  func_0x000107c3fdd0(0x3fb999999999999a);
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  func_0x000107c5af88(puVar4);
  func_0x000107c61180();
  puVar10 = puVar4;
  func_0x000107c3fdd0(0x3fb999999999999a);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar11;
  func_0x000107c30a84(puVar11,puVar10,0);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c55144();
    func_0x000107c61170(puVar4);
    func_0x000107c55158();
    if (puVar1[0xc] == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = puVar1[0xb];
      func_0x000107c5fadc(uVar12);
    }
    func_0x000107c520f4();
    func_0x000107c61170(uVar12);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x000107c48c2c();
    func_0x000107c3d6fc();
    func_0x000107c61170(puVar4);
    if ((param_1 & 1) == 0) {
      FUN_1033396b0();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1033395e0);
  (*pcVar3)();
}



/* Entry: 1033395e0; end: 1033396af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033395e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined *puVar4;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f5ab98 + 0x20);
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c45154();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x000107c46db4();
    func_0x000107c61170(lVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c59e10(puVar4,param_2,puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar1);
  }
  return puVar4;
}



/* Entry: 1033396b0; end: 1033398fb;  */

/* WARNING: Possible PIC construction at 0x000103339710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033397b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103339808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333985c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103339898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033398dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333989c) */
/* WARNING: Removing unreachable block (ram,0x000103339860) */
/* WARNING: Removing unreachable block (ram,0x00010333980c) */
/* WARNING: Removing unreachable block (ram,0x0001033397b8) */
/* WARNING: Removing unreachable block (ram,0x000103339714) */
/* WARNING: Removing unreachable block (ram,0x0001033398e0) */

void FUN_1033396b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1033398fc; end: 10333999b; -[_TtC26LensInfoCardImplementation19SecondaryActionCell handleTap:] */

/* WARNING: Possible PIC construction at 0x000103339980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103339984) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033398fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  func_0x000107c61174();
  func_0x000107c61174();
  lVar1 = param_3;
  func_0x000107c5bcc0();
  if (lVar1 == 3) {
    lVar1 = param_1 + _DAT_112f5ab98;
    uStack_58 = *(undefined8 *)(lVar1 + 0x38);
    uStack_60 = *(undefined8 *)(lVar1 + 0x30);
    uStack_48 = *(undefined8 *)(lVar1 + 0x48);
    uStack_50 = *(undefined8 *)(lVar1 + 0x40);
    uStack_40 = *(undefined1 *)(lVar1 + 0x50);
    (**(code **)(param_1 + _DAT_112f5aba0))(&uStack_60);
    param_3 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10333999c; end: 1033399fb; -[_TtC26LensInfoCardImplementation19SecondaryActionCell initWithStyle:] */

void FUN_10333999c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.SecondaryActionCell",0x2e,"init(style:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033399c8);
  (*pcVar1)();
}



/* Entry: 1033399fc; end: 103339a9f; -[_TtC26LensInfoCardImplementation19SecondaryActionCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033399fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  
  lVar1 = param_1 + _DAT_112f5ab98;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  uVar5 = *(undefined8 *)(lVar1 + 0x20);
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  uVar6 = *(undefined8 *)(lVar1 + 0x38);
  uVar4 = *(undefined8 *)(lVar1 + 0x40);
  uVar7 = *(undefined8 *)(lVar1 + 0x48);
  uVar9 = *(undefined8 *)(lVar1 + 0x60);
  uVar8 = *(undefined1 *)(lVar1 + 0x50);
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 8));
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(uVar5);
  FUN_10332dcdc(uVar3,uVar6,uVar4,uVar7,uVar8);
  func_0x000107c6142c(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5aba0 + 8));
  return;
}



/* Entry: 103339aa0; end: 103339abf;  */

void FUN_103339aa0(void)

{
  func_0x000107c61168(&PTR_PTR_1128cee58);
  return;
}



/* Entry: 103339ac0; end: 103339b73;  */

void FUN_103339ac0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103339b74; end: 103339c27;  */

undefined8 * FUN_103339b74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar7 = param_2[4];
  param_1[4] = uVar7;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar2 = param_2[6];
  uVar4 = param_2[7];
  uVar1 = param_2[8];
  uVar5 = param_2[9];
  uVar6 = *(undefined1 *)(param_2 + 10);
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61174(uVar7);
  func_0x00010332dc0c(uVar2,uVar4,uVar1,uVar5,uVar6);
  param_1[6] = uVar2;
  param_1[7] = uVar4;
  param_1[8] = uVar1;
  param_1[9] = uVar5;
  *(undefined1 *)(param_1 + 10) = uVar6;
  uVar2 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103339c28; end: 103339d23;  */

undefined8 * FUN_103339c28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  uVar10 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar10);
  param_1[2] = param_2[2];
  uVar10 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar10);
  uVar10 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61174();
  func_0x000107c61170(uVar10);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar10 = param_2[6];
  uVar4 = param_2[7];
  uVar1 = param_2[8];
  uVar5 = param_2[9];
  uVar8 = *(undefined1 *)(param_2 + 10);
  func_0x00010332dc0c(uVar10,uVar4,uVar1,uVar5,uVar8);
  uVar2 = param_1[6];
  uVar6 = param_1[7];
  uVar3 = param_1[8];
  uVar7 = param_1[9];
  param_1[6] = uVar10;
  param_1[7] = uVar4;
  param_1[8] = uVar1;
  param_1[9] = uVar5;
  uVar9 = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar8;
  FUN_10332dcdc(uVar2,uVar6,uVar3,uVar7,uVar9);
  param_1[0xb] = param_2[0xb];
  uVar10 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c6142c(uVar10);
  return param_1;
}



/* Entry: 103339d24; end: 103339daf;  */

undefined8 * FUN_103339d24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = param_2[1];
  uVar5 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  func_0x000107c6142c(uVar5);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar6 = param_1[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  func_0x000107c61170(uVar6);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar3 = *(undefined1 *)(param_2 + 10);
  uVar6 = param_1[6];
  uVar1 = param_1[7];
  uVar5 = param_1[8];
  uVar2 = param_1[9];
  uVar7 = param_2[6];
  uVar9 = param_2[9];
  uVar8 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  param_1[9] = uVar9;
  param_1[8] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar3;
  FUN_10332dcdc(uVar6,uVar1,uVar5,uVar2,uVar4);
  uVar6 = param_2[0xc];
  uVar5 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar6;
  func_0x000107c6142c(uVar5);
  return param_1;
}



/* Entry: 103339db0; end: 103339e5f;  */

int FUN_103339db0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103339e60; end: 10333a2cf;  */

void FUN_103339e60(ulong *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar4 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar9 = uVar1 >> 0x1d;
  if (uVar1 >> 0x1d < 3) {
    if (uVar9 == 0) {
      if ((param_2 & 1) == 0) {
        func_0x0001033477ac();
      }
      else {
        func_0x0001033476e0();
      }
      uVar15 = 0xd000000000000014;
      uVar14 = 0xd;
      uVar13 = 7;
      uVar12 = 0;
      uVar7 = 0;
      uVar8 = 0;
      uVar10 = 0;
      uVar11 = 0x800000010f13f190;
    }
    else {
      param_3 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar7 = 0;
      uVar8 = 0;
      uVar10 = 0;
      uVar11 = 0;
      if (uVar9 == 2) {
        if ((param_2 & 1) == 0) {
          func_0x000103347614();
        }
        else {
          func_0x000103347548();
        }
        uVar15 = 0xd00000000000001c;
        uVar14 = 0xd;
        uVar13 = 0x17;
        uVar12 = 0;
        uVar7 = 0;
        uVar8 = 0;
        uVar10 = 0;
        uVar11 = 0x800000010f13f1f0;
      }
    }
  }
  else if (uVar9 == 3) {
    func_0x0001033473b0();
    if ((param_2 & 1) == 0) {
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      uVar7 = uVar4;
      uVar8 = param_3;
      func_0x00010334747c();
    }
    uVar10 = 0;
    uVar11 = 0x800000010f13f210;
    uVar15 = 0xd00000000000001f;
    uVar14 = 0xd;
    uVar13 = 0x18;
    uVar12 = 0;
  }
  else if (uVar9 == 4) {
    uVar5 = 0;
    uVar4 = uVar5;
    if ((long)(1 - (param_3 + (param_2 >= 0x8000000000000001))) < 0 ==
        (SCARRY8(~param_3,1) != SCARRY8(~param_3 + 1,(ulong)(param_2 < 0x8000000000000001)))) {
      if (param_2 == 0x8000000000000000 && param_3 == 0) {
        func_0x000103346fb4();
        if (lRam0000000112f5b268 != -1) {
          func_0x000107c61568(0x112f5b268,FUN_103347ca4);
        }
        uVar10 = uRam0000000113807220;
        func_0x000107c61174(uRam0000000113807220);
        uVar13 = 0x13;
        uVar4 = uVar5;
      }
      else {
        if (param_2 != 0x8000000000000001 || param_3 != 0) {
          bVar3 = param_3 == 1;
          param_3 = 0;
          uVar7 = 0;
          uVar8 = 0;
          uVar10 = 0;
          uVar11 = 0;
          uVar14 = 0;
          uVar15 = 0;
          if (bVar3 && param_2 == 0x8000000000000000) {
            func_0x000107c309e0();
            func_0x000107c61180();
            if (uVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10333a2d0);
              (*pcVar2)();
            }
            uVar4 = uVar5;
            func_0x000107c5faec();
            func_0x000107c61170(uVar5);
            uVar7 = 0;
            uVar8 = 0;
            uVar10 = 0;
            uVar11 = 0x800000010f13f270;
            uVar15 = 0xd000000000000011;
            uVar14 = 0xd;
            uVar13 = 0xf;
            uVar12 = 1;
          }
          goto LAB_10333a048;
        }
        func_0x000103347080();
        if (lRam0000000112f5b268 != -1) {
          func_0x000107c61568(0x112f5b268,FUN_103347ca4);
        }
        uVar10 = uRam0000000113807220;
        func_0x000107c61174(uRam0000000113807220);
        uVar13 = 0x14;
        uVar4 = uVar5;
      }
      uVar15 = 0xd000000000000013;
      uVar14 = 0xd;
      uVar12 = 0;
      uVar11 = 0x800000010f13f2b0;
      uVar8 = 0;
      uVar7 = 0;
    }
    else if ((long)(2 - (param_3 + (param_2 >= 0x8000000000000001))) < 0 ==
             (SCARRY8(~param_3,2) != SCARRY8(~param_3 + 2,(ulong)(param_2 < 0x8000000000000001)))) {
      if (param_3 == 1 && param_2 == 0x8000000000000001) {
        func_0x000103347218();
        uVar15 = 0xd000000000000014;
        uVar14 = 0xd;
        uVar13 = 0x10;
        uVar12 = 1;
        uVar4 = uVar5;
        uVar7 = 0;
        uVar8 = 0;
        uVar10 = 0;
        uVar11 = 0x800000010f13f250;
      }
      else {
        bVar3 = param_3 == 2;
        param_3 = 0;
        uVar14 = 0;
        uVar15 = 0;
        uVar7 = 0;
        uVar8 = 0;
        uVar10 = 0;
        uVar11 = 0;
        if (bVar3 && param_2 == 0x8000000000000000) {
          func_0x0001033472e4();
          uVar15 = 0xd000000000000012;
          uVar14 = 0xd;
          uVar13 = 0x11;
          uVar12 = 0;
          uVar4 = uVar5;
          uVar7 = 0;
          uVar8 = 0;
          uVar10 = 0;
          uVar11 = 0x800000010f13f230;
        }
      }
    }
    else if (param_3 == 2 && param_2 == 0x8000000000000001) {
      func_0x00010334714c();
      uVar7 = 0;
      uVar8 = 0;
      uVar10 = 0;
      uVar11 = 0x800000010f13f290;
      uVar15 = 0xd000000000000011;
      uVar14 = 0xd;
      uVar13 = 0xe;
      uVar12 = 1;
      uVar4 = uVar5;
    }
    else {
      bVar3 = param_3 == 4;
      uVar6 = 0;
      uVar14 = 0;
      uVar15 = 0;
      param_3 = uVar5;
      uVar7 = uVar5;
      uVar8 = uVar5;
      uVar10 = uVar5;
      uVar11 = uVar5;
      if (bVar3 && param_2 == 0x8000000000000000) {
        func_0x000103346d50();
        uVar7 = 0;
        uVar8 = 0;
        uVar10 = 0;
        uVar11 = 0;
        uVar15 = 0;
        uVar14 = 0xd;
        uVar13 = 5;
        uVar12 = 1;
        uVar4 = uVar5;
        param_3 = uVar6;
      }
    }
  }
  else {
    param_3 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar10 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar11 = 0;
  }
LAB_10333a048:
  *param_1 = uVar4;
  param_1[1] = param_3;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  param_1[4] = uVar10;
  param_1[6] = uVar13;
  param_1[5] = uVar12;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[0xb] = uVar15;
  param_1[10] = uVar14;
  param_1[0xc] = uVar11;
  return;
}



/* Entry: 10333a2d0; end: 10333a6cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333a2d0(ulong param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long unaff_x20;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lStack_158;
  long lStack_150;
  undefined1 auStack_148 [104];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x00010333a9b8();
  uVar17 = param_1;
  func_0x000107c3e158();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar9 = 0;
  func_0x00010333ad2c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar21 = uVar17;
  func_0x000107c5fc54(uVar17,uVar9);
  func_0x000107c61170(uVar17);
  if (uVar21 >> 0x3e == 0) {
    uVar17 = *(ulong *)((uVar21 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = uVar21 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar21) {
      uVar17 = uVar21;
    }
    func_0x000107c60480();
  }
  if (uVar17 != 0) {
    uVar18 = 0;
    do {
      if ((uVar21 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar21 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10333a3c4);
          (*pcVar8)();
        }
        uVar10 = *(ulong *)(uVar21 + uVar18 * 8 + 0x20);
        func_0x000107c61174(uVar10);
      }
      else {
        uVar10 = uVar18;
        func_0x000100f040d0(uVar18,uVar21);
      }
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10333a3c0);
        (*pcVar8)();
      }
      uVar20 = uVar18 + 1;
      func_0x000107c4ff34();
      func_0x000107c61170(uVar10);
      uVar18 = uVar18 + 1;
    } while (uVar20 != uVar17);
  }
  func_0x000107c6142c(uVar21);
  lVar6 = _DAT_112f5abe8;
  lVar15 = *(long *)(unaff_x20 + _DAT_112f5abe8);
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61434(lVar15);
  func_0x0001033463bc(0,0,0);
  lVar5 = _DAT_112f5abe0;
  lVar4 = _DAT_112f5abd8;
  uVar17 = *(ulong *)(lVar15 + 0x10);
  if (uVar17 != 0) {
    uVar21 = 0;
    puVar19 = (undefined8 *)(lVar15 + 0x20);
    do {
      puVar7 = puStack_78;
      if (*(ulong *)(lVar15 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10333a6b0);
        (*pcVar8)();
      }
      uStack_d8 = puVar19[1];
      uStack_e0 = *puVar19;
      uStack_c8 = puVar19[3];
      uStack_d0 = puVar19[2];
      uStack_b8 = puVar19[5];
      uStack_c0 = puVar19[4];
      uStack_a8 = puVar19[7];
      uStack_b0 = puVar19[6];
      uStack_98 = puVar19[9];
      uStack_a0 = puVar19[8];
      uStack_88 = puVar19[0xb];
      uStack_90 = puVar19[10];
      uStack_80 = puVar19[0xc];
      lVar14 = *(long *)(*(long *)(unaff_x20 + lVar6) + 0x10);
      uVar9 = *(undefined8 *)(unaff_x20 + lVar4);
      uVar3 = *(undefined1 *)(unaff_x20 + lVar5);
      lVar11 = 0;
      FUN_103339aa0();
      lVar12 = lVar11;
      func_0x000107c610f8();
      puVar2 = (undefined8 *)(lVar12 + _DAT_112f5ab98);
      puVar2[7] = uStack_a8;
      puVar2[6] = uStack_b0;
      puVar2[9] = uStack_98;
      puVar2[8] = uStack_a0;
      puVar2[0xb] = uStack_88;
      puVar2[10] = uStack_90;
      puVar2[0xc] = uStack_80;
      puVar2[1] = uStack_d8;
      *puVar2 = uStack_e0;
      puVar2[3] = uStack_c8;
      puVar2[2] = uStack_d0;
      puVar2[5] = uStack_b8;
      puVar2[4] = uStack_c0;
      *(undefined1 *)(lVar12 + _DAT_112f5aba8) = uVar3;
      puVar2 = (undefined8 *)(lVar12 + _DAT_112f5aba0);
      *puVar2 = 0x10333ac8c;
      puVar2[1] = uVar9;
      func_0x00010333acbc(&uStack_e0,auStack_148);
      func_0x00010333acbc(&uStack_e0,auStack_148);
      puVar16 = PTR_s_initWithStyle__1125f14a8;
      lStack_158 = lVar12;
      lStack_150 = lVar11;
      func_0x000107c61580(uVar9,2);
      plVar13 = &lStack_158;
      func_0x000107c61154(plVar13,puVar16,0);
      func_0x000107c61180();
      FUN_1033390ec(uVar21 == lVar14 - 1U);
      func_0x000107c61170(plVar13);
      func_0x000107c61574(uVar9);
      func_0x00010333acf8(&uStack_e0);
      uVar18 = *(ulong *)(puVar7 + 0x10);
      puStack_78 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar18) {
        func_0x0001033463bc(1 < *(ulong *)(puVar7 + 0x18),uVar18 + 1,1);
      }
      uVar21 = uVar21 + 1;
      *(ulong *)(puStack_78 + 0x10) = uVar18 + 1;
      *(long **)(puStack_78 + uVar18 * 8 + 0x20) = plVar13;
      puVar19 = puVar19 + 0xd;
    } while (uVar17 != uVar21);
  }
  puVar7 = puStack_78;
  func_0x000107c6142c(lVar15);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f5abf0);
  if (((long)puVar7 < 0) || (((ulong)puVar7 >> 0x3e & 1) != 0)) {
    puVar16 = puVar7;
    func_0x000107c60480();
  }
  else {
    puVar16 = *(undefined **)(puVar7 + 0x10);
  }
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  if (puVar16 != (undefined *)0x0) {
    uVar17 = 0;
    do {
      if (((ulong)puVar7 & 0xc000000000000001) == 0) {
        if (*(ulong *)(puVar7 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10333a6b8);
          (*pcVar8)();
        }
        uVar21 = *(ulong *)(puVar7 + uVar17 * 8 + 0x20);
        func_0x000107c61174(uVar21);
      }
      else {
        uVar21 = uVar17;
        func_0x000100f040d0(uVar17,puVar7);
      }
      puVar1 = (undefined *)(uVar17 + 1);
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10333a6b4);
        (*pcVar8)();
      }
      func_0x000107c3d5b4(uVar9);
      func_0x000107c61170(uVar21);
      uVar17 = uVar17 + 1;
    } while (puVar1 != puVar16);
  }
  func_0x000107c61574(puVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar9);
  return;
}



/* Entry: 10333a6d0; end: 10333a8ff;  */

/* WARNING: Possible PIC construction at 0x00010333a700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333a7a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333a7f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333a848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333a89c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333a84c) */
/* WARNING: Removing unreachable block (ram,0x00010333a7f8) */
/* WARNING: Removing unreachable block (ram,0x00010333a7a4) */
/* WARNING: Removing unreachable block (ram,0x00010333a704) */
/* WARNING: Removing unreachable block (ram,0x00010333a8a0) */

void FUN_10333a6d0(undefined8 param_1)

{
  func_0x00010333a9b8();
  func_0x000107c5a050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10333a900; end: 10333aa1b; -[_TtC26LensInfoCardImplementation20SecondaryActionsView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333a900(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112f5abd8;
  uVar3 = 0x112f59a00;
  func_0x0001000285a8(0x112f59a00,&UNK_10dbb1a70);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined **)(param_1 + _DAT_112f5abe8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(param_1 + _DAT_112f5abf0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LensInfoCardImplementation/SecondaryActionsView.swift",0x35,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10333a9b8);
  (*pcVar2)();
}



/* Entry: 10333aa1c; end: 10333abc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10333aa1c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0,puVar2);
  func_0x000107c54280(puVar2);
  func_0x000107c52610(puVar2);
  func_0x000107c61174(puVar2);
  puVar3 = puVar2;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c539d4(0x4028000000000000);
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c4aba4(puVar2);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar3);
  bVar1 = *(byte *)(param_1 + _DAT_112f5abe0);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  if (bVar1 < 2) {
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar5 = puVar3;
  }
  else {
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar5 = puVar3;
    func_0x000107c3fdd0(0x3fd0000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c52b50(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  if (bVar1 < 2) {
    puVar5 = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar5 = puVar3;
    func_0x000107c3fdd0(0x3fc0000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    uVar4 = 0x3ff0000000000000;
  }
  FUN_10333ed2c(puVar2,puVar5,uVar4);
  func_0x000107c61170(puVar5);
  return puVar2;
}



/* Entry: 10333abc4; end: 10333ac23; -[_TtC26LensInfoCardImplementation20SecondaryActionsView initWithFrame:] */

void FUN_10333abc4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.SecondaryActionsView",0x2f,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10333abf0);
  (*pcVar1)();
}



/* Entry: 10333ac24; end: 10333ac6b; -[_TtC26LensInfoCardImplementation20SecondaryActionsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333ac24(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5abd8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f5abe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5abf0));
  return;
}



/* Entry: 10333ac6c; end: 10333acbb;  */

void FUN_10333ac6c(void)

{
  func_0x000107c61168(&PTR_PTR_1128cef28);
  return;
}



/* Entry: 10333acbc; end: 10333ad6b;  */

undefined8 FUN_10333acbc(undefined8 param_1,undefined8 param_2)

{
  FUN_103339b74(param_2,param_1);
  return param_2;
}



/* Entry: 10333ad6c; end: 10333aeff;  */

/* WARNING: Possible PIC construction at 0x00010333adc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333ae04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333ae24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333ae54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333ae6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333ae90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333aeb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333ae94) */
/* WARNING: Removing unreachable block (ram,0x00010333ae70) */
/* WARNING: Removing unreachable block (ram,0x00010333ae28) */
/* WARNING: Removing unreachable block (ram,0x00010333ae58) */
/* WARNING: Removing unreachable block (ram,0x00010333ae50) */
/* WARNING: Removing unreachable block (ram,0x00010333ae08) */
/* WARNING: Removing unreachable block (ram,0x00010333adcc) */
/* WARNING: Removing unreachable block (ram,0x00010333aeb4) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333ad6c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f5ac28;
  lVar3 = *(long *)(lVar1 + 8);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c61174(*(undefined8 *)(lVar1 + 0x18));
    func_0x000107c61434(lVar3);
    func_0x000107c61174(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10333af00; end: 10333aff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10333af00(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f5ac48;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f5ac48);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c53840();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10333aff8; end: 10333b0ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10333aff8(undefined1 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffd0;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5ac28);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5ac30);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ac38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ac40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ac48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ac50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ac58) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f5ac20) = param_1;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffd0,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  puVar3 = puVar2;
  FUN_10333b0f0();
  func_0x00010333af7c();
  func_0x000107c3d6fc(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 10333b0f0; end: 10333b72f;  */

/* WARNING: Possible PIC construction at 0x00010333b1b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b2f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b34c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b3f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b44c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b4a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b5c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b66c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333b70c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333b6c4) */
/* WARNING: Removing unreachable block (ram,0x00010333b670) */
/* WARNING: Removing unreachable block (ram,0x00010333b624) */
/* WARNING: Removing unreachable block (ram,0x00010333b5e8) */
/* WARNING: Removing unreachable block (ram,0x00010333b5c8) */
/* WARNING: Removing unreachable block (ram,0x00010333b58c) */
/* WARNING: Removing unreachable block (ram,0x00010333b534) */
/* WARNING: Removing unreachable block (ram,0x00010333b4e8) */
/* WARNING: Removing unreachable block (ram,0x00010333b4a4) */
/* WARNING: Removing unreachable block (ram,0x00010333b450) */
/* WARNING: Removing unreachable block (ram,0x00010333b3fc) */
/* WARNING: Removing unreachable block (ram,0x00010333b3a4) */
/* WARNING: Removing unreachable block (ram,0x00010333b350) */
/* WARNING: Removing unreachable block (ram,0x00010333b2fc) */
/* WARNING: Removing unreachable block (ram,0x00010333b260) */
/* WARNING: Removing unreachable block (ram,0x00010333b224) */
/* WARNING: Removing unreachable block (ram,0x00010333b1b4) */
/* WARNING: Removing unreachable block (ram,0x00010333b710) */

void FUN_10333b0f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x0001008479c8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  puVar1 = &DAT_112f5ac40;
  FUN_10333b764(&DAT_112f5ac40,0x10333b8cc);
  *(undefined **)(param_1 + 0x20) = puVar1;
  FUN_10333af00();
  *(undefined **)(param_1 + 0x28) = puVar1;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  uVar2 = 0;
  FUN_10333bc90(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  lVar3 = param_1;
  func_0x000107c5fc48(param_1,uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c45784(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10333b730; end: 10333b763; -[_TtC26LensInfoCardImplementation15CreatorLinkView initWithCoder:] */

undefined8 FUN_10333b730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10333bcd0();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 10333b764; end: 10333ba63;  */

long FUN_10333b764(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 10333ba64; end: 10333bb27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333ba64(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_10333bc90(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x00010333af7c();
  uVar2 = param_1;
  func_0x000107c60118(param_1,uVar1);
  func_0x000107c61170(uVar1);
  if (((uVar2 & 1) != 0) && (func_0x000107c5bcc0(), param_1 == 3)) {
    pcVar3 = *(code **)(unaff_x20 + _DAT_112f5ac30);
    if (pcVar3 != (code *)0x0) {
      uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f5ac30))[1];
      func_0x000107c6157c(uVar1);
      (*pcVar3)();
      if (pcVar3 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar1);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 10333bb28; end: 10333bb77; -[_TtC26LensInfoCardImplementation15CreatorLinkView handleTap:] */

/* WARNING: Possible PIC construction at 0x00010333bb60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333bb64) */

void FUN_10333bb28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10333ba64(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10333bb78; end: 10333bbd7; -[_TtC26LensInfoCardImplementation15CreatorLinkView initWithFrame:] */

void FUN_10333bb78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.CreatorLinkView",0x2a,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10333bba4);
  (*pcVar1)();
}



/* Entry: 10333bbd8; end: 10333bc6f; -[_TtC26LensInfoCardImplementation15CreatorLinkView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010333bc24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333bc44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333bc28) */
/* WARNING: Removing unreachable block (ram,0x00010333bc48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333bbd8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f5ac28);
  func_0x000103326ab0(*puVar1,puVar1[1],puVar1[2],puVar1[3],*(undefined1 *)(puVar1 + 4));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112f5ac30),
                      ((undefined8 *)(param_1 + _DAT_112f5ac30))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5ac38));
  return;
}



/* Entry: 10333bc70; end: 10333bc8f;  */

void FUN_10333bc70(void)

{
  func_0x000107c61168(&PTR_PTR_1128cf000);
  return;
}



/* Entry: 10333bc90; end: 10333bccf;  */

void FUN_10333bc90(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10333bcd0; end: 10333bd8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333bcd0(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5ac28);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5ac30);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ac38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ac40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ac48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ac50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ac58) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LensInfoCardImplementation/CreatorLinkView.swift",0x30,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10333bd8c);
  (*pcVar2)();
}



/* Entry: 10333bd8c; end: 10333c17f;  */

/* WARNING: Possible PIC construction at 0x00010333bdb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333bdf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333be38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333be68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333bf38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333bfac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333bff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333c04c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333c0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333c0dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333c128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333bea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333beb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333bee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333bf20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333beec) */
/* WARNING: Removing unreachable block (ram,0x00010333bebc) */
/* WARNING: Removing unreachable block (ram,0x00010333bea8) */
/* WARNING: Removing unreachable block (ram,0x00010333c12c) */
/* WARNING: Removing unreachable block (ram,0x00010333c0e0) */
/* WARNING: Removing unreachable block (ram,0x00010333c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010333c050) */
/* WARNING: Removing unreachable block (ram,0x00010333bffc) */
/* WARNING: Removing unreachable block (ram,0x00010333bfb0) */
/* WARNING: Removing unreachable block (ram,0x00010333bf3c) */
/* WARNING: Removing unreachable block (ram,0x00010333be6c) */
/* WARNING: Removing unreachable block (ram,0x00010333be3c) */
/* WARNING: Removing unreachable block (ram,0x00010333bdf4) */
/* WARNING: Removing unreachable block (ram,0x00010333be78) */
/* WARNING: Removing unreachable block (ram,0x00010333be14) */
/* WARNING: Removing unreachable block (ram,0x00010333bdbc) */
/* WARNING: Removing unreachable block (ram,0x00010333bf24) */
/* WARNING: Removing unreachable block (ram,0x00010333bf28) */

void FUN_10333bd8c(undefined8 param_1)

{
  FUN_10333c180();
  func_0x000107c5a050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10333c180; end: 10333c23b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10333c180(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f5aca0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f5aca0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c53840();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c5afa0(0x4034000000000000);
    func_0x000107c61180();
    func_0x000107c55258(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10333c23c; end: 10333c27b; -[_TtC26LensInfoCardImplementation12HeaderButton onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333c23c(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f5ac90);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10333c27c; end: 10333c2db; -[_TtC26LensInfoCardImplementation12HeaderButton initWithFrame:] */

void FUN_10333c27c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.HeaderButton",0x27,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10333c2a8);
  (*pcVar1)();
}



/* Entry: 10333c2dc; end: 10333c317; -[_TtC26LensInfoCardImplementation12HeaderButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333c2dc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5ac90 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5aca0));
  return;
}



/* Entry: 10333c318; end: 10333c337;  */

void FUN_10333c318(void)

{
  func_0x000107c61168(&PTR_PTR_1128cf0f8);
  return;
}



/* Entry: 10333c338; end: 10333c423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10333c338(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  lVar3 = param_1;
  FUN_10333c318();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f5aca0) = 0;
  *(long *)(lVar4 + _DAT_112f5ac88) = param_1;
  *(undefined1 *)(lVar4 + _DAT_112f5ac98) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f5ac90);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar2 = PTR_s_initWithFrame__1125e2948;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c6157c(param_4);
  func_0x000107c61154(0,0,0,0,&lStack_50,puVar2);
  func_0x000107c61180();
  FUN_10333bd8c();
  func_0x000107c3d8b8(plVar5);
  func_0x000107c61170(plVar5);
  func_0x000107c61574(param_4);
  return (undefined1 *)plVar5;
}



/* Entry: 10333c424; end: 10333c743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333c424(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 uVar16;
  
  puVar8 = &DAT_112f5acf0;
  FUN_10333d1c0(&DAT_112f5acf0,FUN_10333d010);
  plVar1 = (long *)(unaff_x20 + _DAT_112f5acd8);
  lVar11 = plVar1[1];
  if (lVar11 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *plVar1;
    func_0x000107c61434(lVar11);
    func_0x000107c5fadc(lVar10,lVar11);
    func_0x000107c6142c(lVar11);
  }
  func_0x000107c59c6c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170();
  FUN_10333d0bc();
  if (plVar1[1] == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = plVar1[2];
    func_0x000107c61174(lVar11);
  }
  uVar12 = *(undefined8 *)(lVar10 + _DAT_112f5ad50);
  *(long *)(lVar10 + _DAT_112f5ad50) = lVar11;
  func_0x000107c61174();
  func_0x000107c61170(uVar12);
  FUN_10333d850();
  func_0x000107c61170(lVar10);
  func_0x000107c61170();
  FUN_10333c744();
  if (plVar1[1] == 0) {
    lVar10 = 0;
    lVar13 = 0;
    lVar14 = 0;
    lVar15 = 0;
    uVar16 = 0;
  }
  else {
    lVar10 = plVar1[5];
    lVar13 = plVar1[6];
    lVar14 = plVar1[7];
    lVar15 = plVar1[8];
    uVar16 = (undefined1)plVar1[9];
    FUN_103326a74(lVar10,lVar13,lVar14,lVar15,uVar16);
  }
  plVar2 = (long *)(lVar11 + _DAT_112f5ac28);
  lVar3 = *plVar2;
  lVar5 = plVar2[1];
  lVar4 = plVar2[2];
  lVar6 = plVar2[3];
  *plVar2 = lVar10;
  plVar2[1] = lVar13;
  plVar2[2] = lVar14;
  plVar2[3] = lVar15;
  lVar7 = plVar2[4];
  *(undefined1 *)(plVar2 + 4) = uVar16;
  FUN_103326a74(lVar10,lVar13,lVar14,lVar15,uVar16);
  func_0x000103326ab0(lVar3,lVar5,lVar4,lVar6,(char)lVar7);
  FUN_10333ad6c();
  func_0x000103326ab0(lVar10,lVar13,lVar14,lVar15,uVar16);
  func_0x000107c61170(lVar11);
  puVar8 = &DAT_112f5ad08;
  FUN_10333d1c0(&DAT_112f5ad08,0x10333d220);
  if (plVar1[1] == 0) {
    lVar11 = 0;
  }
  else {
    lVar10 = plVar1[4];
    lVar11 = lVar10;
    if (lVar10 != 0) {
      lVar15 = plVar1[3];
      uVar9 = 2;
      func_0x000107c61438(lVar10,2);
      func_0x000103347944();
      lVar14 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar14 + 0x18) = 2;
      *(undefined8 *)(lVar14 + 0x10) = 1;
      *(undefined **)(lVar14 + 0x38) = PTR___sSSN_11034da80;
      lVar13 = lVar14;
      func_0x00010075bbf0();
      *(long *)(lVar14 + 0x40) = lVar13;
      *(long *)(lVar14 + 0x20) = lVar15;
      *(long *)(lVar14 + 0x28) = lVar10;
      func_0x000107c61434(lVar10);
      uVar12 = uVar9;
      func_0x000107c5fb00(lVar11,uVar9,lVar14);
      func_0x000107c6142c(uVar9);
      func_0x000107c61430(lVar10,2);
      func_0x000107c5fadc(lVar11,uVar12);
      func_0x000107c6142c(uVar12);
    }
  }
  func_0x000107c59c6c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar11);
  if ((plVar1[1] == 0) || (plVar1[4] == 0)) {
    uVar12 = 1;
  }
  else {
    uVar12 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112f5ad08),PTR_s_setHidden__1126479f8,uVar12);
  return;
}



/* Entry: 10333c744; end: 10333c7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10333c744(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f5ad00;
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112f5ad00);
  uVar3 = uVar2;
  if (uVar2 == 0) {
    uVar3 = (ulong)*(byte *)(unaff_x20 + _DAT_112f5acd0);
    FUN_10333bc70();
    func_0x000107c610f8();
    FUN_10333aff8(uVar3,uVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(ulong *)(unaff_x20 + lVar1) = uVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    uVar2 = 0;
  }
  func_0x000107c61174(uVar2);
  return uVar3;
}



/* Entry: 10333c7c8; end: 10333c957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10333c7c8(undefined1 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5acd8);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((long)puVar1 + 0x41) = 0;
  *(undefined8 *)((long)puVar1 + 0x39) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5ace0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5ace8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5acf0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5acf8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ad00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ad08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ad10) = 0;
  puVar3 = &DAT_112f5ad18;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ad18) = 0;
  puVar4 = &DAT_112f5ad20;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ad20) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f5acd0) = param_1;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffb0,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_10333c958();
  FUN_10333cec8();
  FUN_10333c424();
  FUN_10333d3c0(&DAT_112f5ad18,0x2f3,0x10333d688);
  func_0x000107c550d8();
  func_0x000107c61170(puVar3);
  FUN_10333d3c0(&DAT_112f5ad20,0x2bf,0x10333d668);
  func_0x000107c550d8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return puVar2;
}



/* Entry: 10333c958; end: 10333cec7;  */

/* WARNING: Possible PIC construction at 0x00010333c988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333c9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333ca00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333ca30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333ca70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333cb38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333cbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333cc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333cca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333ccfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333cd50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333cda4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333cdfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333ce24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333ce58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333cea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333ce5c) */
/* WARNING: Removing unreachable block (ram,0x00010333ce28) */
/* WARNING: Removing unreachable block (ram,0x00010333ce00) */
/* WARNING: Removing unreachable block (ram,0x00010333cda8) */
/* WARNING: Removing unreachable block (ram,0x00010333cd54) */
/* WARNING: Removing unreachable block (ram,0x00010333cd00) */
/* WARNING: Removing unreachable block (ram,0x00010333cca8) */
/* WARNING: Removing unreachable block (ram,0x00010333cc54) */
/* WARNING: Removing unreachable block (ram,0x00010333cc00) */
/* WARNING: Removing unreachable block (ram,0x00010333cb3c) */
/* WARNING: Removing unreachable block (ram,0x00010333ca74) */
/* WARNING: Removing unreachable block (ram,0x00010333ca34) */
/* WARNING: Removing unreachable block (ram,0x00010333ca04) */
/* WARNING: Removing unreachable block (ram,0x00010333c9b8) */
/* WARNING: Removing unreachable block (ram,0x00010333c98c) */
/* WARNING: Removing unreachable block (ram,0x00010333cea8) */

void FUN_10333c958(undefined8 param_1)

{
  FUN_10333d0bc();
  func_0x000107c5a050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10333cec8; end: 10333cfdb;  */

/* WARNING: Possible PIC construction at 0x00010333cf18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333cf70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333cfc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333cf74) */
/* WARNING: Removing unreachable block (ram,0x00010333cf1c) */
/* WARNING: Removing unreachable block (ram,0x00010333cfc8) */

void FUN_10333cec8(undefined8 param_1)

{
  FUN_10333c744();
  func_0x000107c5fadc(0xd000000000000010,0x800000010f13f3e0);
  func_0x000107c520f4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10333cfdc; end: 10333d00f; -[_TtC26LensInfoCardImplementation10HeaderView initWithCoder:] */

undefined8 FUN_10333cfdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10333d6e8();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 10333d010; end: 10333d0bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10333d010(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a100();
  bVar2 = *(byte *)(param_1 + _DAT_112f5acd0);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar3);
  uVar1 = 0xc6;
  if (1 < bVar2) {
    uVar1 = 0xd5;
  }
  func_0x000107c5af88(puVar4,param_2,uVar1);
  func_0x000107c61180();
  func_0x000107c59c78(puVar3,param_2,puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return puVar3;
}



/* Entry: 10333d0bc; end: 10333d1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10333d0bc(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  lVar2 = _DAT_112f5acf8;
  ppuVar5 = &puStack_50;
  puVar3 = *(undefined1 **)(unaff_x20 + _DAT_112f5acf8);
  puVar4 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112f5acd0);
    FUN_10333e4d0();
    puVar4 = puVar3;
    func_0x000107c610f8();
    *(undefined8 *)(puVar4 + _DAT_112f5ad50) = 0;
    puVar4[_DAT_112f5ad58] = 0;
    *(undefined8 *)(puVar4 + _DAT_112f5ad60) = 0;
    *(undefined8 *)(puVar4 + _DAT_112f5ad68) = 0;
    *(undefined8 *)(puVar4 + _DAT_112f5ad70) = 0;
    *(undefined8 *)(puVar4 + _DAT_112f5ad78) = 0;
    puStack_50 = puVar4;
    puStack_48 = puVar3;
    func_0x000107c61154(0,0,0,0,&puStack_50,PTR_s_initWithFrame__1125e2948);
    *(undefined1 *)((long)ppuVar5 + _DAT_112f5ad58) = uVar1;
    func_0x000107c61174();
    FUN_10333daac();
    uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined1 ***)(unaff_x20 + lVar2) = ppuVar5;
    func_0x000107c61170(uVar6);
    puVar3 = (undefined1 *)0x0;
    puVar4 = (undefined1 *)ppuVar5;
  }
  func_0x000107c61174(puVar3);
  return puVar4;
}



/* Entry: 10333d1c0; end: 10333d38f;  */

long FUN_10333d1c0(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 10333d390; end: 10333d3bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10333d390(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar2 = _DAT_112f5ad18;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f5ad18);
  lVar5 = lVar3;
  if (lVar3 == 0) {
    uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112f5acd0);
    puVar4 = &UNK_1106401e0;
    func_0x000107c613fc(&UNK_1106401e0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    lVar5 = 0x2f3;
    FUN_10333c338(0x2f3,uVar1,0x10333d688,puVar4);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long *)(unaff_x20 + lVar2) = lVar5;
    func_0x000107c61174();
    func_0x000107c61170(uVar6);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar5;
}



/* Entry: 10333d3c0; end: 10333d46b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10333d3c0(long *param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *param_1;
  lVar2 = *(long *)(unaff_x20 + lVar6);
  lVar4 = lVar2;
  if (lVar2 == 0) {
    uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112f5acd0);
    puVar3 = &UNK_1106401e0;
    func_0x000107c613fc(&UNK_1106401e0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    FUN_10333c338(param_2,uVar1,param_3,puVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar6);
    *(long *)(unaff_x20 + lVar6) = param_2;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    lVar2 = 0;
    lVar4 = param_2;
  }
  func_0x000107c61174(lVar2);
  return lVar4;
}



/* Entry: 10333d46c; end: 10333d4ff;  */

void FUN_10333d46c(long param_1,long *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    pcVar1 = *(code **)(param_1 + *param_2);
    if (pcVar1 == (code *)0x0) {
      func_0x000107c61170();
    }
    else {
      uVar2 = ((undefined8 *)(param_1 + *param_2))[1];
      func_0x000100b64c10(pcVar1,uVar2);
      func_0x000107c61170(param_1);
      (*pcVar1)();
      func_0x00010058d43c(pcVar1,uVar2);
    }
  }
  return;
}



/* Entry: 10333d500; end: 10333d55f; -[_TtC26LensInfoCardImplementation10HeaderView initWithFrame:] */

void FUN_10333d500(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.HeaderView",0x25,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10333d52c);
  (*pcVar1)();
}



/* Entry: 10333d560; end: 10333d647; -[_TtC26LensInfoCardImplementation10HeaderView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010333d5d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333d5f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333d618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333d5fc) */
/* WARNING: Removing unreachable block (ram,0x00010333d5dc) */
/* WARNING: Removing unreachable block (ram,0x00010333d61c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333d560(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f5acd8);
  FUN_10333d7d0(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7],
                puVar1[8],*(undefined1 *)(puVar1 + 9));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112f5ace0),
                      ((undefined8 *)(param_1 + _DAT_112f5ace0))[1]);
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112f5ace8),
                      ((undefined8 *)(param_1 + _DAT_112f5ace8))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5acf0));
  return;
}



/* Entry: 10333d648; end: 10333d6a7;  */

void FUN_10333d648(void)

{
  func_0x000107c61168(&PTR_PTR_1128cf1d0);
  return;
}



/* Entry: 10333d6a8; end: 10333d6e7;  */

void FUN_10333d6a8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10333d6e8; end: 10333d7cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333d6e8(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5acd8);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((long)puVar1 + 0x41) = 0;
  *(undefined8 *)((long)puVar1 + 0x39) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5ace0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5ace8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5acf0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5acf8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ad00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ad08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ad10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ad18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ad20) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LensInfoCardImplementation/HeaderView.swift",0x2b,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10333d7d0);
  (*pcVar2)();
}



/* Entry: 10333d7d0; end: 10333d84f;  */

/* WARNING: Possible PIC construction at 0x00010333d814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103326ad4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333d818) */
/* WARNING: Removing unreachable block (ram,0x000103326ab0) */
/* WARNING: Removing unreachable block (ram,0x000103326ae8) */
/* WARNING: Removing unreachable block (ram,0x000103326ab4) */
/* WARNING: Removing unreachable block (ram,0x000103326ad8) */

void FUN_10333d7d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10333d850; end: 10333daab;  */

/* WARNING: Possible PIC construction at 0x00010333d87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333d8ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333d8c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333d880) */
/* WARNING: Removing unreachable block (ram,0x00010333d8b0) */
/* WARNING: Removing unreachable block (ram,0x00010333d8a8) */
/* WARNING: Removing unreachable block (ram,0x00010333d8c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333d850(undefined8 param_1)

{
  func_0x00010333d900();
  func_0x000107c55258();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10333daac; end: 10333e1df;  */

/* WARNING: Possible PIC construction at 0x00010333dae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333db0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333db38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333db64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333dc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333dc5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333dcb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333dd04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333dd58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333ddac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333de00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333de54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333deac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333df00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333df54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333dfa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333dffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333e050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333e0a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333e0f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333e134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333e180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333e138) */
/* WARNING: Removing unreachable block (ram,0x00010333e0fc) */
/* WARNING: Removing unreachable block (ram,0x00010333e0a8) */
/* WARNING: Removing unreachable block (ram,0x00010333e054) */
/* WARNING: Removing unreachable block (ram,0x00010333e000) */
/* WARNING: Removing unreachable block (ram,0x00010333dfac) */
/* WARNING: Removing unreachable block (ram,0x00010333df58) */
/* WARNING: Removing unreachable block (ram,0x00010333df04) */
/* WARNING: Removing unreachable block (ram,0x00010333deb0) */
/* WARNING: Removing unreachable block (ram,0x00010333de58) */
/* WARNING: Removing unreachable block (ram,0x00010333de04) */
/* WARNING: Removing unreachable block (ram,0x00010333ddb0) */
/* WARNING: Removing unreachable block (ram,0x00010333dd5c) */
/* WARNING: Removing unreachable block (ram,0x00010333dd08) */
/* WARNING: Removing unreachable block (ram,0x00010333dcb4) */
/* WARNING: Removing unreachable block (ram,0x00010333dc60) */
/* WARNING: Removing unreachable block (ram,0x00010333dc14) */
/* WARNING: Removing unreachable block (ram,0x00010333db68) */
/* WARNING: Removing unreachable block (ram,0x00010333dbe0) */
/* WARNING: Removing unreachable block (ram,0x00010333dbe4) */
/* WARNING: Removing unreachable block (ram,0x00010333db3c) */
/* WARNING: Removing unreachable block (ram,0x00010333db10) */
/* WARNING: Removing unreachable block (ram,0x00010333dae4) */
/* WARNING: Removing unreachable block (ram,0x00010333e184) */

void FUN_10333daac(undefined8 param_1)

{
  func_0x00010333d97c();
  func_0x000107c5a050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10333e1e0; end: 10333e213; -[_TtC26LensInfoCardImplementation12LensIconView initWithCoder:] */

undefined8 FUN_10333e1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010333e4f0();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 10333e214; end: 10333e34f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10333e214(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  
  dVar4 = 42.0;
  if (*(char *)(param_1 + _DAT_112f5ad58) != '\0') {
    dVar4 = 64.0;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c469a4(0,0,dVar4,dVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar3 = puVar2;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(dVar4 * 0.5);
  func_0x000107c61170(puVar3);
  puVar3 = PTR_PTR_1126b08d8;
  func_0x000107c61168(PTR_PTR_1126b08d8);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x00010085b3c8(0x4010000000000000,0x3fb999999999999a,0,0x3ff0000000000000,puVar3,puVar1,
                      puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 10333e350; end: 10333e407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10333e350(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f5ad78;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f5ad78);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c53840();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c5afa8(0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c55258(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10333e408; end: 10333e467; -[_TtC26LensInfoCardImplementation12LensIconView initWithFrame:] */

void FUN_10333e408(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.LensIconView",0x27,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10333e434);
  (*pcVar1)();
}



/* Entry: 10333e468; end: 10333e4cf; -[_TtC26LensInfoCardImplementation12LensIconView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010333e484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333e4a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333e488) */
/* WARNING: Removing unreachable block (ram,0x00010333e4a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333e468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5ad50));
  return;
}



/* Entry: 10333e4d0; end: 10333e58f;  */

void FUN_10333e4d0(void)

{
  func_0x000107c61168(&PTR_PTR_1128cf2e0);
  return;
}



/* Entry: 10333e590; end: 10333e5f7;  */

bool FUN_10333e590(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  uVar2 = (uint)*param_2;
  if (bVar1 == 4) {
    if (uVar2 == 4) {
      return true;
    }
  }
  else if (bVar1 == 3) {
    if (uVar2 == 3) {
      return true;
    }
  }
  else if (1 < uVar2 - 3) {
    return bVar1 == uVar2;
  }
  return false;
}



/* Entry: 10333e5f8; end: 10333e6a3;  */

void FUN_10333e5f8(void)

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



/* Entry: 10333e6a4; end: 10333e6a7;  */

void FUN_10333e6a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5ada8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb2f38;
  func_0x000107c61520(&UNK_10dbb2f38,&UNK_110640308);
  puRam0000000112f5ada8 = puVar1;
  return;
}



/* Entry: 10333e6a8; end: 10333e6e7;  */

void FUN_10333e6a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5ada8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb2f38;
  func_0x000107c61520(&UNK_10dbb2f38,&UNK_110640308);
  puRam0000000112f5ada8 = puVar1;
  return;
}



/* Entry: 10333e6e8; end: 10333e9d7;  */

int FUN_10333e6e8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    param_2 = param_2 + 4;
    uVar4 = 2;
    if (0xfffeff < param_2) {
      uVar4 = 4;
    }
    if (param_2 >> 8 < 0xff) {
      uVar4 = 1;
    }
    uVar1 = 0;
    if (0xff < param_2) {
      uVar1 = uVar4;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar4 = (uint)param_1[1], param_1[1] != 0)) goto LAB_10333e750;
    }
    else if (uVar1 == 2) {
      uVar4 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) != 0) {
LAB_10333e750:
        return ((uint)*param_1 | uVar4 << 8) - 4;
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 1);
      if (uVar4 != 0) goto LAB_10333e750;
    }
  }
  uVar4 = (uint)*param_1;
  iVar2 = 0;
  if (1 < uVar4 - 2) {
    iVar2 = uVar4 - 4;
  }
  iVar3 = 0;
  if (2 < uVar4) {
    iVar3 = iVar2;
  }
  return iVar3;
}



/* Entry: 10333e9d8; end: 10333eaf7;  */

void FUN_10333e9d8(long *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  uVar5 = *unaff_x20;
  uVar4 = unaff_x20[2];
  puVar1 = &UNK_110640360;
  func_0x000107c613fc(&UNK_110640360,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  pcVar6 = *(code **)(*param_1 + 0x60);
  func_0x000107c6157c(uVar4);
  pcVar2 = FUN_10333eb44;
  puVar3 = puVar1;
  (*pcVar6)(FUN_10333eb44);
  func_0x000107c61574(puVar1);
  pcVar6 = pcVar2;
  func_0x000107c614f0(pcVar2);
  (**(code **)(puVar3 + 0x10))(unaff_x20[3],pcVar6,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar2);
  return;
}



/* Entry: 10333eaf8; end: 10333eb43;  */

void FUN_10333eaf8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10333eb44; end: 10333eb4b;  */

void FUN_10333eb44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lStack_48;
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  func_0x0001000d224c(&lStack_48,param_1,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  if (lStack_48 != 0) {
    FUN_10333eb4c(uVar2,uVar1,uVar3);
    func_0x000107c5c2e0(lStack_48);
    func_0x000107c615e8(lStack_48);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 10333eb4c; end: 10333ed2b;  */

undefined * FUN_10333eb4c(ulong param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126afde0;
  if (param_3 == (undefined *)0x0) {
    func_0x000107c61168(PTR_PTR_1126afde0);
    puVar2 = puVar1;
    func_0x000103347a10();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    func_0x000107c409d8(puVar1);
  }
  else {
    uVar5 = param_2;
    func_0x000107c61168(PTR_PTR_1126afde0);
    puVar2 = param_3;
    func_0x000107c61434(param_3);
    if ((param_1 & 1) == 0) {
      func_0x000103347ba8();
      lVar3 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
      lVar4 = lVar3;
      func_0x00010075bbf0();
      *(long *)(lVar3 + 0x40) = lVar4;
      *(undefined8 *)(lVar3 + 0x20) = param_2;
      *(undefined **)(lVar3 + 0x28) = param_3;
      uVar6 = uVar5;
      func_0x000107c5fb00(puVar2,uVar5,lVar3);
      func_0x000107c6142c(uVar5);
      func_0x000107c5fadc(puVar2,uVar6);
      func_0x000107c6142c(uVar6);
      func_0x000107c40b14(puVar1);
    }
    else {
      func_0x000103347adc();
      lVar3 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
      lVar4 = lVar3;
      func_0x00010075bbf0();
      *(long *)(lVar3 + 0x40) = lVar4;
      *(undefined8 *)(lVar3 + 0x20) = param_2;
      *(undefined **)(lVar3 + 0x28) = param_3;
      uVar6 = uVar5;
      func_0x000107c5fb00(puVar2,uVar5,lVar3);
      func_0x000107c6142c(uVar5);
      func_0x000107c5fadc(puVar2,uVar6);
      func_0x000107c6142c(uVar6);
      func_0x000107c40930(puVar1);
    }
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 10333ed2c; end: 10333edcb;  */

/* WARNING: Possible PIC construction at 0x00010333ed84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333ed88) */

void FUN_10333ed2c(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c52e0c(0);
  }
  else {
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c3ab24(param_2);
    func_0x000107c61180();
    func_0x000107c52df8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10333edcc; end: 10333eddf;  */

bool FUN_10333edcc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10333ede0; end: 10333ee8b;  */

void FUN_10333ede0(void)

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



/* Entry: 10333ee8c; end: 10333ee8f;  */

void FUN_10333ee8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5ae58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb3010;
  func_0x000107c61520(&UNK_10dbb3010,&UNK_1106403f8);
  puRam0000000112f5ae58 = puVar1;
  return;
}



/* Entry: 10333ee90; end: 10333eecf;  */

void FUN_10333ee90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5ae58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb3010;
  func_0x000107c61520(&UNK_10dbb3010,&UNK_1106403f8);
  puRam0000000112f5ae58 = puVar1;
  return;
}



/* Entry: 10333eed0; end: 10333f043;  */

int FUN_10333eed0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10333ef4c;
        goto LAB_10333ef30;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10333ef30:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10333ef4c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10333f044; end: 10333f09b;  */

void FUN_10333f044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c610f8();
  FUN_10333f09c(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10333f09c; end: 10333f1ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333f09c(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112f5ae60;
  uVar3 = 0x112f599f0;
  func_0x0001000285a8(0x112f599f0,&UNK_10dbb1870);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ae68) = 0;
  *(undefined **)(unaff_x20 + _DAT_112f5ae70) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ae78) = 8;
  func_0x000107c61614(unaff_x20 + _DAT_112f5ae80,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5ae88);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112f5ae90) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112f5ae98) = param_4;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10333f1ac; end: 10333f343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333f1ac(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 uStack_31;
  
  lVar2 = _DAT_112f5ae68;
  if (*(long *)(unaff_x20 + _DAT_112f5ae68) == 0) {
    if ((*(byte *)(unaff_x20 + _DAT_112f5ae90) & 1) == 0) {
      func_0x000107c61604(unaff_x20 + _DAT_112f5ae80,param_1);
    }
    puVar3 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    func_0x000107c52684();
    if (*(char *)(unaff_x20 + _DAT_112f5ae98) == '\x01') {
      func_0x000107c5a05c(puVar3);
      func_0x000107c5a070(puVar3);
      func_0x000107c5a06c(puVar3);
    }
    func_0x000107c5a074(puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined **)(unaff_x20 + lVar2) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    uStack_31 = 3;
    func_0x0001002a64a8(*(undefined8 *)(unaff_x20 + _DAT_112f5ae60),&uStack_31);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5ae88);
    cVar1 = *(char *)((undefined8 *)(unaff_x20 + _DAT_112f5ae88) + 1);
    if (cVar1 == '\x01') {
      func_0x000107c61174();
      func_0x000107c4ef2c(0x3fe4cccccccccccd,puVar3);
    }
    else {
      func_0x000107c615f0(uVar4);
      func_0x000107c4ef3c(0x3fe4cccccccccccd,puVar3);
    }
    func_0x000107c61170(puVar3);
    func_0x00010331da00(uVar4,cVar1);
  }
  return;
}



/* Entry: 10333f344; end: 10333f393; -[_TtC26LensInfoCardImplementation22InfoCardTrayController attachUI:] */

/* WARNING: Possible PIC construction at 0x00010333f37c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333f380) */

void FUN_10333f344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10333f1ac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


