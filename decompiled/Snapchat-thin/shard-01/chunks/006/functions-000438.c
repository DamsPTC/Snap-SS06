/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101317b04; end: 101317b0b; -[_TtC22SCSendToPromoteSection32SendToPromoteSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_101317b04(void)

{
  return 1;
}



/* Entry: 101317b0c; end: 101317b0f; -[_TtC22SCSendToPromoteSection32SendToPromoteSectionDataProvider addListener:] */

void FUN_101317b0c(void)

{
  return;
}



/* Entry: 101317b10; end: 101317b13; -[_TtC22SCSendToPromoteSection32SendToPromoteSectionDataProvider removeListener:] */

void FUN_101317b10(void)

{
  return;
}



/* Entry: 101317b14; end: 101317b3f; +[_TtC22SCSendToPromoteSection32SendToPromoteSectionDataProvider announcerIdentifier] */

void FUN_101317b14(void)

{
  func_0x000107c5fadc(0xd000000000000033,0x800000010ef36270);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101317b40; end: 101317c33; -[_TtC22SCSendToPromoteSection32SendToPromoteSectionDataProvider contentCellClassesByReuseIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101317b40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = 0x112d71de8;
  func_0x0001000285a8(0x112d71de8,&UNK_10d932900);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar4 = ((undefined8 *)(param_1 + _DAT_112d721e0))[1];
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d721e0);
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  uVar2 = 0;
  FUN_101318850(0,0x112d72268,&PTR_PTR_1126b5290);
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  func_0x000107c61434(uVar4);
  lVar3 = lVar1;
  FUN_10124b9b8(lVar1);
  func_0x000107c61588(lVar1);
  FUN_101313e70((undefined8 *)(lVar1 + 0x20));
  uVar4 = 0x112d6cac8;
  func_0x0001000285a8(0x112d6cac8,&UNK_10d9312f0);
  lVar1 = lVar3;
  func_0x000107c5f9dc(lVar3,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 101317c34; end: 101317d9f;  */

/* WARNING: Possible PIC construction at 0x000101317cdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101317d60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101317ce0) */
/* WARNING: Removing unreachable block (ram,0x000101317d64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101317c34(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d721c8);
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d72208);
    if (lVar3 != 0) {
      func_0x0001000285a8(0x112d72250,&UNK_10d932b98);
      func_0x000107c615f0(lVar2);
      func_0x000107c615f0(lVar3);
      func_0x000107c4e050(lVar2);
      func_0x000107c61180();
      lVar1 = lVar2;
      func_0x0001000b637c();
      func_0x000107c61170(lVar2);
      func_0x000107c615f0(lVar3);
      func_0x000100471e0c();
      func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 101317da0; end: 101317dfb;  */

void FUN_101317da0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1013178d0(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101317dfc; end: 101317e23; -[_TtC22SCSendToPromoteSection32SendToPromoteSectionDataProvider setUp] */

void FUN_101317dfc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101317c34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101317e24; end: 101317e83; -[_TtC22SCSendToPromoteSection32SendToPromoteSectionDataProvider containerCellViewModelsForIndexPaths:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101317e24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d721d8);
  FUN_101318850(0,0x112d6fa28,&PTR_PTR_1126aea98);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101317e84; end: 1013180fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101317e84(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  
  puVar3 = PTR_PTR_1126b53f0;
  func_0x000107c61168(PTR_PTR_1126b53f0);
  func_0x000107c51c50();
  func_0x000107c61180();
  uVar11 = 0;
  func_0x000107c30a60(1,0,1);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d721f0);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d721f0))[1];
  func_0x000107c61174(puVar3);
  puVar4 = puVar3;
  FUN_1013180fc();
  puVar5 = PTR_PTR_1126b53e8;
  func_0x000107c61168();
  puVar6 = puVar5;
  FUN_101319244();
  puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  uVar9 = uVar11;
  func_0x000107c5fadc(puVar6,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c48af4(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000101319310();
  puVar8 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x000107c5fadc(puVar6,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c48af4(puVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c3e378();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  FUN_101318270();
  uVar9 = param_1;
  FUN_101318440();
  puVar6 = PTR_PTR_1126b5678;
  func_0x000107c610f8();
  func_0x000107c4858c();
  func_0x000107c61170(uVar9);
  puVar7 = PTR_PTR_1126b52c0;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar10,uVar1);
  func_0x000107c46c20(0x7fefffffffffffff,0x3ff0000000000000,0x3fd3333333333333,0);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar10);
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c61170(puVar3);
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013180fc);
  (*pcVar2)();
}



/* Entry: 1013180fc; end: 10131826f;  */

undefined * FUN_1013180fc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  func_0x000107c614f0();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  func_0x000107c61174();
  uVar2 = 0x2d65746f6d6f7270;
  func_0x000107c5fadc(0x2d65746f6d6f7270,0xec0000006e6f6369);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
  }
  puVar4 = PTR_PTR_1126b53d0;
  func_0x000107c61168(PTR_PTR_1126b53d0);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar3);
  func_0x000107c5af88(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126b53d8;
  func_0x000107c610f8(PTR_PTR_1126b53d8);
  func_0x000107c46dd0();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c4516c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  return puVar4;
}



