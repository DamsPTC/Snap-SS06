/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10388462c; end: 10388465f; -[_TtC21ARBarFeatureLEBrowser18ARBarFeatureSearch arBarItem] */

void FUN_10388462c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103884660();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103884660; end: 103884797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103884660(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c5afac(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
  }
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c4a8a4();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61428(unaff_x20 + _DAT_112fa5178,auStack_58,0,0);
  puVar1 = PTR_PTR_1126c8d10;
  func_0x000107c610f8(PTR_PTR_1126c8d10);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar4 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f1707d0);
  func_0x000107c478d4(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  return puVar1;
}



/* Entry: 103884798; end: 10388484f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103884798(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112fa5178) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5180) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103884850; end: 1038848af; -[_TtC21ARBarFeatureLEBrowser18ARBarFeatureSearch activateFromARBar:activationType:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103884850(undefined8 param_1)

{
  long lStack_28;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 != 0) {
    func_0x000107c5cf50(lStack_28);
    func_0x000107c615e8(lStack_28);
  }
  func_0x000107c61170(param_1);
  return 1;
}



/* Entry: 1038848b0; end: 1038848b3; -[_TtC21ARBarFeatureLEBrowser18ARBarFeatureSearch deactivateFromARBar:deactivationType:completion:] */

void FUN_1038848b0(void)

{
  return;
}



/* Entry: 1038848b4; end: 103884913; -[_TtC21ARBarFeatureLEBrowser18ARBarFeatureSearch init] */

void FUN_1038848b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.ARBarFeatureSearch",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038848e0);
  (*pcVar1)();
}



/* Entry: 103884914; end: 103884923; -[_TtC21ARBarFeatureLEBrowser18ARBarFeatureSearch .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103884914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa5180));
  return;
}



/* Entry: 103884924; end: 103884943;  */

void FUN_103884924(void)

{
  func_0x000107c61168(&PTR_PTR_1128f69f0);
  return;
}



/* Entry: 103884944; end: 103884b9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103884944(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa51b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa51b8) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112fa51c0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa51c8) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112fa51d0) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103884b9c; end: 103884bfb; -[_TtC21ARBarFeatureLEBrowser25ARBarSideFeaturesProvider init] */

void FUN_103884b9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.ARBarSideFeaturesProvider",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103884bc8);
  (*pcVar1)();
}



/* Entry: 103884bfc; end: 103884c43; -[_TtC21ARBarFeatureLEBrowser25ARBarSideFeaturesProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103884c28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103884c2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103884bfc(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fa51b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa51b8));
  return;
}



/* Entry: 103884c44; end: 103884dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_103884c44(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puStack_48;
  
  puVar5 = &UNK_1106a1070;
  puVar1 = puVar5;
  func_0x000107c613fc(&UNK_1106a1070,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcVar2 = FUN_103884e70;
  func_0x0001000c0ebc(FUN_103884e70,puVar1);
  func_0x000107c61574(puVar1);
  func_0x0001007dbe30();
  func_0x000104884898();
  func_0x000107c61574(pcVar2);
  puVar3 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  puVar4 = puVar3;
  func_0x0001006c733c();
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c613fc(&UNK_1106a1070,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar1 = &UNK_1106a1098;
  func_0x000107c613fc(&UNK_1106a1098,0x20,7);
  *(code **)(puVar1 + 0x10) = FUN_10388516c;
  *(undefined **)(puVar1 + 0x18) = puVar5;
  uVar6 = 0x112f9fac8;
  func_0x0001000285a8(0x112f9fac8,&UNK_10dc17980);
  pcVar2 = FUN_103885174;
  func_0x0001000bfde0(FUN_103885174,puVar1,uVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar1);
  puStack_48 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuVar7 = &puStack_48;
  func_0x0001006c71a4(ppuVar7);
  func_0x000107c61574(pcVar2);
  return ppuVar7;
}



/* Entry: 103884dbc; end: 103884e6f;  */

uint FUN_103884dbc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  uVar5 = *param_1;
  puVar2 = auStack_48;
  func_0x000107c61428(param_2 + 0x10,puVar2,0,0);
  uVar4 = (uint)puVar2;
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1038851e8();
    lVar3 = *(long *)(puVar1 + 0x10);
  }
  else {
    puVar1 = (undefined *)0x0;
    func_0x000103884a7c();
    func_0x000107c61170(param_2);
    lVar3 = *(long *)(puVar1 + 0x10);
  }
  if (lVar3 == 0) {
    func_0x000107c6142c(puVar1);
    uVar4 = 0;
  }
  else {
    FUN_103887c04(uVar5);
    func_0x000107c6142c(puVar1);
  }
  return uVar4 & 1;
}



/* Entry: 103884e70; end: 103884e77;  */

uint FUN_103884e70(undefined8 *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar5 = *param_1;
  puVar2 = auStack_48;
  func_0x000107c61428(unaff_x20 + 0x10,puVar2,0,0);
  uVar4 = (uint)puVar2;
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1038851e8();
    lVar3 = *(long *)(puVar1 + 0x10);
  }
  else {
    puVar1 = (undefined *)0x0;
    func_0x000103884a7c();
    func_0x000107c61170(lVar3);
    lVar3 = *(long *)(puVar1 + 0x10);
  }
  if (lVar3 == 0) {
    func_0x000107c6142c(puVar1);
    uVar4 = 0;
  }
  else {
    FUN_103887c04(uVar5);
    func_0x000107c6142c(puVar1);
  }
  return uVar4 & 1;
}



