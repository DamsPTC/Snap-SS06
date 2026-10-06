/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011fda04; end: 1011fda8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fda04(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d67960);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112d67968);
  if (lVar1 != 0) {
    func_0x000107c4db74();
    func_0x000107c61180();
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___Block_release_11034bcf0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1011fda90; end: 1011fda93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fda90(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d67960);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112d67968);
  if (lVar1 != 0) {
    func_0x000107c4db74();
    func_0x000107c61180();
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___Block_release_11034bcf0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1011fda94; end: 1011fdab3;  */

void FUN_1011fda94(void)

{
  func_0x000107c61168(&PTR_PTR_1127ba8d0);
  return;
}



/* Entry: 1011fdab4; end: 1011fdb93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011fdab4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  func_0x000107c613fc();
  lVar2 = 0;
  FUN_1011fda94();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d67968) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d67960) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_50,puVar1);
  uVar5 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(uVar5);
  return unaff_x20;
}



/* Entry: 1011fdb94; end: 1011fdbaf;  */

void FUN_1011fdb94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011fdbb0; end: 1011fdbcf;  */

void FUN_1011fdbb0(void)

{
  func_0x000107c61168(&PTR_PTR_112d679d8);
  return;
}



/* Entry: 1011fdbd0; end: 1011fdc17; -[SCResurrectedRestoreBillboardActionHandlerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fdbd0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67a30;
  func_0x000107c61428(param_1 + _DAT_112d67a30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fdc18; end: 1011fdc6f; -[SCResurrectedRestoreBillboardActionHandlerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fdc18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67a30;
  func_0x000107c61428(param_1 + _DAT_112d67a30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fdc70; end: 1011fdcb7; -[SCResurrectedRestoreBillboardActionHandlerEntryPoint streakRestorePromoScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fdc70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67a38;
  func_0x000107c61428(param_1 + _DAT_112d67a38,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1011fdcb8; end: 1011fdd1b; -[SCResurrectedRestoreBillboardActionHandlerEntryPoint setStreakRestorePromoScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fdcb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67a38;
  func_0x000107c61428(param_1 + _DAT_112d67a38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1011fdd1c; end: 1011fde67; -[SCResurrectedRestoreBillboardActionHandlerEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x0001011fddf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fde00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fde20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fde48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011fde04) */
/* WARNING: Removing unreachable block (ram,0x0001011fddf4) */
/* WARNING: Removing unreachable block (ram,0x0001011fde24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fdd1c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  lVar5 = param_1;
  if (lVar2 != 0) {
    func_0x000107c5c0f4();
    func_0x000107c61180();
    lVar5 = lVar2;
    if (param_1 != 0) {
      FUN_1011fdbb0(0);
      func_0x000107c613fc();
      lVar3 = 0;
      FUN_1011fda94();
      lVar4 = lVar3;
      func_0x000107c610f8();
      *(undefined8 *)(lVar4 + _DAT_112d67968) = 0;
      *(long *)(lVar4 + _DAT_112d67960) = param_1;
      puVar1 = PTR_s_init_1125d9248;
      lStack_50 = lVar4;
      lStack_48 = lVar3;
      func_0x000107c61174(param_1);
      func_0x000107c61154(&lStack_50,puVar1);
      func_0x000107c4e9e4(lVar2);
      func_0x000107c61180();
      func_0x000107c4fba8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1011fde68; end: 1011fdeab; -[SCResurrectedRestoreBillboardActionHandlerEntryPoint end] */

void FUN_1011fde68(undefined8 param_1)

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



/* Entry: 1011fdeac; end: 1011fe043;  */

void FUN_1011fdeac(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef10d2180)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001e,0x800000010ef2de80,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ResurrectedRestoreBillboardActionHandler/SCResurrectedRestoreBillboardActionHandlerEntryPoint.swift"
                            ,99,2,0x26,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011fe044);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599f0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011fe044; end: 1011fe0ef; -[SCResurrectedRestoreBillboardActionHandlerEntryPoint setValue:forIvarName:] */

void FUN_1011fe044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011fdeac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011fe0f0; end: 1011fe15b; -[SCResurrectedRestoreBillboardActionHandlerEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fe0f0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d67a30,0);
  *(undefined8 *)(param_1 + _DAT_112d67a38) = 0;
  *(undefined8 *)(param_1 + _DAT_112d67a40) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011fe15c; end: 1011fe18f;  */

void FUN_1011fe15c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011fe190; end: 1011fe1d7; -[SCResurrectedRestoreBillboardActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fe190(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d67a30);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d67a38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d67a40));
  return;
}



/* Entry: 1011fe1d8; end: 1011fe1f7;  */

void FUN_1011fe1d8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ba998);
  return;
}



/* Entry: 1011fe1f8; end: 1011fe1ff; -[_TtC35ResurrectedRestoreFHPSignalProvider35ResurrectedRestoreFHPSignalProvider preCheckSource] */

undefined8 FUN_1011fe1f8(void)

{
  return 0x19;
}



/* Entry: 1011fe200; end: 1011fe42f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011fe200(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar7 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112d67a78);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c50758();
    func_0x000107c61170(lVar1);
    if (lVar2 == 0) {
      lVar1 = *(long *)(unaff_x20 + _DAT_112d67a80);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_112d67a70);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar2 != 0) {
          func_0x000107c50750();
          func_0x000107c615e8(lVar2);
          puVar3 = PTR_PTR_1126ae560;
          func_0x000107c610f8();
          func_0x000107c453e4();
          FUN_1011fe8ec(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          uVar4 = 1;
          func_0x000107c60110(1);
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c490d4();
          puVar6 = &UNK_110393448;
          func_0x000107c613fc(&UNK_110393448,0x18,7);
          *(undefined **)(puVar6 + 0x10) = puVar3;
          pcStack_50 = FUN_1011fe8c8;
          puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_68 = 0x42000000;
          pcStack_60 = FUN_1011fc9bc;
          puStack_58 = &UNK_110393460;
          puStack_48 = puVar6;
          func_0x000107c60bc4(&puStack_70);
          puVar6 = puStack_48;
          func_0x000107c61174(puVar3);
          func_0x000107c61574(puVar6);
          func_0x000107c4309c(lVar1);
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(puVar5);
          puVar6 = puVar3;
          func_0x000107c43bf4(puVar3);
          func_0x000107c61180();
          func_0x000107c615e8(lVar1);
          func_0x000107c61170(puVar3);
          return puVar6;
        }
        func_0x000107c615e8(lVar1);
      }
    }
  }
  puVar6 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  return puVar6;
}



/* Entry: 1011fe430; end: 1011fe4df; -[_TtC35ResurrectedRestoreFHPSignalProvider35ResurrectedRestoreFHPSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_1011fe430(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1011fe5a8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011fe4e0; end: 1011fe53f; -[_TtC35ResurrectedRestoreFHPSignalProvider35ResurrectedRestoreFHPSignalProvider init] */