/* Entry: 101318270; end: 10131843f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101318270(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  
  FUN_101318440();
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d721b8);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d721b8))[1];
  puVar3 = PTR_PTR_1126b5650;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar6,uVar1);
  func_0x000107c48590();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar6);
  lVar4 = 0x112d72258;
  FUN_101318584(0x112d72258,&PTR_PTR_1126b5650,0x112d72260,&UNK_10d932ba0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 3;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined **)(lVar4 + 0x20) = puVar3;
  puVar5 = PTR_PTR_1126b5658;
  func_0x000107c610f8(PTR_PTR_1126b5658);
  uVar6 = 0;
  FUN_101318850(0,0x112d72258,&PTR_PTR_1126b5650);
  func_0x000107c61174(puVar3);
  lVar7 = lVar4;
  func_0x000107c5fc48(lVar4,uVar6);
  func_0x000107c61574(lVar4);
  func_0x000107c48594(puVar5);
  func_0x000107c61170(lVar7);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d721e8);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d721e8))[1];
  puVar8 = PTR_PTR_1126b02a8;
  func_0x000107c610f8();
  func_0x000107c61174(puVar5);
  func_0x000107c5fadc(uVar6,uVar1);
  func_0x000107c46d50();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101318440);
  (*pcVar2)();
}



/* Entry: 101318440; end: 101318563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101318440(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d72200);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d72200))[1];
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d721f8);
  uVar6 = ((undefined8 *)(unaff_x20 + _DAT_112d721f8))[1];
  puVar2 = PTR_PTR_1126b3558;
  func_0x000107c610f8(PTR_PTR_1126b3558);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c5fadc(uVar4,uVar6);
  func_0x000107c48298(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  FUN_101319244();
  puVar5 = PTR_PTR_1126b3560;
  func_0x000107c610f8(PTR_PTR_1126b3560);
  func_0x000107c5fadc(uVar4,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c46d94(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  puVar2 = PTR_PTR_1126b3568;
  func_0x000107c610f8(PTR_PTR_1126b3568);
  func_0x000107c48294();
  func_0x000107c61170(puVar5);
  return puVar2;
}



/* Entry: 101318564; end: 101318583;  */

void FUN_101318564(void)

{
  func_0x000107c61168(&PTR_PTR_1127c7330);
  return;
}



/* Entry: 101318584; end: 1013185fb;  */

void FUN_101318584(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101318850(0,param_1,param_2);
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



/* Entry: 1013185fc; end: 101318847;  */

/* WARNING: Removing unreachable block (ram,0x000101318844) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013185fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar3 = 0;
  uStack_80 = param_1;
  uStack_78 = param_2;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *(undefined **)(unaff_x20 + _DAT_112d721d8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d721e0);
  *puVar1 = 0xd000000000000027;
  puVar1[1] = 0x800000010ef361f0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d721e8);
  *puVar1 = 0xd000000000000029;
  puVar1[1] = 0x800000010ef36220;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d721f0);
  *puVar1 = 0xd000000000000011;
  puVar1[1] = 0x800000010ef36250;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f52f18;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d721f8);
  func_0x000107c5faec();
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52f18);
  *puVar1 = ppuVar6;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d72208) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112d72210,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d72218) = 0;
  lVar2 = _DAT_112d72220;
  uVar4 = 0;
  func_0x0001000c6560();
  uVar5 = 0x20;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d721b8);
  *puVar1 = uStack_80;
  puVar1[1] = uStack_78;
  *(long *)(unaff_x20 + _DAT_112d721c0) = param_3;
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c615f0();
    func_0x000107c51ce8();
    func_0x000107c61180();
  }
  *(long *)(unaff_x20 + _DAT_112d721c8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d721d0) = param_4;
  func_0x000107c615f0();
  func_0x000107c5eec4(lVar7);
  func_0x000107c5eeac();
  (**(code **)(lVar8 + 8))(lVar7,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d72200);
  *puVar1 = param_4;
  puVar1[1] = uVar5;
  FUN_101318564();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101318848; end: 10131884f;  */

void FUN_101318848(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1013178d0(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101318850; end: 1013188bf;  */

void FUN_101318850(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1013188c0; end: 1013188e3;  */

void FUN_1013188c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013188e4; end: 10131898b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013188e4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(*unaff_x20 + 0x10);
  uVar1 = uVar5;
  func_0x000107c4e9e4(uVar5);
  func_0x000107c61180();
  func_0x000107c50134();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_101318a20();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d72310) = uVar5;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  func_0x000107c4fba8(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(plVar4);
  return;
}



/* Entry: 10131898c; end: 101318993;  */

undefined8 FUN_10131898c(void)

{
  return 0;
}



/* Entry: 101318994; end: 1013189b3;  */

void FUN_101318994(void)

{
  func_0x000107c61168(&PTR_PTR_112d722b0);
  return;
}



/* Entry: 1013189b4; end: 101318a0f; -[_TtC22SCSendToPromoteSection29SendToPromoteSectionExtension init] */

void FUN_1013189b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSendToPromoteSection.SendToPromoteSectionExtension",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013189e0);
  (*pcVar1)();
}



/* Entry: 101318a10; end: 101318a1f; -[_TtC22SCSendToPromoteSection29SendToPromoteSectionExtension .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101318a10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d72310));
  return;
}



/* Entry: 101318a20; end: 101318a3f;  */

void FUN_101318a20(void)

{
  func_0x000107c61168(&PTR_PTR_1127c74b8);
  return;
}



/* Entry: 101318a40; end: 101318adf; -[_TtC22SCSendToPromoteSection29SendToPromoteSectionExtension sectionIdentifiers] */

/* WARNING: Removing unreachable block (ram,0x000101318adc) */

void FUN_101318a40(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar3 = 0x30;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  ppuVar4 = &PTR____CFConstantStringClassReference_110f12d18;
  func_0x000107c5faec();
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f12d18);
  *(undefined ***)(lVar1 + 0x20) = ppuVar4;
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  lVar2 = lVar1;
  func_0x000107c5fc48(lVar1,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101318ae0; end: 101318b9b; -[_TtC22SCSendToPromoteSection29SendToPromoteSectionExtension sectionDescriptor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101318ae0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_40;
  long lStack_38;
  
  plVar7 = &lStack_40;
  func_0x000107c61174();
  lVar5 = param_1;
  func_0x000107c51b74();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5fc54();
  func_0x000107c61170(lVar5);
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar2 = *(undefined8 *)(lVar6 + 0x20);
    uVar3 = *(undefined8 *)(lVar6 + 0x28);
    func_0x000107c61434(uVar3);
    func_0x000107c6142c(lVar6);
    lVar6 = 0;
    FUN_101319224();
    lVar5 = lVar6;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar5 + _DAT_112d723b0);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    lStack_40 = lVar5;
    lStack_38 = lVar6;
    func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101318b9c);
  (*pcVar4)();
}



/* Entry: 101318b9c; end: 101318c03; -[_TtC22SCSendToPromoteSection29SendToPromoteSectionExtension sectionCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101318b9c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_30;
  long lStack_28;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112d72310);
  lVar2 = 0;
  FUN_101318d18();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d72340) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c615f0(uVar4);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101318c04; end: 101318c0b; -[_TtC22SCSendToPromoteSection29SendToPromoteSectionExtension sectionLoggingParser] */

void FUN_101318c04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 101318c0c; end: 101318cab; -[_TtC22SCSendToPromoteSection27SendToPromoteSectionCreator sectionCreatorWithActionHandler:sendToTracker:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101318c0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112d72340);
  lVar2 = 0;
  FUN_101318f70();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d72370) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112d72378) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112d72380) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(uVar4);
  func_0x000107c61154(&lStack_40,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101318cac; end: 101318d07; -[_TtC22SCSendToPromoteSection27SendToPromoteSectionCreator init] */

void FUN_101318cac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSendToPromoteSection.SendToPromoteSectionCreator",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101318cd8);
  (*pcVar1)();
}



