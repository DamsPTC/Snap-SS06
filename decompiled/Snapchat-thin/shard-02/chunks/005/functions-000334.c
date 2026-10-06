/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101dd36c4; end: 101dd36cb;  */

void FUN_101dd36c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1104867a0;
  func_0x000107c613fc(&UNK_1104867a0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  uVar3 = 0x81;
  func_0x000100859150(0x81,0,0x48,4,0,0,&UNK_10da16d30,puVar2,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61574(puVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 101dd36cc; end: 101dd3717;  */

void FUN_101dd36cc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101dd3718;
  plVar1[5] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dd384c,0,0);
  return;
}



/* Entry: 101dd3718; end: 101dd3783;  */

void FUN_101dd3718(undefined8 param_1)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x28));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101dd3758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dd3784,0,0);
  return;
}



/* Entry: 101dd3784; end: 101dd3833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd3784(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + _DAT_112fd9138);
  FUN_101dd3e0c();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e2e080) = uVar3;
  plVar4 = (long *)(unaff_x22 + 0x10);
  *plVar4 = lVar2;
  *(long *)(unaff_x22 + 0x18) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(plVar4,puVar1);
  func_0x000107c61170();
  func_0x000101dd3eb8();
  func_0x000107c613f8(&UNK_110486888,plVar4,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101dd3830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dd3834; end: 101dd384b;  */

void FUN_101dd3834(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dd384c,0,0);
  return;
}



/* Entry: 101dd384c; end: 101dd3923;  */

void FUN_101dd384c(void)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(unaff_x22 + 0x28);
  func_0x0001000285a8(0x112d3b7c0,&UNK_10d904cb0);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  plVar1 = plVar7;
  func_0x0001000bda74();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  func_0x000107c61170(plVar7);
  uVar2 = 0x112d510f8;
  func_0x0001000285a8(0x112d510f8,&UNK_10d917b20);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  plVar7 = plVar3;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x40) = plVar7;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101dd3924;
  plVar3[0xb] = (long)plVar7;
  plVar3[0xc] = unaff_x22 + 0x20;
  plVar3[9] = unaff_x22 + 0x18;
  plVar3[10] = (long)&UNK_1107a6f08;
  plVar3[8] = unaff_x22 + 0x10;
  lVar6 = *plVar1;
  plVar3[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar4 = 0x10;
  _swift_task_alloc();
  plVar3[0xe] = lVar4;
  lVar4 = *(long *)(lVar6 + 0x50);
  plVar3[0xf] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x10] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x11] = uVar5;
  plVar7 = (long *)0x70;
  _swift_task_alloc();
  plVar3[0x12] = (long)plVar7;
  *plVar7 = (long)plVar3;
  plVar7[1] = (long)&UNK_104876614;
  plVar7[5] = uVar5;
  plVar7[6] = (long)plVar1;
  lVar6 = *(long *)(*plVar1 + 0x50);
  plVar7[7] = lVar6;
  lVar4 = 0;
  __sSqMa(0,lVar6);
  plVar7[8] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar7[9] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[10] = uVar5;
  lVar4 = *(long *)(lVar6 + -8);
  plVar7[0xb] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101dd3924; end: 101dd39bb;  */

