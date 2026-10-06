/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032b93a8; end: 1032b93b7; -[_TtC18ShakeToReportValdi27ShakeToReportSubmitDataObjc subTopicIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b93a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f52e88));
  return;
}



/* Entry: 1032b93b8; end: 1032b93c7; -[_TtC18ShakeToReportValdi27ShakeToReportSubmitDataObjc selfAssign] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1032b93b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f52e90);
}



/* Entry: 1032b93c8; end: 1032b940f; -[_TtC18ShakeToReportValdi27ShakeToReportSubmitDataObjc labels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b93c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f52e98);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032b9410; end: 1032b941f; -[_TtC18ShakeToReportValdi27ShakeToReportSubmitDataObjc isNewFeature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1032b9410(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f52ea0);
}



/* Entry: 1032b9420; end: 1032b944f;  */

void FUN_1032b9420(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_1032b9450(param_1);
  return;
}



/* Entry: 1032b9450; end: 1032b95d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b9450(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f52e60);
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  if (*(char *)(param_1 + 3) == '\x01') {
    func_0x000107c61434(uVar2);
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c61434(uVar2);
    func_0x000107c46ed0();
  }
  *(undefined **)(unaff_x20 + _DAT_112f52e68) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112f52e70) = *(undefined1 *)((long)param_1 + 0x19);
  *(undefined1 *)(unaff_x20 + _DAT_112f52e78) = *(undefined1 *)((long)param_1 + 0x1a);
  if (*(char *)(param_1 + 5) == '\x01') {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
  }
  *(undefined **)(unaff_x20 + _DAT_112f52e80) = puVar3;
  if (*(char *)(param_1 + 7) == '\x01') {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
  }
  *(undefined **)(unaff_x20 + _DAT_112f52e88) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112f52e90) = *(undefined1 *)((long)param_1 + 0x39);
  *(undefined8 *)(unaff_x20 + _DAT_112f52e98) = param_1[8];
  func_0x000107c61434();
  FUN_1032b95d4(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112f52ea0) = *(undefined1 *)(param_1 + 9);
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032b95d4; end: 1032b9603;  */

long FUN_1032b95d4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x40));
  return param_1;
}



/* Entry: 1032b9604; end: 1032b962f; -[_TtC18ShakeToReportValdi27ShakeToReportSubmitDataObjc init] */

void FUN_1032b9604(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShakeToReportValdi.ShakeToReportSubmitDataObjc",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b9630);
  (*pcVar1)();
}



/* Entry: 1032b9630; end: 1032b9633;  */

void FUN_1032b9630(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032b9634; end: 1032b969f; -[_TtC18ShakeToReportValdi27ShakeToReportSubmitDataObjc .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032b9654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b9658) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b9634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f52e60 + 8))
  ;
  return;
}



/* Entry: 1032b96a0; end: 1032b96e7; -[_TtC18ShakeToReportValdi32ShakeToReportValdiViewController shakeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b96a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52ea8;
  func_0x000107c61428(param_1 + _DAT_112f52ea8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032b96e8; end: 1032b973f; -[_TtC18ShakeToReportValdi32ShakeToReportValdiViewController setShakeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b96e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52ea8;
  func_0x000107c61428(param_1 + _DAT_112f52ea8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032b9740; end: 1032ba263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1032b9740(long param_1,long param_2,byte param_3,byte param_4,long param_5,long param_6,
             undefined8 param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10,
             undefined4 param_11,undefined4 param_12,long param_13,long param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x20;
  long lVar18;
  ulong uVar19;
  undefined *puStack_f8;
  undefined *puStack_e8;
  undefined1 auStack_a8 [16];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  lVar9 = unaff_x20;
  func_0x000107c610f8();
  lVar11 = _DAT_112f52eb0;
  *(undefined8 *)(lVar9 + _DAT_112f52eb0) = 0;
  lVar3 = _DAT_112f52eb8;
  puVar10 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar9 + lVar3) = puVar10;
  lVar4 = _DAT_112f52ec0;
  puVar10 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar9 + lVar4) = puVar10;
  lVar5 = _DAT_112f52ec8;
  *(undefined8 *)(lVar9 + _DAT_112f52ec8) = 0;
  lVar18 = _DAT_112f52ea8;
  func_0x000107c61614(lVar9 + _DAT_112f52ea8,0);
  if (param_1 == 0) {
    func_0x000107c6142c(param_2);
    func_0x000107c61170(param_14);
    func_0x000107c615e8(param_13);
  }
  else if (param_13 == 0) {
    func_0x000107c615e8(param_1);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(param_14);
  }
  else {
    if (param_14 != 0) {
      *(long *)(lVar9 + _DAT_112f52ed0) = param_1;
      *(long *)(lVar9 + _DAT_112f52ed8) = param_13;
      *(long *)(lVar9 + _DAT_112f52ee0) = param_14;
      uVar19 = *(ulong *)(param_2 + 0x10);
      func_0x000107c615f4(param_1,2);
      func_0x000107c615f4(param_13,2);
      func_0x000107c61174();
      func_0x000107c61174();
      if (uVar19 == 0) {
        puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar17 = 0;
        puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          while( true ) {
            if (*(ulong *)(param_2 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1032b9cd4);
              (*pcVar7)();
            }
            lVar18 = *(long *)(param_2 + 0x20 + uVar17 * 8);
            if (*(long *)(lVar18 + 0x10) != 0) break;
LAB_1032b9880:
            uVar17 = uVar17 + 1;
            if (uVar19 == uVar17) goto LAB_1032b9b30;
          }
          func_0x000107c61434(lVar18);
          lVar11 = 0x656d616e;
          uVar16 = 0;
          func_0x000100029284(0x656d616e);
          if ((uVar16 & 1) == 0) {
            func_0x000107c6142c(lVar18);
            goto LAB_1032b9880;
          }
          func_0x0001000bb420(*(long *)(lVar18 + 0x38) + lVar11 * 0x20,auStack_88);
          func_0x000107c6142c(lVar18);
          ppuVar12 = &puStack_98;
          func_0x000107c6147c(ppuVar12,auStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
          uVar6 = uStack_90;
          puVar10 = puStack_98;
          if (((ulong)ppuVar12 & 1) == 0) goto LAB_1032b9880;
          if (*(long *)(lVar18 + 0x10) != 0) {
            func_0x000107c61434(lVar18);
            lVar11 = 0x6369706f54627573;
            uVar16 = 0xe900000000000073;
            func_0x000100029284(0x6369706f54627573);
            if ((uVar16 & 1) == 0) {
              func_0x000107c6142c(lVar18);
            }
            else {
              func_0x0001000bb420(*(long *)(lVar18 + 0x38) + lVar11 * 0x20,auStack_88);
              func_0x000107c6142c(lVar18);
              uVar13 = 0x112d38270;
              func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
              ppuVar12 = &puStack_98;
              func_0x000107c6147c(ppuVar12,auStack_88,PTR___sypN_11034f1a8 + 8,uVar13,6);
              if (((ulong)ppuVar12 & 1) != 0) {
                puStack_f8 = puStack_98;
              }
            }
          }
          puVar14 = puStack_e8;
          func_0x000107c61558();
          if (((ulong)puVar14 & 1) == 0) {
            puVar14 = (undefined *)0x0;
            FUN_1032bd144(0,*(long *)(puStack_e8 + 0x10) + 1,1,puStack_e8,0x112f52fb0,&UNK_10dba9bf8
                          ,&UNK_110635cb0);
            puStack_e8 = puVar14;
          }
          uVar16 = *(ulong *)(puStack_e8 + 0x10);
          if (*(ulong *)(puStack_e8 + 0x18) >> 1 <= uVar16) {
            puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puStack_e8 + 0x18));
            FUN_1032bd144(puVar14,uVar16 + 1,1,puStack_e8,0x112f52fb0,&UNK_10dba9bf8,&UNK_110635cb0)
            ;
            puStack_e8 = puVar14;
          }
          *(ulong *)(puStack_e8 + 0x10) = uVar16 + 1;
          *(undefined **)(puStack_e8 + uVar16 * 0x18 + 0x20) = puVar10;
          *(undefined8 *)(puStack_e8 + uVar16 * 0x18 + 0x28) = uVar6;
          *(undefined **)(puStack_e8 + uVar16 * 0x18 + 0x30) = puStack_f8;
          bVar8 = uVar19 - 1 != uVar17;
          uVar17 = uVar17 + 1;
          puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        } while (bVar8);
      }
LAB_1032b9b30:
      func_0x000107c6142c(param_2);
      *(undefined **)(lVar9 + _DAT_112f52ee8) = puStack_e8;
      *(undefined8 *)(lVar9 + _DAT_112f52ef0) = 0;
      *(byte *)(lVar9 + _DAT_112f52ef8) = param_3 & 1;
      *(byte *)(lVar9 + _DAT_112f52f00) = param_4 & 1;
      if (param_5 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = param_5;
        func_0x000107c49820();
      }
      plVar1 = (long *)(lVar9 + _DAT_112f52f08);
      *plVar1 = lVar18;
      *(bool *)(plVar1 + 1) = param_5 == 0;
      if (param_6 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = param_6;
        func_0x000107c49820();
      }
      plVar1 = (long *)(lVar9 + _DAT_112f52f10);
      *plVar1 = lVar18;
      *(bool *)(plVar1 + 1) = param_6 == 0;
      puVar2 = (undefined8 *)(lVar9 + _DAT_112f52f18);
      *puVar2 = param_7;
      puVar2[1] = param_8;
      puVar2 = (undefined8 *)(lVar9 + _DAT_112f52f20);
      *puVar2 = param_9;
      puVar2[1] = param_10;
      *(byte *)(lVar9 + _DAT_112f52f28) = (byte)param_11 & 1;
      *(byte *)(lVar9 + _DAT_112f52f30) = param_11._1_1_ & 1;
      puVar15 = auStack_a8;
      func_0x000107c61154(puVar15,PTR_s_initWithNibName_bundle__1125e9850,0,0);
      func_0x000107c61180();
      func_0x000107c5677c();
      func_0x000107c61170(puVar15);
      func_0x000107c61170(param_6);
      func_0x000107c615ec(param_1,2);
      func_0x000107c615ec(param_13,2);
      func_0x000107c61170(param_14);
      func_0x000107c61170(param_14);
      func_0x000107c61170(param_5);
      return puVar15;
    }
    func_0x000107c615e8(param_1);
    func_0x000107c615e8(param_13);
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c6142c(param_10);
  func_0x000107c6142c(param_8);
  func_0x000107c615e8(*(undefined8 *)(lVar9 + lVar11));
  func_0x000107c61170(*(undefined8 *)(lVar9 + lVar3));
  func_0x000107c61170(*(undefined8 *)(lVar9 + lVar4));
  func_0x000107c61170(*(undefined8 *)(lVar9 + lVar5));
  FUN_1032ba264(lVar9 + lVar18);
  func_0x000107c61464(lVar9,unaff_x20,0xa8,7);
  return (undefined1 *)0x0;
}



/* Entry: 1032ba264; end: 1032ba287;  */