void FUN_1011fe4e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ResurrectedRestoreFHPSignalProvider.ResurrectedRestoreFHPSignalProvider",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011fe50c);
  (*pcVar1)();
}



/* Entry: 1011fe540; end: 1011fe587; -[_TtC35ResurrectedRestoreFHPSignalProvider35ResurrectedRestoreFHPSignalProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011fe55c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011fe560) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fe540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d67a70));
  return;
}



/* Entry: 1011fe588; end: 1011fe5a7;  */

void FUN_1011fe588(void)

{
  func_0x000107c61168(&PTR_PTR_1127baa60);
  return;
}



/* Entry: 1011fe5a8; end: 1011fe8c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fe5a8(double param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(unaff_x20 + _DAT_112d67a70);
  lVar3 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar8 = lVar3;
    func_0x000107c4a354();
    func_0x000107c615e8(lVar3);
    if ((int)lVar8 != 0) {
      lVar7 = *(long *)(unaff_x20 + _DAT_112d67a78);
      lVar3 = lVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c50754();
        dVar11 = param_1;
        func_0x000107c61170(lVar3);
        if (param_1 == 0.0) {
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar7 != 0) {
            func_0x000107c5eea0(puVar6);
            func_0x000107c5ee8c();
            (**(code **)(lVar9 + 8))(puVar6,lVar2);
            func_0x000107c57eb4(dVar11 * 1000.0,lVar7);
            func_0x000107c61170(lVar7);
          }
        }
      }
      goto LAB_1011fe814;
    }
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_112d67a78);
  lVar3 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  dVar11 = param_1;
  if (lVar3 != 0) {
    func_0x000107c50754();
    dVar11 = param_1;
    func_0x000107c61170(lVar3);
    if (param_1 == 0.0) {
      puVar4 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c451b0(puVar4);
      goto LAB_1011fe890;
    }
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    func_0x000107c50754();
    dVar10 = dVar11;
    func_0x000107c61170(lVar8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 != 0) {
      func_0x000107c5074c();
      func_0x000107c615e8(lVar7);
      if (SUB168(SEXT816(0xe10) * SEXT816(1000),8) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011fe8c8);
        (*pcVar1)();
      }
      dVar10 = dVar10 * 3600000.0;
      dVar11 = dVar11 + dVar10;
      func_0x000107c5eea0(puVar6);
      func_0x000107c5ee8c();
      (**(code **)(lVar9 + 8))(puVar6,lVar2);
      if (dVar10 * 1000.0 < dVar11) {
LAB_1011fe814:
        FUN_1011fe200();
        return;
      }
      puVar4 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c451b0(puVar4);
      goto LAB_1011fe890;
    }
  }
  puVar4 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar4);
LAB_1011fe890:
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1011fe8c8; end: 1011fe8eb;  */

void FUN_1011fe8c8(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (((param_1 & 1) != 0) && (param_2 >> 0x3e != 0)) {
    func_0x000107c60480();
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c3fefc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1011fe8ec; end: 1011fe92b;  */

void FUN_1011fe8ec(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1011fe92c; end: 1011feb0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011fe92c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  ppuVar9 = &puStack_a0;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar2 = param_2;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar3 = param_3;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011feb08);
    (*pcVar1)();
  }
  uVar4 = param_4;
  func_0x000107c4d460();
  func_0x000107c61180();
  lVar5 = 0;
  FUN_1011fe588();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112d67a70) = uVar2;
  *(long *)(lVar6 + _DAT_112d67a78) = lVar3;
  *(undefined8 *)(lVar6 + _DAT_112d67a80) = uVar4;
  plVar7 = &lStack_70;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  uVar2 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(uVar2);
  lVar3 = param_3;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170(plVar7);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    puVar8 = &UNK_110393498;
    func_0x000107c613fc(&UNK_110393498,0x18,7);
    *(long *)(puVar8 + 0x10) = lVar3;
    pcStack_80 = FUN_1011feb7c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1103934b0;
    puStack_78 = puVar8;
    func_0x000107c60bc4();
    puVar10 = (undefined1 *)ppuVar9;
    func_0x000107c60bc4();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61574(puStack_78);
    *(undefined1 **)(unaff_x20 + 0x10) = puVar10;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011feb0c);
  (*pcVar1)();
}



/* Entry: 1011feb0c; end: 1011feb7b;  */

/* WARNING: Possible PIC construction at 0x0001011feb3c: Changing call to branch */

