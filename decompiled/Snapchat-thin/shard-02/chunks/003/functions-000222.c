/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101bc2468; end: 101bc258b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101bc2468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar5;
  long alStack_b0 [5];
  long lStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  lVar1 = 0;
  func_0x000101bc081c();
  ppuStack_58 = &PTR_DAT_110451f70;
  lVar2 = 0;
  auStack_78[0] = param_1;
  lStack_60 = lVar1;
  FUN_101bc1d3c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_78,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = (undefined8 *)((long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar5);
  alStack_b0[2] = *puVar5;
  ppuStack_80 = &PTR_DAT_110451f70;
  lStack_88 = lVar1;
  FUN_101bc258c(alStack_b0 + 2,lVar3 + _DAT_112e07870);
  *(undefined8 *)(lVar3 + _DAT_112e07878) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e07880) = param_3;
  plVar4 = alStack_b0;
  alStack_b0[0] = lVar3;
  alStack_b0[1] = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x0001000834e4(alStack_b0 + 2);
  func_0x0001000834e4(auStack_78);
  return plVar4;
}



/* Entry: 101bc258c; end: 101bc25cf;  */

long FUN_101bc258c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101bc25d0; end: 101bc25df;  */

void FUN_101bc25d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101bc25e0; end: 101bc25ff;  */

void FUN_101bc25e0(void)

{
  func_0x000107c61168(&PTR_PTR_112e07918);
  return;
}



/* Entry: 101bc2600; end: 101bc2613;  */

void FUN_101bc2600(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc2614,0,0);
  return;
}



/* Entry: 101bc2614; end: 101bc2673;  */

void FUN_101bc2614(undefined1 *param_1)

{
  long unaff_x22;
  
  FUN_101bc26fc();
  func_0x000107c613f8(&UNK_110452348,param_1,0,0);
  *param_1 = 4;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101bc2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bc2674; end: 101bc269b;  */

void FUN_101bc2674(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc273c,0,0);
  return;
}



/* Entry: 101bc269c; end: 101bc26fb;  */

void FUN_101bc269c(undefined1 *param_1)

{
  long unaff_x22;
  
  FUN_101bc26fc();
  func_0x000107c613f8(&UNK_110452348,param_1,0,0);
  *param_1 = 4;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101bc26f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bc26fc; end: 101bc273b;  */

void FUN_101bc26fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e07970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dbf48;
  func_0x000107c61520(&UNK_10d9dbf48,&UNK_110452348);
  puRam0000000112e07970 = puVar1;
  return;
}



/* Entry: 101bc273c; end: 101bc273f;  */

void FUN_101bc273c(undefined1 *param_1)

{
  long unaff_x22;
  
  FUN_101bc26fc();
  func_0x000107c613f8(&UNK_110452348,param_1,0,0);
  *param_1 = 4;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101bc26f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bc2740; end: 101bc27d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc2740(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e07978) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101bc27d8; end: 101bc2837; -[_TtC27MemoriesMediaAccessServices27MemoriesMediaAccessServices init] */

void FUN_101bc27d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesMediaAccessServices.MemoriesMediaAccessServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bc2804);
  (*pcVar1)();
}



/* Entry: 101bc2838; end: 101bc285b; -[_TtC27MemoriesMediaAccessServices27MemoriesMediaAccessServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc2838(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e07978));
  return;
}



/* Entry: 101bc285c; end: 101bc2907;  */

void FUN_101bc285c(void)

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



/* Entry: 101bc2908; end: 101bc290b;  */

void FUN_101bc2908(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e079a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dbee0;
  func_0x000107c61520(&UNK_10d9dbee0,&UNK_110452348);
  puRam0000000112e079a8 = puVar1;
  return;
}



/* Entry: 101bc290c; end: 101bc294b;  */

void FUN_101bc290c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e079a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dbee0;
  func_0x000107c61520(&UNK_10d9dbee0,&UNK_110452348);
  puRam0000000112e079a8 = puVar1;
  return;
}



/* Entry: 101bc294c; end: 101bc2acf;  */

void FUN_101bc294c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101bc2ad0; end: 101bc2b6b;  */

void FUN_101bc2ad0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x00010079b778();
  func_0x000107c61170(uStack_48);
  uVar1 = param_1;
  func_0x000107c4cac0();
  func_0x000107c615e8(param_1);
  if ((int)uVar1 == 0) {
    func_0x000107c610f8(PTR_PTR_1126a8c18);
    func_0x000107c45b50();
  }
  else {
    func_0x000100083b20(&uStack_48);
  }
  return;
}



/* Entry: 101bc2b6c; end: 101bc2ba3;  */

void FUN_101bc2b6c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101bc2ba4; end: 101bc2bab;  */

void FUN_101bc2ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101bc2bac; end: 101bc2c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc2bac(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  func_0x0001002ca7ec();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e079c0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 101bc2c14; end: 101bc2c5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc2c14(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e079c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101bc2c60; end: 101bc2d3f;  */

void FUN_101bc2c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1104525d8;
  func_0x000107c613fc(&UNK_1104525d8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar2 = 0xc1;
  func_0x0001001ca524(0xc1,0,0x48,4,0,0,&UNK_10d9dc0e0,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(FUN_101bc327c,uVar2);
  return;
}



/* Entry: 101bc2d40; end: 101bc2d5b;  */

void FUN_101bc2d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc2d5c,0,0);
  return;
}



/* Entry: 101bc2d5c; end: 101bc2e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc2d5c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar6 = *(long *)(unaff_x22 + 0x50);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar7 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar4);
  puVar1 = (undefined8 *)(lVar6 + _DAT_112fda418);
  puVar2 = (undefined8 *)(lVar6 + _DAT_112fda420);
  uVar11 = *puVar2;
  uVar12 = puVar2[1];
  piVar10 = *(int **)(lVar7 + 8);
  iVar3 = *piVar10;
  plVar9 = (long *)(ulong)(uint)piVar10[1];
  uVar5 = *puVar1;
  uVar8 = puVar1[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_101bc2e34;
                    /* WARNING: Could not recover jumptable at 0x000101bc2e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar3 + (long)piVar10))(uVar11,uVar12,uVar5,uVar8,uVar4,lVar7);
  return;
}



/* Entry: 101bc2e34; end: 101bc2e9f;  */

void FUN_101bc2e34(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x70) = param_1;
    pcVar1 = FUN_101bc2ea0;
  }
  else {
    pcVar1 = FUN_101bc2f24;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bc2ea0; end: 101bc2f23;  */

void FUN_101bc2ea0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x0001000834e4(unaff_x22 + 0x10);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x000107c61168();
  func_0x000107c5c3c8();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x40) = puVar1;
  func_0x000100087f6c();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000100c7f554();
                    /* WARNING: Could not recover jumptable at 0x000101bc2f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bc2f24; end: 101bc2fdb;  */

void FUN_101bc2f24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x0001000834e4(unaff_x22 + 0x10);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x000107c61168();
  uVar2 = uVar4;
  func_0x000107c5ed2c(uVar4);
  uVar3 = uVar2;
  func_0x000107c5ed2c();
  func_0x000107c61170(uVar2);
  func_0x000107c42d78(puVar1,param_2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x22 + 0x38) = puVar1;
  func_0x000100087f6c();
  func_0x000107c614ac(uVar4);
  func_0x000107c61170(puVar1);
  func_0x000100c7f554();
                    /* WARNING: Could not recover jumptable at 0x000101bc2fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bc2fdc; end: 101bc30af; -[_TtC47MemTwoLegacySnapThumbnailProviderImplementation33MemTwoLegacySnapThumbnailProvider provideThumbnailWithSnapThumbnailRequest:] */

