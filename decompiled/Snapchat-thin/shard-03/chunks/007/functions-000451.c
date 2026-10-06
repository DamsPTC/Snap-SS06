/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b645f0; end: 102b6468b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b645f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ef86b8);
  *(undefined8 *)(unaff_x20 + _DAT_112ef7fc8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef7fd0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102b6468c; end: 102b646eb; -[_TtC26ViewfinderScopeGraphBridge45SCViewfinderDataSourceServicesSaberEntryPoint init] */

void FUN_102b6468c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ViewfinderScopeGraphBridge.SCViewfinderDataSourceServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b646b8);
  (*pcVar1)();
}



/* Entry: 102b646ec; end: 102b6477f; -[_TtC26ViewfinderScopeGraphBridge45SCViewfinderDataSourceServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b646ec(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef7fc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef7fd0));
  return;
}



/* Entry: 102b64780; end: 102b64787;  */

undefined8 FUN_102b64780(void)

{
  return 0;
}



/* Entry: 102b64788; end: 102b64823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b64788(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ef86c0);
  *(undefined8 *)(unaff_x20 + _DAT_112ef8000) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8008) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102b64824; end: 102b64883; -[_TtC26ViewfinderScopeGraphBridge37SCViewfinderUIServicesSaberEntryPoint init] */

void FUN_102b64824(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ViewfinderScopeGraphBridge.SCViewfinderUIServicesSaberEntryPoint",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b64850);
  (*pcVar1)();
}



/* Entry: 102b64884; end: 102b64917; -[_TtC26ViewfinderScopeGraphBridge37SCViewfinderUIServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b64884(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef8000));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef8008));
  return;
}



/* Entry: 102b64918; end: 102b6491f;  */

undefined8 FUN_102b64918(void)

{
  return 0;
}



/* Entry: 102b64920; end: 102b64983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b64920(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef8638);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b64984; end: 102b6498b;  */

void FUN_102b64984(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b6498c; end: 102b64a2b;  */

void FUN_102b6498c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b64a2c; end: 102b64a4b;  */

void FUN_102b64a2c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b64a4c; end: 102b64aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b64a4c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef8640);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b64ab0; end: 102b64ab7;  */

void FUN_102b64ab0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b64ab8; end: 102b64adb;  */

void FUN_102b64ab8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b64adc; end: 102b64afb;  */

void FUN_102b64adc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b64afc; end: 102b64b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b64afc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef8658);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b64b60; end: 102b64b67;  */