void FUN_1011feb0c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_1 == 0) {
      return;
    }
    func_0x000107c57eb8();
  }
  else {
    func_0x000107c57eb4(0);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011feb7c; end: 1011feb9f;  */

/* WARNING: Possible PIC construction at 0x0001011feb3c: Changing call to branch */

void FUN_1011feb7c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c57eb8();
  }
  else {
    func_0x000107c57eb4(0);
    lVar2 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1011feba0; end: 1011febc3;  */

void FUN_1011feba0(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011febc4; end: 1011febcf;  */

void FUN_1011febc4(void)

{
  return;
}



/* Entry: 1011febd0; end: 1011febef;  */

void FUN_1011febd0(void)

{
  func_0x000107c61168(&PTR_PTR_112d67af0);
  return;
}



/* Entry: 1011febf0; end: 1011febfb; -[SCResurrectedRestoreFHPSignalProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011febf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67b50;
  func_0x000107c61428(param_1 + _DAT_112d67b50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011febfc; end: 1011fec07; -[SCResurrectedRestoreFHPSignalProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011febfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67b50;
  func_0x000107c61428(param_1 + _DAT_112d67b50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fec08; end: 1011fec13; -[SCResurrectedRestoreFHPSignalProviderEntryPoint messagingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fec08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67b58;
  func_0x000107c61428(param_1 + _DAT_112d67b58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fec14; end: 1011fec1f; -[SCResurrectedRestoreFHPSignalProviderEntryPoint setMessagingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fec14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67b58;
  func_0x000107c61428(param_1 + _DAT_112d67b58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fec20; end: 1011fec2b; -[SCResurrectedRestoreFHPSignalProviderEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fec20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67b60;
  func_0x000107c61428(param_1 + _DAT_112d67b60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fec2c; end: 1011fec37; -[SCResurrectedRestoreFHPSignalProviderEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fec2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67b60;
  func_0x000107c61428(param_1 + _DAT_112d67b60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fec38; end: 1011fec43; -[SCResurrectedRestoreFHPSignalProviderEntryPoint nativeMessagingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fec38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67b68;
  func_0x000107c61428(param_1 + _DAT_112d67b68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fec44; end: 1011fec87;  */

void FUN_1011fec44(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fec88; end: 1011fec93; -[SCResurrectedRestoreFHPSignalProviderEntryPoint setNativeMessagingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fec88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67b68;
  func_0x000107c61428(param_1 + _DAT_112d67b68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fec94; end: 1011fece7;  */

void FUN_1011fec94(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fece8; end: 1011fef7b;  */

/* WARNING: Possible PIC construction at 0x0001011fee30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fee50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fee60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fee70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fef44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fef34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011fef48) */
/* WARNING: Removing unreachable block (ram,0x0001011fee74) */
/* WARNING: Removing unreachable block (ram,0x0001011fee64) */
/* WARNING: Removing unreachable block (ram,0x0001011fee54) */
/* WARNING: Removing unreachable block (ram,0x0001011fee34) */
/* WARNING: Removing unreachable block (ram,0x0001011fef78) */
/* WARNING: Removing unreachable block (ram,0x0001011fee48) */
/* WARNING: Removing unreachable block (ram,0x0001011fef38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fece8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c4cdfc();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c42eb0();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c4d478();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar5 = 0;
        FUN_1011febd0();
        func_0x000107c613fc();
        *(undefined8 *)(lVar5 + 0x10) = 0;
        func_0x000107c4cdb8();
        func_0x000107c61180();
        func_0x000107c42eac();
        func_0x000107c61180();
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011fef78);
          (*pcVar1)();
        }
        func_0x000107c4d460();
        func_0x000107c61180();
        lVar6 = 0;
        FUN_1011fe588();
        lVar5 = lVar6;
        func_0x000107c610f8();
        *(long *)(lVar5 + _DAT_112d67a70) = lVar3;
        *(long *)(lVar5 + _DAT_112d67a78) = lVar4;
        *(long *)(lVar5 + _DAT_112d67a80) = unaff_x20;
        lStack_70 = lVar5;
        lStack_68 = lVar6;
        func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
        func_0x000107c4e9e4(lVar2);
        func_0x000107c61180();
        func_0x000107c4fba8();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1011fef7c; end: 1011fef9f;  */

/* WARNING: Possible PIC construction at 0x0001011feb3c: Changing call to branch */

void FUN_1011fef7c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c57eb8();
  }
  else {
    func_0x000107c57eb4(0);
    lVar2 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1011fefa0; end: 1011fefc7; -[SCResurrectedRestoreFHPSignalProviderEntryPoint begin] */

void FUN_1011fefa0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011fece8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011fefc8; end: 1011ff00b; -[SCResurrectedRestoreFHPSignalProviderEntryPoint end] */

void FUN_1011fefc8(undefined8 param_1)

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



/* Entry: 1011ff00c; end: 1011ff27b;  */

void FUN_1011ff00c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0xd00000000000001b;
    if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10d6a90)) ||
       (func_0x000107c605b8(0xd00000000000001b,0x800000010ef29570,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5666c();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ef230)) {
        uVar2 = 0xd000000000000017;
        func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ecb20)) {
            uVar2 = 0xd000000000000017;
            func_0x000107c605b8(0xd000000000000017,0x800000010ef134e0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "ResurrectedRestoreFHPSignalProvider/SCResurrectedRestoreFHPSignalProviderEntryPoint.swift"
                                  ,0x59,2,0x32,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ff27c);
              (*pcVar1)();
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5698c();
          goto LAB_1011ff098;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5491c();
    }
  }
LAB_1011ff098:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011ff27c; end: 1011ff327; -[SCResurrectedRestoreFHPSignalProviderEntryPoint setValue:forIvarName:] */

void FUN_1011ff27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011ff00c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011ff328; end: 1011ff3c3; -[SCResurrectedRestoreFHPSignalProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ff328(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d67b50,0);
  func_0x000107c61614(param_1 + _DAT_112d67b58,0);
  func_0x000107c61614(param_1 + _DAT_112d67b60,0);
  func_0x000107c61614(param_1 + _DAT_112d67b68,0);
  *(undefined8 *)(param_1 + _DAT_112d67b70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011ff3c4; end: 1011ff3f7;  */

void FUN_1011ff3c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011ff3f8; end: 1011ff45f; -[SCResurrectedRestoreFHPSignalProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ff3f8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d67b50);
  func_0x000107c61610(param_1 + _DAT_112d67b58);
  func_0x000107c61610(param_1 + _DAT_112d67b60);
  func_0x000107c61610(param_1 + _DAT_112d67b68);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d67b70));
  return;
}



/* Entry: 1011ff460; end: 1011ff47f;  */

void FUN_1011ff460(void)

{
  func_0x000107c61168(&PTR_PTR_1127bab30);
  return;
}



/* Entry: 1011ff480; end: 1011fff63;  */

void FUN_1011ff480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_19;
  return;
}



/* Entry: 1011fff64; end: 10120002f;  */

