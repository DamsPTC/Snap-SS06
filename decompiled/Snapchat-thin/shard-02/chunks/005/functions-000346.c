/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e1d3f4; end: 101e1d49f;  */

void FUN_101e1d3f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  FUN_101e1d544(uVar1,*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x28),
                *(undefined8 *)(unaff_x22 + 0x30),2);
  func_0x000107c615e8(uVar2);
  if (lVar3 != 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000101e1d468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  FUN_101e1d18c(uVar1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e1d49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 101e1d4a0; end: 101e1d503;  */

void FUN_101e1d4a0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar3;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e1d500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1d504; end: 101e1d543;  */

void FUN_101e1d504(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e305b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da192e0;
  func_0x000107c61520(&UNK_10da192e0,&UNK_11048ac40);
  puRam0000000112e305b0 = puVar1;
  return;
}



/* Entry: 101e1d544; end: 101e1d64f;  */

/* WARNING: Removing unreachable block (ram,0x000101e1d5c8) */

undefined *
FUN_101e1d544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *unaff_x20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20(param_3,param_4);
  func_0x000107c3d760();
  func_0x000107c61180();
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  if (puRam0000000112e305c0 == (undefined *)0x0) {
    puVar1 = &UNK_10da190a0;
    func_0x000107c61520(&UNK_10da190a0,&UNK_11048a838);
    puRam0000000112e305c0 = puVar1;
    return puVar1;
  }
  return puRam0000000112e305c0;
}



/* Entry: 101e1d650; end: 101e1d68f;  */

void FUN_101e1d650(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e305c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da190a0;
  func_0x000107c61520(&UNK_10da190a0,&UNK_11048a838);
  puRam0000000112e305c0 = puVar1;
  return;
}



/* Entry: 101e1d690; end: 101e1d69f;  */

void FUN_101e1d690(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101e1d6a0; end: 101e1d6df;  */

void FUN_101e1d6a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1d6e0,0,0);
  return;
}



/* Entry: 101e1d6e0; end: 101e1d6f7;  */

void FUN_101e1d6e0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101e1d6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101e1d6f8; end: 101e1d75f;  */

undefined8 * FUN_101e1d6f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  func_0x000107c614b0(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  func_0x000107c614ac(uVar1);
  return param_1;
}



/* Entry: 101e1d760; end: 101e1d857;  */

