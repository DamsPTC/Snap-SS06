/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102275bb4; end: 102275c1f;  */

void FUN_102275bb4(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e778b0,&UNK_10da80520);
  func_0x000107c613fc();
  pcVar1 = FUN_102275c30;
  func_0x0001000841fc(FUN_102275c30,0);
  func_0x000100084214(&UNK_10da804f0,0x2c,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 102275c20; end: 102275c2f;  */

undefined1  [16] FUN_102275c20(void)

{
  return ZEXT816(0x1104ec380);
}



/* Entry: 102275c30; end: 102275ea7;  */

void FUN_102275c30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  
  uVar7 = *param_2;
  func_0x0001000285a8(0x112e778b8,&UNK_10da80528);
  puVar1 = &uStack_68;
  uStack_68 = uVar7;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102276674();
  func_0x000100082720("MemoriesPickerScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_102275930;
  func_0x0001000823a8(FUN_102275930,0);
  func_0x000100082720("SCMemoriesPickerScopedServicesCleanupRelayServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e778c0,&UNK_10da80538);
  puVar4 = &UNK_1104ec3a0;
  func_0x000107c613fc(&UNK_1104ec3a0,0x28,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(undefined8 **)(puVar4 + 0x18) = puVar2;
  *(code **)(puVar4 + 0x20) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar3);
  pcVar5 = FUN_102275ea8;
  func_0x0001000823a8(FUN_102275ea8,puVar4);
  func_0x000100082720("SCMemoriesPickerScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e77840,&UNK_10da802f0);
  func_0x000107c6157c(pcVar5);
  uVar7 = 0x102275eb4;
  func_0x0001000823a8(0x102275eb4,pcVar5);
  func_0x000100082720("SCMemoriesPickerScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e77830,&UNK_10da802e0);
  func_0x000107c6157c(uVar7);
  uVar6 = 0x102275ebc;
  func_0x0001000823a8(0x102275ebc,uVar7);
  func_0x000100082720("SCMemoriesPickerScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_1104ec3c8;
  func_0x000107c613fc(&UNK_1104ec3c8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(code **)(puVar4 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  uVar6 = 0x102275ec4;
  func_0x0001000823a8(0x102275ec4,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCMemoriesPickerScopeEntryPointProvider",0x27,2);
  *param_1 = uVar6;
  return;
}



/* Entry: 102275ea8; end: 102275ecb;  */

void FUN_102275ea8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102275f08(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000a7f38("SCMemoriesPickerScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102275ecc; end: 102275f07;  */

void FUN_102275ecc(undefined8 *param_1,undefined8 param_2)

{
  FUN_102275f08();
  func_0x0001000a7f38("SCMemoriesPickerScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102275f08; end: 10227609f;  */

void FUN_102275f08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1104fdca0;
  ppuVar4 = &PTR_DAT_112e92e58;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104ec3f0;
  func_0x000107c613fc(&UNK_1104ec3f0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e778c8;
  func_0x0001000285a8(0x112e778c8,&UNK_10da80540);
  func_0x0001000a6ee8(&UNK_1104ec5d0,"MemoriesPickerScopeGraphBridgeScopeInitializationPluginKey",
                      0x3a,2,FUN_1022760a0,puVar2,uVar3,&UNK_1104ec5d0,&PTR_DAT_112e77958);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1104ec418;
  func_0x000107c613fc(&UNK_1104ec418,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104ec2b8,"SCMemoriesPickerScopedServicesScopeInitializationPluginKey",
                      0x3a,2,FUN_102276188,puVar2,uVar3,&UNK_1104ec2b8,&PTR_DAT_112e77848);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e778d0;
  func_0x0001000285a8(0x112e778d0,&UNK_10da80548);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1022760a0; end: 1022760df;  */

void FUN_1022760a0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102276758(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("MemoriesPickerScopeGraphBridgeScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022760e0; end: 102276187;  */

void FUN_1022760e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104ec440;
  func_0x000107c613fc(&UNK_1104ec440,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1022761bc;
  func_0x0001000823a8(FUN_1022761bc,puVar1);
  func_0x000100082720("SCMemoriesPickerScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102276188; end: 10227618f;  */

void FUN_102276188(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104ec440;
  func_0x000107c613fc(&UNK_1104ec440,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1022761bc;
  func_0x0001000823a8(FUN_1022761bc,puVar3);
  func_0x000100082720("SCMemoriesPickerScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102276190; end: 1022761bb;  */

void FUN_102276190(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022761bc; end: 1022761c3;  */

void FUN_1022761bc(undefined8 *param_1)

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
  puVar1 = &UNK_1104ec340;
  func_0x000107c613fc(&UNK_1104ec340,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102275b88;
  func_0x00010058fa64(FUN_102275b88,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1022761c4; end: 10227624b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1022761c4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102276584();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e778d8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e778e0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10227624c);
  (*pcVar1)();
}



/* Entry: 10227624c; end: 1022762ab; -[_TtC30MemoriesPickerScopeGraphBridge45MemoriesPickerScopeGraphBridgeSaberEntryPoint init] */

void FUN_10227624c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesPickerScopeGraphBridge.MemoriesPickerScopeGraphBridgeSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102276278);
  (*pcVar1)();
}



/* Entry: 1022762ac; end: 1022762e3; -[_TtC30MemoriesPickerScopeGraphBridge45MemoriesPickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022762c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022762cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022762ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e778d8));
  return;
}



/* Entry: 1022762e4; end: 10227630b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022762e4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e778e0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e778d8));
  return;
}



/* Entry: 10227630c; end: 10227632b;  */

void FUN_10227630c(void)

{
  func_0x000107c61168(&PTR_PTR_11282ffc8);
  return;
}



/* Entry: 10227632c; end: 1022763b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10227632c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e77910) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e77918);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1022763b4);
  (*pcVar2)();
}



/* Entry: 1022763b4; end: 10227649b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1022763b4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e77910);
  *(undefined **)(unaff_x20 + _DAT_112e77910) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e77918);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e77918))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104ec530;
  func_0x000107c613fc(&UNK_1104ec530,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1022764a0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10227649c; end: 1022764a7;  */

void FUN_10227649c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1022764a8; end: 102276507; -[_TtC30MemoriesPickerScopeGraphBridge45SCMemoriesPickerScopedServicesSaberEntryPoint init] */

void FUN_1022764a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesPickerScopeGraphBridge.SCMemoriesPickerScopedServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022764d4);
  (*pcVar1)();
}



/* Entry: 102276508; end: 10227653f; -[_TtC30MemoriesPickerScopeGraphBridge45SCMemoriesPickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102276508(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e77918));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e77910));
  return;
}



/* Entry: 102276540; end: 102276543;  */

void FUN_102276540(void)

{
  return;
}



/* Entry: 102276544; end: 102276563;  */

void FUN_102276544(void)

{
  FUN_1022763b4();
  return;
}



/* Entry: 102276564; end: 102276583;  */

void FUN_102276564(void)

{
  func_0x000107c61168(&PTR_PTR_112830090);
  return;
}



/* Entry: 102276584; end: 102276653;  */

undefined8 FUN_102276584(void)

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
  
  func_0x000107c61428(0x112e77948,&uStack_40,0x20,0);
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
    FUN_102276654();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102276654; end: 102276673;  */

void FUN_102276654(void)

{
  func_0x000107c61168(&PTR_PTR_112830158);
  return;
}



/* Entry: 102276674; end: 1022766df;  */

void FUN_102276674(void)

{
  func_0x0001000285a8(0x112e77950,&UNK_10da805f8);
  func_0x0001000823a8(0x1022766b4,0);
  return;
}



/* Entry: 1022766e0; end: 10227671b; -[_TtC30MemoriesPickerScopeGraphBridge38MemoriesPickerScopeGraphBridgeServices init] */

void FUN_1022766e0(undefined8 param_1)

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



/* Entry: 10227671c; end: 10227674f;  */

void FUN_10227671c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102276750; end: 102276757;  */

undefined8 FUN_102276750(void)

{
  return 0x1b;
}



/* Entry: 102276758; end: 1022768cf;  */

void FUN_102276758(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104ec578;
  func_0x000107c613fc(&UNK_1104ec578,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1022768d0,puVar1);
  return;
}



/* Entry: 1022768d0; end: 1022768d7;  */

void FUN_1022768d0(undefined8 *param_1)

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
  func_0x000107c61428(0x112e77948,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e77948,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104ec610;
  func_0x000107c613fc(&UNK_1104ec610,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102276984;
  func_0x00010058fa64(0x102276984,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1022768d8; end: 102276933;  */

void FUN_1022768d8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e77948,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e77948,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102276934; end: 10227698b;  */

undefined ** FUN_102276934(void)

{
  return &PTR_DAT_112e92e58;
}



/* Entry: 10227698c; end: 1022769d3; -[SCMemoriesPickerScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227698c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e779a8;
  func_0x000107c61428(param_1 + _DAT_112e779a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022769d4; end: 102276a2b; -[SCMemoriesPickerScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022769d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e779a8;
  func_0x000107c61428(param_1 + _DAT_112e779a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102276a2c; end: 102276a73; -[SCMemoriesPickerScopeGraphBridgeSaberEntryPoint memoriesPickerScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102276a2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e779b0;
  func_0x000107c61428(param_1 + _DAT_112e779b0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102276a74; end: 102276ad7; -[SCMemoriesPickerScopeGraphBridgeSaberEntryPoint setMemoriesPickerScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102276a74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e779b0;
  func_0x000107c61428(param_1 + _DAT_112e779b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102276ad8; end: 102276c0b;  */

/* WARNING: Possible PIC construction at 0x000102276b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102276bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102276bc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102276b94) */
/* WARNING: Removing unreachable block (ram,0x000102276bb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102276ad8(void)

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
  func_0x000107c4cc18();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_10227630c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_102276584();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102276c0c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e778d8) = lVar5;
    *(long *)(lVar4 + _DAT_112e778e0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102276c0c; end: 102276c33; -[SCMemoriesPickerScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102276c0c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102276ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102276c34; end: 102276c77; -[SCMemoriesPickerScopeGraphBridgeSaberEntryPoint end] */

void FUN_102276c34(undefined8 param_1)

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



/* Entry: 102276c78; end: 102276e0f;  */

void FUN_102276c78(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0f83de0)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f07c220,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MemoriesPickerScopeGraphBridge/SCMemoriesPickerScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x54,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102276e10);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56594();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102276e10; end: 102276ebb; -[SCMemoriesPickerScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102276e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102276c78(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102276ebc; end: 102276f27; -[SCMemoriesPickerScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102276ebc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e779a8,0);
  *(undefined8 *)(param_1 + _DAT_112e779b0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e779b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102276f28; end: 102276f5b;  */

void FUN_102276f28(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102276f5c; end: 102276fa3; -[SCMemoriesPickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102276f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102276f8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102276f5c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e779a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e779b0));
  return;
}



/* Entry: 102276fa4; end: 102276fc3;  */

void FUN_102276fa4(void)

{
  func_0x000107c61168(&PTR_PTR_112830208);
  return;
}



/* Entry: 102276fc4; end: 10227700b; -[SCSCMemoriesPickerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102276fc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e779e8;
  func_0x000107c61428(param_1 + _DAT_112e779e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10227700c; end: 102277063; -[SCSCMemoriesPickerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227700c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e779e8;
  func_0x000107c61428(param_1 + _DAT_112e779e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102277064; end: 10227713b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102277064(undefined8 param_1,long param_2)

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
    FUN_102276564();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e77910) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10227713c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e77918);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e779f0);
    *(long **)(unaff_x20 + _DAT_112e779f0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10227713c; end: 102277163; -[SCSCMemoriesPickerScopedServicesSaberEntryPoint begin] */

void FUN_10227713c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102277064();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102277164; end: 1022772db;  */

/* WARNING: Possible PIC construction at 0x0001022771cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102277264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022771d0) */
/* WARNING: Removing unreachable block (ram,0x000102277268) */
/* WARNING: Removing unreachable block (ram,0x000102277280) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102277164(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e779f0);
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



/* Entry: 1022772dc; end: 1022772e3;  */

void FUN_1022772dc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1022772e4; end: 102277317; -[SCSCMemoriesPickerScopedServicesSaberEntryPoint end] */

void FUN_1022772e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102277164();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102277318; end: 102277437;  */

void FUN_102277318(long param_1,long param_2,long param_3)

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
                        "MemoriesPickerScopeGraphBridge/SCSCMemoriesPickerScopedServicesSaberEntryPoint.swift"
                        ,0x54,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102277438);
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



/* Entry: 102277438; end: 1022774e3; -[SCSCMemoriesPickerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102277438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102277318(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1022774e4; end: 102277543; -[SCSCMemoriesPickerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022774e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e779e8,0);
  *(undefined8 *)(param_1 + _DAT_112e779f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102277544; end: 102277577;  */

void FUN_102277544(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102277578; end: 1022775af; -[SCSCMemoriesPickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102277578(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e779e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e779f0));
  return;
}



/* Entry: 1022775b0; end: 1022775cf;  */

void FUN_1022775b0(void)

{
  func_0x000107c61168(&PTR_PTR_1128302d0);
  return;
}



/* Entry: 1022775d0; end: 10227763b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022775d0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1022779c4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e77a28) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10227763c; end: 1022776a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227763c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e77a28) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022776a8; end: 102277707; -[_TtC44MemoriesPickerV2ScopedFactoryServiceProvider32SCMemoriesPickerV2ScopedServices init] */

void FUN_1022776a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesPickerV2ScopedFactoryServiceProvider.SCMemoriesPickerV2ScopedServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022776d4);
  (*pcVar1)();
}



/* Entry: 102277708; end: 102277717; -[_TtC44MemoriesPickerV2ScopedFactoryServiceProvider32SCMemoriesPickerV2ScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102277708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e77a28));
  return;
}



/* Entry: 102277718; end: 102277783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102277718(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104ec828;
  func_0x000107c613fc(&UNK_1104ec828,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102277aa0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102277784; end: 10227781f;  */

void FUN_102277784(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104ec738;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104ec738;
  return;
}



/* Entry: 102277820; end: 102277857;  */

void FUN_102277820(long *param_1)

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



/* Entry: 102277858; end: 10227785f;  */

undefined8 FUN_102277858(void)

{
  return 0x1b;
}



/* Entry: 102277860; end: 102277993;  */

void FUN_102277860(undefined8 *param_1)

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
  puVar1 = &UNK_1104ec850;
  func_0x000107c613fc(&UNK_1104ec850,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102277a78;
  func_0x00010058fa64(FUN_102277a78,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102277994; end: 1022779c3;  */

undefined ** FUN_102277994(void)

{
  return &PTR_DAT_112ff21f8;
}



/* Entry: 1022779c4; end: 1022779e3;  */

void FUN_1022779c4(void)

{
  func_0x000107c61168(&PTR_PTR_112830390);
  return;
}



/* Entry: 1022779e4; end: 102277a33;  */

undefined1  [16] FUN_1022779e4(void)

{
  return ZEXT816(0x1104ec788);
}



/* Entry: 102277a34; end: 102277a77;  */

void FUN_102277a34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e77a90 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aa280;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e77a90 = puVar1;
  return;
}



/* Entry: 102277a78; end: 102277a9f;  */

void FUN_102277a78(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102277aa0; end: 102277aa3;  */

void FUN_102277aa0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102277aa4; end: 102277d13;  */

/* WARNING: Possible PIC construction at 0x000102277c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102277c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102277c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102277c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102277c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102277c74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102277c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102277c94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102277ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102277cb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102277cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102277cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102277ce4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102277cd8) */
/* WARNING: Removing unreachable block (ram,0x000102277cc8) */
/* WARNING: Removing unreachable block (ram,0x000102277cb8) */
/* WARNING: Removing unreachable block (ram,0x000102277ca8) */
/* WARNING: Removing unreachable block (ram,0x000102277c98) */
/* WARNING: Removing unreachable block (ram,0x000102277c88) */
/* WARNING: Removing unreachable block (ram,0x000102277c78) */
/* WARNING: Removing unreachable block (ram,0x000102277c68) */
/* WARNING: Removing unreachable block (ram,0x000102277c58) */
/* WARNING: Removing unreachable block (ram,0x000102277c48) */
/* WARNING: Removing unreachable block (ram,0x000102277c38) */
/* WARNING: Removing unreachable block (ram,0x000102277c28) */
/* WARNING: Removing unreachable block (ram,0x000102277ce8) */

void FUN_102277aa4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104ec8d8;
  func_0x000107c613fc(&UNK_1104ec8d8,0xe8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  uVar2 = 0x112e77aa0;
  func_0x0001000285a8(0x112e77aa0,&UNK_10da809e0);
  func_0x000107c613fc();
  uVar3 = 0x102278490;
  func_0x0001000841fc(0x102278490,puVar1,uVar2);
  func_0x000100084214(&UNK_10da809b0,0x2e,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102277d14; end: 102277d6f;  */

void FUN_102277d14(void)

{
  long unaff_x20;
  
  FUN_102277aa4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 102277d70; end: 102277d7f;  */

undefined1  [16] FUN_102277d70(void)

{
  return ZEXT816(0x1104ec8b8);
}



/* Entry: 102277d80; end: 10227839b;  */

void FUN_102277d80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 auStack_70 [2];
  
  uVar14 = *param_2;
  func_0x0001000285a8(0x112e77aa8,&UNK_10da809e8);
  puVar1 = auStack_70;
  auStack_70[0] = uVar14;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x00010227b7b8();
  pcVar3 = "QuickCaptureCameraScopeExposerSubjectServiceProvider";
  func_0x000100082720("QuickCaptureCameraScopeExposerSubjectServiceProvider",0x34,2);
  func_0x00010227b838();
  pcVar4 = "SCMediaImportEditorScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMediaImportEditorScopeExposerSubjectServiceProvider",0x35,2);
  FUN_10227b884();
  func_0x000100082720("SCMemoriesCameraRollAlbumPickerScopeExposerSubjectServiceProvider",0x41,2);
  puVar5 = puVar2;
  FUN_10227b7f8();
  func_0x000100082720("QuickCaptureCameraScopeExposerObservableServiceProvider",0x37,2);
  pcVar6 = pcVar3;
  FUN_10227b878();
  func_0x000100082720("SCMediaImportEditorScopeExposerObservableServiceProvider",0x38,2);
  pcVar7 = pcVar4;
  FUN_10227b910();
  func_0x000100082720("SCMemoriesCameraRollAlbumPickerScopeExposerObservableServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar8 = FUN_102277820;
  func_0x0001000823a8(FUN_102277820,0);
  func_0x000100082720("SCMemoriesPickerV2ScopedServicesCleanupRelayServiceProvider",0x3b,2);
  puVar9 = puVar2;
  FUN_10227b554(puVar2,pcVar3,pcVar4);
  func_0x000100082720("MemoriesPickerV2ScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e77ab0,&UNK_10da80a00);
  puVar10 = &UNK_1104ec900;
  func_0x000107c613fc(&UNK_1104ec900,0x108,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar1;
  *(undefined8 *)(puVar10 + 0x18) = param_3;
  *(undefined8 *)(puVar10 + 0x20) = param_4;
  *(undefined8 *)(puVar10 + 0x28) = param_5;
  *(undefined8 *)(puVar10 + 0x30) = param_6;
  *(undefined8 *)(puVar10 + 0x38) = param_7;
  *(undefined8 *)(puVar10 + 0x40) = param_8;
  *(undefined8 *)(puVar10 + 0x48) = param_9;
  *(undefined8 *)(puVar10 + 0x50) = param_10;
  *(undefined8 *)(puVar10 + 0x58) = param_11;
  *(undefined8 *)(puVar10 + 0x60) = param_12;
  *(undefined8 *)(puVar10 + 0x68) = param_13;
  *(undefined8 *)(puVar10 + 0x70) = param_14;
  *(undefined8 *)(puVar10 + 0x78) = param_15;
  *(undefined8 *)(puVar10 + 0x80) = param_16;
  *(undefined8 *)(puVar10 + 0x88) = param_17;
  *(undefined8 *)(puVar10 + 0x90) = param_18;
  *(undefined8 *)(puVar10 + 0x98) = param_19;
  *(undefined8 *)(puVar10 + 0xa0) = param_20;
  *(undefined8 *)(puVar10 + 0xa8) = param_21;
  *(undefined8 *)(puVar10 + 0xb0) = param_22;
  *(undefined8 *)(puVar10 + 0xb8) = param_23;
  *(undefined8 *)(puVar10 + 0xc0) = param_24;
  *(undefined8 *)(puVar10 + 200) = param_25;
  *(undefined8 *)(puVar10 + 0xd0) = param_26;
  *(undefined8 *)(puVar10 + 0xd8) = param_27;
  *(undefined8 *)(puVar10 + 0xe0) = param_28;
  *(undefined8 *)(puVar10 + 0xe8) = param_29;
  *(char **)(puVar10 + 0xf0) = pcVar7;
  *(char **)(puVar10 + 0xf8) = pcVar6;
  *(undefined8 **)(puVar10 + 0x100) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(puVar5);
  uVar14 = 0x1022784fc;
  func_0x0001000823a8(0x1022784fc,puVar10);
  func_0x000100082720("SCMemoriesPickerV2EntryPointWrapperServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e77ab8,&UNK_10da809f0);
  puVar10 = &UNK_1104ec928;
  func_0x000107c613fc(&UNK_1104ec928,0x30,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar1;
  *(undefined8 **)(puVar10 + 0x18) = puVar9;
  *(undefined8 *)(puVar10 + 0x20) = uVar14;
  *(code **)(puVar10 + 0x28) = pcVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(pcVar8);
  pcVar11 = FUN_102278560;
  func_0x0001000823a8(FUN_102278560,puVar10);
  func_0x000100082720("SCMemoriesPickerV2ScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e77a30,&UNK_10da80790);
  func_0x000107c6157c(pcVar11);
  uVar12 = 0x10227856c;
  func_0x0001000823a8(0x10227856c,pcVar11);
  func_0x000100082720("SCMemoriesPickerV2ScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e77a20,&UNK_10da80780);
  func_0x000107c6157c(uVar12);
  uVar13 = 0x102278574;
  func_0x0001000823a8(0x102278574,uVar12);
  func_0x000100082720("SCMemoriesPickerV2ScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar10 = &UNK_1104ec950;
  func_0x000107c613fc(&UNK_1104ec950,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar13;
  *(code **)(puVar10 + 0x18) = pcVar8;
  func_0x000107c6157c(pcVar8);
  uVar13 = 0x10227857c;
  func_0x0001000823a8(0x10227857c,puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(uVar12);
  func_0x000100082720("SCMemoriesPickerV2ScopeEntryPointProvider",0x29,2);
  *param_1 = uVar13;
  return;
}



/* Entry: 10227839c; end: 10227855f;  */

void FUN_10227839c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102278560; end: 102278583;  */

void FUN_102278560(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10227ac3c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCMemoriesPickerV2ScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102278584; end: 10227a953;  */

void FUN_102278584(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  func_0x000100083b20(&uStack_148);
  func_0x000100083b20(&uStack_150);
  func_0x000100083b20(&uStack_158);
  func_0x000100083b20(&uStack_160);
  FUN_10227ab8c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  *(undefined8 *)(param_2 + 0x88) = uStack_d0;
  *(undefined8 *)(param_2 + 0x90) = uStack_d8;
  *(undefined8 *)(param_2 + 0x98) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_100;
  *(undefined8 *)(param_2 + 0xc0) = uStack_108;
  *(undefined8 *)(param_2 + 200) = uStack_110;
  *(undefined8 *)(param_2 + 0xd0) = uStack_118;
  *(undefined8 *)(param_2 + 0xd8) = uStack_120;
  *(undefined8 *)(param_2 + 0xe0) = uStack_128;
  *(undefined8 *)(param_2 + 0xe8) = uStack_130;
  *(undefined8 *)(param_2 + 0xf0) = uStack_138;
  *(undefined8 *)(param_2 + 0xf8) = uStack_140;
  *(undefined8 *)(param_2 + 0x100) = uStack_148;
  func_0x0001000285a8(0x112e77ac0,&UNK_10da80a08);
  func_0x000107c610f8();
  uVar14 = uStack_78;
  func_0x000107c61174();
  uVar16 = uStack_80;
  func_0x000107c61174();
  uVar17 = uStack_88;
  func_0x000107c61174();
  uVar1 = uStack_90;
  func_0x000107c61174();
  uVar2 = uStack_98;
  func_0x000107c61174();
  uVar3 = uStack_a0;
  func_0x000107c61174();
  uVar4 = uStack_a8;
  func_0x000107c61174();
  uVar5 = uStack_b0;
  func_0x000107c61174();
  uVar6 = uStack_b8;
  func_0x000107c61174();
  uVar7 = uStack_c0;
  func_0x000107c61174();
  uVar8 = uStack_c8;
  func_0x000107c61174();
  uVar9 = uStack_d0;
  func_0x000107c61174();
  uVar10 = uStack_d8;
  func_0x000107c61174();
  uVar11 = uStack_e0;
  func_0x000107c61174();
  uVar18 = uStack_e8;
  func_0x000107c61174();
  uVar19 = uStack_f0;
  func_0x000107c61174();
  uVar20 = uStack_f8;
  func_0x000107c61174();
  uVar21 = uStack_100;
  func_0x000107c61174();
  uVar22 = uStack_108;
  func_0x000107c61174();
  uVar23 = uStack_110;
  func_0x000107c61174();
  uVar24 = uStack_118;
  func_0x000107c61174();
  uVar25 = uStack_120;
  func_0x000107c61174();
  uVar26 = uStack_128;
  func_0x000107c61174();
  uVar27 = uStack_130;
  func_0x000107c61174();
  uVar28 = uStack_138;
  func_0x000107c61174();
  uVar29 = uStack_140;
  func_0x000107c61174();
  uVar30 = uStack_148;
  func_0x000107c61174();
  uVar15 = uStack_150;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x18) = puVar12;
  func_0x0001000285a8(0x112e77ac8,&UNK_10da80a10);
  func_0x000107c610f8();
  uVar15 = uStack_158;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x20) = puVar12;
  func_0x0001000285a8(0x112e77ad0,&UNK_10da80a18);
  func_0x000107c610f8();
  uVar15 = uStack_160;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x28) = puVar12;
  puVar12 = PTR_PTR_1126aa288;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar12;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar35 = 0xd000000000000015;
  uVar15 = uVar35;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f07c590);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  uVar31 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(uVar31);
  uVar32 = 0xd000000000000010;
  uVar15 = uVar32;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar33 = 0xd00000000000001c;
  uVar15 = uVar33;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar34 = 0xd000000000000017;
  uVar15 = uVar34;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef325d0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar32);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(uVar31);
  uVar15 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar34);
  uVar31 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar32 = 0xd00000000000001a;
  uVar15 = uVar32;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f067600);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef19c70);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar32);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef28ec0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f07c5b0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar33);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef39bb0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar32 = 0xd000000000000011;
  uVar15 = uVar32;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef29390);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d2e0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1dff0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar35);
  uVar31 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef2e900);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar32);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f07c5d0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1df60);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010ef29970);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar32 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f07c600);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar32);
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar32 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f07c630);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar32);
  uVar15 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar32 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f07c650);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar32);
  func_0x000107c3e740(uVar31);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61574(uStack_150);
  func_0x000107c61574(uStack_158);
  func_0x000107c61574(uStack_160);
  *param_1 = param_2;
  return;
}



/* Entry: 10227a954; end: 10227aa7f;  */

void FUN_10227a954(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  return;
}



/* Entry: 10227aa80; end: 10227aa87;  */

undefined8 FUN_10227aa80(void)

{
  return 0x1b;
}



/* Entry: 10227aa88; end: 10227ab0b;  */

void FUN_10227aa88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10227abcc,param_2,FUN_10227abd0,param_2,FUN_10227abf8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10227ab0c; end: 10227ab5b;  */

undefined8 FUN_10227ab0c(void)

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



/* Entry: 10227ab5c; end: 10227ab8b;  */

undefined ** FUN_10227ab5c(void)

{
  return &PTR_DAT_112ff21f8;
}



/* Entry: 10227ab8c; end: 10227abab;  */

void FUN_10227ab8c(void)

{
  func_0x000107c61168(&PTR_PTR_112e77b40);
  return;
}



/* Entry: 10227abac; end: 10227abcf;  */

undefined1  [16] FUN_10227abac(void)

{
  return ZEXT816(0x1104ec9a8);
}



/* Entry: 10227abd0; end: 10227abf7;  */

void FUN_10227abd0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10227abf8; end: 10227abff;  */

undefined8 FUN_10227abf8(void)

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



/* Entry: 10227ac00; end: 10227ac3b;  */

void FUN_10227ac00(undefined8 *param_1,undefined8 param_2)

{
  FUN_10227ac3c();
  func_0x0001000a7f38("SCMemoriesPickerV2ScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10227ac3c; end: 10227ae27;  */

void FUN_10227ac3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106dd7d8;
  ppuVar4 = &PTR_DAT_112ff21f8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104ec9f8;
  func_0x000107c613fc(&UNK_1104ec9f8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e77c90;
  func_0x0001000285a8(0x112e77c90,&UNK_10da80c38);
  func_0x0001000a6ee8(&UNK_1104eccf0,"MemoriesPickerV2ScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_10227ae28,puVar2,uVar3,&UNK_1104eccf0,&PTR_DAT_112e77d38);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104ec9a8,
                      "SCMemoriesPickerV2EntryPointWrapperScopeInitializationPluginKey",0x3f,2,
                      FUN_10227aedc,param_3,uVar3,&UNK_1104ec9a8,&PTR_DAT_112e77ad8);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104eca20;
  func_0x000107c613fc(&UNK_1104eca20,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104ec7c8,"SCMemoriesPickerV2ScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_10227af8c,puVar2,uVar3,&UNK_1104ec7c8,&PTR_DAT_112e77a38);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e77c98;
  func_0x0001000285a8(0x112e77c98,&UNK_10da80c40);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10227ae28; end: 10227ae67;  */

void FUN_10227ae28(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10227b97c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("MemoriesPickerV2ScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10227ae68; end: 10227aedb;  */

void FUN_10227ae68(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10227afc8;
  func_0x0001000823a8(0x10227afc8,param_3);
  func_0x000100082720("SCMemoriesPickerV2EntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 10227aedc; end: 10227aee3;  */

void FUN_10227aedc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10227afc8;
  func_0x0001000823a8();
  func_0x000100082720("SCMemoriesPickerV2EntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 10227aee4; end: 10227af8b;  */

void FUN_10227aee4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104eca48;
  func_0x000107c613fc(&UNK_1104eca48,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10227afc0;
  func_0x0001000823a8(FUN_10227afc0,puVar1);
  func_0x000100082720("SCMemoriesPickerV2ScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10227af8c; end: 10227af93;  */

void FUN_10227af8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104eca48;
  func_0x000107c613fc(&UNK_1104eca48,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10227afc0;
  func_0x0001000823a8(FUN_10227afc0,puVar3);
  func_0x000100082720("SCMemoriesPickerV2ScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10227af94; end: 10227afbf;  */

void FUN_10227af94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10227afc0; end: 10227afcf;  */

void FUN_10227afc0(undefined8 *param_1)

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
  puVar1 = &UNK_1104ec850;
  func_0x000107c613fc(&UNK_1104ec850,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102277a78;
  func_0x00010058fa64(FUN_102277a78,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}


