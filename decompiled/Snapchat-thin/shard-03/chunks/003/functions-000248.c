/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027b968c; end: 1027b969b;  */

void FUN_1027b968c(undefined8 *param_1)

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
  puVar1 = &UNK_11054d990;
  func_0x000107c613fc(&UNK_11054d990,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1027b63c0;
  func_0x00010058fa64(FUN_1027b63c0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027b969c; end: 1027b983b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1027b969c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  lVar3 = param_1;
  func_0x000107c3f860();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_5;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112ebf858) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112ebf860) = param_6;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027b983c);
  (*pcVar2)();
}



/* Entry: 1027b983c; end: 1027b989b; -[_TtC36ChatCustomizationHubScopeGraphBridge51ChatCustomizationHubScopeGraphBridgeSaberEntryPoint init] */

void FUN_1027b983c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCustomizationHubScopeGraphBridge.ChatCustomizationHubScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b9868);
  (*pcVar1)();
}



/* Entry: 1027b989c; end: 1027b98d3; -[_TtC36ChatCustomizationHubScopeGraphBridge51ChatCustomizationHubScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027b98b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027b98bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b989c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebf858));
  return;
}



/* Entry: 1027b98d4; end: 1027b98fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b98d4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ebf860),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ebf858));
  return;
}



/* Entry: 1027b98fc; end: 1027b991b;  */

void FUN_1027b98fc(void)

{
  func_0x000107c61168(&PTR_PTR_112862488);
  return;
}



/* Entry: 1027b991c; end: 1027b997f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1027b991c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ebf9a8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1027b9980; end: 1027b9987;  */

void FUN_1027b9980(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1027b9988; end: 1027b9a27;  */

void FUN_1027b9988(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027b9a28; end: 1027b9a47;  */

void FUN_1027b9a28(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1027b9a48; end: 1027b9acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027b9a48(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebf960) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ebf968);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027b9ad0);
  (*pcVar2)();
}



/* Entry: 1027b9ad0; end: 1027b9bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027b9ad0(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ebf960);
  *(undefined **)(unaff_x20 + _DAT_112ebf960) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ebf968);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ebf968))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11054dd88;
  func_0x000107c613fc(&UNK_11054dd88,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1027b9bbc,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1027b9bb8; end: 1027b9bc3;  */

void FUN_1027b9bb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1027b9bc4; end: 1027b9c23; -[_TtC36ChatCustomizationHubScopeGraphBridge49ChatCustomizationHubScopedServicesSaberEntryPoint init] */

void FUN_1027b9bc4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCustomizationHubScopeGraphBridge.ChatCustomizationHubScopedServicesSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b9bf0);
  (*pcVar1)();
}



/* Entry: 1027b9c24; end: 1027b9c5b; -[_TtC36ChatCustomizationHubScopeGraphBridge49ChatCustomizationHubScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b9c24(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ebf968));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebf960));
  return;
}



/* Entry: 1027b9c5c; end: 1027b9c5f;  */

void FUN_1027b9c5c(void)

{
  return;
}



/* Entry: 1027b9c60; end: 1027b9c7f;  */

void FUN_1027b9c60(void)

{
  FUN_1027b9ad0();
  return;
}



/* Entry: 1027b9c80; end: 1027b9c9f;  */

void FUN_1027b9c80(void)

{
  func_0x000107c61168(&PTR_PTR_112862550);
  return;
}



/* Entry: 1027b9ca0; end: 1027b9e37;  */

void FUN_1027b9ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebf998,&UNK_10dadcf20);
  puVar1 = &UNK_11054ddd0;
  func_0x000107c613fc(&UNK_11054ddd0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1027b9e38,puVar1);
  return;
}



/* Entry: 1027b9e38; end: 1027b9e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b9e38(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  lVar6 = lVar1;
  FUN_1027ba0b0();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112ebf9a0) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112ebf9a8) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112ebf9b0) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112ebf9b8) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112ebf9c0) = uVar9;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_60,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1027b9e48; end: 1027b9ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b9e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebf9a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebf9a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebf9b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ebf9b8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ebf9c0) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027b9ee4; end: 1027b9f43; -[_TtC36ChatCustomizationHubScopeGraphBridge44ChatCustomizationHubScopeGraphBridgeServices init] */

