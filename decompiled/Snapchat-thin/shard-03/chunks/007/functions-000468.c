/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102bae184; end: 102bae1d7;  */

void FUN_102bae184(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102bae1d8; end: 102bae213;  */

void FUN_102bae1d8(undefined8 *param_1,undefined8 param_2)

{
  FUN_102bae214();
  func_0x0001000a7f38("SCContextRepliesSubscribeUpsellScopeInitializationPluginRegistryServiceProvider"
                      ,0x4f,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102bae214; end: 102bae3ff;  */

void FUN_102bae214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d320;
  ppuVar4 = &PTR_DAT_113066a00;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112efc3f8;
  func_0x0001000285a8(0x112efc3f8,&UNK_10db2d880);
  func_0x0001000a6ee8(&UNK_1105a9fe0,
                      "ContextRepliesSubscribeUpsellEntryPointWrapperScopeInitializationPluginKey",
                      0x4a,2,FUN_102bae474,param_1,uVar2,&UNK_1105a9fe0,&PTR_DAT_112efc320);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1105aa030;
  func_0x000107c613fc(&UNK_1105aa030,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105aa2e8,
                      "ContextRepliesUpsellScopeGraphBridgeScopeInitializationPluginKey",0x40,2,
                      FUN_102bae47c,puVar3,uVar2,&UNK_1105aa2e8,&PTR_DAT_112efc498);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1105aa058;
  func_0x000107c613fc(&UNK_1105aa058,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105a9e50,
                      "SCContextRepliesSubscribeUpsellScopedServicesScopeInitializationPluginKey",
                      0x49,2,FUN_102bae564,puVar3,uVar2,&UNK_1105a9e50,&PTR_DAT_112efc2a0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112efc400;
  func_0x0001000285a8(0x112efc400,&UNK_10db2d888);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 102bae400; end: 102bae473;  */

void FUN_102bae400(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102bae5a0;
  func_0x0001000823a8(0x102bae5a0,param_3);
  func_0x000100082720("ContextRepliesSubscribeUpsellEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102bae474; end: 102bae47b;  */

void FUN_102bae474(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102bae5a0;
  func_0x0001000823a8();
  func_0x000100082720("ContextRepliesSubscribeUpsellEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102bae47c; end: 102bae4bb;  */

void FUN_102bae47c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000102baee0c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ContextRepliesUpsellScopeGraphBridgeScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 102bae4bc; end: 102bae563;  */

void FUN_102bae4bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105aa080;
  func_0x000107c613fc(&UNK_1105aa080,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102bae598;
  func_0x0001000823a8(FUN_102bae598,puVar1);
  func_0x000100082720("SCContextRepliesSubscribeUpsellScopedServicesScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102bae564; end: 102bae56b;  */

void FUN_102bae564(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105aa080;
  func_0x000107c613fc(&UNK_1105aa080,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102bae598;
  func_0x0001000823a8(FUN_102bae598,puVar3);
  func_0x000100082720("SCContextRepliesSubscribeUpsellScopedServicesScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102bae56c; end: 102bae597;  */

void FUN_102bae56c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102bae598; end: 102bae5a7;  */

void FUN_102bae598(undefined8 *param_1)

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
  puVar1 = &UNK_1105a9ed8;
  func_0x000107c613fc(&UNK_1105a9ed8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102bad9c4;
  func_0x00010058fa64(FUN_102bad9c4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102bae5a8; end: 102bae6bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102bae5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102bae9f8();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112efc408) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112efc410) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102bae6c0);
  (*pcVar2)();
}



/* Entry: 102bae6c0; end: 102bae71f; -[_TtC36ContextRepliesUpsellScopeGraphBridge51ContextRepliesUpsellScopeGraphBridgeSaberEntryPoint init] */

void FUN_102bae6c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextRepliesUpsellScopeGraphBridge.ContextRepliesUpsellScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bae6ec);
  (*pcVar1)();
}



/* Entry: 102bae720; end: 102bae757; -[_TtC36ContextRepliesUpsellScopeGraphBridge51ContextRepliesUpsellScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bae73c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bae740) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bae720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efc408));
  return;
}



/* Entry: 102bae758; end: 102bae77f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bae758(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112efc410),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112efc408));
  return;
}



/* Entry: 102bae780; end: 102bae79f;  */

void FUN_102bae780(void)

{
  func_0x000107c61168(&PTR_PTR_112893650);
  return;
}



/* Entry: 102bae7a0; end: 102bae827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102bae7a0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efc440) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112efc448);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102bae828);
  (*pcVar2)();
}



/* Entry: 102bae828; end: 102bae90f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102bae828(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efc440);
  *(undefined **)(unaff_x20 + _DAT_112efc440) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efc448);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112efc448))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105aa1a0;
  func_0x000107c613fc(&UNK_1105aa1a0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102bae914,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102bae910; end: 102bae91b;  */

void FUN_102bae910(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102bae91c; end: 102bae97b; -[_TtC36ContextRepliesUpsellScopeGraphBridge60SCContextRepliesSubscribeUpsellScopedServicesSaberEntryPoint init] */

void FUN_102bae91c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextRepliesUpsellScopeGraphBridge.SCContextRepliesSubscribeUpsellScopedServicesSaberEntryPoint"
                      ,0x61,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bae948);
  (*pcVar1)();
}



/* Entry: 102bae97c; end: 102bae9b3; -[_TtC36ContextRepliesUpsellScopeGraphBridge60SCContextRepliesSubscribeUpsellScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bae97c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112efc448));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efc440));
  return;
}



/* Entry: 102bae9b4; end: 102bae9b7;  */

void FUN_102bae9b4(void)

{
  return;
}



/* Entry: 102bae9b8; end: 102bae9d7;  */

void FUN_102bae9b8(void)

{
  FUN_102bae828();
  return;
}



/* Entry: 102bae9d8; end: 102bae9f7;  */

void FUN_102bae9d8(void)

{
  func_0x000107c61168(&PTR_PTR_112893718);
  return;
}



/* Entry: 102bae9f8; end: 102baeac7;  */

undefined8 FUN_102bae9f8(void)

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
  
  func_0x000107c61428(0x112efc478,&uStack_40,0x20,0);
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
    FUN_102baeac8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102baeac8; end: 102baeae7;  */

void FUN_102baeac8(void)

{
  func_0x000107c61168(&PTR_PTR_1128937e0);
  return;
}



/* Entry: 102baeae8; end: 102baeb0b;  */

void FUN_102baeae8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105aa1e8;
  func_0x0001000285a8(0x112efc480,&UNK_10db2d968);
  func_0x000107c613fc(&UNK_1105aa1e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102baeb90,puVar1);
  return;
}



/* Entry: 102baeb0c; end: 102baeb8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baeb0c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102baeac8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112efc488) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112efc490) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102baeb90; end: 102baeb97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baeb90(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_102baeac8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112efc488) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112efc490) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 102baeb98; end: 102baebfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baeb98(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efc488) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112efc490) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102baebfc; end: 102baec5b; -[_TtC36ContextRepliesUpsellScopeGraphBridge44ContextRepliesUpsellScopeGraphBridgeServices init] */

void FUN_102baebfc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextRepliesUpsellScopeGraphBridge.ContextRepliesUpsellScopeGraphBridgeServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102baec28);
  (*pcVar1)();
}



/* Entry: 102baec5c; end: 102baecd3; -[_TtC36ContextRepliesUpsellScopeGraphBridge44ContextRepliesUpsellScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102baec78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102baec7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baec5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efc488));
  return;
}



/* Entry: 102baecd4; end: 102baecdf;  */

void FUN_102baecd4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102baece0,param_1);
  return;
}



/* Entry: 102baece0; end: 102baed9f;  */

void FUN_102baece0(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102baeda0; end: 102baedab;  */

void FUN_102baeda0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102baf0d0,param_1);
  return;
}



/* Entry: 102baedac; end: 102baee03;  */

void FUN_102baedac(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 102baee04; end: 102baee2f;  */

undefined8 FUN_102baee04(void)

{
  return 0x1b;
}



/* Entry: 102baee30; end: 102baeeaf;  */

void FUN_102baee30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 102baeeb0; end: 102baefa7;  */

void FUN_102baeeb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112efc478,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112efc478,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105aa328;
  func_0x000107c613fc(&UNK_1105aa328,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102baf0c8;
  func_0x00010058fa64(0x102baf0c8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102baefa8; end: 102baefd3;  */

void FUN_102baefa8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102baefd4; end: 102baefdb;  */

void FUN_102baefd4(undefined8 *param_1)

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
  func_0x000107c61428(0x112efc478,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112efc478,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105aa328;
  func_0x000107c613fc(&UNK_1105aa328,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102baf0c8;
  func_0x00010058fa64(0x102baf0c8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102baefdc; end: 102baf037;  */

void FUN_102baefdc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112efc478,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112efc478,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102baf038; end: 102baf0db;  */

undefined ** FUN_102baf038(void)

{
  return &PTR_DAT_113066a00;
}



/* Entry: 102baf0dc; end: 102baf123; -[SCContextRepliesUpsellScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baf0dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efc4e8;
  func_0x000107c61428(param_1 + _DAT_112efc4e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102baf124; end: 102baf17b; -[SCContextRepliesUpsellScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baf124(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efc4e8;
  func_0x000107c61428(param_1 + _DAT_112efc4e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102baf17c; end: 102baf1c3; -[SCContextRepliesUpsellScopeGraphBridgeSaberEntryPoint sCFriendProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baf17c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efc4f0;
  func_0x000107c61428(param_1 + _DAT_112efc4f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102baf1c4; end: 102baf1cf; -[SCContextRepliesUpsellScopeGraphBridgeSaberEntryPoint setSCFriendProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baf1c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efc4f0;
  func_0x000107c61428(param_1 + _DAT_112efc4f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102baf1d0; end: 102baf217; -[SCContextRepliesUpsellScopeGraphBridgeSaberEntryPoint sCUnifiedPublicProfilesPresenterScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baf1d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efc4f8;
  func_0x000107c61428(param_1 + _DAT_112efc4f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102baf218; end: 102baf223; -[SCContextRepliesUpsellScopeGraphBridgeSaberEntryPoint setSCUnifiedPublicProfilesPresenterScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baf218(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efc4f8;
  func_0x000107c61428(param_1 + _DAT_112efc4f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102baf224; end: 102baf26b; -[SCContextRepliesUpsellScopeGraphBridgeSaberEntryPoint contextRepliesUpsellScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baf224(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efc500;
  func_0x000107c61428(param_1 + _DAT_112efc500,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102baf26c; end: 102baf277; -[SCContextRepliesUpsellScopeGraphBridgeSaberEntryPoint setContextRepliesUpsellScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baf26c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efc500;
  func_0x000107c61428(param_1 + _DAT_112efc500,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102baf278; end: 102baf2d7;  */

void FUN_102baf278(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102baf2d8; end: 102baf50f;  */

/* WARNING: Possible PIC construction at 0x000102baf444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102baf454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102baf470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102baf480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102baf49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102baf4e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102baf484) */
/* WARNING: Removing unreachable block (ram,0x000102baf474) */
/* WARNING: Removing unreachable block (ram,0x000102baf458) */
/* WARNING: Removing unreachable block (ram,0x000102baf448) */
/* WARNING: Removing unreachable block (ram,0x000102baf4e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baf2d8(void)

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
  func_0x000107c50d84();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c514dc();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c405d8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_102bae780();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_102bae9f8();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102baf510);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112efc408) = lVar5;
        *(long *)(lVar4 + _DAT_112efc410) = unaff_x20;
        lStack_80 = lVar4;
        lStack_78 = lVar6;
        func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102baf510; end: 102baf537; -[SCContextRepliesUpsellScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102baf510(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102baf2d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102baf538; end: 102baf57b; -[SCContextRepliesUpsellScopeGraphBridgeSaberEntryPoint end] */

void FUN_102baf538(undefined8 param_1)

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



/* Entry: 102baf57c; end: 102baf7eb;  */

void FUN_102baf57c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef0fac020)) {
      uVar2 = 0xd00000000000001b;
      func_0x000107c605b8(0xd00000000000001b,0x800000010f053fe0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffd4) && (param_3 == -0x7ffffffef0f88d30)) ||
           (func_0x000107c605b8(0xd00000000000002c,0x800000010f0772d0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58a84();
        }
        else {
          uVar2 = 0xd000000000000033;
          if (((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0f04fd0)) &&
             (func_0x000107c605b8(0xd000000000000033,0x800000010f0fb030,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "ContextRepliesUpsellScopeGraphBridge/SCContextRepliesUpsellScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x60,2,0x39,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102baf7ec);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5390c();
        }
        goto LAB_102baf608;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5832c();
  }
LAB_102baf608:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102baf7ec; end: 102baf897; -[SCContextRepliesUpsellScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102baf7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102baf57c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102baf898; end: 102baf91b; -[SCContextRepliesUpsellScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baf898(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efc4e8,0);
  *(undefined8 *)(param_1 + _DAT_112efc4f0) = 0;
  *(undefined8 *)(param_1 + _DAT_112efc4f8) = 0;
  *(undefined8 *)(param_1 + _DAT_112efc500) = 0;
  *(undefined8 *)(param_1 + _DAT_112efc508) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102baf91c; end: 102baf94f;  */

void FUN_102baf91c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102baf950; end: 102baf9b7; -[SCContextRepliesUpsellScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102baf97c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102baf99c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102baf980) */
/* WARNING: Removing unreachable block (ram,0x000102baf9a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baf950(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efc4e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efc4f0));
  return;
}



/* Entry: 102baf9b8; end: 102baf9d7;  */

void FUN_102baf9b8(void)

{
  func_0x000107c61168(&PTR_PTR_1128938a8);
  return;
}



/* Entry: 102baf9d8; end: 102bafa1f; -[SCSCContextRepliesSubscribeUpsellScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baf9d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efc538;
  func_0x000107c61428(param_1 + _DAT_112efc538,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102bafa20; end: 102bafa77; -[SCSCContextRepliesSubscribeUpsellScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bafa20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efc538;
  func_0x000107c61428(param_1 + _DAT_112efc538,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102bafa78; end: 102bafb4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bafa78(undefined8 param_1,long param_2)

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
    FUN_102bae9d8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112efc440) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bafb50);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112efc448);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efc540);
    *(long **)(unaff_x20 + _DAT_112efc540) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102bafb50; end: 102bafb77; -[SCSCContextRepliesSubscribeUpsellScopedServicesSaberEntryPoint begin] */

void FUN_102bafb50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bafa78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bafb78; end: 102bafcef;  */

/* WARNING: Possible PIC construction at 0x000102bafbe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bafc78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bafbe4) */
/* WARNING: Removing unreachable block (ram,0x000102bafc7c) */
/* WARNING: Removing unreachable block (ram,0x000102bafc94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bafb78(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112efc540);
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



/* Entry: 102bafcf0; end: 102bafcf7;  */

void FUN_102bafcf0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102bafcf8; end: 102bafd2b; -[SCSCContextRepliesSubscribeUpsellScopedServicesSaberEntryPoint end] */

void FUN_102bafcf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102bafb78();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102bafd2c; end: 102bafe4b;  */

void FUN_102bafd2c(long param_1,long param_2,long param_3)

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
                        "ContextRepliesUpsellScopeGraphBridge/SCSCContextRepliesSubscribeUpsellScopedServicesSaberEntryPoint.swift"
                        ,0x69,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bafe4c);
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



/* Entry: 102bafe4c; end: 102bafef7; -[SCSCContextRepliesSubscribeUpsellScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102bafe4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102bafd2c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102bafef8; end: 102baff57; -[SCSCContextRepliesSubscribeUpsellScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bafef8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efc538,0);
  *(undefined8 *)(param_1 + _DAT_112efc540) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102baff58; end: 102baff8b;  */

void FUN_102baff58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102baff8c; end: 102baffc3; -[SCSCContextRepliesSubscribeUpsellScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baff8c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efc538);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efc540));
  return;
}



/* Entry: 102baffc4; end: 102baffe3;  */

void FUN_102baffc4(void)

{
  func_0x000107c61168(&PTR_PTR_112893980);
  return;
}



/* Entry: 102baffe4; end: 102bb0027;  */

void FUN_102baffe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 102bb0028; end: 102bb0037;  */

void FUN_102bb0028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 102bb0038; end: 102bb05b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb0038(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar14 = *(long *)(lVar1 + _DAT_113077858);
  uVar3 = *(undefined1 *)(lVar1 + _DAT_113077868);
  uVar4 = *(undefined1 *)(lVar1 + _DAT_113077870);
  uVar17 = *(undefined8 *)(lVar1 + _DAT_113077878);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar16 = *(undefined8 *)(lVar1 + _DAT_113077880);
  lVar5 = 0;
  FUN_102bb2aec();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar10 = _DAT_112efc620;
  puVar7 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c615f0(lVar14);
  func_0x000107c615f0(uVar17);
  func_0x000107c61174();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c5a050(puVar7);
  func_0x000107c52610(puVar7);
  func_0x000107c54280(puVar7);
  puVar8 = puVar7;
  func_0x000107c59594(0x4034000000000000);
  *(undefined **)(lVar6 + lVar10) = puVar7;
  lVar10 = _DAT_112efc628;
  FUN_102bb06b8();
  *(undefined **)(lVar6 + lVar10) = puVar8;
  lVar10 = _DAT_112efc630;
  puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  *(undefined **)(lVar6 + lVar10) = puVar7;
  lVar10 = _DAT_112efc638;
  puVar7 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c4179c(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c54adc(puVar7);
  func_0x000107c61170(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar9 = puVar8;
  func_0x000107c5e2ac();
  func_0x000107c61180();
  func_0x000107c59c78(puVar7);
  func_0x000107c61170(puVar9);
  func_0x000107c56ba8(puVar7);
  *(undefined **)(lVar6 + lVar10) = puVar7;
  lVar10 = _DAT_112efc640;
  puVar7 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c5a100(puVar7);
  func_0x000107c61174();
  puVar9 = puVar8;
  func_0x000107c5af88(puVar8);
  func_0x000107c61180();
  func_0x000107c59c78(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar9);
  *(undefined **)(lVar6 + lVar10) = puVar7;
  lVar10 = _DAT_112efc648;
  puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar9 = PTR_PTR_1126b0c40;
  func_0x000107c61168(PTR_PTR_1126b0c40);
  func_0x000107c3ea80(puVar8);
  func_0x000107c61180();
  func_0x000107c45098(0x402e000000000000,0x402e000000000000,puVar9);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c55258(puVar7);
  func_0x000107c61170(puVar9);
  *(undefined **)(lVar6 + lVar10) = puVar7;
  lVar10 = _DAT_112efc650;
  puVar7 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  *(undefined **)(lVar6 + lVar10) = puVar7;
  lVar10 = _DAT_112efc658;
  FUN_102bb0974();
  *(undefined **)(lVar6 + lVar10) = puVar7;
  lVar10 = _DAT_112efc660;
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar8 = puVar7;
  func_0x000107c5a378();
  *(undefined **)(lVar6 + lVar10) = puVar7;
  lVar10 = _DAT_112efc668;
  func_0x000102bb0a2c();
  *(undefined **)(lVar6 + lVar10) = puVar8;
  lVar10 = lVar6 + _DAT_112efc690;
  *(undefined8 *)(lVar10 + 8) = 0;
  lVar12 = 0;
  func_0x000107c61614(lVar10);
  lVar15 = _DAT_112efc6a8;
  puVar7 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar6 + lVar15) = puVar7;
  *(undefined8 *)(lVar6 + _DAT_112efc6b0) = 0;
  *(long *)(lVar6 + _DAT_112efc670) = lVar14;
  *(undefined1 *)(lVar6 + _DAT_112efc678) = uVar3;
  *(undefined1 *)(lVar6 + _DAT_112efc680) = uVar4;
  *(undefined8 *)(lVar6 + _DAT_112efc6b8) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112efc6c0) = uVar19;
  func_0x000107c615f0(lVar14);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar19);
  lVar15 = lVar14;
  func_0x000107c3ee5c();
  func_0x000107c61180();
  if (lVar15 == 0) {
    lVar18 = 0;
    lVar15 = -0x2000000000000000;
    lVar13 = lVar12;
  }
  else {
    lVar18 = lVar15;
    func_0x000107c5faec();
    lVar13 = lVar12;
    func_0x000107c61170(lVar15);
    lVar15 = lVar12;
  }
  plVar11 = (long *)(lVar6 + _DAT_112efc688);
  *plVar11 = lVar18;
  plVar11[1] = lVar15;
  lVar15 = lVar14;
  func_0x000107c42120();
  func_0x000107c61180();
  lVar12 = lVar15;
  func_0x000107c5faec();
  func_0x000107c61170(lVar15);
  plVar11 = (long *)(lVar6 + _DAT_112efc698);
  *plVar11 = lVar12;
  plVar11[1] = lVar13;
  *(undefined ***)(lVar10 + 8) = &PTR_DAT_1105aa438;
  func_0x000107c61604(lVar10);
  lVar10 = lVar14;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar10 == 0) {
    lVar15 = 0;
    unaff_x20 = -0x2000000000000000;
  }
  else {
    lVar15 = lVar10;
    func_0x000107c5faec();
    func_0x000107c61170(lVar10);
  }
  plVar11 = (long *)(lVar6 + _DAT_112efc6a0);
  *plVar11 = lVar15;
  plVar11[1] = unaff_x20;
  *(undefined8 *)(lVar6 + _DAT_112efc6c8) = uVar17;
  *(undefined8 *)(lVar6 + _DAT_112efc6d0) = uVar16;
  plVar11 = &lStack_70;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c61154(plVar11,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c615e8(lVar14);
  func_0x000107c5677c(plVar11);
  func_0x000107c3e2c0(*(undefined8 *)(lVar1 + _DAT_113077850));
  func_0x000107c61170(plVar11);
  return;
}



/* Entry: 102bb05b4; end: 102bb05e7;  */

void FUN_102bb05b4(void)

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



/* Entry: 102bb05e8; end: 102bb0607;  */

void FUN_102bb05e8(void)

{
  FUN_102bb0038();
  return;
}



/* Entry: 102bb0608; end: 102bb060f;  */

undefined8 FUN_102bb0608(void)

{
  return 0;
}



/* Entry: 102bb0610; end: 102bb062f;  */

void FUN_102bb0610(void)

{
  func_0x000107c61168(&PTR_PTR_112efc5b0);
  return;
}



/* Entry: 102bb0630; end: 102bb06b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb0630(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c41864(*(undefined8 *)(lVar2 + _DAT_113077850),param_2,0);
  lVar1 = _DAT_113077860;
  func_0x000107c61428(lVar2 + _DAT_113077860,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c42088();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102bb06b8; end: 102bb0973;  */

undefined * FUN_102bb06b8(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar2 = PTR_PTR_1126b1198;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  puVar3 = puVar2;
  func_0x000107c44470();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    lVar4 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 10;
    *(undefined8 *)(lVar4 + 0x10) = 5;
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    puVar6 = puVar5;
    func_0x000107c3ea80();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c3fdd0(0);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    puVar6 = puVar7;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    uVar8 = 0;
    func_0x000100ef8bfc();
    *(undefined8 *)(lVar4 + 0x38) = uVar8;
    *(undefined **)(lVar4 + 0x20) = puVar6;
    puVar6 = puVar5;
    func_0x000107c3ea80();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c3fdd0(0x3fd51eb851eb851f);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    puVar6 = puVar7;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    *(undefined8 *)(lVar4 + 0x58) = uVar8;
    *(undefined **)(lVar4 + 0x40) = puVar6;
    puVar6 = puVar5;
    func_0x000107c3ea80();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c3fdd0(0x3fe199999999999a);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    puVar6 = puVar7;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    *(undefined8 *)(lVar4 + 0x78) = uVar8;
    *(undefined **)(lVar4 + 0x60) = puVar6;
    puVar6 = puVar5;
    func_0x000107c3ea80();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c3fdd0(0x3feae147ae147ae1);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    puVar6 = puVar7;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    *(undefined8 *)(lVar4 + 0x98) = uVar8;
    *(undefined **)(lVar4 + 0x80) = puVar6;
    func_0x000107c3ea80();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c3fdd0(0x3ff0000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = puVar6;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    *(undefined8 *)(lVar4 + 0xb8) = uVar8;
    *(undefined **)(lVar4 + 0xa0) = puVar5;
    lVar9 = lVar4;
    func_0x000107c5fc48(lVar4,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61574(lVar4);
    func_0x000107c535a0(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar9);
    func_0x000107c5a378(puVar2);
    func_0x000107c61170(puVar2);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb0974);
  (*pcVar1)();
}



/* Entry: 102bb0974; end: 102bb0af3;  */

undefined * FUN_102bb0974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c59a2c();
  func_0x000102bb3248();
  uVar3 = param_2;
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000102bb3258();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1);
  return puVar1;
}



/* Entry: 102bb0af4; end: 102bb0b1b; -[_TtC41SCContextRepliesSubscribeUpsellEntryPoint43ContextRepliesSubscribeUpsellViewController initWithCoder:] */

void FUN_102bb0af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102bb2e3c();
  return;
}



/* Entry: 102bb0b1c; end: 102bb1ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb0b1c(void)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  FUN_102bb2aec();
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_viewDidLoad_112684cd8);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb1a94);
    (*pcVar2)();
  }
  func_0x000107c5a378();
  func_0x000107c61170(lVar3);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb1a98);
    (*pcVar2)();
  }
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c61174();
  func_0x000107c48c2c(puVar4);
  func_0x000107c3d6fc(lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar4);
  cVar1 = *(char *)(unaff_x20 + _DAT_112efc680);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (cVar1 == '\x01') {
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb1aa0);
      (*pcVar2)();
    }
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112efc628);
    func_0x000107c3d89c();
    func_0x000107c61170(lVar3);
    lVar16 = *(long *)(unaff_x20 + _DAT_112efc620);
    func_0x000107c3d89c(uVar17);
  }
  else {
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb1aa4);
      (*pcVar2)();
    }
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3ea80();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c3fdd0(0x3fe6666666666666);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c52b50(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar5);
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb1aa8);
      (*pcVar2)();
    }
    lVar16 = *(long *)(unaff_x20 + _DAT_112efc620);
    func_0x000107c3d89c();
    func_0x000107c61170(lVar3);
  }
  FUN_102bb2144();
  lVar3 = *(long *)(unaff_x20 + _DAT_112efc688);
  lVar11 = ((long *)(unaff_x20 + _DAT_112efc688))[1];
  func_0x000107c5fb5c(lVar3,lVar11);
  if (lVar3 < 1) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112efc6a0);
    lVar11 = ((long *)(unaff_x20 + _DAT_112efc6a0))[1];
    func_0x000107c5fb5c(lVar3,lVar11);
    if (lVar3 < 1) goto LAB_102bb0db8;
  }
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112efc630);
  func_0x000107c5a378(uVar17);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  func_0x000107c3d6fc(uVar17);
  func_0x000107c61170(puVar4);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112efc638);
  func_0x000107c5a378(uVar17);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  func_0x000107c3d6fc(uVar17);
  func_0x000107c61170(puVar4);
LAB_102bb0db8:
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112efc630);
  func_0x000107c3d89c(lVar16);
  FUN_102bb22d4();
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112efc638);
  lVar6 = lVar16;
  func_0x000107c3d89c(lVar16);
  uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112efc640);
  func_0x000102bb3280();
  lVar3 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  uVar14 = 0x48;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  lVar7 = lVar3;
  FUN_102bb24bc();
  *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
  lVar8 = lVar7;
  func_0x00010075bbf0();
  *(long *)(lVar3 + 0x40) = lVar8;
  *(long *)(lVar3 + 0x20) = lVar7;
  *(undefined8 *)(lVar3 + 0x28) = uVar14;
  lVar7 = lVar11;
  func_0x000107c5fb00(lVar6,lVar11,lVar3);
  func_0x000107c6142c(lVar11);
  func_0x000107c5fadc(lVar6,lVar7);
  func_0x000107c6142c(lVar7);
  func_0x000107c59c6c(uVar20);
  func_0x000107c61170(lVar6);
  func_0x000107c3d89c(lVar16);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112efc658);
  func_0x000107c3d8b8(uVar14);
  func_0x000107c52124(uVar14);
  func_0x000107c52124(uVar14);
  func_0x000107c3d89c(lVar16);
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112efc660);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  func_0x000107c61170(unaff_x20);
  func_0x000107c3d6fc(uVar18);
  func_0x000107c61170(puVar4);
  uVar21 = *(undefined8 *)(unaff_x20 + _DAT_112efc668);
  func_0x000107c3d89c(uVar18);
  lVar3 = lVar16;
  func_0x000107c3d89c();
  func_0x0001008478a8();
  if (cVar1 == '\0') {
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 9;
    *(undefined8 *)(lVar3 + 0x10) = 4;
    lVar11 = lVar16;
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb1ab0);
      (*pcVar2)();
    }
    lVar7 = lVar6;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    lVar6 = lVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar7);
    *(long *)(lVar3 + 0x20) = lVar6;
    lVar11 = lVar16;
    func_0x000107c3f764();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb1ab8);
      (*pcVar2)();
    }
    lVar7 = lVar6;
    func_0x000107c3f764();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    lVar6 = lVar11;
    func_0x000107c40284(0x4034000000000000);
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar7);
    *(long *)(lVar3 + 0x28) = lVar6;
    lVar11 = lVar16;
    func_0x000107c44d9c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb1ac0);
      (*pcVar2)();
    }
    lVar7 = lVar6;
    func_0x000107c44d9c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    lVar6 = lVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar7);
    *(long *)(lVar3 + 0x30) = lVar6;
    lVar11 = lVar16;
    func_0x000107c5e308();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb1ac4);
      (*pcVar2)();
    }
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar7 = lVar6;
    func_0x000107c5e308(lVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    lVar6 = lVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar7);
    *(long *)(lVar3 + 0x38) = lVar6;
  }
  else {
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 0x11;
    *(undefined8 *)(lVar3 + 0x10) = 8;
    uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112efc628);
    uVar9 = uVar19;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x000107c40290(0x407c200000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar3 + 0x20) = uVar10;
    uVar9 = uVar19;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar11 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb1aac);
      (*pcVar2)();
    }
    lVar6 = lVar11;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    uVar10 = uVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar3 + 0x28) = uVar10;
    uVar9 = uVar19;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar11 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb1ab4);
      (*pcVar2)();
    }
    lVar6 = lVar11;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    uVar10 = uVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar3 + 0x30) = uVar10;
    uVar9 = uVar19;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar11 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb1abc);
      (*pcVar2)();
    }
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar6 = lVar11;
    func_0x000107c5ce8c(lVar11);
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    uVar10 = uVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar3 + 0x38) = uVar10;
    lVar11 = lVar16;
    func_0x000107c3f75c();
    func_0x000107c61180();
    uVar9 = uVar19;
    func_0x000107c3f75c(uVar19);
    func_0x000107c61180();
    lVar6 = lVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    func_0x000107c61170(uVar9);
    *(long *)(lVar3 + 0x40) = lVar6;
    lVar11 = lVar16;
    func_0x000107c3f764();
    func_0x000107c61180();
    uVar9 = uVar19;
    func_0x000107c3f764(uVar19);
    func_0x000107c61180();
    lVar6 = lVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    func_0x000107c61170(uVar9);
    *(long *)(lVar3 + 0x48) = lVar6;
    lVar11 = lVar16;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar9 = uVar19;
    func_0x000107c44d9c(uVar19);
    func_0x000107c61180();
    lVar6 = lVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    func_0x000107c61170(uVar9);
    *(long *)(lVar3 + 0x50) = lVar6;
    lVar11 = lVar16;
    func_0x000107c5e308();
    func_0x000107c61180();
    func_0x000107c5e308(uVar19);
    func_0x000107c61180();
    lVar6 = lVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    func_0x000107c61170(uVar19);
    *(long *)(lVar3 + 0x58) = lVar6;
  }
  uVar12 = 0;
  FUN_102bb31c4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar11 = lVar3;
  func_0x000107c5fc48(lVar3,uVar12);
  func_0x000107c61574(lVar3);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170(lVar11);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x18) = 0x21;
  *(undefined8 *)(puVar5 + 0x10) = 0x10;
  uVar9 = uVar20;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar3 = lVar16;
  func_0x000107c3f75c(lVar16);
  func_0x000107c61180();
  uVar10 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar3);
  *(undefined8 *)(puVar5 + 0x20) = uVar10;
  uVar9 = uVar20;
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar3 = lVar16;
  func_0x000107c3f764(lVar16);
  func_0x000107c61180();
  uVar10 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar3);
  *(undefined8 *)(puVar5 + 0x28) = uVar10;
  uVar9 = uVar17;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar3 = lVar16;
  func_0x000107c3f75c(lVar16);
  func_0x000107c61180();
  uVar10 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar3);
  *(undefined8 *)(puVar5 + 0x30) = uVar10;
  uVar9 = uVar17;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar10 = uVar20;
  func_0x000107c5cbe4(uVar20);
  func_0x000107c61180();
  uVar19 = uVar9;
  func_0x000107c40284(0xc024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  *(undefined8 *)(puVar5 + 0x38) = uVar19;
  uVar9 = uVar15;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar3 = lVar16;
  func_0x000107c3f75c(lVar16);
  func_0x000107c61180();
  uVar10 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar3);
  *(undefined8 *)(puVar5 + 0x40) = uVar10;
  uVar9 = uVar15;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c5cbe4(uVar17);
  func_0x000107c61180();
  uVar10 = uVar9;
  func_0x000107c40284(0xc024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar17);
  *(undefined8 *)(puVar5 + 0x48) = uVar10;
  uVar17 = uVar15;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar9 = uVar17;
  func_0x000107c40290(0x4053000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar17);
  *(undefined8 *)(puVar5 + 0x50) = uVar9;
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar17 = uVar15;
  func_0x000107c40290(0x4053000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  *(undefined8 *)(puVar5 + 0x58) = uVar17;
  uVar17 = uVar14;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar3 = lVar16;
  func_0x000107c3f75c(lVar16);
  func_0x000107c61180();
  uVar15 = uVar17;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar17);
  func_0x000107c61170(lVar3);
  *(undefined8 *)(puVar5 + 0x60) = uVar15;
  uVar17 = uVar14;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c3ec1c(uVar20);
  func_0x000107c61180();
  uVar15 = uVar17;
  func_0x000107c40284(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar20);
  *(undefined8 *)(puVar5 + 0x68) = uVar15;
  uVar17 = uVar18;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c3f75c(lVar16);
  func_0x000107c61180();
  uVar15 = uVar17;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar17);
  func_0x000107c61170(lVar16);
  *(undefined8 *)(puVar5 + 0x70) = uVar15;
  uVar17 = uVar18;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c3ec1c(uVar14);
  func_0x000107c61180();
  uVar15 = uVar17;
  func_0x000107c40284(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  *(undefined8 *)(puVar5 + 0x78) = uVar15;
  uVar17 = uVar18;
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar15 = uVar17;
  func_0x000107c40290(0x4049000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar17);
  *(undefined8 *)(puVar5 + 0x80) = uVar15;
  uVar17 = uVar18;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar15 = uVar17;
  func_0x000107c40290(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar17);
  *(undefined8 *)(puVar5 + 0x88) = uVar15;
  uVar17 = uVar21;
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar15 = uVar18;
  func_0x000107c3f75c(uVar18);
  func_0x000107c61180();
  uVar20 = uVar17;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar15);
  *(undefined8 *)(puVar5 + 0x90) = uVar20;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c5cbe4(uVar18);
  func_0x000107c61180();
  uVar17 = uVar21;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar18);
  *(undefined8 *)(puVar5 + 0x98) = uVar17;
  puVar13 = puVar5;
  func_0x000107c5fc48(puVar5,uVar12);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170(puVar13);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c526c0(0);
    func_0x000107c61170(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb1a9c);
  (*pcVar2)();
}



/* Entry: 102bb1ac4; end: 102bb1b27; -[_TtC41SCContextRepliesSubscribeUpsellEntryPoint43ContextRepliesSubscribeUpsellViewController viewDidLoad] */

void FUN_102bb1ac4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bb0b1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bb1b28; end: 102bb1e8b; -[_TtC41SCContextRepliesSubscribeUpsellEntryPoint43ContextRepliesSubscribeUpsellViewController viewWillAppear:] */

void FUN_102bb1b28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar4 = &puStack_70;
  uVar1 = param_1;
  FUN_102bb2aec();
  puVar3 = PTR_s_viewWillAppear__1126853f0;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174();
  func_0x000107c61154(&uStack_40,puVar3,param_3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = &UNK_1105aa558;
  func_0x000107c613fc(&UNK_1105aa558,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcStack_50 = FUN_102bb31bc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105aa570;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c3dccc(0x3fd0000000000000,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 102bb1e8c; end: 102bb206b; -[_TtC41SCContextRepliesSubscribeUpsellEntryPoint43ContextRepliesSubscribeUpsellViewController didTapAdd:] */

/* WARNING: Possible PIC construction at 0x000102bb1ec4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bb1ec8) */

void FUN_102bb1e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102bb1c28(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102bb206c; end: 102bb20e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb206c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112efc690;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_102bb0630(1);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102bb20e4; end: 102bb2143; -[_TtC41SCContextRepliesSubscribeUpsellEntryPoint43ContextRepliesSubscribeUpsellViewController didCancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb20e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112efc690;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61174(param_1);
    FUN_102bb0630(0);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102bb2144; end: 102bb223b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb2144(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112efc670);
  func_0x000107c4f3a4(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_1105aa468;
  func_0x000107c613fc(&UNK_1105aa468,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_102bb2e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100f0af84;
  puStack_48 = &UNK_1105aa480;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar4 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102bb223c; end: 102bb22d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb223c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c308c4(0x4053000000000000,0x4053000000000000,0x4043000000000000,param_1,2,1);
    func_0x000107c55258(*(undefined8 *)(param_2 + _DAT_112efc630));
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102bb22d4; end: 102bb24bb;  */

/* WARNING: Possible PIC construction at 0x000102bb2340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb2368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb23ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb2400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb241c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb2498: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bb2420) */
/* WARNING: Removing unreachable block (ram,0x000102bb2478) */
/* WARNING: Removing unreachable block (ram,0x000102bb245c) */
/* WARNING: Removing unreachable block (ram,0x000102bb2488) */
/* WARNING: Removing unreachable block (ram,0x000102bb2404) */
/* WARNING: Removing unreachable block (ram,0x000102bb23f0) */
/* WARNING: Removing unreachable block (ram,0x000102bb236c) */
/* WARNING: Removing unreachable block (ram,0x000102bb23d8) */
/* WARNING: Removing unreachable block (ram,0x000102bb2384) */
/* WARNING: Removing unreachable block (ram,0x000102bb23e0) */
/* WARNING: Removing unreachable block (ram,0x000102bb2344) */
/* WARNING: Removing unreachable block (ram,0x000102bb24b8) */
/* WARNING: Removing unreachable block (ram,0x000102bb2358) */
/* WARNING: Removing unreachable block (ram,0x000102bb249c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb22d4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112efc678) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112efc698);
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112efc698))[1];
    puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x000107c5fadc(uVar2,uVar3);
    func_0x000107c48af4(puVar1);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112efc638);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112efc698);
    func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112efc698))[1]);
    func_0x000107c59c6c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102bb24bc; end: 102bb259b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102bb24bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efc698);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112efc698))[1];
  uStack_50 = 0x20;
  uStack_48 = 0xe100000000000000;
  puStack_60 = &uStack_50;
  func_0x000107c61434(uVar5);
  lVar3 = 0x7fffffffffffffff;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_102bb2dc4,auStack_70,uVar4,uVar5);
  if (*(long *)(lVar3 + 0x10) == 0) {
    func_0x000107c6142c();
    func_0x000107c61434(uVar5);
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    uVar1 = *(undefined8 *)(lVar3 + 0x30);
    uVar2 = *(undefined8 *)(lVar3 + 0x38);
    func_0x000107c61434(uVar2);
    func_0x000107c6142c(lVar3);
    func_0x000107c5fb2c(uVar4,uVar5,uVar1,uVar2);
    func_0x000107c6142c(uVar2);
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 102bb259c; end: 102bb28f3;  */

/* WARNING: Possible PIC construction at 0x000102bb2728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb2798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb27a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb27b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb2894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb28a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb28c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bb28a8) */
/* WARNING: Removing unreachable block (ram,0x000102bb2898) */
/* WARNING: Removing unreachable block (ram,0x000102bb27bc) */
/* WARNING: Removing unreachable block (ram,0x000102bb27ac) */
/* WARNING: Removing unreachable block (ram,0x000102bb279c) */
/* WARNING: Removing unreachable block (ram,0x000102bb272c) */
/* WARNING: Removing unreachable block (ram,0x000102bb28cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb259c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  ulong in_stack_ffffffffffffff78;
  undefined1 auStack_68 [24];
  
  puVar4 = PTR_PTR_1126b3530;
  func_0x000107c610f8();
  func_0x000107c4807c();
  lVar7 = *(long *)(unaff_x20 + _DAT_112efc688);
  lVar2 = ((long *)(unaff_x20 + _DAT_112efc688))[1];
  lVar5 = lVar7;
  func_0x000107c5fb5c(lVar7,lVar2);
  if (lVar5 < 1) {
    puVar9 = PTR_PTR_1126dcbd0;
    func_0x000107c610f8(PTR_PTR_1126dcbd0);
    func_0x000107c488e0();
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112efc6a0);
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112efc6a0))[1];
    puVar8 = PTR_PTR_1126b3fa0;
    func_0x000107c610f8(PTR_PTR_1126b3fa0);
    func_0x000107c61174(puVar4);
    func_0x000107c61174();
    func_0x000107c61174(puVar9);
    func_0x000107c61434(uVar3);
    func_0x000107c5fadc(uVar6,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107c47ca0(puVar8);
  }
  else {
    func_0x000104316d84(0);
    uVar6 = 0x12;
    func_0x000104316bcc(0x12,0,0xe000000000000000,0);
    func_0x000104318244(0);
    func_0x000107c610f8();
    func_0x000107c61434(lVar2);
    func_0x000107c61174(uVar6);
    func_0x0001043179f8(lVar7,lVar2,uVar6,0,0,1,6,0,0,in_stack_ffffffffffffff78 & 0xffffffffffff0000
                       );
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112efc6a0);
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112efc6a0))[1];
    puVar1 = (undefined8 *)(lVar7 + _DAT_11306de60);
    func_0x000107c61428(puVar1,auStack_68,1,0);
    uVar10 = puVar1[1];
    *puVar1 = uVar6;
    puVar1[1] = uVar3;
    func_0x000107c61434(uVar3);
    func_0x000107c6142c(uVar10);
    func_0x0001003378b0(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174(lVar7);
    func_0x000107c61174();
    func_0x0001043160ec(puVar4,lVar7);
    puVar9 = *(undefined **)(unaff_x20 + _DAT_112efc6b0);
    *(undefined **)(unaff_x20 + _DAT_112efc6b0) = puVar4;
    func_0x000107c61174();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 102bb28f4; end: 102bb291b; -[_TtC41SCContextRepliesSubscribeUpsellEntryPoint43ContextRepliesSubscribeUpsellViewController didTapProfileImage] */

void FUN_102bb28f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bb259c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bb291c; end: 102bb2977; -[_TtC41SCContextRepliesSubscribeUpsellEntryPoint43ContextRepliesSubscribeUpsellViewController initWithNibName:bundle:] */

void FUN_102bb291c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextRepliesSubscribeUpsellEntryPoint.ContextRepliesSubscribeUpsellViewController"
                      ,0x55,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb2948);
  (*pcVar1)();
}



/* Entry: 102bb2978; end: 102bb2aeb; -[_TtC41SCContextRepliesSubscribeUpsellEntryPoint43ContextRepliesSubscribeUpsellViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bb2994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb29b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb29d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb29f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb2a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb2a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb2ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bb2a94) */
/* WARNING: Removing unreachable block (ram,0x000102bb2a18) */
/* WARNING: Removing unreachable block (ram,0x000102bb29f8) */
/* WARNING: Removing unreachable block (ram,0x000102bb29d8) */
/* WARNING: Removing unreachable block (ram,0x000102bb29b8) */
/* WARNING: Removing unreachable block (ram,0x000102bb2998) */
/* WARNING: Removing unreachable block (ram,0x000102bb2ab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb2978(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efc620));
  return;
}



/* Entry: 102bb2aec; end: 102bb2b0b;  */

void FUN_102bb2aec(void)

{
  func_0x000107c61168(&PTR_PTR_112893a40);
  return;
}



/* Entry: 102bb2b0c; end: 102bb2b0f; -[_TtC41SCContextRepliesSubscribeUpsellEntryPoint43ContextRepliesSubscribeUpsellViewController interactiveDismissalWillBegin:] */

void FUN_102bb2b0c(void)

{
  return;
}