/* Entry: 103884e78; end: 10388516b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103884e78(long param_1,uint param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_78 [24];
  
  puVar4 = auStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar4,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_3 != 0) {
    uVar2 = (ulong)(param_2 & 1);
    func_0x000103884a7c();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((*(long *)(uVar2 + 0x10) != 0) &&
       (FUN_103887c04(), puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8, ((ulong)puVar4 & 1) != 0)
       ) {
      puVar10 = *(undefined **)(*(long *)(uVar2 + 0x38) + param_1 * 8);
      func_0x000107c61434(puVar10);
    }
    func_0x000107c6142c(uVar2);
    uVar2 = *(ulong *)(param_3 + _DAT_112fa51b0);
    if (uVar2 >> 0x3e == 0) {
      uVar11 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar11 = uVar2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar2) {
        uVar11 = uVar2;
      }
      func_0x000107c60480();
    }
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar11 != 0) {
      uVar12 = 0;
LAB_103884f98:
      do {
        if ((uVar2 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103885110);
            (*pcVar1)();
          }
          uVar13 = *(ulong *)(uVar2 + 0x20 + uVar12 * 8);
          func_0x000107c615f0(uVar13);
        }
        else {
          uVar13 = uVar12;
          FUN_10382016c(uVar12,uVar2);
        }
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10388510c);
          (*pcVar1)();
        }
        uVar12 = uVar12 + 1;
        uVar3 = uVar13;
        func_0x000107c3e08c();
        lVar5 = *(long *)(puVar10 + 0x10);
        puVar6 = (ulong *)(puVar10 + 0x20);
        do {
          if (lVar5 == 0) {
            func_0x000107c615e8(uVar13);
            if (uVar12 == uVar11) goto LAB_10388507c;
            goto LAB_103884f98;
          }
          uVar7 = *puVar6;
          lVar5 = lVar5 + -1;
          puVar6 = puVar6 + 1;
        } while (uVar7 != uVar3);
        puVar9 = puVar8;
        func_0x000107c61558();
        if (((ulong)puVar9 & 1) == 0) {
          func_0x00010388a9cc(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar3 = *(ulong *)(puVar8 + 0x10);
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar3) {
          func_0x00010388a9cc(1 < *(ulong *)(puVar8 + 0x18),uVar3 + 1,1);
        }
        *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
        *(ulong *)(puVar8 + uVar3 * 8 + 0x20) = uVar13;
      } while (uVar12 != uVar11);
    }
LAB_10388507c:
    func_0x000107c6142c(puVar10);
    if (((long)puVar8 < 0) || (((ulong)puVar8 >> 0x3e & 1) != 0)) {
      puVar10 = puVar8;
      func_0x000107c60480();
    }
    else {
      puVar10 = *(undefined **)(puVar8 + 0x10);
    }
    if (puVar10 != (undefined *)0x0) {
      uVar2 = 0;
      do {
        if (((ulong)puVar8 & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar8 + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103885114);
            (*pcVar1)();
          }
          uVar11 = *(ulong *)(puVar8 + uVar2 * 8 + 0x20);
          func_0x000107c615f0(uVar11);
        }
        else {
          uVar11 = uVar2;
          FUN_10382016c(uVar2,puVar8);
        }
        if (SCARRY8(uVar2,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103885108);
          (*pcVar1)();
        }
        puVar9 = (undefined *)(uVar2 + 1);
        func_0x000107c558ec(uVar11);
        func_0x000107c615e8(uVar11);
        uVar2 = uVar2 + 1;
      } while (puVar9 != puVar10);
    }
    func_0x000107c61170(param_3);
  }
  return puVar8;
}



/* Entry: 10388516c; end: 103885173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10388516c(long param_1,uint param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_78 [24];
  
  puVar5 = auStack_78;
  func_0x000107c61428(unaff_x20 + 0x10,puVar5,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    uVar3 = (ulong)(param_2 & 1);
    func_0x000103884a7c();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((*(long *)(uVar3 + 0x10) != 0) &&
       (FUN_103887c04(), puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8, ((ulong)puVar5 & 1) != 0)
       ) {
      puVar11 = *(undefined **)(*(long *)(uVar3 + 0x38) + param_1 * 8);
      func_0x000107c61434(puVar11);
    }
    func_0x000107c6142c(uVar3);
    uVar3 = *(ulong *)(lVar2 + _DAT_112fa51b0);
    if (uVar3 >> 0x3e == 0) {
      uVar12 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar12 = uVar3;
      }
      func_0x000107c60480();
    }
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar12 != 0) {
      uVar13 = 0;
LAB_103884f98:
      do {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103885110);
            (*pcVar1)();
          }
          uVar14 = *(ulong *)(uVar3 + 0x20 + uVar13 * 8);
          func_0x000107c615f0(uVar14);
        }
        else {
          uVar14 = uVar13;
          FUN_10382016c(uVar13,uVar3);
        }
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10388510c);
          (*pcVar1)();
        }
        uVar13 = uVar13 + 1;
        uVar4 = uVar14;
        func_0x000107c3e08c();
        lVar6 = *(long *)(puVar11 + 0x10);
        puVar7 = (ulong *)(puVar11 + 0x20);
        do {
          if (lVar6 == 0) {
            func_0x000107c615e8(uVar14);
            if (uVar13 == uVar12) goto LAB_10388507c;
            goto LAB_103884f98;
          }
          uVar8 = *puVar7;
          lVar6 = lVar6 + -1;
          puVar7 = puVar7 + 1;
        } while (uVar8 != uVar4);
        puVar10 = puVar9;
        func_0x000107c61558();
        if (((ulong)puVar10 & 1) == 0) {
          func_0x00010388a9cc(0,*(long *)(puVar9 + 0x10) + 1,1);
        }
        uVar4 = *(ulong *)(puVar9 + 0x10);
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar4) {
          func_0x00010388a9cc(1 < *(ulong *)(puVar9 + 0x18),uVar4 + 1,1);
        }
        *(ulong *)(puVar9 + 0x10) = uVar4 + 1;
        *(ulong *)(puVar9 + uVar4 * 8 + 0x20) = uVar14;
      } while (uVar13 != uVar12);
    }
LAB_10388507c:
    func_0x000107c6142c(puVar11);
    if (((long)puVar9 < 0) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
      puVar11 = puVar9;
      func_0x000107c60480();
    }
    else {
      puVar11 = *(undefined **)(puVar9 + 0x10);
    }
    if (puVar11 != (undefined *)0x0) {
      uVar3 = 0;
      do {
        if (((ulong)puVar9 & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar9 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103885114);
            (*pcVar1)();
          }
          uVar12 = *(ulong *)(puVar9 + uVar3 * 8 + 0x20);
          func_0x000107c615f0(uVar12);
        }
        else {
          uVar12 = uVar3;
          FUN_10382016c(uVar3,puVar9);
        }
        if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103885108);
          (*pcVar1)();
        }
        puVar10 = (undefined *)(uVar3 + 1);
        func_0x000107c558ec(uVar12);
        func_0x000107c615e8(uVar12);
        uVar3 = uVar3 + 1;
      } while (puVar10 != puVar11);
    }
    func_0x000107c61170(lVar2);
  }
  return puVar9;
}



/* Entry: 103885174; end: 1038851c7;  */

void FUN_103885174(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,*(undefined1 *)(param_2 + 1));
  *param_1 = uVar1;
  return;
}



/* Entry: 1038851c8; end: 1038851e7;  */

void FUN_1038851c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128f6ab8);
  return;
}



/* Entry: 1038851e8; end: 103885533;  */

undefined * FUN_1038851e8(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112fa52f0);
  puVar2 = puVar8;
  func_0x000107c60498();
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar9;
  FUN_103887c04();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar7 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar9;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1038852ec);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61434();
        return puVar2;
      }
      uVar9 = puVar6[-1];
      uVar4 = *puVar6;
      func_0x000107c61434();
      uVar3 = uVar9;
      FUN_103887c04();
      puVar6 = puVar6 + 2;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038852bc);
  (*pcVar1)();
}