void FUN_101bc2fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104525b0;
  func_0x000107c613fc(&UNK_1104525b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x0001000285a8(0x112dd7470,&UNK_10da162b0);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  uVar2 = 0x101bc32a4;
  func_0x0001000b64ac(0x101bc32a4,puVar1);
  uVar3 = uVar2;
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101bc30b0; end: 101bc3183; -[_TtC47MemTwoLegacySnapThumbnailProviderImplementation33MemTwoLegacySnapThumbnailProvider provideThumbnailWithSnapThumbnailRequest:opportunistic:] */

void FUN_101bc30b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110452588;
  func_0x000107c613fc(&UNK_110452588,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x0001000285a8(0x112dd7470,&UNK_10da162b0);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  uVar2 = 0x101bc32a0;
  func_0x0001000b64ac(0x101bc32a0,puVar1);
  uVar3 = uVar2;
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101bc3184; end: 101bc318b;  */

void FUN_101bc3184(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1104525d8;
  func_0x000107c613fc(&UNK_1104525d8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(param_1);
  uVar3 = 0xc1;
  func_0x0001001ca524(0xc1,0,0x48,4,0,0,&UNK_10d9dc0e0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(FUN_101bc327c,uVar3);
  return;
}



/* Entry: 101bc318c; end: 101bc31bf;  */

void FUN_101bc318c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101bc31c0; end: 101bc31cf;  */

undefined1  [16] FUN_101bc31c0(void)

{
  return ZEXT816(0x110452568);
}



/* Entry: 101bc31d0; end: 101bc31df; -[_TtC47MemTwoLegacySnapThumbnailProviderImplementation33MemTwoLegacySnapThumbnailProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc31d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e079c0));
  return;
}



/* Entry: 101bc31e0; end: 101bc323f;  */

void FUN_101bc31e0(void)

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
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101bc3240;
  plVar3[10] = lVar2;
  plVar3[0xb] = lVar4;
  plVar3[9] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc2d5c,0,0);
  return;
}



/* Entry: 101bc3240; end: 101bc327b;  */

void FUN_101bc3240(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bc3278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bc327c; end: 101bc32a7;  */

void FUN_101bc327c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 101bc32a8; end: 101bc32ff;  */

void FUN_101bc32a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c610f8();
  func_0x00010079b870(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 101bc3300; end: 101bc331b;  */

void FUN_101bc3300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc331c,0,0);
  return;
}



/* Entry: 101bc331c; end: 101bc34a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc331c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x0001000d224c(unaff_x22 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    puVar3 = &UNK_1104526a8;
    puVar1 = puVar3;
    func_0x000107c613fc(&UNK_1104526a8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,lVar4);
    uVar2 = 0;
    func_0x00010488a220(0,1,0x101bc46b8,puVar1);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar5);
    func_0x000104888fc0(0,1,FUN_101bc3ce0,0);
    func_0x000107c61574(uVar2);
    func_0x0001000d224c(unaff_x22 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x000107c613fc(&UNK_1104526a8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar4);
    uVar2 = 0;
    func_0x00010488a220(0,1,0x101bc46e8,puVar3);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar5);
    func_0x000104888fc0(0,1,FUN_101bc3fdc,0);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000101bc34a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bc34a8; end: 101bc34f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc34a8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112e07a40));
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101bc34f8; end: 101bc355f; -[_TtC28MemoriesTweaksImplementation20MemTwoTweaksProvider dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc34f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e07a40);
  func_0x000107c61174();
  func_0x000107c42194(uVar2);
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101bc3560; end: 101bc35c7; -[_TtC28MemoriesTweaksImplementation20MemTwoTweaksProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101bc357c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bc3580) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc3560(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e07a58));
  return;
}



/* Entry: 101bc35c8; end: 101bc375b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101bc35c8(ulong param_1)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  ulong uStack_38;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e07a50);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(&uStack_38);
  func_0x000107c61574(uVar4);
  if ((char)uStack_38 == '\x01') {
    if (0x12 < param_1) {
      uStack_38 = param_1;
      func_0x000107c60614(&UNK_1106e28d0,&uStack_38,&UNK_1106e28d0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bc375c);
      (*pcVar1)();
    }
    if ((1L << (param_1 & 0x3f) & 0x77a6aU) == 0) goto LAB_101bc3634;
LAB_101bc36ac:
    uVar2 = 1;
  }
  else {
LAB_101bc3634:
    if ((int)param_1 == 0x12) {
      func_0x000100083b20(&uStack_38);
      uVar4 = 0xd00000000000002d;
      func_0x000107c5fadc(0xd00000000000002d,0x800000010f0025a0);
      uVar3 = uStack_38;
      func_0x000107c3ebd4();
      func_0x000107c615e8(uStack_38);
      func_0x000107c61170(uVar4);
      if ((uVar3 & 1) != 0) goto LAB_101bc36ac;
    }
    else if ((int)param_1 == 0x10) {
      func_0x000100083b20(&uStack_38);
      uVar4 = 0xd000000000000037;
      func_0x000107c5fadc(0xd000000000000037,0x800000010f0025d0);
      uVar3 = uStack_38;
      func_0x000107c3ebd4();
      func_0x000107c615e8(uStack_38);
      func_0x000107c61170(uVar4);
      if ((int)uVar3 != 0) goto LAB_101bc36ac;
    }
    FUN_101bc4330(param_1);
    uVar2 = (uint)param_1;
  }
  return uVar2 & 1;
}



/* Entry: 101bc375c; end: 101bc3797; -[_TtC28MemoriesTweaksImplementation20MemTwoTweaksProvider shouldShowMemTwoPickerForSource:] */

uint FUN_101bc375c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101bc35c8(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101bc3798; end: 101bc3833; -[_TtC28MemoriesTweaksImplementation20MemTwoTweaksProvider shouldShowMemTwoPickerFeaturedStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101bc3798(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000033;
  func_0x000107c5fadc(0xd000000000000033,0x800000010f002610);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101bc3834; end: 101bc388b; -[_TtC28MemoriesTweaksImplementation20MemTwoTweaksProvider memTwoEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101bc3834(long param_1)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e07a50);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&uStack_21);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  return uStack_21;
}



/* Entry: 101bc388c; end: 101bc3927; -[_TtC28MemoriesTweaksImplementation20MemTwoTweaksProvider shouldEnableMemTwoMapLocations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101bc388c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f002650);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101bc3928; end: 101bc395b; -[_TtC28MemoriesTweaksImplementation20MemTwoTweaksProvider shouldShowMemTwoChatMediaDrawer] */

uint FUN_101bc3928(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101bc395c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101bc395c; end: 101bc3b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101bc395c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_40;
  byte bStack_31;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e07a50);
  func_0x000107c6157c(uVar2);
  func_0x0001000c74f0(&bStack_31);
  func_0x000107c61574(uVar2);
  if ((bStack_31 & 1) == 0) {
    func_0x000100083b20(&uStack_40);
    uVar1 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010f002680);
    uVar2 = uStack_40;
    func_0x000107c3ebd4(uStack_40);
    func_0x000107c615e8(uStack_40);
    func_0x000107c61170(uVar1);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 101bc3b5c; end: 101bc3bdf;  */

void FUN_101bc3b5c(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c49820(param_1);
    FUN_101bc3be0(0 < param_1,0xd00000000000002a,0x800000010f002540,1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101bc3be0; end: 101bc3cdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc3be0(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_48;
  
  uVar1 = param_2;
  func_0x00010079bf6c(param_2,param_3,param_4);
  if ((param_1 & 1) != ((uint)uVar1 & 1)) {
    func_0x000100083b20(&lStack_48);
    lVar2 = lStack_48;
    func_0x000107c4ec80();
    func_0x000107c61180();
    func_0x000107c61170(lStack_48);
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c56bcc(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 101bc3ce0; end: 101bc3ce3;  */

void FUN_101bc3ce0(void)

{
  return;
}



/* Entry: 101bc3ce4; end: 101bc3e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc3ce4(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  uVar4 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + _DAT_112e07a48);
    puVar2 = &UNK_1104526a8;
    func_0x000107c613fc(&UNK_1104526a8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    func_0x000107c613fc(param_3,0x20,7);
    *(undefined **)(param_3 + 0x10) = puVar2;
    *(undefined8 *)(param_3 + 0x18) = uVar4;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    ppuVar3 = &puStack_98;
    uStack_80 = param_5;
    uStack_78 = param_4;
    lStack_70 = param_3;
    func_0x000107c60bc4(ppuVar3);
    lVar1 = lStack_70;
    func_0x000107c61174(uVar5);
    func_0x000107c615f0(uVar4);
    func_0x000107c61574(lVar1);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 101bc3e1c; end: 101bc3f57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc3e1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4da94(param_2);
    func_0x000107c61180();
    uVar1 = param_2;
    func_0x000107c5cb2c();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    puVar2 = &UNK_1104526a8;
    func_0x000107c613fc(&UNK_1104526a8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    uStack_58 = 0x101bc473c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_100b5fdac;
    puStack_60 = &UNK_110452758;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_50);
    uVar4 = uVar1;
    func_0x000107c5c320(uVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c3d65c(*(undefined8 *)(param_1 + _DAT_112e07a40));
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 101bc3f58; end: 101bc3fdb;  */

void FUN_101bc3f58(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c49820(param_1);
    FUN_101bc3be0(0 < param_1,0xd00000000000002b,0x800000010f002570,0);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101bc3fdc; end: 101bc3fdf;  */

void FUN_101bc3fdc(void)

{
  return;
}



/* Entry: 101bc3fe0; end: 101bc3fe3; -[_TtC28MemoriesTweaksImplementation20MemTwoTweaksProvider applyMemTwoModeOverride:] */

void FUN_101bc3fe0(void)

{
  return;
}



/* Entry: 101bc3fe4; end: 101bc3feb; -[_TtC28MemoriesTweaksImplementation20MemTwoTweaksProvider memTwoModeOverride] */

undefined8 FUN_101bc3fe4(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 101bc3fec; end: 101bc4057;  */

void FUN_101bc3fec(void)

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
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101bc4058;
  plVar3[7] = lVar2;
  plVar3[8] = lVar4;
  plVar3[6] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc331c,0,0);
  return;
}



/* Entry: 101bc4058; end: 101bc4093;  */

void FUN_101bc4058(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bc4090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bc4094; end: 101bc432f; -[_TtC28MemoriesTweaksImplementation20MemTwoTweaksProvider init] */

void FUN_101bc4094(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesTweaksImplementation.MemTwoTweaksProvider",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bc40c0);
  (*pcVar1)();
}



/* Entry: 101bc4330; end: 101bc468b;  */

uint FUN_101bc4330(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long extraout_x8;
  ulong *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined1 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar7 = 0;
  func_0x000107c5eb9c();
  lStack_a0 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  uVar14 = uRam0000000112e079f8;
  uVar1 = uRam0000000112e079f0;
  puVar19 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_70 = (undefined *)0x2c;
  uStack_68 = 0xe100000000000000;
  ppuStack_80 = &puStack_70;
  func_0x000107c61434(uRam0000000112e079f8);
  lVar8 = 0x7fffffffffffffff;
  puVar13 = (undefined *)0x1;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_101bc469c,&puStack_90,uVar1,uVar14);
  uStack_b8 = 0;
  lVar21 = *(long *)(lVar8 + 0x10);
  if (lVar21 == 0) {
    func_0x000107c6142c(lVar8);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_a8 = param_1;
    func_0x000100403514(0,lVar21,0);
    puVar17 = (undefined8 *)(lVar8 + 0x38);
    lStack_b0 = lVar8;
    do {
      puVar11 = puStack_70;
      puVar13 = (undefined *)puVar17[-3];
      uVar14 = puVar17[-2];
      uVar1 = puVar17[-1];
      uVar4 = *puVar17;
      func_0x000107c61434(uVar4);
      func_0x000107c5fb2c(puVar13,uVar14,uVar1,uVar4);
      puStack_90 = puVar13;
      uStack_88 = uVar14;
      func_0x000107c5eb88(puVar19);
      func_0x000100e8b654();
      puVar9 = puVar19;
      puVar12 = PTR___sSSN_11034da80;
      func_0x000107c601f0(puVar19,PTR___sSSN_11034da80,puVar13);
      (**(code **)(lStack_a0 + 8))(puVar19,lVar7);
      func_0x000107c6142c(uVar14);
      puVar10 = puVar12;
      func_0x000107c5fb24();
      puVar13 = puVar10;
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(puVar12);
      uVar18 = *(ulong *)(puVar11 + 0x10);
      puVar12 = (undefined *)(uVar18 + 1);
      puStack_70 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar18) {
        puVar13 = puVar12;
        func_0x000100403514(1 < *(ulong *)(puVar11 + 0x18),puVar12,1);
      }
      puVar11 = puStack_70;
      puVar17 = puVar17 + 4;
      *(undefined **)(puStack_70 + 0x10) = puVar12;
      *(undefined1 **)(puStack_70 + uVar18 * 0x10 + 0x20) = puVar9;
      *(undefined **)(puStack_70 + uVar18 * 0x10 + 0x28) = puVar10;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    func_0x000107c6142c(lStack_b0);
    param_1 = uStack_a8;
  }
  uVar18 = 0;
  uVar20 = *(ulong *)(puVar11 + 0x10);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puVar15 = (ulong *)(puVar11 + uVar18 * 0x10 + 0x28);
    do {
      if (uVar20 == uVar18) {
        func_0x000107c6142c(puVar11);
        puVar11 = puVar12;
        func_0x000100403a6c(puVar12);
        func_0x000107c61574(puVar12);
        func_0x000101bc40c0(param_1);
        if (puVar13 == (undefined *)0x0) {
          uVar16 = 0;
        }
        else {
          uVar18 = 0;
          func_0x0001000f66f0(0x2a,0xe100000000000000,puVar11);
          if ((uVar18 & 1) == 0) {
            func_0x0001000f66f0(param_1,puVar13,puVar11);
            uVar16 = (uint)param_1;
            puVar12 = puVar13;
          }
          else {
            uVar16 = 1;
            puVar12 = puVar11;
            puVar11 = puVar13;
          }
          func_0x000107c6142c(puVar12);
        }
        func_0x000107c6142c(puVar11);
        return uVar16 & 1;
      }
      if (*(ulong *)(puVar11 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101bc468c);
        (*pcVar6)();
      }
      uVar2 = puVar15[-1];
      uVar5 = *puVar15;
      puVar15 = puVar15 + 2;
      uVar18 = uVar18 + 1;
      uVar3 = uVar2 & 0xffffffffffff;
      if ((uVar5 & 0x2000000000000000) != 0) {
        uVar3 = uVar5 >> 0x38 & 0xf;
      }
    } while (uVar3 == 0);
    func_0x000107c61434(uVar5);
    puVar10 = puVar12;
    func_0x000107c61558();
    puStack_90 = puVar12;
    if (((ulong)puVar10 & 1) == 0) {
      puVar13 = (undefined *)(*(long *)(puVar12 + 0x10) + 1);
      func_0x000100403514(0,puVar13,1);
    }
    uVar3 = *(ulong *)(puStack_90 + 0x10);
    puVar12 = (undefined *)(uVar3 + 1);
    if (*(ulong *)(puStack_90 + 0x18) >> 1 <= uVar3) {
      puVar13 = puVar12;
      func_0x000100403514(1 < *(ulong *)(puStack_90 + 0x18),puVar12,1);
    }
    *(undefined **)(puStack_90 + 0x10) = puVar12;
    *(ulong *)(puStack_90 + uVar3 * 0x10 + 0x20) = uVar2;
    *(ulong *)(puStack_90 + uVar3 * 0x10 + 0x28) = uVar5;
    puVar12 = puStack_90;
  } while( true );
}



/* Entry: 101bc468c; end: 101bc469b;  */

undefined1  [16] FUN_101bc468c(void)

{
  return ZEXT816(0x1104526f8);
}



/* Entry: 101bc469c; end: 101bc4717;  */

uint FUN_101bc469c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101a4b0c8(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 101bc4718; end: 101bc4743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc4718(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4da94(uVar2);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5cb2c();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    puVar4 = &UNK_1104526a8;
    func_0x000107c613fc(&UNK_1104526a8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar1);
    uStack_58 = 0x101bc473c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_100b5fdac;
    puStack_60 = &UNK_110452758;
    ppuVar5 = &puStack_78;
    puStack_50 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_50);
    uVar2 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c3d65c(*(undefined8 *)(lVar1 + _DAT_112e07a40));
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 101bc4744; end: 101bc476f;  */

void FUN_101bc4744(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101bc4770; end: 101bc4797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc4770(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4da74(uVar2);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5cb2c();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    puVar4 = &UNK_1104526a8;
    func_0x000107c613fc(&UNK_1104526a8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar1);
    uStack_58 = 0x101bc4778;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_100b5fdac;
    puStack_60 = &UNK_1104527d0;
    ppuVar5 = &puStack_78;
    puStack_50 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_50);
    uVar2 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c3d65c(*(undefined8 *)(lVar1 + _DAT_112e07a40));
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 101bc4798; end: 101bc4803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc4798(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_101bc4b48();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e07a98) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101bc4804; end: 101bc480b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc4804(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_101bc4b48();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e07a98) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 101bc480c; end: 101bc4857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc480c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e07a98) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101bc4858; end: 101bc48f3; -[_TtC28MemoriesTweaksImplementation25MemoriesCOFTweaksProvider sendPreservesSelectionOrder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101bc4858(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f002800);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101bc48f4; end: 101bc498f; -[_TtC28MemoriesTweaksImplementation25MemoriesCOFTweaksProvider displaysSelectionOrder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101bc48f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f002830);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101bc4990; end: 101bc4a2b; -[_TtC28MemoriesTweaksImplementation25MemoriesCOFTweaksProvider selectsWholeStoryInMyEyesOnly] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101bc4990(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f002850);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101bc4a2c; end: 101bc4ac7; -[_TtC28MemoriesTweaksImplementation25MemoriesCOFTweaksProvider defersBackupSchedulingDuringExport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101bc4a2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000032;
  func_0x000107c5fadc(0xd000000000000032,0x800000010f002870);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101bc4ac8; end: 101bc4b27; -[_TtC28MemoriesTweaksImplementation25MemoriesCOFTweaksProvider init] */

void FUN_101bc4ac8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesTweaksImplementation.MemoriesCOFTweaksProvider",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bc4af4);
  (*pcVar1)();
}



/* Entry: 101bc4b28; end: 101bc4b37;  */

undefined1  [16] FUN_101bc4b28(void)

{
  return ZEXT816(0x110452808);
}



/* Entry: 101bc4b38; end: 101bc4b47; -[_TtC28MemoriesTweaksImplementation25MemoriesCOFTweaksProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc4b38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e07a98));
  return;
}



/* Entry: 101bc4b48; end: 101bc4b67;  */

void FUN_101bc4b48(void)

{
  func_0x000107c61168(&PTR_PTR_1127fc4e0);
  return;
}



/* Entry: 101bc4b68; end: 101bc4b83;  */

undefined1 FUN_101bc4b68(void)

{
  return uRam0000000112e07b50;
}



/* Entry: 101bc4b84; end: 101bc4b9f;  */

void FUN_101bc4b84(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101bc4ba0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101bc4ba0; end: 101bc4dff;  */

undefined * FUN_101bc4ba0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101bc4cd0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112e07b98;
    func_0x0001000285a8(0x112e07b98,&UNK_10d9dc270);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e07ba0;
    func_0x0001000285a8(0x112e07ba0,&UNK_10dc1ee40);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101bc4e00; end: 101bc5613;  */

undefined * FUN_101bc4e00(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  long extraout_x8;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  code *pcVar26;
  undefined8 *puVar27;
  undefined1 auStack_100 [8];
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar6 = 0;
  func_0x000107c5eb9c();
  lStack_d8 = *(long *)(lVar6 + -8);
  lStack_b8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  uVar11 = uRam0000000112e07ad0;
  uVar3 = uRam0000000112e07ac8;
  puStack_e0 = auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_78 = 0x2c;
  uStack_70 = 0xe100000000000000;
  puStack_90 = &uStack_78;
  func_0x000107c61434(uRam0000000112e07ad0);
  lVar6 = 0x7fffffffffffffff;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_101bc5634,&puStack_a0,uVar3,uVar11);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar22 = *(ulong *)(lVar6 + 0x10);
  if (uVar22 == 0) {
    func_0x000107c6142c(lVar6);
    uVar22 = *(ulong *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101bc4b84(0,uVar22,0);
    uVar19 = 0;
    lVar21 = lVar6 + 0x20;
    lStack_f8 = lVar6;
    lStack_f0 = lVar21;
    uStack_e8 = uVar22;
    do {
      puVar1 = (ulong *)(lVar21 + uVar19 * 0x20);
      puVar15 = (undefined *)*puVar1;
      uVar16 = puVar1[1];
      uVar24 = (ulong)puVar15 >> 0xe;
      uVar25 = uVar16 >> 0xe;
      puVar10 = puVar8;
      puVar7 = puStack_a0;
      if (uVar24 != uVar25) {
        uVar22 = puVar1[2];
        uVar17 = puVar1[3];
        uStack_c0 = uVar19;
        puStack_b0 = puStack_a0;
        func_0x000107c61438(uVar17,2);
        puVar7 = puVar15;
        puStack_a8 = puVar8;
        puVar8 = puVar15;
        do {
          while ((puVar10 = puVar7, puVar14 = puVar15,
                 func_0x000107c601b4(puVar7,puVar15,uVar16,uVar22,uVar17),
                 puVar10 == (undefined *)0x3a && (puVar14 == (undefined *)0xe100000000000000))) {
            func_0x000107c6142c(0xe100000000000000);
LAB_101bc4ff8:
            if ((ulong)puVar8 >> 0xe != uVar24) {
              if (uVar24 < (ulong)puVar8 >> 0xe) {
                    /* WARNING: Does not return */
                pcVar26 = (code *)SoftwareBreakpoint(1,0x101bc55f8);
                (*pcVar26)();
              }
              puVar14 = puVar7;
              puVar18 = puVar15;
              uVar19 = uVar16;
              func_0x000107c601b8();
              puVar10 = puStack_a8;
              func_0x000107c61558();
              puVar9 = puStack_a8;
              uStack_d0 = uVar19;
              puStack_c8 = puVar18;
              if (((ulong)puVar10 & 1) == 0) {
                puVar9 = (undefined *)0x0;
                func_0x0001014788a4(0,*(long *)(puStack_a8 + 0x10) + 1,1);
              }
              uVar19 = *(ulong *)(puVar9 + 0x10);
              if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar19) {
                puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
                func_0x0001014788a4(puVar9,uVar19 + 1,1);
              }
              *(ulong *)(puVar9 + 0x10) = uVar19 + 1;
              *(undefined **)(puVar9 + uVar19 * 0x20 + 0x20) = puVar8;
              *(undefined **)(puVar9 + uVar19 * 0x20 + 0x28) = puVar14;
              *(undefined **)(puVar9 + uVar19 * 0x20 + 0x30) = puStack_c8;
              *(ulong *)(puVar9 + uVar19 * 0x20 + 0x38) = uStack_d0;
              puStack_a8 = puVar9;
            }
            func_0x000107c601a4(puVar7,puVar15,uVar16,uVar22,uVar17);
            uVar24 = (ulong)puVar7 >> 0xe;
            puVar8 = puVar7;
            if (uVar24 == uVar25) goto LAB_101bc50a0;
          }
          func_0x000107c605b8();
          func_0x000107c6142c(puVar14);
          if (((ulong)puVar10 & 1) != 0) goto LAB_101bc4ff8;
          func_0x000107c601a4(puVar7,puVar15,uVar16,uVar22,uVar17);
          uVar24 = (ulong)puVar7 >> 0xe;
        } while (uVar24 != uVar25);
LAB_101bc50a0:
        if ((ulong)puVar8 >> 0xe == uVar25) {
          func_0x000107c6142c(uVar17);
          puVar7 = puStack_b0;
        }
        else {
          if (uVar25 < (ulong)puVar8 >> 0xe) {
                    /* WARNING: Does not return */
            pcVar26 = (code *)SoftwareBreakpoint(1,0x101bc5604);
            (*pcVar26)();
          }
          uVar22 = uVar16;
          func_0x000107c601b8();
          func_0x000107c6142c(uVar17);
          puVar7 = puStack_a8;
          func_0x000107c61558();
          puVar10 = puStack_a8;
          if (((ulong)puVar7 & 1) == 0) {
            puVar10 = (undefined *)0x0;
            func_0x0001014788a4(0,*(long *)(puStack_a8 + 0x10) + 1,1);
          }
          puVar7 = puStack_b0;
          uVar19 = *(ulong *)(puVar10 + 0x10);
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar19) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
            func_0x0001014788a4(puVar10,uVar19 + 1,1);
          }
          *(ulong *)(puVar10 + 0x10) = uVar19 + 1;
          *(undefined **)(puVar10 + uVar19 * 0x20 + 0x20) = puVar8;
          *(ulong *)(puVar10 + uVar19 * 0x20 + 0x28) = uVar16;
          *(undefined **)(puVar10 + uVar19 * 0x20 + 0x30) = puVar15;
          *(ulong *)(puVar10 + uVar19 * 0x20 + 0x38) = uVar22;
          puStack_a8 = puVar10;
        }
        func_0x000107c6142c(uVar17);
        uVar19 = uStack_c0;
        lVar21 = lStack_f0;
        puVar10 = puStack_a8;
        uVar22 = uStack_e8;
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      uVar16 = *(ulong *)(puVar7 + 0x10);
      puStack_a0 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar16) {
        FUN_101bc4b84(1 < *(ulong *)(puVar7 + 0x18),uVar16 + 1,1);
      }
      puVar15 = puStack_a0;
      uVar19 = uVar19 + 1;
      *(ulong *)(puStack_a0 + 0x10) = uVar16 + 1;
      *(undefined **)(puStack_a0 + uVar16 * 8 + 0x20) = puVar10;
    } while (uVar19 != uVar22);
    func_0x000107c6142c(lStack_f8);
    uVar22 = *(ulong *)(puVar15 + 0x10);
  }
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar22 != 0) {
    puStack_c8 = puVar15 + 0x20;
    uStack_d0 = uVar22 - 1;
    puVar8 = puStack_c8;
    puVar7 = PTR___sSsN_11034e1d8;
    uVar19 = 0;
    uStack_c0 = uVar22;
    puStack_b0 = puVar15;
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      while( true ) {
        if (*(ulong *)(puVar15 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar26 = (code *)SoftwareBreakpoint(1,0x101bc55ec);
          (*pcVar26)();
        }
        lVar6 = *(long *)(puVar8 + uVar19 * 8);
        if (*(long *)(lVar6 + 0x10) == 2) break;
LAB_101bc5250:
        uVar19 = uVar19 + 1;
        if (uVar22 == uVar19) goto LAB_101bc542c;
      }
      puStack_90 = *(undefined8 **)(lVar6 + 0x30);
      uVar3 = *(undefined8 *)(lVar6 + 0x38);
      uStack_98 = *(undefined8 *)(lVar6 + 0x28);
      puStack_a0 = *(undefined **)(lVar6 + 0x20);
      uStack_88 = uVar3;
      func_0x000107c61434(lVar6);
      uVar11 = uVar3;
      func_0x000107c61434(uVar3);
      puVar4 = puStack_e0;
      func_0x000107c5eb68(puStack_e0);
      func_0x000101478db0();
      puVar12 = puVar4;
      puVar8 = puVar7;
      func_0x000107c601f0(puVar4,puVar7,uVar11);
      pcVar26 = *(code **)(lStack_d8 + 8);
      (*pcVar26)(puVar4,lStack_b8);
      func_0x000107c6142c(uVar3);
      if (*(ulong *)(lVar6 + 0x10) < 2) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x101bc55fc);
        (*pcVar26)();
      }
      puStack_90 = *(undefined8 **)(lVar6 + 0x50);
      uVar3 = *(undefined8 *)(lVar6 + 0x58);
      uStack_98 = *(undefined8 *)(lVar6 + 0x48);
      puStack_a0 = *(undefined **)(lVar6 + 0x40);
      uStack_88 = uVar3;
      func_0x000107c61434(uVar3);
      func_0x000107c5eb68(puVar4);
      puVar13 = puVar4;
      func_0x000107c601f0(puVar4,puVar7,uVar11);
      func_0x000107c6142c(lVar6);
      (*pcVar26)(puVar4,lStack_b8);
      func_0x000107c6142c(uVar3);
      uVar22 = (ulong)puVar12 & 0xffffffffffff;
      if (((ulong)puVar8 & 0x2000000000000000) != 0) {
        uVar22 = (ulong)puVar8 >> 0x38 & 0xf;
      }
      if (uVar22 == 0) {
LAB_101bc5230:
        func_0x000107c6142c(puVar8);
        func_0x000107c6142c(puVar7);
        uVar22 = uStack_c0;
        puVar8 = puStack_c8;
        puVar7 = PTR___sSsN_11034e1d8;
        puVar15 = puStack_b0;
        goto LAB_101bc5250;
      }
      uVar22 = (ulong)puVar13 & 0xffffffffffff;
      if (((ulong)puVar7 & 0x2000000000000000) != 0) {
        uVar22 = (ulong)puVar7 >> 0x38 & 0xf;
      }
      if (uVar22 == 0) goto LAB_101bc5230;
      puVar10 = puStack_a8;
      func_0x000107c61558();
      puVar15 = puStack_b0;
      puVar14 = puStack_a8;
      if (((ulong)puVar10 & 1) == 0) {
        puVar14 = (undefined *)0x0;
        func_0x000101bc4cd0(0,*(long *)(puStack_a8 + 0x10) + 1,1);
      }
      uVar22 = *(ulong *)(puVar14 + 0x10);
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar22) {
        puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
        func_0x000101bc4cd0(puVar14,uVar22 + 1,1);
      }
      *(ulong *)(puVar14 + 0x10) = uVar22 + 1;
      *(undefined1 **)(puVar14 + uVar22 * 0x20 + 0x20) = puVar12;
      *(undefined **)(puVar14 + uVar22 * 0x20 + 0x28) = puVar8;
      *(undefined1 **)(puVar14 + uVar22 * 0x20 + 0x30) = puVar13;
      *(undefined **)(puVar14 + uVar22 * 0x20 + 0x38) = puVar7;
      bVar5 = uStack_d0 != uVar19;
      uVar22 = uStack_c0;
      puVar8 = puStack_c8;
      puVar7 = PTR___sSsN_11034e1d8;
      uVar19 = uVar19 + 1;
      puStack_a8 = puVar14;
    } while (bVar5);
  }
LAB_101bc542c:
  func_0x000107c6142c(puVar15);
  uVar22 = *(ulong *)(puStack_a8 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (uVar22 != 0) {
    uVar19 = 0;
    puVar27 = (undefined8 *)(puStack_a8 + 0x38);
    do {
      if (*(ulong *)(puStack_a8 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x101bc55f0);
        (*pcVar26)();
      }
      uVar16 = puVar27[-3];
      uVar24 = puVar27[-2];
      uVar3 = puVar27[-1];
      uVar11 = *puVar27;
      func_0x000107c61438(uVar24,2);
      func_0x000107c61438(uVar11,2);
      puVar15 = puVar8;
      func_0x000107c61558();
      uVar25 = uVar16;
      uVar17 = uVar24;
      puStack_a0 = puVar8;
      func_0x000100029284();
      uVar20 = (ulong)~(uint)uVar17 & 1;
      lVar6 = *(long *)(puVar8 + 0x10) + uVar20;
      if (SCARRY8(*(long *)(puVar8 + 0x10),uVar20)) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x101bc55f4);
        (*pcVar26)();
      }
      if (*(long *)(puVar8 + 0x18) < lVar6) {
        func_0x0001001833c8(lVar6,puVar15);
        uVar25 = uVar16;
        uVar20 = uVar24;
        func_0x000100029284();
        if (((uint)uVar17 & 1) != ((uint)uVar20 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar26 = (code *)SoftwareBreakpoint(1,0x101bc5614);
          (*pcVar26)();
        }
LAB_101bc5538:
        if ((uVar17 & 1) == 0) goto LAB_101bc5540;
LAB_101bc5454:
        puVar8 = puStack_a0;
        puVar2 = (undefined8 *)(*(long *)(puStack_a0 + 0x38) + uVar25 * 0x10);
        uVar23 = puVar2[1];
        *puVar2 = uVar3;
        puVar2[1] = uVar11;
        func_0x000107c6142c(uVar11);
        func_0x000107c61430(uVar24,2);
        func_0x000107c6142c(uVar23);
      }
      else {
        if (((ulong)puVar15 & 1) != 0) goto LAB_101bc5538;
        func_0x000100184498();
        if ((uVar17 & 1) != 0) goto LAB_101bc5454;
LAB_101bc5540:
        puVar8 = puStack_a0;
        *(ulong *)(puStack_a0 + (uVar25 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_a0 + (uVar25 >> 6) * 8 + 0x40) | 1L << (uVar25 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puStack_a0 + 0x30) + uVar25 * 0x10);
        *puVar1 = uVar16;
        puVar1[1] = uVar24;
        puVar2 = (undefined8 *)(*(long *)(puStack_a0 + 0x38) + uVar25 * 0x10);
        *puVar2 = uVar3;
        puVar2[1] = uVar11;
        func_0x000107c6142c(uVar11);
        func_0x000107c6142c(uVar24);
        if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar26 = (code *)SoftwareBreakpoint(1,0x101bc5600);
          (*pcVar26)();
        }
        *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      }
      uVar19 = uVar19 + 1;
      puVar27 = puVar27 + 4;
    } while (uVar22 != uVar19);
  }
  func_0x000107c6142c();
  return puVar8;
}



/* Entry: 101bc5614; end: 101bc5633;  */

undefined1  [16] FUN_101bc5614(void)

{
  return ZEXT816(0x110452848);
}



/* Entry: 101bc5634; end: 101bc5687;  */

uint FUN_101bc5634(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 101bc5688; end: 101bc56af;  */

void FUN_101bc5688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110dbf1d8;
  ppuVar3 = &PTR____CFConstantStringClassReference_110e50838;
  lVar1 = 0;
  uStack_80 = param_3;
  uStack_78 = param_1;
  func_0x000107c5ec24();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dbf1d8);
  uVar6 = param_3;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e50838);
  func_0x000107c5ec20(lVar9);
  func_0x000107c5ec10(0x7461686370616e73,0xe800000000000000);
  func_0x000107c5ebf0(0x74616863,0xe400000000000000);
  uStack_70 = 0x2f;
  uStack_68 = 0xe100000000000000;
  func_0x000107c5fb78(ppuVar2,param_3);
  func_0x000107c5ebf8(uStack_70,uStack_68);
  lVar4 = 0x112d70260;
  func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
  lVar5 = 0;
  func_0x000107c5ebbc();
  lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar11 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  func_0x000107c613fc(lVar4,uVar11 + lVar10 * 2,uVar7 | 7);
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  lVar5 = lVar4 + uVar11;
  func_0x000107c5ebb0(lVar5,ppuVar3,uVar6,param_2,uStack_80);
  func_0x000107c5ebb0(lVar5 + lVar10,0x72656665725f6373,0xeb00000000726572,0x732d6d6574737973,
                      0xed00006863726165);
  func_0x000107c5ebc8(lVar4);
  func_0x000107c5ebe8(uStack_78);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(uVar6);
  (**(code **)(lVar8 + 8))(lVar9,lVar1);
  return;
}



