/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10381c5e8; end: 10381c9d3;  */

/* WARNING: Possible PIC construction at 0x00010381c63c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381c650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381c690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381c6e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381c720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381c780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381c7b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010381c784) */
/* WARNING: Removing unreachable block (ram,0x00010381c724) */
/* WARNING: Removing unreachable block (ram,0x00010381c6e4) */
/* WARNING: Removing unreachable block (ram,0x00010381c694) */
/* WARNING: Removing unreachable block (ram,0x00010381c654) */
/* WARNING: Removing unreachable block (ram,0x00010381c640) */
/* WARNING: Removing unreachable block (ram,0x00010381c678) */
/* WARNING: Removing unreachable block (ram,0x00010381c6b8) */
/* WARNING: Removing unreachable block (ram,0x00010381c72c) */
/* WARNING: Removing unreachable block (ram,0x00010381c6c0) */
/* WARNING: Removing unreachable block (ram,0x00010381c68c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x00010381c64c) */
/* WARNING: Removing unreachable block (ram,0x00010381c7bc) */

void FUN_10381c5e8(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61174();
    func_0x000107c4b1dc();
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10381c9d4; end: 10381ca87;  */

void FUN_10381c9d4(void)

{
  long unaff_x20;
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  func_0x000107c61428(unaff_x20 + 0x50,auStack_80,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  pcVar2 = *(code **)(lStack_48 + 0x18);
  func_0x000107c61434(uVar1);
  (*pcVar2)();
  func_0x000107c6142c(uVar1);
  func_0x00010381ccf4(auStack_68);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined **)(unaff_x20 + 0x50) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10381ca88; end: 10381cb23;  */

void FUN_10381ca88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10381cb24; end: 10381cb93;  */

void FUN_10381cb24(undefined8 param_1,int param_2)

{
  long lStack_38;
  
  if ((param_2 == 1) && (func_0x0001000d224c(&lStack_38), lStack_38 != 0)) {
    func_0x000107c3d064(lStack_38);
    func_0x000107c615e8(lStack_38);
  }
  FUN_10381c5e8(param_1);
  return;
}



/* Entry: 10381cb94; end: 10381cbd7;  */

void FUN_10381cb94(void)

{
  FUN_10381cb24();
  return;
}



/* Entry: 10381cbd8; end: 10381cbe7;  */

void FUN_10381cbd8(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x38);
  *(undefined8 *)(*unaff_x20 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10381cbe8; end: 10381cc57;  */

void FUN_10381cbe8(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  FUN_10381c9d4();
  lVar2 = *(long *)(lVar2 + 0x18);
  if (lVar2 != 0) {
    func_0x000104501ac4(0);
    func_0x000107c615f0(lVar2);
    uVar1 = 0;
    func_0x000104500efc(0,0);
    func_0x000107c3e02c(lVar2);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10381cc58; end: 10381cc5f;  */

undefined8 FUN_10381cc58(void)

{
  return 0;
}



/* Entry: 10381cc60; end: 10381cc97;  */

void FUN_10381cc60(void)

{
  long *unaff_x20;
  
  if (*(long *)(*unaff_x20 + 0x18) == 0) {
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c42538();
  }
  else {
    func_0x000107c51c88();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10381cc98; end: 10381ccaf;  */

void FUN_10381cc98(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    func_0x000107c61434(uVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c6142c(uVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10381c2cc();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10381ccb0; end: 10381cccf;  */

void FUN_10381ccb0(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c3e08c();
  if (param_1 != 0) {
    return;
  }
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  func_0x000107c61428(unaff_x20 + 0x50,auStack_80,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  pcVar2 = *(code **)(lStack_48 + 0x18);
  func_0x000107c61434(uVar1);
  (*pcVar2)();
  func_0x000107c6142c(uVar1);
  func_0x00010381ccf4(auStack_68);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined **)(unaff_x20 + 0x50) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10381ccd0; end: 10381cd13;  */

void FUN_10381ccd0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10381cd14; end: 10381cd77;  */

long FUN_10381cd14(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    *(long *)(unaff_x20 + 0x18) = lVar1;
    func_0x000107c615f0();
    FUN_10311c86c(uVar3);
  }
  FUN_10381cef0(lVar2);
  return lVar1;
}



/* Entry: 10381cd78; end: 10381cdc3;  */

void FUN_10381cd78(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10311c86c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10381cdc4; end: 10381ce07;  */

void FUN_10381cdc4(long param_1)

{
  FUN_10381cd14();
  if (param_1 != 0) {
    func_0x000107c4e718();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10381ce08; end: 10381ceef;  */

void FUN_10381ce08(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10381cd14();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c3fa4c(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10381cef0; end: 10381ceff;  */

void FUN_10381cef0(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 10381cf00; end: 10381cf27;  */

void FUN_10381cf00(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c3ebcc();
  *param_1 = uVar1;
  return;
}



/* Entry: 10381cf28; end: 10381cfcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381cf28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = 0;
  FUN_10381b17c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f9f4f0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f9f4d8) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112f9f4e0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f9f4e8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10381cfcc; end: 10381cfd3;  */

undefined8 FUN_10381cfcc(void)

{
  return 1;
}



/* Entry: 10381cfd4; end: 10381d033; -[_TtC16ARBarIntegration29ARBarMiniCameraFeaturesPlugin init] */

void FUN_10381cfd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarIntegration.ARBarMiniCameraFeaturesPlugin",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10381d000);
  (*pcVar1)();
}



/* Entry: 10381d034; end: 10381d08b; -[_TtC16ARBarIntegration29ARBarMiniCameraFeaturesPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381d034(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f9f930));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f9f938));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f9f940));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f9f948));
  return;
}



/* Entry: 10381d08c; end: 10381d0b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381d08c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = 0;
  FUN_10381b17c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f9f4f0) = 0;
  *(undefined8 *)(lVar5 + _DAT_112f9f4d8) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112f9f4e0) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112f9f4e8) = uVar6;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_40,puVar3);
  return;
}



/* Entry: 10381d0b4; end: 10381d0d3;  */

void FUN_10381d0b4(void)

{
  func_0x000107c61168(&PTR_PTR_112f9f9b8);
  return;
}



/* Entry: 10381d0d4; end: 10381d0eb;  */

void FUN_10381d0d4(void)

{
  return;
}



/* Entry: 10381d0ec; end: 10381d10f;  */

void FUN_10381d0ec(void)

{
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10381d110; end: 10381d12f; -[_TtC16ARBarIntegration16ARBarNullAdapter arBarBottomUIArbitrator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381d110(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f9fa10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10381d130; end: 10381d133; -[_TtC16ARBarIntegration16ARBarNullAdapter activate] */

void FUN_10381d130(void)

{
  return;
}



/* Entry: 10381d134; end: 10381d137; -[_TtC16ARBarIntegration16ARBarNullAdapter resetMetrics] */

void FUN_10381d134(void)

{
  return;
}



/* Entry: 10381d138; end: 10381d18f; -[_TtC16ARBarIntegration16ARBarNullAdapter usageMetrics] */

void FUN_10381d138(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar2 = puVar1;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10381d190; end: 10381d193; -[_TtC16ARBarIntegration16ARBarNullAdapter setCameraUIVisible:animated:isFromRootArbitrator:arBarBottomUIArbitrator:] */

void FUN_10381d190(void)

{
  return;
}



/* Entry: 10381d194; end: 10381d1c7;  */

void FUN_10381d194(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10381d1c8; end: 10381d1d7; -[_TtC16ARBarIntegration16ARBarNullAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10381d1c8(long param_1)

{
  param_1 = param_1 + _DAT_112f9fa10;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10381d1d8; end: 10381d7d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381d1d8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  long *plVar13;
  code *pcVar14;
  long lVar15;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001000d224c(&lStack_88);
  lVar15 = lStack_88;
  if (lStack_88 != 0) {
    lVar2 = lStack_88;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar15);
    plVar13 = *(long **)(param_1 + 0x10);
    if (plVar13 == (long *)0x0) {
      lVar15 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
      plVar3 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61434(param_1);
      plVar3 = plVar13;
      func_0x000101341d44(plVar13,0);
      plVar4 = &lStack_88;
      func_0x000101343178(plVar4,plVar3 + 4,plVar13,param_1);
      func_0x000100ba5608(lStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
      if (plVar4 != plVar13) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10381d508);
        (*pcVar14)();
      }
      lVar15 = plVar3[2];
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
    if (lVar15 != 0) {
      plVar13 = plVar3 + 4;
      do {
        plVar4 = plVar13;
        func_0x0001007bbd18(plVar13,&lStack_88);
        func_0x000107c602bc();
        uVar5 = 0;
        FUN_10388af40(0);
        plVar6 = plVar4;
        func_0x000107c61480(plVar4,uVar5);
        if (plVar6 == (long *)0x0) {
          func_0x000107c61170(plVar4);
          func_0x0001007bbff0(&lStack_88);
        }
        else {
          FUN_10381db40((undefined *)((long)plVar6 + _DAT_112fa56c8),auStack_b0);
          func_0x000107c61170(plVar4);
          lVar7 = lStack_90;
          uVar5 = uStack_98;
          FUN_10381db84(auStack_b0,uStack_98);
          (**(code **)(lVar7 + 8))(uVar5,lVar7);
          lVar7 = lVar2;
          func_0x000100471e0c(lVar2,1);
          func_0x000107c61574(uVar5);
          func_0x0001007bbff0(&lStack_88);
          func_0x00010381dba8(auStack_b0);
          puVar9 = puVar10;
          func_0x000107c61550();
          if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
             (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar10 >> 0x3e == 0) {
              puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar10) {
                puVar8 = puVar10;
              }
              func_0x000107c60480(puVar8);
            }
            puVar9 = (undefined *)0x0;
            FUN_10383a82c(0,puVar8 + 1,1,puVar10);
          }
          uVar12 = (ulong)puVar9 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar12 + 0x10);
          puVar10 = puVar9;
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar1) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
            FUN_10383a82c(puVar10,uVar1 + 1,1,puVar9);
            uVar12 = (ulong)puVar10 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar12 + 0x10) = uVar1 + 1;
          *(long *)(uVar12 + uVar1 * 8 + 0x20) = lVar7;
        }
        plVar13 = plVar13 + 5;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    func_0x000107c61574(plVar3);
    func_0x0001000285a8(0x112f9fac0,&UNK_10dc14d00);
    puVar9 = puVar10;
    func_0x000100b658a4(puVar10);
    func_0x000107c6142c(puVar10);
    uVar5 = 0x112f9fac8;
    func_0x0001000285a8(0x112f9fac8,&UNK_10dc17980);
    plVar13 = (long *)0x10381d508;
    func_0x0001000bfde0(0x10381d508,0,uVar5);
    func_0x000107c61574(puVar9);
    pcVar14 = *(code **)(*plVar13 + 0x58);
    lVar15 = 0x112f9f198;
    func_0x0001000285a8(0x112f9f198,&UNK_10dc14d10);
    lVar11 = lVar15;
    FUN_10381daf0();
    lVar7 = unaff_x20 + 0x18;
    (*pcVar14)(lVar7,lVar15,lVar11);
    func_0x000107c61574(plVar13);
    lVar11 = lVar7;
    func_0x000107c614f0(lVar7);
    (**(code **)(lVar15 + 0x10))(*(undefined8 *)(unaff_x20 + 0x38),lVar11,lVar15);
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(lVar7);
  }
  return;
}



/* Entry: 10381d7d4; end: 10381d82f;  */

void FUN_10381d7d4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 10381d830; end: 10381d993;  */

void FUN_10381d830(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  lVar7 = *unaff_x20;
  lVar6 = unaff_x20[2];
  puVar2 = &UNK_11069a620;
  func_0x000107c613fc(&UNK_11069a620,0x28,7);
  uVar8 = *(undefined8 *)(lVar7 + 0x50);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  lVar7 = unaff_x20[6];
  lVar9 = unaff_x20[5];
  *(long *)(puVar2 + 0x20) = unaff_x20[6];
  *(long *)(puVar2 + 0x18) = lVar9;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_10381da94;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10381d994;
  puStack_78 = &UNK_11069a638;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(lVar7);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11069a670;
  func_0x000107c613fc(&UNK_11069a670,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar4 = &UNK_11069a698;
  func_0x000107c613fc(&UNK_11069a698,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  pcStack_70 = (code *)0x10381dae8;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_100ba5314;
  puStack_78 = &UNK_11069a6b0;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c42c14(lVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10381d994; end: 10381da17;  */

void FUN_10381d994(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  FUN_10381db84(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x00010381dba8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10381da18; end: 10381da93;  */

void FUN_10381da18(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10381d1d8(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10381da94; end: 10381dacb;  */

void FUN_10381da94(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  (**(code **)(unaff_x20 + 0x18))();
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 10381dacc; end: 10381daef;  */

void FUN_10381dacc(long param_1,long param_2)

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



/* Entry: 10381daf0; end: 10381db3f;  */

void FUN_10381daf0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f9fad0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f9f198;
  func_0x00010002969c(0x112f9f198,&UNK_10dc14d10);
  puVar2 = &DAT_10dd3ca70;
  func_0x000107c61520(&DAT_10dd3ca70,uVar1);
  puRam0000000112f9fad0 = puVar2;
  return;
}



/* Entry: 10381db40; end: 10381db83;  */

long FUN_10381db40(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10381db84; end: 10381dbcf;  */

long * FUN_10381db84(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 10381dbd0; end: 10381dc03;  */

void FUN_10381dbd0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10381dc04; end: 10381dc13;  */

undefined1  [16] FUN_10381dc04(void)

{
  return ZEXT816(0x11069a6f0);
}



/* Entry: 10381dc14; end: 10381dc4b; -[_TtC16ARBarIntegration24ARBarPluginScopeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010381dc30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010381dc34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381dc14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f9fae8));
  return;
}



/* Entry: 10381dc4c; end: 10381dc8f;  */

void FUN_10381dc4c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10381dc90; end: 10381dd6f;  */

void FUN_10381dc90(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3e024();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10381dd70; end: 10381dd7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381dd70(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f9fbc0) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10381dd7c; end: 10381dda7; -[_TtC16ARBarIntegration47SCCaaSCameraScopedARBarReplyIntegrationServices init] */

void FUN_10381dd7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarIntegration.SCCaaSCameraScopedARBarReplyIntegrationServices",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10381dda8);
  (*pcVar1)();
}



/* Entry: 10381dda8; end: 10381ddab;  */

void FUN_10381dda8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10381ddac; end: 10381ddc7; -[_TtC16ARBarIntegration47SCCaaSCameraScopedARBarReplyIntegrationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381ddac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f9fbc0));
  return;
}



/* Entry: 10381ddc8; end: 10381ddf3; -[_TtC16ARBarIntegration56SCLensesModularCameraScopedARBarReplyIntegrationServices init] */

void FUN_10381ddc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarIntegration.SCLensesModularCameraScopedARBarReplyIntegrationServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10381ddf4);
  (*pcVar1)();
}



/* Entry: 10381ddf4; end: 10381de0f; -[_TtC16ARBarIntegration56SCLensesModularCameraScopedARBarReplyIntegrationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381ddf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f9fbc8));
  return;
}



/* Entry: 10381de10; end: 10381de63;  */

void FUN_10381de10(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10381de64; end: 10381df03; -[_TtC16ARBarIntegration47SCChatCameraScopedARBarReplyIntegrationServices init] */

void FUN_10381de64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarIntegration.SCChatCameraScopedARBarReplyIntegrationServices",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10381de90);
  (*pcVar1)();
}



/* Entry: 10381df04; end: 10381df13; -[_TtC16ARBarIntegration47SCChatCameraScopedARBarReplyIntegrationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381df04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f9fbd0));
  return;
}



/* Entry: 10381df14; end: 10381df33;  */

void FUN_10381df14(void)

{
  func_0x000107c61168(&PTR_PTR_1128f2a40);
  return;
}



/* Entry: 10381df34; end: 10381df3b;  */

void FUN_10381df34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10381df3c; end: 10381df9b; -[_TtC16ARBarIntegration26ARBarSingleFeatureProvider init] */

void FUN_10381df3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarIntegration.ARBarSingleFeatureProvider",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10381df68);
  (*pcVar1)();
}



/* Entry: 10381df9c; end: 10381dfab; -[_TtC16ARBarIntegration26ARBarSingleFeatureProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381df9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f9fc50));
  return;
}



/* Entry: 10381dfac; end: 10381dfcb;  */

void FUN_10381dfac(void)

{
  func_0x000107c61168(&PTR_PTR_1128f2b00);
  return;
}



/* Entry: 10381dfcc; end: 10381dfdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381dfcc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + _DAT_112f9fc50));
  return;
}



/* Entry: 10381dfe0; end: 10381e023;  */

void FUN_10381dfe0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10381e024; end: 10381e0bb;  */

void FUN_10381e024(long param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c496b4(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10381e0bc; end: 10381e0c3;  */

void FUN_10381e0bc(void)

{
  return;
}



/* Entry: 10381e0c4; end: 10381e3ef;  */

code * FUN_10381e0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pcVar3 = (code *)&uStack_60;
  func_0x0001000d224c(&uStack_60);
  uVar4 = uStack_60;
  if (uStack_60 != 0) {
    uVar1 = uStack_60;
    func_0x000107c5ae94();
    func_0x000107c615e8(uVar4);
    if ((uVar1 & 1) != 0) {
      uVar4 = 0x112f9fdd0;
      uStack_58 = 0xe0;
      func_0x0001000285a8();
      FUN_1038a5554();
      goto LAB_10381e210;
    }
  }
  func_0x0001000d224c(&uStack_60);
  if (uStack_60 != 0) {
    func_0x0001000285a8(0x112ef67c8,&UNK_10db24e80);
    uVar4 = uStack_60;
    func_0x000107c4d4bc(uStack_60);
    func_0x000107c61180();
    uVar1 = uVar4;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    uVar4 = uVar1;
    func_0x0001000b637c(uVar1);
    func_0x000107c61170(uVar1);
    func_0x00010381e264();
    uVar2 = uVar1;
    func_0x0001006c733c();
    pcVar3 = FUN_10381e3f0;
    func_0x0001000bfde0(FUN_10381e3f0,0,&UNK_1106a2658);
    func_0x000107c615e8(uStack_60);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(uVar1);
    func_0x000107c61574(uVar2);
    return pcVar3;
  }
  uStack_58 = 0xe0;
  func_0x0001000285a8(0x112f9fdd0);
  uVar4 = 0;
  FUN_1038a4ecc();
LAB_10381e210:
  uStack_60 = uVar4;
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x000100854cb0(&uStack_60);
  func_0x000107c61170(uVar4);
  FUN_10381e510(param_3,param_4);
  return pcVar3;
}



/* Entry: 10381e3f0; end: 10381e44f;  */

void FUN_10381e3f0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 1) == '\x01') {
    uVar1 = 1;
    FUN_1038a4ecc();
  }
  else {
    uVar1 = *param_2;
    func_0x000107c5d380();
    func_0x000107c61180();
    param_3 = 0;
    param_4 = 0;
    param_5 = 0;
    FUN_1038a54f8();
  }
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}



/* Entry: 10381e450; end: 10381e4db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381e450(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + _DAT_113075be0);
    lVar3 = lVar4;
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    if (lVar4 != 0) {
      lVar2 = lVar3;
      func_0x000107c508a8();
      func_0x000107c61170(lVar3);
      uVar1 = lVar2 == 2;
      goto LAB_10381e4c8;
    }
  }
  uVar1 = 2;
LAB_10381e4c8:
  *param_1 = uVar1;
  return;
}



/* Entry: 10381e4dc; end: 10381e50f;  */

void FUN_10381e4dc(void)

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



/* Entry: 10381e510; end: 10381e53b;  */

/* WARNING: Possible PIC construction at 0x00010381e524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010381e528) */

void FUN_10381e510(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 10381e53c; end: 10381e5f3;  */

void FUN_10381e53c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar1 = param_1;
  (**(code **)(lStack_48 + 8))(param_1,uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c614f0(param_1);
    uVar2 = uStack_50;
    FUN_1038712b0();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar2);
    func_0x000107c40158(uVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10381e5f4; end: 10381e647;  */

void FUN_10381e5f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10381e648; end: 10381e667;  */

void FUN_10381e648(void)

{
  FUN_10381e53c();
  return;
}



/* Entry: 10381e668; end: 10381e677;  */

void FUN_10381e668(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10381e678; end: 10381e697;  */

void FUN_10381e678(void)

{
  func_0x000107c61168(&PTR_PTR_112f9fec8);
  return;
}



/* Entry: 10381e698; end: 10381e7f7;  */

undefined8 FUN_10381e698(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  FUN_103871114();
  if (((uVar1 & 1) != 0) && (uVar1 = param_1, func_0x000107c49dd8(), (int)uVar1 != 0)) {
    func_0x000107c4e434(param_1,param_2,1);
    func_0x000107c61180();
    if (param_1 == 0) {
      return 1;
    }
    func_0x000107c61170();
  }
  return 0;
}



/* Entry: 10381e7f8; end: 10381e857; -[_TtC16ARBarIntegration48SCLensTalkCarouselScopedARBarIntegrationServices init] */

void FUN_10381e7f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarIntegration.SCLensTalkCarouselScopedARBarIntegrationServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10381e824);
  (*pcVar1)();
}



/* Entry: 10381e858; end: 10381e867; -[_TtC16ARBarIntegration48SCLensTalkCarouselScopedARBarIntegrationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381e858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f9ff20));
  return;
}



/* Entry: 10381e868; end: 10381e887;  */

void FUN_10381e868(void)

{
  func_0x000107c61168(&PTR_PTR_1128f2bc0);
  return;
}



/* Entry: 10381e888; end: 10381e8e3;  */

void FUN_10381e888(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  func_0x000107c615f0(param_1);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 10381e8e4; end: 10381e953;  */

void FUN_10381e8e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10381e954; end: 10381e9b3; -[_TtC16ARBarIntegration38ARBarMiniCameraPassthroughViewProvider init] */

void FUN_10381e954(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarIntegration.ARBarMiniCameraPassthroughViewProvider",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10381e980);
  (*pcVar1)();
}



/* Entry: 10381e9b4; end: 10381e9eb; -[_TtC16ARBarIntegration38ARBarMiniCameraPassthroughViewProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381e9b4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f9ff50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f9ff58));
  return;
}



/* Entry: 10381e9ec; end: 10381ea0b;  */

void FUN_10381e9ec(void)

{
  func_0x000107c61168(&PTR_PTR_1128f2c80);
  return;
}



/* Entry: 10381ea0c; end: 10381ed9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10381ea0c(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long alStack_70 [4];
  
  puVar6 = &UNK_11069a7b8;
  func_0x000107c613fc(&UNK_11069a7b8,0x18,7);
  plVar9 = (long *)(puVar6 + 0x10);
  *plVar9 = 0;
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f9ff58);
  uStack_a0 = 0x10381eda0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  pcStack_b0 = FUN_10381e8e4;
  puStack_a8 = &UNK_11069a7d0;
  ppuVar3 = &puStack_c0;
  puStack_98 = puVar6;
  func_0x000107c60bc4(ppuVar3);
  puVar5 = puStack_98;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar5);
  func_0x000107c5dc64(uVar11);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61428(plVar9,&puStack_c0,0,0);
  lVar10 = *plVar9;
  func_0x000107c615f0(lVar10);
  func_0x000107c61574(puVar6);
  if (lVar10 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar10;
    func_0x000107c5cbbc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
  }
  alStack_70[0] = lVar8;
  func_0x0001000d224c(&lStack_c8);
  lVar10 = lStack_c8;
  if (lStack_c8 != 0) {
    lVar8 = lStack_c8;
    func_0x000107c403cc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    if (lVar8 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = lVar8;
      func_0x000107c3f250();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
    }
  }
  alStack_70[1] = lVar10;
  func_0x0001000d224c(&lStack_c8);
  lVar10 = lStack_c8;
  if (lStack_c8 == 0) {
LAB_10381ebf0:
    alStack_70[2] = 0;
  }
  else {
    lVar8 = lStack_c8;
    func_0x000107c403cc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    if (lVar8 == 0) goto LAB_10381ebf0;
    lVar10 = lVar8;
    func_0x000107c44dd4();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10381ed98);
      (*pcVar2)();
    }
    lVar8 = lVar10;
    func_0x000107c403bc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    alStack_70[2] = lVar8;
  }
  func_0x0001000d224c(&lStack_c8);
  if (lStack_c8 != 0) {
    lVar10 = lStack_c8;
    func_0x000107c403cc();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_c8);
    if (lVar10 != 0) {
      lVar8 = lVar10;
      func_0x000107c44dd0();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10381ed9c);
        (*pcVar2)();
      }
      lVar10 = lVar8;
      func_0x000107c403bc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar8);
      alStack_70[3] = lVar10;
      goto LAB_10381ec6c;
    }
  }
  alStack_70[3] = 0;
LAB_10381ec6c:
  uVar12 = 0;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar1 = uVar12;
    if (uVar12 < 5) {
      uVar1 = 4;
    }
    do {
      if (uVar12 == 4) {
        uVar11 = 0x112d6ca30;
        func_0x0001000285a8(0x112d6ca30,&UNK_10d92f680);
        func_0x000107c61408(alStack_70,4,uVar11);
        return puVar6;
      }
      if (uVar1 == uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10381ed94);
        (*pcVar2)();
      }
      lVar10 = alStack_70[uVar12];
      uVar12 = uVar12 + 1;
    } while (lVar10 == 0);
    func_0x000107c61174();
    puVar5 = puVar6;
    func_0x000107c61550();
    if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
       (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar6 >> 0x3e == 0) {
        puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar6) {
          puVar4 = puVar6;
        }
        func_0x000107c60480(puVar4);
      }
      puVar5 = (undefined *)0x0;
      func_0x0001023b5804(0,puVar4 + 1,1,puVar6);
    }
    uVar7 = (ulong)puVar5 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar7 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x0001023b5804(puVar6,uVar1 + 1,1,puVar5);
      uVar7 = (ulong)puVar6 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
    *(long *)(uVar7 + uVar1 * 8 + 0x20) = lVar10;
  } while( true );
}



/* Entry: 10381ed9c; end: 10381edc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10381ed9c(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long alStack_70 [4];
  
  puVar6 = &UNK_11069a7b8;
  func_0x000107c613fc(&UNK_11069a7b8,0x18,7);
  plVar9 = (long *)(puVar6 + 0x10);
  *plVar9 = 0;
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f9ff58);
  uStack_a0 = 0x10381eda0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  pcStack_b0 = FUN_10381e8e4;
  puStack_a8 = &UNK_11069a7d0;
  ppuVar3 = &puStack_c0;
  puStack_98 = puVar6;
  func_0x000107c60bc4(ppuVar3);
  puVar5 = puStack_98;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar5);
  func_0x000107c5dc64(uVar11);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61428(plVar9,&puStack_c0,0,0);
  lVar10 = *plVar9;
  func_0x000107c615f0(lVar10);
  func_0x000107c61574(puVar6);
  if (lVar10 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar10;
    func_0x000107c5cbbc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
  }
  alStack_70[0] = lVar8;
  func_0x0001000d224c(&lStack_c8);
  lVar10 = lStack_c8;
  if (lStack_c8 != 0) {
    lVar8 = lStack_c8;
    func_0x000107c403cc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    if (lVar8 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = lVar8;
      func_0x000107c3f250();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
    }
  }
  alStack_70[1] = lVar10;
  func_0x0001000d224c(&lStack_c8);
  lVar10 = lStack_c8;
  if (lStack_c8 == 0) {
LAB_10381ebf0:
    alStack_70[2] = 0;
  }
  else {
    lVar8 = lStack_c8;
    func_0x000107c403cc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    if (lVar8 == 0) goto LAB_10381ebf0;
    lVar10 = lVar8;
    func_0x000107c44dd4();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10381ed98);
      (*pcVar2)();
    }
    lVar8 = lVar10;
    func_0x000107c403bc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    alStack_70[2] = lVar8;
  }
  func_0x0001000d224c(&lStack_c8);
  if (lStack_c8 != 0) {
    lVar10 = lStack_c8;
    func_0x000107c403cc();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_c8);
    if (lVar10 != 0) {
      lVar8 = lVar10;
      func_0x000107c44dd0();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10381ed9c);
        (*pcVar2)();
      }
      lVar10 = lVar8;
      func_0x000107c403bc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar8);
      alStack_70[3] = lVar10;
      goto LAB_10381ec6c;
    }
  }
  alStack_70[3] = 0;
LAB_10381ec6c:
  uVar12 = 0;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar1 = uVar12;
    if (uVar12 < 5) {
      uVar1 = 4;
    }
    do {
      if (uVar12 == 4) {
        uVar11 = 0x112d6ca30;
        func_0x0001000285a8(0x112d6ca30,&UNK_10d92f680);
        func_0x000107c61408(alStack_70,4,uVar11);
        return puVar6;
      }
      if (uVar1 == uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10381ed94);
        (*pcVar2)();
      }
      lVar10 = alStack_70[uVar12];
      uVar12 = uVar12 + 1;
    } while (lVar10 == 0);
    func_0x000107c61174();
    puVar5 = puVar6;
    func_0x000107c61550();
    if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
       (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar6 >> 0x3e == 0) {
        puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar6) {
          puVar4 = puVar6;
        }
        func_0x000107c60480(puVar4);
      }
      puVar5 = (undefined *)0x0;
      func_0x0001023b5804(0,puVar4 + 1,1,puVar6);
    }
    uVar7 = (ulong)puVar5 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar7 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x0001023b5804(puVar6,uVar1 + 1,1,puVar5);
      uVar7 = (ulong)puVar6 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
    *(long *)(uVar7 + uVar1 * 8 + 0x20) = lVar10;
  } while( true );
}



/* Entry: 10381edc4; end: 10381ee97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10381edc4(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  lVar1 = _DAT_112f9ffa0;
  ppuVar5 = &puStack_40;
  puVar2 = *(undefined1 **)(unaff_x20 + _DAT_112f9ffa0);
  puVar3 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    FUN_10382144c();
    puVar3 = puVar2;
    func_0x000107c610f8();
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c469a4(0,0,0,0);
    *(undefined **)(puVar3 + _DAT_112f9fff0) = puVar4;
    puVar3[_DAT_112f9fff8] = 0;
    puStack_40 = puVar3;
    puStack_38 = puVar2;
    func_0x000107c61154(&puStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
    func_0x000107c61180();
    func_0x000107c53dec();
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined1 ***)(unaff_x20 + lVar1) = ppuVar5;
    func_0x000107c61170(uVar6);
    puVar2 = (undefined1 *)0x0;
    puVar3 = (undefined1 *)ppuVar5;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10381ee98; end: 10381ef03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10381ee98(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f9ffa8;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f9ffa8);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    lVar2 = unaff_x20;
    FUN_10381ef04();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c615f0();
    func_0x000100e3da34(uVar4);
  }
  func_0x000100e3da44(lVar3);
  return lVar2;
}



/* Entry: 10381ef04; end: 10381f10b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10381ef04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar9 = &puStack_d0;
  func_0x0001000d224c(&puStack_a0);
  puVar2 = puStack_a0;
  puVar7 = (undefined *)0x0;
  if (puStack_a0 != (undefined *)0x0) {
    uVar11 = *(undefined8 *)(param_1 + _DAT_112f9ff98);
    uVar10 = *(undefined8 *)(param_1 + _DAT_112f9ff88);
    puVar5 = &UNK_11069a930;
    puVar3 = puVar5;
    func_0x000107c613fc(&UNK_11069a930,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_1);
    puVar4 = &UNK_11069a958;
    func_0x000107c613fc(&UNK_11069a958,0x30,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined **)(puVar4 + 0x18) = puStack_a0;
    *(undefined8 *)(puVar4 + 0x20) = uVar10;
    *(undefined8 *)(puVar4 + 0x28) = uVar11;
    func_0x000107c613fc(&UNK_11069a930,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,param_1);
    puVar6 = &UNK_11069a980;
    func_0x000107c613fc(&UNK_11069a980,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = uVar11;
    *(undefined **)(puVar6 + 0x20) = puStack_a0;
    puVar7 = PTR_PTR_1126aeaf8;
    func_0x000107c610f8(PTR_PTR_1126aeaf8);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_1038204d8;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100e1779c;
    puStack_88 = &UNK_11069a998;
    ppuVar8 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar8);
    uStack_b0 = 0x1038204e4;
    puStack_d0 = puVar1;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_100e17304;
    puStack_b8 = &UNK_11069a9c0;
    puStack_a8 = puVar6;
    func_0x000107c60bc4(&puStack_d0);
    func_0x000107c61580(uVar11,2);
    func_0x000107c6157c(puVar3);
    func_0x000107c615f0(puVar2);
    func_0x000107c6157c(uVar10);
    func_0x000107c6157c(puVar5);
    func_0x000107c47be0(puVar7);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(puStack_a8);
    puVar2 = puStack_78;
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar2);
  }
  return puVar7;
}



/* Entry: 10381f10c; end: 10381f253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381f10c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long alStack_90 [3];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    FUN_10381edc4();
    func_0x000107c3d0a0(param_3);
    func_0x0001000d224c(alStack_90);
    lVar2 = alStack_90[0];
    func_0x000107c5cfa0();
    func_0x000107c61180();
    func_0x000107c615e8(alStack_90[0]);
    if (lVar2 != 0) {
      func_0x000107c3e2c0(lVar2);
      func_0x000107c615e8(lVar2);
    }
    FUN_1038205ac(param_1);
    func_0x0001000d224c(alStack_90);
    func_0x0001000a8868(alStack_90,uStack_78);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f9fff0);
    pcVar4 = *(code **)(lStack_70 + 8);
    func_0x000107c61174(uVar3);
    (*pcVar4)();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_2);
    func_0x0001000834e4(alStack_90);
  }
  return;
}



/* Entry: 10381f254; end: 10381f3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381f254(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long alStack_88 [2];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar1 = param_3;
    FUN_10381edc4();
    func_0x0001000d224c(alStack_88);
    lVar2 = alStack_88[0];
    func_0x000107c5cfa0();
    func_0x000107c61180();
    func_0x000107c615e8(alStack_88[0]);
    if (lVar2 == 0) {
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar1);
    }
    else {
      puVar3 = &UNK_11069a9f8;
      func_0x000107c613fc(&UNK_11069a9f8,0x40,7);
      *(long *)(puVar3 + 0x10) = lVar1;
      *(undefined8 *)(puVar3 + 0x18) = param_4;
      *(undefined8 *)(puVar3 + 0x20) = param_1;
      *(undefined8 *)(puVar3 + 0x28) = param_2;
      *(undefined8 *)(puVar3 + 0x30) = param_5;
      *(long *)(puVar3 + 0x38) = param_3;
      uStack_98 = 0x1038204f0;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000b0c7c;
      puStack_a0 = &UNK_11069aa10;
      ppuVar4 = &puStack_b8;
      puStack_90 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_90;
      func_0x000107c61174(lVar1);
      func_0x000107c6157c(param_4);
      func_0x000100b64c10(param_1,param_2);
      func_0x000107c615f0(param_5);
      func_0x000107c61174(param_3);
      func_0x000107c61574(puVar3);
      func_0x000107c41864(lVar2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar1);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10381f3f4; end: 10381f527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381f3f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  func_0x000107c517c4(*(undefined8 *)(param_1 + _DAT_112f9fff0));
  func_0x0001000d224c(&puStack_80);
  func_0x0001000a8868(&puStack_80,puStack_68);
  (**(code **)((long)pcStack_60 + 0x18))(puStack_68,pcStack_60);
  func_0x0001000834e4(&puStack_80);
  puVar1 = &UNK_11069aa48;
  func_0x000107c613fc(&UNK_11069aa48,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  pcStack_60 = FUN_103820500;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000b0c7c;
  puStack_68 = &UNK_11069aa60;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000100b64c10(param_3,param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10381f528; end: 10381f58b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10381f528(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f9ffb0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f9ffb0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10381f58c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    lVar2 = 0;
  }
  func_0x000107c615f0(lVar2);
  return lVar3;
}



/* Entry: 10381f58c; end: 10381f707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10381f58c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_b0;
  lVar2 = param_1;
  FUN_10381edc4();
  puVar3 = PTR_PTR_1126b0870;
  func_0x000107c610f8();
  func_0x000107c47da4();
  func_0x000107c61170(lVar2);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112f9ffa0);
  puVar4 = &UNK_11069a840;
  func_0x000107c613fc(&UNK_11069a840,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar9;
  puVar5 = &UNK_11069a868;
  func_0x000107c613fc(&UNK_11069a868,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar9;
  puVar6 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_103820010;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100e1779c;
  puStack_68 = &UNK_11069a880;
  ppuVar7 = &puStack_80;
  puStack_58 = puVar4;
  func_0x000107c60bc4(ppuVar7);
  uStack_90 = 0x103820018;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100e17304;
  puStack_98 = &UNK_11069a8a8;
  puStack_88 = puVar5;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  func_0x000107c47be0(puVar6);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puStack_88);
  func_0x000107c61574(puStack_58);
  return puVar6;
}



/* Entry: 10381f708; end: 10381fb2b;  */

void FUN_10381f708(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  func_0x000107c5a050(param_2,param_2,0);
  uVar2 = param_3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10381fb18);
    (*pcVar1)();
  }
  uVar9 = uVar2;
  func_0x000107c5c3b0();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar3 = 0;
  FUN_10382053c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar2 = uVar9;
  func_0x000107c5fc54(uVar9,uVar3);
  func_0x000107c61170(uVar9);
  if (uVar2 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar9 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10381f83c);
          (*pcVar1)();
        }
        uVar4 = *(ulong *)(uVar2 + uVar10 * 8 + 0x20);
        func_0x000107c61174(uVar4);
      }
      else {
        uVar4 = uVar10;
        FUN_10382031c(uVar10,uVar2,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10381f838);
        (*pcVar1)();
      }
      uVar11 = uVar10 + 1;
      func_0x000107c550d8();
      func_0x000107c61170(uVar4);
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar9);
  }
  func_0x000107c6142c(uVar2);
  uVar2 = param_3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10381fb1c);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(uVar2);
  lVar5 = 0x112d360b8;
  FUN_103820048(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 9;
  *(undefined8 *)(lVar5 + 0x10) = 4;
  uVar3 = param_2;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10381fb20);
    (*pcVar1)();
  }
  uVar9 = uVar2;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar6 = uVar3;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  *(undefined8 *)(lVar5 + 0x20) = uVar6;
  uVar3 = param_2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10381fb24);
    (*pcVar1)();
  }
  uVar9 = uVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar6 = uVar3;
  func_0x000107c40284(0xc034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  *(undefined8 *)(lVar5 + 0x28) = uVar6;
  uVar3 = param_2;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar9 = uVar2;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar6 = uVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar5 + 0x30) = uVar6;
    uVar3 = param_2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (param_3 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      uVar2 = param_3;
      func_0x000107c3ec1c(param_3);
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      uVar6 = uVar3;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar2);
      *(undefined8 *)(lVar5 + 0x38) = uVar6;
      uVar3 = 0;
      FUN_10382053c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar8 = lVar5;
      func_0x000107c5fc48(lVar5,uVar3);
      func_0x000107c61574(lVar5);
      func_0x000107c3d048(puVar7);
      func_0x000107c61170(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_attachUI__1125a0c08,param_1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10381fb2c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10381fb28);
  (*pcVar1)();
}



/* Entry: 10381fb2c; end: 10381fc0b;  */

void FUN_10381fb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_11069a8e0;
  func_0x000107c613fc(&UNK_11069a8e0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  uStack_50 = 0x10382003c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_11069a8f8;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(param_3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10381fc0c; end: 10381fd77;  */

void FUN_10381fc0c(undefined8 param_1,ulong param_2,code *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  func_0x000107c4ff34();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10381fd78);
    (*pcVar1)();
  }
  uVar5 = param_2;
  func_0x000107c5c3b0();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  uVar2 = 0;
  FUN_10382053c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar3 = uVar5;
  func_0x000107c5fc54(uVar5,uVar2);
  func_0x000107c61170(uVar5);
  if (uVar3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar5 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10381fd30);
          (*pcVar1)();
        }
        uVar4 = *(ulong *)(uVar3 + uVar6 * 8 + 0x20);
        func_0x000107c61174(uVar4);
      }
      else {
        uVar4 = uVar6;
        FUN_10382031c(uVar6,uVar3,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10381fd2c);
        (*pcVar1)();
      }
      uVar7 = uVar6 + 1;
      func_0x000107c550d8();
      func_0x000107c61170(uVar4);
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar5);
  }
  func_0x000107c6142c(uVar3);
  if (param_3 != (code *)0x0) {
    (*param_3)();
  }
  return;
}



/* Entry: 10381fd78; end: 10381fda3;  */

void FUN_10381fd78(undefined1 *param_1,ulong *param_2)

{
  undefined1 uVar1;
  
  if ((char)param_2[1] == '\x01') {
    *param_1 = 4;
    return;
  }
  uVar1 = (undefined1)*param_2;
  if (3 < *param_2) {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10381fda4; end: 10381fe03; -[_TtC16ARBarIntegration43ARBarMiniCameraTrayContainerProviderAdapter init] */

void FUN_10381fda4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarIntegration.ARBarMiniCameraTrayContainerProviderAdapter",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10381fdd0);
  (*pcVar1)();
}