/* Entry: 103885534; end: 10388573f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103885534(ulong param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (((((param_1 & 1) != 0) && (uVar1 = param_3, func_0x000107c3d0ec(), (uVar1 & 1) == 0)) &&
        (*(long *)(param_2 + _DAT_112fa5468) == 6)) &&
       (*(char *)(param_2 + _DAT_112fa5300) == '\x01')) {
      uVar2 = 0;
      func_0x000104501ac4(0);
      func_0x000104500f1c();
      func_0x000107c3e02c(param_3);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103885740; end: 103885747;  */

undefined8 FUN_103885740(void)

{
  return 4;
}



/* Entry: 103885748; end: 103885997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103885748(long param_1,code *param_2,undefined8 param_3)

{
  long alStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(alStack_78);
  if (alStack_78[0] == 0) {
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
    goto LAB_10388583c;
  }
  if (param_1 == 3) {
    func_0x0001038852ec(alStack_78[0]);
    func_0x0001000d224c(alStack_78);
    func_0x0001000a8868(alStack_78,uStack_60);
    (**(code **)(lStack_58 + 0x20))();
    func_0x0001000834e4(alStack_78);
joined_r0x000103885828:
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
  }
  else {
    if (param_1 != 2) goto joined_r0x000103885828;
    func_0x0001038852ec(alStack_78[0]);
    func_0x000103885868(param_2,param_3);
  }
  func_0x000107c615e8(alStack_78[0]);
LAB_10388583c:
  return alStack_78[0] != 0;
}



/* Entry: 103885998; end: 103885b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103885998(void)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  ulong uStack_50;
  long lStack_48;
  
  func_0x000104875e28(auStack_68);
  lVar3 = lStack_48;
  uVar1 = uStack_50;
  if (uStack_50 == 0) {
    FUN_103885cd0(auStack_68);
  }
  else {
    func_0x0001000a8868(auStack_68,uStack_50);
    (**(code **)(lVar3 + 0x10))(uVar1,lVar3);
    func_0x0001000834e4(auStack_68);
    if ((uVar1 & 1) != 0) {
      func_0x000104875e28(auStack_68);
      lVar3 = lStack_48;
      uVar1 = uStack_50;
      if (uStack_50 == 0) {
        FUN_103885cd0(auStack_68);
      }
      else {
        func_0x0001000a8868(auStack_68,uStack_50);
        (**(code **)(lVar3 + 0x10))(uVar1,lVar3);
        func_0x0001000834e4(auStack_68);
        if ((uVar1 & 1) != 0) {
          func_0x0001000d224c(auStack_68);
          func_0x0001000a8868(auStack_68,uStack_50);
          puVar2 = &UNK_1106a10d8;
          func_0x000107c613fc(&UNK_1106a10d8,0x20,7);
          *(undefined8 *)(puVar2 + 0x10) = 0;
          *(undefined8 *)(puVar2 + 0x18) = 0;
          (**(code **)(lStack_48 + 0x28))();
          func_0x000107c61574(puVar2);
          func_0x0001000834e4(auStack_68);
        }
      }
      lVar3 = unaff_x20 + _DAT_112fa5430;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c3d04c();
        func_0x000107c615e8(lVar3);
      }
    }
  }
  return;
}



/* Entry: 103885b20; end: 103885b27; -[_TtC21ARBarFeatureLEBrowser27ARBarFeatureCarouselTabImpl arBarFeatureType] */

undefined8 FUN_103885b20(void)

{
  return 3;
}



/* Entry: 103885b28; end: 103885bc3; -[_TtC21ARBarFeatureLEBrowser27ARBarFeatureCarouselTabImpl deactivateFromARBar:deactivationType:completion:] */

void FUN_103885b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_1106a11a0;
    func_0x000107c613fc(&UNK_1106a11a0,0x18,7);
    *(long *)(puVar1 + 0x10) = param_5;
    pcVar2 = FUN_103885fd4;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103885d94(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103885bc4; end: 103885c17; -[_TtC21ARBarFeatureLEBrowser27ARBarFeatureCarouselTabImpl prepareForActivationFromARBar:activationType:] */

void FUN_103885bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103885f40(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103885c18; end: 103885c77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103885c18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112fa52f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + _DAT_112fa5308));
  return;
}



/* Entry: 103885c78; end: 103885caf; -[_TtC21ARBarFeatureLEBrowser27ARBarFeatureCarouselTabImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103885c78(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa52f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fa5308));
  return;
}



/* Entry: 103885cb0; end: 103885ccf;  */

void FUN_103885cb0(void)

{
  func_0x000107c61168(&PTR_PTR_1128f6b98);
  return;
}



/* Entry: 103885cd0; end: 103885d17;  */

undefined8 FUN_103885cd0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112fa0418;
  func_0x0001000285a8(0x112fa0418,&UNK_10dc15790);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103885d18; end: 103885d1b;  */

void FUN_103885d18(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 103885d1c; end: 103885d47;  */

void FUN_103885d1c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103885d48; end: 103885d6f;  */

void FUN_103885d48(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 103885d70; end: 103885d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103885d70(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (((((param_1 & 1) != 0) && (uVar3 = uVar1, func_0x000107c3d0ec(), (uVar3 & 1) == 0)) &&
        (*(long *)(lVar2 + _DAT_112fa5468) == 6)) && (*(char *)(lVar2 + _DAT_112fa5300) == '\x01'))
    {
      uVar4 = 0;
      func_0x000104501ac4(0);
      func_0x000104500f1c();
      func_0x000107c3e02c(uVar1);
      func_0x000107c61170(uVar4);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103885d94; end: 103885f3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103885d94(code *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  if ((*(long *)(unaff_x20 + _DAT_112fa5440) == 3) || (*(long *)(unaff_x20 + _DAT_112fa5438) == 3))
  {
    *(undefined8 *)(unaff_x20 + _DAT_112fa5468) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112fa5470) = 0;
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fa5448);
    auStack_68[0] = 0;
    func_0x000107c6157c(uVar1);
    func_0x000100087c34(auStack_68);
    func_0x000107c61574(uVar1);
    FUN_1038870a0();
    func_0x000107c61604(unaff_x20 + _DAT_112fa5430,0);
    func_0x0001000d224c(auStack_68);
    func_0x0001000a8868(auStack_68,uStack_50);
    (**(code **)(lStack_48 + 0x28))();
    func_0x0001000834e4(auStack_68);
  }
  else {
    *(undefined8 *)(unaff_x20 + _DAT_112fa5468) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112fa5470) = 0;
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fa5448);
    auStack_68[0] = 0;
    func_0x000107c6157c(uVar1);
    func_0x000100087c34(auStack_68);
    func_0x000107c61574(uVar1);
    FUN_1038870a0();
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
    func_0x000107c61604(unaff_x20 + _DAT_112fa5430,0);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112fa5310) = 0;
  return;
}