/* Entry: 101bc56b0; end: 101bc589b;  */

void FUN_101bc56b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_80 = param_3;
  uStack_78 = param_1;
  func_0x000107c5ec24();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar7 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec(param_4);
  uVar4 = param_3;
  func_0x000107c5faec(param_5);
  func_0x000107c5ec20(lVar7);
  func_0x000107c5ec10(0x7461686370616e73,0xe800000000000000);
  func_0x000107c5ebf0(0x74616863,0xe400000000000000);
  uStack_70 = 0x2f;
  uStack_68 = 0xe100000000000000;
  func_0x000107c5fb78(param_4,param_3);
  func_0x000107c5ebf8(uStack_70,uStack_68);
  lVar2 = 0x112d70260;
  func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
  lVar3 = 0;
  func_0x000107c5ebbc();
  lVar8 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar9 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  func_0x000107c613fc(lVar2,uVar9 + lVar8 * 2,uVar5 | 7);
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  lVar3 = lVar2 + uVar9;
  func_0x000107c5ebb0(lVar3,param_5,uVar4,param_2,uStack_80);
  func_0x000107c5ebb0(lVar3 + lVar8,0x72656665725f6373,0xeb00000000726572,0x732d6d6574737973,
                      0xed00006863726165);
  func_0x000107c5ebc8(lVar2);
  func_0x000107c5ebe8(uStack_78);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(uVar4);
  (**(code **)(lVar6 + 8))(lVar7,lVar1);
  return;
}



