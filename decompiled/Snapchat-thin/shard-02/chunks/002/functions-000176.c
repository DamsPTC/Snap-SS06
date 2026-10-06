/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ad9454; end: 101ad94b7;  */

void FUN_101ad9454(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 101ad94b8; end: 101ad951b;  */

undefined8 * FUN_101ad94b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 101ad951c; end: 101ad955f;  */

undefined8 * FUN_101ad951c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 101ad9560; end: 101ad95e7;  */

int FUN_101ad9560(int *param_1,int param_2)

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



/* Entry: 101ad95e8; end: 101ad9617;  */

void FUN_101ad95e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
    return;
  }
  return;
}



/* Entry: 101ad9618; end: 101ad962b;  */

undefined8 * FUN_101ad9618(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  func_0x000107c61434();
  func_0x000107c615f0(uVar1);
  return param_1;
}



/* Entry: 101ad962c; end: 101ad9697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad962c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101ad9a20();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112dfa430) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101ad9698; end: 101ad9703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad9698(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dfa430) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ad9704; end: 101ad9763; -[_TtC44LeaveCustomStoryScopedFactoryServiceProvider32SCLeaveCustomStoryScopedServices init] */

void FUN_101ad9704(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LeaveCustomStoryScopedFactoryServiceProvider.SCLeaveCustomStoryScopedServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad9730);
  (*pcVar1)();
}



/* Entry: 101ad9764; end: 101ad9773; -[_TtC44LeaveCustomStoryScopedFactoryServiceProvider32SCLeaveCustomStoryScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad9764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dfa430));
  return;
}



/* Entry: 101ad9774; end: 101ad97df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad9774(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110441408;
  func_0x000107c613fc(&UNK_110441408,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101ad9ab8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101ad97e0; end: 101ad987b;  */

void FUN_101ad97e0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110441318;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110441318;
  return;
}



/* Entry: 101ad987c; end: 101ad98b3;  */

void FUN_101ad987c(long *param_1)

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



/* Entry: 101ad98b4; end: 101ad98bb;  */

undefined8 FUN_101ad98b4(void)

{
  return 0x1b;
}



/* Entry: 101ad98bc; end: 101ad99ef;  */