/* Entry: 103885f40; end: 103885fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103885f40(long param_1)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000103885600();
  *(long *)(unaff_x20 + _DAT_112fa5438) = param_1;
  if (param_1 == 3) {
    func_0x0001000d224c(auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    (**(code **)(lStack_38 + 0x18))();
    func_0x0001000834e4(auStack_58);
  }
  return;
}



/* Entry: 103885fd4; end: 103885fdf;  */

void FUN_103885fd4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103885fe0; end: 1038860a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103885fe0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  ulong uStack_50;
  long lStack_48;
  
  uVar1 = 2;
  if (param_1 == 8 || param_1 == 3) {
    uVar1 = 3;
  }
  func_0x000104875e28(auStack_68);
  uVar3 = uVar1;
  if (uStack_50 == 0) {
    FUN_103885cd0(auStack_68);
  }
  else {
    func_0x0001000a8868(auStack_68,uStack_50);
    uVar2 = uStack_50;
    (**(code **)(lStack_48 + 0x10))(uStack_50,lStack_48);
    func_0x0001000834e4(auStack_68);
    if (((uVar2 & 1) != 0) &&
       (uVar3 = 3,
       (lRam0000000112fa53f0 != param_1 && lRam0000000112fa53e8 != param_1) &&
       lRam0000000112fa53e0 != param_1)) {
      uVar3 = uVar1;
    }
  }
  return uVar3;
}



/* Entry: 1038860a8; end: 10388612b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1038860a8(void)

{
  long lVar1;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  func_0x000104875e28(auStack_58);
  if (lStack_40 == 0) {
    FUN_103885cd0(auStack_58);
  }
  else {
    func_0x0001000a8868(auStack_58,lStack_40);
    lVar1 = lStack_40;
    (**(code **)(lStack_38 + 0x10))(lStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
    lStack_40 = lVar1;
  }
  return (uint)lStack_40 & 1;
}



/* Entry: 10388612c; end: 103886133;  */

undefined8 FUN_10388612c(void)

{
  return 6;
}



/* Entry: 103886134; end: 103886407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103886134(long param_1,code *param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_1 == 3) {
    plVar1 = (long *)(unaff_x20 + _DAT_112fa5388);
    func_0x0001000a8868(plVar1,plVar1[3]);
    lVar2 = *(long *)(unaff_x20 + _DAT_112fa5468);
    lVar3 = *(long *)(*plVar1 + 0x50);
    FUN_103874914();
    if (lVar3 != 0) {
      func_0x0001000d224c(auStack_78);
      func_0x0001000a8868(auStack_78,uStack_60);
      func_0x0001038753b4();
      func_0x0001000834e4(auStack_78);
    }
    FUN_103874ebc(lVar2 == 7);
    func_0x0001000d224c(auStack_78);
    func_0x0001000a8868(auStack_78,uStack_60);
    (**(code **)(lStack_58 + 0x20))();
    func_0x0001000834e4(auStack_78);
  }
  else if (param_1 == 2) {
    plVar1 = (long *)(unaff_x20 + _DAT_112fa5388);
    func_0x0001000a8868(plVar1,plVar1[3]);
    lVar2 = *(long *)(unaff_x20 + _DAT_112fa5468);
    lVar3 = *(long *)(*plVar1 + 0x50);
    FUN_103874914();
    if (lVar3 != 0) {
      func_0x0001000d224c(auStack_78);
      func_0x0001000a8868(auStack_78,uStack_60);
      func_0x0001038753b4();
      func_0x0001000834e4(auStack_78);
    }
    FUN_103874ebc(lVar2 == 7);
    func_0x0001038862d8(param_2,param_3);
    return 1;
  }
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return 1;
}



/* Entry: 103886408; end: 103886447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103886408(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112fa5388);
  func_0x0001000a8868(plVar1,plVar1[3]);
  uVar2 = *(undefined8 *)(*plVar1 + 0x48);
  *(undefined8 *)(*plVar1 + 0x48) = 0;
  func_0x000107c615e8(uVar2);
  FUN_103874bc8();
  return;
}



/* Entry: 103886448; end: 1038865f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103886448(void)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  ulong uStack_50;
  long lStack_48;
  
  func_0x000104875e28(auStack_68);
  lVar3 = lStack_48;
  uVar1 = uStack_50;
  if (uStack_50 == 0) {
    FUN_103885cd0(auStack_68);
  }
  else {
    func_0x0001000a8868(auStack_68,uStack_50);
    (**(code **)(lVar3 + 0x10))(uVar1,lVar3);
    func_0x0001000834e4(auStack_68);
    if ((uVar1 & 1) != 0) {
      func_0x000104875e28(auStack_68);
      lVar3 = lStack_48;
      uVar1 = uStack_50;
      if (uStack_50 == 0) {
        FUN_103885cd0(auStack_68);
      }
      else {
        func_0x0001000a8868(auStack_68,uStack_50);
        (**(code **)(lVar3 + 0x10))(uVar1,lVar3);
        func_0x0001000834e4(auStack_68);
        if ((uVar1 & 1) != 0) {
          func_0x0001000d224c(auStack_68);
          func_0x0001000a8868(auStack_68,uStack_50);
          puVar2 = &UNK_1106a1218;
          func_0x000107c613fc(&UNK_1106a1218,0x20,7);
          *(undefined8 *)(puVar2 + 0x10) = 0;
          *(undefined8 *)(puVar2 + 0x18) = 0;
          (**(code **)(lStack_48 + 0x28))();
          func_0x000107c61574(puVar2);
          func_0x0001000834e4(auStack_68);
        }
      }
      lVar3 = unaff_x20 + _DAT_112fa5430;
      func_0x000107c61618();
      if (lVar3 == 0) {
        return;
      }
      func_0x000107c3d04c();
      goto LAB_1038865d8;
    }
  }
  lVar3 = unaff_x20 + _DAT_112fa5430;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c3d064();
LAB_1038865d8:
  func_0x000107c615e8(lVar3);
  return;
}



/* Entry: 1038865f8; end: 1038865ff; -[_TtC21ARBarFeatureLEBrowser21ARBarFeatureLETabImpl arBarFeatureType] */

undefined8 FUN_1038865f8(void)

{
  return 2;
}



/* Entry: 103886600; end: 103886763; -[_TtC21ARBarFeatureLEBrowser21ARBarFeatureLETabImpl deactivateFromARBar:deactivationType:completion:] */