/* Entry: 101318d08; end: 101318d17; -[_TtC22SCSendToPromoteSection27SendToPromoteSectionCreator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101318d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d72340));
  return;
}



/* Entry: 101318d18; end: 101318d37;  */

void FUN_101318d18(void)

{
  func_0x000107c61168(&PTR_PTR_1127c7578);
  return;
}



/* Entry: 101318d38; end: 101318e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101318d38(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101318e68);
    (*pcVar1)();
  }
  lVar2 = param_1;
  func_0x000107c44fdc();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d72378);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d72380);
    FUN_101318564(0);
    func_0x000107c610f8();
    func_0x000107c615f0(uVar6);
    func_0x000107c615f0(uVar5);
    FUN_1013185fc(lVar3,param_2,uVar6,uVar5);
    func_0x000107c615e8(uVar6);
    func_0x000107c615e8(uVar5);
    puVar4 = PTR_PTR_1126b1108;
    func_0x000107c610f8(PTR_PTR_1126b1108);
    func_0x000107c48b78();
    func_0x000107c58d74();
    func_0x000107c52168(puVar4);
    func_0x000107c44fdc(param_1);
    func_0x000107c61180();
    func_0x000107c41cc0(uVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101318e6c);
  (*pcVar1)();
}



/* Entry: 101318e6c; end: 101318ecb; -[_TtC22SCSendToPromoteSection31SendToPromoteSectionCreatorImpl sectionForDescriptor:] */

void FUN_101318e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101318d38(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101318ecc; end: 101318f27; -[_TtC22SCSendToPromoteSection31SendToPromoteSectionCreatorImpl init] */

void FUN_101318ecc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSendToPromoteSection.SendToPromoteSectionCreatorImpl",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101318ef8);
  (*pcVar1)();
}



/* Entry: 101318f28; end: 101318f6f; -[_TtC22SCSendToPromoteSection31SendToPromoteSectionCreatorImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101318f44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101318f48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101318f28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d72370));
  return;
}



/* Entry: 101318f70; end: 101318f8f;  */

void FUN_101318f70(void)

{
  func_0x000107c61168(&PTR_PTR_1127c7640);
  return;
}



/* Entry: 101318f90; end: 101319153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101318f90(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126b55e0;
  func_0x000107c610f8();
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c46c24();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (puVar2 == (undefined *)0x0) {
    func_0x0001048d9980(0xd000000000000059,0x800000010ef363b0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101319130);
    (*pcVar1)();
  }
  puVar5 = PTR_PTR_1126b16f8;
  func_0x000107c610f8();
  func_0x000107c47628();
  if (puVar5 == (undefined *)0x0) {
    func_0x0001048d9980(0xd000000000000060,0x800000010ef36410);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101319154);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d723b0);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112d723b0))[1];
  func_0x000107c5fadc(uVar3,uVar4);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x000107c4f78c();
    func_0x000107c61180();
    lVar6 = param_1;
    if (param_1 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      goto LAB_10131908c;
    }
  }
  uVar4 = 0xe000000000000000;
LAB_10131908c:
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar4);
  uVar4 = uVar3;
  func_0x000106c9c554(0,0,0,0,uVar3,lVar6,puVar2,puVar5,1,0);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar6);
  return uVar4;
}



/* Entry: 101319154; end: 1013191b3; -[_TtC22SCSendToPromoteSection30SendToPromoteSectionDescriptor sectionDescriptorForQuery:] */

void FUN_101319154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101318f90(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1013191b4; end: 10131920f; -[_TtC22SCSendToPromoteSection30SendToPromoteSectionDescriptor init] */

void FUN_1013191b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSendToPromoteSection.SendToPromoteSectionDescriptor",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013191e0);
  (*pcVar1)();
}