int FUN_101e1d760(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 101e1d858; end: 101e1dac3;  */

long FUN_101e1d858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_11048a930;
  func_0x000107c613fc(&UNK_11048a930,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  func_0x0001000285a8(0x112e305d0,&UNK_10da190e0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  pcVar2 = FUN_101e1dc04;
  func_0x0001000bdd8c(FUN_101e1dc04,puVar1);
  uVar3 = 0;
  func_0x0001002c5ffc(0);
  func_0x000107c610f8();
  func_0x000101e20e68(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101e1dac4; end: 101e1dc03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e1dac4(undefined8 *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  uVar2 = 0x112e2ab08;
  func_0x0001000285a8(0x112e2ab08,&UNK_10da19150);
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ff4d90);
  func_0x0001000bda74(uVar3,uVar2);
  uVar8 = *(undefined8 *)(param_3 + _DAT_112ff4be0);
  uVar7 = *(undefined8 *)(param_4 + _DAT_112e30730);
  func_0x0001000285a8(0x112d51870,&UNK_10d9bd0b0);
  func_0x000107c5b1d4();
  func_0x000107c61180();
  uVar2 = param_5;
  func_0x0001000bda74();
  func_0x000107c61170(param_5);
  lVar4 = 0;
  FUN_101e1de94();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e306a8) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112e306b0) = uVar8;
  *(undefined8 *)(lVar5 + _DAT_112e306b8) = uVar7;
  *(undefined8 *)(lVar5 + _DAT_112e306c0) = uVar2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar6;
  return;
}



/* Entry: 101e1dc04; end: 101e1dc0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e1dc04(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_50;
  long lStack_48;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  uVar3 = 0x112e2ab08;
  func_0x0001000285a8(0x112e2ab08,&UNK_10da19150);
  uVar4 = *(undefined8 *)(lVar7 + _DAT_112ff4d90);
  func_0x0001000bda74(uVar4,uVar3);
  uVar10 = *(undefined8 *)(lVar1 + _DAT_112ff4be0);
  uVar9 = *(undefined8 *)(lVar6 + _DAT_112e30730);
  func_0x0001000285a8(0x112d51870,&UNK_10d9bd0b0);
  func_0x000107c5b1d4();
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  lVar6 = 0;
  FUN_101e1de94();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112e306a8) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112e306b0) = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112e306b8) = uVar9;
  *(undefined8 *)(lVar7 + _DAT_112e306c0) = uVar3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_50,puVar2);
  *param_1 = plVar8;
  return;
}



/* Entry: 101e1dc10; end: 101e1dc4b;  */

void FUN_101e1dc10(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e1dc4c; end: 101e1dc5b;  */

void FUN_101e1dc4c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101e1dc5c; end: 101e1dcfb;  */

void FUN_101e1dc5c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e1dcfc; end: 101e1dd1f;  */

void FUN_101e1dcfc(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101e1dd20; end: 101e1ddcb;  */

void FUN_101e1dd20(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101e1ddcc; end: 101e1dddb;  */

void FUN_101e1ddcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101e1dddc; end: 101e1de3b; -[_TtC38MemoriesValdiSnapDocUploadServicesImpl20ValdiSnapDocUploader init] */

void FUN_101e1dddc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesValdiSnapDocUploadServicesImpl.ValdiSnapDocUploader",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e1de08);
  (*pcVar1)();
}



/* Entry: 101e1de3c; end: 101e1de93; -[_TtC38MemoriesValdiSnapDocUploadServicesImpl20ValdiSnapDocUploader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101e1de58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e1de78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e1de5c) */
/* WARNING: Removing unreachable block (ram,0x000101e1de7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e1de3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e306a8));
  return;
}



/* Entry: 101e1de94; end: 101e1deb3;  */

void FUN_101e1de94(void)

{
  func_0x000107c61168(&PTR_PTR_112805888);
  return;
}



/* Entry: 101e1deb4; end: 101e1decf;  */

void FUN_101e1deb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1ded0,0,0);
  return;
}



/* Entry: 101e1ded0; end: 101e1e16f;  */

/* WARNING: Removing unreachable block (ram,0x000101e1df68) */

void FUN_101e1ded0(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  lVar10 = *(long *)(unaff_x22 + 0x38);
  lVar7 = unaff_x22 + 0x10;
  func_0x000107c61428(lVar10 + 0x10,lVar7,0,0);
  puVar1 = (undefined1 *)(lVar10 + 0x10);
  func_0x000107c61618();
  *(undefined1 **)(unaff_x22 + 0x48) = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    lVar2 = *(long *)(unaff_x22 + 0x40);
    func_0x000107c5b1a8();
    func_0x000107c61180();
    lVar10 = lVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar2);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    lVar2 = lVar10;
    func_0x0001010282b0(lVar10,lVar7);
    *(long *)(unaff_x22 + 0x50) = lVar2;
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x00010006c090(lVar10,lVar7);
    func_0x000107c3fa18(uVar11);
    func_0x000107c61180();
    uVar6 = uVar11;
    func_0x000107c5faec();
    func_0x000107c61170(uVar11);
    puVar3 = PTR_PTR_1126b25b8;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar6,lVar7);
    func_0x000107c6142c(lVar7);
    func_0x000107c46814();
    *(undefined **)(unaff_x22 + 0x58) = puVar3;
    func_0x000107c61170(uVar6);
    func_0x000103bcda24(0);
    func_0x000107c610f8();
    lVar7 = 0;
    func_0x000103bcd828();
    *(long *)(unaff_x22 + 0x60) = lVar7;
    plVar8 = (long *)0xd0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_101e1e170;
    plVar8[0xd] = lVar7;
    plVar8[0xe] = (long)puVar1;
    plVar8[0xb] = lVar2;
    plVar8[0xc] = (long)puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1e61c,0,0);
    return;
  }
  FUN_101e2038c();
  puVar3 = &UNK_11048aad0;
  func_0x000107c613f8(&UNK_11048aad0,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
  puVar9 = (undefined8 *)(unaff_x22 + 0x28);
  *puVar9 = puVar3;
  func_0x000107c614b0(puVar3);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fb18(puVar9,uVar6);
  puVar4 = PTR_PTR_1126a9600;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126a95f0;
  func_0x000107c610f8(PTR_PTR_1126a95f0);
  func_0x000107c467b4();
  func_0x000107c5fadc(puVar9,uVar6);
  func_0x000107c54664(puVar5);
  func_0x000107c61170(puVar9);
  func_0x000107c5486c(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c614ac(puVar3);
  func_0x000107c6142c(uVar6);
  **(undefined8 **)(unaff_x22 + 0x30) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x000101e1e080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1e170; end: 101e1e1df;  */

void FUN_101e1e170(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar3 + 0x70) = param_1;
  *(long *)(lVar3 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x68));
  uVar1 = *(undefined8 *)(lVar3 + 0x58);
  func_0x000107c61170(*(undefined8 *)(lVar3 + 0x60));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101e1e1e0;
  }
  else {
    pcVar2 = FUN_101e1e4fc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101e1e1e0; end: 101e1e4fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e1e1e0(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  
  puVar3 = *(undefined1 **)(*(long *)(unaff_x22 + 0x70) + _DAT_112ff4e20);
  func_0x000107c41214();
  func_0x000107c61180();
  puVar4 = puVar3;
  if (puVar3 != (undefined1 *)0x0) {
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
    uVar2 = (uint)(param_2 >> 0x20);
    uVar9 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      if (uVar9 == 0) {
        if ((param_2 & 0xff000000000000) != 0) {
LAB_101e1e270:
          lVar12 = *(long *)(*(long *)(unaff_x22 + 0x70) + _DAT_112ff4e30);
          lVar11 = *(long *)(*(long *)(unaff_x22 + 0x70) + _DAT_112ff4e38);
          puVar5 = PTR_PTR_1126a9600;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar6 = PTR_PTR_1126a9608;
          func_0x000107c610f8(PTR_PTR_1126a9608);
          puVar3 = puVar4;
          func_0x000107c5ee20(puVar4,param_2);
          func_0x000107c4875c(puVar6);
          func_0x000107c61170(puVar3);
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c490d4();
          func_0x000107c5a244(puVar6);
          func_0x000107c61170(puVar7);
          if (lVar12 != 0) {
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c490d4();
            func_0x000107c56484(puVar6);
            func_0x000107c61170(puVar7);
          }
          if (lVar11 != 0) {
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c490d4();
            func_0x000107c5715c(puVar6);
            func_0x000107c61170(puVar7);
          }
          uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
          uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
          uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
          func_0x000107c59aa8(puVar5);
          func_0x000107c61170(puVar6);
          func_0x00010006c090(puVar4,param_2);
          func_0x000107c61170(uVar1);
          func_0x000107c61170(uVar8);
          func_0x000107c61170(uVar10);
          goto LAB_101e1e4cc;
        }
      }
      else if ((long)(int)puVar4 != (long)puVar4 >> 0x20) goto LAB_101e1e270;
    }
    else if ((uVar9 == 2) && (*(long *)(puVar4 + 0x10) != *(long *)(puVar4 + 0x18)))
    goto LAB_101e1e270;
    func_0x00010006c090(puVar4,param_2);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_101e2038c();
  puVar6 = &UNK_11048aad0;
  func_0x000107c613f8(&UNK_11048aad0,puVar4,0,0);
  *puVar4 = 7;
  func_0x000107c61654();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar8);
  *(undefined **)(unaff_x22 + 0x28) = puVar6;
  func_0x000107c614b0(puVar6);
  uVar8 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar11 = unaff_x22 + 0x28;
  func_0x000107c5fb18(lVar11,uVar8);
  puVar5 = PTR_PTR_1126a9600;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar7 = PTR_PTR_1126a95f0;
  func_0x000107c610f8(PTR_PTR_1126a95f0);
  func_0x000107c467b4();
  func_0x000107c5fadc(lVar11,uVar8);
  func_0x000107c54664(puVar7);
  func_0x000107c61170(lVar11);
  func_0x000107c5486c(puVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c614ac(puVar6);
  func_0x000107c6142c(uVar8);
LAB_101e1e4cc:
  **(undefined8 **)(unaff_x22 + 0x30) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x000101e1e4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1e4fc; end: 101e1e5ff;  */

void FUN_101e1e4fc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61170(uVar1);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  puVar4 = (undefined8 *)(unaff_x22 + 0x28);
  *puVar4 = uVar5;
  func_0x000107c614b0(uVar5);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fb18(puVar4,uVar1);
  puVar2 = PTR_PTR_1126a9600;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126a95f0;
  func_0x000107c610f8(PTR_PTR_1126a95f0);
  func_0x000107c467b4();
  func_0x000107c5fadc(puVar4,uVar1);
  func_0x000107c54664(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c5486c(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c614ac(uVar5);
  func_0x000107c6142c(uVar1);
  **(undefined8 **)(unaff_x22 + 0x30) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x000101e1e5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1e600; end: 101e1e61b;  */

void FUN_101e1e600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1e61c,0,0);
  return;
}



/* Entry: 101e1e61c; end: 101e1e6c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e1e61c(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x70) + _DAT_112e306b0);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101e1e67c;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101e1e6c4; end: 101e1e82f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e1e6c4(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x22;
  undefined1 *puVar11;
  
  puVar11 = *(undefined1 **)(unaff_x22 + 0x58);
  puVar1 = *(undefined1 **)(unaff_x22 + 0x10);
  lVar8 = *(long *)(unaff_x22 + 0x18);
  *(undefined1 **)(unaff_x22 + 0x80) = puVar1;
  puVar2 = puVar1;
  func_0x000107c614f0();
  (**(code **)(lVar8 + 0x10))(puVar11,puVar2,lVar8);
  puVar7 = puVar11;
  if (puVar11 == (undefined1 *)0x0) {
    (**(code **)(lVar8 + 0x28))(puVar2,lVar8);
    if (puVar2 == (undefined1 *)0x0) {
      FUN_101e2038c();
      func_0x000107c613f8(&UNK_11048aad0,puVar2,0,0);
      *puVar2 = 2;
      func_0x000107c61654();
      func_0x000107c615e8(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e1e82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    func_0x000107c61174();
    puVar11 = puVar2;
    puVar7 = (undefined1 *)0x0;
  }
  *(undefined1 **)(unaff_x22 + 0x88) = puVar11;
  lVar8 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61174(puVar7);
  func_0x000107c61170(puVar11);
  plVar10 = *(long **)(lVar8 + _DAT_112e306a8);
  uVar3 = 0x112e30710;
  func_0x0001000285a8(0x112e30710,&UNK_10da191d0);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  plVar4 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar4;
  plVar6 = plVar4;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x98) = plVar6;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101e1e830;
  plVar4[0xb] = (long)plVar6;
  plVar4[0xc] = unaff_x22 + 0x30;
  plVar4[9] = unaff_x22 + 0x28;
  plVar4[10] = (long)&UNK_1107a6f08;
  plVar4[8] = unaff_x22 + 0x20;
  lVar9 = *plVar10;
  plVar4[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar8 = 0x10;
  _swift_task_alloc();
  plVar4[0xe] = lVar8;
  lVar8 = *(long *)(lVar9 + 0x50);
  plVar4[0xf] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar4[0x10] = lVar8;
  uVar5 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x11] = uVar5;
  plVar6 = (long *)0x70;
  _swift_task_alloc();
  plVar4[0x12] = (long)plVar6;
  *plVar6 = (long)plVar4;
  plVar6[1] = (long)&UNK_104876614;
  plVar6[5] = uVar5;
  plVar6[6] = (long)plVar10;
  lVar9 = *(long *)(*plVar10 + 0x50);
  plVar6[7] = lVar9;
  lVar8 = 0;
  __sSqMa(0,lVar9);
  plVar6[8] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar6[9] = lVar8;
  uVar5 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[10] = uVar5;
  lVar8 = *(long *)(lVar9 + -8);
  plVar6[0xb] = lVar8;
  uVar5 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101e1e830; end: 101e1e88b;  */

void FUN_101e1e830(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e1e88c;
  }
  else {
    pcVar1 = FUN_101e1eb34;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e1e88c; end: 101e1e943;  */

void FUN_101e1e88c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar1 = uVar3;
  func_0x000107c5d744(uVar3,param_2,*(undefined8 *)(unaff_x22 + 0x60),
                      *(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x68),
                      *(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar1;
  func_0x000107c615e8(uVar3);
  func_0x0001000285a8(0x112e2b418,&UNK_10da142a8);
  func_0x000100759c94(uVar1,0);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar1;
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101e1e944;
                    /* WARNING: Could not recover jumptable at 0x000101e1e940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101e203cc();
  return;
}



/* Entry: 101e1e944; end: 101e1e997;  */

void FUN_101e1e944(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xc0) = param_1;
  *(undefined1 *)(lVar1 + 200) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1e998,0,0);
  return;
}



/* Entry: 101e1e998; end: 101e1eb33;  */

void FUN_101e1e998(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  if (*(char *)(unaff_x22 + 200) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x38) = uVar5;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x38,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(uVar1);
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0xa0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
    *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
    puVar4 = (undefined8 *)0x112e30718;
    func_0x0001000285a8(0x112e30718,&UNK_10da191e8);
    func_0x0001048da110(unaff_x22 + 0x48);
    uVar2 = *(undefined1 *)(unaff_x22 + 200);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
    if (lVar6 == 0) {
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar8);
      func_0x000107c615e8(uVar5);
      FUN_101e20524(uVar9,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e1eb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x48));
      return;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000100faaf10();
    func_0x000107c613f8(&UNK_1107b5fe0,puVar4,0,0);
    *puVar4 = uVar7;
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar8);
    func_0x000107c615e8(uVar5);
    FUN_101e20524(uVar9,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000101e1eae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1eb34; end: 101e1eb9f;  */

void FUN_101e1eb34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c613f8(&UNK_1107a6f08,puVar3,0,0);
  *puVar3 = uVar4;
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e1eb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1eba0; end: 101e1ecab; -[_TtC38MemoriesValdiSnapDocUploadServicesImpl20ValdiSnapDocUploader uploadSnapDocMediaWithInput:] */

void FUN_101e1eba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001000285a8(0x112e30720,&UNK_10da191f0);
  puVar1 = &UNK_11048a998;
  func_0x000107c613fc(&UNK_11048a998,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11048aa38;
  func_0x000107c613fc(&UNK_11048aa38,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0x60;
  func_0x000104887c7c(0x60,0,0x48,4,0xd000000000000019,0x800000010f013070,&UNK_10da19200,puVar2);
  func_0x000107c61574(puVar2);
  func_0x000103edf0bc();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101e1ecac; end: 101e1ecc7;  */

void FUN_101e1ecac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1ecc8,0,0);
  return;
}



/* Entry: 101e1ecc8; end: 101e1eecb;  */

/* WARNING: Removing unreachable block (ram,0x000101e1ed78) */

void FUN_101e1ecc8(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x22;
  
  lVar10 = *(long *)(unaff_x22 + 0x38);
  lVar8 = unaff_x22 + 0x10;
  func_0x000107c61428(lVar10 + 0x10,lVar8,0,0);
  puVar1 = (undefined1 *)(lVar10 + 0x10);
  func_0x000107c61618();
  *(undefined1 **)(unaff_x22 + 0x48) = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    lVar2 = *(long *)(unaff_x22 + 0x40);
    func_0x000107c5b1a8();
    func_0x000107c61180();
    lVar10 = lVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar2);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    lVar2 = lVar10;
    func_0x0001010282b0(lVar10,lVar8);
    *(long *)(unaff_x22 + 0x50) = lVar2;
    func_0x00010006c090(lVar10,lVar8);
    plVar7 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_101e1eecc;
    plVar7[0xc] = lVar2;
    plVar7[0xd] = (long)puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1f288,0,0);
    return;
  }
  FUN_101e2038c();
  puVar3 = &UNK_11048aad0;
  func_0x000107c613f8(&UNK_11048aad0,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
  puVar9 = (undefined8 *)(unaff_x22 + 0x28);
  *puVar9 = puVar3;
  func_0x000107c614b0(puVar3);
  uVar4 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fb18(puVar9,uVar4);
  puVar5 = PTR_PTR_1126a95e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = PTR_PTR_1126a95f0;
  func_0x000107c610f8(PTR_PTR_1126a95f0);
  func_0x000107c467b4();
  func_0x000107c5fadc(puVar9,uVar4);
  func_0x000107c54664(puVar6);
  func_0x000107c61170(puVar9);
  func_0x000107c5486c(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c614ac(puVar3);
  func_0x000107c6142c(uVar4);
  **(undefined8 **)(unaff_x22 + 0x30) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x000101e1ee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1eecc; end: 101e1ef83;  */

void FUN_101e1eecc(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar4 + 0x60) = param_1;
  *(long *)(lVar4 + 0x68) = param_2;
  *(long *)(lVar4 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x58));
  if (unaff_x20 == 0) {
    plVar1 = (long *)0x210;
    func_0x000107c615b8();
    *(long **)(lVar4 + 0x78) = plVar1;
    *plVar1 = lVar3;
    plVar1[1] = (long)FUN_101e1ef84;
    lVar3 = *(long *)(lVar4 + 0x48);
    plVar1[0x30] = param_2;
    plVar1[0x31] = lVar3;
    *(undefined4 *)((long)plVar1 + 0x10c) = param_3;
    plVar1[0x2f] = param_1;
    pcVar2 = FUN_101e1f568;
  }
  else {
    pcVar2 = FUN_101e1f054;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101e1ef84; end: 101e1efef;  */

void FUN_101e1ef84(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x88) = param_1;
    pcVar1 = FUN_101e1eff0;
  }
  else {
    pcVar1 = FUN_101e1f158;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e1eff0; end: 101e1f053;  */

void FUN_101e1eff0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  **(undefined8 **)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x000101e1f050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1f054; end: 101e1f157;  */

void FUN_101e1f054(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61170(uVar1);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  puVar4 = (undefined8 *)(unaff_x22 + 0x28);
  *puVar4 = uVar5;
  func_0x000107c614b0(uVar5);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fb18(puVar4,uVar1);
  puVar2 = PTR_PTR_1126a95e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126a95f0;
  func_0x000107c610f8(PTR_PTR_1126a95f0);
  func_0x000107c467b4();
  func_0x000107c5fadc(puVar4,uVar1);
  func_0x000107c54664(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c5486c(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c614ac(uVar5);
  func_0x000107c6142c(uVar1);
  **(undefined8 **)(unaff_x22 + 0x30) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x000101e1f154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1f158; end: 101e1f26f;  */

void FUN_101e1f158(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  puVar5 = (undefined8 *)(unaff_x22 + 0x28);
  *puVar5 = uVar6;
  func_0x000107c614b0(uVar6);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fb18(puVar5,uVar2);
  puVar3 = PTR_PTR_1126a95e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126a95f0;
  func_0x000107c610f8(PTR_PTR_1126a95f0);
  func_0x000107c467b4();
  func_0x000107c5fadc(puVar5,uVar2);
  func_0x000107c54664(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c5486c(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c614ac(uVar6);
  func_0x000107c6142c(uVar2);
  **(undefined8 **)(unaff_x22 + 0x30) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x000101e1f26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1f270; end: 101e1f287;  */

void FUN_101e1f270(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1f288,0,0);
  return;
}



/* Entry: 101e1f288; end: 101e1f31f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e1f288(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000101e20598(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101e1f320;
                    /* WARNING: Could not recover jumptable at 0x000101e1f31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x60),uVar2,lVar3);
  return;
}



/* Entry: 101e1f320; end: 101e1f39f;  */

void FUN_101e1f320(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    *(undefined4 *)(lVar2 + 0x90) = param_3;
    *(undefined8 *)(lVar2 + 0x80) = param_2;
    *(undefined8 *)(lVar2 + 0x88) = param_1;
    pcVar1 = FUN_101e1f3a0;
  }
  else {
    pcVar1 = FUN_101e1f3dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e1f3a0; end: 101e1f3db;  */

void FUN_101e1f3a0(void)

{
  long unaff_x22;
  
  func_0x000101e205bc(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101e1f3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x80),
             *(undefined4 *)(unaff_x22 + 0x90));
  return;
}



/* Entry: 101e1f3dc; end: 101e1f547;  */

void FUN_101e1f3dc(void)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x22;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000101e205bc(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar5;
  uVar6 = unaff_x22 + 0x38;
  func_0x000107c614b0(uVar5);
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar6,(undefined8 *)(unaff_x22 + 0x58),uVar5,&UNK_11048ac40,6);
  if ((uVar6 & 1) == 0) {
    func_0x000107c61654();
  }
  else {
    uVar6 = *(ulong *)(unaff_x22 + 0x38);
    uVar1 = *(ulong *)(unaff_x22 + 0x40);
    uVar8 = *(ulong *)(unaff_x22 + 0x48);
    uVar9 = (ulong)*(uint *)(unaff_x22 + 0x50);
    cVar2 = *(char *)(unaff_x22 + 0x54);
    uVar7 = uVar9;
    uVar4 = uVar8;
    uVar3 = uVar1;
    if ((cVar2 == '\0') || (uVar7 = uVar8, uVar4 = uVar1, uVar3 = uVar6, cVar2 == '\x01')) {
      func_0x000107c614ac();
      func_0x000107c61174(uVar3);
      func_0x000107c61174(uVar4);
      FUN_101e205dc(uVar6,uVar1,uVar8,uVar9,cVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e1f4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar3,uVar4,uVar7);
      return;
    }
    func_0x000107c61654(*(undefined8 *)(unaff_x22 + 0x78));
    FUN_101e205dc(uVar6,uVar1,uVar8,uVar9,cVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000101e1f544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1f548; end: 101e1f567;  */

void FUN_101e1f548(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x180) = param_2;
  *(undefined8 *)(unaff_x22 + 0x188) = unaff_x20;
  *(undefined4 *)(unaff_x22 + 0x10c) = param_3;
  *(undefined8 *)(unaff_x22 + 0x178) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1f568,0,0);
  return;
}



/* Entry: 101e1f568; end: 101e1f5db;  */

void FUN_101e1f568(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x000103bcda24(0);
  func_0x000107c610f8();
  lVar3 = 0;
  func_0x000103bcd828();
  *(long *)(unaff_x22 + 400) = lVar3;
  plVar4 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101e1f5dc;
  lVar1 = *(long *)(unaff_x22 + 0x180);
  lVar2 = *(long *)(unaff_x22 + 0x188);
  lVar5 = *(long *)(unaff_x22 + 0x178);
  plVar4[0xd] = lVar3;
  plVar4[0xe] = lVar2;
  plVar4[0xb] = lVar5;
  plVar4[0xc] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1e61c,0,0);
  return;
}



/* Entry: 101e1f5dc; end: 101e1f643;  */

void FUN_101e1f5dc(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 400);
  *(undefined8 *)(lVar3 + 0x1a0) = param_1;
  *(long *)(lVar3 + 0x1a8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x198));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101e1f644;
  }
  else {
    pcVar2 = FUN_101e20038;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101e1f644; end: 101e1f703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e1f644(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0x1a0) + _DAT_112ff4e20);
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar5;
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x188) + _DAT_112e306c0);
  uVar1 = 0x112d51300;
  func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar1;
  plVar8 = (long *)0xa0;
  func_0x000107c61174(uVar5);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1b8) = plVar8;
  plVar4 = plVar8;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x1c0) = plVar4;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101e1f704;
  plVar8[0xb] = (long)plVar4;
  plVar8[0xc] = unaff_x22 + 0x150;
  plVar8[9] = unaff_x22 + 0x148;
  plVar8[10] = (long)&UNK_1107a6f08;
  plVar8[8] = unaff_x22 + 0x140;
  lVar6 = *plVar7;
  plVar8[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar2 = 0x10;
  _swift_task_alloc();
  plVar8[0xe] = lVar2;
  lVar2 = *(long *)(lVar6 + 0x50);
  plVar8[0xf] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar8[0x10] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0x11] = uVar3;
  plVar4 = (long *)0x70;
  _swift_task_alloc();
  plVar8[0x12] = (long)plVar4;
  *plVar4 = (long)plVar8;
  plVar4[1] = (long)&UNK_104876614;
  plVar4[5] = uVar3;
  plVar4[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar4[7] = lVar6;
  lVar2 = 0;
  __sSqMa(0,lVar6);
  plVar4[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar3;
  lVar2 = *(long *)(lVar6 + -8);
  plVar4[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101e1f704; end: 101e1f75f;  */

void FUN_101e1f704(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1c8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1b8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e1f760;
  }
  else {
    pcVar1 = FUN_101e200d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e1f760; end: 101e1fa0b;  */

/* WARNING: Removing unreachable block (ram,0x000101e1f8d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e1f760(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  lVar9 = *(long *)(unaff_x22 + 0x1b0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  func_0x000107c4c4c4(uVar7,param_2,*(undefined8 *)(unaff_x22 + 0x180),
                      *(undefined8 *)(unaff_x22 + 0x178));
  func_0x000107c615e8(uVar7);
  func_0x000107c4ca10();
  func_0x000107c61180();
  if (lVar9 != 0) {
    lVar8 = lVar9;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    if (lVar8 == 0) {
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    }
    else {
      func_0x000107c60234(unaff_x22 + 0x90,lVar8);
      func_0x000107c615e8(lVar8);
    }
    lVar9 = *(long *)(unaff_x22 + 0x1c8);
    puVar2 = (undefined8 *)0x112d387f8;
    func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
    func_0x0001048da110(unaff_x22 + 0xb0);
    if (lVar9 == 0) {
      func_0x00010006e7f4(unaff_x22 + 0x90);
      uVar7 = 0;
      func_0x0001012e2f20(0);
      lVar9 = unaff_x22 + 0x160;
      func_0x000107c6147c(lVar9,unaff_x22 + 0xb0,PTR___sypN_11034f1a8 + 8,uVar7,6);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
      if ((int)lVar9 == 0) {
        uVar7 = 0;
      }
      *(undefined8 *)(unaff_x22 + 0x168) = uVar7;
      func_0x0001000285a8(0x112e30700,&UNK_10da191b8);
      func_0x0001048da110(unaff_x22 + 0x170);
      *(undefined8 *)(unaff_x22 + 0x1d0) = 0;
      lVar9 = *(long *)(unaff_x22 + 0x188);
      func_0x000107c61170(uVar7);
      *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x170);
      plVar10 = *(long **)(lVar9 + _DAT_112e306b0);
      plVar6 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x1e0) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_101e1fa0c;
      uVar5 = unaff_x22 + 0xd0;
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x158);
      func_0x000100faaf10();
      puVar3 = &UNK_1107b5fe0;
      func_0x000107c613f8(&UNK_1107b5fe0,puVar2,0,0);
      *puVar2 = uVar12;
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar11);
      func_0x00010006e7f4(unaff_x22 + 0x90);
      *(undefined **)(unaff_x22 + 0x1e8) = puVar3;
      plVar10 = *(long **)(*(long *)(unaff_x22 + 0x188) + _DAT_112e306c0);
      uVar7 = 0x112d51300;
      func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
      *(undefined8 *)(unaff_x22 + 0x128) = uVar7;
      plVar4 = (long *)0xa0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x1f0) = plVar4;
      plVar6 = plVar4;
      func_0x000100faa6a0();
      *(long **)(unaff_x22 + 0x1f8) = plVar6;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101e1fdf0;
      plVar4[0xb] = (long)plVar6;
      plVar4[0xc] = unaff_x22 + 0x130;
      plVar4[9] = unaff_x22 + 0x128;
      plVar4[10] = (long)&UNK_1107a6f08;
      plVar4[8] = unaff_x22 + 0x120;
      lVar8 = *plVar10;
      plVar4[0xd] = (long)&PTR_DAT_1107a6e88;
      lVar9 = 0x10;
      _swift_task_alloc();
      plVar4[0xe] = lVar9;
      lVar9 = *(long *)(lVar8 + 0x50);
      plVar4[0xf] = lVar9;
      lVar9 = *(long *)(lVar9 + -8);
      plVar4[0x10] = lVar9;
      uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar4[0x11] = uVar5;
      plVar6 = (long *)0x70;
      _swift_task_alloc();
      plVar4[0x12] = (long)plVar6;
      *plVar6 = (long)plVar4;
      plVar6[1] = (long)&UNK_104876614;
    }
    plVar6[5] = uVar5;
    plVar6[6] = (long)plVar10;
    lVar8 = *(long *)(*plVar10 + 0x50);
    plVar6[7] = lVar8;
    lVar9 = 0;
    __sSqMa(0,lVar8);
    plVar6[8] = lVar9;
    lVar9 = *(long *)(lVar9 + -8);
    plVar6[9] = lVar9;
    uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[10] = uVar5;
    lVar9 = *(long *)(lVar8 + -8);
    plVar6[0xb] = lVar9;
    uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e1fa0c);
  (*pcVar1)();
}



/* Entry: 101e1fa0c; end: 101e1fa53;  */

void FUN_101e1fa0c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1fa54,0,0);
  return;
}



/* Entry: 101e1fa54; end: 101e1fdef;  */

/* WARNING: Removing unreachable block (ram,0x000101e1fc00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e1fa54(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar11 = *(long *)(unaff_x22 + 0x1d0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar12 = *(long *)(unaff_x22 + 0xd8);
  uVar9 = uVar8;
  func_0x000107c614f0();
  (**(code **)(lVar12 + 0x10))(uVar7,uVar9,lVar12);
  func_0x000107c615e8(uVar8);
  *(undefined8 *)(unaff_x22 + 0x100) = uVar7;
  *(char *)(unaff_x22 + 0x108) = (char)uVar9;
  puVar1 = (undefined8 *)0x112e30708;
  func_0x0001000285a8(0x112e30708,&UNK_10da191c0);
  lVar12 = unaff_x22 + 0x158;
  func_0x0001048da110(unaff_x22 + 0x110);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1d8);
  if (lVar11 != 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x158);
    func_0x000100faaf10();
    puVar16 = &UNK_1107b5fe0;
    func_0x000107c613f8(&UNK_1107b5fe0,puVar1,0,0);
    *puVar1 = uVar15;
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar7);
    *(undefined **)(unaff_x22 + 0x1e8) = puVar16;
    plVar10 = *(long **)(*(long *)(unaff_x22 + 0x188) + _DAT_112e306c0);
    uVar9 = 0x112d51300;
    func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
    *(undefined8 *)(unaff_x22 + 0x128) = uVar9;
    plVar3 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1f0) = plVar3;
    plVar6 = plVar3;
    func_0x000100faa6a0();
    *(long **)(unaff_x22 + 0x1f8) = plVar6;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101e1fdf0;
    plVar3[0xb] = (long)plVar6;
    plVar3[0xc] = unaff_x22 + 0x130;
    plVar3[9] = unaff_x22 + 0x128;
    plVar3[10] = (long)&UNK_1107a6f08;
    plVar3[8] = unaff_x22 + 0x120;
    lVar11 = *plVar10;
    plVar3[0xd] = (long)&PTR_DAT_1107a6e88;
    lVar12 = 0x10;
    _swift_task_alloc();
    plVar3[0xe] = lVar12;
    lVar12 = *(long *)(lVar11 + 0x50);
    plVar3[0xf] = lVar12;
    lVar12 = *(long *)(lVar12 + -8);
    plVar3[0x10] = lVar12;
    uVar5 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar3[0x11] = uVar5;
    plVar6 = (long *)0x70;
    _swift_task_alloc();
    plVar3[0x12] = (long)plVar6;
    *plVar6 = (long)plVar3;
    plVar6[1] = (long)&UNK_104876614;
    plVar6[5] = uVar5;
    plVar6[6] = (long)plVar10;
    lVar11 = *(long *)(*plVar10 + 0x50);
    plVar6[7] = lVar11;
    lVar12 = 0;
    __sSqMa(0,lVar11);
    plVar6[8] = lVar12;
    lVar12 = *(long *)(lVar12 + -8);
    plVar6[9] = lVar12;
    uVar5 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[10] = uVar5;
    lVar12 = *(long *)(lVar11 + -8);
    plVar6[0xb] = lVar12;
    uVar5 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  func_0x000107c61170(uVar7);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
  puVar16 = PTR_PTR_1126bfc88;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c56470();
  func_0x000107c54570(puVar16);
  func_0x000107c59d24(puVar16);
  puVar2 = puVar16;
  func_0x000107c41214();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  if (puVar2 == (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    lVar12 = -0x1000000000000000;
  }
  else {
    puVar16 = puVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar2);
  }
  *(undefined **)(unaff_x22 + 0xe0) = puVar16;
  *(long *)(unaff_x22 + 0xe8) = lVar12;
  func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
  func_0x0001048da110(unaff_x22 + 0xf0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1a0);
  func_0x0001000b44c0(puVar16,lVar12);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  puVar16 = PTR_PTR_1126a95e8;
  func_0x000107c610f8(PTR_PTR_1126a95e8);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126a95f8;
  func_0x000107c610f8(PTR_PTR_1126a95f8);
  uVar13 = uVar7;
  func_0x000107c5ee20(uVar7,uVar8);
  func_0x000107c48cdc(puVar2);
  func_0x000107c61170(uVar13);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c490d4();
  func_0x000107c5a244(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c59aa8(puVar16);
  func_0x000107c61170(puVar2);
  func_0x00010006c090(uVar7,uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000101e1fdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar16);
  return;
}



/* Entry: 101e1fdf0; end: 101e1fe47;  */

void FUN_101e1fdf0(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1f0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e1fe48;
  }
  else {
    pcVar1 = FUN_101e201b8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e1fe48; end: 101e1ff03;  */

void FUN_101e1fe48(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x200) = uVar3;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x109;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101e1ff04;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  uVar2 = 0x112df01c0;
  func_0x0001000285a8(0x112df01c0,&UNK_10daf7f40);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101a67e30;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11048a9d8;
  *(long *)(unaff_x22 + 0x70) = lVar1;
  func_0x000107c4feb8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101e1ff04; end: 101e1ff43;  */

void FUN_101e1ff04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1ff44,0,0);
  return;
}



/* Entry: 101e1ff44; end: 101e20037;  */

void FUN_101e1ff44(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1e8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x200));
  *(undefined8 *)(unaff_x22 + 0x138) = uVar5;
  func_0x000107c614b0(uVar5);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar2 = unaff_x22 + 0x138;
  func_0x000107c5fb18(lVar2,uVar1);
  puVar3 = PTR_PTR_1126a95e8;
  func_0x000107c610f8(PTR_PTR_1126a95e8);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126a95f0;
  func_0x000107c610f8(PTR_PTR_1126a95f0);
  func_0x000107c467b4();
  func_0x000107c5fadc(lVar2,uVar1);
  func_0x000107c54664(puVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c5486c(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c6142c(uVar1);
  func_0x000107c614ac(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101e20034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar3);
  return;
}



/* Entry: 101e20038; end: 101e200d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e20038(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x1a8);
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x188) + _DAT_112e306c0);
  uVar1 = 0x112d51300;
  func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1f0) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x1f8) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101e1fdf0;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x130;
  plVar2[9] = unaff_x22 + 0x128;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x120;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101e200d4; end: 101e201b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e200d4(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x1c0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x150);
  puVar1 = &UNK_1107a6f08;
  func_0x000107c613f8(&UNK_1107a6f08,puVar6,0,0);
  *puVar6 = uVar9;
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  *(undefined **)(unaff_x22 + 0x1e8) = puVar1;
  plVar10 = *(long **)(*(long *)(unaff_x22 + 0x188) + _DAT_112e306c0);
  uVar7 = 0x112d51300;
  func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar7;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1f0) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x1f8) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101e1fdf0;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x130;
  plVar2[9] = unaff_x22 + 0x128;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x120;
  lVar8 = *plVar10;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar8 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar10;
  lVar8 = *(long *)(*plVar10 + 0x50);
  plVar5[7] = lVar8;
  lVar3 = 0;
  __sSqMa(0,lVar8);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar8 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101e201b8; end: 101e2021b;  */

void FUN_101e201b8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar3;
  func_0x000107c614ac(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e20218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e2021c; end: 101e20327; -[_TtC38MemoriesValdiSnapDocUploadServicesImpl20ValdiSnapDocUploader uploadSnapDocThumbnailWithInput:] */

void FUN_101e2021c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001000285a8(0x112e306f0,&UNK_10da19178);
  puVar1 = &UNK_11048a998;
  func_0x000107c613fc(&UNK_11048a998,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11048a9c0;
  func_0x000107c613fc(&UNK_11048a9c0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0x60;
  func_0x000104887c7c(0x60,0,0x48,4,0xd00000000000001d,0x800000010f013050,&UNK_10da19188,puVar2);
  func_0x000107c61574(puVar2);
  func_0x000103edf0bc();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101e20328; end: 101e2038b;  */

void FUN_101e20328(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101e208b0;
  plVar3[7] = lVar1;
  plVar3[8] = lVar2;
  plVar3[6] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1ecc8,0,0);
  return;
}



/* Entry: 101e2038c; end: 101e203cb;  */

void FUN_101e2038c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e306f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da19294;
  func_0x000107c61520(&UNK_10da19294,&UNK_11048aad0);
  puRam0000000112e306f8 = puVar1;
  return;
}



/* Entry: 101e203cc; end: 101e203e3;  */

void FUN_101e203cc(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e203e4,0,0);
  return;
}



/* Entry: 101e203e4; end: 101e204ab;  */

void FUN_101e203e4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101e2042c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101e204ac;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11048aa10;
  func_0x000107c613fc(&UNK_11048aa10,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101e20538,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101e204ac; end: 101e204eb;  */

void FUN_101e204ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e204ec,0,0);
  return;
}



/* Entry: 101e204ec; end: 101e2050b;  */

void FUN_101e204ec(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101e204f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101e2050c; end: 101e20523;  */

void FUN_101e2050c(long param_1)

{
  func_0x000101e205bc(param_1 + 0x20);
  return;
}



/* Entry: 101e20524; end: 101e20537;  */

void FUN_101e20524(undefined8 param_1,char param_2)

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



/* Entry: 101e20538; end: 101e20583;  */

void FUN_101e20538(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101e20584(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101e20584; end: 101e205db;  */

void FUN_101e20584(undefined8 param_1,char param_2)

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



/* Entry: 101e205dc; end: 101e2063b;  */

/* WARNING: Possible PIC construction at 0x000101e20608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e2060c) */

void FUN_101e205dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if (param_5 != '\x02') {
    if (param_5 == '\x01') {
      func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
    if (param_5 != '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)();
  return;
}



/* Entry: 101e2063c; end: 101e20667;  */

void FUN_101e2063c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e20668; end: 101e206cb;  */

void FUN_101e20668(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101e206cc;
  plVar3[7] = lVar1;
  plVar3[8] = lVar2;
  plVar3[6] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1ded0,0,0);
  return;
}



/* Entry: 101e206cc; end: 101e20707;  */

void FUN_101e206cc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e20704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e20708; end: 101e2086f;  */

int FUN_101e20708(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101e20784;
        goto LAB_101e20768;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101e20768:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_101e20784:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101e20870; end: 101e208af;  */

void FUN_101e20870(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e30728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1926c;
  func_0x000107c61520(&UNK_10da1926c,&UNK_11048aad0);
  puRam0000000112e30728 = puVar1;
  return;
}



/* Entry: 101e208b0; end: 101e208c3;  */

void FUN_101e208b0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e20704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e208c4; end: 101e2095b;  */

long FUN_101e208c4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101e2095c; end: 101e20973;  */

/* WARNING: Possible PIC construction at 0x000101e20608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e2060c) */

void FUN_101e2095c(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = param_1[1];
  cVar2 = *(char *)((long)param_1 + 0x1c);
  if (cVar2 != '\x02') {
    if (cVar2 == '\x01') {
      func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
    if (cVar2 != '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)
            (*param_1,uVar1,param_1[2],*(undefined4 *)(param_1 + 3));
  return;
}



/* Entry: 101e20974; end: 101e20a57;  */

undefined8 * FUN_101e20974(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined1 *)((long)param_2 + 0x1c);
  func_0x000101e208f0(uVar1,uVar2,uVar5,uVar3,uVar4);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar5;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined1 *)((long)param_1 + 0x1c) = uVar4;
  return param_1;
}



/* Entry: 101e20a58; end: 101e20a6b;  */

void FUN_101e20a58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 0xd);
  *(undefined8 *)((long)param_1 + 0x15) = *(undefined8 *)((long)param_2 + 0x15);
  *(undefined8 *)((long)param_1 + 0xd) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 101e20a6c; end: 101e20ac3;  */

undefined8 * FUN_101e20a6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar8 = param_2[2];
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined1 *)((long)param_2 + 0x1c);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = *(undefined4 *)(param_1 + 3);
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[2] = uVar8;
  *(undefined4 *)(param_1 + 3) = uVar3;
  uVar6 = *(undefined1 *)((long)param_1 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x1c) = uVar5;
  FUN_101e205dc(uVar7,uVar1,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 101e20ac4; end: 101e20ba3;  */

int FUN_101e20ac4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x1d) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 7) ^ 0xff;
  if (*(byte *)(param_1 + 7) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101e20ba4; end: 101e20c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e20ba4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e30730) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101e20c3c; end: 101e20c9b; -[SCMemoriesSnapDocThumbnailServices init] */

void FUN_101e20c3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapDocThumbnailServicesAPI.MemoriesSnapDocThumbnailServices",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e20c68);
  (*pcVar1)();
}



/* Entry: 101e20c9c; end: 101e20cab; -[SCMemoriesSnapDocThumbnailServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e20c9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e30730));
  return;
}



/* Entry: 101e20cac; end: 101e20e1b;  */

/* WARNING: Possible PIC construction at 0x000101e20cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e20cc4) */

void FUN_101e20cac(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 101e20e1c; end: 101e20eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e20e1c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e30760) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101e20eb4; end: 101e20ee7;  */

void FUN_101e20eb4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e20ee8; end: 101e20f0b; -[MemoriesValdiSnapDocUploadServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e20ee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e30760));
  return;
}



/* Entry: 101e20f0c; end: 101e20fb7;  */

void FUN_101e20f0c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101e20fb8; end: 101e20fc7;  */

void FUN_101e20fb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101e20fc8; end: 101e21b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101e20fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_98 [8];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e30790) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e30798) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e307a0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e307a8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e307b0) = param_6;
  func_0x000107c615f0(param_6);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000d224c(auStack_88);
  puVar1 = auStack_88;
  func_0x0001000a8868(puVar1,uStack_70);
  uVar2 = 2;
  func_0x000100774b74(2,0xe,1,uStack_70,uStack_68,puVar1);
  *(undefined8 *)(unaff_x20 + _DAT_112e307b8) = uVar2;
  func_0x0001000834e4(auStack_88);
  puVar1 = auStack_98;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c615e8(param_6);
  return puVar1;
}