void FUN_1011fff64(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 101200030; end: 10120004f;  */

void FUN_101200030(void)

{
  func_0x0001011ff548();
  return;
}



/* Entry: 101200050; end: 101200057;  */

undefined8 FUN_101200050(void)

{
  return 0;
}



/* Entry: 101200058; end: 1012000c7;  */

void FUN_101200058(void)

{
  func_0x000107c61168(&PTR_PTR_112d67be0);
  return;
}



/* Entry: 1012000c8; end: 10120022f;  */

int FUN_1012000c8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xb) {
      iVar2 = 4;
    }
    if (param_2 + 0xb >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101200144;
        goto LAB_101200128;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101200128:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_101200144:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101200230; end: 10120026f;  */

void FUN_101200230(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d67cd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d92bdd8;
  func_0x000107c61520(&UNK_10d92bdd8,&UNK_1103936b0);
  puRam0000000112d67cd8 = puVar1;
  return;
}



/* Entry: 101200270; end: 101200283;  */

bool FUN_101200270(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101200284; end: 10120032f;  */

void FUN_101200284(void)

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



/* Entry: 101200330; end: 10120033f;  */

void FUN_101200330(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101200340; end: 10120039f; -[_TtC28StreakRestorePromoEntryPoint39StreakRestorePromoServiceImplementation init] */

void FUN_101200340(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StreakRestorePromoEntryPoint.StreakRestorePromoServiceImplementation",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10120036c);
  (*pcVar1)();
}



/* Entry: 1012003a0; end: 10120043f; -[_TtC28StreakRestorePromoEntryPoint39StreakRestorePromoServiceImplementation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012003e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101200414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012003e8) */
/* WARNING: Removing unreachable block (ram,0x000101200418) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012003a0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d67ce0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d67ce8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d67cf0));
  return;
}



/* Entry: 101200440; end: 10120045f;  */

void FUN_101200440(void)

{
  func_0x000107c61168(&PTR_PTR_1127bac08);
  return;
}



/* Entry: 101200460; end: 1012005af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101200460(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = *(long *)(unaff_x20 + _DAT_112d67cf8);
  func_0x000107c4d460();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    puVar4 = &UNK_1103937f8;
    func_0x000107c613fc(&UNK_1103937f8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_110393820;
    func_0x000107c613fc(&UNK_110393820,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar1;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    uStack_60 = 0x101202704;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1011fc9bc;
    puStack_68 = &UNK_110393838;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    puVar4 = puStack_58;
    func_0x000107c61174(puVar1);
    func_0x000107c61574(puVar4);
    func_0x000107c4309c(lVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar3);
  }
  return puVar1;
}



/* Entry: 1012005b0; end: 101200ce3;  */

/* WARNING: Possible PIC construction at 0x0001012006e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012007d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101200878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012009b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101200abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101200adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010120063c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101200650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101200ae0) */
/* WARNING: Removing unreachable block (ram,0x000101200af8) */
/* WARNING: Removing unreachable block (ram,0x000101200afc) */
/* WARNING: Removing unreachable block (ram,0x000101200b0c) */
/* WARNING: Removing unreachable block (ram,0x000101200b90) */
/* WARNING: Removing unreachable block (ram,0x000101200b98) */
/* WARNING: Removing unreachable block (ram,0x000101200b1c) */
/* WARNING: Removing unreachable block (ram,0x000101200b24) */
/* WARNING: Removing unreachable block (ram,0x000101200b00) */
/* WARNING: Removing unreachable block (ram,0x000101200b3c) */
/* WARNING: Removing unreachable block (ram,0x000101200b6c) */
/* WARNING: Removing unreachable block (ram,0x000101200b54) */
/* WARNING: Removing unreachable block (ram,0x000101200b68) */
/* WARNING: Removing unreachable block (ram,0x000101200ac0) */
/* WARNING: Removing unreachable block (ram,0x0001012009b8) */
/* WARNING: Removing unreachable block (ram,0x00010120087c) */
/* WARNING: Removing unreachable block (ram,0x0001012009c0) */
/* WARNING: Removing unreachable block (ram,0x0001012008c8) */
/* WARNING: Removing unreachable block (ram,0x0001012007dc) */
/* WARNING: Removing unreachable block (ram,0x0001012007ec) */
/* WARNING: Removing unreachable block (ram,0x000101200864) */
/* WARNING: Removing unreachable block (ram,0x0001012006e8) */
/* WARNING: Removing unreachable block (ram,0x0001012006ec) */
/* WARNING: Removing unreachable block (ram,0x000101200630) */
/* WARNING: Removing unreachable block (ram,0x000101200800) */
/* WARNING: Removing unreachable block (ram,0x000101200aa4) */
/* WARNING: Removing unreachable block (ram,0x000101200638) */
/* WARNING: Removing unreachable block (ram,0x00010120073c) */
/* WARNING: Removing unreachable block (ram,0x000101200764) */
/* WARNING: Removing unreachable block (ram,0x0001012007a0) */
/* WARNING: Removing unreachable block (ram,0x000101200640) */

void FUN_1012005b0(undefined1 *param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_a0 [32];
  
  if (((ulong)param_1 & 1) == 0) {
    FUN_101202028();
    puVar8 = &UNK_1103936b0;
    func_0x000107c613f8(&UNK_1103936b0,param_1,0,0);
    *param_1 = 1;
    puVar5 = puVar8;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar8);
    func_0x000107c43b70(param_3);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  puVar8 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar7 = *(undefined **)(puVar8 + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar7 = puVar8;
    if ((undefined *)0x7fffffffffffffff < param_2) {
      puVar7 = param_2;
    }
    func_0x000107c60480();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar2;
  if (puVar7 != (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    do {
      if (((ulong)param_2 & 0xc000000000000001) == 0) {
        if (*(undefined **)(puVar8 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101200c1c);
          (*pcVar3)();
        }
        puVar4 = *(undefined **)(param_2 + (long)puVar6 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar4 = puVar6;
        func_0x000100bc22ec(puVar6,param_2);
      }
      puVar1 = puVar6 + 1;
      if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101200c18);
        (*pcVar3)();
      }
      func_0x000107c61428(param_4 + 0x10,auStack_a0,0,0);
      puVar5 = (undefined *)(param_4 + 0x10);
      func_0x000107c61618();
      if (puVar5 != (undefined *)0x0) {
        func_0x000107c5c0d8();
        func_0x000107c61180();
        if (puVar4 != (undefined *)0x0) {
          func_0x000107c42be8();
          func_0x000107c61180();
          puVar5 = puVar4;
        }
        goto code_r0x000107c61170;
      }
      func_0x000107c61170(puVar4);
      puVar6 = puVar6 + 1;
    } while (puVar1 != puVar7);
  }
  func_0x0001000285a8(0x112d67d88,&UNK_10d92be98);
  puVar8 = puVar2;
  func_0x00010488813c(puVar2);
  func_0x000107c6142c(puVar2);
  puVar5 = &UNK_110393938;
  func_0x000107c613fc(&UNK_110393938,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_3;
  func_0x000107c61174();
  func_0x00010075a04c(0,1,0x101202794,puVar5);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 101200ce4; end: 101200d93;  */

/* WARNING: Possible PIC construction at 0x000101200d70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101200d74) */

void FUN_101200ce4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x000107c5ed2c(uVar3);
    func_0x000107c43b70(param_2);
  }
  else {
    puVar1 = PTR_PTR_1126a6658;
    func_0x000107c610f8(PTR_PTR_1126a6658);
    uVar2 = 0;
    FUN_10120279c(0,0x112d67d70,&PTR_PTR_1126a6650);
    func_0x000107c5fc48(uVar3,uVar2);
    func_0x000107c48ae4(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101200d94; end: 101200e3f; -[_TtC28StreakRestorePromoEntryPoint39StreakRestorePromoServiceImplementation fetchRestorableStreaksWithLimit:minStreakCount:minExpirationTimeMs:] */

void FUN_101200d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  uVar3 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_101200460(param_3,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101200e40; end: 1012011cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101200e40(undefined8 param_1,int param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112d67cf8);
  puVar3 = PTR_PTR_1126d1e10;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (param_2 - 1U < 2) {
    func_0x000107c5a0f8();
    uVar4 = param_1;
    FUN_10102c3b8(param_1);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar6 = uVar4;
    func_0x000107c5fc48(uVar4,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(uVar4);
    func_0x000107c45788(puVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c5396c(puVar3);
    func_0x000107c61170(puVar5);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d67ce8);
    func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_112d67ce8))[1]);
    func_0x000107c59fbc(puVar3);
    func_0x000107c61170(uVar4);
    puVar5 = &UNK_110393730;
    func_0x000107c613fc(&UNK_110393730,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar2;
    *(undefined8 *)(puVar5 + 0x18) = param_1;
    *(undefined8 *)(puVar5 + 0x20) = uVar14;
    uVar4 = 0x112d67d48;
    uVar6 = 0;
    FUN_10120279c(0,0x112d67d48,&PTR_PTR_1126d1e18);
    puVar7 = PTR_PTR_1126ae988;
    func_0x000107c610f8(PTR_PTR_1126ae988);
    pcStack_70 = FUN_1012017cc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_101201f78;
    puStack_78 = &UNK_110393748;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c614e8(uVar6);
    func_0x000107c61174(puVar2);
    func_0x000107c61434(param_1);
    func_0x000107c61174(uVar14);
    func_0x000107c46c68(puVar7);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(puStack_68);
    puVar9 = puVar3;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar9 == (undefined1 *)0x0) {
      FUN_101202028();
      puVar5 = &UNK_1103936b0;
      func_0x000107c613f8(&UNK_1103936b0,puVar9,0,0);
      *puVar9 = 10;
      puVar13 = puVar5;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar5);
      func_0x000107c43b70(puVar2);
      func_0x000107c61170(puVar13);
    }
    else {
      puVar10 = puVar9;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar9);
      lVar11 = *(long *)(unaff_x20 + _DAT_112d67d08);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar11 == 0) {
        func_0x00010006c090(puVar10,uVar4);
      }
      else {
        uVar14 = 0xd00000000000001e;
        func_0x000107c5fadc(0xd00000000000001e,0x800000010ef2e140);
        puVar9 = puVar10;
        func_0x000107c5ee20(puVar10,uVar4);
        puVar5 = PTR_PTR_1126ae748;
        func_0x000107c61168(PTR_PTR_1126ae748);
        func_0x000107c3edf4();
        func_0x000107c61180();
        puVar12 = puVar7;
        func_0x000107c61174(puVar7);
        func_0x000107c5d1d4(lVar11);
        func_0x00010006c090(puVar10,uVar4);
        func_0x000107c615e8(lVar11);
        func_0x000107c61170(uVar14);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar3);
        puVar3 = puVar12;
      }
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar7);
    return puVar2;
  }
  func_0x000101200078(0);
  puStack_90 = (undefined *)CONCAT44(puStack_90._4_4_,param_2);
  func_0x000107c60614();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012011cc);
  (*pcVar1)();
}



