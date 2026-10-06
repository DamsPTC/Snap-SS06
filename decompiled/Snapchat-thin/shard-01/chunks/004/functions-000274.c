/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100fc5f50; end: 100fc5f6f;  */

void FUN_100fc5f50(void)

{
  func_0x000103a76c34();
  return;
}



/* Entry: 100fc5f70; end: 100fc5f7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc5f70(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar9 = *(long *)(unaff_x20 + 0x38);
  func_0x0001000d224c(&lStack_90,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar1 = lStack_90;
  func_0x000107c614f0();
  lStack_68 = lStack_90;
  lVar11 = *(long *)(lStack_88 + 0x20);
  (**(code **)(lVar11 + 0x38))();
  func_0x000107c615e8();
  lVar2 = lStack_90;
  func_0x000103a7f694();
  uVar13 = *(undefined8 *)(lVar7 + _DAT_11307a4a0);
  puVar3 = &UNK_110372e38;
  func_0x000107c613fc(&UNK_110372e38,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar12;
  func_0x0001000285a8(0x112d51a68,&UNK_10d918aa8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar12);
  pcVar4 = FUN_100fc4b80;
  func_0x0001000bdd8c(FUN_100fc4b80,puVar3);
  puVar3 = &UNK_110372e60;
  func_0x000107c613fc(&UNK_110372e60,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  func_0x0001000285a8(0x112d51a70,&UNK_10d918ab0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar5);
  uVar5 = 0x100fc4b88;
  func_0x0001000bdd8c(0x100fc4b88,puVar3);
  lVar6 = 0;
  func_0x000100fa6138();
  lVar7 = lVar6;
  func_0x000107c613fc();
  func_0x000107c61474();
  *(undefined **)(lVar7 + 0x80) = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar12 = *(undefined8 *)(lVar9 + _DAT_113091b70);
  *(code **)(lVar7 + 0x70) = pcVar4;
  *(undefined8 *)(lVar7 + 0x78) = uVar5;
  ppuStack_70 = &PTR_DAT_110371a48;
  lVar8 = 0;
  lStack_90 = lVar7;
  lStack_78 = lVar6;
  FUN_100fa5284();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar7 = lVar9 + _DAT_112d50df0;
  *(undefined8 *)(lVar7 + 8) = 0;
  func_0x000107c61614(lVar7,0);
  func_0x000107c61614(lVar9 + _DAT_112d50df8,0);
  *(undefined8 *)(lVar9 + _DAT_112d50e00) = 0;
  *(long *)(lVar9 + _DAT_112d50dc8) = lVar1;
  plVar10 = (long *)(lVar9 + _DAT_112d50dd0);
  *plVar10 = lVar2;
  plVar10[1] = lVar11;
  *(undefined8 *)(lVar9 + _DAT_112d50dd8) = uVar13;
  FUN_100fa7d84(&lStack_90,lVar9 + _DAT_112d50de0);
  *(undefined8 *)(lVar9 + _DAT_112d50de8) = uVar12;
  puVar3 = PTR_s_init_1125d9248;
  lStack_a0 = lVar9;
  lStack_98 = lVar8;
  func_0x000107c61174(uVar13);
  func_0x000107c615f0(uVar12);
  plVar10 = &lStack_a0;
  func_0x000107c61154(plVar10,puVar3);
  func_0x0001000834e4(&lStack_90);
  *param_1 = (long)plVar10;
  param_1[1] = (long)&PTR_DAT_110371918;
  return;
}



/* Entry: 100fc5f7c; end: 100fc5fbf;  */

long FUN_100fc5f7c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100fc5fc0; end: 100fc600b;  */

void FUN_100fc5fc0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100fc600c; end: 100fc601b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc600c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar9 = *(long *)(unaff_x20 + 0x38);
  func_0x0001000d224c(&lStack_90,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar1 = lStack_90;
  func_0x000107c614f0();
  lStack_68 = lStack_90;
  lVar11 = *(long *)(lStack_88 + 0x20);
  (**(code **)(lVar11 + 0x38))();
  func_0x000107c615e8();
  lVar2 = lStack_90;
  func_0x000103a7f694();
  uVar13 = *(undefined8 *)(lVar7 + _DAT_11307a4a0);
  puVar3 = &UNK_110372e38;
  func_0x000107c613fc(&UNK_110372e38,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar12;
  func_0x0001000285a8(0x112d51a68,&UNK_10d918aa8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar12);
  pcVar4 = FUN_100fc4b80;
  func_0x0001000bdd8c(FUN_100fc4b80,puVar3);
  puVar3 = &UNK_110372e60;
  func_0x000107c613fc(&UNK_110372e60,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  func_0x0001000285a8(0x112d51a70,&UNK_10d918ab0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar5);
  uVar5 = 0x100fc4b88;
  func_0x0001000bdd8c(0x100fc4b88,puVar3);
  lVar6 = 0;
  func_0x000100fa6138();
  lVar7 = lVar6;
  func_0x000107c613fc();
  func_0x000107c61474();
  *(undefined **)(lVar7 + 0x80) = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar12 = *(undefined8 *)(lVar9 + _DAT_113091b70);
  *(code **)(lVar7 + 0x70) = pcVar4;
  *(undefined8 *)(lVar7 + 0x78) = uVar5;
  ppuStack_70 = &PTR_DAT_110371a48;
  lVar8 = 0;
  lStack_90 = lVar7;
  lStack_78 = lVar6;
  FUN_100fa5284();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar7 = lVar9 + _DAT_112d50df0;
  *(undefined8 *)(lVar7 + 8) = 0;
  func_0x000107c61614(lVar7,0);
  func_0x000107c61614(lVar9 + _DAT_112d50df8,0);
  *(undefined8 *)(lVar9 + _DAT_112d50e00) = 0;
  *(long *)(lVar9 + _DAT_112d50dc8) = lVar1;
  plVar10 = (long *)(lVar9 + _DAT_112d50dd0);
  *plVar10 = lVar2;
  plVar10[1] = lVar11;
  *(undefined8 *)(lVar9 + _DAT_112d50dd8) = uVar13;
  FUN_100fa7d84(&lStack_90,lVar9 + _DAT_112d50de0);
  *(undefined8 *)(lVar9 + _DAT_112d50de8) = uVar12;
  puVar3 = PTR_s_init_1125d9248;
  lStack_a0 = lVar9;
  lStack_98 = lVar8;
  func_0x000107c61174(uVar13);
  func_0x000107c615f0(uVar12);
  plVar10 = &lStack_a0;
  func_0x000107c61154(plVar10,puVar3);
  func_0x0001000834e4(&lStack_90);
  *param_1 = (long)plVar10;
  param_1[1] = (long)&PTR_DAT_110371918;
  return;
}



/* Entry: 100fc601c; end: 100fc607f;  */

void FUN_100fc601c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fc6080;
  plVar3[7] = lVar1;
  plVar3[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc5af8,0,0);
  return;
}



/* Entry: 100fc6080; end: 100fc60db;  */

void FUN_100fc6080(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fc60b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fc60dc; end: 100fc612f;  */

void FUN_100fc60dc(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x100fc61bc;
  plVar3[0x18] = unaff_x20;
  lVar1 = 0;
  func_0x0001038e5950();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x19] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbc78c,0,0);
  return;
}



/* Entry: 100fc6130; end: 100fc61a7;  */

void FUN_100fc6130(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x100fc61c0;
  plVar4[4] = lVar1;
  plVar4[5] = lVar2;
  plVar4[2] = lVar5;
  plVar4[3] = unaff_x20 + 0x18;
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  plVar4[6] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_100fbf9b0;
  plVar3[2] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbebf0,0,0);
  return;
}



/* Entry: 100fc61a8; end: 100fc61c3;  */

undefined1  [16] FUN_100fc61a8(void)

{
  return ZEXT816(0x110372fb8);
}