/* Entry: 101319210; end: 101319223; -[_TtC22SCSendToPromoteSection30SendToPromoteSectionDescriptor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101319210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d723b0 + 8))
  ;
  return;
}



/* Entry: 101319224; end: 101319243;  */

void FUN_101319224(void)

{
  func_0x000107c61168(&PTR_PTR_1127c7718);
  return;
}



/* Entry: 101319244; end: 1013193db;  */

undefined1  [16] FUN_101319244(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffeb;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef36500);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef364e0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101319310);
  (*pcVar1)();
}



/* Entry: 1013193dc; end: 101319423; -[SCSendToPromoteSectionEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013193dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d723e0;
  func_0x000107c61428(param_1 + _DAT_112d723e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101319424; end: 10131947b; -[SCSendToPromoteSectionEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101319424(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d723e0;
  func_0x000107c61428(param_1 + _DAT_112d723e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131947c; end: 1013195a7; -[SCSendToPromoteSectionEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000101319540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101319550: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101319544) */
/* WARNING: Removing unreachable block (ram,0x000101319554) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131947c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = 0;
    FUN_101318994();
    func_0x000107c613fc();
    *(long *)(lVar2 + 0x10) = lVar1;
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c4e9e4();
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c50134();
    func_0x000107c61180();
    lVar4 = 0;
    FUN_101318a20();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(long *)(lVar5 + _DAT_112d72310) = lVar3;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c4fba8(lVar2);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013195a8; end: 1013195eb; -[SCSendToPromoteSectionEntryPoint end] */

void FUN_1013195a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013195ec; end: 10131970b;  */

void FUN_1013195ec(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "SCSendToPromoteSection/SCSendToPromoteSectionEntryPoint.swift",0x3d,2,0x21,
                        0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10131970c);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10131970c; end: 1013197b7; -[SCSendToPromoteSectionEntryPoint setValue:forIvarName:] */

void FUN_10131970c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1013195ec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1013197b8; end: 101319817; -[SCSendToPromoteSectionEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013197b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d723e0,0);
  *(undefined8 *)(param_1 + _DAT_112d723e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101319818; end: 10131984b;  */

void FUN_101319818(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10131984c; end: 101319883; -[SCSendToPromoteSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131984c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d723e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d723e8));
  return;
}



/* Entry: 101319884; end: 1013198a3;  */

void FUN_101319884(void)

{
  func_0x000107c61168(&PTR_PTR_1127c77e0);
  return;
}



/* Entry: 1013198a4; end: 1013198ff; -[_TtC20SendToFanPassSection32SendToFanPassSectionDataProvider init] */

void FUN_1013198a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToFanPassSection.SendToFanPassSectionDataProvider",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013198d0);
  (*pcVar1)();
}



/* Entry: 101319900; end: 101319a1f; -[_TtC20SendToFanPassSection32SendToFanPassSectionDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101319900(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d72418 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d72420));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d72428));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d72430));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d72438));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d72440));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d72448 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d72450 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d72458 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d72460 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d72468 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d72470));
  func_0x0001012b7b48(param_1 + _DAT_112d72478);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d72480));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d72488));
  return;
}



/* Entry: 101319a20; end: 101319a3f; -[_TtC20SendToFanPassSection32SendToFanPassSectionDataProvider dataProviderDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101319a20(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112d72478);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101319a40; end: 101319a53; -[_TtC20SendToFanPassSection32SendToFanPassSectionDataProvider setDataProviderDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101319a40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112d72478,param_3);
  return;
}



/* Entry: 101319a54; end: 101319a87; -[_TtC20SendToFanPassSection32SendToFanPassSectionDataProvider sectionDataModel] */

void FUN_101319a54(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101319a88();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101319a88; end: 101319b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101319a88(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  
  lVar1 = _DAT_112d72480;
  lVar6 = *(long *)(unaff_x20 + _DAT_112d72480);
  if (lVar6 == 0) {
    puVar2 = PTR_PTR_1126b55e0;
    func_0x000107c610f8();
    uVar3 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    uVar4 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c46c24();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    if (puVar2 == (undefined *)0x0) {
      return 0;
    }
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d72418);
    uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112d72418))[1];
    puVar5 = PTR_PTR_1126b5240;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar3,uVar4);
    func_0x000107c48550();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar5;
    func_0x000107c61170(uVar3);
    lVar6 = *(long *)(unaff_x20 + lVar1);
    if (lVar6 == 0) {
      return 0;
    }
  }
  func_0x000107c61174(lVar6);
  return lVar6;
}



/* Entry: 101319ba0; end: 101319c77; -[_TtC20SendToFanPassSection32SendToFanPassSectionDataProvider setSectionDataModel:] */