undefined8 FUN_1032ba264(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1032ba288; end: 1032bac47; -[_TtC18ShakeToReportValdi32ShakeToReportValdiViewController initWithRuntime:topics:isInternal:showType:initialTopicIndex:initialSubTopicIndex:screenshotImagePath:title:vipMode:inAppMode:deckHierarchyFactory:valdiRuntimeProvider:] */

void FUN_1032ba288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_80;
  
  uVar1 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  func_0x000107c5fc54();
  if (param_9 == 0) {
    lStack_80 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    uVar2 = uVar1;
    lStack_80 = param_9;
  }
  if (param_10 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c615f0(param_13);
  func_0x000107c61174(param_14);
  func_0x0001032b9cd4(param_3,param_4,param_5,param_6,param_7,param_8,lStack_80,uVar2,param_10,uVar1
                      ,param_11);
  return;
}



/* Entry: 1032bac48; end: 1032bad4f; -[_TtC18ShakeToReportValdi32ShakeToReportValdiViewController initWithRuntime:screens:isInternal:showType:screenshotImagePath:title:deckHierarchyFactory:valdiRuntimeProvider:] */

void FUN_1032bac48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  func_0x000107c5fc54(param_4,uVar2);
  if (param_7 == 0) {
    param_7 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_7);
    uVar1 = uVar2;
  }
  if (param_8 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_8);
  }
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_9);
  func_0x000107c61174(param_10);
  func_0x0001032ba440(param_3,param_4,param_5,param_6,param_7,uVar1,param_8,uVar2,param_9,param_10);
  return;
}



/* Entry: 1032bad50; end: 1032bad77; -[_TtC18ShakeToReportValdi32ShakeToReportValdiViewController initWithCoder:] */

void FUN_1032bad50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1032bd424();
  return;
}



/* Entry: 1032bad78; end: 1032bae87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bad78(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5c5e8();
    func_0x000107c61180();
    func_0x000107c52b50(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar2);
    lVar3 = *(long *)(unaff_x20 + _DAT_112f52ed8);
    func_0x000107c409cc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c40978();
      func_0x000107c61180();
      lVar5 = lVar4;
      func_0x000107c41408();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      func_0x000107c615e8(lVar3);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f52eb0);
      *(long *)(unaff_x20 + _DAT_112f52eb0) = lVar5;
      func_0x000107c615e8(uVar6);
    }
    FUN_1032bae88();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032bae88);
  (*pcVar1)();
}



/* Entry: 1032bae88; end: 1032bbbbf;  */

/* WARNING: Possible PIC construction at 0x0001032baf70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032bb108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032bb1b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032bb1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032bb1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032bb2c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032bbae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032bb2cc) */
/* WARNING: Removing unreachable block (ram,0x0001032bb308) */
/* WARNING: Removing unreachable block (ram,0x0001032bb334) */
/* WARNING: Removing unreachable block (ram,0x0001032bb34c) */
/* WARNING: Removing unreachable block (ram,0x0001032bb378) */
/* WARNING: Removing unreachable block (ram,0x0001032bb39c) */
/* WARNING: Removing unreachable block (ram,0x0001032bb38c) */
/* WARNING: Removing unreachable block (ram,0x0001032bb3a0) */
/* WARNING: Removing unreachable block (ram,0x0001032bb3e4) */
/* WARNING: Removing unreachable block (ram,0x0001032bb3b8) */
/* WARNING: Removing unreachable block (ram,0x0001032bb3e8) */
/* WARNING: Removing unreachable block (ram,0x0001032bb410) */
/* WARNING: Removing unreachable block (ram,0x0001032bb44c) */
/* WARNING: Removing unreachable block (ram,0x0001032bb464) */
/* WARNING: Removing unreachable block (ram,0x0001032bb4a0) */
/* WARNING: Removing unreachable block (ram,0x0001032bb86c) */
/* WARNING: Removing unreachable block (ram,0x0001032bbbb4) */
/* WARNING: Removing unreachable block (ram,0x0001032bb8d4) */
/* WARNING: Removing unreachable block (ram,0x0001032bbbb8) */
/* WARNING: Removing unreachable block (ram,0x0001032bb99c) */
/* WARNING: Removing unreachable block (ram,0x0001032bbbbc) */
/* WARNING: Removing unreachable block (ram,0x0001032bba14) */
/* WARNING: Removing unreachable block (ram,0x0001032bb4f0) */
/* WARNING: Removing unreachable block (ram,0x0001032bbba0) */
/* WARNING: Removing unreachable block (ram,0x0001032bb578) */
/* WARNING: Removing unreachable block (ram,0x0001032bbba4) */
/* WARNING: Removing unreachable block (ram,0x0001032bb648) */
/* WARNING: Removing unreachable block (ram,0x0001032bbba8) */
/* WARNING: Removing unreachable block (ram,0x0001032bb6c0) */
/* WARNING: Removing unreachable block (ram,0x0001032bbbac) */
/* WARNING: Removing unreachable block (ram,0x0001032bb738) */
/* WARNING: Removing unreachable block (ram,0x0001032bbbb0) */
/* WARNING: Removing unreachable block (ram,0x0001032bb7b4) */
/* WARNING: Removing unreachable block (ram,0x0001032bbac4) */
/* WARNING: Removing unreachable block (ram,0x0001032bb860) */
/* WARNING: Removing unreachable block (ram,0x0001032bbacc) */
/* WARNING: Removing unreachable block (ram,0x0001032bb200) */
/* WARNING: Removing unreachable block (ram,0x0001032bb244) */
/* WARNING: Removing unreachable block (ram,0x0001032bb224) */
/* WARNING: Removing unreachable block (ram,0x0001032bb240) */
/* WARNING: Removing unreachable block (ram,0x0001032bb26c) */
/* WARNING: Removing unreachable block (ram,0x0001032bb1e4) */
/* WARNING: Removing unreachable block (ram,0x0001032bb1b4) */
/* WARNING: Removing unreachable block (ram,0x0001032bb10c) */
/* WARNING: Removing unreachable block (ram,0x0001032bb144) */
/* WARNING: Removing unreachable block (ram,0x0001032bb128) */
/* WARNING: Removing unreachable block (ram,0x0001032bb140) */
/* WARNING: Removing unreachable block (ram,0x0001032bb164) */
/* WARNING: Removing unreachable block (ram,0x0001032baf74) */
/* WARNING: Removing unreachable block (ram,0x0001032bafac) */
/* WARNING: Removing unreachable block (ram,0x0001032baf90) */
/* WARNING: Removing unreachable block (ram,0x0001032bafa8) */
/* WARNING: Removing unreachable block (ram,0x0001032bafcc) */
/* WARNING: Removing unreachable block (ram,0x0001032bbaec) */
/* WARNING: Removing unreachable block (ram,0x0001032bbb6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bae88(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar6 = *(long *)(unaff_x20 + _DAT_112f52ee8);
  if (*(long *)(lVar6 + 0x10) == 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112f52ef0);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) {
      func_0x000107c610f8(PTR_PTR_1126acff8);
      uVar4 = 0;
      FUN_1032bdbe4(0,0x112f52f88,&PTR_PTR_1126acff0);
      func_0x000107c5fc48(puVar5,uVar4);
    }
    else {
      func_0x0001032bd260(0,*(long *)(lVar6 + 0x10),0);
      if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032bbba0);
        (*pcVar1)();
      }
      uVar4 = *(undefined8 *)(lVar6 + 0x20);
      puVar5 = *(undefined **)(lVar6 + 0x28);
      lVar6 = *(long *)(lVar6 + 0x30);
      lVar7 = *(long *)(lVar6 + 0x10);
      if (lVar7 == 0) {
        func_0x000107c61434(puVar5);
        func_0x000107c61434(lVar6);
        func_0x000107c610f8(PTR_PTR_1126ad008);
        func_0x000107c5fadc(uVar4,puVar5);
      }
      else {
        func_0x000107c61434(puVar5);
        func_0x000107c61434(lVar6);
        func_0x0001032bd29c(0,lVar7,0);
        uVar4 = *(undefined8 *)(lVar6 + 0x20);
        puVar5 = *(undefined **)(lVar6 + 0x28);
        lVar6 = *(long *)(lVar6 + 0x30);
        puVar3 = PTR_PTR_1126acff0;
        func_0x000107c610f8(PTR_PTR_1126acff0);
        func_0x000107c61434(puVar5);
        func_0x000107c61434(lVar6);
        func_0x000107c5fadc(uVar4,puVar5);
        func_0x000107c478bc(puVar3);
        func_0x000107c61170(uVar4);
        if (*(long *)(lVar6 + 0x10) != 0) {
          func_0x000107c5fc48(lVar6,PTR___sSSN_11034da80);
          func_0x000107c59a44(puVar3);
          func_0x000107c61170(lVar6);
        }
      }
    }
  }
  else {
    func_0x0001032bd29c(0,*(long *)(lVar6 + 0x10),0);
    puVar3 = PTR___sSSN_11034da80;
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
    puVar5 = *(undefined **)(lVar6 + 0x28);
    lVar6 = *(long *)(lVar6 + 0x30);
    puVar2 = PTR_PTR_1126acff0;
    func_0x000107c610f8(PTR_PTR_1126acff0);
    func_0x000107c61434(puVar5);
    func_0x000107c61434(lVar6);
    func_0x000107c5fadc(uVar4,puVar5);
    func_0x000107c478bc(puVar2);
    func_0x000107c61170(uVar4);
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x000107c5fc48(lVar6,puVar3);
      func_0x000107c59a44(puVar2);
      func_0x000107c61170(lVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar5);
  return;
}



/* Entry: 1032bbbc0; end: 1032bbbe7; -[_TtC18ShakeToReportValdi32ShakeToReportValdiViewController viewDidLoad] */