/* Entry: 101bc589c; end: 101bc58eb;  */

void FUN_101bc589c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e07ba8 != 0) {
    return;
  }
  puVar1 = &UNK_110452938;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e07ba8 = param_1;
  return;
}



/* Entry: 101bc58ec; end: 101bc5947;  */

long FUN_101bc58ec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101bc5948; end: 101bc5a17;  */

undefined1 * FUN_101bc5948(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 101bc5a18; end: 101bc5a6b;  */

undefined1 * FUN_101bc5a18(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c61170(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101bc5a6c; end: 101bc5b33;  */

int FUN_101bc5a6c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101bc5b34; end: 101bc5c5f;  */

void FUN_101bc5b34(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x240);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 600) = lVar1;
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x228);
    *(long *)(unaff_x22 + 0x1f8) = unaff_x22 + 0x210;
    *(long *)(unaff_x22 + 0x1d0) = unaff_x22;
    *(code **)(unaff_x22 + 0x1d8) = FUN_101bc5c60;
    lVar2 = unaff_x22 + 0x1d0;
    func_0x000107c61448(lVar2,0);
    func_0x000107c614f0(uVar4);
    func_0x000100bcb214();
    puVar3 = &UNK_1104529f8;
    func_0x000107c613fc(&UNK_1104529f8,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    *(code **)(unaff_x22 + 0x188) = FUN_101bc852c;
    *(undefined **)(unaff_x22 + 400) = puVar3;
    *(undefined **)(unaff_x22 + 0x168) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x170) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x178) = &UNK_100f6151c;
    *(undefined **)(unaff_x22 + 0x180) = &UNK_110452a10;
    lVar2 = unaff_x22 + 0x168;
    func_0x000107c60bc4(lVar2);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 400));
    func_0x000107c4d320(lVar1);
    func_0x000107c60bd0(lVar2);
    func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x1d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101bc5c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bc5c60; end: 101bc5c9f;  */