/* Entry: 1012011cc; end: 10120168f;  */

void FUN_1012011cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  func_0x000100672b50(param_1,&puStack_a8);
  if (puStack_90 == (undefined *)0x0) {
    ppuVar7 = &puStack_a8;
    func_0x00010006e7f4();
  }
  else {
    uVar4 = 0;
    FUN_10120279c(0,0x112d67d48,&PTR_PTR_1126d1e18);
    ppuVar7 = &puStack_78;
    func_0x000107c6147c(ppuVar7,&puStack_a8,PTR___sypN_11034f1a8 + 8,uVar4,6);
    puVar8 = puStack_78;
    if (((ulong)ppuVar7 & 1) != 0) {
      puVar9 = puStack_78;
      func_0x000107c42a28();
      iVar3 = (int)puVar9;
      if (iVar3 == 3) {
        FUN_101202028();
        puVar10 = &UNK_1103936b0;
        func_0x000107c613f8(&UNK_1103936b0,puVar9,0,0);
        uVar12 = 7;
      }
      else if (iVar3 == 2) {
        FUN_101202028();
        puVar10 = &UNK_1103936b0;
        func_0x000107c613f8(&UNK_1103936b0,puVar9,0,0);
        uVar12 = 6;
      }
      else if (iVar3 == 0) {
        puVar9 = puVar8;
        func_0x000107c40694();
        func_0x000107c61180();
        if (puVar9 != (undefined *)0x0) {
          puStack_a8 = (undefined *)0x0;
          func_0x000107c5fc50();
          func_0x000107c61170();
          puVar11 = puStack_a8;
          if (puStack_a8 != (undefined *)0x0) {
            puVar9 = puStack_a8;
            func_0x000107c61434();
            func_0x000100403a6c();
            func_0x000107c6142c(puVar11);
            uVar4 = param_4;
            func_0x000107c61434(param_4);
            func_0x000100403a6c();
            func_0x000107c6142c(param_4);
            puVar10 = puVar9;
            FUN_100c3fb0c(puVar9,uVar4);
            func_0x000107c6142c(puVar9);
            func_0x000107c6142c(uVar4);
            if (((ulong)puVar10 & 1) != 0) {
              lVar13 = *(long *)(puVar11 + 0x10);
              if (lVar13 == 0) {
                func_0x000107c6142c(puVar11);
                puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
              }
              else {
                puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
                func_0x000101202434(0,lVar13,0);
                func_0x0001000285a8(0x112d67d58,&UNK_10d92be70);
                puVar14 = (undefined8 *)(puVar11 + 0x28);
                do {
                  puVar10 = puStack_78;
                  uVar4 = puVar14[-1];
                  uVar2 = *puVar14;
                  func_0x000107c61434(uVar2);
                  pcVar5 = "restoreConversationsWithPromo(withConversationIds:promoType:)";
                  func_0x0001000c10c0();
                  func_0x000107c61180();
                  puVar9 = &UNK_110393780;
                  func_0x000107c613fc(&UNK_110393780,0x28,7);
                  *(undefined8 *)(puVar9 + 0x10) = uVar4;
                  *(undefined8 *)(puVar9 + 0x18) = uVar2;
                  *(undefined8 *)(puVar9 + 0x20) = param_5;
                  pcStack_88 = FUN_1012026f0;
                  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_a0 = 0x42000000;
                  uStack_98 = 0x1012016d8;
                  puStack_90 = &UNK_110393798;
                  ppuVar7 = &puStack_a8;
                  puStack_80 = puVar9;
                  func_0x000107c60bc4(ppuVar7);
                  puVar9 = puStack_80;
                  func_0x000107c61434(uVar2);
                  func_0x000107c61174(param_5);
                  func_0x000107c61574(puVar9);
                  pcVar6 = pcVar5;
                  func_0x000106c778cc(pcVar5,ppuVar7);
                  func_0x000107c61180();
                  func_0x000107c60bd0(ppuVar7);
                  func_0x000107c615e8(pcVar5);
                  pcVar5 = pcVar6;
                  func_0x000100759c94(pcVar6,0);
                  func_0x000107c6142c(uVar2);
                  func_0x000107c61170(pcVar6);
                  uVar1 = *(ulong *)(puVar10 + 0x10);
                  puStack_78 = puVar10;
                  if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
                    func_0x000101202434(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
                  }
                  puVar9 = puStack_78;
                  puVar14 = puVar14 + 2;
                  *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
                  *(char **)(puStack_78 + uVar1 * 8 + 0x20) = pcVar5;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
                func_0x000107c6142c(puVar11);
              }
              func_0x0001000285a8(0x112d67d60,&UNK_10d92be78);
              puVar10 = puVar9;
              func_0x00010488813c(puVar9);
              func_0x000107c6142c(puVar9);
              puVar9 = &UNK_1103937d0;
              func_0x000107c613fc(&UNK_1103937d0,0x18,7);
              *(undefined8 *)(puVar9 + 0x10) = param_3;
              func_0x000107c61174(param_3);
              func_0x00010075a04c(0,1,0x1012026fc,puVar9);
              func_0x000107c61170(puVar8);
              func_0x000107c61574(puVar10);
              func_0x000107c61574(puVar9);
              return;
            }
            func_0x000107c6142c();
            FUN_101202028();
            puVar10 = &UNK_1103936b0;
            func_0x000107c613f8(&UNK_1103936b0,puVar11,0,0);
            uVar12 = 9;
            puVar9 = puVar11;
            goto LAB_10120159c;
          }
        }
        FUN_101202028();
        puVar10 = &UNK_1103936b0;
        func_0x000107c613f8(&UNK_1103936b0,puVar9,0,0);
        uVar12 = 8;
      }
      else {
        FUN_101202028();
        puVar10 = &UNK_1103936b0;
        func_0x000107c613f8(&UNK_1103936b0,puVar9,0,0);
        uVar12 = 0xb;
      }
LAB_10120159c:
      *puVar9 = uVar12;
      puVar9 = puVar10;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar10);
      func_0x000107c43b70(param_3);
      func_0x000107c61170(puVar8);
      goto LAB_1012015c8;
    }
  }
  FUN_101202028();
  puVar8 = &UNK_1103936b0;
  func_0x000107c613f8(&UNK_1103936b0,ppuVar7,0,0);
  *(undefined1 *)ppuVar7 = 5;
  puVar9 = puVar8;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar8);
  func_0x000107c43b70(param_3);
