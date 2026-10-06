/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029e4548; end: 1029e454f;  */

void FUN_1029e4548(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029e4550; end: 1029e4583; -[SCSCDreamsFeedbackScopedServicesSaberEntryPoint end] */

void FUN_1029e4550(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029e43d0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029e4584; end: 1029e46a3;  */

void FUN_1029e4584(long param_1,long param_2,long param_3)

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
                        "DreamsFeedbackScopeGraphBridge/SCSCDreamsFeedbackScopedServicesSaberEntryPoint.swift"
                        ,0x54,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e46a4);
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



/* Entry: 1029e46a4; end: 1029e474f; -[SCSCDreamsFeedbackScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1029e46a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029e4584(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029e4750; end: 1029e47af; -[SCSCDreamsFeedbackScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e4750(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed5b10,0);
  *(undefined8 *)(param_1 + _DAT_112ed5b18) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029e47b0; end: 1029e47e3;  */

void FUN_1029e47b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029e47e4; end: 1029e481b; -[SCSCDreamsFeedbackScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e47e4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed5b10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed5b18));
  return;
}



/* Entry: 1029e481c; end: 1029e483b;  */

void FUN_1029e481c(void)

{
  func_0x000107c61168(&PTR_PTR_11287b7d8);
  return;
}



/* Entry: 1029e483c; end: 1029e4937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1029e483c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  func_0x000107c613fc();
  lVar1 = 0;
  FUN_1029e4f08();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ed5be8) = param_1;
  *(undefined8 *)(lVar2 + _DAT_112ed5bf0) = param_2;
  lStack_40 = lVar2;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + 0x10) = plVar3;
  return unaff_x20;
}



/* Entry: 1029e4938; end: 1029e4957;  */

void FUN_1029e4938(void)

{
  FUN_1029e49c8();
  return;
}



/* Entry: 1029e4958; end: 1029e497b;  */

void FUN_1029e4958(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029e497c; end: 1029e499f;  */

void FUN_1029e497c(void)

{
  FUN_1029e49c8();
  return;
}



/* Entry: 1029e49a0; end: 1029e49a7;  */

undefined8 FUN_1029e49a0(void)

{
  return 0;
}



/* Entry: 1029e49a8; end: 1029e49c7;  */

void FUN_1029e49a8(void)

{
  func_0x000107c61168(&PTR_PTR_112ed5b88);
  return;
}



/* Entry: 1029e49c8; end: 1029e4dc3;  */

/* WARNING: Possible PIC construction at 0x0001029e4a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e4a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e4c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e4c28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e4c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e4c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e4cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e4c68) */
/* WARNING: Removing unreachable block (ram,0x0001029e4cc8) */
/* WARNING: Removing unreachable block (ram,0x0001029e4cac) */
/* WARNING: Removing unreachable block (ram,0x0001029e4c4c) */
/* WARNING: Removing unreachable block (ram,0x0001029e4c2c) */
/* WARNING: Removing unreachable block (ram,0x0001029e4c14) */
/* WARNING: Removing unreachable block (ram,0x0001029e4a84) */
/* WARNING: Removing unreachable block (ram,0x0001029e4a8c) */
/* WARNING: Removing unreachable block (ram,0x0001029e4a90) */
/* WARNING: Removing unreachable block (ram,0x0001029e4a34) */
/* WARNING: Removing unreachable block (ram,0x0001029e4a40) */
/* WARNING: Removing unreachable block (ram,0x0001029e4a94) */
/* WARNING: Removing unreachable block (ram,0x0001029e4ac8) */
/* WARNING: Removing unreachable block (ram,0x0001029e4abc) */
/* WARNING: Removing unreachable block (ram,0x0001029e4ad0) */
/* WARNING: Removing unreachable block (ram,0x0001029e4b00) */
/* WARNING: Removing unreachable block (ram,0x0001029e4af4) */
/* WARNING: Removing unreachable block (ram,0x0001029e4b08) */
/* WARNING: Removing unreachable block (ram,0x0001029e4b34) */
/* WARNING: Removing unreachable block (ram,0x0001029e4b3c) */
/* WARNING: Removing unreachable block (ram,0x0001029e4b60) */
/* WARNING: Removing unreachable block (ram,0x0001029e4b68) */
/* WARNING: Removing unreachable block (ram,0x0001029e4b8c) */
/* WARNING: Removing unreachable block (ram,0x0001029e4b90) */
/* WARNING: Removing unreachable block (ram,0x0001029e4a48) */
/* WARNING: Removing unreachable block (ram,0x0001029e4cc4) */
/* WARNING: Removing unreachable block (ram,0x0001029e4ccc) */
/* WARNING: Removing unreachable block (ram,0x0001029e4d48) */
/* WARNING: Removing unreachable block (ram,0x0001029e4da0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e49c8(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112ed5be8) + _DAT_113074ae8 + 8);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = -0x2000000000000000;
  }
  func_0x000107c61438(lVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 1029e4dc4; end: 1029e4e73; -[_TtC30SCDreamsFeedbackImplementation21DreamsFeedbackService generativeContentReportDidCompleteWithCancelled:] */

/* WARNING: Possible PIC construction at 0x0001029e4e00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e4e48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e4e04) */
/* WARNING: Removing unreachable block (ram,0x0001029e4e4c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e4dc4(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1029e4e74; end: 1029e4ecf; -[_TtC30SCDreamsFeedbackImplementation21DreamsFeedbackService init] */

void FUN_1029e4e74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCDreamsFeedbackImplementation.DreamsFeedbackService",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e4ea0);
  (*pcVar1)();
}