/* Entry: 100fc61c4; end: 100fc6757;  */

undefined1  [16] FUN_100fc61c4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1dd80);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1dd30);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fc6290);
  (*pcVar1)();
}



/* Entry: 100fc6758; end: 100fc6763; -[SCMemoriesQuickCutOrchestrationEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6758(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51b20;
  func_0x000107c61428(param_1 + _DAT_112d51b20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc6764; end: 100fc676f; -[SCMemoriesQuickCutOrchestrationEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6764(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51b20;
  func_0x000107c61428(param_1 + _DAT_112d51b20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6770; end: 100fc677b; -[SCMemoriesQuickCutOrchestrationEntryPoint systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6770(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51b28;
  func_0x000107c61428(param_1 + _DAT_112d51b28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc677c; end: 100fc6787; -[SCMemoriesQuickCutOrchestrationEntryPoint setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc677c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51b28;
  func_0x000107c61428(param_1 + _DAT_112d51b28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6788; end: 100fc6793; -[SCMemoriesQuickCutOrchestrationEntryPoint snapDocManagerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6788(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51b30;
  func_0x000107c61428(param_1 + _DAT_112d51b30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc6794; end: 100fc679f; -[SCMemoriesQuickCutOrchestrationEntryPoint setSnapDocManagerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6794(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51b30;
  func_0x000107c61428(param_1 + _DAT_112d51b30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc67a0; end: 100fc67ab; -[SCMemoriesQuickCutOrchestrationEntryPoint memoriesDataObjectStorageService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc67a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51b38;
  func_0x000107c61428(param_1 + _DAT_112d51b38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc67ac; end: 100fc67b7; -[SCMemoriesQuickCutOrchestrationEntryPoint setMemoriesDataObjectStorageService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc67ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51b38;
  func_0x000107c61428(param_1 + _DAT_112d51b38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc67b8; end: 100fc67c3; -[SCMemoriesQuickCutOrchestrationEntryPoint memoriesMashupSnapDocFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc67b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51b40;
  func_0x000107c61428(param_1 + _DAT_112d51b40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc67c4; end: 100fc67cf; -[SCMemoriesQuickCutOrchestrationEntryPoint setMemoriesMashupSnapDocFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc67c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51b40;
  func_0x000107c61428(param_1 + _DAT_112d51b40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc67d0; end: 100fc67db; -[SCMemoriesQuickCutOrchestrationEntryPoint snapDocMediaClaimingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc67d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51b48;
  func_0x000107c61428(param_1 + _DAT_112d51b48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc67dc; end: 100fc67e7; -[SCMemoriesQuickCutOrchestrationEntryPoint setSnapDocMediaClaimingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc67dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51b48;
  func_0x000107c61428(param_1 + _DAT_112d51b48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc67e8; end: 100fc67f3; -[SCMemoriesQuickCutOrchestrationEntryPoint snapRendererServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc67e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51b50;
  func_0x000107c61428(param_1 + _DAT_112d51b50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc67f4; end: 100fc67ff; -[SCMemoriesQuickCutOrchestrationEntryPoint setSnapRendererServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc67f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51b50;
  func_0x000107c61428(param_1 + _DAT_112d51b50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6800; end: 100fc680b; -[SCMemoriesQuickCutOrchestrationEntryPoint quickCutLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6800(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51b58;
  func_0x000107c61428(param_1 + _DAT_112d51b58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc680c; end: 100fc6817; -[SCMemoriesQuickCutOrchestrationEntryPoint setQuickCutLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc680c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51b58;
  func_0x000107c61428(param_1 + _DAT_112d51b58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6818; end: 100fc6823; -[SCMemoriesQuickCutOrchestrationEntryPoint memoriesMashupSourceSnapDocProvisionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6818(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51b60;
  func_0x000107c61428(param_1 + _DAT_112d51b60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc6824; end: 100fc682f; -[SCMemoriesQuickCutOrchestrationEntryPoint setMemoriesMashupSourceSnapDocProvisionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6824(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51b60;
  func_0x000107c61428(param_1 + _DAT_112d51b60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6830; end: 100fc683b; -[SCMemoriesQuickCutOrchestrationEntryPoint memoriesExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6830(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51b68;
  func_0x000107c61428(param_1 + _DAT_112d51b68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc683c; end: 100fc6847; -[SCMemoriesQuickCutOrchestrationEntryPoint setMemoriesExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc683c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51b68;
  func_0x000107c61428(param_1 + _DAT_112d51b68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6848; end: 100fc6853; -[SCMemoriesQuickCutOrchestrationEntryPoint memoriesTweaksServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6848(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51b70;
  func_0x000107c61428(param_1 + _DAT_112d51b70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc6854; end: 100fc685f; -[SCMemoriesQuickCutOrchestrationEntryPoint setMemoriesTweaksServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6854(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51b70;
  func_0x000107c61428(param_1 + _DAT_112d51b70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6860; end: 100fc686b; -[SCMemoriesQuickCutOrchestrationEntryPoint memoriesPickerV2ScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6860(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51b78;
  func_0x000107c61428(param_1 + _DAT_112d51b78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc686c; end: 100fc6877; -[SCMemoriesQuickCutOrchestrationEntryPoint setMemoriesPickerV2ScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc686c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51b78;
  func_0x000107c61428(param_1 + _DAT_112d51b78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6878; end: 100fc6883; -[SCMemoriesQuickCutOrchestrationEntryPoint memoriesMergedDataSourceServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6878(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51b80;
  func_0x000107c61428(param_1 + _DAT_112d51b80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc6884; end: 100fc688f; -[SCMemoriesQuickCutOrchestrationEntryPoint setMemoriesMergedDataSourceServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6884(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51b80;
  func_0x000107c61428(param_1 + _DAT_112d51b80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6890; end: 100fc689b; -[SCMemoriesQuickCutOrchestrationEntryPoint memoriesDataServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6890(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51b88;
  func_0x000107c61428(param_1 + _DAT_112d51b88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc689c; end: 100fc68a7; -[SCMemoriesQuickCutOrchestrationEntryPoint setMemoriesDataServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc689c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51b88;
  func_0x000107c61428(param_1 + _DAT_112d51b88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc68a8; end: 100fc68b3; -[SCMemoriesQuickCutOrchestrationEntryPoint deckServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc68a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51b90;
  func_0x000107c61428(param_1 + _DAT_112d51b90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc68b4; end: 100fc68bf; -[SCMemoriesQuickCutOrchestrationEntryPoint setDeckServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc68b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51b90;
  func_0x000107c61428(param_1 + _DAT_112d51b90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc68c0; end: 100fc68cb; -[SCMemoriesQuickCutOrchestrationEntryPoint snapEditorScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc68c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51b98;
  func_0x000107c61428(param_1 + _DAT_112d51b98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc68cc; end: 100fc68d7; -[SCMemoriesQuickCutOrchestrationEntryPoint setSnapEditorScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc68cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51b98;
  func_0x000107c61428(param_1 + _DAT_112d51b98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc68d8; end: 100fc68e3; -[SCMemoriesQuickCutOrchestrationEntryPoint snapDocEditorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc68d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51ba0;
  func_0x000107c61428(param_1 + _DAT_112d51ba0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc68e4; end: 100fc68ef; -[SCMemoriesQuickCutOrchestrationEntryPoint setSnapDocEditorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc68e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51ba0;
  func_0x000107c61428(param_1 + _DAT_112d51ba0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc68f0; end: 100fc68fb; -[SCMemoriesQuickCutOrchestrationEntryPoint memoriesDirectCameraRollProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc68f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51ba8;
  func_0x000107c61428(param_1 + _DAT_112d51ba8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc68fc; end: 100fc6907; -[SCMemoriesQuickCutOrchestrationEntryPoint setMemoriesDirectCameraRollProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc68fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51ba8;
  func_0x000107c61428(param_1 + _DAT_112d51ba8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6908; end: 100fc6913; -[SCMemoriesQuickCutOrchestrationEntryPoint quickCutSelectionConfigLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6908(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51bb0;
  func_0x000107c61428(param_1 + _DAT_112d51bb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc6914; end: 100fc691f; -[SCMemoriesQuickCutOrchestrationEntryPoint setQuickCutSelectionConfigLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6914(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51bb0;
  func_0x000107c61428(param_1 + _DAT_112d51bb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6920; end: 100fc692b; -[SCMemoriesQuickCutOrchestrationEntryPoint mainTabNavigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6920(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51bb8;
  func_0x000107c61428(param_1 + _DAT_112d51bb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc692c; end: 100fc6937; -[SCMemoriesQuickCutOrchestrationEntryPoint setMainTabNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc692c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51bb8;
  func_0x000107c61428(param_1 + _DAT_112d51bb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6938; end: 100fc6943; -[SCMemoriesQuickCutOrchestrationEntryPoint memoriesQuickCutPreferencesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6938(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51bc0;
  func_0x000107c61428(param_1 + _DAT_112d51bc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc6944; end: 100fc694f; -[SCMemoriesQuickCutOrchestrationEntryPoint setMemoriesQuickCutPreferencesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6944(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51bc0;
  func_0x000107c61428(param_1 + _DAT_112d51bc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6950; end: 100fc695b; -[SCMemoriesQuickCutOrchestrationEntryPoint playerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6950(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51bc8;
  func_0x000107c61428(param_1 + _DAT_112d51bc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc695c; end: 100fc6967; -[SCMemoriesQuickCutOrchestrationEntryPoint setPlayerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc695c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51bc8;
  func_0x000107c61428(param_1 + _DAT_112d51bc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6968; end: 100fc6973; -[SCMemoriesQuickCutOrchestrationEntryPoint contentDeliveryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6968(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51bd0;
  func_0x000107c61428(param_1 + _DAT_112d51bd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc6974; end: 100fc697f; -[SCMemoriesQuickCutOrchestrationEntryPoint setContentDeliveryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6974(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51bd0;
  func_0x000107c61428(param_1 + _DAT_112d51bd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6980; end: 100fc698b; -[SCMemoriesQuickCutOrchestrationEntryPoint memoriesCachingMediaServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6980(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51bd8;
  func_0x000107c61428(param_1 + _DAT_112d51bd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc698c; end: 100fc6997; -[SCMemoriesQuickCutOrchestrationEntryPoint setMemoriesCachingMediaServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc698c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51bd8;
  func_0x000107c61428(param_1 + _DAT_112d51bd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6998; end: 100fc69a3; -[SCMemoriesQuickCutOrchestrationEntryPoint asyncQueueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6998(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51be0;
  func_0x000107c61428(param_1 + _DAT_112d51be0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc69a4; end: 100fc69af; -[SCMemoriesQuickCutOrchestrationEntryPoint setAsyncQueueServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc69a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51be0;
  func_0x000107c61428(param_1 + _DAT_112d51be0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc69b0; end: 100fc69bb; -[SCMemoriesQuickCutOrchestrationEntryPoint playbackAssetService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc69b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51be8;
  func_0x000107c61428(param_1 + _DAT_112d51be8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fc69bc; end: 100fc69ff;  */