void FUN_101dd3924(void)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar5 + 0x30);
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x38));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    lVar4 = *(long *)(lVar5 + 0x10);
    *(long *)(lVar5 + 0x48) = lVar4;
    plVar2 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(lVar5 + 0x50) = plVar2;
    *plVar2 = lVar6;
    plVar2[1] = (long)FUN_101dd39bc;
    plVar2[6] = lVar4;
    pcVar3 = FUN_101dd3ae8;
  }
  else {
    pcVar3 = FUN_101dd3a40;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 101dd39bc; end: 101dd3a2f;  */

void FUN_101dd39bc(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x48);
  *(long *)(lVar3 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x50));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x60) = param_1;
    pcVar2 = FUN_101dd3a30;
  }
  else {
    pcVar2 = FUN_101dd3a8c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101dd3a30; end: 101dd3a3f;  */

void FUN_101dd3a30(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101dd3a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 101dd3a40; end: 101dd3a8b;  */

void FUN_101dd3a40(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101dd3a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dd3a8c; end: 101dd3a9f;  */

void FUN_101dd3a8c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101dd3a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dd3aa0; end: 101dd3ac3;  */

void FUN_101dd3aa0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dd3ac4; end: 101dd3ae7;  */

void FUN_101dd3ac4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101dd3ae8; end: 101dd3c57;  */

/* WARNING: Removing unreachable block (ram,0x000101dd3b44) */
/* WARNING: Removing unreachable block (ram,0x000101dd3b78) */

void FUN_101dd3ae8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c509b4();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  func_0x0001000285a8(0x112d51a60,&UNK_10d9189e0);
  func_0x0001048da110(unaff_x22 + 0x18);
  func_0x000107c615e8(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  func_0x0001000285a8(0x112d51a50,&UNK_10d9189d0);
  puVar2 = &UNK_1104867c8;
  func_0x000107c613fc(&UNK_1104867c8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  func_0x000107c615f0(uVar1);
  uVar1 = 0;
  func_0x0001048897a0(0,1,0,FUN_101dd3ef8,puVar2);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  func_0x000107c61574(puVar2);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101dd3c58;
                    /* WARNING: Could not recover jumptable at 0x000101dd3c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100fab58c)();
  return;
}



/* Entry: 101dd3c58; end: 101dd3cab;  */

void FUN_101dd3c58(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x50) = param_1;
  *(undefined1 *)(lVar1 + 0x58) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dd3cac,0,0);
  return;
}



/* Entry: 101dd3cac; end: 101dd3d63;  */

void FUN_101dd3cac(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  if (*(char *)(unaff_x22 + 0x58) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
    func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101dd3d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101dd3d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 101dd3d64; end: 101dd3dc7; -[_TtC33MemoriesValdiSaveCoreServicesImpl21BackupServiceProvider getBackupService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd3d64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001000d224c(&uStack_38);
  func_0x000103edf0bc();
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101dd3dc8; end: 101dd3dfb;  */

void FUN_101dd3dc8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101dd3dfc; end: 101dd3e0b; -[_TtC33MemoriesValdiSaveCoreServicesImpl21BackupServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd3dfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2e080));
  return;
}



/* Entry: 101dd3e0c; end: 101dd3e2b;  */

void FUN_101dd3e0c(void)

{
  func_0x000107c61168(&PTR_PTR_112804b70);
  return;
}



/* Entry: 101dd3e2c; end: 101dd3e7b;  */

void FUN_101dd3e2c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101dd3e7c;
  plVar4[4] = lVar2;
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  plVar4[5] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_101dd3718;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dd384c,0,0);
  return;
}



/* Entry: 101dd3e7c; end: 101dd3ef7;  */

void FUN_101dd3e7c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101dd3eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101dd3ef8; end: 101dd3f93;  */

void FUN_101dd3ef8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  pcStack_40 = FUN_101dd40c4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100f1c768;
  puStack_48 = &UNK_1104867e0;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c440d8(uVar3,param_2,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101dd3f94; end: 101dd3f9b;  */

undefined8 FUN_101dd3f94(void)

{
  return 1;
}



/* Entry: 101dd3f9c; end: 101dd403b;  */

void FUN_101dd3f9c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101dd403c; end: 101dd4073;  */

undefined1  [16] FUN_101dd403c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f011120;
  auVar1._0_8_ = 0xd000000000000013;
  return auVar1;
}



/* Entry: 101dd4074; end: 101dd40b3;  */

void FUN_101dd4074(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dd40b4,0,0);
  return;
}



/* Entry: 101dd40b4; end: 101dd40c3;  */

void FUN_101dd40b4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101dd40c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101dd40c4; end: 101dd4187;  */

/* WARNING: Removing unreachable block (ram,0x000101dd410c) */

void FUN_101dd40c4(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_1;
  func_0x0001000285a8(0x112d51a58,&UNK_10da16d50);
  func_0x0001048da110(&uStack_40);
  uStack_38 = uStack_40;
  func_0x000100b60084(&uStack_38);
  func_0x000107c615e8(uStack_40);
  return;
}



/* Entry: 101dd4188; end: 101dd4297;  */

void FUN_101dd4188(long param_1,long param_2)

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



/* Entry: 101dd4298; end: 101dd42d7;  */

void FUN_101dd4298(void)

{
  undefined *puVar1;
  
  if (puRam000000011349d4a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da16e0c;
  func_0x000107c61520(&UNK_10da16e0c,&UNK_110486888);
  puRam000000011349d4a0 = puVar1;
  return;
}



/* Entry: 101dd42d8; end: 101dd42db;  */

void FUN_101dd42d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1104867a0;
  func_0x000107c613fc(&UNK_1104867a0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  uVar3 = 0x81;
  func_0x000100859150(0x81,0,0x48,4,0,0,&UNK_10da16d30,puVar2,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61574(puVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 101dd42dc; end: 101dd43bb;  */

long FUN_101dd42dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1104869d0;
  func_0x000107c613fc(&UNK_1104869d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112e2e0b0,&UNK_10da16e80);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar2 = FUN_101dd4440;
  func_0x0001000bdd8c(FUN_101dd4440,puVar1);
  uVar3 = 0;
  func_0x0001002c7b70(0);
  func_0x000107c610f8();
  func_0x00010079a948(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101dd43bc; end: 101dd443f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd43bc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(param_2 + _DAT_112e2e1c8);
  lVar2 = 0;
  FUN_101dd44f4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e2e188) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  param_1[1] = &PTR_DAT_110486a28;
  return;
}



/* Entry: 101dd4440; end: 101dd444f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd4440(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e2e1c8);
  lVar2 = 0;
  FUN_101dd44f4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e2e188) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  param_1[1] = &PTR_DAT_110486a28;
  return;
}



/* Entry: 101dd4450; end: 101dd4473;  */

void FUN_101dd4450(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dd4474; end: 101dd4483;  */

void FUN_101dd4474(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101dd4484; end: 101dd44e3; -[_TtC29MemoriesValdiSaveServicesImpl18MemoriesValdiSaver init] */

void FUN_101dd4484(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesValdiSaveServicesImpl.MemoriesValdiSaver",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dd44b0);
  (*pcVar1)();
}



/* Entry: 101dd44e4; end: 101dd44f3; -[_TtC29MemoriesValdiSaveServicesImpl18MemoriesValdiSaver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd44e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2e188));
  return;
}



/* Entry: 101dd44f4; end: 101dd4513;  */

void FUN_101dd44f4(void)

{
  func_0x000107c61168(&PTR_PTR_112804c30);
  return;
}



/* Entry: 101dd4514; end: 101dd4527;  */

void FUN_101dd4514(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dd4528,0,0);
  return;
}



/* Entry: 101dd4528; end: 101dd457f;  */

void FUN_101dd4528(undefined8 param_1)

{
  long unaff_x22;
  
  FUN_101dd4580();
  func_0x000107c613f8(&UNK_110486ab8,param_1,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101dd457c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dd4580; end: 101dd45bf;  */

void FUN_101dd4580(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2e1b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da16fd8;
  func_0x000107c61520(&UNK_10da16fd8,&UNK_110486ab8);
  puRam0000000112e2e1b8 = puVar1;
  return;
}



/* Entry: 101dd45c0; end: 101dd46b7;  */

uint FUN_101dd45c0(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 101dd46b8; end: 101dd4757;  */

void FUN_101dd46b8(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101dd4758; end: 101dd478b;  */

undefined1  [16] FUN_101dd4758(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xef6465746e656d65;
  auVar1._0_8_ = 0x6c706d6920746f6e;
  return auVar1;
}



/* Entry: 101dd478c; end: 101dd47cb;  */

void FUN_101dd478c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2e1c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da16fb0;
  func_0x000107c61520(&UNK_10da16fb0,&UNK_110486ab8);
  puRam0000000112e2e1c0 = puVar1;
  return;
}



/* Entry: 101dd47cc; end: 101dd47db;  */

void FUN_101dd47cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101dd47dc; end: 101dd4827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd47dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e2e1c8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101dd4828; end: 101dd485b;  */

void FUN_101dd4828(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101dd485c; end: 101dd486b; -[MemoriesValdiSaveCoreServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd485c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2e1c8));
  return;
}



/* Entry: 101dd486c; end: 101dd4963;  */

long FUN_101dd486c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110486c70;
  func_0x000107c613fc(&UNK_110486c70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x0001000285a8(0x112e2e1f8,&UNK_10da17070);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  pcVar2 = FUN_101dd4af4;
  func_0x0001000bdd8c(FUN_101dd4af4,puVar1);
  uVar3 = 0;
  func_0x0001002c42f8(0);
  func_0x000107c610f8();
  func_0x000101dd628c(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101dd4964; end: 101dd4a53;  */

void FUN_101dd4964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = &UNK_110486c98;
  func_0x000107c613fc(&UNK_110486c98,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x0001000285a8(0x112e2e1f8,&UNK_10da17070);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar2 = 0x101dd4bb8;
  func_0x0001000bdd8c(0x101dd4bb8,puVar1);
  uVar3 = 0;
  func_0x0001002c42f8(0);
  func_0x000107c610f8();
  func_0x000101dd628c(uVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  return;
}



/* Entry: 101dd4a54; end: 101dd4af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd4a54(undefined8 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(param_2 + _DAT_112fda380);
  uVar6 = *(undefined8 *)(param_3 + _DAT_11303eae0);
  lVar2 = 0;
  FUN_101dd4c54();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e2e2d0) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_112e2e2d8) = uVar6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101dd4af4; end: 101dd4b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd4af4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fda380);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_11303eae0);
  lVar2 = 0;
  FUN_101dd4c54();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e2e2d0) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_112e2e2d8) = uVar6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101dd4b0c; end: 101dd4bab;  */

void FUN_101dd4b0c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dd4bac; end: 101dd4bbb;  */

void FUN_101dd4bac(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101dd4bbc; end: 101dd4c1b; -[_TtC43MemoriesValdiSnapDocTranscodingServicesImpl17SnapDocTranscoder init] */

void FUN_101dd4bbc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesValdiSnapDocTranscodingServicesImpl.SnapDocTranscoder",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dd4be8);
  (*pcVar1)();
}



/* Entry: 101dd4c1c; end: 101dd4c53; -[_TtC43MemoriesValdiSnapDocTranscodingServicesImpl17SnapDocTranscoder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101dd4c38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dd4c3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd4c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2e2d0));
  return;
}



/* Entry: 101dd4c54; end: 101dd4c73;  */

void FUN_101dd4c54(void)

{
  func_0x000107c61168(&PTR_PTR_112804db0);
  return;
}



/* Entry: 101dd4c74; end: 101dd4c8f;  */

void FUN_101dd4c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dd4c90,0,0);
  return;
}



/* Entry: 101dd4c90; end: 101dd4e7b;  */

/* WARNING: Removing unreachable block (ram,0x000101dd4d04) */
/* WARNING: Removing unreachable block (ram,0x000101dd4d4c) */
/* WARNING: Removing unreachable block (ram,0x000101dd4e74) */
/* WARNING: Removing unreachable block (ram,0x000101dd4d54) */
/* WARNING: Removing unreachable block (ram,0x000101dd4d5c) */
/* WARNING: Removing unreachable block (ram,0x000101dd4d64) */
/* WARNING: Removing unreachable block (ram,0x000101dd4d68) */

void FUN_101dd4c90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c5b1a8();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar1);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  uVar1 = uVar2;
  func_0x0001010282b0(uVar2,param_2);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar1;
  func_0x00010006c090(uVar2,param_2);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101dd4e7c;
  plVar6 = *(long **)(unaff_x22 + 0xa8);
  plVar3[5] = unaff_x22 + 0x70;
  plVar3[6] = (long)plVar6;
  lVar7 = *(long *)(*plVar6 + 0x50);
  plVar3[7] = lVar7;
  lVar4 = 0;
  __sSqMa(0,lVar7);
  plVar3[8] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[9] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[10] = uVar5;
  lVar4 = *(long *)(lVar7 + -8);
  plVar3[0xb] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101dd4e7c; end: 101dd4ec3;  */

void FUN_101dd4e7c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dd4ec4,0,0);
  return;
}



/* Entry: 101dd4ec4; end: 101dd502f;  */

void FUN_101dd4ec4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar2 = *(long *)(unaff_x22 + 0x78);
  uVar3 = uVar1;
  func_0x000107c614f0(uVar1);
  func_0x000107c602fc(0x24);
  func_0x000107c6142c(0xe000000000000000);
  lVar4 = 0;
  func_0x000107c5eec8();
  lVar9 = *(long *)(lVar4 + -8);
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  uVar6 = uVar5;
  func_0x000107c5eec4(uVar5);
  func_0x000107c5eeac();
  (**(code **)(lVar9 + 8))(uVar5,lVar4);
  func_0x000107c5fb78(uVar6,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c615c0(uVar5);
  (**(code **)(lVar2 + 8))(uVar8,0xd000000000000022,0x800000010f011280,uVar3,lVar2);
  *(undefined8 *)(unaff_x22 + 200) = uVar8;
  func_0x000107c6142c(0x800000010f011280);
  func_0x000107c615e8(uVar1);
  plVar7 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101dd5030;
                    /* WARNING: Could not recover jumptable at 0x000101dd502c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x101dd5dc8)();
  return;
}



/* Entry: 101dd5030; end: 101dd5083;  */

void FUN_101dd5030(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xd8) = param_1;
  *(undefined1 *)(lVar1 + 0x110) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dd5084,0,0);
  return;
}



/* Entry: 101dd5084; end: 101dd5447;  */

void FUN_101dd5084(undefined8 param_1,ulong param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long *plVar16;
  long lVar17;
  long unaff_x22;
  
  puVar15 = *(undefined **)(unaff_x22 + 0xd8);
  if (*(char *)(unaff_x22 + 0x110) == '\x01') {
    *(undefined **)(unaff_x22 + 0x90) = puVar15;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar12 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x90,uVar12,PTR___ss5ErrorWS_11034ee10);
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
    if (puVar15 == (undefined *)0x0) {
      lVar13 = *(long *)(unaff_x22 + 0xa0);
      lVar9 = lVar13;
      func_0x000107c5b1a8(lVar13);
      func_0x000107c61180();
      lVar17 = lVar9;
      func_0x000107c5ee30();
      uVar10 = param_2;
      func_0x000107c61170(lVar9);
      func_0x000107c3fa18();
      func_0x000107c61180();
      if (lVar13 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar10);
      }
      uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
      puVar6 = PTR_PTR_1126a9598;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar15 = PTR_PTR_1126a95a8;
      func_0x000107c610f8(PTR_PTR_1126a95a8);
      lVar9 = lVar17;
      func_0x000107c5ee20(lVar17,param_2);
      func_0x000107c48e68(puVar15);
      func_0x000107c61170(lVar13);
      func_0x000107c61170(lVar9);
      func_0x000107c59aa8(puVar6);
      func_0x000107c61170(puVar15);
      func_0x000107c61170(uVar12);
      func_0x00010006c090(lVar17,param_2);
      goto LAB_101dd5414;
    }
    puVar4 = *(undefined8 **)(unaff_x22 + 0xd8);
    func_0x000107c61174();
    func_0x000107c41214();
    func_0x000107c61180();
    puVar5 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      func_0x000107c5ee30();
      func_0x000107c61170(puVar4);
      *(undefined8 **)(unaff_x22 + 0xe0) = puVar5;
      *(ulong *)(unaff_x22 + 0xe8) = param_2;
      uVar2 = (uint)(param_2 >> 0x20);
      uVar11 = uVar2 >> 0x1e;
      if (uVar2 >> 0x1e < 2) {
        if (uVar11 == 0) {
          if ((param_2 & 0xff000000000000) != 0) {
LAB_101dd5260:
            plVar7 = (long *)0x70;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0xf0) = plVar7;
            *plVar7 = unaff_x22;
            plVar7[1] = (long)FUN_101dd5448;
            plVar16 = *(long **)(unaff_x22 + 0xb0);
            plVar7[5] = unaff_x22 + 0x10;
            plVar7[6] = (long)plVar16;
            lVar17 = *(long *)(*plVar16 + 0x50);
            plVar7[7] = lVar17;
            lVar9 = 0;
            __sSqMa(0,lVar17);
            plVar7[8] = lVar9;
            lVar9 = *(long *)(lVar9 + -8);
            plVar7[9] = lVar9;
            uVar10 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
            _swift_task_alloc();
            plVar7[10] = uVar10;
            lVar9 = *(long *)(lVar17 + -8);
            plVar7[0xb] = lVar9;
            uVar10 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
            _swift_task_alloc();
            plVar7[0xc] = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
            return;
          }
        }
        else if ((long)(int)puVar5 != (long)puVar5 >> 0x20) goto LAB_101dd5260;
      }
      else if ((uVar11 == 2) && (puVar5[2] != puVar5[3])) goto LAB_101dd5260;
      func_0x00010006c090(puVar5,param_2);
    }
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x110);
    FUN_101dd5f0c();
    puVar15 = &UNK_110486d98;
    func_0x000107c613f8(&UNK_110486d98,puVar5,0,0);
    *puVar5 = 0;
    puVar5[1] = 0;
    func_0x000107c61654();
    FUN_101dd5f4c(uVar14,uVar1);
    FUN_101dd5f4c(uVar14,uVar1);
  }
  func_0x000107c61170(uVar12);
  *(undefined **)(unaff_x22 + 0x80) = puVar15;
  func_0x000107c614b0(puVar15);
  uVar12 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar10 = unaff_x22 + 0x60;
  func_0x000107c6147c(uVar10,unaff_x22 + 0x80,uVar12,&UNK_110486d98,6);
  if ((((uVar10 & 1) != 0) && (*(long *)(unaff_x22 + 0x68) != 0)) &&
     (*(long *)(unaff_x22 + 0x68) != 1)) {
    func_0x000101dd5ef8(*(undefined8 *)(unaff_x22 + 0x60));
  }
  *(undefined **)(unaff_x22 + 0x88) = puVar15;
  func_0x000107c614b0(puVar15);
  lVar9 = unaff_x22 + 0x88;
  func_0x000107c5fb18(lVar9,uVar12);
  puVar6 = PTR_PTR_1126a9598;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar8 = PTR_PTR_1126a95a0;
  func_0x000107c610f8(PTR_PTR_1126a95a0);
  func_0x000107c467b4();
  func_0x000107c5fadc(lVar9,uVar12);
  func_0x000107c54664(puVar8);
  func_0x000107c61170(lVar9);
  func_0x000107c5486c(puVar6);
  func_0x000107c61170(puVar8);
  func_0x000107c614ac(puVar15);
  func_0x000107c6142c(uVar12);