void FUN_102b64b60(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b64b68; end: 102b64b8b;  */

void FUN_102b64b68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b64b8c; end: 102b64bab;  */

void FUN_102b64b8c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b64bac; end: 102b64c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b64bac(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef8668);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b64c10; end: 102b64c17;  */

void FUN_102b64c10(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b64c18; end: 102b64cb7;  */

void FUN_102b64c18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b64cb8; end: 102b64cd7;  */

void FUN_102b64cb8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b64cd8; end: 102b64d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b64cd8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef8670);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b64d3c; end: 102b64d43;  */

void FUN_102b64d3c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b64d44; end: 102b64d67;  */

void FUN_102b64d44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b64d68; end: 102b64d87;  */

void FUN_102b64d68(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b64d88; end: 102b64deb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b64d88(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef8690);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b64dec; end: 102b64df3;  */

void FUN_102b64dec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b64df4; end: 102b64e17;  */

void FUN_102b64df4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b64e18; end: 102b64e37;  */

void FUN_102b64e18(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b64e38; end: 102b64e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b64e38(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef86a0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b64e9c; end: 102b64ea3;  */

void FUN_102b64e9c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b64ea4; end: 102b64f43;  */

void FUN_102b64ea4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b64f44; end: 102b64f63;  */

void FUN_102b64f44(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b64f64; end: 102b64feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b64f64(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef85e8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ef85f0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b64fec);
  (*pcVar2)();
}



/* Entry: 102b64fec; end: 102b650d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b64fec(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef85e8);
  *(undefined **)(unaff_x20 + _DAT_112ef85e8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef85f0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ef85f0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105a3a88;
  func_0x000107c613fc(&UNK_1105a3a88,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102b650d8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102b650d4; end: 102b650df;  */

void FUN_102b650d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b650e0; end: 102b6513f; -[_TtC26ViewfinderScopeGraphBridge41SCViewfinderScopedServicesSaberEntryPoint init] */

void FUN_102b650e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ViewfinderScopeGraphBridge.SCViewfinderScopedServicesSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b6510c);
  (*pcVar1)();
}



/* Entry: 102b65140; end: 102b65177; -[_TtC26ViewfinderScopeGraphBridge41SCViewfinderScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b65140(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef85f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef85e8));
  return;
}



/* Entry: 102b65178; end: 102b6517b;  */

void FUN_102b65178(void)

{
  return;
}



/* Entry: 102b6517c; end: 102b6519b;  */

void FUN_102b6517c(void)

{
  FUN_102b64fec();
  return;
}



/* Entry: 102b6519c; end: 102b65363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6519c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef8630) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8638) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8640) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8648) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8650) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8658) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8660) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8668) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8670) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8678) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8680) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8688) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8690) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8698) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112ef86a0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112ef86a8) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112ef86b0) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112ef86b8) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112ef86c0) = param_19;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b65364; end: 102b653c3; -[_TtC26ViewfinderScopeGraphBridge34ViewfinderScopeGraphBridgeServices init] */

void FUN_102b65364(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ViewfinderScopeGraphBridge.ViewfinderScopeGraphBridgeServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b65390);
  (*pcVar1)();
}



/* Entry: 102b653c4; end: 102b65567; -[_TtC26ViewfinderScopeGraphBridge34ViewfinderScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b653e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b65400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b65420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b65440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b65460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b65480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b654a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b654c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b654e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b654c4) */
/* WARNING: Removing unreachable block (ram,0x000102b654a4) */
/* WARNING: Removing unreachable block (ram,0x000102b65484) */
/* WARNING: Removing unreachable block (ram,0x000102b65464) */
/* WARNING: Removing unreachable block (ram,0x000102b65444) */
/* WARNING: Removing unreachable block (ram,0x000102b65424) */
/* WARNING: Removing unreachable block (ram,0x000102b65404) */
/* WARNING: Removing unreachable block (ram,0x000102b653e4) */
/* WARNING: Removing unreachable block (ram,0x000102b654e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b653c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef8630));
  return;
}



/* Entry: 102b65568; end: 102b6565f;  */

undefined1  [16] FUN_102b65568(void)

{
  return ZEXT816(0x1105a3b30);
}



/* Entry: 102b65660; end: 102b656a3; -[SCViewfinderScopeGraphBridgeSaberEntryPoint end] */

void FUN_102b65660(undefined8 param_1)

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



/* Entry: 102b656a4; end: 102b656d7;  */

void FUN_102b656a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b656d8; end: 102b6577f; -[SCViewfinderScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b65704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b65724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b65744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b65764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b65748) */
/* WARNING: Removing unreachable block (ram,0x000102b65728) */
/* WARNING: Removing unreachable block (ram,0x000102b65708) */
/* WARNING: Removing unreachable block (ram,0x000102b65768) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b656d8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef8718);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef8720));
  return;
}



/* Entry: 102b65780; end: 102b6579f;  */

void FUN_102b65780(void)

{
  func_0x000107c61168(&PTR_PTR_11288ef68);
  return;
}



/* Entry: 102b657a0; end: 102b657e3; -[SCLensProcessingUsageServicesSaberEntryPoint end] */

void FUN_102b657a0(undefined8 param_1)

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



/* Entry: 102b657e4; end: 102b65817;  */

void FUN_102b657e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b65818; end: 102b6586f; -[SCLensProcessingUsageServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b65854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b65858) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b65818(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef8788);
  func_0x000107c61610(param_1 + _DAT_112ef8790);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef8798));
  return;
}



/* Entry: 102b65870; end: 102b6588f;  */

void FUN_102b65870(void)

{
  func_0x000107c61168(&PTR_PTR_11288f060);
  return;
}