/* WARNING: Possible PIC construction at 0x000101319c04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101319c50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101319c08) */
/* WARNING: Removing unreachable block (ram,0x000101319c54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101319ba0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b5240;
    func_0x000107c61168(PTR_PTR_1126b5240);
    lVar2 = param_3;
    func_0x000107c6148c(param_3,puVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112d72480);
      *(long *)(param_1 + _DAT_112d72480) = lVar2;
      func_0x000107c615f4(param_3,2);
      func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 101319c78; end: 101319e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101319c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  if (*(long *)(unaff_x20 + _DAT_112d72470) != 0) {
    func_0x000107c3e208();
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d72468);
  uVar8 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c6142c(uVar8);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d72460);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112d72460))[1];
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d72458);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112d72458))[1];
  puVar5 = PTR_PTR_1126b3558;
  func_0x000107c610f8(PTR_PTR_1126b3558);
  func_0x000107c5fadc(uVar8,uVar2);
  func_0x000107c5fadc(uVar6,uVar3);
  func_0x000107c48298(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c40404(param_1);
  func_0x000107c61170(puVar5);
  lVar7 = 0x112d6fa28;
  FUN_10131a9a8(0x112d6fa28,&PTR_PTR_1126aea98,0x112d6fd98,&UNK_10d932bb0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 3;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d72448);
  uVar6 = ((undefined8 *)(unaff_x20 + _DAT_112d72448))[1];
  FUN_10131a328(param_1,param_2,param_3);
  puVar5 = PTR_PTR_1126aea98;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar8,uVar6);
  func_0x000107c45d60();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar8);
  if (puVar5 != (undefined *)0x0) {
    *(undefined **)(lVar7 + 0x20) = puVar5;
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d72440);
    *(long *)(unaff_x20 + _DAT_112d72440) = lVar7;
    func_0x000107c6142c(uVar8);
    lVar7 = unaff_x20 + _DAT_112d72478;
    func_0x000107c61618();
    if (lVar7 != 0) {
      func_0x000107c51b5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar7);
      return;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101319e98);
  (*pcVar4)();
}



/* Entry: 101319e98; end: 101319eb7; -[_TtC20SendToFanPassSection32SendToFanPassSectionDataProvider updateQueuePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101319e98(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d72470));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101319eb8; end: 101319eeb; -[_TtC20SendToFanPassSection32SendToFanPassSectionDataProvider setUpdateQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101319eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d72470);
  *(undefined8 *)(param_1 + _DAT_112d72470) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101319eec; end: 101319ef3; -[_TtC20SendToFanPassSection32SendToFanPassSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_101319eec(void)

{
  return 1;
}



/* Entry: 101319ef4; end: 101319ef7; -[_TtC20SendToFanPassSection32SendToFanPassSectionDataProvider addListener:] */

void FUN_101319ef4(void)

{
  return;
}



/* Entry: 101319ef8; end: 101319efb; -[_TtC20SendToFanPassSection32SendToFanPassSectionDataProvider removeListener:] */

void FUN_101319ef8(void)

{
  return;
}



/* Entry: 101319efc; end: 101319f27; +[_TtC20SendToFanPassSection32SendToFanPassSectionDataProvider announcerIdentifier] */

void FUN_101319efc(void)

{
  func_0x000107c5fadc(0xd000000000000033,0x800000010ef365c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101319f28; end: 10131a01b; -[_TtC20SendToFanPassSection32SendToFanPassSectionDataProvider contentCellClassesByReuseIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101319f28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = 0x112d71de8;
  func_0x0001000285a8(0x112d71de8,&UNK_10d932900);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar4 = ((undefined8 *)(param_1 + _DAT_112d72448))[1];
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d72448);
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  uVar2 = 0;
  FUN_10131b06c(0,0x112d72268,&PTR_PTR_1126b5290);
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  func_0x000107c61434(uVar4);
  lVar3 = lVar1;
  FUN_10124b9b8(lVar1);
  func_0x000107c61588(lVar1);
  FUN_101313e70((undefined8 *)(lVar1 + 0x20));
  uVar4 = 0x112d6cac8;
  func_0x0001000285a8(0x112d6cac8,&UNK_10d9312f0);
  lVar1 = lVar3;
  func_0x000107c5f9dc(lVar3,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10131a01c; end: 10131a1eb;  */

/* WARNING: Possible PIC construction at 0x00010131a128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131a1ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010131a12c) */
/* WARNING: Removing unreachable block (ram,0x00010131a1b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131a01c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112d72428);
  if (lVar4 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112d72470);
    if (lVar5 != 0) {
      func_0x0001000285a8(0x112d72250,&UNK_10d932b98);
      func_0x000107c615f0(lVar4);
      func_0x000107c615f0(lVar5);
      func_0x000107c4e050(lVar4);
      func_0x000107c61180();
      lVar1 = lVar4;
      func_0x0001000b637c();
      func_0x000107c61170(lVar4);
      func_0x0001000285a8(0x112d5c1e0,&UNK_10d923090);
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d72438);
      func_0x000107c5c368(uVar2);
      func_0x000107c61180();
      uVar3 = uVar2;
      func_0x0001000b637c();
      func_0x000107c61170(uVar2);
      uVar2 = uVar3;
      func_0x0001006c733c(uVar3);
      func_0x000107c61574(lVar1);
      func_0x000107c61574(uVar3);
      func_0x000107c615f0(lVar5);
      func_0x000100471e0c();
      func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
      return;
    }
  }
  return;
}



/* Entry: 10131a1ec; end: 10131a29f;  */

void FUN_10131a1ec(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  puVar4 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar4,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = uVar3;
    func_0x000107c5faec(uVar3);
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar3);
    FUN_101319c78(uVar2,uVar1,puVar4);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(puVar4);
  }
  return;
}



/* Entry: 10131a2a0; end: 10131a2c7; -[_TtC20SendToFanPassSection32SendToFanPassSectionDataProvider setUp] */

void FUN_10131a2a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10131a01c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10131a2c8; end: 10131a327; -[_TtC20SendToFanPassSection32SendToFanPassSectionDataProvider containerCellViewModelsForIndexPaths:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131a2c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d72440);
  FUN_10131b06c(0,0x112d6fa28,&PTR_PTR_1126aea98);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10131a328; end: 10131a4f3;  */

undefined * FUN_10131a328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b53f0;
  func_0x000107c61168(PTR_PTR_1126b53f0);
  func_0x000107c51c50();
  func_0x000107c61180();
  func_0x000107c30a60(1,0,1);
  func_0x000107c61174(puVar2);
  puVar3 = puVar2;
  FUN_10131a4f4();
  FUN_10131af4c(param_2,param_3);
  FUN_10131a66c();
  uVar6 = param_1;
  FUN_10131a83c();
  puVar4 = PTR_PTR_1126b5678;
  func_0x000107c610f8();
  func_0x000107c4858c();
  func_0x000107c61170(uVar6);
  puVar5 = PTR_PTR_1126b52c0;
  func_0x000107c610f8();
  uVar6 = 0x737361705f6e6166;
  func_0x000107c5fadc(0x737361705f6e6166,0xed00006c6c65635f);
  func_0x000107c46c20(0x7fefffffffffffff,0x3ff0000000000000,0x3fd3333333333333,0);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10131a4f4);
  (*pcVar1)();
}