/* Entry: 101e21b60; end: 101e21b6b;  */

void FUN_101e21b60(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = 0;
  func_0x000107c5f7fc(0,*(undefined8 *)(unaff_x20 + 0x10));
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_11048b080;
  func_0x000107c613fc(&UNK_11048b080,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  pcStack_70 = FUN_101e22fbc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_11048b098;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c6157c(uVar6);
  func_0x000107c61174(param_1);
  func_0x000107c5f808(lVar8);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar5 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar6 = uVar5;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar7,&puStack_98,uVar5,uVar6,lVar1,param_1);
  func_0x000107c5ffe8(0,lVar8,puVar7,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lVar9 + 8))(puVar7,lVar1);
  (**(code **)(lVar10 + 8))(lVar8,lVar2);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 101e21b6c; end: 101e21bab;  */

void FUN_101e21b6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e307c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da19538;
  func_0x000107c61520(&UNK_10da19538,&UNK_11048af98);
  puRam0000000112e307c0 = puVar1;
  return;
}



/* Entry: 101e21bac; end: 101e22133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e21bac(long param_1,long param_2,long param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar3 = auStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar3,0,0);
  puVar1 = (undefined1 *)(param_3 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000d224c(&puStack_a8);
    puVar4 = puStack_a8;
    if (puStack_a8 != (undefined *)0x0) {
      if ((param_2 == 0) || (param_1 != 0)) {
        puVar11 = PTR_PTR_1126af5d0;
        func_0x000107c61168(PTR_PTR_1126af5d0);
        func_0x000103bd9708(0);
        func_0x000107c610f8();
        uVar2 = 1;
        func_0x000103bd965c(1);
        func_0x000107c5c3c8(puVar11);
        func_0x000107c61180();
        func_0x000107c61170(uVar2);
        (*param_5)(puVar11);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(puVar4);
      }
      else {
        puVar5 = PTR_PTR_1126bc7b8;
        func_0x000107c61168();
        func_0x000107c615f0(param_2);
        func_0x000107c430f0();
        func_0x000107c61180();
        if (puVar5 != (undefined *)0x0) {
          func_0x000107c615f0(puVar5);
          lVar6 = param_2;
          func_0x000107c4c970();
          func_0x000107c61180();
          func_0x000107c615e8(puVar5);
          if (lVar6 != 0) {
            func_0x000107c61170(lVar6);
            func_0x0001000d224c(&puStack_a8);
            puVar9 = puStack_a8;
            if (puStack_a8 == (undefined *)0x0) {
              puVar8 = PTR_PTR_1126af5d0;
              func_0x000107c61168();
              puVar3 = puVar8;
              FUN_101e21b6c();
              puVar11 = &UNK_11048af98;
              func_0x000107c613f8(&UNK_11048af98,puVar3,0,0);
              *puVar3 = 2;
              puVar9 = puVar11;
              func_0x000107c5ed2c();
              func_0x000107c614ac(puVar11);
              func_0x000107c42d78(puVar8);
              func_0x000107c61180();
              func_0x000107c61170(puVar9);
              (*param_5)(puVar8);
            }
            else {
              puVar11 = PTR_PTR_1126bfb98;
              func_0x000107c61168();
              puVar8 = puVar5;
              func_0x000107c4e150(puVar5);
              func_0x000107c61180();
              func_0x000107c50470();
              func_0x000107c61170(puVar8);
              if (((ulong)puVar11 & 1) == 0) {
                lVar6 = param_2;
                func_0x000107c4c970();
                func_0x000107c61180();
                if (lVar6 != 0) {
                  lVar10 = lVar6;
                  func_0x000107c5faec();
                  func_0x000107c61170(lVar6);
                  puVar11 = (undefined1 *)0xd000000000000016;
                  func_0x000107c5fadc(0xd000000000000016,0x800000010f013170);
                  puVar8 = &UNK_11048ae60;
                  func_0x000107c613fc(&UNK_11048ae60,0x18,7);
                  func_0x000107c61614(puVar8 + 0x10,puVar1);
                  puVar7 = &UNK_11048b030;
                  func_0x000107c613fc(&UNK_11048b030,0x40,7);
                  *(code **)(puVar7 + 0x10) = param_5;
                  *(undefined8 *)(puVar7 + 0x18) = param_6;
                  *(undefined **)(puVar7 + 0x20) = puVar8;
                  *(long *)(puVar7 + 0x28) = param_2;
                  *(long *)(puVar7 + 0x30) = lVar10;
                  *(undefined1 **)(puVar7 + 0x38) = puVar3;
                  uStack_88 = 0x101e23004;
                  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_a0 = 0x42000000;
                  pcStack_98 = FUN_101e22bc4;
                  puStack_90 = &UNK_11048b048;
                  ppuVar12 = &puStack_a8;
                  puStack_80 = puVar7;
                  func_0x000107c60bc4(ppuVar12);
                  puVar8 = puStack_80;
                  func_0x000107c615f0(param_2);
                  func_0x000107c6157c(param_6);
                  func_0x000107c61574(puVar8);
                  func_0x000107c5039c(puVar9);
                  func_0x000107c61170(puVar4);
                  func_0x000107c615e8(param_2);
                  func_0x000107c615e8(puVar5);
                  func_0x000107c61170(puVar1);
                  func_0x000107c60bd0(ppuVar12);
                  func_0x000107c615e8(puVar9);
                  goto LAB_101e21d10;
                }
                puVar8 = PTR_PTR_1126af5d0;
                func_0x000107c61168();
                puVar3 = puVar8;
                FUN_101e21b6c();
                puVar11 = &UNK_11048af98;
                func_0x000107c613f8(&UNK_11048af98,puVar3,0,0);
                *puVar3 = 5;
                puVar7 = puVar11;
                func_0x000107c5ed2c();
                func_0x000107c614ac(puVar11);
                func_0x000107c42d78(puVar8);
                func_0x000107c61180();
              }
              else {
                puVar8 = PTR_PTR_1126af5d0;
                func_0x000107c61168(PTR_PTR_1126af5d0);
                func_0x000103bd9708(0);
                func_0x000107c610f8();
                puVar7 = (undefined *)0x1;
                func_0x000103bd965c(1);
                func_0x000107c5c3c8(puVar8);
                func_0x000107c61180();
              }
              func_0x000107c61170(puVar7);
              (*param_5)(puVar8);
              func_0x000107c615e8(puVar9);
            }
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar4);
            func_0x000107c615e8(param_2);
            func_0x000107c615e8(puVar5);
            puVar11 = puVar1;
            goto LAB_101e21d10;
          }
        }
        puVar11 = PTR_PTR_1126af5d0;
        func_0x000107c61168(PTR_PTR_1126af5d0);
        func_0x000103bd9708(0);
        func_0x000107c610f8();
        uVar2 = 1;
        func_0x000103bd965c(1);
        func_0x000107c5c3c8(puVar11);
        func_0x000107c61180();
        func_0x000107c61170(uVar2);
        (*param_5)(puVar11);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(puVar4);
        func_0x000107c615e8(param_2);
        func_0x000107c615e8(puVar5);
      }
      goto LAB_101e21d10;
    }
    func_0x000107c61170(puVar1);
  }
  puVar11 = PTR_PTR_1126af5d0;
  func_0x000107c61168();
  puVar3 = puVar11;
  FUN_101e21b6c();
  puVar4 = &UNK_11048af98;
  func_0x000107c613f8(&UNK_11048af98,puVar3,0,0);
  *puVar3 = 2;
  puVar5 = puVar4;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar4);
  func_0x000107c42d78(puVar11);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  (*param_5)(puVar11);
LAB_101e21d10:
  func_0x000107c61170(puVar11);
  return;
}