/* Entry: 1029e4ed0; end: 1029e4f07; -[_TtC30SCDreamsFeedbackImplementation21DreamsFeedbackService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029e4eec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e4ef0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e4ed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed5be8));
  return;
}



/* Entry: 1029e4f08; end: 1029e4f27;  */

void FUN_1029e4f08(void)

{
  func_0x000107c61168(&PTR_PTR_11287b898);
  return;
}



/* Entry: 1029e4f28; end: 1029e52e7;  */

undefined1  [16] FUN_1029e4f28(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x12;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined1 auVar13 [16];
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5ed50();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar9 - extraout_x12;
  if (param_1 == 0) goto LAB_1029e50e0;
  func_0x000107c61174();
  lStack_d0 = param_1;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x1029e52d8);
    (*pcVar11)();
  }
  lVar7 = param_1;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x1029e52dc);
    (*pcVar11)();
  }
  func_0x000107c600f4(lVar12);
  func_0x000107c61170(lVar7);
  func_0x000107c5ed4c(auStack_80);
  puVar1 = PTR___sypN_11034f1a8;
  while (lStack_68 != 0) {
    func_0x000100102924(auStack_80,auStack_a0);
    func_0x0001000bb420(auStack_a0,auStack_c0);
    uVar3 = 0;
    FUN_1029e52e8(0,0x112d55598,&PTR_PTR_1126b25d0);
    plVar4 = &lStack_c8;
    func_0x000107c6147c(plVar4,auStack_c0,puVar1 + 8,uVar3,6);
    lVar7 = lStack_c8;
    if ((int)plVar4 == 0) {
      func_0x000100183ab8(auStack_a0);
    }
    else {
      lVar5 = lStack_c8;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1029e52d4);
        (*pcVar11)();
      }
      lVar6 = lVar5;
      func_0x000107c3e240();
      func_0x000107c61170(lVar5);
      if ((int)lVar6 == 5) {
        lVar5 = lVar7;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1029e52e0);
          (*pcVar11)();
        }
        lVar6 = lVar5;
        func_0x000107c4c99c();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1029e52e4);
          (*pcVar11)();
        }
        lVar5 = lVar6;
        func_0x000107c4c9b4();
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar7);
        func_0x000100183ab8(auStack_a0);
        pcVar11 = *(code **)(lVar10 + 8);
        (*pcVar11)(lVar12,lVar2);
        lVar10 = lStack_d0;
        func_0x000107c4ca10();
        func_0x000107c61180();
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1029e52e8);
          (*pcVar11)();
        }
        func_0x000107c600f4(lVar9);
        func_0x000107c61170(lVar10);
        func_0x000107c5ed4c(auStack_80);
        if (lStack_68 == 0) goto LAB_1029e5248;
        goto LAB_1029e51dc;
      }
      func_0x000100183ab8(auStack_a0);
      func_0x000107c61170(lVar7);
    }
    func_0x000107c5ed4c(auStack_80);
  }
  (**(code **)(lVar10 + 8))(lVar12,lVar2);
  goto LAB_1029e50d8;