void FUN_103886600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_1106a1268;
    func_0x000107c613fc(&UNK_1106a1268,0x18,7);
    *(long *)(puVar1 + 0x10) = param_5;
    pcVar2 = FUN_103886bc4;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103886910(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103886764; end: 1038867ab; -[_TtC21ARBarFeatureLEBrowser21ARBarFeatureLETabImpl restoreFromARBar:] */

void FUN_103886764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x00010388669c(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038867ac; end: 1038867ff; -[_TtC21ARBarFeatureLEBrowser21ARBarFeatureLETabImpl prepareForActivationFromARBar:activationType:] */

void FUN_1038867ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103886b30(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103886800; end: 10388685f;  */

/* WARNING: Possible PIC construction at 0x000103886814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103886818) */
/* WARNING: Removing unreachable block (ram,0x0001000834e4) */
/* WARNING: Removing unreachable block (ram,0x0001000834fc) */
/* WARNING: Removing unreachable block (ram,0x0001000834f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103886800(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + _DAT_112fa5380));
  return;
}



/* Entry: 103886860; end: 103886897; -[_TtC21ARBarFeatureLEBrowser21ARBarFeatureLETabImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010388687c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103886880) */
/* WARNING: Removing unreachable block (ram,0x0001000834e4) */
/* WARNING: Removing unreachable block (ram,0x0001000834fc) */
/* WARNING: Removing unreachable block (ram,0x0001000834f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103886860(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa5380));
  return;
}



/* Entry: 103886898; end: 1038868b7;  */

void FUN_103886898(void)

{
  func_0x000107c61168(&PTR_PTR_1128f6e98);
  return;
}



/* Entry: 1038868b8; end: 1038868bb;  */

void FUN_1038868b8(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 1038868bc; end: 1038868e7;  */

void FUN_1038868bc(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1038868e8; end: 10388690f;  */

void FUN_1038868e8(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 103886910; end: 103886b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103886910(code *param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fa5468) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fa5470) = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fa5448);
  auStack_88[0] = 0;
  func_0x000107c6157c(uVar3);
  func_0x000100087c34(auStack_88);
  func_0x000107c61574(uVar3);
  FUN_1038870a0();
  func_0x000107c61604(unaff_x20 + _DAT_112fa5430,0);
  if ((*(long *)(unaff_x20 + _DAT_112fa5440) == 3) || (*(long *)(unaff_x20 + _DAT_112fa5438) == 3))
  {
    plVar1 = (long *)(unaff_x20 + _DAT_112fa5388);
    func_0x0001000a8868(plVar1,plVar1[3]);
    lVar6 = *plVar1;
    lVar4 = *(long *)(lVar6 + 0x58);
    if (lVar4 == 0) {
      uVar3 = 0;
    }
    else {
      lVar5 = *(long *)(lVar6 + 0x60);
      lVar2 = lVar4;
      func_0x000107c614f0(lVar4);
      pcVar7 = *(code **)(lVar5 + 8);
      func_0x000107c615f0(lVar4);
      (*pcVar7)(lVar2,lVar5);
      func_0x000107c615e8(lVar4);
      uVar3 = *(undefined8 *)(lVar6 + 0x58);
    }
    *(long *)(lVar6 + 0x58) = 0;
    *(undefined8 *)(lVar6 + 0x60) = 0;
    func_0x000107c615e8(uVar3);
    func_0x0001000d224c(auStack_88);
    func_0x0001000a8868(auStack_88,uStack_70);
    (**(code **)(lStack_68 + 0x28))();
    func_0x0001000834e4(auStack_88);
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_112fa5440) == 2) {
      plVar1 = (long *)(unaff_x20 + _DAT_112fa5388);
      func_0x0001000a8868(plVar1,plVar1[3]);
      lVar6 = *plVar1;
      lVar4 = *(long *)(lVar6 + 0x58);
      if (lVar4 == 0) {
        uVar3 = 0;
      }
      else {
        lVar5 = *(long *)(lVar6 + 0x60);
        lVar2 = lVar4;
        func_0x000107c614f0(lVar4);
        pcVar7 = *(code **)(lVar5 + 8);
        func_0x000107c615f0(lVar4);
        (*pcVar7)(lVar2,lVar5);
        func_0x000107c615e8(lVar4);
        uVar3 = *(undefined8 *)(lVar6 + 0x58);
      }
      *(long *)(lVar6 + 0x58) = 0;
      *(undefined8 *)(lVar6 + 0x60) = 0;
      func_0x000107c615e8(uVar3);
    }
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  return;
}



/* Entry: 103886b30; end: 103886bc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103886b30(long param_1)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  FUN_103885fe0();
  *(long *)(unaff_x20 + _DAT_112fa5438) = param_1;
  if (param_1 == 3) {
    func_0x0001000d224c(auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    (**(code **)(lStack_38 + 0x18))();
    func_0x0001000834e4(auStack_58);
  }
  return;
}



/* Entry: 103886bc4; end: 103886be3;  */

void FUN_103886bc4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103886be4; end: 103886c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103886be4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  lVar1 = _DAT_112fa5450;
  lVar2 = *(long *)(unaff_x20 + _DAT_112fa5450);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112fa54a8,&UNK_10dc18890);
    func_0x000107c613fc();
    lVar3 = 1;
    func_0x00010008747c();
    uStack_38 = *(undefined8 *)(unaff_x20 + _DAT_112fa5440);
    func_0x000100087c34(&uStack_38);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(uVar4);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar3;
}