void FUN_1027b9ee4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCustomizationHubScopeGraphBridge.ChatCustomizationHubScopeGraphBridgeServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b9f10);
  (*pcVar1)();
}



/* Entry: 1027b9f44; end: 1027b9fab; -[_TtC36ChatCustomizationHubScopeGraphBridge44ChatCustomizationHubScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027b9f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b9f80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027b9f64) */
/* WARNING: Removing unreachable block (ram,0x0001027b9f84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b9f44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebf9a8));
  return;
}



/* Entry: 1027b9fac; end: 1027ba0af; -[ChatCustomizationHubScope chatCustomizationHubScopeGraphBridgeServices] */

void FUN_1027b9fac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001027b9fe0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027ba0b0; end: 1027ba0cf;  */

void FUN_1027ba0b0(void)

{
  func_0x000107c61168(&PTR_PTR_112862618);
  return;
}



/* Entry: 1027ba0d0; end: 1027ba15b; -[ChatCustomizationHubScope setChatCustomizationHubScopeGraphBridgeServices:] */

void FUN_1027ba0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112ebf9c8,auStack_48,0x20,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61188();
  func_0x000107c614a8(auStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1027ba15c; end: 1027ba19b;  */

void FUN_1027ba15c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027ba598,0);
  return;
}



/* Entry: 1027ba19c; end: 1027ba1a7;  */

void FUN_1027ba19c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027ba590,param_1);
  return;
}



/* Entry: 1027ba1a8; end: 1027ba1e7;  */

void FUN_1027ba1a8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027ba594,0);
  return;
}



/* Entry: 1027ba1e8; end: 1027ba1f3;  */

void FUN_1027ba1e8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027ba588,param_1);
  return;
}



/* Entry: 1027ba1f4; end: 1027ba233;  */

void FUN_1027ba1f4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027ba59c,0);
  return;
}



/* Entry: 1027ba234; end: 1027ba23f;  */

void FUN_1027ba234(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027ba58c,param_1);
  return;
}



/* Entry: 1027ba240; end: 1027ba2cb;  */

void FUN_1027ba240(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027ba5a0,0);
  return;
}



/* Entry: 1027ba2cc; end: 1027ba2d7;  */

void FUN_1027ba2cc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1027ba330,param_1);
  return;
}



/* Entry: 1027ba2d8; end: 1027ba32f;  */

void FUN_1027ba2d8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1027ba330; end: 1027ba363;  */

void FUN_1027ba330(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1027ba364; end: 1027ba36b;  */

undefined8 FUN_1027ba364(void)

{
  return 0x1b;
}



/* Entry: 1027ba36c; end: 1027ba4a3;  */

void FUN_1027ba36c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11054ddf8;
  func_0x000107c613fc(&UNK_11054ddf8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1027ba4a4,puVar1);
  return;
}



/* Entry: 1027ba4a4; end: 1027ba5a3;  */