/* Entry: 102b65890; end: 102b658d3; -[SCSCCameraCaptureLensProvidingServicesSaberEntryPoint end] */

void FUN_102b65890(undefined8 param_1)

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



/* Entry: 102b658d4; end: 102b65907;  */

void FUN_102b658d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b65908; end: 102b6595f; -[SCSCCameraCaptureLensProvidingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b65944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b65948) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b65908(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef87d0);
  func_0x000107c61610(param_1 + _DAT_112ef87d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef87e0));
  return;
}



/* Entry: 102b65960; end: 102b6597f;  */

void FUN_102b65960(void)

{
  func_0x000107c61168(&PTR_PTR_11288f130);
  return;
}



/* Entry: 102b65980; end: 102b659c3; -[SCSCLensProcessingLensModeServicesSaberEntryPoint end] */

void FUN_102b65980(undefined8 param_1)

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



/* Entry: 102b659c4; end: 102b659f7;  */

void FUN_102b659c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b659f8; end: 102b65a4f; -[SCSCLensProcessingLensModeServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b65a34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b65a38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b659f8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef8818);
  func_0x000107c61610(param_1 + _DAT_112ef8820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef8828));
  return;
}



/* Entry: 102b65a50; end: 102b65a6f;  */

void FUN_102b65a50(void)

{
  func_0x000107c61168(&PTR_PTR_11288f200);
  return;
}



/* Entry: 102b65a70; end: 102b65ab3; -[SCSCViewfinderDataPipelineServicesSaberEntryPoint end] */

void FUN_102b65a70(undefined8 param_1)

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



/* Entry: 102b65ab4; end: 102b65ae7;  */

void FUN_102b65ab4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b65ae8; end: 102b65b3f; -[SCSCViewfinderDataPipelineServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b65b24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b65b28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b65ae8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef8860);
  func_0x000107c61610(param_1 + _DAT_112ef8868);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef8870));
  return;
}



/* Entry: 102b65b40; end: 102b65b5f;  */

void FUN_102b65b40(void)

{
  func_0x000107c61168(&PTR_PTR_11288f2d0);
  return;
}



/* Entry: 102b65b60; end: 102b65ba3; -[SCSCViewfinderDataSourceServicesSaberEntryPoint end] */

void FUN_102b65b60(undefined8 param_1)

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



/* Entry: 102b65ba4; end: 102b65bd7;  */

void FUN_102b65ba4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b65bd8; end: 102b65c2f; -[SCSCViewfinderDataSourceServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b65c14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b65c18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b65bd8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef88a8);
  func_0x000107c61610(param_1 + _DAT_112ef88b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef88b8));
  return;
}



/* Entry: 102b65c30; end: 102b65c4f;  */

void FUN_102b65c30(void)

{
  func_0x000107c61168(&PTR_PTR_11288f3a0);
  return;
}



/* Entry: 102b65c50; end: 102b65c93; -[SCSCViewfinderUIServicesSaberEntryPoint end] */

void FUN_102b65c50(undefined8 param_1)

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



/* Entry: 102b65c94; end: 102b65cc7;  */

void FUN_102b65c94(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b65cc8; end: 102b65d1f; -[SCSCViewfinderUIServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b65d04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b65d08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b65cc8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef88f0);
  func_0x000107c61610(param_1 + _DAT_112ef88f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef8900));
  return;
}



/* Entry: 102b65d20; end: 102b65d3f;  */

void FUN_102b65d20(void)

{
  func_0x000107c61168(&PTR_PTR_11288f470);
  return;
}



/* Entry: 102b65d40; end: 102b65d4b; -[SCLensVenueInternalServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b65d40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8938;
  func_0x000107c61428(param_1 + _DAT_112ef8938,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b65d4c; end: 102b65d57; -[SCLensVenueInternalServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b65d4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8938;
  func_0x000107c61428(param_1 + _DAT_112ef8938,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b65d58; end: 102b65d63; -[SCLensVenueInternalServicesSaberServiceProvider viewfinderScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b65d58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8940;
  func_0x000107c61428(param_1 + _DAT_112ef8940,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b65d64; end: 102b65da7;  */