LAB_101dd5414:
  **(undefined8 **)(unaff_x22 + 0x98) = puVar6;
                    /* WARNING: Could not recover jumptable at 0x000101dd543c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dd5448; end: 101dd548f;  */

void FUN_101dd5448(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dd5490,0,0);
  return;
}



/* Entry: 101dd5490; end: 101dd552f;  */

void FUN_101dd5490(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101dd5530;
                    /* WARNING: Could not recover jumptable at 0x000101dd552c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (uVar6,"transcodeForBackup(with:)",0x19,0x3000000000000002,0x32,uVar2,lVar3);
  return;
}



/* Entry: 101dd5530; end: 101dd558f;  */

void FUN_101dd5530(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x100) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101dd5590;
  }
  else {
    pcVar1 = FUN_101dd5974;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101dd5590; end: 101dd570f;  */

void FUN_101dd5590(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  lVar10 = *(long *)(unaff_x22 + 0x100);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c42c98();
  func_0x000107c61180();
  if (lVar10 != 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x110);
    puVar4 = PTR_PTR_1126a9598;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar5 = PTR_PTR_1126a95a8;
    func_0x000107c610f8(PTR_PTR_1126a95a8);
    uVar6 = uVar1;
    func_0x000107c5ee20(uVar1,uVar2);
    func_0x000107c48e68(puVar5);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(uVar6);
    func_0x000107c59aa8(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar9);
    func_0x00010006c090(uVar1,uVar2);
    FUN_101dd5f4c(uVar11,uVar3);
    FUN_101dd5f4c(uVar11,uVar3);
    **(undefined8 **)(unaff_x22 + 0x98) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x000101dd56bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar7 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101dd5710;
  plVar12 = *(long **)(unaff_x22 + 0xb0);
  plVar7[5] = unaff_x22 + 0x38;
  plVar7[6] = (long)plVar12;
  lVar13 = *(long *)(*plVar12 + 0x50);
  plVar7[7] = lVar13;
  lVar10 = 0;
  __sSqMa(0,lVar13);
  plVar7[8] = lVar10;
  lVar10 = *(long *)(lVar10 + -8);
  plVar7[9] = lVar10;
  uVar8 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[10] = uVar8;
  lVar10 = *(long *)(lVar13 + -8);
  plVar7[0xb] = lVar10;
  uVar8 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0xc] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101dd5710; end: 101dd5757;  */

void FUN_101dd5710(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dd5758,0,0);
  return;
}