void FUN_1027ba4a4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar3 = uStack_38;
  func_0x000100083b20(&uStack_38);
  func_0x000107c53360(uVar3);
  func_0x000107c61170(uStack_38);
  puVar1 = &UNK_11054df90;
  func_0x000107c613fc(&UNK_11054df90,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar3 = 0x1027ba57c;
  func_0x00010058fa64(0x1027ba57c,puVar1,uVar2);
  *param_1 = uVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027ba5a4; end: 1027ba5eb; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ba5a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebfa20;
  func_0x000107c61428(param_1 + _DAT_112ebfa20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027ba5ec; end: 1027ba643; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ba5ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebfa20;
  func_0x000107c61428(param_1 + _DAT_112ebfa20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027ba644; end: 1027ba68b; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint plusSubscribeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ba644(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebfa28;
  func_0x000107c61428(param_1 + _DAT_112ebfa28,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027ba68c; end: 1027ba697; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint setPlusSubscribeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ba68c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebfa28;
  func_0x000107c61428(param_1 + _DAT_112ebfa28,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027ba698; end: 1027ba6df; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint sCGenerativeContentReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ba698(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebfa30;
  func_0x000107c61428(param_1 + _DAT_112ebfa30,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027ba6e0; end: 1027ba6eb; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint setSCGenerativeContentReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ba6e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebfa30;
  func_0x000107c61428(param_1 + _DAT_112ebfa30,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027ba6ec; end: 1027ba733; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint sCSafetyReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ba6ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebfa38;
  func_0x000107c61428(param_1 + _DAT_112ebfa38,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027ba734; end: 1027ba73f; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint setSCSafetyReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ba734(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebfa38;
  func_0x000107c61428(param_1 + _DAT_112ebfa38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027ba740; end: 1027ba787; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ba740(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebfa40;
  func_0x000107c61428(param_1 + _DAT_112ebfa40,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027ba788; end: 1027ba793; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ba788(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebfa40;
  func_0x000107c61428(param_1 + _DAT_112ebfa40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027ba794; end: 1027ba7db; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint chatCustomizationHubScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ba794(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebfa48;
  func_0x000107c61428(param_1 + _DAT_112ebfa48,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027ba7dc; end: 1027ba7e7; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint setChatCustomizationHubScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ba7dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebfa48;
  func_0x000107c61428(param_1 + _DAT_112ebfa48,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027ba7e8; end: 1027ba847;  */

void FUN_1027ba7e8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1027ba848; end: 1027babab;  */

/* WARNING: Possible PIC construction at 0x0001027baa78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027baa88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027baa98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027baab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027baac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027baad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027baaf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bab70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bab80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bab50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bab30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bab20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027bab34) */
/* WARNING: Removing unreachable block (ram,0x0001027bab54) */
/* WARNING: Removing unreachable block (ram,0x0001027bab84) */
/* WARNING: Removing unreachable block (ram,0x0001027bab74) */
/* WARNING: Removing unreachable block (ram,0x0001027baad8) */
/* WARNING: Removing unreachable block (ram,0x0001027baac8) */
/* WARNING: Removing unreachable block (ram,0x0001027baab8) */
/* WARNING: Removing unreachable block (ram,0x0001027baa9c) */
/* WARNING: Removing unreachable block (ram,0x0001027baa8c) */
/* WARNING: Removing unreachable block (ram,0x0001027baa7c) */
/* WARNING: Removing unreachable block (ram,0x0001027bab24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ba848(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c4eaa8();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50dd0();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c51240();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c5e1d0();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          func_0x000107c3f864();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            lVar6 = 0;
            FUN_1027b98fc();
            lVar4 = lVar6;
            func_0x000107c610f8();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            lVar5 = lVar3;
            func_0x000107c3f860();
            func_0x000107c61180();
            if (lVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1027babac);
              (*pcVar2)();
            }
            func_0x000100083b20(&uStack_68);
            uVar1 = uStack_68;
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uVar1);
            func_0x000100083b20(&uStack_68);
            uVar1 = uStack_68;
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uVar1);
            func_0x000100083b20(&uStack_68);
            uVar1 = uStack_68;
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uVar1);
            func_0x000100083b20(&uStack_68);
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uStack_68);
            *(long *)(lVar4 + _DAT_112ebf858) = lVar5;
            *(long *)(lVar4 + _DAT_112ebf860) = unaff_x20;
            lStack_80 = lVar4;
            lStack_78 = lVar6;
            func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1027babac; end: 1027babd3; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1027babac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1027ba848();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027babd4; end: 1027bac17; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint end] */

void FUN_1027babd4(undefined8 param_1)

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



/* Entry: 1027bac18; end: 1027baf5f;  */

void FUN_1027bac18(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000019;
    if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10dfbf0)) ||
       (func_0x000107c605b8(0xd000000000000019,0x800000010ef20410,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57598();
    }
    else {
      uVar2 = 0xd000000000000025;
      if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef1002a90)) ||
         (func_0x000107c605b8(0xd000000000000025,0x800000010effd570,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58378();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef0fa21e0)) ||
           (func_0x000107c605b8(0xd00000000000001a,0x800000010f05de20,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c587e8();
        }
        else {
          if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) {
            uVar2 = 0xd000000000000017;
            func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000033;
              if (((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0f42890)) &&
                 (func_0x000107c605b8(0xd000000000000033,0x800000010f0bd770,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "ChatCustomizationHubScopeGraphBridge/SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint.swift"
                                    ,0x60,2,0x60,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1027baf60);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53364();
              goto LAB_1027baca4;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5a68c();
        }
      }
    }
  }
LAB_1027baca4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1027baf60; end: 1027bb00b; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1027baf60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1027bac18(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1027bb00c; end: 1027bb0a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bb00c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112ebfa20,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ebfa28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfa30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfa38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfa40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfa48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfa50) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027bb0a8; end: 1027bb0c7; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint init] */

void FUN_1027bb0a8(void)

{
  FUN_1027bb00c();
  return;
}



/* Entry: 1027bb0c8; end: 1027bb0fb;  */

void FUN_1027bb0c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027bb0fc; end: 1027bb183; -[SCChatCustomizationHubScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027bb128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bb148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bb168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027bb14c) */
/* WARNING: Removing unreachable block (ram,0x0001027bb12c) */
/* WARNING: Removing unreachable block (ram,0x0001027bb16c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bb0fc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ebfa20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebfa28));
  return;
}



/* Entry: 1027bb184; end: 1027bb1a3;  */

void FUN_1027bb184(void)

{
  func_0x000107c61168(&PTR_PTR_1128626f8);
  return;
}



/* Entry: 1027bb1a4; end: 1027bb1af; -[SCSCGenerativeChatWallpapersServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bb1a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebfa80;
  func_0x000107c61428(param_1 + _DAT_112ebfa80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027bb1b0; end: 1027bb1bb; -[SCSCGenerativeChatWallpapersServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bb1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebfa80;
  func_0x000107c61428(param_1 + _DAT_112ebfa80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027bb1bc; end: 1027bb1c7; -[SCSCGenerativeChatWallpapersServicesSaberServiceProvider chatCustomizationHubScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bb1bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebfa88;
  func_0x000107c61428(param_1 + _DAT_112ebfa88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027bb1c8; end: 1027bb20b;  */

void FUN_1027bb1c8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1027bb20c; end: 1027bb217; -[SCSCGenerativeChatWallpapersServicesSaberServiceProvider setChatCustomizationHubScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bb20c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebfa88;
  func_0x000107c61428(param_1 + _DAT_112ebfa88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027bb218; end: 1027bb26b;  */

void FUN_1027bb218(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027bb26c; end: 1027bb47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1027bb26c(void)

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
    func_0x000107c3f860();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001027b99ac();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112ebf9a8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ebfa90);
      *(long *)(unaff_x20 + _DAT_112ebfa90) = lVar4;
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
                      "ChatCustomizationHubScopeGraphBridge/SCSCGenerativeChatWallpapersServicesSaberServiceProvider.swift"
                      ,99,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027bb398);
  (*pcVar1)();
}



/* Entry: 1027bb480; end: 1027bb4b3; -[SCSCGenerativeChatWallpapersServicesSaberServiceProvider provide] */

void FUN_1027bb480(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1027bb26c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027bb4b4; end: 1027bb4e7; -[SCSCGenerativeChatWallpapersServicesSaberServiceProvider __safeProvide] */

void FUN_1027bb4b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001027bb398();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027bb4e8; end: 1027bb52b; -[SCSCGenerativeChatWallpapersServicesSaberServiceProvider end] */

void FUN_1027bb4e8(undefined8 param_1)

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



/* Entry: 1027bb52c; end: 1027bb6c3;  */

void FUN_1027bb52c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0f42770)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f0bd890,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ChatCustomizationHubScopeGraphBridge/SCSCGenerativeChatWallpapersServicesSaberServiceProvider.swift"
                            ,99,2,0x56,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1027bb6c4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53360();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1027bb6c4; end: 1027bb76f; -[SCSCGenerativeChatWallpapersServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1027bb6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1027bb52c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1027bb770; end: 1027bb7e3; -[SCSCGenerativeChatWallpapersServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bb770(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ebfa80,0);
  func_0x000107c61614(param_1 + _DAT_112ebfa88,0);
  *(undefined8 *)(param_1 + _DAT_112ebfa90) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027bb7e4; end: 1027bb817;  */

void FUN_1027bb7e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027bb818; end: 1027bb85f; -[SCSCGenerativeChatWallpapersServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bb818(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ebfa80);
  func_0x000107c61610(param_1 + _DAT_112ebfa88);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebfa90));
  return;
}



/* Entry: 1027bb860; end: 1027bb87f;  */

void FUN_1027bb860(void)

{
  func_0x000107c61168(&PTR_PTR_112ebfad8);
  return;
}



/* Entry: 1027bb880; end: 1027bb8c7; -[SCChatCustomizationHubScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bb880(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebfb40;
  func_0x000107c61428(param_1 + _DAT_112ebfb40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027bb8c8; end: 1027bb91f; -[SCChatCustomizationHubScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bb8c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebfb40;
  func_0x000107c61428(param_1 + _DAT_112ebfb40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027bb920; end: 1027bb9f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bb920(undefined8 param_1,long param_2)

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
    FUN_1027b9c80();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ebf960) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027bb9f8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ebf968);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ebfb48);
    *(long **)(unaff_x20 + _DAT_112ebfb48) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1027bb9f8; end: 1027bba1f; -[SCChatCustomizationHubScopedServicesSaberEntryPoint begin] */

void FUN_1027bb9f8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1027bb920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027bba20; end: 1027bbb97;  */

/* WARNING: Possible PIC construction at 0x0001027bba88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bbb20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027bba8c) */
/* WARNING: Removing unreachable block (ram,0x0001027bbb24) */
/* WARNING: Removing unreachable block (ram,0x0001027bbb3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bba20(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ebfb48);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1027bbb98; end: 1027bbb9f;  */

void FUN_1027bbb98(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1027bbba0; end: 1027bbbd3; -[SCChatCustomizationHubScopedServicesSaberEntryPoint end] */

void FUN_1027bbba0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1027bba20();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027bbbd4; end: 1027bbcf3;  */

void FUN_1027bbbd4(long param_1,long param_2,long param_3)

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
                        "ChatCustomizationHubScopeGraphBridge/SCChatCustomizationHubScopedServicesSaberEntryPoint.swift"
                        ,0x5e,2,0x4c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027bbcf4);
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



/* Entry: 1027bbcf4; end: 1027bbd9f; -[SCChatCustomizationHubScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1027bbcf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1027bbbd4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1027bbda0; end: 1027bbdff; -[SCChatCustomizationHubScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bbda0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ebfb40,0);
  *(undefined8 *)(param_1 + _DAT_112ebfb48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027bbe00; end: 1027bbe33;  */

void FUN_1027bbe00(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027bbe34; end: 1027bbe6b; -[SCChatCustomizationHubScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bbe34(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ebfb40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebfb48));
  return;
}



/* Entry: 1027bbe6c; end: 1027bbe8b;  */

void FUN_1027bbe6c(void)

{
  func_0x000107c61168(&PTR_PTR_112862828);
  return;
}



/* Entry: 1027bbe8c; end: 1027bc4cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bbe8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebfb78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfb80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfb88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfb90) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfb98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfba0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfba8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfbb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfbb8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfbc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfbc8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfbd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfbd8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfbe0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfbe8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfbf0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfbf8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc00) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc08) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc10) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc18) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc20) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc28) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc30) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc38) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc40) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc48) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc50) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc58) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc60) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc68) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc70) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc78) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc80) = param_26;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc88) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc90) = param_27;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfc98) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfca0) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfca8) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfcb0) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfcb8) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_112ebfcc0) = param_25;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027bc4d0; end: 1027bc53f;  */

/* WARNING: Possible PIC construction at 0x0001027bcd20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bcd58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bcd94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bcf04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027bcd98) */
/* WARNING: Removing unreachable block (ram,0x0001027bcd5c) */
/* WARNING: Removing unreachable block (ram,0x0001027bcd24) */
/* WARNING: Removing unreachable block (ram,0x0001027bcf24) */
/* WARNING: Removing unreachable block (ram,0x0001027bcd44) */
/* WARNING: Removing unreachable block (ram,0x0001027bcf08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bc4d0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112ebfbf0)) +
              0x98))();
  if (param_1 == 0) {
    puVar3 = PTR_PTR_1126aaf78;
    func_0x000107c610f8(PTR_PTR_1126aaf78);
    func_0x000107c453e4();
    plVar1 = (long *)(*(long *)(unaff_x20 + _DAT_112ebfbf0) + _DAT_1130733e0);
    param_1 = *plVar1;
    lVar2 = plVar1[1];
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(param_1,lVar2);
    func_0x000107c6142c(lVar2);
    func_0x000107c53964(puVar3);
  }
  else {
    FUN_1027bc540();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027bc540; end: 1027bcc9f;  */

/* WARNING: Possible PIC construction at 0x0001027bc598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bc5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bc5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bc5e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bc624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bc644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bc800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bc82c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bc874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bc9dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bca84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bcaac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bcad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bcb1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bcb44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bcb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bcb70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bcb80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bcc78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bcc58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bcc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be14c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be1d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027be2a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027be218) */
/* WARNING: Removing unreachable block (ram,0x0001027be1d8) */
/* WARNING: Removing unreachable block (ram,0x0001027be19c) */
/* WARNING: Removing unreachable block (ram,0x0001027be150) */
/* WARNING: Removing unreachable block (ram,0x0001027bcc6c) */
/* WARNING: Removing unreachable block (ram,0x0001027bcb84) */
/* WARNING: Removing unreachable block (ram,0x0001027bcc78) */
/* WARNING: Removing unreachable block (ram,0x0001027bcb74) */
/* WARNING: Removing unreachable block (ram,0x0001027bcb64) */
/* WARNING: Removing unreachable block (ram,0x0001027bcb48) */
/* WARNING: Removing unreachable block (ram,0x0001027bcadc) */
/* WARNING: Removing unreachable block (ram,0x0001027bcb20) */
/* WARNING: Removing unreachable block (ram,0x0001027bcb0c) */
/* WARNING: Removing unreachable block (ram,0x0001027bcab0) */
/* WARNING: Removing unreachable block (ram,0x0001027bca88) */
/* WARNING: Removing unreachable block (ram,0x0001027bcac8) */
/* WARNING: Removing unreachable block (ram,0x0001027bcaa0) */
/* WARNING: Removing unreachable block (ram,0x0001027bcaa4) */
/* WARNING: Removing unreachable block (ram,0x0001027bc9e0) */
/* WARNING: Removing unreachable block (ram,0x0001027bc878) */
/* WARNING: Removing unreachable block (ram,0x0001027bc830) */
/* WARNING: Removing unreachable block (ram,0x0001027bc804) */
/* WARNING: Removing unreachable block (ram,0x0001027bc648) */
/* WARNING: Removing unreachable block (ram,0x0001027bc64c) */
/* WARNING: Removing unreachable block (ram,0x0001027bc770) */
/* WARNING: Removing unreachable block (ram,0x0001027bc778) */
/* WARNING: Removing unreachable block (ram,0x0001027bcc1c) */
/* WARNING: Removing unreachable block (ram,0x0001027bcc24) */
/* WARNING: Removing unreachable block (ram,0x0001027bcc5c) */
/* WARNING: Removing unreachable block (ram,0x0001027bcc48) */
/* WARNING: Removing unreachable block (ram,0x0001027bc794) */
/* WARNING: Removing unreachable block (ram,0x0001027bc628) */
/* WARNING: Removing unreachable block (ram,0x0001027bcbbc) */
/* WARNING: Removing unreachable block (ram,0x0001027bcc7c) */
/* WARNING: Removing unreachable block (ram,0x0001027bcbe8) */
/* WARNING: Removing unreachable block (ram,0x0001027bc62c) */
/* WARNING: Removing unreachable block (ram,0x0001027bc5ec) */
/* WARNING: Removing unreachable block (ram,0x0001027bc5f4) */
/* WARNING: Removing unreachable block (ram,0x0001027bc5d8) */
/* WARNING: Removing unreachable block (ram,0x0001027bc5bc) */
/* WARNING: Removing unreachable block (ram,0x0001027bc59c) */
/* WARNING: Removing unreachable block (ram,0x0001027bcb94) */
/* WARNING: Removing unreachable block (ram,0x0001027be110) */
/* WARNING: Removing unreachable block (ram,0x0001027be164) */
/* WARNING: Removing unreachable block (ram,0x0001027be1dc) */
/* WARNING: Removing unreachable block (ram,0x0001027be200) */
/* WARNING: Removing unreachable block (ram,0x0001027be230) */
/* WARNING: Removing unreachable block (ram,0x0001027be214) */
/* WARNING: Removing unreachable block (ram,0x0001027be174) */
/* WARNING: Removing unreachable block (ram,0x0001027be1b4) */
/* WARNING: Removing unreachable block (ram,0x0001027be18c) */
/* WARNING: Removing unreachable block (ram,0x0001027be190) */
/* WARNING: Removing unreachable block (ram,0x0001027be14c) */
/* WARNING: Removing unreachable block (ram,0x0001027bc5a0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x0001027be2ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bc540(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ebfcc0);
  func_0x000107c42e5c(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1027bcca0; end: 1027bcf27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bcca0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long unaff_x20;
  long lVar12;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar9 = &puStack_80;
  ppuVar10 = &puStack_80;
  ppuVar11 = &puStack_80;
  puVar5 = PTR_PTR_1126aaf78;
  func_0x000107c610f8(PTR_PTR_1126aaf78);
  func_0x000107c453e4();
  lVar12 = *(long *)(unaff_x20 + _DAT_112ebfbf0);
  puVar1 = (undefined8 *)(lVar12 + _DAT_1130733e0);
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar6,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c53964(puVar5);
  func_0x000107c61170(uVar6);
  lVar12 = *(long *)(lVar12 + _DAT_1130733e8);
  func_0x000100c6f294();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c59578(puVar5);
    func_0x000107c61170(lVar12);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c545e8(puVar5);
    func_0x000107c61170(puVar7);
    puVar7 = &UNK_11054e0c0;
    puVar8 = puVar7;
    func_0x000107c613fc(&UNK_11054e0c0,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_1027c0e04;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = (code *)&UNK_1000f6b44;
    puStack_68 = &UNK_11054e150;
    puStack_58 = puVar8;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c56d18(puVar5);
    func_0x000107c60bd0(ppuVar9);
    puVar8 = puVar7;
    func_0x000107c613fc(&UNK_11054e0c0,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    pcStack_60 = FUN_1027c0e1c;
    puStack_80 = puVar3;
    uStack_78 = 0x42000000;
    pcStack_70 = (code *)&UNK_1000f6b44;
    puStack_68 = &UNK_11054e178;
    puStack_58 = puVar8;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c56e2c(puVar5);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c613fc(&UNK_11054e0c0,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    pcStack_60 = (code *)0x1027c0e24;
    puStack_80 = puVar3;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1027bd694;
    puStack_68 = &UNK_11054e1a0;
    puStack_58 = puVar7;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c55b1c(puVar5);
    func_0x000107c60bd0(ppuVar11);
    FUN_1027bd6e4(puVar5);
    func_0x000107c61170(puVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1027bcf28);
  (*pcVar4)();
}



/* Entry: 1027bcf28; end: 1027bcf7b;  */

void FUN_1027bcf28(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1027bcf7c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1027bcf7c; end: 1027bd3c7;  */

/* WARNING: Possible PIC construction at 0x0001027bcfbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd0a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd1c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd2b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd2c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd2e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd3a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd3b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027bd3a8) */
/* WARNING: Removing unreachable block (ram,0x0001027bd398) */
/* WARNING: Removing unreachable block (ram,0x0001027bd320) */
/* WARNING: Removing unreachable block (ram,0x0001027bd2ec) */
/* WARNING: Removing unreachable block (ram,0x0001027bd2c8) */
/* WARNING: Removing unreachable block (ram,0x0001027bd2b8) */
/* WARNING: Removing unreachable block (ram,0x0001027bd22c) */
/* WARNING: Removing unreachable block (ram,0x0001027bd200) */
/* WARNING: Removing unreachable block (ram,0x0001027bd1c8) */
/* WARNING: Removing unreachable block (ram,0x0001027bd19c) */
/* WARNING: Removing unreachable block (ram,0x0001027bd1e8) */
/* WARNING: Removing unreachable block (ram,0x0001027bd1ec) */
/* WARNING: Removing unreachable block (ram,0x0001027bd1b0) */
/* WARNING: Removing unreachable block (ram,0x0001027bd164) */
/* WARNING: Removing unreachable block (ram,0x0001027bd14c) */
/* WARNING: Removing unreachable block (ram,0x0001027bd11c) */
/* WARNING: Removing unreachable block (ram,0x0001027bd184) */
/* WARNING: Removing unreachable block (ram,0x0001027bd188) */
/* WARNING: Removing unreachable block (ram,0x0001027bd130) */
/* WARNING: Removing unreachable block (ram,0x0001027bd0c4) */
/* WARNING: Removing unreachable block (ram,0x0001027bd0ac) */
/* WARNING: Removing unreachable block (ram,0x0001027bcfc0) */
/* WARNING: Removing unreachable block (ram,0x0001027bd3b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bcf7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ebfc90);
  lVar3 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112ebfbe0);
      if ((lVar3 == 0) || (lVar2 = *(long *)(unaff_x20 + _DAT_112ebfb78), lVar2 == 0)) {
        return;
      }
      puVar1 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c4807c(puVar1,param_2,lVar2,1);
      puVar1 = PTR_PTR_1126b2bf8;
      func_0x000107c610f8(PTR_PTR_1126b2bf8);
      func_0x000107c453e4();
      func_0x000107c427c0();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c559a4(puVar1,param_2,0);
      }
      else {
        func_0x000107c4a8c4();
        func_0x000107c61180();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1027bd3c8; end: 1027bd443;  */

void FUN_1027bd3c8(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = auStack_38;
  func_0x000107c61428(param_2 + 0x10,puVar1,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 == 0) {
      puVar1 = (undefined1 *)0x0;
    }
    else {
      func_0x000107c5faec(param_1);
    }
    FUN_1027bd444();
    func_0x000107c61170(param_2);
    func_0x000107c6142c(puVar1);
  }
  return;
}



/* Entry: 1027bd444; end: 1027bd693;  */

/* WARNING: Possible PIC construction at 0x0001027bd4c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027bd670: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027bd654) */
/* WARNING: Removing unreachable block (ram,0x0001027bd578) */
/* WARNING: Removing unreachable block (ram,0x0001027bd57c) */
/* WARNING: Removing unreachable block (ram,0x0001027bd664) */
/* WARNING: Removing unreachable block (ram,0x0001027bd5a8) */
/* WARNING: Removing unreachable block (ram,0x0001027bd62c) */
/* WARNING: Removing unreachable block (ram,0x0001027bd5f0) */
/* WARNING: Removing unreachable block (ram,0x0001027bd630) */
/* WARNING: Removing unreachable block (ram,0x0001027bd554) */
/* WARNING: Removing unreachable block (ram,0x0001027bd604) */
/* WARNING: Removing unreachable block (ram,0x0001027bd558) */
/* WARNING: Removing unreachable block (ram,0x0001027bd538) */
/* WARNING: Removing unreachable block (ram,0x0001027bd4c8) */
/* WARNING: Removing unreachable block (ram,0x0001027bd4e0) */
/* WARNING: Removing unreachable block (ram,0x0001027bd674) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027bd444(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112ebfbe0);
  if ((lVar3 != 0) && (lVar2 = *(long *)(unaff_x20 + _DAT_112ebfb78), lVar2 != 0)) {
    func_0x000107c61174();
    func_0x000107c61174(lVar3);
    lVar3 = lVar2;
    func_0x000107c4f078();
    func_0x000107c61180();
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ebfca0);
    func_0x000107c4141c(uVar1);
    func_0x000107c61180();
    func_0x000107c41414();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 1027bd694; end: 1027bd6e3;  */

void FUN_1027bd694(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}