void FUN_1032bbbc0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032bad78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032bbbe8; end: 1032bbbf7; -[_TtC18ShakeToReportValdi32ShakeToReportValdiViewController viewDidAppear:] */

void FUN_1032bbbe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  uStack_50 = param_1;
  uStack_48 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_50,puVar1,param_3);
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  *(undefined8 *)(lVar3 + 0x20) = 0x746e657665;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar3 + 0x28) = 0xe500000000000000;
  *(undefined8 *)(lVar3 + 0x30) = 0x65676150523253;
  *(undefined8 *)(lVar3 + 0x38) = 0xe700000000000000;
  *(undefined **)(lVar3 + 0x48) = puVar1;
  *(undefined8 *)(lVar3 + 0x50) = 0x656c6269736976;
  *(undefined8 *)(lVar3 + 0x58) = 0xe700000000000000;
  *(undefined **)(lVar3 + 0x78) = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar3 + 0x60) = 1;
  lVar4 = lVar3;
  func_0x000100214a84();
  func_0x000107c61588(lVar3);
  uVar2 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),2,uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(lVar4);
  return;
}



/* Entry: 1032bbbf8; end: 1032bbc07; -[_TtC18ShakeToReportValdi32ShakeToReportValdiViewController viewDidDisappear:] */

void FUN_1032bbbf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidDisappear__112684c48;
  uStack_50 = param_1;
  uStack_48 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_50,puVar1,param_3);
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  *(undefined8 *)(lVar3 + 0x20) = 0x746e657665;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar3 + 0x28) = 0xe500000000000000;
  *(undefined8 *)(lVar3 + 0x30) = 0x65676150523253;
  *(undefined8 *)(lVar3 + 0x38) = 0xe700000000000000;
  *(undefined **)(lVar3 + 0x48) = puVar1;
  *(undefined8 *)(lVar3 + 0x50) = 0x656c6269736976;
  *(undefined8 *)(lVar3 + 0x58) = 0xe700000000000000;
  *(undefined **)(lVar3 + 0x78) = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar3 + 0x60) = 0;
  lVar4 = lVar3;
  func_0x000100214a84();
  func_0x000107c61588(lVar3);
  uVar2 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),2,uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(lVar4);
  return;
}



/* Entry: 1032bbc08; end: 1032bbd43;  */

void FUN_1032bbc08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  uVar5 = *param_4;
  uStack_50 = param_1;
  uStack_48 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_50,uVar5,param_3);
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  *(undefined8 *)(lVar3 + 0x20) = 0x746e657665;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar3 + 0x28) = 0xe500000000000000;
  *(undefined8 *)(lVar3 + 0x30) = 0x65676150523253;
  *(undefined8 *)(lVar3 + 0x38) = 0xe700000000000000;
  *(undefined **)(lVar3 + 0x48) = puVar1;
  *(undefined8 *)(lVar3 + 0x50) = 0x656c6269736976;
  *(undefined8 *)(lVar3 + 0x58) = 0xe700000000000000;
  *(undefined **)(lVar3 + 0x78) = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar3 + 0x60) = param_5;
  lVar4 = lVar3;
  func_0x000100214a84();
  func_0x000107c61588(lVar3);
  uVar2 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),2,uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(lVar4);
  return;
}



/* Entry: 1032bbd44; end: 1032bc167;  */