void FUN_101bc5c60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc5ca0,0,0);
  return;
}



/* Entry: 101bc5ca0; end: 101bc6417;  */

void FUN_101bc5ca0(void)

{
  int iVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long unaff_x22;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  
  uVar18 = *(ulong *)(unaff_x22 + 0x210);
  *(ulong *)(unaff_x22 + 0x260) = uVar18;
  if (uVar18 == 0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 600);
    goto LAB_101bc5dd8;
  }
  if (uVar18 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
    *(ulong *)(unaff_x22 + 0x268) = uVar13;
  }
  else {
    uVar13 = uVar18;
    if (-1 < (long)uVar18) {
      uVar13 = uVar18 & 0xffffffffffffff8;
    }
    func_0x000107c60480();
    *(ulong *)(unaff_x22 + 0x268) = uVar13;
  }
  if (uVar13 == 0) {
    piVar17 = *(int **)(unaff_x22 + 0x230);
    func_0x000107c6142c(uVar18);
    iVar1 = *piVar17;
    plVar6 = (long *)(ulong)(uint)piVar17[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x310) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_101bc70c8;
                    /* WARNING: Could not recover jumptable at 0x000101bc6404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar17))(PTR___swiftEmptyArrayStorage_11034f1c8);
    return;
  }
  lVar5 = *(long *)(unaff_x22 + 0x250);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    if (0 < (long)uVar13) {
      lVar10 = 0x20;
      goto LAB_101bc5d48;
    }
  }
  else {
    lVar10 = lVar5;
    func_0x000107c5c644();
    func_0x000107c615e8(lVar5);
    if (lVar10 < 1) {
      if (0 < (long)uVar13) {
        lVar10 = 1;
        goto LAB_101bc5d48;
      }
    }
    else if (0 < (long)uVar13) {
LAB_101bc5d48:
      *(long *)(unaff_x22 + 0x270) = lVar10;
      uVar14 = 0x112e07bb0;
      func_0x0001000285a8(0x112e07bb0,&UNK_10d9dc3e0);
      *(undefined8 *)(unaff_x22 + 0x278) = uVar14;
      uVar14 = 0x112e07bb8;
      func_0x0001000285a8(0x112e07bb8,&UNK_10d9dc310);
      *(undefined8 *)(unaff_x22 + 0x280) = uVar14;
      uVar4 = 2;
      uVar18 = 0;
      func_0x000100029b9c(2,0x12,0);
      *(undefined4 *)(unaff_x22 + 800) = uVar4;
      lVar10 = *(long *)(unaff_x22 + 0x270);
      *(long *)(unaff_x22 + 0x288) = lVar10;
      lVar5 = *(long *)(unaff_x22 + 0x268);
      if (lVar10 <= *(long *)(unaff_x22 + 0x268)) {
        lVar5 = lVar10;
      }
      *(long *)(unaff_x22 + 0x290) = lVar5;
      if (lVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101bc640c);
        (*pcVar3)();
      }
      uVar13 = *(ulong *)(unaff_x22 + 0x260);
      if (uVar13 >> 0x3e == 0) {
        uVar13 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
      }
      else {
        if (-1 < (long)uVar13) {
          uVar13 = uVar13 & 0xffffffffffffff8;
        }
        func_0x000107c60480();
        if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101bc6414);
          (*pcVar3)();
        }
        uVar13 = *(ulong *)(unaff_x22 + 0x260);
        if (-1 < (long)uVar13) {
          uVar13 = uVar13 & 0xffffffffffffff8;
        }
        func_0x000107c60480();
      }
      if ((long)uVar13 < lVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101bc6410);
        (*pcVar3)();
      }
      uVar13 = *(ulong *)(unaff_x22 + 0x260);
      if ((uVar13 & 0xc000000000000001) == 0) {
        func_0x000107c61434(uVar13);
      }
      else {
        if (lVar5 == 0) {
          func_0x000107c61434(uVar13);
        }
        else {
          uVar14 = 0;
          FUN_101994830(0);
          func_0x000107c61434(uVar13);
          lVar10 = 0;
          do {
            lVar20 = lVar10 + 1;
            func_0x000107c60318(lVar10,*(undefined8 *)(unaff_x22 + 0x260),uVar14);
            lVar10 = lVar20;
          } while (lVar5 != lVar20);
          uVar13 = *(ulong *)(unaff_x22 + 0x260);
        }
        if (uVar13 >> 0x3e != 0) {
          func_0x000107c6142c(uVar13);
          uVar24 = uVar13;
          if (-1 < (long)uVar13) {
            uVar24 = uVar13 & 0xffffffffffffff8;
          }
          uVar13 = 0;
          func_0x000107c60484();
          goto LAB_101bc5ee8;
        }
      }
      uVar24 = 0;
      uVar18 = lVar5 << 1 | 1;
      uVar13 = uVar13 & 0xffffffffffffff8;
      lVar5 = uVar13 + 0x20;
LAB_101bc5ee8:
      *(ulong *)(unaff_x22 + 0x298) = uVar13;
      *(ulong *)(unaff_x22 + 0x120) = uVar13;
      *(long *)(unaff_x22 + 0x128) = lVar5;
      *(ulong *)(unaff_x22 + 0x130) = uVar24;
      *(ulong *)(unaff_x22 + 0x138) = uVar18;
      *(undefined1 *)(unaff_x22 + 0x140) = *(undefined1 *)(unaff_x22 + 0x324);
      *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x248);
      *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x240);
      *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x250);
      *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x228);
      if (*(int *)(unaff_x22 + 800) != 0) {
        plVar6 = (long *)(ulong)*(uint *)(
                                         PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                         + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x2a0) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_101bc6418;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
        )(plVar6,unaff_x22 + 0x218,*(undefined8 *)(unaff_x22 + 0x278),
          *(undefined8 *)(unaff_x22 + 0x280),0,0,&UNK_10d9dc318,unaff_x22 + 0x110,
          *(undefined8 *)(unaff_x22 + 0x278),*(undefined8 *)(unaff_x22 + 0x280));
        return;
      }
      lVar10 = unaff_x22 + 0x10;
      func_0x000107c615ac(lVar10,*(undefined8 *)(unaff_x22 + 0x278));
      *(long *)(unaff_x22 + 0x220) = lVar10;
      lVar20 = (uVar18 >> 1) - uVar24;
      if (lVar20 != 0) {
        if ((long)(uVar18 >> 1) < (long)uVar24) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101bc6418);
          (*pcVar3)();
        }
        func_0x000107c615f0(uVar13);
        puVar15 = (undefined8 *)(lVar5 + uVar24 * 8);
        do {
          lVar5 = 0x112d453c8;
          uVar12 = *(undefined8 *)(unaff_x22 + 0x250);
          uVar21 = *(undefined8 *)(unaff_x22 + 0x248);
          uVar23 = *(undefined8 *)(unaff_x22 + 0x240);
          uVar2 = *(undefined1 *)(unaff_x22 + 0x324);
          uVar19 = *(ulong *)(unaff_x22 + 0x228);
          uVar14 = *puVar15;
          func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
          uVar18 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
          uVar7 = uVar18 & 0xfffffffffffffff0;
          func_0x000107c615b8();
          lVar5 = 0;
          func_0x000107c5fd0c();
          lVar22 = *(long *)(lVar5 + -8);
          (**(code **)(lVar22 + 0x38))(uVar7,1,1,lVar5);
          puVar8 = &UNK_110452a48;
          func_0x000107c613fc(&UNK_110452a48,0x50,7);
          *(long *)(puVar8 + 0x10) = 0;
          *(undefined8 *)(puVar8 + 0x18) = 0;
          puVar8[0x20] = uVar2;
          *(undefined8 *)(puVar8 + 0x28) = uVar23;
          *(undefined8 *)(puVar8 + 0x30) = uVar21;
          *(undefined8 *)(puVar8 + 0x38) = uVar12;
          *(undefined8 *)(puVar8 + 0x40) = uVar14;
          *(ulong *)(puVar8 + 0x48) = uVar19;
          uVar18 = uVar18 & 0xfffffffffffffff0;
          func_0x000107c615b8();
          func_0x000101bc8860(uVar7,uVar18,0x112d453c8,&UNK_10d90ac60);
          uVar24 = uVar18;
          (**(code **)(lVar22 + 0x30))(uVar18,1,lVar5);
          func_0x000107c61174(uVar14);
          func_0x000107c61174();
          func_0x000107c61174(uVar23);
          func_0x000107c61174(uVar21);
          func_0x000107c61174(uVar12);
          func_0x000107c615f0(uVar19);
          if ((int)uVar24 == 1) {
            func_0x000101bc88ec(uVar18,0x112d453c8,&UNK_10d90ac60);
            uVar24 = 0x3100;
          }
          else {
            func_0x000107c5fd08();
            (**(code **)(lVar22 + 8))(uVar18,lVar5);
            uVar24 = uVar19 & 0xff | 0x3100;
          }
          func_0x000107c615c0(uVar18);
          lVar5 = *(long *)(puVar8 + 0x10);
          if (lVar5 == 0) {
            lVar22 = 0;
            lVar16 = 0;
          }
          else {
            lVar16 = *(long *)(puVar8 + 0x18);
            lVar22 = lVar5;
            func_0x000107c614f0();
            func_0x000107c615f0(lVar5);
            func_0x000107c5fca8();
            func_0x000107c615e8(lVar5);
          }
          puVar9 = &UNK_110452a70;
          func_0x000107c613fc(&UNK_110452a70,0x20,7);
          *(undefined **)(puVar9 + 0x10) = &UNK_10d9dc338;
          *(undefined **)(puVar9 + 0x18) = puVar8;
          func_0x000107c6157c(puVar8);
          if (lVar16 == 0 && lVar22 == 0) {
            puVar11 = (undefined8 *)0x0;
          }
          else {
            *(undefined8 *)(unaff_x22 + 0x198) = 0;
            *(undefined8 *)(unaff_x22 + 0x1a0) = 0;
            *(long *)(unaff_x22 + 0x1a8) = lVar22;
            *(long *)(unaff_x22 + 0x1b0) = lVar16;
            puVar11 = (undefined8 *)(unaff_x22 + 0x198);
          }
          *(undefined8 *)(unaff_x22 + 0x1b8) = 1;
          *(undefined8 **)(unaff_x22 + 0x1c0) = puVar11;
          *(long *)(unaff_x22 + 0x1c8) = lVar10;
          func_0x000107c615bc(uVar24,unaff_x22 + 0x1b8,*(undefined8 *)(unaff_x22 + 0x278),
                              &UNK_10d9dc340,puVar9);
          func_0x000107c61574(puVar8);
          func_0x000107c61170(uVar14);
          func_0x000107c61574(uVar24);
          func_0x000101bc88ec(uVar7,0x112d453c8,&UNK_10d90ac60);
          func_0x000107c615c0(uVar7);
          lVar20 = lVar20 + -1;
          puVar15 = puVar15 + 1;
        } while (lVar20 != 0);
        func_0x000107c615e8(uVar13);
      }
      lVar20 = *(long *)(unaff_x22 + 0x278);
      lVar5 = 0x112e07bc0;
      func_0x0001000285a8(0x112e07bc0,&UNK_10d9dc348);
      *(long *)(unaff_x22 + 0x2a8) = lVar5;
      lVar5 = *(long *)(lVar5 + -8);
      *(long *)(unaff_x22 + 0x2b0) = lVar5;
      uVar18 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0x2b8) = uVar18;
      func_0x000107c5fcc4(uVar18,lVar10,lVar20);
      lVar5 = *(long *)(lVar20 + -8);
      *(long *)(unaff_x22 + 0x2c0) = lVar5;
      lVar5 = *(long *)(lVar5 + 0x40);
      *(long *)(unaff_x22 + 0x2c8) = lVar5;
      *(undefined **)(unaff_x22 + 0x2d0) = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar18 = lVar5 + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0x2d8) = uVar18;
      lVar5 = 0x112e07bc8;
      func_0x0001000285a8(0x112e07bc8,&UNK_10d9dc350);
      uVar13 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0x2e0) = uVar13;
      uVar18 = uVar13;
      FUN_101bc87c0();
      plVar6 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x2e8) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_101bc6460;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
                (plVar6,uVar13,*(undefined8 *)(unaff_x22 + 0x2a8),uVar18);
      return;
    }
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 600);
  func_0x000107c6142c(uVar18);
LAB_101bc5dd8:
  func_0x000107c615e8(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000101bc5e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bc6418; end: 101bc645f;  */

void FUN_101bc6418(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x2a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc6980,0,0);
  return;
}