void FUN_102b65d64(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102b65da8; end: 102b65db3; -[SCLensVenueInternalServicesSaberServiceProvider setViewfinderScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b65da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8940;
  func_0x000107c61428(param_1 + _DAT_112ef8940,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b65db4; end: 102b65e07;  */

void FUN_102b65db4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b65e08; end: 102b6601b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b65e08(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102b649b0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112ef8638);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ef8948);
      *(long *)(unaff_x20 + _DAT_112ef8948) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "ViewfinderScopeGraphBridge/SCLensVenueInternalServicesSaberServiceProvider.swift"
                      ,0x50,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b65f34);
  (*pcVar1)();
}



/* Entry: 102b6601c; end: 102b6604f; -[SCLensVenueInternalServicesSaberServiceProvider provide] */

void FUN_102b6601c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b65e08();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b66050; end: 102b66083; -[SCLensVenueInternalServicesSaberServiceProvider __safeProvide] */

void FUN_102b66050(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102b65f34();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b66084; end: 102b660c7; -[SCLensVenueInternalServicesSaberServiceProvider end] */

void FUN_102b66084(undefined8 param_1)

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



/* Entry: 102b660c8; end: 102b6625f;  */

void FUN_102b660c8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0a9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f5650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ViewfinderScopeGraphBridge/SCLensVenueInternalServicesSaberServiceProvider.swift"
                            ,0x50,2,0x42,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b66260);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a5b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102b66260; end: 102b6630b; -[SCLensVenueInternalServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102b66260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b660c8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b6630c; end: 102b6637f; -[SCLensVenueInternalServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6630c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef8938,0);
  func_0x000107c61614(param_1 + _DAT_112ef8940,0);
  *(undefined8 *)(param_1 + _DAT_112ef8948) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b66380; end: 102b663b3;  */

void FUN_102b66380(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b663b4; end: 102b663fb; -[SCLensVenueInternalServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b663b4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef8938);
  func_0x000107c61610(param_1 + _DAT_112ef8940);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef8948));
  return;
}



/* Entry: 102b663fc; end: 102b6641b;  */

void FUN_102b663fc(void)

{
  func_0x000107c61168(&PTR_PTR_112ef8990);
  return;
}



/* Entry: 102b6641c; end: 102b66547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b6641c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000100b98be8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112ef8640);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ef8a08);
      *(long *)(unaff_x20 + _DAT_112ef8a08) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "ViewfinderScopeGraphBridge/SCLensVenueServicesSaberServiceProvider.swift",
                      0x48,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b66548);
  (*pcVar1)();
}



/* Entry: 102b66548; end: 102b6657b; -[SCLensVenueServicesSaberServiceProvider provide] */

void FUN_102b66548(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b6641c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b6657c; end: 102b665bf; -[SCLensVenueServicesSaberServiceProvider end] */

void FUN_102b6657c(undefined8 param_1)

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



/* Entry: 102b665c0; end: 102b665f3;  */

void FUN_102b665c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b665f4; end: 102b6663b; -[SCLensVenueServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b665f4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef89f8);
  func_0x000107c61610(param_1 + _DAT_112ef8a00);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef8a08));
  return;
}



/* Entry: 102b6663c; end: 102b6665b;  */

void FUN_102b6663c(void)

{
  func_0x000107c61168(&PTR_PTR_112ef8a50);
  return;
}



/* Entry: 102b6665c; end: 102b66787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b6665c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000100ba0014();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112ef8658);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ef8ac8);
      *(long *)(unaff_x20 + _DAT_112ef8ac8) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "ViewfinderScopeGraphBridge/SCSCLensProcessingCarouselServicesSaberServiceProvider.swift"
                      ,0x57,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b66788);
  (*pcVar1)();
}



/* Entry: 102b66788; end: 102b667bb; -[SCSCLensProcessingCarouselServicesSaberServiceProvider provide] */

void FUN_102b66788(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b6665c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b667bc; end: 102b667ff; -[SCSCLensProcessingCarouselServicesSaberServiceProvider end] */

void FUN_102b667bc(undefined8 param_1)

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