LAB_1012015c8:
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 101201690; end: 10120175f;  */

undefined8 FUN_101201690(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c5fadc();
  uVar1 = param_1;
  func_0x000106c74fa8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101201760; end: 1012017cb; -[_TtC28StreakRestorePromoEntryPoint39StreakRestorePromoServiceImplementation restoreConversationsWithPromoWithConversationIds:promoType:] */

void FUN_101201760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101200e40(param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1012017cc; end: 1012017d7;  */

void FUN_1012017cc(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  long unaff_x20;
  long lVar15;
  undefined8 *puVar16;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100672b50(param_1,&puStack_a8);
  if (puStack_90 == (undefined *)0x0) {
    ppuVar8 = &puStack_a8;
    func_0x00010006e7f4();
  }
  else {
    uVar5 = 0;
    FUN_10120279c(0,0x112d67d48,&PTR_PTR_1126d1e18);
    ppuVar8 = &puStack_78;
    func_0x000107c6147c(ppuVar8,&puStack_a8,PTR___sypN_11034f1a8 + 8,uVar5,6);
    puVar9 = puStack_78;
    if (((ulong)ppuVar8 & 1) != 0) {
      puVar10 = puStack_78;
      func_0x000107c42a28();
      iVar4 = (int)puVar10;
      if (iVar4 == 3) {
        FUN_101202028();
        puVar11 = &UNK_1103936b0;
        func_0x000107c613f8(&UNK_1103936b0,puVar10,0,0);
        uVar14 = 7;
      }
      else if (iVar4 == 2) {
        FUN_101202028();
        puVar11 = &UNK_1103936b0;
        func_0x000107c613f8(&UNK_1103936b0,puVar10,0,0);
        uVar14 = 6;
      }
      else if (iVar4 == 0) {
        puVar10 = puVar9;
        func_0x000107c40694();
        func_0x000107c61180();
        if (puVar10 != (undefined *)0x0) {
          puStack_a8 = (undefined *)0x0;
          func_0x000107c5fc50();
          func_0x000107c61170();
          puVar12 = puStack_a8;
          if (puStack_a8 != (undefined *)0x0) {
            puVar10 = puStack_a8;
            func_0x000107c61434();
            func_0x000100403a6c();
            func_0x000107c6142c(puVar12);
            uVar5 = uVar3;
            func_0x000107c61434(uVar3);
            func_0x000100403a6c();
            func_0x000107c6142c(uVar3);
            puVar11 = puVar10;
            FUN_100c3fb0c(puVar10,uVar5);
            func_0x000107c6142c(puVar10);
            func_0x000107c6142c(uVar5);
            if (((ulong)puVar11 & 1) != 0) {
              lVar15 = *(long *)(puVar12 + 0x10);
              if (lVar15 == 0) {
                func_0x000107c6142c(puVar12);
                puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
              }
              else {
                puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
                func_0x000101202434(0,lVar15,0);
                func_0x0001000285a8(0x112d67d58,&UNK_10d92be70);
                puVar16 = (undefined8 *)(puVar12 + 0x28);
                do {
                  puVar11 = puStack_78;
                  uVar3 = puVar16[-1];
                  uVar5 = *puVar16;
                  func_0x000107c61434(uVar5);
                  pcVar6 = "restoreConversationsWithPromo(withConversationIds:promoType:)";
                  func_0x0001000c10c0();
                  func_0x000107c61180();
                  puVar10 = &UNK_110393780;
                  func_0x000107c613fc(&UNK_110393780,0x28,7);
                  *(undefined8 *)(puVar10 + 0x10) = uVar3;
                  *(undefined8 *)(puVar10 + 0x18) = uVar5;
                  *(undefined8 *)(puVar10 + 0x20) = uVar13;
                  pcStack_88 = FUN_1012026f0;
                  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_a0 = 0x42000000;
                  uStack_98 = 0x1012016d8;
                  puStack_90 = &UNK_110393798;
                  ppuVar8 = &puStack_a8;
                  puStack_80 = puVar10;
                  func_0x000107c60bc4(ppuVar8);
                  puVar10 = puStack_80;
                  func_0x000107c61434(uVar5);
                  func_0x000107c61174(uVar13);
                  func_0x000107c61574(puVar10);
                  pcVar7 = pcVar6;
                  func_0x000106c778cc(pcVar6,ppuVar8);
                  func_0x000107c61180();
                  func_0x000107c60bd0(ppuVar8);
                  func_0x000107c615e8(pcVar6);
                  pcVar6 = pcVar7;
                  func_0x000100759c94(pcVar7,0);
                  func_0x000107c6142c(uVar5);
                  func_0x000107c61170(pcVar7);
                  uVar1 = *(ulong *)(puVar11 + 0x10);
                  puStack_78 = puVar11;
                  if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
                    func_0x000101202434(1 < *(ulong *)(puVar11 + 0x18),uVar1 + 1,1);
                  }
                  puVar10 = puStack_78;
                  puVar16 = puVar16 + 2;
                  *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
                  *(char **)(puStack_78 + uVar1 * 8 + 0x20) = pcVar6;
                  lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
                func_0x000107c6142c(puVar12);
              }
              func_0x0001000285a8(0x112d67d60,&UNK_10d92be78);
              puVar11 = puVar10;
              func_0x00010488813c(puVar10);
              func_0x000107c6142c(puVar10);
              puVar10 = &UNK_1103937d0;
              func_0x000107c613fc(&UNK_1103937d0,0x18,7);
              *(undefined8 *)(puVar10 + 0x10) = uVar2;
              func_0x000107c61174(uVar2);
              func_0x00010075a04c(0,1,0x1012026fc,puVar10);
              func_0x000107c61170(puVar9);
              func_0x000107c61574(puVar11);
              func_0x000107c61574(puVar10);
              return;
            }
            func_0x000107c6142c();
            FUN_101202028();
            puVar11 = &UNK_1103936b0;
            func_0x000107c613f8(&UNK_1103936b0,puVar12,0,0);
            uVar14 = 9;
            puVar10 = puVar12;
            goto LAB_10120159c;
          }
        }
        FUN_101202028();
        puVar11 = &UNK_1103936b0;
        func_0x000107c613f8(&UNK_1103936b0,puVar10,0,0);
        uVar14 = 8;
      }
      else {
        FUN_101202028();
        puVar11 = &UNK_1103936b0;
        func_0x000107c613f8(&UNK_1103936b0,puVar10,0,0);
        uVar14 = 0xb;
      }
LAB_10120159c:
      *puVar10 = uVar14;
      puVar10 = puVar11;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar11);
      func_0x000107c43b70(uVar2);
      func_0x000107c61170(puVar9);
      goto LAB_1012015c8;
    }
  }
  FUN_101202028();
  puVar9 = &UNK_1103936b0;
  func_0x000107c613f8(&UNK_1103936b0,ppuVar8,0,0);
  *(undefined1 *)ppuVar8 = 5;
  puVar10 = puVar9;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar9);
  func_0x000107c43b70(uVar2);
LAB_1012015c8:
  func_0x000107c61170(puVar10);
  return;
}