/* Entry: 101bc6460; end: 101bc64f7;  */

void FUN_101bc6460(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x2e8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bc64f8;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x2d0);
    uVar3 = *(undefined8 *)(lVar4 + 0x2b8);
    lVar6 = *(long *)(lVar4 + 0x2b0);
    uVar5 = *(undefined8 *)(lVar4 + 0x2a8);
    func_0x000107c614ac();
    func_0x000107c6142c(uVar2);
    (**(code **)(lVar6 + 8))(uVar3,uVar5);
    pcVar1 = FUN_101bc68bc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bc64f8; end: 101bc68bb;  */

void FUN_101bc64f8(void)

{
  byte bVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x22;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar8 = uVar9;
  (**(code **)(*(long *)(unaff_x22 + 0x2c0) + 0x30))(uVar9,1,*(undefined8 *)(unaff_x22 + 0x278));
  if ((int)uVar8 == 1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2b8);
    (**(code **)(*(long *)(unaff_x22 + 0x2b0) + 8))(uVar10,*(undefined8 *)(unaff_x22 + 0x2a8));
    func_0x000101bc88ec(uVar9,0x112e07bc8,&UNK_10d9dc350);
    func_0x000107c615c0(uVar9);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar10);
    *(undefined8 *)(unaff_x22 + 0x218) = uVar12;
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x2f0) = plVar3;
    func_0x0001000285a8(0x112e07bd8,&UNK_10d9dc358);
    *plVar3 = unaff_x22;
    plVar3[1] = 0x101bc68fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2d8);
  lVar7 = *(long *)(unaff_x22 + 0x2c8);
  func_0x000101bc8810(uVar9,uVar8);
  func_0x000107c615c0(uVar9);
  uVar4 = lVar7 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  func_0x000101bc8860(uVar8,uVar4,0x112e07bb0,&UNK_10d9dc3e0);
  lVar7 = 0;
  FUN_101bcbb4c();
  lVar15 = *(long *)(lVar7 + -8);
  uVar11 = uVar4;
  (**(code **)(lVar15 + 0x30))(uVar4,1,lVar7);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((int)uVar11 != 1) {
    uVar11 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar11);
    func_0x000101bc88a8(uVar4,uVar11);
    puVar5 = (undefined *)0x112e07be0;
    func_0x0001000285a8(0x112e07be0,&UNK_10d9dc360);
    bVar1 = *(byte *)(lVar15 + 0x50);
    func_0x000107c613fc();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    func_0x000101bc88a8(uVar11,puVar5 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)))
    ;
    func_0x000107c615c0(uVar11);
  }
  lVar13 = *(long *)(unaff_x22 + 0x2d0);
  func_0x000107c615c0(uVar4);
  uVar11 = *(ulong *)(puVar5 + 0x10);
  lVar13 = *(long *)(lVar13 + 0x10);
  if (!SCARRY8(lVar13,uVar11)) {
    lVar6 = *(long *)(unaff_x22 + 0x2d0);
    func_0x000107c61434();
    func_0x000107c61558();
    lVar14 = *(long *)(unaff_x22 + 0x2d0);
    if (((int)lVar6 == 0) ||
       (uVar4 = *(ulong *)(lVar14 + 0x18) >> 1, (long)uVar4 < (long)(lVar13 + uVar11))) {
      FUN_101bcaab8();
      uVar4 = *(ulong *)(lVar6 + 0x18) >> 1;
      lVar13 = *(long *)(puVar5 + 0x10);
      lVar14 = lVar6;
    }
    else {
      lVar13 = *(long *)(puVar5 + 0x10);
    }
    if (lVar13 == 0) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x2d8);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x2d0));
      func_0x000107c6142c(puVar5);
      func_0x000101bc88ec(uVar8,0x112e07bb0,&UNK_10d9dc3e0);
      if (uVar11 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101bc68b4);
        (*pcVar2)();
      }
    }
    else {
      if (uVar4 - *(long *)(lVar14 + 0x10) < uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101bc68b8);
        (*pcVar2)();
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0x2d8);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x2d0);
      uVar4 = (ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff);
      func_0x000107c6140c(lVar14 + uVar4 + *(long *)(lVar15 + 0x48) * *(long *)(lVar14 + 0x10),
                          puVar5 + uVar4,uVar11,lVar7);
      func_0x000107c6142c(uVar9);
      func_0x000101bc88ec(uVar8,0x112e07bb0,&UNK_10d9dc3e0);
      func_0x000107c6142c(puVar5);
      if (uVar11 != 0) {
        if (SCARRY8(*(long *)(lVar14 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101bc68bc);
          (*pcVar2)();
        }
        *(ulong *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + uVar11;
      }
    }
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x2d8));
    *(long *)(unaff_x22 + 0x2d0) = lVar14;
    uVar11 = *(long *)(unaff_x22 + 0x2c8) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x2d8) = uVar11;
    lVar7 = 0x112e07bc8;
    func_0x0001000285a8(0x112e07bc8,&UNK_10d9dc350);
    uVar4 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x2e0) = uVar4;
    uVar11 = uVar4;
    FUN_101bc87c0();
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x2e8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101bc6460;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
              (plVar3,uVar4,*(undefined8 *)(unaff_x22 + 0x2a8),uVar11);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101bc68b0);
  (*pcVar2)();
}



/* Entry: 101bc68bc; end: 101bc697f;  */

/* WARNING: Possible PIC construction at 0x000101bc68dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bc68e0) */

void FUN_101bc68bc(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_dealloc_1103500f0)(*(undefined8 *)(unaff_x22 + 0x2e0));
  return;
}



/* Entry: 101bc6980; end: 101bc69e7;  */

void FUN_101bc6980(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  piVar3 = *(int **)(unaff_x22 + 0x230);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 0x2f8) = uVar4;
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x300) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101bc69e8;
                    /* WARNING: Could not recover jumptable at 0x000101bc69e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(uVar4);
  return;
}