LAB_1029e51dc:
  do {
    func_0x000100102924(auStack_80,auStack_a0);
    func_0x0001000bb420(auStack_a0,auStack_c0);
    uVar3 = 0;
    FUN_1029e52e8(0,0x112d512f8,&PTR_PTR_1126b25d8);
    plVar4 = &lStack_c8;
    puVar8 = auStack_c0;
    func_0x000107c6147c(plVar4,puVar8,puVar1 + 8,uVar3,6);
    lVar10 = lStack_c8;
    if ((int)plVar4 == 0) {
      func_0x000100183ab8(auStack_a0);
    }
    else {
      lVar12 = lStack_c8;
      func_0x000107c4c9b4();
      if (lVar12 == lVar5) {
        lVar12 = lVar10;
        func_0x000107c3abfc();
        func_0x000107c61180();
        if (lVar12 == 0) {
          func_0x000107c61170(lStack_d0);
          func_0x000107c61170(lVar10);
          lVar7 = 0;
          puVar8 = (undefined1 *)0x0;
        }
        else {
          lVar7 = lVar12;
          func_0x000107c5faec();
          func_0x000107c61170(lVar12);
          func_0x000107c61170(lStack_d0);
          func_0x000107c61170(lVar10);
        }
        func_0x000100183ab8(auStack_a0);
        (*pcVar11)(lVar9,lVar2);
        goto LAB_1029e50e8;
      }
      func_0x000100183ab8(auStack_a0);
      func_0x000107c61170(lVar10);
    }
    func_0x000107c5ed4c(auStack_80);
  } while (lStack_68 != 0);
LAB_1029e5248:
  (*pcVar11)(lVar9,lVar2);
LAB_1029e50d8:
  func_0x000107c61170(lStack_d0);
LAB_1029e50e0:
  lVar7 = 0;
  puVar8 = (undefined1 *)0x0;
LAB_1029e50e8:
  auVar13._8_8_ = puVar8;
  auVar13._0_8_ = lVar7;
  return auVar13;
}



/* Entry: 1029e52e8; end: 1029e5327;  */

void FUN_1029e52e8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1029e5328; end: 1029e5393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e5328(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1029e571c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed5c28) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029e5394; end: 1029e53ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e5394(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed5c28) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029e5400; end: 1029e545f; -[_TtC48GenAIDreamsCrossSellScopedFactoryServiceProvider36SCGenAIDreamsCrossSellScopedServices init] */

void FUN_1029e5400(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAIDreamsCrossSellScopedFactoryServiceProvider.SCGenAIDreamsCrossSellScopedServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e542c);
  (*pcVar1)();
}



/* Entry: 1029e5460; end: 1029e546f; -[_TtC48GenAIDreamsCrossSellScopedFactoryServiceProvider36SCGenAIDreamsCrossSellScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e5460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed5c28));
  return;
}



/* Entry: 1029e5470; end: 1029e54db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e5470(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110580c18;
  func_0x000107c613fc(&UNK_110580c18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1029e57b4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1029e54dc; end: 1029e5577;  */