/* Entry: 1012017d8; end: 101201a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012017d8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d67cf0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d67d18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d67ce0);
      uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d67ce0))[1];
      func_0x0001000285a8(0x112d67db0,&UNK_10d92beb8);
      func_0x000107c61434(uVar1);
      uVar5 = param_1;
      func_0x000107c40674(param_1);
      func_0x000107c61180();
      uVar4 = uVar5;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      uVar5 = 0;
      FUN_10120279c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      lVar6 = lVar2;
      func_0x000107c43114(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      lVar7 = lVar6;
      func_0x000100759c94(lVar6,0);
      func_0x000107c61170(lVar6);
      puVar11 = &UNK_110393960;
      func_0x000107c613fc(&UNK_110393960,0x30,7);
      *(long *)(puVar11 + 0x10) = lVar3;
      *(undefined8 *)(puVar11 + 0x18) = uVar8;
      *(undefined8 *)(puVar11 + 0x20) = uVar1;
      *(undefined8 *)(puVar11 + 0x28) = param_1;
      uVar8 = 0;
      FUN_10120279c(0,0x112d67d80,&PTR_PTR_1126c7148);
      func_0x000107c61174(lVar3);
      func_0x000107c61174(param_1);
      puVar9 = (undefined *)0x0;
      func_0x000100775264(0,1,FUN_1012027dc,puVar11,uVar8);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61574(lVar7);
      func_0x000107c61574(puVar11);
      return puVar9;
    }
    func_0x000107c615e8(lVar2);
  }
  puVar10 = (undefined1 *)0x112d67da8;
  func_0x0001000285a8(0x112d67da8,&UNK_10d92beb0);
  FUN_101202028();
  puVar11 = &UNK_1103936b0;
  func_0x000107c613f8(&UNK_1103936b0,puVar10,0,0);
  *puVar10 = 0;
  puVar9 = puVar11;
  func_0x00010488904c();
  func_0x000107c614ac(puVar11);
  return puVar9;
}



/* Entry: 101201a0c; end: 101201bb7;  */

void FUN_101201a0c(undefined8 *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b1440;
    lVar3 = param_3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c48444();
    lVar2 = lVar6;
    func_0x00010901d7c4();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar3);
    }
    func_0x000107c40674();
    func_0x000107c61180();
    lVar3 = param_3;
    func_0x000107c5cb4c();
    func_0x000107c61180();
    func_0x000107c61170();
    FUN_1012023c8();
    func_0x000107c613fc();
    *(undefined8 *)(param_3 + 0x18) = 3;
    *(undefined8 *)(param_3 + 0x10) = 1;
    *(undefined **)(param_3 + 0x20) = puVar1;
    puVar7 = PTR_PTR_1126c7148;
    func_0x000107c610f8();
    uVar4 = 0;
    FUN_10120279c(0,0x112d67d90,&PTR_PTR_1126b1440);
    func_0x000107c61174(puVar1);
    lVar5 = param_3;
    func_0x000107c5fc48(param_3,uVar4);
    func_0x000107c61574(param_3);
    func_0x000107c46164();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar5);
  }
  *param_1 = puVar7;
  return;
}



/* Entry: 101201bb8; end: 101201c0f;  */

void FUN_101201bb8(long param_1,long param_2)

{
  long lStack_28;
  
  if ((param_2 == 0) && (param_1 != 0)) {
    lStack_28 = param_1;
    func_0x000107c61174();
    func_0x000100b60084(&lStack_28);
    func_0x000107c61170(param_1);
  }
  else {
    lStack_28 = 0;
    func_0x000100b60084(&lStack_28);
  }
  return;
}



/* Entry: 101201c10; end: 101201f77;  */