/* Entry: 10131a4f4; end: 10131a66b;  */

undefined * FUN_10131a4f4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  func_0x000107c614f0();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  func_0x000107c61174();
  uVar2 = 0x737361702d6e6166;
  func_0x000107c5fadc(0x737361702d6e6166,0xee0065676461622d);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
  }
  puVar4 = PTR_PTR_1126b53d0;
  func_0x000107c61168(PTR_PTR_1126b53d0);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar3);
  func_0x000107c5af88(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126b53d8;
  func_0x000107c610f8(PTR_PTR_1126b53d8);
  func_0x000107c46dd0();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c4516c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  return puVar4;
}



/* Entry: 10131a66c; end: 10131a83b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10131a66c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  
  FUN_10131a83c();
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d72418);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d72418))[1];
  puVar3 = PTR_PTR_1126b5650;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar6,uVar1);
  func_0x000107c48590();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar6);
  lVar4 = 0x112d72258;
  FUN_10131a9a8(0x112d72258,&PTR_PTR_1126b5650,0x112d72260,&UNK_10d932ba0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 3;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined **)(lVar4 + 0x20) = puVar3;
  puVar5 = PTR_PTR_1126b5658;
  func_0x000107c610f8(PTR_PTR_1126b5658);
  uVar6 = 0;
  FUN_10131b06c(0,0x112d72258,&PTR_PTR_1126b5650);
  func_0x000107c61174(puVar3);
  lVar7 = lVar4;
  func_0x000107c5fc48(lVar4,uVar6);
  func_0x000107c61574(lVar4);
  func_0x000107c48594(puVar5);
  func_0x000107c61170(lVar7);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d72450);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d72450))[1];
  puVar8 = PTR_PTR_1126b02a8;
  func_0x000107c610f8();
  func_0x000107c61174(puVar5);
  func_0x000107c5fadc(uVar6,uVar1);
  func_0x000107c46d50();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10131a83c);
  (*pcVar2)();
}



/* Entry: 10131a83c; end: 10131a987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10131a83c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d72460);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d72460))[1];
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d72458);
  lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112d72458))[1];
  puVar2 = PTR_PTR_1126b3558;
  func_0x000107c610f8(PTR_PTR_1126b3558);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c5fadc(uVar6,lVar5);
  func_0x000107c48298(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  lVar7 = ((undefined8 *)(unaff_x20 + _DAT_112d72468))[1];
  if (lVar7 == 0) {
    func_0x00010131bcbc();
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d72468);
    lVar5 = lVar7;
  }
  puVar4 = PTR_PTR_1126b3560;
  func_0x000107c610f8(PTR_PTR_1126b3560);
  func_0x000107c61434(lVar7);
  func_0x000107c5fadc(uVar6,lVar5);
  func_0x000107c6142c(lVar5);
  func_0x000107c46d94(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  puVar2 = PTR_PTR_1126b3568;
  func_0x000107c610f8(PTR_PTR_1126b3568);
  func_0x000107c48294();
  func_0x000107c61170(puVar4);
  return puVar2;
}



/* Entry: 10131a988; end: 10131a9a7;  */

void FUN_10131a988(void)

{
  func_0x000107c61168(&PTR_PTR_1127c78a0);
  return;
}



/* Entry: 10131a9a8; end: 10131aa1f;  */

void FUN_10131a9a8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10131b06c(0,param_1,param_2);
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



/* Entry: 10131aa20; end: 10131af43;  */