void FUN_1029e54dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110580b28;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110580b28;
  return;
}



/* Entry: 1029e5578; end: 1029e55af;  */

void FUN_1029e5578(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1029e55b0; end: 1029e55b7;  */

undefined8 FUN_1029e55b0(void)

{
  return 0x1b;
}



/* Entry: 1029e55b8; end: 1029e56eb;  */

void FUN_1029e55b8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110580c40;
  func_0x000107c613fc(&UNK_110580c40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029e578c;
  func_0x00010058fa64(FUN_1029e578c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029e56ec; end: 1029e571b;  */

undefined ** FUN_1029e56ec(void)

{
  return &PTR_DAT_113066b50;
}



/* Entry: 1029e571c; end: 1029e573b;  */

void FUN_1029e571c(void)

{
  func_0x000107c61168(&PTR_PTR_11287b978);
  return;
}



/* Entry: 1029e573c; end: 1029e578b;  */

undefined1  [16] FUN_1029e573c(void)

{
  return ZEXT816(0x110580b78);
}



/* Entry: 1029e578c; end: 1029e57b3;  */

void FUN_1029e578c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1029e57b4; end: 1029e57b7;  */

void FUN_1029e57b4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1029e57b8; end: 1029e5877;  */

/* WARNING: Possible PIC construction at 0x0001029e5854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e5858) */

void FUN_1029e57b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110580cc8;
  func_0x000107c613fc(&UNK_110580cc8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112ed5c98;
  func_0x0001000285a8(0x112ed5c98,&UNK_10daffc48);
  func_0x000107c613fc();
  pcVar3 = FUN_1029e5be0;
  func_0x0001000841fc(FUN_1029e5be0,puVar1,uVar2);
  func_0x000100084214(&UNK_10daffc10,0x32,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1029e5878; end: 1029e5893;  */

/* WARNING: Possible PIC construction at 0x0001029e5854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e5858) */

void FUN_1029e5878(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_110580cc8;
  func_0x000107c613fc(&UNK_110580cc8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112ed5c98;
  func_0x0001000285a8(0x112ed5c98,&UNK_10daffc48);
  func_0x000107c613fc();
  pcVar4 = FUN_1029e5be0;
  func_0x0001000841fc(FUN_1029e5be0,puVar2,uVar3);
  func_0x000100084214(&UNK_10daffc10,0x32,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1029e5894; end: 1029e5bab;  */

void FUN_1029e5894(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112ed5ca0,&UNK_10daffc50);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112ed5ca8,&UNK_10daffc60);
  puVar2 = &UNK_110580cf0;
  func_0x000107c613fc(&UNK_110580cf0,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar8 = 0x1029e5bec;
  func_0x0001000823a8(0x1029e5bec,puVar2);
  pcVar3 = "GenAIDreamsCrossSellScopeEntryPointWrapperServiceProvider";
  func_0x000100082720("GenAIDreamsCrossSellScopeEntryPointWrapperServiceProvider",0x39,2);
  FUN_1029e68e0();
  func_0x000100082720("GenAIDreamsCrossSellScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1029e5578;
  func_0x0001000823a8(FUN_1029e5578,0);
  func_0x000100082720("SCGenAIDreamsCrossSellScopedServicesCleanupRelayServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112ed5cb0,&UNK_10daffc58);
  puVar2 = &UNK_110580d18;
  func_0x000107c613fc(&UNK_110580d18,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_1029e5c34;
  func_0x0001000823a8(FUN_1029e5c34,puVar2);
  func_0x000100082720("SCGenAIDreamsCrossSellScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112ed5c30,&UNK_10daff9b0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1029e5c40;
  func_0x0001000823a8(0x1029e5c40,pcVar5);
  func_0x000100082720("SCGenAIDreamsCrossSellScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ed5c20,&UNK_10daff9a0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1029e5c48;
  func_0x0001000823a8(0x1029e5c48,uVar6);
  func_0x000100082720("SCGenAIDreamsCrossSellScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110580d40;
  func_0x000107c613fc(&UNK_110580d40,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1029e5c50;
  func_0x0001000823a8(0x1029e5c50,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCGenAIDreamsCrossSellScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1029e5bac; end: 1029e5bdf;  */

void FUN_1029e5bac(void)

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



/* Entry: 1029e5be0; end: 1029e5bf7;  */

void FUN_1029e5be0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112ed5ca0,&UNK_10daffc50);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112ed5ca8,&UNK_10daffc60);
  puVar2 = &UNK_110580cf0;
  func_0x000107c613fc(&UNK_110580cf0,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  uVar3 = 0x1029e5bec;
  func_0x0001000823a8(0x1029e5bec,puVar2);
  pcVar4 = "GenAIDreamsCrossSellScopeEntryPointWrapperServiceProvider";
  func_0x000100082720("GenAIDreamsCrossSellScopeEntryPointWrapperServiceProvider",0x39,2);
  FUN_1029e68e0();
  func_0x000100082720("GenAIDreamsCrossSellScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_1029e5578;
  func_0x0001000823a8(FUN_1029e5578,0);
  func_0x000100082720("SCGenAIDreamsCrossSellScopedServicesCleanupRelayServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112ed5cb0,&UNK_10daffc58);
  puVar2 = &UNK_110580d18;
  func_0x000107c613fc(&UNK_110580d18,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar4;
  *(code **)(puVar2 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  pcVar6 = FUN_1029e5c34;
  func_0x0001000823a8(FUN_1029e5c34,puVar2);
  func_0x000100082720("SCGenAIDreamsCrossSellScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112ed5c30,&UNK_10daff9b0);
  func_0x000107c6157c(pcVar6);
  uVar7 = 0x1029e5c40;
  func_0x0001000823a8(0x1029e5c40,pcVar6);
  func_0x000100082720("SCGenAIDreamsCrossSellScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ed5c20,&UNK_10daff9a0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1029e5c48;
  func_0x0001000823a8(0x1029e5c48,uVar7);
  func_0x000100082720("SCGenAIDreamsCrossSellScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110580d40;
  func_0x000107c613fc(&UNK_110580d40,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x1029e5c50;
  func_0x0001000823a8(0x1029e5c50,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCGenAIDreamsCrossSellScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 1029e5bf8; end: 1029e5c33;  */

void FUN_1029e5bf8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029e5c34; end: 1029e5c57;  */

void FUN_1029e5c34(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1029e609c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCGenAIDreamsCrossSellScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029e5c58; end: 1029e5dbb;  */

void FUN_1029e5c58(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_1029e5fc8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_1029e79d0(0);
  func_0x000107c613fc();
  uVar1 = uStack_58;
  FUN_1029e788c(uStack_58,uStack_60,uStack_68,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174(uStack_58);
  func_0x000107c6157c(uVar1);
  FUN_1029e789c();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1029e5dbc; end: 1029e5ecf;  */

long FUN_1029e5dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  FUN_1029e79d0(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1029e788c(param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  FUN_1029e789c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 1029e5ed0; end: 1029e5f0b;  */

void FUN_1029e5ed0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029e5f0c; end: 1029e5f13;  */

undefined8 FUN_1029e5f0c(void)

{
  return 0x1b;
}



/* Entry: 1029e5f14; end: 1029e5f97;  */

void FUN_1029e5f14(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1029e6008,param_2,FUN_1029e600c,param_2,0x1029e6034,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1029e5f98; end: 1029e5fc7;  */

undefined ** FUN_1029e5f98(void)

{
  return &PTR_DAT_113066b50;
}



/* Entry: 1029e5fc8; end: 1029e5fe7;  */

void FUN_1029e5fc8(void)

{
  func_0x000107c61168(&PTR_PTR_112ed5d20);
  return;
}



/* Entry: 1029e5fe8; end: 1029e600b;  */

undefined1  [16] FUN_1029e5fe8(void)

{
  return ZEXT816(0x110580d98);
}



/* Entry: 1029e600c; end: 1029e605f;  */

void FUN_1029e600c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1029e6060; end: 1029e609b;  */

void FUN_1029e6060(undefined8 *param_1,undefined8 param_2)

{
  FUN_1029e609c();
  func_0x0001000a7f38("SCGenAIDreamsCrossSellScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = param_2;
  return;
}



/* Entry: 1029e609c; end: 1029e6287;  */

void FUN_1029e609c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d550;
  ppuVar4 = &PTR_DAT_113066b50;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ed5d98;
  func_0x0001000285a8(0x112ed5d98,&UNK_10daffdc0);
  func_0x0001000a6ee8(&UNK_110580d98,
                      "GenAIDreamsCrossSellScopeEntryPointWrapperScopeInitializationPluginKey",0x46,
                      2,FUN_1029e62fc,param_1,uVar2,&UNK_110580d98,&PTR_DAT_112ed5cb8);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110580de8;
  func_0x000107c613fc(&UNK_110580de8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110580ff8,
                      "GenAIDreamsCrossSellScopeGraphBridgeScopeInitializationPluginKey",0x40,2,
                      FUN_1029e6304,puVar3,uVar2,&UNK_110580ff8,&PTR_DAT_112ed5e28);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110580e10;
  func_0x000107c613fc(&UNK_110580e10,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110580bb8,
                      "SCGenAIDreamsCrossSellScopedServicesScopeInitializationPluginKey",0x40,2,
                      FUN_1029e63ec,puVar3,uVar2,&UNK_110580bb8,&PTR_DAT_112ed5c38);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ed5da0;
  func_0x0001000285a8(0x112ed5da0,&UNK_10daffdc8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1029e6288; end: 1029e62fb;  */

void FUN_1029e6288(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1029e6428;
  func_0x0001000823a8(0x1029e6428,param_3);
  func_0x000100082720("GenAIDreamsCrossSellScopeEntryPointWrapperScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029e62fc; end: 1029e6303;  */

void FUN_1029e62fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1029e6428;
  func_0x0001000823a8();
  func_0x000100082720("GenAIDreamsCrossSellScopeEntryPointWrapperScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029e6304; end: 1029e6343;  */

void FUN_1029e6304(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1029e69c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("GenAIDreamsCrossSellScopeGraphBridgeScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 1029e6344; end: 1029e63eb;  */

void FUN_1029e6344(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110580e38;
  func_0x000107c613fc(&UNK_110580e38,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1029e6420;
  func_0x0001000823a8(FUN_1029e6420,puVar1);
  func_0x000100082720("SCGenAIDreamsCrossSellScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar2;
  return;
}



/* Entry: 1029e63ec; end: 1029e63f3;  */

void FUN_1029e63ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110580e38;
  func_0x000107c613fc(&UNK_110580e38,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1029e6420;
  func_0x0001000823a8(FUN_1029e6420,puVar3);
  func_0x000100082720("SCGenAIDreamsCrossSellScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar4;
  return;
}



/* Entry: 1029e63f4; end: 1029e641f;  */

void FUN_1029e63f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029e6420; end: 1029e642f;  */

void FUN_1029e6420(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110580c40;
  func_0x000107c613fc(&UNK_110580c40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029e578c;
  func_0x00010058fa64(FUN_1029e578c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029e6430; end: 1029e64b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029e6430(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1029e67f0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112ed5da8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ed5db0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e64b8);
  (*pcVar1)();
}



/* Entry: 1029e64b8; end: 1029e6517; -[_TtC36GenAIDreamsCrossSellScopeGraphBridge51GenAIDreamsCrossSellScopeGraphBridgeSaberEntryPoint init] */

void FUN_1029e64b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAIDreamsCrossSellScopeGraphBridge.GenAIDreamsCrossSellScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e64e4);
  (*pcVar1)();
}



/* Entry: 1029e6518; end: 1029e654f; -[_TtC36GenAIDreamsCrossSellScopeGraphBridge51GenAIDreamsCrossSellScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029e6534: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e6538) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e6518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed5da8));
  return;
}



/* Entry: 1029e6550; end: 1029e6577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e6550(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ed5db0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ed5da8));
  return;
}



/* Entry: 1029e6578; end: 1029e6597;  */

void FUN_1029e6578(void)

{
  func_0x000107c61168(&PTR_PTR_11287ba38);
  return;
}



/* Entry: 1029e6598; end: 1029e661f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029e6598(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed5de0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ed5de8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029e6620);
  (*pcVar2)();
}



/* Entry: 1029e6620; end: 1029e6707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029e6620(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed5de0);
  *(undefined **)(unaff_x20 + _DAT_112ed5de0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed5de8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ed5de8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110580f58;
  func_0x000107c613fc(&UNK_110580f58,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1029e670c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1029e6708; end: 1029e6713;  */

void FUN_1029e6708(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029e6714; end: 1029e6773; -[_TtC36GenAIDreamsCrossSellScopeGraphBridge51SCGenAIDreamsCrossSellScopedServicesSaberEntryPoint init] */

void FUN_1029e6714(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAIDreamsCrossSellScopeGraphBridge.SCGenAIDreamsCrossSellScopedServicesSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e6740);
  (*pcVar1)();
}



/* Entry: 1029e6774; end: 1029e67ab; -[_TtC36GenAIDreamsCrossSellScopeGraphBridge51SCGenAIDreamsCrossSellScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e6774(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed5de8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed5de0));
  return;
}



/* Entry: 1029e67ac; end: 1029e67af;  */

void FUN_1029e67ac(void)

{
  return;
}



/* Entry: 1029e67b0; end: 1029e67cf;  */

void FUN_1029e67b0(void)

{
  FUN_1029e6620();
  return;
}



/* Entry: 1029e67d0; end: 1029e67ef;  */

void FUN_1029e67d0(void)

{
  func_0x000107c61168(&PTR_PTR_11287bb00);
  return;
}



/* Entry: 1029e67f0; end: 1029e68bf;  */

undefined8 FUN_1029e67f0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112ed5e18,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1029e68c0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1029e68c0; end: 1029e68df;  */

void FUN_1029e68c0(void)

{
  func_0x000107c61168(&PTR_PTR_11287bbc8);
  return;
}



/* Entry: 1029e68e0; end: 1029e694b;  */

void FUN_1029e68e0(void)

{
  func_0x0001000285a8(0x112ed5e20,&UNK_10daffe98);
  func_0x0001000823a8(0x1029e6920,0);
  return;
}



/* Entry: 1029e694c; end: 1029e6987; -[_TtC36GenAIDreamsCrossSellScopeGraphBridge44GenAIDreamsCrossSellScopeGraphBridgeServices init] */

void FUN_1029e694c(undefined8 param_1)

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



/* Entry: 1029e6988; end: 1029e69bb;  */

void FUN_1029e6988(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029e69bc; end: 1029e69c3;  */

undefined8 FUN_1029e69bc(void)

{
  return 0x1b;
}



/* Entry: 1029e69c4; end: 1029e6b3b;  */

void FUN_1029e69c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110580fa0;
  func_0x000107c613fc(&UNK_110580fa0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1029e6b3c,puVar1);
  return;
}



/* Entry: 1029e6b3c; end: 1029e6b43;  */

void FUN_1029e6b3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112ed5e18,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ed5e18,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110581038;
  func_0x000107c613fc(&UNK_110581038,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1029e6bf0;
  func_0x00010058fa64(0x1029e6bf0,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029e6b44; end: 1029e6b9f;  */

void FUN_1029e6b44(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ed5e18,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ed5e18,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1029e6ba0; end: 1029e6bf7;  */

undefined ** FUN_1029e6ba0(void)

{
  return &PTR_DAT_113066b50;
}



/* Entry: 1029e6bf8; end: 1029e6c3f; -[SCGenAIDreamsCrossSellScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e6bf8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed5e78;
  func_0x000107c61428(param_1 + _DAT_112ed5e78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029e6c40; end: 1029e6c97; -[SCGenAIDreamsCrossSellScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e6c40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed5e78;
  func_0x000107c61428(param_1 + _DAT_112ed5e78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029e6c98; end: 1029e6cdf; -[SCGenAIDreamsCrossSellScopeGraphBridgeSaberEntryPoint genAIDreamsCrossSellScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e6c98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed5e80;
  func_0x000107c61428(param_1 + _DAT_112ed5e80,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029e6ce0; end: 1029e6d43; -[SCGenAIDreamsCrossSellScopeGraphBridgeSaberEntryPoint setGenAIDreamsCrossSellScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e6ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed5e80;
  func_0x000107c61428(param_1 + _DAT_112ed5e80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029e6d44; end: 1029e6e77;  */

/* WARNING: Possible PIC construction at 0x0001029e6dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e6e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e6e34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e6e00) */
/* WARNING: Removing unreachable block (ram,0x0001029e6e1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e6d44(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c43d38();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1029e6578();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1029e67f0();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e6e78);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112ed5da8) = lVar5;
    *(long *)(lVar4 + _DAT_112ed5db0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1029e6e78; end: 1029e6e9f; -[SCGenAIDreamsCrossSellScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1029e6e78(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029e6d44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029e6ea0; end: 1029e6ee3; -[SCGenAIDreamsCrossSellScopeGraphBridgeSaberEntryPoint end] */

void FUN_1029e6ea0(undefined8 param_1)

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



/* Entry: 1029e6ee4; end: 1029e707b;  */

void FUN_1029e6ee4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0f28b10)) {
      uVar2 = 0xd000000000000033;
      func_0x000107c605b8(0xd000000000000033,0x800000010f0d74f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "GenAIDreamsCrossSellScopeGraphBridge/SCGenAIDreamsCrossSellScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x60,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e707c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54dd0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1029e707c; end: 1029e7127; -[SCGenAIDreamsCrossSellScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1029e707c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029e6ee4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029e7128; end: 1029e7193; -[SCGenAIDreamsCrossSellScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e7128(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed5e78,0);
  *(undefined8 *)(param_1 + _DAT_112ed5e80) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed5e88) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029e7194; end: 1029e71c7;  */

void FUN_1029e7194(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029e71c8; end: 1029e720f; -[SCGenAIDreamsCrossSellScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029e71f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e71f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e71c8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed5e78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed5e80));
  return;
}



/* Entry: 1029e7210; end: 1029e722f;  */

void FUN_1029e7210(void)

{
  func_0x000107c61168(&PTR_PTR_11287bc78);
  return;
}



/* Entry: 1029e7230; end: 1029e7277; -[SCSCGenAIDreamsCrossSellScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e7230(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed5eb8;
  func_0x000107c61428(param_1 + _DAT_112ed5eb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029e7278; end: 1029e72cf; -[SCSCGenAIDreamsCrossSellScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e7278(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed5eb8;
  func_0x000107c61428(param_1 + _DAT_112ed5eb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029e72d0; end: 1029e73a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e72d0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_1029e67d0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ed5de0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029e73a8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ed5de8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ed5ec0);
    *(long **)(unaff_x20 + _DAT_112ed5ec0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1029e73a8; end: 1029e73cf; -[SCSCGenAIDreamsCrossSellScopedServicesSaberEntryPoint begin] */

void FUN_1029e73a8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029e72d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