void FUN_101201c10(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_78;
  
  puVar10 = (undefined *)*param_2;
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  func_0x000107c4ca98(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c41050(param_3);
  func_0x000107c61180();
  uVar5 = param_4;
  func_0x000107c5fadc(param_4,param_5);
  puVar6 = puVar10;
  puStack_78 = puVar4;
  func_0x000108ef2dc8(0x3fe999999999999a,puVar10,puVar4,param_3,uVar5);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar5);
  if (puVar6 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    puStack_78 = (undefined *)0xe000000000000000;
  }
  else {
    puVar11 = puVar6;
    func_0x000107c5faec();
    func_0x000107c61170(puVar6);
  }
  func_0x000107c5fadc(param_4,param_5);
  func_0x000108ef2144(puVar10,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar10 != (undefined *)0x0) {
    uVar5 = 0x112d64d20;
    func_0x0001000285a8(0x112d64d20,&UNK_10d92bec0);
    puVar6 = puVar10;
    func_0x000107c5fc54(puVar10,uVar5);
    func_0x000107c61170(puVar10);
  }
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar10 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar10 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar10 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar10 == (undefined *)0x0) {
    func_0x000107c6142c(puVar6);
  }
  else {
    func_0x000101202450(0,(ulong)puVar10 & ((long)puVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101201f78);
      (*pcVar3)();
    }
    puVar9 = (undefined *)0x0;
    do {
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        puVar12 = *(undefined **)(puVar6 + (long)puVar9 * 8 + 0x20);
        func_0x000107c615f0(puVar12);
      }
      else {
        puVar12 = puVar9;
        func_0x0001011be488(puVar9,puVar6);
      }
      puVar7 = PTR_PTR_1126b1440;
      func_0x000107c610f8();
      func_0x000107c47db0();
      func_0x000107c615e8(puVar12);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        func_0x000101202450(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      puVar9 = puVar9 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar2 + uVar1 * 8 + 0x20) = puVar7;
    } while (puVar10 != puVar9);
    func_0x000107c6142c(puVar6);
  }
  func_0x000107c40674(param_6);
  func_0x000107c61180();
  uVar5 = param_6;
  func_0x000107c5cb4c();
  func_0x000107c61180();
  func_0x000107c61170(param_6);
  puVar6 = PTR_PTR_1126c7148;
  func_0x000107c610f8();
  func_0x000107c5fadc(puVar11,puStack_78);
  func_0x000107c6142c(puStack_78);
  uVar8 = 0;
  FUN_10120279c(0,0x112d67d90,&PTR_PTR_1126b1440);
  puVar10 = puVar2;
  func_0x000107c5fc48(puVar2,uVar8);
  func_0x000107c6142c(puVar2);
  func_0x000107c46164();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar10);
  *param_1 = puVar6;
  return;
}



/* Entry: 101201f78; end: 10120200b;  */

void FUN_101201f78(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long alStack_50 [4];
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    lVar3 = 0;
    alStack_50[1] = 0;
    alStack_50[2] = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c614f0();
  }
  alStack_50[0] = param_2;
  alStack_50[3] = lVar3;
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  uVar4 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(alStack_50,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar4);
  func_0x00010006e7f4(alStack_50);
  return;
}



/* Entry: 10120200c; end: 101202027;  */

void FUN_10120200c(long param_1,long param_2)

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



/* Entry: 101202028; end: 101202067;  */

void FUN_101202028(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d67d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d92be00;
  func_0x000107c61520(&UNK_10d92be00,&UNK_1103936b0);
  puRam0000000112d67d50 = puVar1;
  return;
}



/* Entry: 101202068; end: 10120218f;  */

ulong FUN_101202068(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101202190);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101202190(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10120218c);
      (*pcVar1)();
    }
    FUN_101202230(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101202190; end: 10120222f;  */

undefined * FUN_101202190(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d67d88;
    FUN_101202354(0x112d67d88,&UNK_10d92be98,0x112d67da0,&UNK_10d92bea8);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101202230; end: 101202353;  */

long FUN_101202230(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101202350);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101202354);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d67d88;
        func_0x0001000285a8(0x112d67d88,&UNK_10d92be98);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d67d88;
      func_0x0001000285a8(0x112d67d88,&UNK_10d92be98);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10120234c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101202354; end: 1012023c7;  */

/* WARNING: Possible PIC construction at 0x000101202394: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101202398) */
/* WARNING: Removing unreachable block (ram,0x00010120239c) */

void FUN_101202354(ulong *param_1,long *param_2,ulong *param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = param_3;
  plVar5 = param_4;
  if (iVar2 != 0) {
    unaff_x30 = 0x101202398;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = param_1;
    plVar5 = param_2;
    unaff_x19 = param_4;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    uVar4 = (long)plVar5 + (long)(int)*plVar5;
    func_0x000107c61518(uVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = uVar4;
  }
  return;
}



/* Entry: 1012023c8; end: 10120246b;  */

void FUN_1012023c8(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_10120279c(0,0x112d67d90,&PTR_PTR_1126b1440);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d67d98;
  plVar5 = (long *)&UNK_10d92bea0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10120246c; end: 1012026ef;  */

undefined * FUN_10120246c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012025bc);
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
    puVar3 = (undefined *)0x112d67d60;
    FUN_101202354(0x112d67d60,&UNK_10d92be78,0x112d67d68,&UNK_10d92be80);
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
    uVar5 = 0x112d67d60;
    func_0x0001000285a8(0x112d67d60,&UNK_10d92be78);
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



/* Entry: 1012026f0; end: 10120270b;  */

undefined8 FUN_1012026f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uVar1;
  func_0x000106c74fa8();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10120270c; end: 101202737;  */

void FUN_10120270c(void)

{
  FUN_101202738();
  return;
}



/* Entry: 101202738; end: 101202787;  */

void FUN_101202738(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a6650;
  func_0x000107c610f8();
  func_0x000107c461b8();
  *param_1 = puVar1;
  return;
}



/* Entry: 101202788; end: 10120279b;  */

void FUN_101202788(long param_1,long param_2)

{
  long unaff_x20;
  long lStack_28;
  
  if ((param_2 == 0) && (param_1 != 0)) {
    lStack_28 = param_1;
    func_0x000107c61174();
    func_0x000100b60084(&lStack_28);
    func_0x000107c61170(param_1);
  }
  else {
    lStack_28 = 0;
    func_0x000100b60084(&lStack_28,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                        *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  }
  return;
}



/* Entry: 10120279c; end: 1012027db;  */

void FUN_10120279c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1012027dc; end: 1012027f7;  */

void FUN_1012027dc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101201c10(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1012027f8; end: 10120280f;  */

void FUN_1012027f8(long param_1,long param_2)

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



/* Entry: 101202810; end: 101202823;  */

void FUN_101202810(void)

{
  FUN_10120270c();
  return;
}



/* Entry: 101202824; end: 1012028b3; -[_TtC28StreakRestorePromoEntryPoint32StreakRestorePromoViewController didDismiss] */

/* WARNING: Possible PIC construction at 0x000101202884: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101202888) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101202824(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = param_1 + _DAT_112d67dc0;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c61174(param_1);
    (*pcVar4)(lVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1012028b4; end: 101202913; -[_TtC28StreakRestorePromoEntryPoint32StreakRestorePromoViewController initWithValdiView:presentationType:] */

void FUN_1012028b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StreakRestorePromoEntryPoint.StreakRestorePromoViewController",0x3d,
                      "init(valdiView:presentationType:)",0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012028e0);
  (*pcVar1)();
}



/* Entry: 101202914; end: 10120294b; -[_TtC28StreakRestorePromoEntryPoint32StreakRestorePromoViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101202914(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d67db8));
  param_1 = param_1 + _DAT_112d67dc0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10120294c; end: 10120296b;  */

void FUN_10120294c(void)

{
  func_0x000107c61168(&PTR_PTR_1127bad00);
  return;
}