/* Entry: 101dd5758; end: 101dd5973;  */

void FUN_101dd5758(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x110);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar1);
  (**(code **)(lVar3 + 0x40))(uVar10,uVar13,0x60,0,0x48,uVar1,lVar3);
  func_0x000107c61574();
  puVar12 = (undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000834e4();
  FUN_101dd5f0c();
  puVar5 = &UNK_110486d98;
  func_0x000107c613f8(&UNK_110486d98,puVar12,0,0);
  puVar12[1] = 1;
  *puVar12 = 0;
  func_0x000107c61654();
  func_0x000107c61170(uVar13);
  func_0x00010006c090(uVar6,uVar2);
  FUN_101dd5f4c(uVar10,uVar4);
  FUN_101dd5f4c(uVar10,uVar4);
  func_0x000107c61170(uVar9);
  *(undefined8 *)(unaff_x22 + 0x80) = puVar5;
  uVar11 = unaff_x22 + 0x60;
  func_0x000107c614b0(puVar5);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar11,(undefined8 *)(unaff_x22 + 0x80),uVar6,&UNK_110486d98,6);
  if ((((uVar11 & 1) != 0) && (*(long *)(unaff_x22 + 0x68) != 0)) &&
     (*(long *)(unaff_x22 + 0x68) != 1)) {
    func_0x000101dd5ef8(*(undefined8 *)(unaff_x22 + 0x60));
  }
  puVar12 = (undefined8 *)(unaff_x22 + 0x88);
  *puVar12 = puVar5;
  func_0x000107c614b0(puVar5);
  func_0x000107c5fb18(puVar12,uVar6);
  puVar7 = PTR_PTR_1126a9598;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar8 = PTR_PTR_1126a95a0;
  func_0x000107c610f8(PTR_PTR_1126a95a0);
  func_0x000107c467b4();
  func_0x000107c5fadc(puVar12,uVar6);
  func_0x000107c54664(puVar8);
  func_0x000107c61170(puVar12);
  func_0x000107c5486c(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c614ac(puVar5);
  func_0x000107c6142c(uVar6);
  **(undefined8 **)(unaff_x22 + 0x98) = puVar7;
                    /* WARNING: Could not recover jumptable at 0x000101dd5968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dd5974; end: 101dd5b33;  */

void FUN_101dd5974(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x22;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x110);
  func_0x000100fb85f0();
  puVar3 = &UNK_11072cd20;
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar11;
  func_0x000107c61170(uVar10);
  func_0x00010006c090(uVar4,uVar1);
  FUN_101dd5f4c(uVar7,uVar2);
  FUN_101dd5f4c(uVar7,uVar2);
  func_0x0001000834e4(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x80) = puVar3;
  uVar8 = unaff_x22 + 0x60;
  func_0x000107c614b0(puVar3);
  uVar4 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar8,(undefined8 *)(unaff_x22 + 0x80),uVar4,&UNK_110486d98,6);
  if ((((uVar8 & 1) != 0) && (*(long *)(unaff_x22 + 0x68) != 0)) &&
     (*(long *)(unaff_x22 + 0x68) != 1)) {
    func_0x000101dd5ef8(*(undefined8 *)(unaff_x22 + 0x60));
  }
  puVar9 = (undefined8 *)(unaff_x22 + 0x88);
  *puVar9 = puVar3;
  func_0x000107c614b0(puVar3);
  func_0x000107c5fb18(puVar9,uVar4);
  puVar5 = PTR_PTR_1126a9598;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = PTR_PTR_1126a95a0;
  func_0x000107c610f8(PTR_PTR_1126a95a0);
  func_0x000107c467b4();
  func_0x000107c5fadc(puVar9,uVar4);
  func_0x000107c54664(puVar6);
  func_0x000107c61170(puVar9);
  func_0x000107c5486c(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c614ac(puVar3);
  func_0x000107c6142c(uVar4);
  **(undefined8 **)(unaff_x22 + 0x98) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x000101dd5b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dd5b34; end: 101dd5c4f; -[_TtC43MemoriesValdiSnapDocTranscodingServicesImpl17SnapDocTranscoder transcodeForBackupWithInput:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd5b34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001000285a8(0x112e2e308,&UNK_10da170f8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e2e2d0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112e2e2d8);
  puVar1 = &UNK_110486cd8;
  func_0x000107c613fc(&UNK_110486cd8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = uVar2;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  uVar2 = 0x60;
  func_0x000104887c7c(0x60,0,0x48,4,0xd000000000000019,0x800000010f011260,&UNK_10da17108,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000103edf0bc();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101dd5c50; end: 101dd5cbb;  */

void FUN_101dd5c50(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101dd5cbc;
  plVar3[0x15] = lVar2;
  plVar3[0x16] = lVar4;
  plVar3[0x13] = param_1;
  plVar3[0x14] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dd4c90,0,0);
  return;
}



/* Entry: 101dd5cbc; end: 101dd5cf7;  */

void FUN_101dd5cbc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101dd5cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101dd5cf8; end: 101dd5daf;  */

undefined1  [16] FUN_101dd5cf8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (param_2 == 0) {
    uVar2 = 0x800000010f011350;
    uVar1 = 0xd00000000000002c;
  }
  else if (param_2 == 1) {
    uVar2 = 0x800000010f011310;
    uVar1 = 0xd000000000000030;
  }
  else {
    func_0x000107c602fc(0x1e);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_1,param_2);
    uVar1 = 0xd00000000000001c;
    uVar2 = 0x800000010f0112f0;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 101dd5db0; end: 101dd5ddf;  */

void FUN_101dd5db0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101dd5de0; end: 101dd5ea7;  */

void FUN_101dd5de0(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101dd5e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101dd5ea8;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110486d00;
  func_0x000107c613fc(&UNK_110486d00,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101dd5f60,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101dd5ea8; end: 101dd5ee7;  */

void FUN_101dd5ea8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dd5ee8,0,0);
  return;
}



/* Entry: 101dd5ee8; end: 101dd5f0b;  */

void FUN_101dd5ee8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101dd5ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101dd5f0c; end: 101dd5f4b;  */

void FUN_101dd5f0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2e310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da17160;
  func_0x000107c61520(&UNK_10da17160,&UNK_110486d98);
  puRam0000000112e2e310 = puVar1;
  return;
}



/* Entry: 101dd5f4c; end: 101dd5f5f;  */

void FUN_101dd5f4c(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101dd5f60; end: 101dd5fab;  */

void FUN_101dd5f60(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101dd5fac(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101dd5fac; end: 101dd5fd7;  */

void FUN_101dd5fac(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101dd5fd8; end: 101dd613b;  */

undefined8 * FUN_101dd5fd8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c61434(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 101dd613c; end: 101dd623f;  */

int FUN_101dd613c(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 101dd6240; end: 101dd62d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd6240(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e2e318) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101dd62d8; end: 101dd630b;  */

void FUN_101dd62d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101dd630c; end: 101dd631b; -[MemoriesValdiSnapDocTranscodingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd630c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2e318));
  return;
}



/* Entry: 101dd631c; end: 101dd6367;  */

void FUN_101dd631c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dd6368; end: 101dd648b;  */

undefined8
FUN_101dd6368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar4 = *unaff_x20;
  func_0x0001000d224c(&uStack_70);
  uVar1 = uStack_70;
  func_0x000107c614f0(uStack_70);
  pcVar2 = FUN_101dd648c;
  (**(code **)(lStack_68 + 0x28))(FUN_101dd648c,0,uVar1,lStack_68);
  func_0x000107c615e8(uStack_70);
  func_0x0001000d224c(&uStack_78);
  puVar3 = &UNK_110486f10;
  func_0x000107c613fc(&UNK_110486f10,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  puVar3[0x20] = (char)param_3;
  puVar3[0x21] = (char)((ulong)param_3 >> 8);
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  *(undefined8 *)(puVar3 + 0x30) = param_5;
  *(undefined8 *)(puVar3 + 0x38) = uVar4;
  uVar1 = uStack_78;
  func_0x000100775264(uStack_78,1,FUN_101dd64f0,puVar3,PTR___sSbN_11034dd40);
  func_0x000107c61574(pcVar2);
  func_0x000107c61170(uStack_78);
  func_0x000107c61574(puVar3);
  return uVar1;
}



/* Entry: 101dd648c; end: 101dd64ef;  */

uint FUN_101dd648c(uint param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 0x18) + 0x78))();
  return param_1 & 1;
}



/* Entry: 101dd64f0; end: 101dd6547;  */

void FUN_101dd64f0(undefined8 param_1,byte *param_2)

{
  bool bVar1;
  long unaff_x20;
  
  bVar1 = *(char *)(unaff_x20 + 0x21) == '\x01' ||
          *(long *)(unaff_x20 + 0x28) < *(long *)(unaff_x20 + 0x10);
  if ((*param_2 & 1) == 0) {
    bVar1 = *(char *)(unaff_x20 + 0x21) == '\x01' ||
            *(long *)(unaff_x20 + 0x28) < *(long *)(unaff_x20 + 0x10) &&
            (*(char *)(unaff_x20 + 0x20) == '\x01' ||
            *(long *)(unaff_x20 + 0x30) < *(long *)(unaff_x20 + 0x18));
  }
  *(bool *)param_1 = bVar1;
  return;
}



/* Entry: 101dd6548; end: 101dd6597;  */

void FUN_101dd6548(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0x73736563637573,0xe700000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101dd6598; end: 101dd65af;  */

void FUN_101dd6598(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0x73736563637573,0xe700000000000000);
  return;
}



/* Entry: 101dd65b0; end: 101dd65fb;  */

void FUN_101dd65b0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0x73736563637573,0xe700000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101dd65fc; end: 101dd6667;  */

void FUN_101dd65fc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 101dd6668; end: 101dd6683;  */

void FUN_101dd6668(undefined8 *param_1)

{
  *param_1 = 0x73736563637573;
  param_1[1] = 0xe700000000000000;
  return;
}



/* Entry: 101dd6684; end: 101dd66c7;  */

void FUN_101dd6684(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