/* Entry: 103886c94; end: 103886fe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103886c94(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  ulong *unaff_x20;
  long lVar12;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  
  lVar12 = *(long *)((long)unaff_x20 + _DAT_112fa53f8);
  lVar1 = lVar12;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x0001000d224c(&uStack_88);
  lVar3 = lStack_68;
  lVar11 = lStack_70;
  func_0x0001000a8868(&uStack_88,lStack_70);
  lVar2 = lVar12;
  (**(code **)(lVar3 + 8))(lVar12,lVar11,lVar3);
  func_0x0001000834e4(&uStack_88);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x240))();
  uStack_88 = 0x695f7261625f7261;
  lStack_80 = -0x13ffffffa0929a8c;
  lVar3 = lVar12;
  func_0x000107c3f70c(lVar12);
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5faec();
  func_0x000107c61170(lVar3);
  func_0x000107c5fb78(lVar4,lVar11);
  func_0x000107c6142c(lVar11);
  lVar11 = lStack_80;
  uVar6 = uStack_88;
  puVar5 = PTR_PTR_1126c8d10;
  func_0x000107c610f8(PTR_PTR_1126c8d10);
  lVar3 = lVar11;
  func_0x000107c5fadc(uVar6);
  func_0x000107c6142c(lVar11);
  func_0x000107c478d4(puVar5);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c55858(puVar5);
  func_0x000107c59cbc(puVar5);
  func_0x000107c3f70c();
  func_0x000107c61180();
  lVar1 = lVar12;
  func_0x000107c5faec();
  func_0x000107c61170(lVar12);
  if (*(long *)((long)unaff_x20 + _DAT_112fa5400) == 0) {
    func_0x000107c6142c(lVar3);
  }
  else {
    func_0x0001000d224c(&uStack_88);
    lVar12 = lStack_80;
    uVar6 = uStack_88;
    uVar7 = uStack_88;
    func_0x000107c614f0(uStack_88);
    (**(code **)(lVar12 + 0x10))();
    puVar8 = &UNK_1106a13e0;
    func_0x000107c613fc(&UNK_1106a13e0,0x20,7);
    *(long *)(puVar8 + 0x10) = lVar1;
    *(long *)(puVar8 + 0x18) = lVar3;
    uVar9 = 0;
    func_0x000103887fb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    pcVar10 = FUN_103888028;
    func_0x0001000bfde0(FUN_103888028,puVar8,uVar9);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(puVar8);
    func_0x0001004575f0();
    func_0x000107c61574(pcVar10);
    func_0x000107c52b98(puVar5);
    func_0x000107c615e8(uVar6);
    func_0x000107c61170(puVar8);
  }
  FUN_103825a1c((long)unaff_x20 + _DAT_112fa5428,&uStack_88);
  lVar1 = lStack_70;
  if (lStack_70 == 0) {
    func_0x000103887f48(&uStack_88);
  }
  else {
    func_0x0001000a8868(&uStack_88,lStack_70);
    (**(code **)(lStack_68 + 8))(lStack_70,lStack_68);
    func_0x0001000834e4(&uStack_88);
  }
  func_0x000107c526c4(puVar5);
  func_0x000107c61170(lVar1);
  return puVar5;
}



/* Entry: 103886fe8; end: 10388709f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103886fe8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  func_0x000107c61604(unaff_x20 + _DAT_112fa5430,param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112fa5470) = 1;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fa5448);
  uStack_31 = 1;
  func_0x000107c6157c(uVar2);
  func_0x000100087c34(&uStack_31);
  func_0x000107c61574(uVar2);
  FUN_1038870a0();
  lVar1 = _DAT_112fa5440;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5440) = *(undefined8 *)(unaff_x20 + _DAT_112fa5438);
  FUN_103886be4();
  uStack_40 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000100087c34(&uStack_40);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 1038870a0; end: 1038872ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038870a0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_58;
  
  lVar2 = _DAT_112fa5458;
  if (*(long *)(unaff_x20 + _DAT_112fa5458) == 0) {
    func_0x0001000d224c(&lStack_58);
    if (lStack_58 != 0) {
      uVar1 = 0;
      func_0x0001000c6560();
      func_0x000107c613fc();
      func_0x0001000c6580();
      uVar10 = *(undefined8 *)(unaff_x20 + lVar2);
      *(undefined8 *)(unaff_x20 + lVar2) = uVar1;
      func_0x000107c6157c();
      func_0x000107c61574(uVar10);
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112fa5460);
      *(undefined8 *)(unaff_x20 + _DAT_112fa5460) = 0;
      func_0x000107c61574(uVar10);
      func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
      lVar2 = lStack_58;
      func_0x000107c3d14c(lStack_58);
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x0001000b637c();
      func_0x000107c61170(lVar2);
      plVar4 = (long *)0x112d3b7d8;
      func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
      pcVar5 = FUN_10388780c;
      func_0x0001000bfde0(FUN_10388780c,0,plVar4);
      func_0x000107c61574(lVar3);
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112fa5448);
      uVar6 = uVar10;
      func_0x000107c6157c(uVar10);
      func_0x0001006c733c();
      func_0x000107c61574(pcVar5);
      func_0x000107c61574(uVar10);
      uVar10 = 0x10388783c;
      func_0x0001000c0ebc(0x10388783c,0);
      func_0x000107c61574(uVar6);
      func_0x000102ae5c08();
      func_0x00010487deac(plVar4,PTR___sSbN_11034dd40,uVar6,PTR___sSbSQsWP_11034dd50);
      func_0x000107c61574(uVar10);
      puVar7 = &UNK_1106a1368;
      func_0x000107c613fc(&UNK_1106a1368,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar8 = &UNK_1106a13b8;
      func_0x000107c613fc(&UNK_1106a13b8,0x20,7);
      *(code **)(puVar8 + 0x10) = FUN_103887ff4;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      pcVar5 = FUN_103887ffc;
      puVar7 = puVar8;
      (**(code **)(*plVar4 + 0x60))(FUN_103887ffc);
      func_0x000107c61574(plVar4);
      func_0x000107c61574(puVar8);
      pcVar9 = pcVar5;
      func_0x000107c614f0(pcVar5);
      (**(code **)(puVar7 + 0x10))(uVar1,pcVar9,puVar7);
      func_0x000107c615e8(lStack_58);
      func_0x000107c61574(uVar1);
      func_0x000107c615e8(pcVar5);
    }
  }
  return;
}



/* Entry: 1038872f0; end: 1038872f3;  */

void FUN_1038872f0(void)

{
  return;
}



/* Entry: 1038872f4; end: 103887363; -[_TtC21ARBarFeatureLEBrowser19ARBarFeatureTabImpl identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038872f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112fa53f8);
  func_0x000107c61174();
  func_0x000107c3f70c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 103887364; end: 103887367;  */

void FUN_103887364(void)

{
  return;
}



/* Entry: 103887368; end: 10388739b; -[_TtC21ARBarFeatureLEBrowser19ARBarFeatureTabImpl arBarItem] */