void FUN_100fc69bc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100fc6a00; end: 100fc6a0b; -[SCMemoriesQuickCutOrchestrationEntryPoint setPlaybackAssetService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6a00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51be8;
  func_0x000107c61428(param_1 + _DAT_112d51be8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6a0c; end: 100fc6a5f;  */

void FUN_100fc6a0c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fc6a60; end: 100fc6aa7; -[SCMemoriesQuickCutOrchestrationEntryPoint quickCutViewScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6a60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51bf0;
  func_0x000107c61428(param_1 + _DAT_112d51bf0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100fc6aa8; end: 100fc6ab3; -[SCMemoriesQuickCutOrchestrationEntryPoint setQuickCutViewScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6aa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51bf0;
  func_0x000107c61428(param_1 + _DAT_112d51bf0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100fc6ab4; end: 100fc6afb; -[SCMemoriesQuickCutOrchestrationEntryPoint memoriesPickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6ab4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51bf8;
  func_0x000107c61428(param_1 + _DAT_112d51bf8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100fc6afc; end: 100fc6b07; -[SCMemoriesQuickCutOrchestrationEntryPoint setMemoriesPickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6afc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51bf8;
  func_0x000107c61428(param_1 + _DAT_112d51bf8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100fc6b08; end: 100fc6b4f; -[SCMemoriesQuickCutOrchestrationEntryPoint snapEditorScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6b08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51c00;
  func_0x000107c61428(param_1 + _DAT_112d51c00,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100fc6b50; end: 100fc6b5b; -[SCMemoriesQuickCutOrchestrationEntryPoint setSnapEditorScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6b50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51c00;
  func_0x000107c61428(param_1 + _DAT_112d51c00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100fc6b5c; end: 100fc6bbb;  */

void FUN_100fc6b5c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 100fc6bbc; end: 100fc94d3;  */

/* WARNING: Possible PIC construction at 0x000100fc7050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc71c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8c28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc9114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc9124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc9154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc916c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc9184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc9194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc91a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc91b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc91c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc91d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc91ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc922c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc923c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc924c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc925c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc927c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc93ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc93bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc93cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc93dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc93ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc93fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc940c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc941c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc942c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc943c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc944c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc945c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc946c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc947c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc948c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc80a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc80b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc80c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc80d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc80e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc80f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc8054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7ee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7ef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7f14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7e04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7e14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7d54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7c94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7cb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7d14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7d24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7bf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7c04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7c14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7b34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7b54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7b64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7b84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7b94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7af4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc79f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7a64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc79a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc79b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc79c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc79d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc78d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc78e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc78f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc78a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc78b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc78c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc77e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc77f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc77a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc77b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc77c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc76a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc76b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc76c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc76d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc76e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc76f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc75b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc75c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc75d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc75e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc75a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc7524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc74e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc74f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc74c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc74d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc74b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fc74d8) */
/* WARNING: Removing unreachable block (ram,0x000100fc74c8) */
/* WARNING: Removing unreachable block (ram,0x000100fc74f8) */
/* WARNING: Removing unreachable block (ram,0x000100fc74e8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7528) */
/* WARNING: Removing unreachable block (ram,0x000100fc7518) */
/* WARNING: Removing unreachable block (ram,0x000100fc7568) */
/* WARNING: Removing unreachable block (ram,0x000100fc7558) */
/* WARNING: Removing unreachable block (ram,0x000100fc7548) */
/* WARNING: Removing unreachable block (ram,0x000100fc75a8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7598) */
/* WARNING: Removing unreachable block (ram,0x000100fc7588) */
/* WARNING: Removing unreachable block (ram,0x000100fc7578) */
/* WARNING: Removing unreachable block (ram,0x000100fc75e8) */
/* WARNING: Removing unreachable block (ram,0x000100fc75d8) */
/* WARNING: Removing unreachable block (ram,0x000100fc75c8) */
/* WARNING: Removing unreachable block (ram,0x000100fc75b8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7638) */
/* WARNING: Removing unreachable block (ram,0x000100fc7628) */
/* WARNING: Removing unreachable block (ram,0x000100fc7618) */
/* WARNING: Removing unreachable block (ram,0x000100fc7608) */
/* WARNING: Removing unreachable block (ram,0x000100fc7698) */
/* WARNING: Removing unreachable block (ram,0x000100fc7688) */
/* WARNING: Removing unreachable block (ram,0x000100fc7678) */
/* WARNING: Removing unreachable block (ram,0x000100fc7668) */
/* WARNING: Removing unreachable block (ram,0x000100fc7658) */
/* WARNING: Removing unreachable block (ram,0x000100fc76f8) */
/* WARNING: Removing unreachable block (ram,0x000100fc76e8) */
/* WARNING: Removing unreachable block (ram,0x000100fc76d8) */
/* WARNING: Removing unreachable block (ram,0x000100fc76c8) */
/* WARNING: Removing unreachable block (ram,0x000100fc76b8) */
/* WARNING: Removing unreachable block (ram,0x000100fc76a8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7758) */
/* WARNING: Removing unreachable block (ram,0x000100fc7748) */
/* WARNING: Removing unreachable block (ram,0x000100fc7738) */
/* WARNING: Removing unreachable block (ram,0x000100fc7728) */
/* WARNING: Removing unreachable block (ram,0x000100fc7718) */
/* WARNING: Removing unreachable block (ram,0x000100fc7708) */
/* WARNING: Removing unreachable block (ram,0x000100fc77c8) */
/* WARNING: Removing unreachable block (ram,0x000100fc77b8) */
/* WARNING: Removing unreachable block (ram,0x000100fc77a8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7798) */
/* WARNING: Removing unreachable block (ram,0x000100fc7788) */
/* WARNING: Removing unreachable block (ram,0x000100fc7778) */
/* WARNING: Removing unreachable block (ram,0x000100fc7848) */
/* WARNING: Removing unreachable block (ram,0x000100fc7838) */
/* WARNING: Removing unreachable block (ram,0x000100fc7828) */
/* WARNING: Removing unreachable block (ram,0x000100fc7818) */
/* WARNING: Removing unreachable block (ram,0x000100fc7808) */
/* WARNING: Removing unreachable block (ram,0x000100fc77f8) */
/* WARNING: Removing unreachable block (ram,0x000100fc77e8) */
/* WARNING: Removing unreachable block (ram,0x000100fc78c8) */
/* WARNING: Removing unreachable block (ram,0x000100fc78b8) */
/* WARNING: Removing unreachable block (ram,0x000100fc78a8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7898) */
/* WARNING: Removing unreachable block (ram,0x000100fc7888) */
/* WARNING: Removing unreachable block (ram,0x000100fc7878) */
/* WARNING: Removing unreachable block (ram,0x000100fc7868) */
/* WARNING: Removing unreachable block (ram,0x000100fc7858) */
/* WARNING: Removing unreachable block (ram,0x000100fc7948) */
/* WARNING: Removing unreachable block (ram,0x000100fc7938) */
/* WARNING: Removing unreachable block (ram,0x000100fc7928) */
/* WARNING: Removing unreachable block (ram,0x000100fc7918) */
/* WARNING: Removing unreachable block (ram,0x000100fc7908) */
/* WARNING: Removing unreachable block (ram,0x000100fc78f8) */
/* WARNING: Removing unreachable block (ram,0x000100fc78e8) */
/* WARNING: Removing unreachable block (ram,0x000100fc78d8) */
/* WARNING: Removing unreachable block (ram,0x000100fc79d8) */
/* WARNING: Removing unreachable block (ram,0x000100fc79c8) */
/* WARNING: Removing unreachable block (ram,0x000100fc79b8) */
/* WARNING: Removing unreachable block (ram,0x000100fc79a8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7998) */
/* WARNING: Removing unreachable block (ram,0x000100fc7988) */
/* WARNING: Removing unreachable block (ram,0x000100fc7978) */
/* WARNING: Removing unreachable block (ram,0x000100fc7968) */
/* WARNING: Removing unreachable block (ram,0x000100fc7a78) */
/* WARNING: Removing unreachable block (ram,0x000100fc7a68) */
/* WARNING: Removing unreachable block (ram,0x000100fc7a58) */
/* WARNING: Removing unreachable block (ram,0x000100fc7a48) */
/* WARNING: Removing unreachable block (ram,0x000100fc7a38) */
/* WARNING: Removing unreachable block (ram,0x000100fc7a28) */
/* WARNING: Removing unreachable block (ram,0x000100fc7a18) */
/* WARNING: Removing unreachable block (ram,0x000100fc7a08) */
/* WARNING: Removing unreachable block (ram,0x000100fc79f8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7b18) */
/* WARNING: Removing unreachable block (ram,0x000100fc7b08) */
/* WARNING: Removing unreachable block (ram,0x000100fc7af8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7ae8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7ad8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7ac8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7ab8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7aa8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7a98) */
/* WARNING: Removing unreachable block (ram,0x000100fc7a88) */
/* WARNING: Removing unreachable block (ram,0x000100fc7bb8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7ba8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7b98) */
/* WARNING: Removing unreachable block (ram,0x000100fc7b88) */
/* WARNING: Removing unreachable block (ram,0x000100fc7b78) */
/* WARNING: Removing unreachable block (ram,0x000100fc7b68) */
/* WARNING: Removing unreachable block (ram,0x000100fc7b58) */
/* WARNING: Removing unreachable block (ram,0x000100fc7b48) */
/* WARNING: Removing unreachable block (ram,0x000100fc7b38) */
/* WARNING: Removing unreachable block (ram,0x000100fc7b28) */
/* WARNING: Removing unreachable block (ram,0x000100fc7c68) */
/* WARNING: Removing unreachable block (ram,0x000100fc7c58) */
/* WARNING: Removing unreachable block (ram,0x000100fc7c48) */
/* WARNING: Removing unreachable block (ram,0x000100fc7c38) */
/* WARNING: Removing unreachable block (ram,0x000100fc7c28) */
/* WARNING: Removing unreachable block (ram,0x000100fc7c18) */
/* WARNING: Removing unreachable block (ram,0x000100fc7c08) */
/* WARNING: Removing unreachable block (ram,0x000100fc7bf8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7be8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7bd8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7d28) */
/* WARNING: Removing unreachable block (ram,0x000100fc7d18) */
/* WARNING: Removing unreachable block (ram,0x000100fc7d08) */
/* WARNING: Removing unreachable block (ram,0x000100fc7cf8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7ce8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7cd8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7cc8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7cb8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7ca8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7c98) */
/* WARNING: Removing unreachable block (ram,0x000100fc7c88) */
/* WARNING: Removing unreachable block (ram,0x000100fc7de8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7dd8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7dc8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7db8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7da8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7d98) */
/* WARNING: Removing unreachable block (ram,0x000100fc7d88) */
/* WARNING: Removing unreachable block (ram,0x000100fc7d78) */
/* WARNING: Removing unreachable block (ram,0x000100fc7d68) */
/* WARNING: Removing unreachable block (ram,0x000100fc7d58) */
/* WARNING: Removing unreachable block (ram,0x000100fc7d48) */
/* WARNING: Removing unreachable block (ram,0x000100fc7d38) */
/* WARNING: Removing unreachable block (ram,0x000100fc7ea8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7e98) */
/* WARNING: Removing unreachable block (ram,0x000100fc7e88) */
/* WARNING: Removing unreachable block (ram,0x000100fc7e78) */
/* WARNING: Removing unreachable block (ram,0x000100fc7e68) */
/* WARNING: Removing unreachable block (ram,0x000100fc7e58) */
/* WARNING: Removing unreachable block (ram,0x000100fc7e48) */
/* WARNING: Removing unreachable block (ram,0x000100fc7e38) */
/* WARNING: Removing unreachable block (ram,0x000100fc7e28) */
/* WARNING: Removing unreachable block (ram,0x000100fc7e18) */
/* WARNING: Removing unreachable block (ram,0x000100fc7e08) */
/* WARNING: Removing unreachable block (ram,0x000100fc7df8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7f78) */
/* WARNING: Removing unreachable block (ram,0x000100fc7f68) */
/* WARNING: Removing unreachable block (ram,0x000100fc7f58) */
/* WARNING: Removing unreachable block (ram,0x000100fc7f48) */
/* WARNING: Removing unreachable block (ram,0x000100fc7f38) */
/* WARNING: Removing unreachable block (ram,0x000100fc7f28) */
/* WARNING: Removing unreachable block (ram,0x000100fc7f18) */
/* WARNING: Removing unreachable block (ram,0x000100fc7f08) */
/* WARNING: Removing unreachable block (ram,0x000100fc7ef8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7ee8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7ed8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7ec8) */
/* WARNING: Removing unreachable block (ram,0x000100fc8058) */
/* WARNING: Removing unreachable block (ram,0x000100fc8048) */
/* WARNING: Removing unreachable block (ram,0x000100fc8038) */
/* WARNING: Removing unreachable block (ram,0x000100fc8028) */
/* WARNING: Removing unreachable block (ram,0x000100fc8018) */
/* WARNING: Removing unreachable block (ram,0x000100fc8008) */
/* WARNING: Removing unreachable block (ram,0x000100fc7ff8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7fe8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7fd8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7fc8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7fb8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7fa8) */
/* WARNING: Removing unreachable block (ram,0x000100fc7f98) */
/* WARNING: Removing unreachable block (ram,0x000100fc8138) */
/* WARNING: Removing unreachable block (ram,0x000100fc8128) */
/* WARNING: Removing unreachable block (ram,0x000100fc8118) */
/* WARNING: Removing unreachable block (ram,0x000100fc8108) */
/* WARNING: Removing unreachable block (ram,0x000100fc80f8) */
/* WARNING: Removing unreachable block (ram,0x000100fc80e8) */
/* WARNING: Removing unreachable block (ram,0x000100fc80d8) */
/* WARNING: Removing unreachable block (ram,0x000100fc80c8) */
/* WARNING: Removing unreachable block (ram,0x000100fc80b8) */
/* WARNING: Removing unreachable block (ram,0x000100fc80a8) */
/* WARNING: Removing unreachable block (ram,0x000100fc8098) */
/* WARNING: Removing unreachable block (ram,0x000100fc8088) */
/* WARNING: Removing unreachable block (ram,0x000100fc8078) */
/* WARNING: Removing unreachable block (ram,0x000100fc8068) */
/* WARNING: Removing unreachable block (ram,0x000100fc9490) */
/* WARNING: Removing unreachable block (ram,0x000100fc9480) */
/* WARNING: Removing unreachable block (ram,0x000100fc9470) */
/* WARNING: Removing unreachable block (ram,0x000100fc9460) */
/* WARNING: Removing unreachable block (ram,0x000100fc9450) */
/* WARNING: Removing unreachable block (ram,0x000100fc9440) */
/* WARNING: Removing unreachable block (ram,0x000100fc9430) */
/* WARNING: Removing unreachable block (ram,0x000100fc9420) */
/* WARNING: Removing unreachable block (ram,0x000100fc9410) */
/* WARNING: Removing unreachable block (ram,0x000100fc9400) */
/* WARNING: Removing unreachable block (ram,0x000100fc93f0) */
/* WARNING: Removing unreachable block (ram,0x000100fc93e0) */
/* WARNING: Removing unreachable block (ram,0x000100fc93d0) */
/* WARNING: Removing unreachable block (ram,0x000100fc93c0) */
/* WARNING: Removing unreachable block (ram,0x000100fc93b0) */
/* WARNING: Removing unreachable block (ram,0x000100fc9280) */
/* WARNING: Removing unreachable block (ram,0x000100fc9318) */
/* WARNING: Removing unreachable block (ram,0x000100fc92e0) */
/* WARNING: Removing unreachable block (ram,0x000100fc9320) */
/* WARNING: Removing unreachable block (ram,0x000100fc9260) */
/* WARNING: Removing unreachable block (ram,0x000100fc9250) */
/* WARNING: Removing unreachable block (ram,0x000100fc9240) */
/* WARNING: Removing unreachable block (ram,0x000100fc9230) */
/* WARNING: Removing unreachable block (ram,0x000100fc91f0) */
/* WARNING: Removing unreachable block (ram,0x000100fc91d8) */
/* WARNING: Removing unreachable block (ram,0x000100fc91c8) */
/* WARNING: Removing unreachable block (ram,0x000100fc91b8) */
/* WARNING: Removing unreachable block (ram,0x000100fc91a8) */
/* WARNING: Removing unreachable block (ram,0x000100fc9198) */
/* WARNING: Removing unreachable block (ram,0x000100fc9188) */
/* WARNING: Removing unreachable block (ram,0x000100fc9170) */
/* WARNING: Removing unreachable block (ram,0x000100fc9158) */
/* WARNING: Removing unreachable block (ram,0x000100fc9128) */
/* WARNING: Removing unreachable block (ram,0x000100fc9118) */
/* WARNING: Removing unreachable block (ram,0x000100fc8c2c) */
/* WARNING: Removing unreachable block (ram,0x000100fc9104) */
/* WARNING: Removing unreachable block (ram,0x000100fc90e8) */
/* WARNING: Removing unreachable block (ram,0x000100fc9110) */
/* WARNING: Removing unreachable block (ram,0x000100fc8b74) */
/* WARNING: Removing unreachable block (ram,0x000100fc8b4c) */
/* WARNING: Removing unreachable block (ram,0x000100fc8aec) */
/* WARNING: Removing unreachable block (ram,0x000100fc7408) */
/* WARNING: Removing unreachable block (ram,0x000100fc815c) */
/* WARNING: Removing unreachable block (ram,0x000100fc8420) */
/* WARNING: Removing unreachable block (ram,0x000100fc8404) */
/* WARNING: Removing unreachable block (ram,0x000100fc842c) */
/* WARNING: Removing unreachable block (ram,0x000100fc859c) */
/* WARNING: Removing unreachable block (ram,0x000100fc857c) */
/* WARNING: Removing unreachable block (ram,0x000100fc85ac) */
/* WARNING: Removing unreachable block (ram,0x000100fc7434) */
/* WARNING: Removing unreachable block (ram,0x000100fc8714) */
/* WARNING: Removing unreachable block (ram,0x000100fc8750) */
/* WARNING: Removing unreachable block (ram,0x000100fc873c) */
/* WARNING: Removing unreachable block (ram,0x000100fc896c) */
/* WARNING: Removing unreachable block (ram,0x000100fc71cc) */
/* WARNING: Removing unreachable block (ram,0x000100fc7054) */
/* WARNING: Removing unreachable block (ram,0x000100fc74b8) */

void FUN_100fc6bbc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c5c634();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c5b1d8();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar4);
        lVar4 = lVar1;
      }
      else {
        lVar2 = unaff_x20;
        func_0x000107c4cb70();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c61170(lVar4);
          lVar4 = lVar1;
        }
        else {
          lVar2 = unaff_x20;
          func_0x000107c4cbc8();
          func_0x000107c61180();
          if (lVar2 != 0) {
            lVar2 = unaff_x20;
            func_0x000107c4f828();
            func_0x000107c61180();
            if (lVar2 != 0) {
              lVar2 = unaff_x20;
              func_0x000107c5b1dc();
              func_0x000107c61180();
              if (lVar2 == 0) {
                func_0x000107c61170(lVar4);
                lVar4 = lVar1;
              }
              else {
                lVar2 = unaff_x20;
                func_0x000107c5b3b8();
                func_0x000107c61180();
                if (lVar2 == 0) {
                  func_0x000107c61170(lVar4);
                  lVar4 = lVar1;
                }
                else {
                  lVar3 = unaff_x20;
                  func_0x000107c4f820();
                  func_0x000107c61180();
                  if (lVar3 != 0) {
                    lVar3 = unaff_x20;
                    func_0x000107c4cbcc();
                    func_0x000107c61180();
                    if (lVar3 != 0) {
                      lVar3 = unaff_x20;
                      func_0x000107c4cb8c();
                      func_0x000107c61180();
                      if (lVar3 == 0) {
                        func_0x000107c61170(lVar4);
                        lVar4 = lVar1;
                      }
                      else {
                        lVar3 = unaff_x20;
                        func_0x000107c4ccdc();
                        func_0x000107c61180();
                        if (lVar3 == 0) {
                          func_0x000107c61170(lVar4);
                          lVar4 = lVar1;
                        }
                        else {
                          lVar3 = unaff_x20;
                          func_0x000107c4cc14();
                          func_0x000107c61180();
                          if (lVar3 != 0) {
                            lVar3 = unaff_x20;
                            func_0x000107c4cc2c();
                            func_0x000107c61180();
                            if (lVar3 != 0) {
                              lVar3 = unaff_x20;
                              func_0x000107c4cbe0();
                              func_0x000107c61180();
                              if (lVar3 == 0) {
                                func_0x000107c61170(lVar4);
                                lVar4 = lVar1;
                              }
                              else {
                                lVar3 = unaff_x20;
                                func_0x000107c4cb74();
                                func_0x000107c61180();
                                if (lVar3 == 0) {
                                  func_0x000107c61170(lVar4);
                                  lVar4 = lVar1;
                                }
                                else {
                                  lVar3 = unaff_x20;
                                  func_0x000107c41420();
                                  func_0x000107c61180();
                                  if (lVar3 != 0) {
                                    lVar3 = unaff_x20;
                                    func_0x000107c5b278();
                                    func_0x000107c61180();
                                    if (lVar3 != 0) {
                                      lVar3 = unaff_x20;
                                      func_0x000107c5b284();
                                      func_0x000107c61180();
                                      if (lVar3 == 0) {
                                        func_0x000107c61170(lVar4);
                                        lVar4 = lVar1;
                                      }
                                      else {
                                        lVar3 = unaff_x20;
                                        func_0x000107c5b1bc();
                                        func_0x000107c61180();
                                        if (lVar3 == 0) {
                                          func_0x000107c61170(lVar4);
                                          lVar4 = lVar1;
                                        }
                                        else {
                                          lVar3 = unaff_x20;
                                          func_0x000107c4cb78();
                                          func_0x000107c61180();
                                          if (lVar3 != 0) {
                                            lVar3 = unaff_x20;
                                            func_0x000107c4f824();
                                            func_0x000107c61180();
                                            if (lVar3 != 0) {
                                              lVar3 = unaff_x20;
                                              func_0x000107c4c19c();
                                              func_0x000107c61180();
                                              if (lVar3 == 0) {
                                                func_0x000107c61170(lVar4);
                                                lVar4 = lVar1;
                                              }
                                              else {
                                                lVar3 = unaff_x20;
                                                func_0x000107c4cc4c();
                                                func_0x000107c61180();
                                                if (lVar3 == 0) {
                                                  func_0x000107c61170(lVar4);
                                                  lVar4 = lVar1;
                                                }
                                                else {
                                                  lVar3 = unaff_x20;
                                                  func_0x000107c4e9ac();
                                                  func_0x000107c61180();
                                                  if (lVar3 != 0) {
                                                    lVar3 = unaff_x20;
                                                    func_0x000107c40434();
                                                    func_0x000107c61180();
                                                    if (lVar3 != 0) {
                                                      lVar3 = unaff_x20;
                                                      func_0x000107c4cb44();
                                                      func_0x000107c61180();
                                                      if (lVar3 == 0) {
                                                        func_0x000107c61170(lVar4);
                                                        lVar4 = lVar1;
                                                      }
                                                      else {
                                                        lVar3 = unaff_x20;
                                                        func_0x000107c3e274();
                                                        func_0x000107c61180();
                                                        if (lVar3 == 0) {
                                                          func_0x000107c61170(lVar4);
                                                          lVar4 = lVar1;
                                                        }
                                                        else {
                                                          func_0x000107c4e8e8();
                                                          func_0x000107c61180();
                                                          if (unaff_x20 != 0) {
                                                            lVar4 = 0;
                                                            FUN_100fbbe94();
                                                            func_0x000107c613fc();
                                                            *(undefined8 *)(lVar4 + 0x18) = 0;
                                                            func_0x0001000285a8(0x112d51708,
                                                                                &UNK_10d918530);
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c61174();
                                                            func_0x000107c4cca8();
                                                            func_0x000107c61180();
                                                            func_0x0001000bda74();
                                                            lVar4 = lVar2;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 100fc94d4; end: 100fc9507;  */

void FUN_100fc94d4(void)

{
  long unaff_x20;
  
  func_0x000103a76c34(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100fc9508; end: 100fc952f; -[SCMemoriesQuickCutOrchestrationEntryPoint begin] */

void FUN_100fc9508(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100fc6bbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100fc9530; end: 100fc95e3; -[SCMemoriesQuickCutOrchestrationEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc9530(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112d51c08);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_100fba708();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_100fc95c4;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_100fc95c4:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100fc95e4; end: 100fca26b;  */

void FUN_100fc95e4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0x63536d6574737973;
    if (((param_2 == 0x63536d6574737973) && (param_3 == -0x14ffffffff9a8f91)) ||
       (func_0x000107c605b8(0x63536d6574737973,0xeb0000000065706f,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59b6c();
    }
    else {
      if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10e21d0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000016,0x800000010ef1de30,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10e21b0)) ||
             (func_0x000107c605b8(0xd000000000000020,0x800000010ef1de50,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c56538();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef10e2180)) ||
               (func_0x000107c605b8(0xd000000000000024,0x800000010ef1de80,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c56570();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10e2150)) ||
                 (func_0x000107c605b8(0xd00000000000001c,0x800000010ef1deb0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5936c();
              }
              else {
                if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e2130)) {
                  uVar2 = 0;
                  func_0x000107c605b8(0xd000000000000014,0x800000010ef1ded0,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0xd000000000000017;
                    if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10e2110)) ||
                       (func_0x000107c605b8(0xd000000000000017,0x800000010ef1def0,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c57ac8();
                    }
                    else {
                      uVar2 = 0;
                      if (((param_2 == -0x2fffffffffffffd4) && (param_3 == -0x7ffffffef10e20f0)) ||
                         (func_0x000107c605b8(0xd00000000000002c,0x800000010ef1df10,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c56574();
                      }
                      else {
                        uVar2 = 0;
                        if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10e20c0))
                           || (func_0x000107c605b8(0xd00000000000001a,0x800000010ef1df40,param_2,
                                                   param_3,0), (uVar2 & 1) != 0)) {
                          FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c56550();
                        }
                        else {
                          if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10e20a0))
                          {
                            uVar2 = 0;
                            func_0x000107c605b8(0xd000000000000016,0x800000010ef1df60,param_2,
                                                param_3,0);
                            if ((uVar2 & 1) == 0) {
                              uVar2 = 0xd00000000000001d;
                              if (((param_2 == -0x2fffffffffffffe3) &&
                                  (param_3 == -0x7ffffffef10e5620)) ||
                                 (func_0x000107c605b8(0xd00000000000001d,0x800000010ef1a9e0,param_2,
                                                      param_3,0), (uVar2 & 1) != 0)) {
                                FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c565a0();
                                goto LAB_100fc9678;
                              }
                              if ((param_2 != -0x2fffffffffffffe0) ||
                                 (param_3 != -0x7ffffffef10e2080)) {
                                uVar2 = 0;
                                func_0x000107c605b8(0xd000000000000020,0x800000010ef1df80,param_2,
                                                    param_3,0);
                                if ((uVar2 & 1) == 0) {
                                  if ((param_2 != -0x2fffffffffffffec) ||
                                     (param_3 != -0x7ffffffef10e2050)) {
                                    uVar2 = 0;
                                    func_0x000107c605b8(0xd000000000000014,0x800000010ef1dfb0,
                                                        param_2,param_3,0);
                                    if ((uVar2 & 1) == 0) {
                                      uVar2 = 0;
                                      if (((param_2 == 0x767265536b636564) &&
                                          (param_3 == -0x13ffffff8c9a9c97)) ||
                                         (func_0x000107c605b8(0x767265536b636564,0xec00000073656369,
                                                              param_2,param_3,0), (uVar2 & 1) != 0))
                                      {
                                        FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
                                        func_0x000107c605b0();
                                        func_0x000107c53e98();
                                        goto LAB_100fc9678;
                                      }
                                      if ((param_2 != -0x2fffffffffffffe9) ||
                                         (param_3 != -0x7ffffffef10e2030)) {
                                        uVar2 = 0xd000000000000017;
                                        func_0x000107c605b8(0xd000000000000017,0x800000010ef1dfd0,
                                                            param_2,param_3,0);
                                        if ((uVar2 & 1) == 0) {
                                          uVar2 = 0xd000000000000015;
                                          if (((param_2 == -0x2fffffffffffffeb) &&
                                              (param_3 == -0x7ffffffef10e2010)) ||
                                             (func_0x000107c605b8(0xd000000000000015,
                                                                  0x800000010ef1dff0,param_2,param_3
                                                                  ,0), (uVar2 & 1) != 0)) {
                                            FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
                                            func_0x000107c605b0();
                                            func_0x000107c5935c();
                                          }
                                          else {
                                            uVar2 = 0;
                                            if (((param_2 == -0x2fffffffffffffd8) &&
                                                (param_3 == -0x7ffffffef10e1ff0)) ||
                                               (func_0x000107c605b8(0xd000000000000028,
                                                                    0x800000010ef1e010,param_2,
                                                                    param_3,0), (uVar2 & 1) != 0)) {
                                              FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18))
                                              ;
                                              func_0x000107c605b0();
                                              func_0x000107c56544();
                                            }
                                            else {
                                              uVar2 = 0;
                                              if (((param_2 == -0x2fffffffffffffda) &&
                                                  (param_3 == -0x7ffffffef10e1fc0)) ||
                                                 (func_0x000107c605b8(0xd000000000000026,
                                                                      0x800000010ef1e040,param_2,
                                                                      param_3,0), (uVar2 & 1) != 0))
                                              {
                                                FUN_100fca948(param_1,*(undefined8 *)
                                                                       (param_1 + 0x18));
                                                func_0x000107c605b0();
                                                func_0x000107c57acc();
                                              }
                                              else {
                                                uVar2 = 0xd000000000000019;
                                                if (((param_2 == -0x2fffffffffffffe7) &&
                                                    (param_3 == -0x7ffffffef10e1f90)) ||
                                                   (func_0x000107c605b8(0xd000000000000019,
                                                                        0x800000010ef1e070,param_2,
                                                                        param_3,0), (uVar2 & 1) != 0
                                                   )) {
                                                  FUN_100fca948(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c561b0();
                                                }
                                                else {
                                                  uVar2 = 0xd000000000000023;
                                                  if (((param_2 == -0x2fffffffffffffdd) &&
                                                      (param_3 == -0x7ffffffef10e1f70)) ||
                                                     (func_0x000107c605b8(0xd000000000000023,
                                                                          0x800000010ef1e090,param_2
                                                                          ,param_3,0),
                                                     (uVar2 & 1) != 0)) {
                                                    FUN_100fca948(param_1,*(undefined8 *)
                                                                           (param_1 + 0x18));
                                                    func_0x000107c605b0();
                                                    func_0x000107c565ac();
                                                  }
                                                  else {
                                                    uVar2 = 0;
                                                    if (((param_2 == 0x6553726579616c70) &&
                                                        (param_3 == -0x11ff8c9a9c96898e)) ||
                                                       (func_0x000107c605b8(0x6553726579616c70,
                                                                            0xee00736563697672,
                                                                            param_2,param_3,0),
                                                       (uVar2 & 1) != 0)) {
                                                      FUN_100fca948(param_1,*(undefined8 *)
                                                                             (param_1 + 0x18));
                                                      func_0x000107c605b0();
                                                      func_0x000107c57510();
                                                    }
                                                    else {
                                                      if ((param_2 != -0x2fffffffffffffe9) ||
                                                         (param_3 != -0x7ffffffef10e6230)) {
                                                        uVar2 = 0xd000000000000017;
                                                        func_0x000107c605b8(0xd000000000000017,
                                                                            0x800000010ef19dd0,
                                                                            param_2,param_3,0);
                                                        if ((uVar2 & 1) == 0) {
                                                          if ((param_2 != -0x2fffffffffffffe4) ||
                                                             (param_3 != -0x7ffffffef10e1f40)) {
                                                            uVar2 = 0;
                                                            func_0x000107c605b8(0xd00000000000001c,
                                                                                0x800000010ef1e0c0,
                                                                                param_2,param_3,0);
                                                            if ((uVar2 & 1) == 0) {
                                                              uVar2 = 0;
                                                              if (((param_2 == -0x2fffffffffffffee)
                                                                  && (param_3 == -0x7ffffffef10ed650
                                                                     )) || (func_0x000107c605b8(
                                                  0xd000000000000012,0x800000010ef129b0,param_2,
                                                  param_3,0), (uVar2 & 1) != 0)) {
                                                    FUN_100fca948(param_1,*(undefined8 *)
                                                                           (param_1 + 0x18));
                                                    func_0x000107c605b0();
                                                    func_0x000107c52954();
                                                    goto LAB_100fc9678;
                                                  }
                                                  if ((param_2 != -0x2fffffffffffffec) ||
                                                     (param_3 != -0x7ffffffef10e1f20)) {
                                                    uVar2 = 0;
                                                    func_0x000107c605b8(0xd000000000000014,
                                                                        0x800000010ef1e0e0,param_2,
                                                                        param_3,0);
                                                    if ((uVar2 & 1) == 0) {
                                                      uVar2 = 0;
                                                      if (((param_2 == -0x2fffffffffffffe8) &&
                                                          (param_3 == -0x7ffffffef10e1f00)) ||
                                                         (func_0x000107c605b8(0xd000000000000018,
                                                                              0x800000010ef1e100,
                                                                              param_2,param_3,0),
                                                         (uVar2 & 1) != 0)) {
                                                        FUN_100fca948(param_1,*(undefined8 *)
                                                                               (param_1 + 0x18));
                                                        func_0x000107c605b0();
                                                        func_0x000107c57ad0();
                                                      }
                                                      else {
                                                        if ((param_2 != -0x2fffffffffffffe6) ||
                                                           (param_3 != -0x7ffffffef10e1ee0)) {
                                                          uVar2 = 0;
                                                          func_0x000107c605b8(0xd00000000000001a,
                                                                              0x800000010ef1e120,
                                                                              param_2,param_3,0);
                                                          if ((uVar2 & 1) == 0) {
                                                            if ((param_2 != -0x2fffffffffffffea) ||
                                                               (param_3 != -0x7ffffffef10e1ec0)) {
                                                              uVar2 = 0;
                                                              func_0x000107c605b8(0xd000000000000016
                                                                                  ,
                                                  0x800000010ef1e140,param_2,param_3,0);
                                                  if ((uVar2 & 1) == 0) {
                                                    func_0x000107c602fc(0x15);
                                                    func_0x000107c6142c(0xe000000000000000);
                                                    func_0x000107c5fb78(param_2,param_3);
                                                    func_0x000107c60450("Fatal error",0xb,2,
                                                                        0xd000000000000013,
                                                                        0x800000010ef0fc20,
                                                                                                                                                
                                                  "MemoriesQuickCutOrchestration/SCMemoriesQuickCutOrchestrationEntryPoint.swift"
                                                  ,0x4d,2,0xad,0);
                    /* WARNING: Does not return */
                                                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fca26c)
                                                  ;
                                                  (*pcVar1)();
                                                  }
                                                  }
                                                  FUN_100fca948(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c593c4();
                                                  goto LAB_100fc9678;
                                                  }
                                                  }
                                                  FUN_100fca948(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c56590();
                                                  }
                                                  goto LAB_100fc9678;
                                                  }
                                                  }
                                                  FUN_100fca948(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c574c0();
                                                  goto LAB_100fc9678;
                                                  }
                                                  }
                                                  FUN_100fca948(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c5651c();
                                                  goto LAB_100fc9678;
                                                  }
                                                  }
                                                  FUN_100fca948(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c53808();
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          goto LAB_100fc9678;
                                        }
                                      }
                                      FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
                                      func_0x000107c605b0();
                                      func_0x000107c593d0();
                                      goto LAB_100fc9678;
                                    }
                                  }
                                  FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c56540();
                                  goto LAB_100fc9678;
                                }
                              }
                              FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c56578();
                              goto LAB_100fc9678;
                            }
                          }
                          FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c565ec();
                        }
                      }
                    }
                    goto LAB_100fc9678;
                  }
                }
                FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c59454();
              }
            }
          }
          goto LAB_100fc9678;
        }
      }
      FUN_100fca948(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59368();
    }
  }
LAB_100fc9678:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100fca26c; end: 100fca317; -[SCMemoriesQuickCutOrchestrationEntryPoint setValue:forIvarName:] */

void FUN_100fca26c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100fc95e4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100fca98c(auStack_50);
  return;
}



/* Entry: 100fca318; end: 100fca58f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fca318(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d51b20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51b28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51b30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51b38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51b40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51b48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51b50,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51b58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51b60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51b68,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51b70,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51b78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51b80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51b88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51b90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51b98,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51ba0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51ba8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51bb0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51bb8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51bc0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51bc8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51bd0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51bd8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51be0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d51be8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d51bf0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d51bf8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d51c00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d51c08) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100fca590; end: 100fca5af; -[SCMemoriesQuickCutOrchestrationEntryPoint init] */

void FUN_100fca590(void)

{
  FUN_100fca318();
  return;
}



/* Entry: 100fca5b0; end: 100fca5e3;  */

void FUN_100fca5b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100fca5e4; end: 100fca7db; -[SCMemoriesQuickCutOrchestrationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fca5e4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d51b20);
  func_0x000107c61610(param_1 + _DAT_112d51b28);
  func_0x000107c61610(param_1 + _DAT_112d51b30);
  func_0x000107c61610(param_1 + _DAT_112d51b38);
  func_0x000107c61610(param_1 + _DAT_112d51b40);
  func_0x000107c61610(param_1 + _DAT_112d51b48);
  func_0x000107c61610(param_1 + _DAT_112d51b50);
  func_0x000107c61610(param_1 + _DAT_112d51b58);
  func_0x000107c61610(param_1 + _DAT_112d51b60);
  func_0x000107c61610(param_1 + _DAT_112d51b68);
  func_0x000107c61610(param_1 + _DAT_112d51b70);
  func_0x000107c61610(param_1 + _DAT_112d51b78);
  func_0x000107c61610(param_1 + _DAT_112d51b80);
  func_0x000107c61610(param_1 + _DAT_112d51b88);
  func_0x000107c61610(param_1 + _DAT_112d51b90);
  func_0x000107c61610(param_1 + _DAT_112d51b98);
  func_0x000107c61610(param_1 + _DAT_112d51ba0);
  func_0x000107c61610(param_1 + _DAT_112d51ba8);
  func_0x000107c61610(param_1 + _DAT_112d51bb0);
  func_0x000107c61610(param_1 + _DAT_112d51bb8);
  func_0x000107c61610(param_1 + _DAT_112d51bc0);
  func_0x000107c61610(param_1 + _DAT_112d51bc8);
  func_0x000107c61610(param_1 + _DAT_112d51bd0);
  func_0x000107c61610(param_1 + _DAT_112d51bd8);
  func_0x000107c61610(param_1 + _DAT_112d51be0);
  func_0x000107c61610(param_1 + _DAT_112d51be8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d51bf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d51bf8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d51c00));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d51c08));
  return;
}



/* Entry: 100fca7dc; end: 100fca7f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fca7dc(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11303eae0);
  lVar2 = 0;
  func_0x000100fb8630();
  lVar3 = lVar2;
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  func_0x000107c61474(lVar3);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar3 + 0x70) = uVar4;
  *(undefined **)(lVar3 + 0x78) = puVar1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1103726e8;
  *param_1 = lVar3;
  return;
}



/* Entry: 100fca7f4; end: 100fca83f;  */

void FUN_100fca7f4(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100fca9ac;
  plVar1[5] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fba428,0,0);
  return;
}



/* Entry: 100fca840; end: 100fca873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fca840(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c42d48();
  func_0x000107c61180();
  lVar7 = 0;
  FUN_100fb2dc4();
  lVar8 = lVar7;
  func_0x000107c610f8();
  lVar5 = _DAT_112d51558;
  lVar9 = 0x112d515a0;
  func_0x0001000285a8(0x112d515a0,&UNK_10d918670);
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar8 + lVar5,1,1,lVar9);
  *(undefined8 *)(lVar8 + _DAT_112d51538) = uVar1;
  *(undefined8 *)(lVar8 + _DAT_112d51540) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112d51548) = uVar2;
  *(undefined8 *)(lVar8 + _DAT_112d51550) = uVar6;
  puVar4 = PTR_s_init_1125d9248;
  lStack_60 = lVar8;
  lStack_58 = lVar7;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c61154(&lStack_60,puVar4);
  return;
}



/* Entry: 100fca874; end: 100fca8b7;  */

long FUN_100fca874(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100fca8b8; end: 100fca90b;  */

void FUN_100fca8b8(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fca90c;
  plVar3[0x18] = unaff_x20;
  lVar1 = 0;
  func_0x0001038e5950();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x19] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbc78c,0,0);
  return;
}



/* Entry: 100fca90c; end: 100fca947;  */

void FUN_100fca90c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fca944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fca948; end: 100fca96b;  */

long * FUN_100fca948(long *param_1,long param_2)

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



/* Entry: 100fca96c; end: 100fca98b;  */

void FUN_100fca96c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a6b30);
  return;
}



/* Entry: 100fca98c; end: 100fca9af;  */

void FUN_100fca98c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100fca9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 100fca9b0; end: 100fca9bb; -[SCSnapEditorQuickCutOrchestrationEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fca9b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51c38;
  func_0x000107c61428(param_1 + _DAT_112d51c38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fca9bc; end: 100fca9c7; -[SCSnapEditorQuickCutOrchestrationEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fca9bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51c38;
  func_0x000107c61428(param_1 + _DAT_112d51c38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fca9c8; end: 100fca9d3; -[SCSnapEditorQuickCutOrchestrationEntryPoint systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fca9c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51c40;
  func_0x000107c61428(param_1 + _DAT_112d51c40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fca9d4; end: 100fca9df; -[SCSnapEditorQuickCutOrchestrationEntryPoint setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fca9d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51c40;
  func_0x000107c61428(param_1 + _DAT_112d51c40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fca9e0; end: 100fca9eb; -[SCSnapEditorQuickCutOrchestrationEntryPoint snapRendererServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fca9e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51c48;
  func_0x000107c61428(param_1 + _DAT_112d51c48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fca9ec; end: 100fca9f7; -[SCSnapEditorQuickCutOrchestrationEntryPoint setSnapRendererServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fca9ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51c48;
  func_0x000107c61428(param_1 + _DAT_112d51c48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fca9f8; end: 100fcaa03; -[SCSnapEditorQuickCutOrchestrationEntryPoint quickCutLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fca9f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51c50;
  func_0x000107c61428(param_1 + _DAT_112d51c50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fcaa04; end: 100fcaa0f; -[SCSnapEditorQuickCutOrchestrationEntryPoint setQuickCutLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fcaa04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d51c50;
  func_0x000107c61428(param_1 + _DAT_112d51c50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fcaa10; end: 100fcaa1b; -[SCSnapEditorQuickCutOrchestrationEntryPoint memoriesMashupSourceSnapDocProvisionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fcaa10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d51c58;
  func_0x000107c61428(param_1 + _DAT_112d51c58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