undefined * FUN_1032bbd44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  puVar8 = &UNK_110635d58;
  puVar2 = puVar8;
  func_0x000107c613fc(&UNK_110635d58,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = puVar8;
  func_0x000107c613fc(&UNK_110635d58,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = puVar8;
  func_0x000107c613fc(&UNK_110635d58,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = puVar8;
  func_0x000107c613fc(&UNK_110635d58,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = puVar8;
  func_0x000107c613fc(&UNK_110635d58,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar7 = puVar8;
  func_0x000107c613fc(&UNK_110635d58,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  func_0x000107c613fc(&UNK_110635d58,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  puVar9 = PTR_PTR_1126ad010;
  func_0x000107c610f8();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x1032bd9a4;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110635d70;
  ppuVar10 = &puStack_a8;
  puStack_80 = puVar2;
  func_0x000107c60bc4();
  uStack_b8 = 0x1032bd9d4;
  puStack_d8 = puVar1;
  uStack_d0 = 0x42000000;
  pcStack_c8 = FUN_1032bcfa8;
  puStack_c0 = &UNK_110635d98;
  ppuVar11 = &puStack_d8;
  puStack_b0 = puVar3;
  func_0x000107c60bc4();
  uStack_e8 = 0x1032bd9f4;
  puStack_108 = puVar1;
  uStack_100 = 0x42000000;
  puStack_f8 = &UNK_1000f6b44;
  puStack_f0 = &UNK_110635dc0;
  ppuVar12 = &puStack_108;
  puStack_e0 = puVar4;
  func_0x000107c60bc4();
  uStack_118 = 0x1032bda24;
  puStack_138 = puVar1;
  uStack_130 = 0x42000000;
  puStack_128 = &UNK_1000f6b44;
  puStack_120 = &UNK_110635de8;
  ppuVar13 = &puStack_138;
  puStack_110 = puVar5;
  func_0x000107c60bc4(ppuVar13);
  uStack_148 = 0x1032bda54;
  puStack_168 = puVar1;
  uStack_160 = 0x42000000;
  puStack_158 = &UNK_1000f6b44;
  puStack_150 = &UNK_110635e10;
  ppuVar14 = &puStack_168;
  puStack_140 = puVar6;
  func_0x000107c60bc4(ppuVar14);
  uStack_178 = 0x1032bda84;
  puStack_198 = puVar1;
  uStack_190 = 0x42000000;
  puStack_188 = &UNK_1000f6b44;
  puStack_180 = &UNK_110635e38;
  ppuVar15 = &puStack_198;
  puStack_170 = puVar7;
  func_0x000107c60bc4();
  uStack_1a8 = 0x1032bdab4;
  puStack_1c8 = puVar1;
  uStack_1c0 = 0x42000000;
  puStack_1b8 = &UNK_1000f6b44;
  puStack_1b0 = &UNK_110635e60;
  ppuVar16 = &puStack_1c8;
  puStack_1a0 = puVar8;
  func_0x000107c60bc4();
  pcStack_1d8 = FUN_1032bcbb0;
  uStack_1d0 = 0;
  puStack_1f8 = puVar1;
  uStack_1f0 = 0x42000000;
  puStack_1e8 = &UNK_1000f6b44;
  puStack_1e0 = &UNK_110635e88;
  ppuVar17 = &puStack_1f8;
  func_0x000107c60bc4();
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(puVar8);
  func_0x000107c46414();
  func_0x000107c60bd0(ppuVar17);
  func_0x000107c60bd0(ppuVar16);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61574(uStack_1d0);
  func_0x000107c61574(puStack_1a0);
  func_0x000107c61574(puStack_170);
  func_0x000107c61574(puStack_140);
  func_0x000107c61574(puStack_110);
  func_0x000107c61574(puStack_e0);
  func_0x000107c61574(puStack_b0);
  puVar1 = puStack_80;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  return puVar9;
}



/* Entry: 1032bc168; end: 1032bc36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bc168(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  ppuVar8 = &puStack_a0;
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  uVar2 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f52ea8;
  if (uVar2 == 0) {
    return;
  }
  func_0x000107c61428(uVar2 + _DAT_112f52ea8,auStack_70,0,0);
  uVar3 = uVar2 + lVar1;
  func_0x000107c61618();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c61150();
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar2;
      func_0x000107c4d508();
      func_0x000107c61180();
      if (uVar4 != 0) {
        uVar9 = uVar4;
        func_0x000107c5de94();
        func_0x000107c61180();
        uVar5 = 0;
        FUN_1032bdbe4(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
        uVar6 = uVar9;
        func_0x000107c5fc54(uVar9,uVar5);
        func_0x000107c61170(uVar9);
        if (uVar6 >> 0x3e == 0) {
          uVar9 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar9 = uVar6 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar6) {
            uVar9 = uVar6;
          }
          func_0x000107c60480();
        }
        func_0x000107c6142c(uVar6);
        if (1 < (long)uVar9) {
          func_0x000107c4eb48(uVar4);
          func_0x000107c61180();
          func_0x000107c61170();
          func_0x000107c5a8fc(uVar3);
          func_0x000107c61170(uVar2);
          func_0x000107c615e8(uVar3);
          uVar2 = uVar4;
          goto LAB_1032bc334;
        }
        func_0x000107c61170(uVar4);
      }
    }
    func_0x000107c615e8(uVar3);
  }
  puVar7 = &UNK_1106360a0;
  func_0x000107c613fc(&UNK_1106360a0,0x18,7);
  *(ulong *)(puVar7 + 0x10) = uVar2;
  uStack_80 = 0x1032bdbdc;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1106360b8;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar7 = puStack_78;
  func_0x000107c61174(uVar2);
  func_0x000107c61574(puVar7);
  func_0x000107c420a8(uVar2);
  func_0x000107c60bd0(ppuVar8);
LAB_1032bc334:
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032bc36c; end: 1032bc3c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bc36c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52ea8;
  func_0x000107c61428(param_1 + _DAT_112f52ea8,auStack_38,0,0);
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c5a8f8();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1032bc3c8; end: 1032bc79f;  */

void FUN_1032bc3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar2 = &puStack_a0;
  puVar1 = &UNK_110635fd8;
  func_0x000107c613fc(&UNK_110635fd8,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  puVar1[0x28] = param_5;
  puVar1[0x29] = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  pcStack_80 = FUN_1032bdb54;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110635ff0;
  puStack_78 = puVar1;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c61174(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c61434(param_4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61434(param_9);
  func_0x000107c61574(puVar1);
  func_0x000100162d98("ShakeToReportValdiViewController.onDone",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1032bc7a0; end: 1032bc867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bc7a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_b0 [80];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f52ea8;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112f52ea8,auStack_60,0,0);
    lVar1 = param_1 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      FUN_1032bd964();
      func_0x000107c610f8();
      FUN_1032bdba0(param_2,auStack_b0);
      FUN_1032b9450(param_2);
      func_0x000107c5a900(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 1032bc868; end: 1032bca97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bc868(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f52ea8;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112f52ea8,auStack_50,0,0);
    lVar1 = param_1 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c5a908(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1032bca98; end: 1032bcb23;  */

void FUN_1032bca98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  uStack_48 = param_3;
  uStack_40 = param_2;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000100162d98(param_4,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1032bcb24; end: 1032bcbaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bcb24(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f52ea8;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112f52ea8,auStack_50,0,0);
    lVar1 = param_1 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c5a910(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1032bcbb0; end: 1032bcd8f;  */

void FUN_1032bcbb0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x12;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&puStack_80 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar2 + -8);
  lVar8 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar9 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar7 - extraout_x12;
  func_0x000107c5edd0(lVar9,0xd00000000000002e,0x800000010ef38a80);
  lVar1 = lVar9;
  (**(code **)(lVar11 + 0x30))(lVar9,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x0001000293e4(lVar9);
  }
  else {
    pcVar12 = *(code **)(lVar11 + 0x20);
    (*pcVar12)(lVar6,lVar9,lVar2);
    (**(code **)(lVar11 + 0x10))(lVar7,lVar6,lVar2);
    uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
    uVar10 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
    puVar3 = &UNK_110635ec0;
    func_0x000107c613fc(&UNK_110635ec0,uVar10 + lVar8,uVar5 | 7);
    (*pcVar12)(puVar3 + uVar10,lVar7,lVar2);
    pcStack_60 = FUN_1032bdb00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110635ed8;
    ppuVar4 = &puStack_80;
    puStack_58 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_58);
    func_0x000100162d98("ShakeToReportValdiViewController.onTapPrivacyPolicy",ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    (**(code **)(lVar11 + 8))(lVar6,lVar2);
  }
  return;
}



/* Entry: 1032bcd90; end: 1032bce47;  */

/* WARNING: Possible PIC construction at 0x0001032bce28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032bce2c) */

void FUN_1032bcd90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c5ed90();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar3 = 0;
  func_0x000100dfa6ec(0);
  uVar4 = uVar3;
  func_0x000100f33384();
  func_0x000107c5f9dc(puVar2,uVar3,PTR___sypN_11034f1a8 + 8,uVar4);
  func_0x000107c6142c(puVar2);
  func_0x000107c4de70(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1032bce48; end: 1032bce57; -[_TtC18ShakeToReportValdi32ShakeToReportValdiViewController updateImageWithPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bce48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f52eb8),PTR_s_next__112614028);
  return;
}



/* Entry: 1032bce58; end: 1032bce67; -[_TtC18ShakeToReportValdi32ShakeToReportValdiViewController updateVideoThumbnailWithPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bce58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f52ec0),PTR_s_next__112614028);
  return;
}



/* Entry: 1032bce68; end: 1032bcec7; -[_TtC18ShakeToReportValdi32ShakeToReportValdiViewController initWithNibName:bundle:] */

void FUN_1032bce68(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShakeToReportValdi.ShakeToReportValdiViewController",0x33,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032bce94);
  (*pcVar1)();
}



/* Entry: 1032bcec8; end: 1032bcfa7; -[_TtC18ShakeToReportValdi32ShakeToReportValdiViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032bcec8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f52ee8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f52ef0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f52f18 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f52f20 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f52ed0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f52ed8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f52ee0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f52eb0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f52eb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f52ec0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f52ec8));
  param_1 = param_1 + _DAT_112f52ea8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1032bcfa8; end: 1032bd0cb;  */

/* WARNING: Possible PIC construction at 0x0001032bd088: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032bd08c) */

void FUN_1032bcfa8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  uVar3 = param_4;
  func_0x000107c5faec(param_4);
  if (param_9 != 0) {
    func_0x000107c5fc54(param_9,PTR___sSSN_11034da80);
  }
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_10);
  (*pcVar1)(param_1,param_2,param_4,uVar3,param_5,param_6,param_7,param_8,param_9,param_10);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1032bd0cc; end: 1032bd143;  */

void FUN_1032bd0cc(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1032bdbe4(0,param_1,param_2);
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



/* Entry: 1032bd144; end: 1032bd25f;  */

undefined *
FUN_1032bd144(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1032bd260);
        (*pcVar3)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar4 = param_5;
    func_0x000107c610a4();
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar2,uVar6,param_7);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar6 * 0x18 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar2,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 1032bd260; end: 1032bd2d7;  */

void FUN_1032bd260(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1032bd2d8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1032bd2d8; end: 1032bd423;  */

undefined *
FUN_1032bd2d8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1032bd424);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_5;
    FUN_1032bd0cc(param_5,param_6,param_7,param_8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1032bdbe4(0,param_5,param_6);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1032bd424; end: 1032bd4e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bd424(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112f52eb0) = 0;
  lVar1 = _DAT_112f52eb8;
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112f52ec0;
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f52ec8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f52ea8,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ShakeToReportValdi/ShakeToReportValdiViewController.swift",0x39,2,0xf3,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032bd4e4);
  (*pcVar2)();
}



/* Entry: 1032bd4e4; end: 1032bd5bb;  */

long FUN_1032bd4e4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1032bd5bc; end: 1032bd66f;  */

undefined8 * FUN_1032bd5bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  *(undefined1 *)((long)param_1 + 0x1a) = *(undefined1 *)((long)param_2 + 0x1a);
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  uVar1 = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar1;
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  return param_1;
}



/* Entry: 1032bd670; end: 1032bd703;  */

undefined8 * FUN_1032bd670(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  *(undefined1 *)((long)param_1 + 0x1a) = *(undefined1 *)((long)param_2 + 0x1a);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  return param_1;
}



/* Entry: 1032bd704; end: 1032bd7bf;  */

int FUN_1032bd704(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x49) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032bd7c0; end: 1032bd823;  */

/* WARNING: Possible PIC construction at 0x0001032bd7d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032bd7d8) */

void FUN_1032bd7c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1032bd824; end: 1032bd887;  */

undefined8 * FUN_1032bd824(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1032bd888; end: 1032bd8cb;  */

undefined8 * FUN_1032bd888(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1032bd8cc; end: 1032bd963;  */

int FUN_1032bd8cc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032bd964; end: 1032bdae3;  */

void FUN_1032bd964(void)

{
  func_0x000107c61168(&PTR_PTR_1128ca0b0);
  return;
}



/* Entry: 1032bdae4; end: 1032bdaff;  */

void FUN_1032bdae4(long param_1,long param_2)

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



/* Entry: 1032bdb00; end: 1032bdb2b;  */

/* WARNING: Possible PIC construction at 0x0001032bce28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032bce2c) */

void FUN_1032bdb00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5ede0();
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c5ed90();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar3 = 0;
  func_0x000100dfa6ec(0);
  uVar4 = uVar3;
  func_0x000100f33384();
  func_0x000107c5f9dc(puVar2,uVar3,PTR___sypN_11034f1a8 + 8,uVar4);
  func_0x000107c6142c(puVar2);
  func_0x000107c4de70(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1032bdb2c; end: 1032bdb53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bdb2c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112f52ea8;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_112f52ea8,auStack_50,0,0);
    lVar2 = lVar1 + lVar2;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c5a910(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1032bdb54; end: 1032bdb93;  */

void FUN_1032bdb54(void)

{
  long unaff_x20;
  
  func_0x0001032bc508(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined1 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x29),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1032bdb94; end: 1032bdb9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bdb94(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_b0 [80];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = unaff_x20 + 0x18;
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f52ea8;
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + _DAT_112f52ea8,auStack_60,0,0);
    lVar1 = lVar3 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(lVar3);
    if (lVar1 != 0) {
      FUN_1032bd964();
      func_0x000107c610f8();
      FUN_1032bdba0(lVar2,auStack_b0);
      FUN_1032b9450(lVar2);
      func_0x000107c5a900(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1032bdba0; end: 1032bdbd3;  */

undefined8 FUN_1032bdba0(undefined8 param_1,undefined8 param_2)

{
  func_0x0001032bd538(param_2,param_1,&UNK_110635c10);
  return param_2;
}



/* Entry: 1032bdbd4; end: 1032bdbe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bdbd4(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  ulong uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  ppuVar8 = &puStack_a0;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  uVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f52ea8;
  if (uVar2 == 0) {
    return;
  }
  func_0x000107c61428(uVar2 + _DAT_112f52ea8,auStack_70,0,0);
  uVar3 = uVar2 + lVar1;
  func_0x000107c61618();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c61150();
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar2;
      func_0x000107c4d508();
      func_0x000107c61180();
      if (uVar4 != 0) {
        uVar9 = uVar4;
        func_0x000107c5de94();
        func_0x000107c61180();
        uVar5 = 0;
        FUN_1032bdbe4(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
        uVar6 = uVar9;
        func_0x000107c5fc54(uVar9,uVar5);
        func_0x000107c61170(uVar9);
        if (uVar6 >> 0x3e == 0) {
          uVar9 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar9 = uVar6 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar6) {
            uVar9 = uVar6;
          }
          func_0x000107c60480();
        }
        func_0x000107c6142c(uVar6);
        if (1 < (long)uVar9) {
          func_0x000107c4eb48(uVar4);
          func_0x000107c61180();
          func_0x000107c61170();
          func_0x000107c5a8fc(uVar3);
          func_0x000107c61170(uVar2);
          func_0x000107c615e8(uVar3);
          uVar2 = uVar4;
          goto LAB_1032bc334;
        }
        func_0x000107c61170(uVar4);
      }
    }
    func_0x000107c615e8(uVar3);
  }
  puVar7 = &UNK_1106360a0;
  func_0x000107c613fc(&UNK_1106360a0,0x18,7);
  *(ulong *)(puVar7 + 0x10) = uVar2;
  uStack_80 = 0x1032bdbdc;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1106360b8;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar7 = puStack_78;
  func_0x000107c61174(uVar2);
  func_0x000107c61574(puVar7);
  func_0x000107c420a8(uVar2);
  func_0x000107c60bd0(ppuVar8);
LAB_1032bc334:
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032bdbe4; end: 1032bdc23;  */

void FUN_1032bdbe4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1032bdc24; end: 1032bdce7;  */

void FUN_1032bdc24(long param_1,long param_2)

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



/* Entry: 1032bdce8; end: 1032bddf3; +[_TtC15SpeedTestTweaks15SpeedTestTweaks runTestsWithByteSizes:progress:onResult:completion:] */

/* WARNING: Possible PIC construction at 0x0001032bddd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032bddd4) */

void FUN_1032bdce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  uVar1 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c5fc54(param_3,uVar1);
  puVar2 = &UNK_110636198;
  func_0x000107c613fc(&UNK_110636198,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  puVar3 = &UNK_1106361c0;
  func_0x000107c613fc(&UNK_1106361c0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  puVar4 = &UNK_1106361e8;
  func_0x000107c613fc(&UNK_1106361e8,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_6;
  FUN_1032be028(param_3,FUN_1032be998,puVar2,FUN_1032be9e0,puVar3,FUN_1032bea18,puVar4);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1032bddf4; end: 1032bddf7; +[_TtC15SpeedTestTweaks15SpeedTestTweaks cancelActiveTest] */

/* WARNING: Possible PIC construction at 0x0001032be5fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032be600) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bddf4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  lVar3 = lRam0000000113518718;
  if (((lRam0000000113518718 == 0) || (lVar5 = *(long *)(lRam0000000113518718 + 0x48), lVar5 == 0))
     || (lRam0000000113518710 == 0)) {
    lRam0000000113518718 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lRam0000000113518718 + 0x40);
    uVar1 = *(undefined8 *)(lRam0000000113518710 + _DAT_112f53120);
    lVar2 = ((undefined8 *)(lRam0000000113518710 + _DAT_112f53120))[1];
    uVar4 = uVar1;
    func_0x000107c614f0(uVar1);
    pcVar7 = *(code **)(lVar2 + 0x10);
    func_0x000107c6157c(lVar3);
    func_0x000107c61434(lVar5);
    func_0x000107c615f0(uVar1);
    (*pcVar7)(uVar6,lVar5,uVar4,lVar2);
    func_0x000107c6142c(lVar5);
    func_0x000107c615e8(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar3);
  return;
}



/* Entry: 1032bddf8; end: 1032bde33; -[_TtC15SpeedTestTweaks15SpeedTestTweaks init] */

void FUN_1032bddf8(undefined8 param_1)

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



/* Entry: 1032bde34; end: 1032bde67;  */

void FUN_1032bde34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032bde68; end: 1032bde6b; -[_TtC15SpeedTestTweaks15SpeedTestTweaks .cxx_destruct] */

void FUN_1032bde68(void)

{
  return;
}



/* Entry: 1032bde6c; end: 1032bdea7;  */

void FUN_1032bde6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032bdea8; end: 1032bdeaf;  */

void FUN_1032bdea8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  double dVar7;
  
  if (!SCARRY8(*(long *)(unaff_x20 + 0x60),1)) {
    *(long *)(unaff_x20 + 0x60) = *(long *)(unaff_x20 + 0x60) + 1;
    if ((*(uint *)(param_3 + 0x30) & 1) == 0) {
      pcVar3 = *(code **)(unaff_x20 + 0x20);
      func_0x000107c5fb78(*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x40));
      uVar5 = 0xe800000000000000;
      (*pcVar3)(0x203a64656c696146,0xe800000000000000);
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x60);
      uVar6 = *(undefined8 *)(param_3 + 0x50);
      dVar7 = *(double *)(param_3 + 0x48);
      lVar4 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 6;
      *(undefined8 *)(lVar4 + 0x10) = 3;
      puVar1 = PTR___sSds7CVarArgsWP_11034ddc0;
      *(undefined **)(lVar4 + 0x38) = PTR___sSdN_11034dd90;
      *(undefined **)(lVar4 + 0x40) = puVar1;
      *(double *)(lVar4 + 0x20) = dVar7 / 1000.0;
      puVar2 = PTR___ss5Int64Vs7CVarArgsWP_11034ee78;
      puVar1 = PTR___ss5Int64VN_11034ee50;
      *(undefined **)(lVar4 + 0x60) = PTR___ss5Int64VN_11034ee50;
      *(undefined **)(lVar4 + 0x68) = puVar2;
      *(undefined8 *)(lVar4 + 0x48) = uVar6;
      *(undefined **)(lVar4 + 0x88) = puVar1;
      *(undefined **)(lVar4 + 0x90) = puVar2;
      *(undefined8 *)(lVar4 + 0x70) = uVar5;
      uVar5 = 0x800000010f1388c0;
      func_0x000107c5fb00(0xd00000000000002f,0x800000010f1388c0,lVar4);
      (**(code **)(unaff_x20 + 0x20))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1032be798);
  (*pcVar3)();
}



/* Entry: 1032bdeb0; end: 1032bdeeb;  */

/* WARNING: Possible PIC construction at 0x0001032be5fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032be600) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bdeb0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  code *pcVar7;
  
  if ((*(byte *)(unaff_x20 + 0x50) & 1) != 0) {
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  (**(code **)(unaff_x20 + 0x30))();
  lVar3 = lRam0000000113518718;
  if (((lRam0000000113518718 == 0) || (lVar5 = *(long *)(lRam0000000113518718 + 0x48), lVar5 == 0))
     || (lRam0000000113518710 == 0)) {
    lRam0000000113518718 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lRam0000000113518718 + 0x40);
    uVar1 = *(undefined8 *)(lRam0000000113518710 + _DAT_112f53120);
    lVar2 = ((undefined8 *)(lRam0000000113518710 + _DAT_112f53120))[1];
    uVar4 = uVar1;
    func_0x000107c614f0(uVar1);
    pcVar7 = *(code **)(lVar2 + 0x10);
    func_0x000107c6157c(lVar3);
    func_0x000107c61434(lVar5);
    func_0x000107c615f0(uVar1);
    (*pcVar7)(uVar6,lVar5,uVar4,lVar2);
    func_0x000107c6142c(lVar5);
    func_0x000107c615e8(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar3);
  return;
}



/* Entry: 1032bdeec; end: 1032bdf0b;  */

/* WARNING: Possible PIC construction at 0x0001032be5fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032be600) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bdeec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  code *pcVar7;
  
  if ((*(byte *)(unaff_x20 + 0x50) & 1) != 0) {
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  pcVar7 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c5fb78(param_3,param_4);
  (*pcVar7)(0x203a726f727245,0xe700000000000000);
  func_0x000107c6142c(0xe700000000000000);
  (**(code **)(unaff_x20 + 0x30))();
  lVar3 = lRam0000000113518718;
  if (((lRam0000000113518718 == 0) || (lVar5 = *(long *)(lRam0000000113518718 + 0x48), lVar5 == 0))
     || (lRam0000000113518710 == 0)) {
    lRam0000000113518718 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lRam0000000113518718 + 0x40);
    uVar1 = *(undefined8 *)(lRam0000000113518710 + _DAT_112f53120);
    lVar2 = ((undefined8 *)(lRam0000000113518710 + _DAT_112f53120))[1];
    uVar4 = uVar1;
    func_0x000107c614f0(uVar1);
    pcVar7 = *(code **)(lVar2 + 0x10);
    func_0x000107c6157c(lVar3);
    func_0x000107c61434(lVar5);
    func_0x000107c615f0(uVar1);
    (*pcVar7)(uVar6,lVar5,uVar4,lVar2);
    func_0x000107c6142c(lVar5);
    func_0x000107c615e8(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar3);
  return;
}



/* Entry: 1032bdf0c; end: 1032be027;  */

undefined * FUN_1032bdf0c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1032be028);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f53118;
    func_0x0001000285a8(0x112f53118,&UNK_10dba9d00);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110636380);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1032be028; end: 1032be553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032be028(ulong param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long extraout_x8;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  code *pcVar18;
  ulong uVar19;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar6 = 0;
  func_0x000107c5eea4();
  lStack_b0 = *(long *)(lVar6 + -8);
  lStack_a8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lStack_b8 = (long)&uStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (lRam0000000113518710 == 0) {
    (*param_4)(0xd000000000000015,0x800000010f138910);
    (*param_6)();
  }
  else {
    uVar7 = *(ulong *)(lRam0000000113518710 + _DAT_112f53120);
    uStack_120 = ((ulong *)(lRam0000000113518710 + _DAT_112f53120))[1];
    if (param_1 >> 0x3e == 0) {
      uVar17 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar17 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar17 = param_1;
      }
      func_0x000107c60480();
    }
    uStack_130 = param_2;
    uStack_128 = param_3;
    uStack_118 = uVar7;
    uStack_110 = param_5;
    pcStack_108 = param_4;
    uStack_100 = param_7;
    pcStack_f8 = param_6;
    func_0x000107c615f0();
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar17 != 0) {
      uVar19 = 0;
      uStack_c0 = param_1 & 0xc000000000000001;
      uStack_c8 = param_1 & 0xffffffffffffff8;
      uVar16 = 1;
      uStack_e8 = 2;
      uStack_f0 = 1;
      uStack_d8 = uVar17;
      uStack_d0 = param_1;
      do {
        if (uStack_c0 == 0) {
          if (*(ulong *)(uStack_c8 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1032be530);
            (*pcVar5)();
          }
          uVar7 = *(ulong *)(uStack_d0 + uVar19 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar7 = uVar19;
          func_0x0001002ec9a0(uVar19,uStack_d0);
        }
        uVar17 = uVar19 + 1;
        if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1032be52c);
          (*pcVar5)();
        }
        uVar8 = uVar7;
        puStack_98 = puVar12;
        func_0x000107c4c0a8();
        uStack_a0 = uVar7;
        if (uVar8 == 0x19000) {
          puVar12 = &UNK_10dba9cb0;
LAB_1032be1ac:
          uVar15 = *(undefined8 *)(puVar12 + 8);
          uVar14 = *(undefined8 *)(puVar12 + 0x10);
          func_0x000107c61434(uVar14);
        }
        else {
          if (uVar8 == 0xa00000) {
            puVar12 = &UNK_10dba9ce0;
            goto LAB_1032be1ac;
          }
          if (uVar8 == 0x100000) {
            puVar12 = &UNK_10dba9cc8;
            goto LAB_1032be1ac;
          }
          uVar14 = 0xe700000000000000;
          uVar15 = 0x6e776f6e6b6e55;
        }
        uStack_88 = 0;
        uStack_80 = 0xe000000000000000;
        func_0x000107c5fb78(0x5f747365745f6975,0xe800000000000000);
        puVar12 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        uStack_90 = uVar19;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar12);
        func_0x000107c5fb78(0x5f,0xe100000000000000);
        lVar6 = lStack_b8;
        func_0x000107c5eea0(lStack_b8);
        func_0x000107c5ee8c();
        (**(code **)(lStack_b0 + 8))(lVar6,lStack_a8);
        puVar9 = &uStack_88;
        func_0x000107c5fddc(uVar16,puVar9,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        uVar4 = uStack_80;
        uVar3 = uStack_88;
        FUN_1032bea7c();
        uVar1 = *puVar9;
        uVar2 = puVar9[1];
        lVar6 = 0x112da3158;
        func_0x0001000285a8(0x112da3158,&UNK_10d9477f0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar6 + 0x18) = uStack_e8;
        *(undefined8 *)(lVar6 + 0x10) = uStack_f0;
        *(undefined8 *)(lVar6 + 0x20) = uVar15;
        *(undefined8 *)(lVar6 + 0x28) = uVar14;
        *(ulong *)(lVar6 + 0x30) = uVar8;
        uVar16 = uStack_f0;
        func_0x000107c61434(uVar2);
        puVar12 = puStack_98;
        puVar10 = puStack_98;
        func_0x000107c61558();
        puVar11 = puVar12;
        if (((ulong)puVar10 & 1) == 0) {
          puVar11 = (undefined *)0x0;
          FUN_1032bdf0c(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
        }
        uVar7 = *(ulong *)(puVar11 + 0x10);
        puVar12 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar7) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
          FUN_1032bdf0c(puVar12,uVar7 + 1,1,puVar11);
        }
        *(ulong *)(puVar12 + 0x10) = uVar7 + 1;
        *(undefined8 *)(puVar12 + uVar7 * 0x30 + 0x20) = uVar3;
        *(undefined8 *)(puVar12 + uVar7 * 0x30 + 0x28) = uVar4;
        *(undefined8 *)(puVar12 + uVar7 * 0x30 + 0x30) = uVar1;
        *(undefined8 *)(puVar12 + uVar7 * 0x30 + 0x38) = uVar2;
        *(undefined8 *)(puVar12 + uVar7 * 0x30 + 0x40) = 60000;
        *(long *)(puVar12 + uVar7 * 0x30 + 0x48) = lVar6;
        uVar7 = uStack_a0;
        func_0x000107c61170();
        uVar19 = uVar19 + 1;
      } while (uVar17 != uStack_d8);
    }
    uVar14 = *(undefined8 *)(puVar12 + 0x10);
    func_0x0001032be640();
    func_0x000107c613fc();
    uVar15 = uStack_100;
    pcVar5 = pcStack_108;
    uVar16 = uStack_110;
    *(undefined8 *)(uVar7 + 0x40) = 0;
    *(undefined8 *)(uVar7 + 0x48) = 0;
    *(undefined1 *)(uVar7 + 0x50) = 0;
    *(undefined8 *)(uVar7 + 0x58) = uVar14;
    *(undefined8 *)(uVar7 + 0x60) = 0;
    *(undefined8 *)(uVar7 + 0x10) = uStack_130;
    *(undefined8 *)(uVar7 + 0x18) = uStack_128;
    *(code **)(uVar7 + 0x20) = pcStack_108;
    *(undefined8 *)(uVar7 + 0x28) = uStack_110;
    *(code **)(uVar7 + 0x30) = pcStack_f8;
    *(undefined8 *)(uVar7 + 0x38) = uStack_100;
    uVar17 = uRam0000000113518718;
    uRam0000000113518718 = uVar7;
    func_0x000107c6157c();
    func_0x000107c6157c(uVar16);
    func_0x000107c6157c(uVar15);
    func_0x000107c6157c(uVar7);
    func_0x000107c61574(uVar17);
    uVar19 = uStack_118;
    uVar8 = uStack_118;
    func_0x000107c614f0(uStack_118);
    uVar17 = uStack_120;
    pcVar18 = *(code **)(uStack_120 + 8);
    func_0x000107c6157c(uVar7);
    puVar10 = puVar12;
    uVar13 = uVar7;
    (*pcVar18)(puVar12,uVar7,&PTR_DAT_110636160,uVar8,uVar17);
    func_0x000107c61574(uVar7);
    uVar17 = (ulong)puVar10 & 0xffffffffffff;
    if ((uVar13 & 0x2000000000000000) != 0) {
      uVar17 = uVar13 >> 0x38 & 0xf;
    }
    if (uVar17 == 0) {
      func_0x000107c6142c(uVar13);
      uVar17 = uRam0000000113518718;
      uRam0000000113518718 = 0;
      func_0x000107c61574(uVar17);
      (*pcVar5)(0xd000000000000014,0x800000010f1388f0);
      (*pcStack_f8)();
      func_0x000107c6142c(puVar12);
      func_0x000107c615e8(uVar19);
      func_0x000107c61574(uVar7);
    }
    else {
      func_0x000107c615e8(uVar19);
      uVar16 = *(undefined8 *)(uVar7 + 0x48);
      *(undefined **)(uVar7 + 0x40) = puVar10;
      *(ulong *)(uVar7 + 0x48) = uVar13;
      func_0x000107c6142c(puVar12);
      func_0x000107c61574(uVar7);
      func_0x000107c6142c(uVar16);
    }
  }
  return;
}



/* Entry: 1032be554; end: 1032be61f;  */

/* WARNING: Possible PIC construction at 0x0001032be5fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032be600) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032be554(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  lVar3 = lRam0000000113518718;
  if (((lRam0000000113518718 == 0) || (lVar5 = *(long *)(lRam0000000113518718 + 0x48), lVar5 == 0))
     || (lRam0000000113518710 == 0)) {
    lRam0000000113518718 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lRam0000000113518718 + 0x40);
    uVar1 = *(undefined8 *)(lRam0000000113518710 + _DAT_112f53120);
    lVar2 = ((undefined8 *)(lRam0000000113518710 + _DAT_112f53120))[1];
    uVar4 = uVar1;
    func_0x000107c614f0(uVar1);
    pcVar7 = *(code **)(lVar2 + 0x10);
    func_0x000107c6157c(lVar3);
    func_0x000107c61434(lVar5);
    func_0x000107c615f0(uVar1);
    (*pcVar7)(uVar6,lVar5,uVar4,lVar2);
    func_0x000107c6142c(lVar5);
    func_0x000107c615e8(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar3);
  return;
}



/* Entry: 1032be620; end: 1032be65f;  */

void FUN_1032be620(void)

{
  func_0x000107c61168(&PTR_PTR_1128ca300);
  return;
}



/* Entry: 1032be660; end: 1032be797;  */

void FUN_1032be660(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  double dVar7;
  
  if (!SCARRY8(*(long *)(unaff_x20 + 0x60),1)) {
    *(long *)(unaff_x20 + 0x60) = *(long *)(unaff_x20 + 0x60) + 1;
    if ((*(uint *)(param_1 + 0x30) & 1) == 0) {
      pcVar3 = *(code **)(unaff_x20 + 0x20);
      func_0x000107c5fb78(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
      uVar5 = 0xe800000000000000;
      (*pcVar3)(0x203a64656c696146,0xe800000000000000);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      dVar7 = *(double *)(param_1 + 0x48);
      lVar4 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 6;
      *(undefined8 *)(lVar4 + 0x10) = 3;
      puVar1 = PTR___sSds7CVarArgsWP_11034ddc0;
      *(undefined **)(lVar4 + 0x38) = PTR___sSdN_11034dd90;
      *(undefined **)(lVar4 + 0x40) = puVar1;
      *(double *)(lVar4 + 0x20) = dVar7 / 1000.0;
      puVar2 = PTR___ss5Int64Vs7CVarArgsWP_11034ee78;
      puVar1 = PTR___ss5Int64VN_11034ee50;
      *(undefined **)(lVar4 + 0x60) = PTR___ss5Int64VN_11034ee50;
      *(undefined **)(lVar4 + 0x68) = puVar2;
      *(undefined8 *)(lVar4 + 0x48) = uVar6;
      *(undefined **)(lVar4 + 0x88) = puVar1;
      *(undefined **)(lVar4 + 0x90) = puVar2;
      *(undefined8 *)(lVar4 + 0x70) = uVar5;
      uVar5 = 0x800000010f1388c0;
      func_0x000107c5fb00(0xd00000000000002f,0x800000010f1388c0,lVar4);
      (**(code **)(unaff_x20 + 0x20))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1032be798);
  (*pcVar3)();
}



/* Entry: 1032be798; end: 1032be837;  */

/* WARNING: Possible PIC construction at 0x0001032be5fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032be600) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032be798(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  code *pcVar7;
  
  if ((*(byte *)(unaff_x20 + 0x50) & 1) != 0) {
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  pcVar7 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c5fb78();
  (*pcVar7)(0x203a726f727245,0xe700000000000000);
  func_0x000107c6142c(0xe700000000000000);
  (**(code **)(unaff_x20 + 0x30))();
  lVar3 = lRam0000000113518718;
  if (((lRam0000000113518718 == 0) || (lVar5 = *(long *)(lRam0000000113518718 + 0x48), lVar5 == 0))
     || (lRam0000000113518710 == 0)) {
    lRam0000000113518718 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lRam0000000113518718 + 0x40);
    uVar1 = *(undefined8 *)(lRam0000000113518710 + _DAT_112f53120);
    lVar2 = ((undefined8 *)(lRam0000000113518710 + _DAT_112f53120))[1];
    uVar4 = uVar1;
    func_0x000107c614f0(uVar1);
    pcVar7 = *(code **)(lVar2 + 0x10);
    func_0x000107c6157c(lVar3);
    func_0x000107c61434(lVar5);
    func_0x000107c615f0(uVar1);
    (*pcVar7)(uVar6,lVar5,uVar4,lVar2);
    func_0x000107c6142c(lVar5);
    func_0x000107c615e8(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar3);
  return;
}



/* Entry: 1032be838; end: 1032be997;  */

void FUN_1032be838(int param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  if (!SCARRY8(*(long *)(unaff_x20 + 0x60),1)) {
    if ((int)param_2 < 2) {
      param_2 = 1;
    }
    fVar1 = 0.1;
    if (0.1 < (float)param_1 / (float)param_2) {
      fVar1 = (float)param_1 / (float)param_2;
    }
    func_0x000107c602fc(0x11);
    func_0x000107c6142c(0xe000000000000000);
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puVar2 = PTR___sSiN_11034deb0;
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    func_0x000107c5fb78(0x2f,0xe100000000000000);
    func_0x000107c6057c(puVar2,puVar5);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    func_0x000107c5fb78(0x203a,0xe200000000000000);
    func_0x000107c5fb78(param_3,param_4);
    (**(code **)(unaff_x20 + 0x10))(fVar1,0x2074736575716552,0xe800000000000000);
    func_0x000107c6142c(0xe800000000000000);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1032be998);
  (*pcVar3)();
}



/* Entry: 1032be998; end: 1032be9df;  */

void FUN_1032be998(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(param_1,lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1032be9e0; end: 1032bea17;  */

void FUN_1032be9e0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032bea18; end: 1032bea23;  */

void FUN_1032bea18(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001032bea20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1032bea24; end: 1032bea7b;  */

bool FUN_1032bea24(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_1;
  uVar1 = param_1[2];
  uVar3 = param_2[2];
  if ((uVar2 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar2 & 1) == 0))
  {
    return false;
  }
  return uVar1 == uVar3;
}



/* Entry: 1032bea7c; end: 1032bea87;  */

undefined * FUN_1032bea7c(void)

{
  return &UNK_110636288;
}



/* Entry: 1032bea88; end: 1032beb37;  */

undefined8 FUN_1032bea88(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_2 + 0x10)) {
    if ((lVar3 != 0) && (param_1 != param_2)) {
      plVar4 = (long *)(param_2 + 0x30);
      plVar5 = (long *)(param_1 + 0x30);
      do {
        uVar1 = plVar5[-2];
        lVar6 = *plVar5;
        lVar7 = *plVar4;
        if (uVar1 == plVar4[-2] && plVar5[-1] == plVar4[-1]) {
          if (lVar6 != lVar7) goto LAB_1032beb18;
        }
        else {
          func_0x000107c605b8();
          if ((uVar1 & 1) == 0) {
            return 0;
          }
          if (lVar6 != lVar7) {
            return 0;
          }
        }
        plVar4 = plVar4 + 3;
        plVar5 = plVar5 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    uVar2 = 1;
  }
  else {
LAB_1032beb18:
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1032beb38; end: 1032bec3b;  */

uint FUN_1032beb38(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_1032bec3c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1032bec3c; end: 1032bed73;  */

undefined8 FUN_1032bec3c(ulong *param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  uVar2 = *param_1;
  if ((((uVar2 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar2 & 1) == 0)
       ) || ((uVar2 = param_1[2], uVar2 != param_2[2] || param_1[3] != param_2[3] &&
             (func_0x000107c605b8(), (uVar2 & 1) == 0)))) || (param_1[4] != param_2[4])) {
    return 0;
  }
  uVar2 = param_1[5];
  uVar3 = param_2[5];
  lVar4 = *(long *)(uVar2 + 0x10);
  if (lVar4 == *(long *)(uVar3 + 0x10)) {
    if ((lVar4 != 0) && (uVar2 != uVar3)) {
      plVar5 = (long *)(uVar3 + 0x30);
      plVar6 = (long *)(uVar2 + 0x30);
      do {
        uVar2 = plVar6[-2];
        lVar7 = *plVar6;
        lVar8 = *plVar5;
        if (uVar2 == plVar5[-2] && plVar6[-1] == plVar5[-1]) {
          if (lVar7 != lVar8) goto LAB_1032beb18;
        }
        else {
          func_0x000107c605b8();
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          if (lVar7 != lVar8) {
            return 0;
          }
        }
        plVar5 = plVar5 + 3;
        plVar6 = plVar6 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    uVar1 = 1;
  }
  else {
LAB_1032beb18:
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1032bed74; end: 1032beec3;  */

undefined8 FUN_1032bed74(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  
  uVar4 = *param_1;
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  uVar3 = param_1[4];
  uVar9 = param_1[5];
  uVar1 = param_2[2];
  uVar7 = param_2[3];
  uVar2 = param_2[4];
  uVar8 = param_2[5];
  if (((uVar4 == *param_2) && (param_1[1] == param_2[1])) ||
     (func_0x000107c605b8(), (uVar4 & 1) != 0)) {
    if ((uVar5 == uVar1) && (uVar6 == uVar7)) {
      if (uVar3 != uVar2) {
        return 0;
      }
    }
    else {
      func_0x000107c605b8(uVar5,uVar6,uVar1,uVar7,0);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      if (uVar3 != uVar2) {
        return 0;
      }
    }
    FUN_1032bea88(uVar9,uVar8);
    if (((uVar9 & 1) != 0) && ((((uint)param_1[6] ^ (uint)param_2[6]) & 1) == 0)) {
      uVar6 = param_1[7];
      dVar10 = (double)param_1[9];
      uVar1 = param_1[10];
      uVar5 = param_1[0xb];
      uVar8 = param_1[0xc];
      dVar11 = (double)param_2[9];
      uVar2 = param_2[10];
      uVar3 = param_2[0xb];
      uVar7 = param_2[0xc];
      if ((((uVar6 == param_2[7]) && (param_1[8] == param_2[8])) ||
          (func_0x000107c605b8(), (uVar6 & 1) != 0)) &&
         ((((dVar10 == dVar11 && (uVar1 == uVar2)) && (uVar5 == uVar3)) && (uVar8 == uVar7)))) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 1032beec4; end: 1032beecb;  */

void FUN_1032beec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1032beecc; end: 1032beeff;  */

undefined8 * FUN_1032beecc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1032bef00; end: 1032bef53;  */

undefined8 * FUN_1032bef00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1032bef54; end: 1032bef8f;  */

undefined8 * FUN_1032bef54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1032bef90; end: 1032bf027;  */

int FUN_1032bef90(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032bf028; end: 1032bf057;  */

/* WARNING: Possible PIC construction at 0x0001032bf03c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032bf040) */

void FUN_1032bf028(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1032bf058; end: 1032bf137;  */

undefined8 * FUN_1032bf058(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1032bf138; end: 1032bf18b;  */

undefined8 * FUN_1032bf138(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1032bf18c; end: 1032bf237;  */

int FUN_1032bf18c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032bf238; end: 1032bf27b;  */

undefined1 * FUN_1032bf238(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1032bf27c; end: 1032bf2ef;  */

undefined1 * FUN_1032bf27c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return param_1;
}



/* Entry: 1032bf2f0; end: 1032bf343;  */

undefined1 * FUN_1032bf2f0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return param_1;
}



/* Entry: 1032bf344; end: 1032bf3e7;  */

int FUN_1032bf344(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032bf3e8; end: 1032bf41f;  */

/* WARNING: Possible PIC construction at 0x0001032bf3fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032bf40c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032bf400) */
/* WARNING: Removing unreachable block (ram,0x0001032bf410) */

void FUN_1032bf3e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}