void FUN_103887368(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103886c94();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10388739c; end: 103887423;  */

void FUN_10388739c(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (*(long *)(lVar2 + 0x10) != 0) {
    func_0x000107c61434(lVar2);
    func_0x000100029284();
    func_0x000107c6142c(lVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  *param_1 = puVar1;
  return;
}



/* Entry: 103887424; end: 103887477; -[_TtC21ARBarFeatureLEBrowser19ARBarFeatureTabImpl reselectFromARBar:actionType:] */

void FUN_103887424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103887d68(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103887478; end: 103887487; -[_TtC21ARBarFeatureLEBrowser19ARBarFeatureTabImpl isVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103887478(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fa5478);
}



/* Entry: 103887488; end: 103887497; -[_TtC21ARBarFeatureLEBrowser19ARBarFeatureTabImpl setIsVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103887488(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112fa5478) = param_3;
  return;
}



/* Entry: 103887498; end: 10388749f; -[_TtC21ARBarFeatureLEBrowser19ARBarFeatureTabImpl activationBehavior] */

undefined8 FUN_103887498(void)

{
  return 1;
}



/* Entry: 1038874a0; end: 1038874a7; -[_TtC21ARBarFeatureLEBrowser19ARBarFeatureTabImpl arBarFeatureType] */

undefined8 FUN_1038874a0(void)

{
  return 3;
}



/* Entry: 1038874a8; end: 103887533; -[_TtC21ARBarFeatureLEBrowser19ARBarFeatureTabImpl currentPresentationType] */

void FUN_1038874a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103886be4();
  uVar2 = 0;
  func_0x000103887fb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  pcVar3 = FUN_103887534;
  func_0x0001000bfde0(FUN_103887534,0,uVar2);
  func_0x000107c61574(uVar1);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103887534; end: 10388755b;  */

void FUN_103887534(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5fe40();
  *param_1 = uVar1;
  return;
}



/* Entry: 10388755c; end: 103887657; -[_TtC21ARBarFeatureLEBrowser19ARBarFeatureTabImpl prepareForActivationFromARBar:activationType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10388755c(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x1b8);
  func_0x000107c61174();
  (*pcVar1)();
  *(undefined8 *)((long)param_1 + _DAT_112fa5438) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103887658; end: 10388770f; -[_TtC21ARBarFeatureLEBrowser19ARBarFeatureTabImpl activateFromARBar:activationType:completion:] */

uint FUN_103887658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1106a1340;
    func_0x000107c613fc(&UNK_1106a1340,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    uVar3 = 0x103888030;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103887e0c(param_3,param_4);
  func_0x00010058d43c(uVar3,puVar2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103887710; end: 1038877ab; -[_TtC21ARBarFeatureLEBrowser19ARBarFeatureTabImpl deactivateFromARBar:deactivationType:completion:] */

void FUN_103887710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_1106a1318;
    func_0x000107c613fc(&UNK_1106a1318,0x18,7);
    *(long *)(puVar1 + 0x10) = param_5;
    pcVar2 = FUN_103887d5c;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103887cc0(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038877ac; end: 1038877f3; -[_TtC21ARBarFeatureLEBrowser19ARBarFeatureTabImpl restoreFromARBar:] */

void FUN_1038877ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103886fe8(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038877f4; end: 10388780b;  */

undefined8 FUN_1038877f4(void)

{
  return 0;
}



/* Entry: 10388780c; end: 10388786f;  */

void FUN_10388780c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103887870; end: 103887a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103887870(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_68 [24];
  
  puVar5 = auStack_68;
  func_0x000107c61428(param_3 + 0x10,puVar5,0,0);
  puVar2 = (ulong *)(param_3 + 0x10);
  func_0x000107c61618();
  lVar1 = _DAT_112fa53f8;
  if (puVar2 == (ulong *)0x0) {
    return;
  }
  if (*(long *)((long)puVar2 + _DAT_112fa5468) == 6) {
    ppuVar3 = *(undefined ***)((long)puVar2 + _DAT_112fa53f8);
    func_0x000107c3f70c();
    func_0x000107c61180();
    ppuVar4 = ppuVar3;
    func_0x000107c5faec();
    puVar6 = puVar5;
    func_0x000107c61170(ppuVar3);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f30a78;
    func_0x000107c5faec();
    puVar7 = puVar5;
    if (ppuVar4 == ppuVar3 && puVar5 == puVar6) {
LAB_1038879cc:
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(puVar6);
    }
    else {
      func_0x000107c605b8(ppuVar4,puVar5,ppuVar3,puVar6,0);
      func_0x000107c6142c(puVar5);
      func_0x000107c6142c(puVar6);
      if (((ulong)ppuVar4 & 1) == 0) {
        ppuVar3 = *(undefined ***)((long)puVar2 + lVar1);
        func_0x000107c3f70c();
        func_0x000107c61180();
        ppuVar4 = ppuVar3;
        func_0x000107c5faec();
        puVar6 = puVar7;
        func_0x000107c61170(ppuVar3);
        ppuVar3 = &PTR____CFConstantStringClassReference_110f310d8;
        func_0x000107c5faec();
        if (ppuVar4 == ppuVar3 && puVar7 == puVar6) goto LAB_1038879cc;
        func_0x000107c605b8(ppuVar4,puVar7,ppuVar3,puVar6,0);
        func_0x000107c6142c(puVar7);
        func_0x000107c6142c(puVar6);
        if (((ulong)ppuVar4 & 1) == 0) goto LAB_103887a0c;
      }
    }
  }
  if (((param_1 == 0) || (func_0x000107c49a2c(), (int)param_1 != 0)) && ((param_2 & 1) == 0)) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x270))();
  }
LAB_103887a0c:
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 103887a30; end: 103887a8b; -[_TtC21ARBarFeatureLEBrowser19ARBarFeatureTabImpl init] */

void FUN_103887a30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.ARBarFeatureTabImpl",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103887a5c);
  (*pcVar1)();
}



/* Entry: 103887a8c; end: 103887b53; -[_TtC21ARBarFeatureLEBrowser19ARBarFeatureTabImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103887ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103887ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103887b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103887b38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103887b1c) */
/* WARNING: Removing unreachable block (ram,0x000103887adc) */
/* WARNING: Removing unreachable block (ram,0x000103887abc) */
/* WARNING: Removing unreachable block (ram,0x000103887b3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103887a8c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa53f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa5400));
  return;
}



/* Entry: 103887b54; end: 103887b73;  */

void FUN_103887b54(void)

{
  func_0x000107c61168(&PTR_PTR_1128f7188);
  return;
}



/* Entry: 103887b74; end: 103887bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103887b74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fa53f8);
  func_0x000107c3f70c(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 103887bcc; end: 103887c03;  */

void FUN_103887bcc(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103887be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x250))();
  return;
}



/* Entry: 103887c04; end: 103887c5b;  */

void FUN_103887c04(ulong param_1)

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
    if (*(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 103887c5c; end: 103887cbf;  */

void FUN_103887c5c(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 103887cc0; end: 103887d5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103887cc0(code *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 uStack_31;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fa5468) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fa5470) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fa5448);
  uStack_31 = 0;
  func_0x000107c6157c(uVar1);
  func_0x000100087c34(&uStack_31);
  func_0x000107c61574(uVar1);
  FUN_1038870a0();
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  func_0x000107c61604(unaff_x20 + _DAT_112fa5430,0);
  return;
}



/* Entry: 103887d5c; end: 103887d67;  */

void FUN_103887d5c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103887d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103887d68; end: 103887e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103887d68(ulong param_1)

{
  ulong *unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  if ((param_1 == 1) &&
     ((**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x250))(),
     (param_1 & 1) == 0)) {
    FUN_103825a1c((long)unaff_x20 + _DAT_112fa5428,auStack_58);
    if (lStack_40 == 0) {
      FUN_103887f48(auStack_58);
    }
    else {
      func_0x0001000a8868(auStack_58,lStack_40);
      (**(code **)(lStack_38 + 0x10))(lStack_40,lStack_38);
      func_0x0001000834e4(auStack_58);
    }
  }
  return;
}



/* Entry: 103887e0c; end: 103887f3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103887e0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 uStack_41;
  
  *(undefined8 *)((long)unaff_x20 + _DAT_112fa5468) = param_2;
  func_0x000107c61604((long)unaff_x20 + _DAT_112fa5430,param_1);
  uVar3 = *(undefined8 *)((long)unaff_x20 + _DAT_112fa5438);
  puVar1 = &UNK_1106a1368;
  func_0x000107c613fc(&UNK_1106a1368,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1106a1390;
  func_0x000107c613fc(&UNK_1106a1390,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  pcVar5 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x248);
  func_0x000107c6157c(puVar1);
  (*pcVar5)(uVar3,FUN_103887f40,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  *(undefined1 *)((long)unaff_x20 + _DAT_112fa5470) = 1;
  uVar4 = *(undefined8 *)((long)unaff_x20 + _DAT_112fa5448);
  uStack_41 = 1;
  func_0x000107c6157c(uVar4);
  func_0x000100087c34(&uStack_41);
  func_0x000107c61574(uVar4);
  FUN_1038870a0();
  return (uint)uVar3 & 1;
}



/* Entry: 103887f40; end: 103887f47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103887f40(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112fa5440;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + _DAT_112fa5438) == lVar3) {
      *(long *)(lVar2 + _DAT_112fa5440) = lVar3;
      lVar3 = lVar2;
      FUN_103886be4();
      uStack_50 = *(undefined8 *)(lVar2 + lVar1);
      func_0x000100087c34(&uStack_50);
      func_0x000107c61574(lVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103887f48; end: 103887ff3;  */

undefined8 FUN_103887f48(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112fa03f8;
  func_0x0001000285a8(0x112fa03f8,&UNK_10dc15aa0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103887ff4; end: 103887ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103887ff4(long param_1,ulong param_2)

{
  long lVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  puVar5 = auStack_68;
  func_0x000107c61428(unaff_x20 + 0x10,puVar5,0,0);
  puVar2 = (ulong *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  lVar1 = _DAT_112fa53f8;
  if (puVar2 == (ulong *)0x0) {
    return;
  }
  if (*(long *)((long)puVar2 + _DAT_112fa5468) == 6) {
    ppuVar3 = *(undefined ***)((long)puVar2 + _DAT_112fa53f8);
    func_0x000107c3f70c();
    func_0x000107c61180();
    ppuVar4 = ppuVar3;
    func_0x000107c5faec();
    puVar6 = puVar5;
    func_0x000107c61170(ppuVar3);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f30a78;
    func_0x000107c5faec();
    puVar7 = puVar5;
    if (ppuVar4 == ppuVar3 && puVar5 == puVar6) {
LAB_1038879cc:
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(puVar6);
    }
    else {
      func_0x000107c605b8(ppuVar4,puVar5,ppuVar3,puVar6,0);
      func_0x000107c6142c(puVar5);
      func_0x000107c6142c(puVar6);
      if (((ulong)ppuVar4 & 1) == 0) {
        ppuVar3 = *(undefined ***)((long)puVar2 + lVar1);
        func_0x000107c3f70c();
        func_0x000107c61180();
        ppuVar4 = ppuVar3;
        func_0x000107c5faec();
        puVar6 = puVar7;
        func_0x000107c61170(ppuVar3);
        ppuVar3 = &PTR____CFConstantStringClassReference_110f310d8;
        func_0x000107c5faec();
        if (ppuVar4 == ppuVar3 && puVar7 == puVar6) goto LAB_1038879cc;
        func_0x000107c605b8(ppuVar4,puVar7,ppuVar3,puVar6,0);
        func_0x000107c6142c(puVar7);
        func_0x000107c6142c(puVar6);
        if (((ulong)ppuVar4 & 1) == 0) goto LAB_103887a0c;
      }
    }
  }
  if (((param_1 == 0) || (func_0x000107c49a2c(), (int)param_1 != 0)) && ((param_2 & 1) == 0)) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x270))();
  }
LAB_103887a0c:
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 103887ffc; end: 103888027;  */

void FUN_103887ffc(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Entry: 103888028; end: 103888033;  */

void FUN_103888028(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (*(long *)(lVar2 + 0x10) != 0) {
    func_0x000107c61434(lVar2);
    func_0x000100029284();
    func_0x000107c6142c(lVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  *param_1 = puVar1;
  return;
}



/* Entry: 103888034; end: 10388852b;  */

void FUN_103888034(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x01') {
    func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_3);
    return;
  }
  return;
}



/* Entry: 10388852c; end: 103888b43;  */

long FUN_10388852c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 *param_19,undefined8 param_20,
                  undefined1 param_21,undefined4 param_22,undefined8 param_23)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c6157c(param_1);
  uVar4 = 0x112fa5568;
  func_0x0001000285a8(0x112fa5568,&UNK_10dc18930);
  pcVar1 = FUN_103888b44;
  func_0x0001000cb480(FUN_103888b44,0,uVar4);
  *(code **)(unaff_x20 + 0x18) = pcVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_15;
  func_0x00010388ace4(param_16,unaff_x20 + 0xc0);
  *(undefined8 *)(unaff_x20 + 0x80) = param_18;
  uVar4 = *param_19;
  uVar6 = param_19[3];
  uVar5 = param_19[2];
  *(undefined8 *)(unaff_x20 + 0x90) = param_19[1];
  *(undefined8 *)(unaff_x20 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar5;
  uVar4 = param_19[4];
  *(undefined8 *)(unaff_x20 + 0xb0) = param_19[5];
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar4;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_17;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_20;
  *(undefined1 *)(unaff_x20 + 0xf8) = param_21;
  *(undefined8 *)(unaff_x20 + 0x100) = param_23;
  puVar2 = &UNK_1106a1530;
  func_0x000107c613fc(&UNK_1106a1530,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  pcStack_78 = FUN_103888c44;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_100b5ebe4;
  puStack_80 = &UNK_1106a1548;
  ppuVar3 = &puStack_98;
  puStack_70 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_70;
  func_0x000107c6157c(param_20);
  func_0x000107c61174();
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c61574(puVar2);
  func_0x000107c5dc64(param_5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_7);
  func_0x000107c61574(param_6);
  func_0x000107c61574(param_8);
  func_0x000107c61574(param_9);
  func_0x000107c61574(param_10);
  func_0x000107c61574(param_11);
  func_0x000107c61574(param_12);
  func_0x000107c61574(param_15);
  func_0x000107c61574(param_17);
  func_0x000107c61574(param_18);
  func_0x000107c61574(param_20);
  func_0x000107c61574(param_2);
  func_0x000107c61170(param_5);
  func_0x0001000834e4(param_16);
  return unaff_x20;
}



/* Entry: 103888b44; end: 103888c43;  */

void FUN_103888b44(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  lVar1 = 0;
  FUN_1038802b8();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1106a0b88;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(uVar3);
  return;
}



/* Entry: 103888c44; end: 103888c67;  */

void FUN_103888c44(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar1 != 0) {
      func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
      func_0x000107c61174();
      lVar2 = param_1;
      func_0x0001000bda74();
      func_0x000107c61170(param_1);
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
      *(long *)(lVar1 + 0x30) = lVar2;
      func_0x000107c61574(lVar1);
      func_0x000107c61574(uVar3);
    }
  }
  return;
}



/* Entry: 103888c68; end: 103888d2b;  */

void FUN_103888c68(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000103825a6c(*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x0001000834e4(unaff_x20 + 0xc0);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x100));
  return;
}