void FUN_101ad98bc(undefined8 *param_1)

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
  puVar1 = &UNK_110441430;
  func_0x000107c613fc(&UNK_110441430,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101ad9a90;
  func_0x00010058fa64(FUN_101ad9a90,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ad99f0; end: 101ad9a1f;  */

undefined ** FUN_101ad99f0(void)

{
  return &PTR_DAT_113066bc8;
}



/* Entry: 101ad9a20; end: 101ad9a3f;  */

void FUN_101ad9a20(void)

{
  func_0x000107c61168(&PTR_PTR_1127f5558);
  return;
}



/* Entry: 101ad9a40; end: 101ad9a8f;  */

undefined1  [16] FUN_101ad9a40(void)

{
  return ZEXT816(0x110441368);
}



/* Entry: 101ad9a90; end: 101ad9ab7;  */

void FUN_101ad9a90(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101ad9ab8; end: 101ad9abb;  */

void FUN_101ad9ab8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101ad9abc; end: 101ad9b63;  */

/* WARNING: Possible PIC construction at 0x000101ad9b4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad9b50) */

void FUN_101ad9abc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104414b8;
  func_0x000107c613fc(&UNK_1104414b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112dfa4a0;
  func_0x0001000285a8(0x112dfa4a0,&UNK_10d9cc570);
  func_0x000107c613fc();
  pcVar3 = FUN_101ad9e88;
  func_0x0001000841fc(FUN_101ad9e88,puVar1,uVar2);
  func_0x000100084214(&UNK_10d9cc540,0x2e,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101ad9b64; end: 101ad9b7b;  */

/* WARNING: Possible PIC construction at 0x000101ad9b4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad9b50) */

void FUN_101ad9b64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1104414b8;
  func_0x000107c613fc(&UNK_1104414b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112dfa4a0;
  func_0x0001000285a8(0x112dfa4a0,&UNK_10d9cc570);
  func_0x000107c613fc();
  pcVar4 = FUN_101ad9e88;
  func_0x0001000841fc(FUN_101ad9e88,puVar2,uVar3);
  func_0x000100084214(&UNK_10d9cc540,0x2e,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101ad9b7c; end: 101ad9e87;  */

void FUN_101ad9b7c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112dfa4a8,&UNK_10d9cc578);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101adabf0();
  func_0x000100082720("LeaveCustomStoryScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112dfa4b0,&UNK_10d9cc580);
  puVar3 = &UNK_1104414e0;
  func_0x000107c613fc(&UNK_1104414e0,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar9 = 0x101ad9e90;
  func_0x0001000823a8(0x101ad9e90,puVar3);
  func_0x000100082720("SCLeaveCustomStoryEntryPointWrapperServiceProvider",0x32,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101ad987c;
  func_0x0001000823a8(FUN_101ad987c,0);
  func_0x000100082720("SCLeaveCustomStoryScopedServicesCleanupRelayServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112dfa4b8,&UNK_10d9cc590);
  puVar3 = &UNK_110441508;
  func_0x000107c613fc(&UNK_110441508,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x101ad9e9c;
  func_0x0001000823a8(0x101ad9e9c,puVar3);
  func_0x000100082720("SCLeaveCustomStoryScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112dfa438,&UNK_10d9cc320);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x101ad9ea8;
  func_0x0001000823a8(0x101ad9ea8,uVar5);
  func_0x000100082720("SCLeaveCustomStoryScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112dfa428,&UNK_10d9cc310);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101ad9eb0;
  func_0x0001000823a8(0x101ad9eb0,uVar6);
  func_0x000100082720("SCLeaveCustomStoryScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110441530;
  func_0x000107c613fc(&UNK_110441530,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_101ad9ee4;
  func_0x0001000823a8(FUN_101ad9ee4,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCLeaveCustomStoryScopeEntryPointProvider",0x29,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 101ad9e88; end: 101ad9eb7;  */

void FUN_101ad9e88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112dfa4a8,&UNK_10d9cc578);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101adabf0();
  func_0x000100082720("LeaveCustomStoryScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112dfa4b0,&UNK_10d9cc580);
  puVar3 = &UNK_1104414e0;
  func_0x000107c613fc(&UNK_1104414e0,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar6);
  uVar4 = 0x101ad9e90;
  func_0x0001000823a8(0x101ad9e90,puVar3);
  func_0x000100082720("SCLeaveCustomStoryEntryPointWrapperServiceProvider",0x32,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_101ad987c;
  func_0x0001000823a8(FUN_101ad987c,0);
  func_0x000100082720("SCLeaveCustomStoryScopedServicesCleanupRelayServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112dfa4b8,&UNK_10d9cc590);
  puVar3 = &UNK_110441508;
  func_0x000107c613fc(&UNK_110441508,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(code **)(puVar3 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x101ad9e9c;
  func_0x0001000823a8(0x101ad9e9c,puVar3);
  func_0x000100082720("SCLeaveCustomStoryScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112dfa438,&UNK_10d9cc320);
  func_0x000107c6157c(uVar6);
  uVar9 = 0x101ad9ea8;
  func_0x0001000823a8(0x101ad9ea8,uVar6);
  func_0x000100082720("SCLeaveCustomStoryScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112dfa428,&UNK_10d9cc310);
  func_0x000107c6157c(uVar9);
  uVar7 = 0x101ad9eb0;
  func_0x0001000823a8(0x101ad9eb0,uVar9);
  func_0x000100082720("SCLeaveCustomStoryScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110441530;
  func_0x000107c613fc(&UNK_110441530,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  pcVar8 = FUN_101ad9ee4;
  func_0x0001000823a8(FUN_101ad9ee4,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCLeaveCustomStoryScopeEntryPointProvider",0x29,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 101ad9eb8; end: 101ad9ee3;  */

void FUN_101ad9eb8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ad9ee4; end: 101ad9eeb;  */

void FUN_101ad9ee4(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110441318;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110441318;
  return;
}



/* Entry: 101ad9eec; end: 101ad9f9b;  */

void FUN_101ad9eec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101ada2fc();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101ada130(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ad9f9c; end: 101ada00b;  */

undefined8 FUN_101ad9f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101ada130(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101ada00c; end: 101ada03f;  */

void FUN_101ada00c(void)

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



/* Entry: 101ada040; end: 101ada047;  */

undefined8 FUN_101ada040(void)

{
  return 0x1b;
}



/* Entry: 101ada048; end: 101ada0cb;  */

void FUN_101ada048(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101ada33c,param_2,FUN_101ada340,param_2,FUN_101ada368,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101ada0cc; end: 101ada11b;  */

undefined8 FUN_101ada0cc(void)

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



/* Entry: 101ada11c; end: 101ada12f;  */

void FUN_101ada11c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110441548;
  return;
}



/* Entry: 101ada130; end: 101ada2df;  */

void FUN_101ada130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a8950;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010eff8530);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101ada2e0; end: 101ada2fb;  */

undefined ** FUN_101ada2e0(void)

{
  return &PTR_DAT_113066bc8;
}



/* Entry: 101ada2fc; end: 101ada31b;  */

void FUN_101ada2fc(void)

{
  func_0x000107c61168(&PTR_PTR_112dfa528);
  return;
}



/* Entry: 101ada31c; end: 101ada33f;  */

undefined1  [16] FUN_101ada31c(void)

{
  return ZEXT816(0x110441588);
}



/* Entry: 101ada340; end: 101ada367;  */

void FUN_101ada340(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ada368; end: 101ada36f;  */

undefined8 FUN_101ada368(void)

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



/* Entry: 101ada370; end: 101ada3ab;  */

void FUN_101ada370(undefined8 *param_1,undefined8 param_2)

{
  FUN_101ada3ac();
  func_0x0001000a7f38("SCLeaveCustomStoryScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101ada3ac; end: 101ada597;  */

void FUN_101ada3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d618;
  ppuVar4 = &PTR_DAT_113066bc8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104415d8;
  func_0x000107c613fc(&UNK_1104415d8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112dfa598;
  func_0x0001000285a8(0x112dfa598,&UNK_10d9cc6c8);
  func_0x0001000a6ee8(&UNK_1104417e8,"LeaveCustomStoryScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_101ada598,puVar2,uVar3,&UNK_1104417e8,&PTR_DAT_112dfa628);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110441588,
                      "SCLeaveCustomStoryEntryPointWrapperScopeInitializationPluginKey",0x3f,2,
                      FUN_101ada64c,param_3,uVar3,&UNK_110441588,&PTR_DAT_112dfa4c0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110441600;
  func_0x000107c613fc(&UNK_110441600,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104413a8,"SCLeaveCustomStoryScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_101ada6fc,puVar2,uVar3,&UNK_1104413a8,&PTR_DAT_112dfa440);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112dfa5a0;
  func_0x0001000285a8(0x112dfa5a0,&UNK_10d9cc6d0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 101ada598; end: 101ada5d7;  */

void FUN_101ada598(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101adacd4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LeaveCustomStoryScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ada5d8; end: 101ada64b;  */

void FUN_101ada5d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101ada738;
  func_0x0001000823a8(0x101ada738,param_3);
  func_0x000100082720("SCLeaveCustomStoryEntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 101ada64c; end: 101ada653;  */

void FUN_101ada64c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101ada738;
  func_0x0001000823a8();
  func_0x000100082720("SCLeaveCustomStoryEntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 101ada654; end: 101ada6fb;  */

void FUN_101ada654(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110441628;
  func_0x000107c613fc(&UNK_110441628,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101ada730;
  func_0x0001000823a8(FUN_101ada730,puVar1);
  func_0x000100082720("SCLeaveCustomStoryScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101ada6fc; end: 101ada703;  */

void FUN_101ada6fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110441628;
  func_0x000107c613fc(&UNK_110441628,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101ada730;
  func_0x0001000823a8(FUN_101ada730,puVar3);
  func_0x000100082720("SCLeaveCustomStoryScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101ada704; end: 101ada72f;  */

void FUN_101ada704(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ada730; end: 101ada73f;  */

void FUN_101ada730(undefined8 *param_1)

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
  puVar1 = &UNK_110441430;
  func_0x000107c613fc(&UNK_110441430,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101ad9a90;
  func_0x00010058fa64(FUN_101ad9a90,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ada740; end: 101ada7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ada740(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101adab00();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112dfa5a8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112dfa5b0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ada7c8);
  (*pcVar1)();
}



/* Entry: 101ada7c8; end: 101ada827; -[_TtC32LeaveCustomStoryScopeGraphBridge47LeaveCustomStoryScopeGraphBridgeSaberEntryPoint init] */

void FUN_101ada7c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LeaveCustomStoryScopeGraphBridge.LeaveCustomStoryScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ada7f4);
  (*pcVar1)();
}



/* Entry: 101ada828; end: 101ada85f; -[_TtC32LeaveCustomStoryScopeGraphBridge47LeaveCustomStoryScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ada844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ada848) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ada828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dfa5a8));
  return;
}



/* Entry: 101ada860; end: 101ada887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ada860(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112dfa5b0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112dfa5a8));
  return;
}



/* Entry: 101ada888; end: 101ada8a7;  */

void FUN_101ada888(void)

{
  func_0x000107c61168(&PTR_PTR_1127f5618);
  return;
}



/* Entry: 101ada8a8; end: 101ada92f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ada8a8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dfa5e0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112dfa5e8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ada930);
  (*pcVar2)();
}



/* Entry: 101ada930; end: 101adaa17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101ada930(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dfa5e0);
  *(undefined **)(unaff_x20 + _DAT_112dfa5e0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dfa5e8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112dfa5e8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110441748;
  func_0x000107c613fc(&UNK_110441748,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101adaa1c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101adaa18; end: 101adaa23;  */

void FUN_101adaa18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101adaa24; end: 101adaa83; -[_TtC32LeaveCustomStoryScopeGraphBridge47SCLeaveCustomStoryScopedServicesSaberEntryPoint init] */

void FUN_101adaa24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LeaveCustomStoryScopeGraphBridge.SCLeaveCustomStoryScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101adaa50);
  (*pcVar1)();
}



/* Entry: 101adaa84; end: 101adaabb; -[_TtC32LeaveCustomStoryScopeGraphBridge47SCLeaveCustomStoryScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101adaa84(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dfa5e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dfa5e0));
  return;
}



/* Entry: 101adaabc; end: 101adaabf;  */

void FUN_101adaabc(void)

{
  return;
}



/* Entry: 101adaac0; end: 101adaadf;  */

void FUN_101adaac0(void)

{
  FUN_101ada930();
  return;
}



/* Entry: 101adaae0; end: 101adaaff;  */

void FUN_101adaae0(void)

{
  func_0x000107c61168(&PTR_PTR_1127f56e0);
  return;
}



/* Entry: 101adab00; end: 101adabcf;  */

undefined8 FUN_101adab00(void)

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
  
  func_0x000107c61428(0x112dfa618,&uStack_40,0x20,0);
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
    FUN_101adabd0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101adabd0; end: 101adabef;  */

void FUN_101adabd0(void)

{
  func_0x000107c61168(&PTR_PTR_1127f57a8);
  return;
}



/* Entry: 101adabf0; end: 101adac5b;  */

void FUN_101adabf0(void)

{
  func_0x0001000285a8(0x112dfa620,&UNK_10d9cc798);
  func_0x0001000823a8(0x101adac30,0);
  return;
}



/* Entry: 101adac5c; end: 101adac97; -[_TtC32LeaveCustomStoryScopeGraphBridge40LeaveCustomStoryScopeGraphBridgeServices init] */

void FUN_101adac5c(undefined8 param_1)

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



/* Entry: 101adac98; end: 101adaccb;  */

void FUN_101adac98(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101adaccc; end: 101adacd3;  */

undefined8 FUN_101adaccc(void)

{
  return 0x1b;
}



/* Entry: 101adacd4; end: 101adae4b;  */

void FUN_101adacd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110441790;
  func_0x000107c613fc(&UNK_110441790,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101adae4c,puVar1);
  return;
}



/* Entry: 101adae4c; end: 101adae53;  */

void FUN_101adae4c(undefined8 *param_1)

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
  func_0x000107c61428(0x112dfa618,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112dfa618,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110441828;
  func_0x000107c613fc(&UNK_110441828,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101adaf00;
  func_0x00010058fa64(0x101adaf00,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101adae54; end: 101adaeaf;  */

void FUN_101adae54(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112dfa618,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112dfa618,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101adaeb0; end: 101adaf07;  */

undefined ** FUN_101adaeb0(void)

{
  return &PTR_DAT_113066bc8;
}



/* Entry: 101adaf08; end: 101adaf4f; -[SCLeaveCustomStoryScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101adaf08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfa678;
  func_0x000107c61428(param_1 + _DAT_112dfa678,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101adaf50; end: 101adafa7; -[SCLeaveCustomStoryScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101adaf50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfa678;
  func_0x000107c61428(param_1 + _DAT_112dfa678,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101adafa8; end: 101adafef; -[SCLeaveCustomStoryScopeGraphBridgeSaberEntryPoint leaveCustomStoryScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101adafa8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfa680;
  func_0x000107c61428(param_1 + _DAT_112dfa680,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101adaff0; end: 101adb053; -[SCLeaveCustomStoryScopeGraphBridgeSaberEntryPoint setLeaveCustomStoryScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101adaff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfa680;
  func_0x000107c61428(param_1 + _DAT_112dfa680,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101adb054; end: 101adb187;  */

/* WARNING: Possible PIC construction at 0x000101adb10c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101adb128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101adb144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101adb110) */
/* WARNING: Removing unreachable block (ram,0x000101adb12c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101adb054(void)

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
  func_0x000107c4accc();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101ada888();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101adab00();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101adb188);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112dfa5a8) = lVar5;
    *(long *)(lVar4 + _DAT_112dfa5b0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101adb188; end: 101adb1af; -[SCLeaveCustomStoryScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101adb188(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101adb054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101adb1b0; end: 101adb1f3; -[SCLeaveCustomStoryScopeGraphBridgeSaberEntryPoint end] */

void FUN_101adb1b0(undefined8 param_1)

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



/* Entry: 101adb1f4; end: 101adb38b;  */

void FUN_101adb1f4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef1007840)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010eff87c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LeaveCustomStoryScopeGraphBridge/SCLeaveCustomStoryScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x58,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101adb38c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55b78();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101adb38c; end: 101adb437; -[SCLeaveCustomStoryScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101adb38c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101adb1f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101adb438; end: 101adb4a3; -[SCLeaveCustomStoryScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101adb438(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dfa678,0);
  *(undefined8 *)(param_1 + _DAT_112dfa680) = 0;
  *(undefined8 *)(param_1 + _DAT_112dfa688) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101adb4a4; end: 101adb4d7;  */

void FUN_101adb4a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101adb4d8; end: 101adb51f; -[SCLeaveCustomStoryScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101adb504: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101adb508) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101adb4d8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dfa678);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dfa680));
  return;
}



/* Entry: 101adb520; end: 101adb53f;  */

void FUN_101adb520(void)

{
  func_0x000107c61168(&PTR_PTR_1127f5858);
  return;
}



/* Entry: 101adb540; end: 101adb587; -[SCSCLeaveCustomStoryScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101adb540(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfa6b8;
  func_0x000107c61428(param_1 + _DAT_112dfa6b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101adb588; end: 101adb5df; -[SCSCLeaveCustomStoryScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101adb588(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfa6b8;
  func_0x000107c61428(param_1 + _DAT_112dfa6b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101adb5e0; end: 101adb6b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101adb5e0(undefined8 param_1,long param_2)

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
    FUN_101adaae0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112dfa5e0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101adb6b8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112dfa5e8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dfa6c0);
    *(long **)(unaff_x20 + _DAT_112dfa6c0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101adb6b8; end: 101adb6df; -[SCSCLeaveCustomStoryScopedServicesSaberEntryPoint begin] */

void FUN_101adb6b8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101adb5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101adb6e0; end: 101adb857;  */

/* WARNING: Possible PIC construction at 0x000101adb748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101adb7e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101adb74c) */
/* WARNING: Removing unreachable block (ram,0x000101adb7e4) */
/* WARNING: Removing unreachable block (ram,0x000101adb7fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101adb6e0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112dfa6c0);
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



/* Entry: 101adb858; end: 101adb85f;  */

void FUN_101adb858(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101adb860; end: 101adb893; -[SCSCLeaveCustomStoryScopedServicesSaberEntryPoint end] */

void FUN_101adb860(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101adb6e0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101adb894; end: 101adb9b3;  */

void FUN_101adb894(long param_1,long param_2,long param_3)

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
                        "LeaveCustomStoryScopeGraphBridge/SCSCLeaveCustomStoryScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101adb9b4);
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



/* Entry: 101adb9b4; end: 101adba5f; -[SCSCLeaveCustomStoryScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101adb9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101adb894(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101adba60; end: 101adbabf; -[SCSCLeaveCustomStoryScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101adba60(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dfa6b8,0);
  *(undefined8 *)(param_1 + _DAT_112dfa6c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101adbac0; end: 101adbaf3;  */

void FUN_101adbac0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101adbaf4; end: 101adbb2b; -[SCSCLeaveCustomStoryScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101adbaf4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dfa6b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dfa6c0));
  return;
}



/* Entry: 101adbb2c; end: 101adbb4b;  */

void FUN_101adbb2c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f5920);
  return;
}



/* Entry: 101adbb4c; end: 101adbb5b;  */

undefined1  [16] FUN_101adbb4c(void)

{
  return ZEXT816(0x110441908);
}



/* Entry: 101adbb5c; end: 101adbb5f; -[_TtC32SCTalkNotificationCategoryPlugin30TalkNotificationCategoryPlugin userDidAction:notification:] */

void FUN_101adbb5c(void)

{
  return;
}



/* Entry: 101adbb60; end: 101adbb93;  */

void FUN_101adbb60(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


