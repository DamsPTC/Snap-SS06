/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031c4ed4; end: 1031c4eff;  */

void FUN_1031c4ed4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031c4f00; end: 1031c4f07;  */

void FUN_1031c4f00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11061d900;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11061d900;
  return;
}



/* Entry: 1031c4f08; end: 1031c4fb7;  */

void FUN_1031c4f08(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1031c530c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1031c514c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031c4fb8; end: 1031c5027;  */

undefined8 FUN_1031c4fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1031c514c(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1031c5028; end: 1031c505b;  */

void FUN_1031c5028(void)

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



/* Entry: 1031c505c; end: 1031c5063;  */

undefined8 FUN_1031c505c(void)

{
  return 0x1b;
}



/* Entry: 1031c5064; end: 1031c50e7;  */

void FUN_1031c5064(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1031c534c,param_2,FUN_1031c5350,param_2,FUN_1031c5378,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1031c50e8; end: 1031c5137;  */

undefined8 FUN_1031c50e8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1031c5138; end: 1031c514b;  */

void FUN_1031c5138(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11061db30;
  return;
}



/* Entry: 1031c514c; end: 1031c52ef;  */

void FUN_1031c514c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126acd88;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f12d7c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010effdd20);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1031c52f0; end: 1031c530b;  */

undefined ** FUN_1031c52f0(void)

{
  return &PTR_DAT_1130668f8;
}



/* Entry: 1031c530c; end: 1031c532b;  */

void FUN_1031c530c(void)

{
  func_0x000107c61168(&PTR_PTR_112f49c18);
  return;
}



/* Entry: 1031c532c; end: 1031c534f;  */

undefined1  [16] FUN_1031c532c(void)

{
  return ZEXT816(0x11061db70);
}



/* Entry: 1031c5350; end: 1031c5377;  */

void FUN_1031c5350(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1031c5378; end: 1031c537f;  */

undefined8 FUN_1031c5378(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1031c5380; end: 1031c53bb;  */

void FUN_1031c5380(undefined8 *param_1,undefined8 param_2)

{
  FUN_1031c53bc();
  func_0x0001000a7f38("SCContactPermissionResumeScopeInitializationPluginRegistryServiceProvider",
                      0x49,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1031c53bc; end: 1031c55a7;  */

void FUN_1031c53bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d168;
  ppuVar4 = &PTR_DAT_1130668f8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11061dbc0;
  func_0x000107c613fc(&UNK_11061dbc0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f49c88;
  func_0x0001000285a8(0x112f49c88,&UNK_10db97b80);
  func_0x0001000a6ee8(&UNK_11061ddd0,
                      "ContactPermissionResumeScopeGraphBridgeScopeInitializationPluginKey",0x43,2,
                      FUN_1031c55a8,puVar2,uVar3,&UNK_11061ddd0,&PTR_DAT_112f49d18);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11061db70,
                      "SCContactPermissionResumeEntryPointWrapperScopeInitializationPluginKey",0x46,
                      2,FUN_1031c565c,param_3,uVar3,&UNK_11061db70,&PTR_DAT_112f49bb0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11061dbe8;
  func_0x000107c613fc(&UNK_11061dbe8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11061d990,
                      "SCContactPermissionResumeScopedServicesScopeInitializationPluginKey",0x43,2,
                      FUN_1031c570c,puVar2,uVar3,&UNK_11061d990,&PTR_DAT_112f49b30);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f49c90;
  func_0x0001000285a8(0x112f49c90,&UNK_10db97b88);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1031c55a8; end: 1031c55e7;  */

void FUN_1031c55a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1031c5ce4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ContactPermissionResumeScopeGraphBridgeScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031c55e8; end: 1031c565b;  */

void FUN_1031c55e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1031c5748;
  func_0x0001000823a8(0x1031c5748,param_3);
  func_0x000100082720("SCContactPermissionResumeEntryPointWrapperScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031c565c; end: 1031c5663;  */

void FUN_1031c565c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1031c5748;
  func_0x0001000823a8();
  func_0x000100082720("SCContactPermissionResumeEntryPointWrapperScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031c5664; end: 1031c570b;  */

void FUN_1031c5664(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11061dc10;
  func_0x000107c613fc(&UNK_11061dc10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1031c5740;
  func_0x0001000823a8(FUN_1031c5740,puVar1);
  func_0x000100082720("SCContactPermissionResumeScopedServicesScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1031c570c; end: 1031c5713;  */

void FUN_1031c570c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11061dc10;
  func_0x000107c613fc(&UNK_11061dc10,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1031c5740;
  func_0x0001000823a8(FUN_1031c5740,puVar3);
  func_0x000100082720("SCContactPermissionResumeScopedServicesScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1031c5714; end: 1031c573f;  */

void FUN_1031c5714(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031c5740; end: 1031c574f;  */

void FUN_1031c5740(undefined8 *param_1)

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
  puVar1 = &UNK_11061da18;
  func_0x000107c613fc(&UNK_11061da18,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031c4aac;
  func_0x00010058fa64(FUN_1031c4aac,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031c5750; end: 1031c57d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031c5750(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1031c5b10();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f49c98) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f49ca0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c57d8);
  (*pcVar1)();
}



/* Entry: 1031c57d8; end: 1031c5837; -[_TtC39ContactPermissionResumeScopeGraphBridge54ContactPermissionResumeScopeGraphBridgeSaberEntryPoint init] */

void FUN_1031c57d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContactPermissionResumeScopeGraphBridge.ContactPermissionResumeScopeGraphBridgeSaberEntryPoint"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c5804);
  (*pcVar1)();
}



/* Entry: 1031c5838; end: 1031c586f; -[_TtC39ContactPermissionResumeScopeGraphBridge54ContactPermissionResumeScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031c5854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c5858) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c5838(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f49c98));
  return;
}



/* Entry: 1031c5870; end: 1031c5897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c5870(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f49ca0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f49c98));
  return;
}



/* Entry: 1031c5898; end: 1031c58b7;  */

void FUN_1031c5898(void)

{
  func_0x000107c61168(&PTR_PTR_1128c01e0);
  return;
}



/* Entry: 1031c58b8; end: 1031c593f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031c58b8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f49cd0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f49cd8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c5940);
  (*pcVar2)();
}



/* Entry: 1031c5940; end: 1031c5a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031c5940(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f49cd0);
  *(undefined **)(unaff_x20 + _DAT_112f49cd0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f49cd8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f49cd8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11061dd30;
  func_0x000107c613fc(&UNK_11061dd30,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1031c5a2c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1031c5a28; end: 1031c5a33;  */

void FUN_1031c5a28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031c5a34; end: 1031c5a93; -[_TtC39ContactPermissionResumeScopeGraphBridge54SCContactPermissionResumeScopedServicesSaberEntryPoint init] */

void FUN_1031c5a34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContactPermissionResumeScopeGraphBridge.SCContactPermissionResumeScopedServicesSaberEntryPoint"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c5a60);
  (*pcVar1)();
}



/* Entry: 1031c5a94; end: 1031c5acb; -[_TtC39ContactPermissionResumeScopeGraphBridge54SCContactPermissionResumeScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c5a94(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f49cd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f49cd0));
  return;
}



/* Entry: 1031c5acc; end: 1031c5acf;  */

void FUN_1031c5acc(void)

{
  return;
}



/* Entry: 1031c5ad0; end: 1031c5aef;  */

void FUN_1031c5ad0(void)

{
  FUN_1031c5940();
  return;
}



/* Entry: 1031c5af0; end: 1031c5b0f;  */

void FUN_1031c5af0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c02a8);
  return;
}



/* Entry: 1031c5b10; end: 1031c5bdf;  */

undefined8 FUN_1031c5b10(void)

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
  
  func_0x000107c61428(0x112f49d08,&uStack_40,0x20,0);
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
    FUN_1031c5be0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1031c5be0; end: 1031c5bff;  */

void FUN_1031c5be0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c0370);
  return;
}



/* Entry: 1031c5c00; end: 1031c5c6b;  */

void FUN_1031c5c00(void)

{
  func_0x0001000285a8(0x112f49d10,&UNK_10db97c58);
  func_0x0001000823a8(0x1031c5c40,0);
  return;
}



/* Entry: 1031c5c6c; end: 1031c5ca7; -[_TtC39ContactPermissionResumeScopeGraphBridge47ContactPermissionResumeScopeGraphBridgeServices init] */

void FUN_1031c5c6c(undefined8 param_1)

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



/* Entry: 1031c5ca8; end: 1031c5cdb;  */

void FUN_1031c5ca8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031c5cdc; end: 1031c5ce3;  */

undefined8 FUN_1031c5cdc(void)

{
  return 0x1b;
}



/* Entry: 1031c5ce4; end: 1031c5e5b;  */

void FUN_1031c5ce4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11061dd78;
  func_0x000107c613fc(&UNK_11061dd78,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1031c5e5c,puVar1);
  return;
}



/* Entry: 1031c5e5c; end: 1031c5e63;  */

void FUN_1031c5e5c(undefined8 *param_1)

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
  func_0x000107c61428(0x112f49d08,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f49d08,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11061de10;
  func_0x000107c613fc(&UNK_11061de10,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1031c5f10;
  func_0x00010058fa64(0x1031c5f10,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031c5e64; end: 1031c5ebf;  */

void FUN_1031c5e64(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f49d08,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f49d08,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1031c5ec0; end: 1031c5f17;  */

undefined ** FUN_1031c5ec0(void)

{
  return &PTR_DAT_1130668f8;
}



/* Entry: 1031c5f18; end: 1031c5f5f; -[SCContactPermissionResumeScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c5f18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f49d68;
  func_0x000107c61428(param_1 + _DAT_112f49d68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031c5f60; end: 1031c5fb7; -[SCContactPermissionResumeScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c5f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f49d68;
  func_0x000107c61428(param_1 + _DAT_112f49d68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031c5fb8; end: 1031c5fff; -[SCContactPermissionResumeScopeGraphBridgeSaberEntryPoint contactPermissionResumeScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c5fb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f49d70;
  func_0x000107c61428(param_1 + _DAT_112f49d70,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031c6000; end: 1031c6063; -[SCContactPermissionResumeScopeGraphBridgeSaberEntryPoint setContactPermissionResumeScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c6000(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f49d70;
  func_0x000107c61428(param_1 + _DAT_112f49d70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1031c6064; end: 1031c6197;  */

/* WARNING: Possible PIC construction at 0x0001031c611c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031c6138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031c6154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c6120) */
/* WARNING: Removing unreachable block (ram,0x0001031c613c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c6064(void)

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
  func_0x000107c40314();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1031c5898();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1031c5b10();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c6198);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f49c98) = lVar5;
    *(long *)(lVar4 + _DAT_112f49ca0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1031c6198; end: 1031c61bf; -[SCContactPermissionResumeScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1031c6198(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031c6064();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031c61c0; end: 1031c6203; -[SCContactPermissionResumeScopeGraphBridgeSaberEntryPoint end] */

void FUN_1031c61c0(undefined8 param_1)

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



/* Entry: 1031c6204; end: 1031c639b;  */

void FUN_1031c6204(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffca) || (param_3 != -0x7ffffffef0ed2580)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000036,0x800000010f12da80,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContactPermissionResumeScopeGraphBridge/SCContactPermissionResumeScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x66,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c639c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c537ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1031c639c; end: 1031c6447; -[SCContactPermissionResumeScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1031c639c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031c6204(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031c6448; end: 1031c64b3; -[SCContactPermissionResumeScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c6448(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f49d68,0);
  *(undefined8 *)(param_1 + _DAT_112f49d70) = 0;
  *(undefined8 *)(param_1 + _DAT_112f49d78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031c64b4; end: 1031c64e7;  */

void FUN_1031c64b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031c64e8; end: 1031c652f; -[SCContactPermissionResumeScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031c6514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c6518) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c64e8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f49d68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f49d70));
  return;
}



/* Entry: 1031c6530; end: 1031c654f;  */

void FUN_1031c6530(void)

{
  func_0x000107c61168(&PTR_PTR_1128c0420);
  return;
}



/* Entry: 1031c6550; end: 1031c6597; -[SCSCContactPermissionResumeScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c6550(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f49da8;
  func_0x000107c61428(param_1 + _DAT_112f49da8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031c6598; end: 1031c65ef; -[SCSCContactPermissionResumeScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c6598(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f49da8;
  func_0x000107c61428(param_1 + _DAT_112f49da8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031c65f0; end: 1031c66c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c65f0(undefined8 param_1,long param_2)

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
    FUN_1031c5af0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f49cd0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c66c8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f49cd8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f49db0);
    *(long **)(unaff_x20 + _DAT_112f49db0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1031c66c8; end: 1031c66ef; -[SCSCContactPermissionResumeScopedServicesSaberEntryPoint begin] */

void FUN_1031c66c8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031c65f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031c66f0; end: 1031c6867;  */

/* WARNING: Possible PIC construction at 0x0001031c6758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031c67f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c675c) */
/* WARNING: Removing unreachable block (ram,0x0001031c67f4) */
/* WARNING: Removing unreachable block (ram,0x0001031c680c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c66f0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f49db0);
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



/* Entry: 1031c6868; end: 1031c686f;  */

void FUN_1031c6868(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031c6870; end: 1031c68a3; -[SCSCContactPermissionResumeScopedServicesSaberEntryPoint end] */

void FUN_1031c6870(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1031c66f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1031c68a4; end: 1031c69c3;  */

void FUN_1031c68a4(long param_1,long param_2,long param_3)

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
                        "ContactPermissionResumeScopeGraphBridge/SCSCContactPermissionResumeScopedServicesSaberEntryPoint.swift"
                        ,0x66,2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c69c4);
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



/* Entry: 1031c69c4; end: 1031c6a6f; -[SCSCContactPermissionResumeScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1031c69c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031c68a4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031c6a70; end: 1031c6acf; -[SCSCContactPermissionResumeScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c6a70(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f49da8,0);
  *(undefined8 *)(param_1 + _DAT_112f49db0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031c6ad0; end: 1031c6b03;  */

void FUN_1031c6ad0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031c6b04; end: 1031c6b3b; -[SCSCContactPermissionResumeScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c6b04(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f49da8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f49db0));
  return;
}



/* Entry: 1031c6b3c; end: 1031c6b5b;  */

void FUN_1031c6b3c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c04e8);
  return;
}



/* Entry: 1031c6b5c; end: 1031c6bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c6b5c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1031c6f50();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f49de8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1031c6bc8; end: 1031c6c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c6bc8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f49de8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031c6c34; end: 1031c6c93; -[_TtC42ContactSupportScopedFactoryServiceProvider30SCContactSupportScopedServices init] */

void FUN_1031c6c34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContactSupportScopedFactoryServiceProvider.SCContactSupportScopedServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c6c60);
  (*pcVar1)();
}



/* Entry: 1031c6c94; end: 1031c6ca3; -[_TtC42ContactSupportScopedFactoryServiceProvider30SCContactSupportScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c6c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f49de8));
  return;
}



/* Entry: 1031c6ca4; end: 1031c6d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c6ca4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11061e028;
  func_0x000107c613fc(&UNK_11061e028,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1031c6fe8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1031c6d10; end: 1031c6dab;  */

void FUN_1031c6d10(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11061df38;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11061df38;
  return;
}



/* Entry: 1031c6dac; end: 1031c6de3;  */

void FUN_1031c6dac(long *param_1)

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



/* Entry: 1031c6de4; end: 1031c6deb;  */

undefined8 FUN_1031c6de4(void)

{
  return 0x1b;
}



/* Entry: 1031c6dec; end: 1031c6f1f;  */

void FUN_1031c6dec(undefined8 *param_1)

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
  puVar1 = &UNK_11061e050;
  func_0x000107c613fc(&UNK_11061e050,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031c6fc0;
  func_0x00010058fa64(FUN_1031c6fc0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031c6f20; end: 1031c6f4f;  */

undefined ** FUN_1031c6f20(void)

{
  return &PTR_DAT_113066910;
}



/* Entry: 1031c6f50; end: 1031c6f6f;  */

void FUN_1031c6f50(void)

{
  func_0x000107c61168(&PTR_PTR_1128c05a8);
  return;
}



/* Entry: 1031c6f70; end: 1031c6fbf;  */

undefined1  [16] FUN_1031c6f70(void)

{
  return ZEXT816(0x11061df88);
}



/* Entry: 1031c6fc0; end: 1031c6fe7;  */

void FUN_1031c6fc0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1031c6fe8; end: 1031c6ffb;  */

void FUN_1031c6fe8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031c6ffc; end: 1031c7313;  */

void FUN_1031c6ffc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112f49e60,&UNK_10db98068);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1031c8300();
  func_0x000100082720("ContactSupportScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f49e68,&UNK_10db98070);
  puVar3 = &UNK_11061e100;
  func_0x000107c613fc(&UNK_11061e100,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar8 = 0x1031c7320;
  func_0x0001000823a8(0x1031c7320,puVar3);
  func_0x000100082720("SCContactSupportScopeEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1031c6dac;
  func_0x0001000823a8(FUN_1031c6dac,0);
  func_0x000100082720("SCContactSupportScopedServicesCleanupRelayServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f49e70,&UNK_10db98080);
  puVar3 = &UNK_11061e128;
  func_0x000107c613fc(&UNK_11061e128,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_1031c7368;
  func_0x0001000823a8(FUN_1031c7368,puVar3);
  func_0x000100082720("SCContactSupportScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112f49df0,&UNK_10db97e30);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1031c7374;
  func_0x0001000823a8(0x1031c7374,pcVar5);
  func_0x000100082720("SCContactSupportScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f49de0,&UNK_10db97e20);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1031c737c;
  func_0x0001000823a8(0x1031c737c,uVar6);
  func_0x000100082720("SCContactSupportScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11061e150;
  func_0x000107c613fc(&UNK_11061e150,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1031c7384;
  func_0x0001000823a8(0x1031c7384,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCContactSupportScopeEntryPointProvider",0x27,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1031c7314; end: 1031c732b;  */

void FUN_1031c7314(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f49e60,&UNK_10db98068);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1031c8300();
  func_0x000100082720("ContactSupportScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f49e68,&UNK_10db98070);
  puVar3 = &UNK_11061e100;
  func_0x000107c613fc(&UNK_11061e100,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  uVar4 = 0x1031c7320;
  func_0x0001000823a8(0x1031c7320,puVar3);
  func_0x000100082720("SCContactSupportScopeEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_1031c6dac;
  func_0x0001000823a8(FUN_1031c6dac,0);
  func_0x000100082720("SCContactSupportScopedServicesCleanupRelayServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f49e70,&UNK_10db98080);
  puVar3 = &UNK_11061e128;
  func_0x000107c613fc(&UNK_11061e128,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(code **)(puVar3 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  pcVar6 = FUN_1031c7368;
  func_0x0001000823a8(FUN_1031c7368,puVar3);
  func_0x000100082720("SCContactSupportScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112f49df0,&UNK_10db97e30);
  func_0x000107c6157c(pcVar6);
  uVar7 = 0x1031c7374;
  func_0x0001000823a8(0x1031c7374,pcVar6);
  func_0x000100082720("SCContactSupportScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f49de0,&UNK_10db97e20);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1031c737c;
  func_0x0001000823a8(0x1031c737c,uVar7);
  func_0x000100082720("SCContactSupportScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11061e150;
  func_0x000107c613fc(&UNK_11061e150,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x1031c7384;
  func_0x0001000823a8(0x1031c7384,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCContactSupportScopeEntryPointProvider",0x27,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 1031c732c; end: 1031c7367;  */

void FUN_1031c732c(void)

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



/* Entry: 1031c7368; end: 1031c738b;  */

void FUN_1031c7368(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1031c7abc(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCContactSupportScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031c738c; end: 1031c761f;  */

void FUN_1031c738c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_1031c7a0c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126acd90;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f12dda0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 1031c7620; end: 1031c76a7;  */

undefined8
FUN_1031c7620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1031c77d4(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 1031c76a8; end: 1031c76e3;  */

void FUN_1031c76a8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031c76e4; end: 1031c76eb;  */

undefined8 FUN_1031c76e4(void)

{
  return 0x1b;
}



/* Entry: 1031c76ec; end: 1031c776f;  */

void FUN_1031c76ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1031c7a4c,param_2,FUN_1031c7a50,param_2,FUN_1031c7a78,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1031c7770; end: 1031c77bf;  */

undefined8 FUN_1031c7770(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1031c77c0; end: 1031c77d3;  */

void FUN_1031c77c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11061e168;
  return;
}



/* Entry: 1031c77d4; end: 1031c79ef;  */

void FUN_1031c77d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126acd90;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f12dda0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1031c79f0; end: 1031c7a0b;  */

undefined ** FUN_1031c79f0(void)

{
  return &PTR_DAT_113066910;
}