/* WARNING: Removing unreachable block (ram,0x00010131af40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131aa20(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long extraout_x8;
  long unaff_x20;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **appuStack_b0 [3];
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined1 auStack_70 [8];
  undefined **ppuStack_68;
  
  lVar5 = 0;
  uVar6 = param_2;
  func_0x000107c5eec8();
  lStack_98 = *(long *)(lVar5 + -8);
  lStack_90 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  appuStack_b0[2] = (undefined **)((long)appuStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  *(undefined **)(unaff_x20 + _DAT_112d72440) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d72448);
  *puVar2 = 0xd000000000000027;
  puVar2[1] = 0x800000010ef36560;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d72450);
  *puVar2 = 0xd000000000000029;
  puVar2[1] = 0x800000010ef36590;
  ppuVar13 = &PTR____CFConstantStringClassReference_110f52cb8;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d72458);
  ppuVar11 = ppuVar13;
  func_0x000107c5faec();
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52cb8);
  *puVar2 = ppuVar11;
  puVar2[1] = uVar6;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d72468);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d72470) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112d72478,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d72480) = 0;
  lVar5 = _DAT_112d72488;
  uVar6 = 0;
  func_0x0001000c6560();
  ppuVar11 = (undefined **)0x20;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar5) = uVar6;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d72418);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  *(undefined ***)(unaff_x20 + _DAT_112d72420) = param_3;
  if (param_3 == (undefined **)0x0) {
    *(undefined8 *)(unaff_x20 + _DAT_112d72428) = 0;
    *(undefined8 *)(unaff_x20 + _DAT_112d72430) = param_4;
    *(undefined ***)(unaff_x20 + _DAT_112d72438) = param_5;
    func_0x000107c615f0(param_4);
    func_0x000107c615f0();
    ppuVar8 = appuStack_b0[2];
    func_0x000107c5eec4(appuStack_b0[2]);
    func_0x000107c5eeac();
    (**(code **)(lStack_98 + 8))(ppuVar8,lStack_90);
  }
  else {
    ppuVar11 = param_3;
    func_0x000107c615f0();
    func_0x000107c51ce8();
    func_0x000107c61180();
    *(undefined ***)(unaff_x20 + _DAT_112d72428) = ppuVar11;
    *(undefined8 *)(unaff_x20 + _DAT_112d72430) = param_4;
    *(undefined ***)(unaff_x20 + _DAT_112d72438) = param_5;
    func_0x000107c615f0(param_4);
    func_0x000107c615f0(param_5);
    func_0x000107c51ce8();
    func_0x000107c61180();
    ppuVar11 = param_3;
    func_0x000107c4e054();
    func_0x000107c61180();
    param_5 = (undefined **)0x0;
    FUN_10131b06c(0,0x112d60fb0,&PTR_PTR_1126b3568);
    ppuVar7 = ppuVar11;
    func_0x000107c5fc54();
    func_0x000107c61170(ppuVar11);
    func_0x000107c5faec();
    ppuVar11 = param_5;
    func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52cb8);
    appuStack_b0[1] = param_3;
    if ((ulong)ppuVar7 >> 0x3e == 0) {
      ppuVar14 = *(undefined ***)(((ulong)ppuVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      ppuVar14 = (undefined **)((ulong)ppuVar7 & 0xffffffffffffff8);
      if ((undefined **)0x7fffffffffffffff < ppuVar7) {
        ppuVar14 = ppuVar7;
      }
      func_0x000107c60480();
    }
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar15 = (undefined **)0x0;
      uStack_80 = (ulong)ppuVar7 & 0xc000000000000001;
      uStack_88 = (ulong)ppuVar7 & 0xffffffffffffff8;
      do {
        if (uStack_80 == 0) {
          if (*(undefined ***)(uStack_88 + 0x10) <= ppuVar15) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10131ae98);
            (*pcVar4)();
          }
          ppuVar8 = (undefined **)ppuVar7[(long)ppuVar15 + 4];
          func_0x000107c61174();
          ppuVar12 = ppuVar11;
        }
        else {
          ppuVar8 = ppuVar15;
          ppuVar12 = ppuVar7;
          FUN_1011f491c();
        }
        ppuVar1 = (undefined **)((long)ppuVar15 + 1);
        if (SCARRY8((long)ppuVar15,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10131ae94);
          (*pcVar4)();
        }
        ppuVar11 = ppuVar8;
        func_0x000107c4fa44();
        func_0x000107c61180();
        ppuVar9 = ppuVar11;
        func_0x000107c44fdc();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar11);
        ppuVar10 = ppuVar9;
        func_0x000107c51cec();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar9);
        ppuVar9 = ppuVar10;
        func_0x000107c5faec();
        ppuVar11 = ppuVar12;
        func_0x000107c61170(ppuVar10);
        if ((ppuVar9 == ppuVar13) && (ppuVar12 == param_5)) {
          func_0x000107c6142c(ppuVar7);
          ppuVar7 = param_5;
          param_5 = ppuVar12;
LAB_10131ae0c:
          func_0x000107c6142c(ppuVar7);
          func_0x000107c6142c(param_5);
          ppuVar13 = ppuVar8;
          func_0x000107c4fa44();
          func_0x000107c61180();
          ppuVar7 = ppuVar13;
          func_0x000107c44fdc();
          func_0x000107c61180();
          func_0x000107c61170(ppuVar13);
          ppuVar13 = ppuVar7;
          func_0x000107c4fa4c();
          func_0x000107c61180();
          func_0x000107c61170(ppuVar7);
          param_5 = ppuVar13;
          func_0x000107c5faec();
          func_0x000107c61170(ppuVar13);
          func_0x000107c615e8(appuStack_b0[1]);
          func_0x000107c61170();
          goto LAB_10131aef8;
        }
        ppuVar11 = ppuVar12;
        func_0x000107c605b8(ppuVar9,ppuVar12,ppuVar13,param_5,0);
        func_0x000107c6142c(ppuVar12);
        if (((ulong)ppuVar9 & 1) != 0) goto LAB_10131ae0c;
        func_0x000107c61170(ppuVar8);
        ppuVar15 = (undefined **)((long)ppuVar15 + 1);
      } while (ppuVar1 != ppuVar14);
    }
    func_0x000107c6142c(ppuVar7);
    func_0x000107c6142c();
    ppuVar8 = appuStack_b0[2];
    func_0x000107c5eec4(appuStack_b0[2]);
    func_0x000107c5eeac();
    func_0x000107c615e8(appuStack_b0[1]);
    (**(code **)(lStack_98 + 8))(ppuVar8,lStack_90);
  }
LAB_10131aef8:
  puVar3 = (ulong *)(unaff_x20 + _DAT_112d72460);
  *puVar3 = (ulong)param_5;
  puVar3[1] = (ulong)ppuVar11;
  FUN_10131a988();
  ppuStack_68 = ppuVar8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10131af44; end: 10131af4b;  */

void FUN_10131af44(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  puVar5 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar5,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = uVar4;
    func_0x000107c5faec(uVar4);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar4);
    FUN_101319c78(uVar3,uVar2,puVar5);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c6142c(puVar5);
  }
  return;
}



/* Entry: 10131af4c; end: 10131b06b;  */

undefined * FUN_10131af4c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = param_1;
  lVar5 = param_2;
  FUN_10131bbf0();
  lVar6 = param_2;
  if (param_2 == 0) {
    param_1 = uVar1;
    lVar6 = lVar5;
    func_0x00010131bcbc();
  }
  puVar2 = PTR_PTR_1126b53e8;
  func_0x000107c61168(PTR_PTR_1126b53e8);
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x000107c61434(param_2);
  func_0x000107c5fadc(param_1,lVar6);
  func_0x000107c6142c(lVar6);
  func_0x000107c48af4(puVar3);
  func_0x000107c61170(param_1);
  puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x000107c5fadc(uVar1,lVar5);
  func_0x000107c6142c(lVar5);
  func_0x000107c48af4(puVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c3e378(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return puVar2;
}



/* Entry: 10131b06c; end: 10131b0ab;  */

void FUN_10131b06c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10131b0ac; end: 10131b1bf;  */

void FUN_10131b0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 10131b1c0; end: 10131b1f3;  */

void FUN_10131b1c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10131b1f4; end: 10131b213;  */

void FUN_10131b1f4(void)

{
  func_0x00010131b0f0();
  return;
}



/* Entry: 10131b214; end: 10131b21b;  */

undefined8 FUN_10131b214(void)

{
  return 0;
}



/* Entry: 10131b21c; end: 10131b23b;  */

void FUN_10131b21c(void)

{
  func_0x000107c61168(&PTR_PTR_112d72500);
  return;
}



/* Entry: 10131b23c; end: 10131b297; -[_TtC20SendToFanPassSection29SendToFanPassSectionExtension init] */

void FUN_10131b23c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToFanPassSection.SendToFanPassSectionExtension",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10131b268);
  (*pcVar1)();
}



/* Entry: 10131b298; end: 10131b2cf; -[_TtC20SendToFanPassSection29SendToFanPassSectionExtension .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010131b2b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010131b2b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131b298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d72570));
  return;
}



/* Entry: 10131b2d0; end: 10131b2ef;  */

void FUN_10131b2d0(void)

{
  func_0x000107c61168(&PTR_PTR_1127c7a48);
  return;
}



/* Entry: 10131b2f0; end: 10131b38f; -[_TtC20SendToFanPassSection29SendToFanPassSectionExtension sectionIdentifiers] */

/* WARNING: Removing unreachable block (ram,0x00010131b38c) */

void FUN_10131b2f0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar3 = 0x30;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  ppuVar4 = &PTR____CFConstantStringClassReference_110f12cd8;
  func_0x000107c5faec();
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f12cd8);
  *(undefined ***)(lVar1 + 0x20) = ppuVar4;
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  lVar2 = lVar1;
  func_0x000107c5fc48(lVar1,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10131b390; end: 10131b44b; -[_TtC20SendToFanPassSection29SendToFanPassSectionExtension sectionDescriptor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131b390(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_40;
  long lStack_38;
  
  plVar7 = &lStack_40;
  func_0x000107c61174();
  lVar5 = param_1;
  func_0x000107c51b74();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5fc54();
  func_0x000107c61170(lVar5);
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar2 = *(undefined8 *)(lVar6 + 0x20);
    uVar3 = *(undefined8 *)(lVar6 + 0x28);
    func_0x000107c61434(uVar3);
    func_0x000107c6142c(lVar6);
    lVar6 = 0;
    FUN_10131bbd0();
    lVar5 = lVar6;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar5 + _DAT_112d72628);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    lStack_40 = lVar5;
    lStack_38 = lVar6;
    func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10131b44c);
  (*pcVar4)();
}



/* Entry: 10131b44c; end: 10131b4db; -[_TtC20SendToFanPassSection29SendToFanPassSectionExtension sectionCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131b44c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112d72570);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112d72578);
  lVar2 = 0;
  FUN_10131b608();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d725a8) = uVar4;
  *(undefined8 *)(lVar3 + _DAT_112d725b0) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(uVar4);
  func_0x000107c615f0(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10131b4dc; end: 10131b4e3; -[_TtC20SendToFanPassSection29SendToFanPassSectionExtension sectionLoggingParser] */

void FUN_10131b4dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10131b4e4; end: 10131b573; -[_TtC20SendToFanPassSection27SendToFanPassSectionCreator sectionCreatorWithActionHandler:sendToTracker:uiContainer:] */

void FUN_10131b4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10131b628(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10131b574; end: 10131b5cf; -[_TtC20SendToFanPassSection27SendToFanPassSectionCreator init] */

void FUN_10131b574(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToFanPassSection.SendToFanPassSectionCreator",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10131b5a0);
  (*pcVar1)();
}



/* Entry: 10131b5d0; end: 10131b607; -[_TtC20SendToFanPassSection27SendToFanPassSectionCreator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010131b5ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010131b5f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131b5d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d725a8));
  return;
}



/* Entry: 10131b608; end: 10131b627;  */

void FUN_10131b608(void)

{
  func_0x000107c61168(&PTR_PTR_1127c7b10);
  return;
}



/* Entry: 10131b628; end: 10131b6ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131b628(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d725a8);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d725b0);
  lVar2 = 0;
  FUN_10131b958();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d725e0) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112d725e8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112d725f0) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_112d725f8) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(uVar5);
  func_0x000107c615f0(uVar4);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}


