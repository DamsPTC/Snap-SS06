/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c1e9ac; end: 101c1e9e7;  */

void FUN_101c1e9ac(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c1e9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c1e9e8; end: 101c1ea27;  */

undefined8 FUN_101c1e9e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101c1ea28; end: 101c1eafb;  */

void FUN_101c1ea28(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  lVar2 = 0x112e093f0;
  func_0x0001000285a8(0x112e093f0,&UNK_10daa9a80);
  *(long *)(unaff_x22 + 0x28) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar1;
  lVar2 = 0x112e093f8;
  func_0x0001000285a8(0x112e093f8,&UNK_10d9df7e0);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar1;
  lVar2 = 0x112e09400;
  func_0x0001000285a8(0x112e09400,&UNK_10daa9a90);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1eafc,0,0);
  return;
}



/* Entry: 101c1eafc; end: 101c1ec4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c1eafc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar4 = *(long *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar8 = *(long *)(unaff_x22 + 0x10);
  uVar10 = *(undefined8 *)(lVar8 + _DAT_113091b70);
  func_0x000107c615f0(uVar10);
  func_0x000107c61170(lVar8);
  uVar5 = uVar10;
  func_0x000107c419f0();
  func_0x000107c61180();
  func_0x000107c615e8(uVar10);
  uVar10 = uVar5;
  func_0x0001000b637c();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar10;
  func_0x000107c61170(uVar5);
  (**(code **)(lVar4 + 0x68))
            (uVar1,*(undefined4 *)
                    PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             uVar2);
  func_0x0001000d52ec(uVar7,uVar1);
  (**(code **)(lVar4 + 8))(uVar1,uVar2);
  func_0x000107c5fd34(uVar9,uVar3);
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101c1ec50;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar6,unaff_x22 + 0x18,*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Entry: 101c1ec50; end: 101c1ec97;  */

void FUN_101c1ec50(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1ec98,0,0);
  return;
}



/* Entry: 101c1ec98; end: 101c1ee37;  */

/* WARNING: Removing unreachable block (ram,0x000101c1ecd4) */

void FUN_101c1ec98(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0x18);
  if (lVar6 != 0) {
    func_0x000107c5fd64();
    lVar1 = *(long *)(unaff_x22 + 0x60);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
    (**(code **)(lVar2 + 8))(uVar3,uVar8);
    (**(code **)(lVar1 + 8))(uVar4,uVar7);
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101c1ee34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar6);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x28));
  uVar4 = 0;
  func_0x000107c5fcbc(0);
  uVar5 = 0x112d4e4a0;
  FUN_101c1ee38(0x112d4e4a0,PTR___sScEMa_11034fba8,PTR___sScEs5ErrorsMc_11034fbb0);
  func_0x000107c613f8(uVar4,uVar5,0,0);
  func_0x000107c5f9d4(uVar5);
  func_0x000107c61654();
  func_0x000107c61574(uVar7);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101c1edbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c1ee38; end: 101c1ee77;  */

void FUN_101c1ee38(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101c1ee78; end: 101c1eec7;  */

void FUN_101c1ee78(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e09438 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e09428;
  func_0x00010002969c(0x112e09428,&UNK_10d9df810);
  puVar2 = &DAT_10dd3ca20;
  func_0x000107c61520(&DAT_10dd3ca20,uVar1);
  puRam0000000112e09438 = puVar2;
  return;
}



/* Entry: 101c1eec8; end: 101c1ef47;  */

undefined8 FUN_101c1eec8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101c1ef48; end: 101c1ef4f;  */

void FUN_101c1ef48(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c1e9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c1ef50; end: 101c1f007;  */

long * FUN_101c1ef50(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar4 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar2 = param_2;
    func_0x000107c614c4(param_2,param_3);
    if ((int)plVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar4 + 0x40));
      return param_1;
    }
    lVar4 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
    func_0x000107c6159c(param_1,param_3,0);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar3 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101c1f008; end: 101c1f04f;  */

void FUN_101c1f008(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x000107c614c4();
  if ((int)uVar1 != 0) {
    return;
  }
  lVar2 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000101c1f04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  return;
}



/* Entry: 101c1f050; end: 101c1f17f;  */

undefined8 FUN_101c1f050(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
  func_0x000107c6159c(param_1,param_3,0);
  return param_1;
}



/* Entry: 101c1f180; end: 101c1f1bb;  */

undefined8 FUN_101c1f180(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101c1f1bc();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101c1f1bc; end: 101c1f1f3;  */

void FUN_101c1f1bc(undefined8 param_1)

{
  if (lRam0000000112e094b0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e67afec);
  return;
}



/* Entry: 101c1f1f4; end: 101c1f323;  */

undefined8 FUN_101c1f1f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
  func_0x000107c6159c(param_1,param_3,0);
  return param_1;
}



/* Entry: 101c1f324; end: 101c1f353;  */

void FUN_101c1f324(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000101c1f32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 101c1f354; end: 101c1f3bf;  */

void FUN_101c1f354(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d9df840;
    func_0x000107c61528(param_1,0x100,2,&lStack_30);
  }
  return;
}



/* Entry: 101c1f3c0; end: 101c1f3eb;  */

void FUN_101c1f3c0(void)

{
  func_0x000101c1f6c8(0x112e09350,FUN_101c1f1bc,&UNK_10d9df8a0);
  return;
}



/* Entry: 101c1f3ec; end: 101c1f663;  */

undefined1  [16] FUN_101c1f3ec(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&uStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_101c1f1bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pcVar8 = (char *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_101c1f684();
  pcVar6 = pcVar8;
  func_0x000107c614c4(pcVar8,lVar5);
  iVar3 = (int)pcVar6;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      (**(code **)(lVar10 + 0x20))(lVar9,pcVar8,lVar4);
      uStack_50 = 0;
      uStack_48 = 0xe000000000000000;
      func_0x000107c602fc(0x38);
      func_0x000107c5fb78(0xd000000000000036,0x800000010f003be0);
      uVar7 = 0x112d4b608;
      func_0x000101c1f6c8(0x112d4b608,PTR___s10Foundation3URLVMa_110350988,
                          PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0);
      func_0x000107c6057c(lVar4,uVar7);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar7);
      uVar1 = uStack_48;
      uVar7 = uStack_50;
      (**(code **)(lVar10 + 8))(lVar9,lVar4);
      uStack_50 = uVar7;
      uStack_48 = uVar1;
    }
    else {
      cVar2 = *pcVar8;
      uStack_50 = 0;
      uStack_48 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(uStack_48);
      uStack_50 = 0xd000000000000020;
      uStack_48 = 0x800000010f003bb0;
      uVar7 = 0x746e6573657270;
      if (cVar2 == '\0') {
        uVar7 = 0x6c696e;
      }
      uVar1 = 0xe700000000000000;
      if (cVar2 == '\0') {
        uVar1 = 0xe300000000000000;
      }
      func_0x000107c5fb78(uVar7,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c5fb78(0x29,0xe100000000000000);
    }
  }
  else if (iVar3 == 2) {
    uStack_50 = 0xd000000000000023;
    uStack_48 = 0x800000010f003c80;
  }
  else if (iVar3 == 3) {
    uStack_50 = 0xd000000000000025;
    uStack_48 = 0x800000010f003c50;
  }
  else {
    uStack_50 = 0xd000000000000022;
    uStack_48 = 0x800000010f003c20;
  }
  auVar11._8_8_ = uStack_48;
  auVar11._0_8_ = uStack_50;
  return auVar11;
}



/* Entry: 101c1f664; end: 101c1f683;  */

undefined1  [16] FUN_101c1f664(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&uStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_101c1f1bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pcVar8 = (char *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_101c1f684();
  pcVar6 = pcVar8;
  func_0x000107c614c4(pcVar8,lVar5);
  iVar3 = (int)pcVar6;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      (**(code **)(lVar10 + 0x20))(lVar9,pcVar8,lVar4);
      uStack_50 = 0;
      uStack_48 = 0xe000000000000000;
      func_0x000107c602fc(0x38);
      func_0x000107c5fb78(0xd000000000000036,0x800000010f003be0);
      uVar7 = 0x112d4b608;
      func_0x000101c1f6c8(0x112d4b608,PTR___s10Foundation3URLVMa_110350988,
                          PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0);
      func_0x000107c6057c(lVar4,uVar7);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar7);
      uVar1 = uStack_48;
      uVar7 = uStack_50;
      (**(code **)(lVar10 + 8))(lVar9,lVar4);
      uStack_50 = uVar7;
      uStack_48 = uVar1;
    }
    else {
      cVar2 = *pcVar8;
      uStack_50 = 0;
      uStack_48 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(uStack_48);
      uStack_50 = 0xd000000000000020;
      uStack_48 = 0x800000010f003bb0;
      uVar7 = 0x746e6573657270;
      if (cVar2 == '\0') {
        uVar7 = 0x6c696e;
      }
      uVar1 = 0xe700000000000000;
      if (cVar2 == '\0') {
        uVar1 = 0xe300000000000000;
      }
      func_0x000107c5fb78(uVar7,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c5fb78(0x29,0xe100000000000000);
    }
  }
  else if (iVar3 == 2) {
    uStack_50 = 0xd000000000000023;
    uStack_48 = 0x800000010f003c80;
  }
  else if (iVar3 == 3) {
    uStack_50 = 0xd000000000000025;
    uStack_48 = 0x800000010f003c50;
  }
  else {
    uStack_50 = 0xd000000000000022;
    uStack_48 = 0x800000010f003c20;
  }
  auVar11._8_8_ = uStack_48;
  auVar11._0_8_ = uStack_50;
  return auVar11;
}



/* Entry: 101c1f684; end: 101c1f753;  */

undefined8 FUN_101c1f684(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101c1f1bc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101c1f754; end: 101c1f7a7;  */

void FUN_101c1f754(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_101c1fea0();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104576a8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101c1f7a8; end: 101c1f7af;  */

void FUN_101c1f7a8(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_101c1fea0();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104576a8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101c1f7b0; end: 101c1f7df;  */

void FUN_101c1f7b0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101c1f7e0; end: 101c1f873;  */

void FUN_101c1f7e0(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x121) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0xe0) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1f874,0,0);
  return;
}



/* Entry: 101c1f874; end: 101c1fa5b;  */

void FUN_101c1f874(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar2 = *(long *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x121);
  func_0x000100083b20(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar4 = *(long *)(unaff_x22 + 0xb0);
  FUN_101c1fec0(unaff_x22 + 0x90,uVar1);
  (**(code **)(lVar4 + 8))(uVar6,uVar10,uVar5,uVar7,uVar3,uVar1,lVar4);
  (**(code **)(lVar2 + 0x30))(uVar6,1,uVar9);
  if ((int)uVar6 == 1) {
    func_0x0001000293e4(*(undefined8 *)(unaff_x22 + 0xd8));
    FUN_101c1fe70(unaff_x22 + 0x90);
    uVar7 = 0;
    FUN_101c1f1bc(0);
    uVar9 = 0x112e09350;
    FUN_101c1fe08(0x112e09350,FUN_101c1f1bc,&UNK_10d9df8a0);
    func_0x000107c613f8(uVar7,uVar9,0,0);
    func_0x000107c6159c(uVar9,uVar7,2);
    func_0x000107c61654();
    uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf0));
    func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101c1f9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  (**(code **)(*(long *)(unaff_x22 + 0xe8) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0xf0),*(undefined8 *)(unaff_x22 + 0xd8),
             *(undefined8 *)(unaff_x22 + 0xe0));
  FUN_101c1fe70(unaff_x22 + 0x90);
  puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  *(undefined **)(unaff_x22 + 0xf8) = puVar8;
  uVar7 = 0;
  func_0x000107c5fcec();
  puVar8 = PTR___sScMMa_11034fc70;
  uVar9 = uVar7;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x100) = uVar9;
  uVar9 = 0x112d45220;
  FUN_101c1fe08(0x112d45220,puVar8,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar7,uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1fa5c,uVar7,uVar9);
  return;
}



/* Entry: 101c1fa5c; end: 101c1faab;  */

void FUN_101c1fa5c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x100));
  func_0x000107c5a9c4();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x108) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1faac,0,0);
  return;
}



/* Entry: 101c1faac; end: 101c1fbdb;  */

void FUN_101c1faac(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  func_0x000107c5ed90();
  *(undefined8 *)(unaff_x22 + 0x110) = param_1;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa5c8();
  uVar2 = 0;
  func_0x000100dfa6ec(0);
  uVar3 = 0x112d377a8;
  FUN_101c1fe08(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
  puVar4 = puVar1;
  func_0x000107c5f9dc(puVar1,uVar2,PTR___sypN_11034f1a8 + 8,uVar3);
  *(undefined **)(unaff_x22 + 0x118) = puVar4;
  func_0x000107c6142c(puVar1);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x120;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101c1fbdc;
  lVar5 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar5,0);
  uVar3 = 0x112df01c0;
  func_0x0001000285a8(0x112df01c0,&UNK_10daf7f40);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101a67e30;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110457680;
  *(long *)(unaff_x22 + 0x70) = lVar5;
  func_0x000107c4de70(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101c1fbdc; end: 101c1fc1b;  */

void FUN_101c1fbdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1fc1c,0,0);
  return;
}



/* Entry: 101c1fc1c; end: 101c1fd2f;  */

void FUN_101c1fc1c(void)

{
  long lVar1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  bVar2 = *(byte *)(unaff_x22 + 0x120);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  lVar1 = *(long *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  if ((bVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_101c1f1bc(0);
    uVar6 = 0x112e09350;
    FUN_101c1fe08(0x112e09350,FUN_101c1f1bc,&UNK_10d9df8a0);
    func_0x000107c613f8(uVar3,uVar6,0,0);
    func_0x000107c6159c(uVar6,uVar3,3);
    func_0x000107c61654();
    (**(code **)(lVar1 + 8))(uVar5,uVar4);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf0));
    func_0x000107c615c0(uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
    (**(code **)(lVar1 + 8))(uVar5,uVar4);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar6);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101c1fd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101c1fd30; end: 101c1fd53;  */

void FUN_101c1fd30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c1fd54; end: 101c1fdcb;  */

void FUN_101c1fd54(long param_1,undefined1 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0x130;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101c1fdcc;
  plVar2[0x19] = param_4;
  plVar2[0x1a] = lVar3;
  *(undefined1 *)((long)plVar2 + 0x121) = param_2;
  plVar2[0x17] = param_1;
  plVar2[0x18] = param_3;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x1b] = uVar1;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar2[0x1c] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x1d] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x1e] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1f874,0,0);
  return;
}



/* Entry: 101c1fdcc; end: 101c1fe07;  */

void FUN_101c1fdcc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c1fe04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c1fe08; end: 101c1fe47;  */

void FUN_101c1fe08(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101c1fe48; end: 101c1fe57;  */

long FUN_101c1fe48(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101c1fe58; end: 101c1fe6f;  */

void FUN_101c1fe58(long param_1)

{
  FUN_101c1fe70(param_1 + 0x20);
  return;
}



/* Entry: 101c1fe70; end: 101c1fe9f;  */

void FUN_101c1fe70(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101c1fe84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101c1fea0; end: 101c1febf;  */

void FUN_101c1fea0(void)

{
  func_0x000107c61168(&PTR_PTR_112e09530);
  return;
}



/* Entry: 101c1fec0; end: 101c1fee3;  */

long * FUN_101c1fec0(long *param_1,long param_2)

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



/* Entry: 101c1fee4; end: 101c1ff4b;  */

void FUN_101c1fee4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1ff4c,uVar1,uVar2);
  return;
}



/* Entry: 101c1ff4c; end: 101c1ffb7;  */

void FUN_101c1ff4c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c1ff78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c1ffb8; end: 101c2012f;  */

void FUN_101c1ffb8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  func_0x000107c4a02c();
  if (((ulong)puVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar1 = &UNK_1104577e8;
    func_0x000107c613fc(&UNK_1104577e8,0x18,7);
    *(undefined8 *)(puVar1 + 0x10) = uVar4;
    puVar2 = &UNK_110457810;
    func_0x000107c613fc(&UNK_110457810,0x20,7);
    *(undefined **)(puVar2 + 0x10) = &UNK_10d9dfa60;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    func_0x000107c61174(uVar4);
    func_0x000107c61174();
    uVar3 = 8;
    func_0x0001001ca524(8,3,0x50,4,0,0,&UNK_10d9dfa70,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(uVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar3);
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c20130; end: 101c2016b;  */

/* WARNING: Possible PIC construction at 0x000101c20158: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c2015c) */

void FUN_101c20130(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  param_1[3] = &UNK_1104577c0;
  param_1[4] = &PTR_DAT_110457728;
  *param_1 = uVar2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101c2016c; end: 101c2018b;  */

void FUN_101c2016c(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(undefined1 *)(unaff_x22 + 0x130) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c2018c,0,0);
  return;
}



/* Entry: 101c2018c; end: 101c205df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c2018c(void)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar9);
  (**(code **)(lVar5 + 8))(uVar9,lVar5);
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar6 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar10);
  lVar3 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 200) = lVar3;
  lVar14 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar14;
  lVar11 = *(long *)(lVar14 + 0x40);
  uVar7 = lVar11 + 0xf;
  uVar4 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar4);
  (**(code **)(lVar6 + 0x10))(uVar4,uVar10,lVar6);
  func_0x000104a219f0(0);
  func_0x000107c610f8();
  func_0x000104a20e58(uVar9,lVar5,uVar4);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar9;
  func_0x000107c615c0(uVar4);
  func_0x0001000834e4(unaff_x22 + 0x38);
  func_0x0001000834e4(unaff_x22 + 0x10);
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar4);
  func_0x000100083b20(unaff_x22 + 0x60);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar5 = *(long *)(unaff_x22 + 0x80);
  func_0x0001000a8868(unaff_x22 + 0x60,uVar10);
  (**(code **)(lVar5 + 0x10))(uVar4,uVar10,lVar5);
  (**(code **)(lVar14 + 0x38))(uVar4,0,1,lVar3);
  func_0x000104a207dc(uVar4);
  func_0x0001000834e4(unaff_x22 + 0x60);
  func_0x000107c615c0(uVar4);
  lVar6 = 0;
  FUN_101c2251c();
  func_0x000107c613fc();
  *(long *)(unaff_x22 + 0xe0) = lVar6;
  lVar5 = 0x112e09590;
  func_0x0001000285a8(0x112e09590,&UNK_10d9df9b0);
  lVar13 = *(long *)(lVar5 + -8);
  uVar4 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar4);
  (**(code **)(lVar13 + 0x68))();
  iVar2 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar2 == 0) {
    FUN_101c20c5c(lVar6 + _DAT_112e09658,lVar6 + _DAT_112e09660,uVar4);
  }
  else {
    func_0x000107c5fda0(lVar6 + _DAT_112e09658,lVar6 + _DAT_112e09660,PTR___sSSN_11034da80,uVar4,
                        PTR___sSSN_11034da80);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  (**(code **)(lVar13 + 8))(uVar4,lVar5);
  func_0x000107c615c0(uVar4);
  func_0x000104a2f1d4(0);
  func_0x000107c61174();
  func_0x000107c6157c(lVar6);
  func_0x000104a274bc(uVar9,lVar6);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar9;
  lVar6 = 0;
  FUN_101c20e6c();
  func_0x000107c613fc();
  *(long *)(unaff_x22 + 0xf0) = lVar6;
  *(undefined8 *)(lVar6 + 0x10) = uVar9;
  uVar4 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf8) = uVar4;
  func_0x000107c61174(uVar9);
  func_0x000100083b20(unaff_x22 + 0x88);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar5 = *(long *)(unaff_x22 + 0xa8);
  func_0x0001000a8868(unaff_x22 + 0x88,uVar9);
  (**(code **)(lVar5 + 0x10))(uVar4,uVar9,lVar5);
  func_0x0001000834e4(unaff_x22 + 0x88);
  uVar7 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar7);
  (**(code **)(lVar14 + 0x10))();
  uVar4 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar12 = uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff);
  puVar8 = &UNK_110457710;
  func_0x000107c613fc(&UNK_110457710,uVar12 + lVar11,uVar4 | 7);
  *(undefined8 *)(puVar8 + 0x10) = uVar10;
  *(undefined8 *)(puVar8 + 0x18) = uVar1;
  *(long *)(puVar8 + 0x20) = lVar6;
  (**(code **)(lVar14 + 0x20))(puVar8 + uVar12,uVar7,lVar3);
  func_0x000107c615c0(uVar7);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(lVar6);
  uVar9 = 8;
  func_0x0001001ca524(8,3,0x50,4,0,0,&UNK_10d9df9c0,puVar8,PTR___sytN_11034f1b0 + 8);
  *(undefined8 *)(unaff_x22 + 0x100) = uVar9;
  func_0x000107c61574(puVar8);
  uVar10 = 0;
  func_0x000107c5fcec();
  uVar9 = uVar10;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x108) = uVar9;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar10,uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c205e0,uVar10,uVar9);
  return;
}



/* Entry: 101c205e0; end: 101c2083f;  */

void FUN_101c205e0(undefined8 param_1,undefined8 param_2,code *****UNRECOVERED_JUMPTABLE)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  code ******UNRECOVERED_JUMPTABLE_00;
  code *pcVar4;
  code *****pppppcVar5;
  code *****pppppcVar6;
  code ******ppppppcVar7;
  code ******ppppppcVar8;
  code *****pppppcVar9;
  code *****unaff_x21;
  code ******unaff_x22;
  code ****ppppcVar10;
  code *****pppppcVar11;
  code *****pppppcVar12;
  code *****unaff_x27;
  code *****unaff_x28;
  ulong unaff_x29;
  code ******ppppppcVar13;
  undefined8 unaff_x30;
  undefined8 uVar14;
  code ******in_stack_00000000;
  undefined8 in_stack_00000008;
  code *****pppppcStack_10;
  
  pppppcStack_10 = (code *****)(unaff_x29 | 0x1000000000000000);
  ppppppcVar13 = &pppppcStack_10;
  UNRECOVERED_JUMPTABLE_00 = (code ******)unaff_x22[0x21];
  pppppcVar9 = unaff_x22[0x1e];
  pppppcVar6 = unaff_x22[0x16];
  uVar14 = 0x101c20610;
  func_0x000107c61574();
  pppppcVar9 = (code *****)pppppcVar9[2];
  ppppcVar10 = pppppcVar6[2];
  if (ppppcVar10 == (code ****)0x0) {
code_r0x000101c20744:
code_r0x000101c20748:
    goto code_r0x000101c2074c;
  }
  ppppppcVar7 = (code ******)PTR___swiftEmptyArrayStorage_11034f1c8;
  pppppcVar6 = unaff_x22[0x16] + 4;
LAB_101c2064c:
  pppppcVar11 = (code *****)((long)pppppcVar6 + 1);
  bVar1 = *(byte *)pppppcVar6;
  pppppcVar5 = (code *****)(ulong)bVar1;
  pppppcVar12 = (code *****)0xc;
code_r0x000101c20654:
code_r0x000101c20660:
  puVar2 = &stack0xffffffffffffffb0;
  puVar3 = &stack0xffffffffffffffb0;
  ppppppcVar8 = ppppppcVar7;
  pppppcVar6 = pppppcVar11;
  switch(bVar1) {
  case 0:
    break;
  case 1:
    pppppcVar12 = (code *****)0x10;
    break;
  case 2:
    pppppcVar12 = (code *****)0x11;
    break;
  case 3:
    pppppcVar12 = (code *****)0xe;
    break;
  case 4:
    pppppcVar12 = (code *****)0xd;
    break;
  case 5:
    pppppcVar12 = (code *****)0x0;
    break;
  case 6:
  case 0x39:
  case 0x60:
    pppppcVar12 = (code *****)0x1;
  case 0x59:
    break;
  case 7:
  case 0x44:
  case 0x4c:
  case 0x5c:
  case 0xdc:
  case 0xe4:
  case 0xf4:
    pppppcVar12 = (code *****)0x3;
    break;
  case 8:
    pppppcVar12 = (code *****)0x2;
    break;
  case 9:
  case 0x22:
  case 0x3a:
  case 0x42:
  case 0x5a:
  case 0xda:
  case 0xe2:
  case 0xf2:
    pppppcVar12 = (code *****)0x5;
    break;
  case 10:
  case 0x34:
    pppppcVar12 = (code *****)0x4;
    break;
  default:
    goto code_r0x000101c20644;
  case 0xc:
  case 0xe1:
  case 0xf1:
    pppppcVar12 = (code *****)0xb;
    break;
  case 0xd:
    pppppcVar12 = (code *****)0x12;
    break;
  case 0xe:
  case 0x41:
  case 0xe0:
    pppppcVar12 = (code *****)0x7;
    break;
  case 0xf:
    pppppcVar12 = (code *****)0x6;
    break;
  case 0x10:
    pppppcVar12 = (code *****)0x9;
    break;
  case 0x11:
    pppppcVar12 = (code *****)0xa;
    break;
  case 0x20:
  case 0x40:
    ppppppcVar8 = (code ******)unaff_x22[0x1f];
    pppppcVar5 = unaff_x22[0x20];
    pppppcVar6 = unaff_x22[0x1d];
    pppppcVar11 = unaff_x22[0x1e];
    pppppcVar9 = unaff_x22[0x1b];
    pppppcVar12 = unaff_x22[0x1c];
    unaff_x27 = unaff_x22[0x19];
    unaff_x28 = unaff_x22[0x1a];
    in_stack_00000000 = ppppppcVar13;
    in_stack_00000008 = uVar14;
    pppppcStack_10 = (code *****)ppppppcVar7;
    func_0x000107c61654();
    func_0x000107c5fd50(pppppcVar5,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                        PTR___ss5NeverOs5ErrorsWP_11034ee90);
    func_0x000107c61574(pppppcVar5);
    func_0x000107c61574(pppppcVar11);
    func_0x000107c61170(pppppcVar6);
    func_0x000107c61574(pppppcVar12);
    func_0x000107c61170(pppppcVar9);
  case 0x32:
    (*(code *)unaff_x28[1])(ppppppcVar8,unaff_x27);
    func_0x000107c615c0(ppppppcVar8);
    UNRECOVERED_JUMPTABLE_00 = (code ******)unaff_x22[1];
code_r0x000101c20a14:
                    /* WARNING: Could not recover jumptable at 0x000101c20a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE_00)();
    return;
  case 0x21:
    goto code_r0x000101c20660;
  case 0x23:
  case 0x3b:
  case 0x43:
  case 0x5b:
  case 0xdb:
  case 0xe3:
  case 0xf3:
    goto code_r0x000101c20a14;
  case 0x24:
    goto code_r0x000101c20744;
  case 0x25:
    goto code_r0x000101c20648;
  case 0x30:
  case 0x9e:
  case 0xa4:
  case 0xaa:
  case 0xce:
  case 0xf0:
    goto code_r0x000101c20784;
  case 0x31:
  case 0x7b:
  case 0xa1:
  case 0xa7:
  case 0xd1:
    goto code_r0x000101c207e0;
  case 0x38:
    goto code_r0x000101c20834;
  case 0x3c:
    goto code_r0x000101c20704;
  case 0x48:
  case 0x78:
  case 0x7a:
    goto code_r0x000101c207c8;
  case 0x49:
    goto code_r0x000101c2083c;
  case 0x4a:
  case 0x52:
    func_0x000107c5fd50(pppppcVar9,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                        PTR___ss5NeverOs5ErrorsWP_11034ee90);
    func_0x000107c61574(pppppcVar9);
    func_0x000107c61574(unaff_x21);
    func_0x000107c61170(ppppcVar10);
  case 0x4d:
    func_0x000107c61574();
    func_0x000107c61170(&UNK_10d9df980);
    (*(code *)unaff_x27[1])(ppppppcVar7,0xc);
    func_0x000107c615c0(ppppppcVar7);
    UNRECOVERED_JUMPTABLE = unaff_x22[1];
code_r0x000101c20954:
code_r0x000101c20968:
                    /* WARNING: Could not recover jumptable at 0x000101c20968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    return;
  case 0x4b:
  case 0x53:
    goto LAB_101c2064c;
  case 0x4e:
    goto code_r0x000101c20968;
  case 0x50:
    goto code_r0x000101c207a4;
  case 0x51:
    goto code_r0x000101c20838;
  case 0x58:
    goto code_r0x000101c20954;
  case 0x70:
  case 0x90:
  case 0x97:
  case 0xc0:
  case 199:
    goto code_r0x000101c20790;
  case 0x71:
  case 0x7c:
  case 0xb0:
    goto code_r0x000101c207d8;
  case 0x72:
  case 0x73:
    goto code_r0x000101c20810;
  case 0x74:
  case 0x94:
  case 0xa2:
  case 0xa8:
  case 0xae:
  case 0xc4:
  case 0xd2:
    goto code_r0x000101c207e8;
  case 0x75:
  case 0x7f:
  case 0x92:
  case 0xac:
  case 0xc2:
    goto code_r0x000101c20800;
  case 0x76:
  case 0x79:
  case 0xa3:
  case 0xa9:
  case 0xd3:
    goto code_r0x000101c207fc;
  case 0x77:
    goto code_r0x000101c20778;
  case 0x7d:
  case 0xab:
  case 0xb1:
    goto code_r0x000101c2080c;
  case 0x7e:
    goto code_r0x000101c2074c;
  case 0x80:
    goto code_r0x000101c20824;
  case 0x91:
  case 0xc1:
    goto code_r0x000101c20804;
  case 0x93:
  case 0x9c:
  case 0xc3:
  case 0xcc:
    goto code_r0x000101c20814;
  case 0x95:
  case 0xc5:
    goto code_r0x000101c207dc;
  case 0x96:
  case 0xc6:
    goto code_r0x000101c20828;
  case 0x98:
  case 200:
    goto code_r0x000101c20754;
  case 0x99:
  case 0xc9:
    goto code_r0x000101c20770;
  case 0x9a:
  case 0xca:
    goto code_r0x000101c20748;
  case 0x9b:
  case 0xa0:
  case 0xa6:
  case 0xcb:
  case 0xd0:
    goto code_r0x000101c20818;
  case 0x9d:
  case 0xcd:
    goto code_r0x000101c207e4;
  case 0x9f:
  case 0xa5:
  case 0xcf:
    goto code_r0x000101c207f4;
  case 0xad:
    goto code_r0x000101c2081c;
  case 0xaf:
    goto code_r0x000101c207d4;
  case 0xd8:
    func_0x000107c615c0();
    if (pppppcVar9 == (code *****)0x0) {
      ppppcVar10[0x24] = (code ***)ppppppcVar7;
      ppppcVar10[0x25] = (code ***)unaff_x21;
      pcVar4 = FUN_101c208b0;
    }
    else {
      pcVar4 = FUN_101c2096c;
    }
    goto LAB_107c615e0;
  case 0xd9:
    goto code_r0x000101c20654;
  }
  uVar14 = 0x101c206e8;
  UNRECOVERED_JUMPTABLE_00 = ppppppcVar7;
  func_0x000107c61558();
  if (((ulong)UNRECOVERED_JUMPTABLE_00 & 1) == 0) {
    UNRECOVERED_JUMPTABLE_00 = (code ******)0x0;
    UNRECOVERED_JUMPTABLE = (code *****)0x1;
    uVar14 = 0x101c20734;
    func_0x000101c20fdc(0,(long)ppppppcVar7[2] + 1,1,ppppppcVar7);
    ppppppcVar7 = UNRECOVERED_JUMPTABLE_00;
  }
  unaff_x27 = ppppppcVar7[2];
  unaff_x21 = (code *****)((long)unaff_x27 + 1);
  if ((code *****)((ulong)ppppppcVar7[3] >> 1) <= unaff_x27) {
    UNRECOVERED_JUMPTABLE_00 = (code ******)(ulong)((code *****)0x1 < ppppppcVar7[3]);
code_r0x000101c20704:
    UNRECOVERED_JUMPTABLE = (code *****)0x1;
    uVar14 = 0x101c20714;
    func_0x000101c20fdc();
    ppppppcVar7 = UNRECOVERED_JUMPTABLE_00;
  }
  ppppppcVar7[2] = unaff_x21;
  ppppppcVar7[(long)unaff_x27 + 4] = pppppcVar12;
code_r0x000101c20644:
  ppppcVar10 = (code ****)((long)ppppcVar10 + -1);
  in_ZR = ppppcVar10 == (code ****)0x0;
code_r0x000101c20648:
  if ((bool)in_ZR) goto code_r0x000101c20744;
  goto LAB_101c2064c;
code_r0x000101c2074c:
code_r0x000101c20754:
code_r0x000101c20770:
code_r0x000101c20778:
code_r0x000101c20784:
code_r0x000101c20790:
code_r0x000101c207a4:
code_r0x000101c207c8:
code_r0x000101c207d4:
code_r0x000101c207d8:
code_r0x000101c207dc:
code_r0x000101c207e0:
code_r0x000101c207e4:
code_r0x000101c207e8:
  func_0x000104a27f84();
code_r0x000101c207f4:
  func_0x000107c6142c();
code_r0x000101c207fc:
  func_0x000107c6142c();
code_r0x000101c20800:
  pppppcVar5 = (code *****)&UNK_10d9df000;
code_r0x000101c20804:
  UNRECOVERED_JUMPTABLE_00 = (code ******)(ulong)*(uint *)((long)pppppcVar5 + 0xb1c);
  func_0x000107c615b8();
code_r0x000101c2080c:
  unaff_x22[0x22] = (code *****)UNRECOVERED_JUMPTABLE_00;
code_r0x000101c20810:
  pppppcVar5 = (code *****)0x101c20000;
code_r0x000101c20814:
  pppppcVar5 = pppppcVar5 + 0x108;
code_r0x000101c20818:
  *UNRECOVERED_JUMPTABLE_00 = (code *****)unaff_x22;
  UNRECOVERED_JUMPTABLE_00[1] = pppppcVar5;
code_r0x000101c2081c:
  pppppcVar9 = unaff_x22[0x1c];
  unaff_x22 = UNRECOVERED_JUMPTABLE_00;
code_r0x000101c20824:
  ppppppcVar13 = (code ******)pppppcStack_10;
  uVar14 = unaff_x30;
code_r0x000101c20828:
code_r0x000101c20834:
  puVar2 = (undefined1 *)register0x00000008;
code_r0x000101c20838:
  ppppppcVar13 = (code ******)((ulong)ppppppcVar13 & 0xefffffffffffffff);
  puVar3 = puVar2;
code_r0x000101c2083c:
  *(ulong *)(puVar3 + -0x10) = (ulong)ppppppcVar13 | 0x1000000000000000;
  *(undefined8 *)(puVar3 + -8) = uVar14;
  *(code *******)(puVar3 + -0x18) = unaff_x22;
  unaff_x22[4] = pppppcVar9;
  pppppcVar6 = (code *****)0x112e09748;
  func_0x0001000285a8(0x112e09748,&UNK_10d9dfb20);
  unaff_x22[5] = pppppcVar6;
  pppppcVar6 = (code *****)pppppcVar6[-1];
  unaff_x22[6] = pppppcVar6;
  pppppcVar6 = (code *****)((long)pppppcVar6[8] + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  unaff_x22[7] = pppppcVar6;
  pcVar4 = FUN_101c22138;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 101c20840; end: 101c208af;  */

void FUN_101c20840(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x118) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x110));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x120) = param_2;
    *(undefined8 *)(lVar2 + 0x128) = param_1;
    pcVar1 = FUN_101c208b0;
  }
  else {
    pcVar1 = FUN_101c2096c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c208b0; end: 101c2096b;  */

void FUN_101c208b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  lVar8 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c5fd50(uVar5,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar3);
  (**(code **)(lVar8 + 8))(uVar1,uVar4);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c20968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 0x120));
  return;
}



/* Entry: 101c2096c; end: 101c20a33;  */

void FUN_101c2096c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  lVar8 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c61654();
  func_0x000107c5fd50(uVar5,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar3);
  (**(code **)(lVar8 + 8))(uVar1,uVar4);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c20a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c20a34; end: 101c20a4f;  */

void FUN_101c20a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c20a50,0,0);
  return;
}



/* Entry: 101c20a50; end: 101c20ae3;  */

void FUN_101c20a50(void)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10);
  plVar1 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101c20aa8;
  lVar4 = *(long *)(unaff_x22 + 0x10);
  plVar1[5] = *(long *)(unaff_x22 + 0x20);
  plVar1[6] = lVar4;
  plVar1[4] = lVar5;
  lVar4 = 0;
  func_0x000107c5ebbc();
  plVar1[7] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[8] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[9] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[10] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xb] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xc] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xd] = uVar3;
  lVar4 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xe] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xf] = uVar3;
  lVar4 = 0;
  func_0x00010484ba98();
  plVar1[0x10] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[0x11] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x12] = uVar3;
  lVar4 = 0x112e09408;
  func_0x0001000285a8(0x112e09408,&UNK_10d9df7f0);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x13] = uVar3;
  lVar4 = 0x112e09410;
  func_0x0001000285a8(0x112e09410,&UNK_10d9dfa90);
  plVar1[0x14] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[0x15] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x16] = uVar3;
  lVar4 = 0x112e09418;
  func_0x0001000285a8(0x112e09418,&UNK_10d9df800);
  plVar1[0x17] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[0x18] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x19] = uVar3;
  lVar4 = 0x112e09420;
  func_0x0001000285a8(0x112e09420,&UNK_10d9dfaa0);
  plVar1[0x1a] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[0x1b] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x1c] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c214ec,0,0);
  return;
}



/* Entry: 101c20ae4; end: 101c20b9b;  */

/* WARNING: Possible PIC construction at 0x000101c20b84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c20b88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c20ae4(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar4 = _DAT_1138153a0;
  lVar6 = *param_2;
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,lVar6 + lVar4,lVar3);
  uVar5 = *(undefined8 *)(lVar6 + _DAT_1138153a8);
  lVar4 = 0;
  func_0x00010484ba98();
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x14)) = uVar5;
  puVar1 = (undefined8 *)(lVar6 + _DAT_1138153b0);
  uVar5 = puVar1[1];
  uVar7 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar7;
  *(undefined1 *)(param_1 + *(int *)(lVar4 + 0x1c)) = *(undefined1 *)(lVar6 + _DAT_1138153b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 101c20b9c; end: 101c20c03;  */

void FUN_101c20b9c(long param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x22;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  plVar3 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101c20c04;
  plVar3[0x17] = lVar1;
  plVar3[0x18] = lVar2;
  *(undefined1 *)(plVar3 + 0x26) = param_2;
  plVar3[0x16] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c2018c,0,0);
  return;
}



/* Entry: 101c20c04; end: 101c20c5b;  */

void FUN_101c20c04(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c20c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c20c5c; end: 101c20e6b;  */

void FUN_101c20c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lVar2 = 0x112e09590;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112e09590,&UNK_10d9df9b0);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + -extraout_x8;
  lVar3 = 0x112e09640;
  func_0x0001000285a8(0x112e09640,&UNK_10d9dfb10);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar11 - extraout_x8_00;
  lVar4 = 0x112e09648;
  func_0x0001000285a8(0x112e09648,&UNK_10d9dfac0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  lVar4 = 0x112e09650;
  func_0x0001000285a8(0x112e09650,&UNK_10d9dfb00);
  lVar10 = *(long *)(lVar4 + -8);
  (**(code **)(lVar10 + 0x38))(lVar9,1,1,lVar4);
  (**(code **)(lVar6 + 0x10))(puVar11,uStack_90,lVar2);
  lStack_70 = lVar9;
  func_0x000107c5fdc8(lVar7,PTR___sSSN_11034da80,puVar11,FUN_101c22024,auStack_80,
                      PTR___sSSN_11034da80);
  (**(code **)(lVar5 + 0x10))(uStack_88,lVar7,lVar3);
  FUN_101c2202c(lVar9,lVar8);
  lVar2 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar5 + 8))(lVar7,lVar3);
    (**(code **)(lVar10 + 0x20))(uStack_98,lVar8,lVar4);
    func_0x000101c2207c(lVar9,0x112e09648,&UNK_10d9dfac0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c20e6c);
  (*pcVar1)();
}



/* Entry: 101c20e6c; end: 101c20e8b;  */

void FUN_101c20e6c(void)

{
  func_0x000107c61168(&PTR_PTR_112e095d8);
  return;
}



/* Entry: 101c20e8c; end: 101c20f1b;  */

void FUN_101c20e8c(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101c20f1c;
  plVar2[3] = lVar4;
  plVar2[4] = unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff));
  plVar2[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c20a50,0,0);
  return;
}



/* Entry: 101c20f1c; end: 101c20f57;  */

void FUN_101c20f1c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c20f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c20f58; end: 101c210db;  */

void FUN_101c20f58(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000101c2207c(param_2,0x112e09648,&UNK_10d9dfac0);
  lVar1 = 0x112e09650;
  func_0x0001000285a8(0x112e09650,&UNK_10d9dfb00);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c20fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_2,0,1,lVar1);
  return;
}



/* Entry: 101c210dc; end: 101c210eb;  */

undefined1  [16] FUN_101c210dc(void)

{
  return ZEXT816(0x110457748);
}



/* Entry: 101c210ec; end: 101c21147;  */

/* WARNING: Possible PIC construction at 0x000101c21100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c21104) */

void FUN_101c210ec(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101c21148; end: 101c211a3;  */

undefined8 * FUN_101c21148(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101c211a4; end: 101c211df;  */

undefined8 * FUN_101c211a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101c211e0; end: 101c21273;  */

int FUN_101c211e0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c21274; end: 101c212bf;  */

void FUN_101c21274(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101c220c4;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[2] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1ff4c,lVar1,lVar2);
  return;
}



/* Entry: 101c212c0; end: 101c2132f;  */

void FUN_101c212c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101c220c8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101c21330; end: 101c214eb;  */

void FUN_101c21330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  lVar1 = 0;
  func_0x000107c5ebbc();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  lVar1 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  lVar1 = 0;
  func_0x00010484ba98();
  *(long *)(unaff_x22 + 0x80) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  lVar1 = 0x112e09408;
  func_0x0001000285a8(0x112e09408,&UNK_10d9df7f0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  lVar1 = 0x112e09410;
  func_0x0001000285a8(0x112e09410,&UNK_10d9dfa90);
  *(long *)(unaff_x22 + 0xa0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar3;
  lVar1 = 0x112e09418;
  func_0x0001000285a8(0x112e09418,&UNK_10d9df800);
  *(long *)(unaff_x22 + 0xb8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 200) = uVar3;
  lVar1 = 0x112e09420;
  func_0x0001000285a8(0x112e09420,&UNK_10d9dfaa0);
  *(long *)(unaff_x22 + 0xd0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xd8) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c214ec,0,0);
  return;
}



/* Entry: 101c214ec; end: 101c21703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c214ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long unaff_x22;
  code *pcVar16;
  undefined8 uVar17;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar4 = *(long *)(unaff_x22 + 0xc0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar5 = 0x112e09428;
  func_0x0001000285a8(0x112e09428,&UNK_10d9df810);
  lVar6 = lVar5;
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(long *)(unaff_x22 + 0xe8) = lVar6;
  uVar7 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar7;
  func_0x0001000285a8(0x112e09430,&UNK_10d9dfab0);
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar14 = *(long *)(unaff_x22 + 0x10);
  uVar8 = *(undefined8 *)(lVar14 + _DAT_113091ba8);
  func_0x000107c61174(uVar8);
  func_0x000107c61170(lVar14);
  uVar9 = uVar8;
  func_0x0001000b637c(uVar8);
  func_0x000107c61170(uVar8);
  pcVar10 = FUN_101c20ae4;
  func_0x0001000bfde0(FUN_101c20ae4,0,uVar17);
  func_0x000107c61574(uVar9);
  plVar15 = (long *)(unaff_x22 + 0x18);
  *plVar15 = lVar6;
  pcVar16 = *(code **)(*(long *)pcVar10 + 0x58);
  FUN_101c1ee78();
  (*pcVar16)(plVar15,lVar5,uVar9);
  func_0x000107c61574(pcVar10);
  plVar11 = plVar15;
  func_0x000107c614f0(plVar15);
  (**(code **)(lVar5 + 0x10))(uVar7,plVar11,lVar5);
  func_0x000107c615e8(plVar15);
  (**(code **)(lVar4 + 0x68))
            (uVar1,*(undefined4 *)
                    PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             uVar2);
  func_0x0001000d52ec(uVar13,uVar1);
  (**(code **)(lVar4 + 8))(uVar1,uVar2);
  func_0x000107c5fd34(uVar12,uVar3);
  plVar11 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_101c21704;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar11,*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Entry: 101c21704; end: 101c2174b;  */

void FUN_101c21704(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c2174c,0,0);
  return;
}



/* Entry: 101c2174c; end: 101c21f37;  */

void FUN_101c2174c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  long unaff_x22;
  undefined8 uVar25;
  code *pcVar26;
  undefined8 uVar27;
  code *pcVar28;
  code *pcVar29;
  
  uVar20 = *(ulong *)(unaff_x22 + 0x98);
  uVar9 = uVar20;
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 0x30))(uVar20,1,*(undefined8 *)(unaff_x22 + 0x80));
  if ((int)uVar9 == 1) {
    uVar22 = *(undefined8 *)(unaff_x22 + 0xe8);
    lVar6 = *(long *)(unaff_x22 + 0xd8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar17 = *(long *)(unaff_x22 + 0xa8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
    func_0x000107c61574(uVar22);
    (**(code **)(lVar17 + 8))(uVar1,uVar25);
    (**(code **)(lVar6 + 8))(uVar8,uVar24);
LAB_101c21834:
    uVar21 = *(undefined8 *)(unaff_x22 + 200);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe0));
    func_0x000107c615c0(uVar21);
    func_0x000107c615c0(uVar16);
    func_0x000107c615c0(uVar25);
    func_0x000107c615c0(uVar22);
    func_0x000107c615c0(uVar27);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar24);
    func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000101c218d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar9 = *(ulong *)(unaff_x22 + 0x90);
  FUN_101c21fe0();
  func_0x000107c5fd5c();
  if ((uVar20 & 1) != 0) {
    uVar22 = *(undefined8 *)(unaff_x22 + 0xe8);
    lVar6 = *(long *)(unaff_x22 + 0xd8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar17 = *(long *)(unaff_x22 + 0xa8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
    func_0x000107c61574(uVar22);
    (**(code **)(lVar17 + 8))(uVar1,uVar25);
    (**(code **)(lVar6 + 8))(uVar8,uVar24);
    func_0x000101c1ef0c(uVar27);
    goto LAB_101c21834;
  }
  func_0x000107c5edc8();
  uVar13 = uVar20;
  uVar10 = uVar9;
  func_0x000107c5edc8();
  if (uVar9 == 0) {
    uVar9 = uVar10;
    if (uVar10 == 0) goto LAB_101c2195c;
  }
  else if (uVar10 != 0) {
    if ((uVar20 == uVar13) && (uVar9 == uVar10)) {
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c();
      uVar13 = uVar9;
      uVar9 = uVar10;
    }
    else {
      uVar23 = uVar9;
      func_0x000107c605b8(uVar20,uVar9,uVar13,uVar10,0);
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c();
      uVar13 = uVar9;
      uVar9 = uVar23;
      if ((uVar20 & 1) == 0) goto LAB_101c219bc;
    }
LAB_101c2195c:
    func_0x000107c5edbc();
    uVar20 = uVar13;
    uVar10 = uVar9;
    func_0x000107c5edbc();
    if (uVar9 == 0) {
      uVar9 = uVar10;
      if (uVar10 == 0) goto LAB_101c21a44;
    }
    else if (uVar10 != 0) {
      if ((uVar13 == uVar20) && (uVar9 == uVar10)) {
        func_0x000107c6142c(uVar10);
        func_0x000107c6142c();
        uVar20 = uVar9;
      }
      else {
        uVar23 = uVar9;
        func_0x000107c605b8(uVar13,uVar9,uVar20,uVar10,0);
        func_0x000107c6142c(uVar10);
        func_0x000107c6142c();
        uVar20 = uVar9;
        uVar10 = uVar23;
        if ((uVar13 & 1) == 0) goto LAB_101c219bc;
      }
LAB_101c21a44:
      func_0x000107c5edc4();
      uVar9 = uVar20;
      uVar13 = uVar10;
      func_0x000107c5edc4();
      if ((uVar20 == uVar9) && (uVar10 == uVar13)) {
        func_0x000107c6142c(uVar13);
        func_0x000107c6142c(uVar10);
      }
      else {
        func_0x000107c605b8(uVar20,uVar10,uVar9,uVar13,0);
        func_0x000107c6142c(uVar13);
        func_0x000107c6142c(uVar10);
        if ((uVar20 & 1) == 0) goto LAB_101c219bc;
      }
      uVar9 = *(ulong *)(unaff_x22 + 0x78);
      func_0x000107c5ebe4(uVar9,*(undefined8 *)(unaff_x22 + 0x90),0);
      lVar6 = 0;
      func_0x000107c5ec24();
      lVar17 = *(long *)(lVar6 + -8);
      pcVar26 = *(code **)(lVar17 + 0x30);
      (*pcVar26)(uVar9,1,lVar6);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x78);
      if ((int)uVar9 == 1) {
        func_0x000101c2207c(uVar22,0x112d4b5b0,&UNK_10d912140);
      }
      else {
        func_0x000107c5ebc4();
        pcVar18 = *(code **)(lVar17 + 8);
        (*pcVar18)(uVar22,lVar6);
        if (uVar9 != 0) {
          uVar20 = 0;
          uVar13 = *(ulong *)(uVar9 + 0x10);
          do {
            if (uVar13 == uVar20) goto LAB_101c219b8;
            if (*(ulong *)(uVar9 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
              pcVar26 = (code *)SoftwareBreakpoint(1,0x101c21f30);
              (*pcVar26)();
            }
            uVar23 = *(ulong *)(unaff_x22 + 0x68);
            lVar17 = *(long *)(unaff_x22 + 0x40);
            uVar19 = (ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
                     ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff);
            lVar15 = *(long *)(lVar17 + 0x48);
            uVar10 = uVar9 + uVar19 + lVar15 * uVar20;
            pcVar28 = *(code **)(lVar17 + 0x10);
            (*pcVar28)(uVar23,uVar10,*(undefined8 *)(unaff_x22 + 0x38));
            func_0x000107c5ebb4();
            if (uVar23 == 0x65646f63 && uVar10 == 0xe400000000000000) {
              uVar22 = 0xe400000000000000;
LAB_101c21c54:
              func_0x000107c6142c(uVar22);
LAB_101c21c58:
              pcVar29 = *(code **)(*(long *)(unaff_x22 + 0x40) + 8);
              (*pcVar29)(*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x38));
              break;
            }
            uVar11 = uVar10;
            func_0x000107c605b8();
            func_0x000107c6142c();
            if ((uVar23 & 1) != 0) goto LAB_101c21c58;
            func_0x000107c5ebb4();
            if ((uVar10 == 0x726f727265) && (uVar11 == 0xe500000000000000)) {
              uVar22 = 0xe500000000000000;
              goto LAB_101c21c54;
            }
            uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
            uVar22 = *(undefined8 *)(unaff_x22 + 0x38);
            lVar17 = *(long *)(unaff_x22 + 0x40);
            func_0x000107c605b8();
            func_0x000107c6142c(uVar11);
            pcVar29 = *(code **)(lVar17 + 8);
            (*pcVar29)(uVar8,uVar22);
            uVar20 = uVar20 + 1;
          } while ((uVar10 & 1) == 0);
          uVar22 = *(undefined8 *)(unaff_x22 + 0x90);
          lVar17 = *(long *)(unaff_x22 + 0x70);
          func_0x000107c6142c(uVar9);
          func_0x000107c5ebe4(lVar17,uVar22,0);
          (*pcVar26)(lVar17,1,lVar6);
          uVar22 = *(undefined8 *)(unaff_x22 + 0x70);
          if ((int)lVar17 == 1) {
            func_0x000101c2207c(uVar22,0x112d4b5b0,&UNK_10d912140);
          }
          else {
            func_0x000107c5ebc4();
            (*pcVar18)(uVar22,lVar6);
            if (lVar17 != 0) {
              uVar9 = *(ulong *)(lVar17 + 0x10);
              func_0x000107c61434(lVar17);
              lVar6 = lVar17;
              if (uVar9 != 0) {
                uVar20 = 0;
                lVar14 = lVar17 + uVar19;
                do {
                  if (*(ulong *)(lVar17 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
                    pcVar26 = (code *)SoftwareBreakpoint(1,0x101c21f38);
                    (*pcVar26)();
                  }
                  uVar13 = *(ulong *)(unaff_x22 + 0x50);
                  lVar7 = *(long *)(unaff_x22 + 0x58);
                  uVar22 = *(undefined8 *)(unaff_x22 + 0x38);
                  lVar4 = *(long *)(unaff_x22 + 0x40);
                  (*pcVar28)(lVar7,lVar14,uVar22);
                  pcVar26 = *(code **)(lVar4 + 0x20);
                  (*pcVar26)(uVar13,lVar7,uVar22);
                  func_0x000107c5ebb4();
                  if (uVar13 == 0x726f727265 && lVar7 == -0x1b00000000000000) {
                    func_0x000107c6142c(lVar17);
                    lVar7 = -0x1b00000000000000;
LAB_101c21db8:
                    uVar22 = *(undefined8 *)(unaff_x22 + 0x60);
                    lVar6 = *(long *)(unaff_x22 + 0x50);
                    uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
                    func_0x000107c6142c(lVar7);
                    (*pcVar26)(uVar22,lVar6,uVar8);
                    func_0x000107c5ebb8();
                    (*pcVar29)(uVar22,uVar8);
                    if (lVar6 == 0) goto LAB_101c21dfc;
                    break;
                  }
                  func_0x000107c605b8();
                  func_0x000107c6142c(lVar7);
                  lVar7 = lVar17;
                  if ((uVar13 & 1) != 0) goto LAB_101c21db8;
                  uVar20 = uVar20 + 1;
                  (*pcVar29)(*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x38));
                  lVar14 = lVar14 + lVar15;
                } while (uVar9 != uVar20);
              }
              func_0x000107c6142c(lVar6);
LAB_101c21dfc:
              lVar14 = *(long *)(lVar17 + 0x10);
              lVar6 = lVar17 + uVar19;
              uVar9 = 0xffffffffffffffff;
              do {
                if (uVar9 - lVar14 == -1) break;
                uVar9 = uVar9 + 1;
                if (*(ulong *)(lVar17 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
                  pcVar26 = (code *)SoftwareBreakpoint(1,0x101c21f34);
                  (*pcVar26)();
                }
                uVar20 = *(ulong *)(unaff_x22 + 0x48);
                lVar7 = lVar6;
                (*pcVar28)(uVar20,lVar6,*(undefined8 *)(unaff_x22 + 0x38));
                func_0x000107c5ebb4();
                uVar22 = *(undefined8 *)(unaff_x22 + 0x48);
                uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
                if (uVar20 == 0x65646f63 && lVar7 == -0x1c00000000000000) {
                  func_0x000107c6142c(lVar7);
                  (*pcVar29)(uVar22,uVar8);
                  break;
                }
                lVar6 = lVar6 + lVar15;
                func_0x000107c605b8();
                func_0x000107c6142c(lVar7);
                (*pcVar29)(uVar22,uVar8);
              } while ((uVar20 & 1) == 0);
              func_0x000107c6142c(lVar17);
            }
          }
          uVar8 = 0;
          func_0x000107c5fcec();
          uVar22 = uVar8;
          func_0x000107c5fce8();
          *(undefined8 *)(unaff_x22 + 0x100) = uVar22;
          func_0x000100eea164();
          func_0x000107c5fca8(uVar8,uVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(FUN_101c21f38,uVar8,uVar22);
          return;
        }
      }
      goto LAB_101c219bc;
    }
  }
LAB_101c219b8:
  func_0x000107c6142c(uVar9);
LAB_101c219bc:
  func_0x000101c1ef0c(*(undefined8 *)(unaff_x22 + 0x90));
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c21704;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar5,*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Entry: 101c21f38; end: 101c21f83;  */

void FUN_101c21f38(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x100));
  func_0x000104a29c28(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c21f84,0,0);
  return;
}



/* Entry: 101c21f84; end: 101c21fdf;  */

void FUN_101c21f84(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000101c1ef0c(*(undefined8 *)(unaff_x22 + 0x90));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c21704;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Entry: 101c21fe0; end: 101c22023;  */

undefined8 FUN_101c21fe0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010484ba98();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101c22024; end: 101c2202b;  */

void FUN_101c22024(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000101c2207c(uVar2,0x112e09648,&UNK_10d9dfac0);
  lVar1 = 0x112e09650;
  func_0x0001000285a8(0x112e09650,&UNK_10d9dfb00);
  lVar3 = *(long *)(lVar1 + -8);
  (**(code **)(lVar3 + 0x10))(uVar2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c20fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(uVar2,0,1,lVar1);
  return;
}



/* Entry: 101c2202c; end: 101c220bb;  */

undefined8 FUN_101c2202c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e09648;
  func_0x0001000285a8(0x112e09648,&UNK_10d9dfac0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101c220bc; end: 101c220cb;  */

undefined8 * FUN_101c220bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 101c220cc; end: 101c22137;  */

void FUN_101c220cc(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  lVar2 = 0x112e09748;
  func_0x0001000285a8(0x112e09748,&UNK_10d9dfb20);
  *(long *)(unaff_x22 + 0x28) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c22138,0,0);
  return;
}



/* Entry: 101c22138; end: 101c221c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c22138(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000285a8(0x112e09640,&UNK_10d9dfb10);
  func_0x000107c5fdbc(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScs8IteratorV4nextxSgyYaKFTu_11034ff30 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c221c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb8078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScs8IteratorV4nextxSgyYaKF_11034ff28)
            (plVar1,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Entry: 101c221c8; end: 101c22223;  */

void FUN_101c221c8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101c22224;
  }
  else {
    pcVar1 = FUN_101c222d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c22224; end: 101c222d3;  */

void FUN_101c22224(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  puVar1 = *(undefined1 **)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))(puVar1,*(undefined8 *)(unaff_x22 + 0x28));
  lVar3 = *(long *)(unaff_x22 + 0x18);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000101c22280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar2,lVar3);
    return;
  }
  FUN_101be27fc();
  func_0x000107c613f8(&UNK_1106c6770,puVar1,0,0);
  *puVar1 = 4;
  func_0x000107c61654();
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000101c222d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c222d4; end: 101c22317;  */

void FUN_101c222d4(void)

{
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000101c22314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c22318; end: 101c2231b; -[_TtC33SpotifyAuthServicesImplementation27SpotifySessionManagerBridge sessionManagerWithManager:didInitiate:] */

void FUN_101c22318(void)

{
  return;
}



/* Entry: 101c2231c; end: 101c2237f; -[_TtC33SpotifyAuthServicesImplementation27SpotifySessionManagerBridge sessionManagerWithManager:didFailWith:] */

/* WARNING: Possible PIC construction at 0x000101c22360: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c22364) */

void FUN_101c2231c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  FUN_101c22670(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101c22380; end: 101c2248b; -[_TtC33SpotifyAuthServicesImplementation27SpotifySessionManagerBridge sessionManagerWithManager:shouldRequestAccessTokenWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_101c22380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar1 = 0x112e09730;
  puVar3 = &UNK_10d9dfaf8;
  func_0x0001000285a8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec();
  uStack_60 = param_4;
  puStack_58 = puVar3;
  func_0x000107c6157c(param_1);
  func_0x000107c61434(puVar3);
  uVar2 = 0x112e09650;
  func_0x0001000285a8(0x112e09650,&UNK_10d9dfb00);
  func_0x000107c5fdb0((long)&uStack_60 - extraout_x8,&uStack_60,uVar2);
  (**(code **)(lVar4 + 8))((long)&uStack_60 - extraout_x8,lVar1);
  uStack_60 = 0;
  func_0x000107c5fdb4(&uStack_60,uVar2);
  func_0x000107c6142c(puVar3);
  func_0x000107c61574(param_1);
  return 0;
}



/* Entry: 101c2248c; end: 101c22513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c2248c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112e09658;
  lVar2 = 0x112e09640;
  func_0x0001000285a8(0x112e09640,&UNK_10d9dfb10);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  lVar1 = _DAT_112e09660;
  lVar2 = 0x112e09650;
  func_0x0001000285a8(0x112e09650,&UNK_10d9dfb00);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c22514; end: 101c2251b;  */

void FUN_101c22514(void)

{
  if (lRam0000000112e09690 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e67b108);
  return;
}



/* Entry: 101c2251c; end: 101c22553;  */

void FUN_101c2251c(undefined8 param_1)

{
  if (lRam0000000112e09690 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e67b108);
  return;
}



/* Entry: 101c22554; end: 101c225fb;  */

void FUN_101c22554(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  long lStack_28;
  
  uVar2 = 0x112e096a0;
  lVar1 = 0x13f;
  FUN_101c225fc(0x13f,0x112e096a0,PTR___sScsMa_11034ff48);
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x112e096a8;
    lVar1 = 0x13f;
    FUN_101c225fc(0x13f,0x112e096a8,PTR___sScs12ContinuationVMa_11034ff10);
    if (uVar2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      func_0x000107c61630(param_1,0x100,2,&lStack_30,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 101c225fc; end: 101c2266f;  */

void FUN_101c225fc(long param_1,long *param_2,code *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*param_2 == 0) {
    uVar1 = 0x112d393f0;
    func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
    puVar2 = PTR___sSSN_11034da80;
    (*param_3)(param_1,PTR___sSSN_11034da80,uVar1,PTR___ss5ErrorWS_11034ee10);
    if (puVar2 == (undefined *)0x0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 101c22670; end: 101c228db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c22670(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  
  lVar1 = 0x112e09738;
  func_0x0001000285a8(0x112e09738,&UNK_10d9dfb08);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_60 + -extraout_x8;
  lVar1 = 0;
  func_0x000104a2fc70();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = (long)puVar9 - extraout_x12;
  puVar2 = param_1;
  func_0x000107c5ed2c(param_1);
  puStack_58 = param_1;
  func_0x000107c614b0(param_1);
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar4 = puVar7;
  func_0x000107c6147c(puVar7,&puStack_58,uVar3,lVar1,6);
  if (((ulong)puVar4 & 1) == 0) {
    (**(code **)(lVar10 + 0x38))(puVar7,1,1,lVar1);
    FUN_101c228dc(puVar7);
  }
  else {
    (**(code **)(lVar10 + 0x38))(puVar7,0,1,lVar1);
    (**(code **)(lVar10 + 0x20))(uVar8,puVar7,lVar1);
    puVar4 = puVar9;
    (**(code **)(lVar10 + 0x68))(puVar9,2,lVar1);
    FUN_101c22924();
    uVar5 = uVar8;
    func_0x000107c5fab8(uVar8,puVar9,lVar1,puVar4);
    pcVar11 = *(code **)(lVar10 + 8);
    (*pcVar11)(puVar9,lVar1);
    if ((uVar5 & 1) != 0) {
      FUN_101be27fc();
      puVar6 = &UNK_1106c6770;
      func_0x000107c613f8(&UNK_1106c6770,puVar9,0,0);
      *puVar9 = 4;
      uVar3 = 0x112e09650;
      puStack_58 = puVar6;
      func_0x0001000285a8(0x112e09650,&UNK_10d9dfb00);
      func_0x000107c5fdb4(&puStack_58,uVar3);
      func_0x000107c61170(puVar2);
      (*pcVar11)(uVar8,lVar1);
      return;
    }
    (*pcVar11)(uVar8,lVar1);
  }
  puStack_58 = param_1;
  func_0x000107c614b0(param_1);
  uVar3 = 0x112e09650;
  func_0x0001000285a8(0x112e09650,&UNK_10d9dfb00);
  func_0x000107c5fdb4(&puStack_58,uVar3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 101c228dc; end: 101c22923;  */

undefined8 FUN_101c228dc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e09738;
  func_0x0001000285a8(0x112e09738,&UNK_10d9dfb08);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101c22924; end: 101c22967;  */

void FUN_101c22924(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e09740 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000104a2fc70(0xff);
  puVar2 = &UNK_10dd4d060;
  func_0x000107c61520(&UNK_10dd4d060,uVar1);
  puRam0000000112e09740 = puVar2;
  return;
}



/* Entry: 101c22968; end: 101c22dc3;  */

/* WARNING: Possible PIC construction at 0x000101c22df0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c22df4) */

undefined1  [16] FUN_101c22968(undefined *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong *puVar14;
  long extraout_x8;
  ulong uVar15;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  byte *pbVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined auStack_110 [8];
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar23 = *(undefined **)(param_1 + 0x10);
  puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar23 != (undefined *)0x0) {
    puVar24 = (undefined *)0x616f732d72657375;
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,puVar23,0);
    puVar16 = (undefined *)0x800000010f003d10;
    puVar17 = (undefined *)0x800000010f003d30;
    puVar18 = (undefined *)0x800000010f003d50;
    puVar19 = (undefined *)0x800000010f003d70;
    puVar20 = (undefined *)0x800000010f003d90;
    puVar3 = (undefined *)0x800000010f003db0;
    puVar7 = (undefined *)0x800000010f003dd0;
    puVar8 = (undefined *)0x800000010f003df0;
    puVar9 = (undefined *)0x800000010f003e10;
    puVar10 = (undefined *)0x800000010f003e30;
    puVar11 = (undefined *)0x800000010f003e50;
    puVar12 = (undefined *)0x800000010f003e70;
    puVar13 = (undefined *)0x800000010f003e90;
    puVar22 = (undefined *)0x800000010f003eb0;
    puVar29 = (undefined *)0x800000010f003ed0;
    puStack_80 = (undefined *)0x800000010f003f10;
    puStack_78 = (undefined *)0x800000010f003ef0;
    puStack_88 = (undefined *)0x800000010f003f30;
    puStack_90 = (undefined *)0x800000010f003f50;
    puVar27 = (undefined *)0x6e696d6165727473;
    puVar21 = puStack_70;
    puVar6 = puVar24;
    pbVar26 = param_1 + 0x20;
    do {
      puVar14 = (ulong *)(ulong)*pbVar26;
      puVar28 = (undefined *)0xe900000000000067;
      uVar15 = (ulong)(byte)puVar14[0x21b3bf65];
      lVar1 = uVar15 * 4;
      puVar25 = puVar27;
      switch(*pbVar26) {
      default:
        puVar25 = (undefined *)0xd000000000000010;
        puVar28 = puStack_90;
      case 0x2b:
      case 0xc3:
        break;
      case 1:
        puVar25 = (undefined *)0xd00000000000001a;
        puVar28 = puStack_88;
        break;
      case 2:
        puVar25 = (undefined *)0xd00000000000001b;
        puVar28 = puStack_80;
        break;
      case 3:
        puVar25 = (undefined *)0xd000000000000012;
        puVar28 = puStack_78;
        break;
      case 4:
        break;
      case 5:
        puVar25 = (undefined *)0xd000000000000015;
        puVar28 = puVar29;
        break;
      case 6:
      case 0xcf:
      case 0xef:
        puVar25 = (undefined *)0xd00000000000001b;
        puVar28 = puVar22;
      case 0x3f:
      case 0x5f:
      case 0x8f:
        break;
      case 7:
        puVar25 = (undefined *)0xd000000000000017;
        puVar28 = puVar13;
        break;
      case 8:
        puVar25 = (undefined *)0xd000000000000016;
        puVar28 = puVar12;
      case 0x49:
      case 0x69:
      case 0x99:
        break;
      case 9:
        puVar25 = (undefined *)0xd000000000000012;
        puVar28 = puVar11;
        break;
      case 10:
        puVar25 = (undefined *)0xd000000000000010;
      case 0x24:
        puVar28 = puVar10;
code_r0x000101c22c70:
        break;
      case 0xb:
        puVar25 = (undefined *)0xd00000000000001b;
      case 0xbc:
        puVar28 = puVar9;
        break;
      case 0xc:
        puVar25 = (undefined *)0x706f742d72657375;
        puVar28 = (undefined *)0xed0000646165722d;
        break;
      case 0xd:
        puVar25 = (undefined *)0xd000000000000019;
        puVar28 = puVar8;
        break;
      case 0xe:
        puVar25 = (undefined *)0xd000000000000013;
        puVar28 = puVar7;
      case 0x1c:
      case 0xac:
        break;
      case 0xf:
        puVar25 = (undefined *)0xd000000000000011;
        puVar28 = puVar3;
        break;
      case 0x10:
        puVar25 = (undefined *)0x6165722d72657375;
        puVar28 = (undefined *)0x2d64;
      case 0x20:
        puVar28 = (undefined *)((ulong)puVar28 | 0x69616d650000);
code_r0x000101c22b74:
        puVar28 = (undefined *)((ulong)puVar28 & 0xffffffffffff | 0xef6c000000000000);
        break;
      case 0x11:
        puVar25 = (undefined *)0xd000000000000011;
        puVar28 = puVar20;
        break;
      case 0x12:
        puVar25 = (undefined *)0xd000000000000011;
        puVar28 = puVar19;
        break;
      case 0x13:
        puVar25 = puVar24;
      case 0x48:
      case 0x68:
      case 0x98:
        puVar28 = (undefined *)0x6c2d;
code_r0x000101c22c98:
        puVar28 = (undefined *)((ulong)puVar28 | 0x6b6e690000);
code_r0x000101c22ca0:
        puVar28 = (undefined *)((ulong)puVar28 & 0xffffffffffff | 0xed00000000000000);
        break;
      case 0x14:
        puVar25 = puVar24;
        puVar28 = (undefined *)0xef6b6e696c6e752d;
        break;
      case 0x15:
        puVar25 = (undefined *)0xd000000000000017;
        puVar28 = puVar18;
        break;
      case 0x16:
        puVar25 = (undefined *)0xd000000000000012;
        puVar28 = puVar17;
      case 0x4a:
      case 0x6a:
      case 0x77:
      case 0x9a:
      case 0xd7:
      case 0xf7:
        break;
      case 0x17:
        puVar25 = (undefined *)0xd000000000000012;
        puVar28 = puVar16;
        break;
      case 0x18:
        goto code_r0x000101c22b74;
      case 0x19:
      case 0x7c:
      case 0xdc:
      case 0xfc:
        goto code_r0x000101c22cdc;
      case 0x1a:
      case 0xaa:
        goto code_r0x000101c22efc;
      case 0x21:
      case 0x25:
      case 0xbd:
        goto code_r0x000101c22e24;
      case 0x22:
      case 0x26:
      case 0xba:
      case 0xbe:
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar22 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      case 0xb8:
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        param_1 = puVar22 + -extraout_x12;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar23 = param_1 + -extraout_x12_00;
        puVar3 = puVar27;
code_r0x000101c22ecc:
        func_0x000101c23044(puVar3,puVar6);
        if (puVar3 == (undefined *)0x0) goto LAB_101c22fc4;
        puStack_68 = *(undefined **)(puVar3 + 0x10);
        puStack_70 = puVar23;
        if (puStack_68 != (undefined *)0x0) {
          puVar23 = (undefined *)0x0;
          goto LAB_101c22eec;
        }
        goto LAB_101c22fb8;
      case 0x28:
        goto code_r0x000101c22ecc;
      case 0x29:
      case 0xc1:
        goto code_r0x000101c22d3c;
      case 0x2a:
      case 0xc2:
      case 0xc0:
        puVar3 = puVar21;
        goto code_r0x000107c6157c;
      case 0x38:
      case 0x58:
      case 0x70:
      case 0x88:
      case 200:
      case 0xe8:
      case 0xff:
        goto code_r0x000101c22c98;
      case 0x39:
      case 0x59:
      case 0x89:
      case 0xc9:
      case 0xe9:
        goto code_r0x000101c22d0c;
      case 0x3a:
      case 0x5a:
      case 0x79:
      case 0x8a:
      case 0xca:
      case 0xd6:
      case 0xd9:
      case 0xea:
      case 0xf6:
      case 0xf9:
        goto code_r0x000101c22d08;
      case 0x3b:
      case 0x5b:
      case 0x8b:
      case 0xcb:
      case 0xd1:
      case 0xeb:
      case 0xf1:
        goto code_r0x000101c22d1c;
      case 0x3c:
      case 0x4e:
      case 0x5c:
      case 0x74:
      case 0x7b:
      case 0x8c:
      case 0xcc:
      case 0xdb:
      case 0xdd:
      case 0xec:
      case 0xfb:
        goto code_r0x000101c22cf0;
      case 0x3d:
      case 0x5d:
      case 0x8d:
      case 0xcd:
      case 0xd5:
      case 0xed:
      case 0xf5:
        goto code_r0x000101c22ce4;
      case 0x3e:
      case 0x5e:
      case 0x8e:
      case 0xce:
      case 0xee:
        goto code_r0x000101c22d30;
      case 0x40:
      case 0x44:
      case 0x4b:
      case 0x60:
      case 100:
      case 0x6b:
      case 0x90:
      case 0x94:
      case 0x9b:
        goto code_r0x000101c22cd0;
      case 0x41:
      case 0x42:
      case 0x61:
      case 0x62:
      case 0x91:
      case 0x92:
        goto code_r0x000101c22cfc;
      case 0x43:
      case 99:
      case 0x93:
        goto code_r0x000101c22cd4;
      case 0x45:
      case 0x65:
      case 0x75:
      case 0x95:
      case 0xa9:
        goto code_r0x000101c22cd8;
      case 0x46:
      case 0x66:
      case 0x96:
        goto code_r0x000101c22cf8;
      case 0x47:
      case 0x67:
      case 0x97:
        goto code_r0x000101c22ca0;
      case 0x4c:
      case 0x6c:
      case 0x6f:
      case 0x72:
      case 0x78:
      case 0x7e:
      case 0x9c:
      case 0x9f:
      case 0xd8:
      case 0xf8:
      case 0xfe:
        goto code_r0x000101c22d14;
      case 0x4d:
      case 0x6d:
      case 0x9d:
        goto code_r0x000101c22d18;
      case 0x4f:
      case 0xd4:
      case 0xde:
      case 0xf4:
        goto code_r0x000101c22d04;
      case 0x50:
      case 0xdf:
        goto code_r0x000101c22ce8;
      case 0x6e:
      case 0x71:
      case 0x76:
      case 0x7d:
      case 0x9e:
      case 0xfd:
        goto code_r0x000101c22ce0;
      case 0x73:
      case 0x7a:
      case 0xda:
      case 0xfa:
        goto code_r0x000101c22d24;
      case 0xa8:
        goto code_r0x000101c22db4;
      case 0xb9:
        uVar15 = uVar15 + 0x830;
code_r0x000101c22e24:
        puVar14[3] = lVar1 + 0x101c22b4c;
        puVar14[4] = uVar15;
        *puVar14 = (ulong)puVar22;
code_r0x000107c6157c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_retain_11034f4d0)(puVar3);
        auVar32._8_8_ = puVar7;
        auVar32._0_8_ = puVar3;
        return auVar32;
      case 0xd0:
      case 0xf0:
        goto code_r0x000101c22d20;
      case 0xd2:
      case 0xf2:
        goto code_r0x000101c22cec;
      case 0xd3:
      case 0xf3:
        goto code_r0x000101c22c70;
      }
      puVar6 = *(undefined **)(puVar21 + 0x10);
      param_1 = puVar6 + 1;
      puStack_70 = puVar21;
      if ((undefined *)(*(ulong *)(puVar21 + 0x18) >> 1) <= puVar6) {
code_r0x000101c22ce0:
code_r0x000101c22ce4:
        puStack_c8 = puVar7;
        puStack_c0 = puVar3;
code_r0x000101c22ce8:
code_r0x000101c22cec:
        puStack_100 = puVar22;
        puStack_f8 = puVar13;
code_r0x000101c22cf0:
code_r0x000101c22cf8:
        puStack_d8 = puVar9;
        puStack_d0 = puVar8;
code_r0x000101c22cfc:
        puVar21 = puVar24;
code_r0x000101c22d04:
        puStack_a0 = puVar17;
        puStack_98 = puVar16;
code_r0x000101c22d08:
        puStack_b0 = puVar19;
        puStack_a8 = puVar18;
code_r0x000101c22d0c:
        puStack_e8 = puVar11;
        puStack_e0 = puVar10;
        puStack_b8 = puVar20;
code_r0x000101c22d14:
        puStack_f0 = puVar12;
code_r0x000101c22d18:
        puStack_108 = puVar29;
code_r0x000101c22d1c:
        func_0x000100403514();
code_r0x000101c22d20:
        puVar22 = puStack_100;
        puVar29 = puStack_108;
code_r0x000101c22d24:
        puVar8 = puStack_d0;
        puVar9 = puStack_d8;
        puVar10 = puStack_e0;
        puVar11 = puStack_e8;
        puVar12 = puStack_f0;
        puVar13 = puStack_f8;
code_r0x000101c22d30:
        puVar3 = puStack_c0;
        puVar7 = puStack_c8;
        puVar17 = puStack_a0;
        puVar18 = puStack_a8;
        puVar19 = puStack_b0;
        puVar20 = puStack_b8;
code_r0x000101c22d3c:
        puVar24 = puVar21;
        puVar16 = puStack_98;
      }
      *(undefined **)(puStack_70 + 0x10) = param_1;
      puVar14 = (ulong *)(puStack_70 + (long)puVar6 * 0x10);
      puVar21 = puStack_70;
code_r0x000101c22cd0:
      puVar14[4] = (ulong)puVar25;
      puVar14[5] = (ulong)puVar28;
code_r0x000101c22cd4:
      puVar23 = puVar23 + -1;
      in_ZR = puVar23 == (undefined *)0x0;
code_r0x000101c22cd8:
      pbVar26 = pbVar26 + 1;
    } while (!(bool)in_ZR);
code_r0x000101c22cdc:
  }
  uVar4 = 0x112d38270;
  puStack_70 = puVar21;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar5 = uVar4;
  func_0x00010011d734();
  puVar3 = (undefined *)0x20;
  puVar7 = (undefined *)0xe100000000000000;
  func_0x000107c5fa80(0x20,0xe100000000000000,uVar4,uVar5);
  func_0x000107c6142c(puVar21);
code_r0x000101c22db4:
  auVar30._8_8_ = puVar7;
  auVar30._0_8_ = puVar3;
  return auVar30;
code_r0x000101c22efc:
  puVar3 = puVar6;
  (*pcRam6e696d6165727483)
            (param_1,puVar3 + lRam6e696d61657274bb * (long)puVar23 +
                              ((ulong)(puVar14 + 4) & ((ulong)puVar14 ^ 0xffffffffffffffff)),puVar21
            );
  pcVar2 = pcRam6e696d6165727493;
  puVar6 = puVar22;
  puVar7 = param_1;
  (*pcRam6e696d6165727493)(puVar22,param_1,puVar21);
  func_0x000107c5ebb4();
  puVar8 = puVar7;
  func_0x000107c5fb1c();
  func_0x000107c6142c(puVar7);
  if ((puVar6 == (undefined *)0x65646f63) && (puVar8 == (undefined *)0xe400000000000000)) {
    func_0x000107c6142c(puVar3);
    puVar3 = (undefined *)0xe400000000000000;
LAB_101c22fdc:
    func_0x000107c6142c(puVar3);
    puVar23 = puStack_70;
    puVar6 = puStack_70;
    (*pcVar2)(puStack_70,puVar22,puVar21);
    func_0x000107c5ebb8();
    (*pcRam6e696d616572747b)(puVar23,puVar21);
    goto LAB_101c23020;
  }
  func_0x000107c605b8(puVar6,puVar8,0x65646f63,0xe400000000000000,0);
  func_0x000107c6142c(puVar8);
  if (((ulong)puVar6 & 1) != 0) goto LAB_101c22fdc;
  puVar23 = puVar23 + 1;
  (*pcRam6e696d616572747b)(puVar22,puVar21);
  if (puStack_68 == puVar23) goto LAB_101c22fb8;
LAB_101c22eec:
  if (*(undefined **)(puVar3 + 0x10) <= puVar23) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c23044);
    (*pcVar2)();
  }
  puVar14 = (ulong *)(ulong)bRam6e696d61657274c3;
  puVar6 = puVar3;
  goto code_r0x000101c22efc;
LAB_101c22fb8:
  func_0x000107c6142c(puVar3);
LAB_101c22fc4:
  puVar6 = (undefined *)0x0;
  puVar22 = (undefined *)0x0;
LAB_101c23020:
  auVar31._8_8_ = puVar22;
  auVar31._0_8_ = puVar6;
  return auVar31;
}



/* Entry: 101c22dc4; end: 101c22e0f;  */

void FUN_101c22dc4(undefined8 param_1)

{
  func_0x0001000285a8(0x112e09750,&UNK_10d9dfb40);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101c22e10,param_1);
  return;
}



/* Entry: 101c22e10; end: 101c22e2f;  */

void FUN_101c22e10(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  param_1[3] = &UNK_110457878;
  param_1[4] = &PTR_DAT_110457830;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101c22e30; end: 101c2354b;  */

void FUN_101c22e30(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lStack_70;
  ulong uStack_68;
  
  lVar1 = 0;
  func_0x000107c5ebbc();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  uVar5 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = uVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000101c23044(param_1,param_2);
  if (param_1 != 0) {
    uStack_68 = *(ulong *)(param_1 + 0x10);
    lStack_70 = lVar7 - extraout_x12_00;
    if (uStack_68 != 0) {
      uVar6 = 0;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x101c23044);
          (*pcVar9)();
        }
        (**(code **)(lVar8 + 0x10))
                  (lVar7,param_1 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                                   ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) +
                         *(long *)(lVar8 + 0x48) * uVar6,lVar1);
        pcVar9 = *(code **)(lVar8 + 0x20);
        uVar2 = uVar5;
        lVar3 = lVar7;
        (*pcVar9)(uVar5,lVar7,lVar1);
        func_0x000107c5ebb4();
        lVar4 = lVar3;
        func_0x000107c5fb1c();
        func_0x000107c6142c(lVar3);
        if ((uVar2 == 0x65646f63) && (lVar4 == -0x1c00000000000000)) {
          func_0x000107c6142c(param_1);
          param_1 = -0x1c00000000000000;
LAB_101c22fdc:
          func_0x000107c6142c(param_1);
          lVar7 = lStack_70;
          (*pcVar9)(lStack_70,uVar5,lVar1);
          func_0x000107c5ebb8();
          (**(code **)(lVar8 + 8))(lVar7,lVar1);
          return;
        }
        func_0x000107c605b8(uVar2,lVar4,0x65646f63,0xe400000000000000,0);
        func_0x000107c6142c(lVar4);
        if ((uVar2 & 1) != 0) goto LAB_101c22fdc;
        uVar6 = uVar6 + 1;
        (**(code **)(lVar8 + 8))(uVar5,lVar1);
      } while (uStack_68 != uVar6);
    }
    func_0x000107c6142c(param_1);
  }
  return;
}



/* Entry: 101c2354c; end: 101c2357b;  */

void FUN_101c2354c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar6;
  undefined8 *unaff_x20;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lStack_70;
  ulong uStack_68;
  
  uVar5 = *unaff_x20;
  lVar1 = 0;
  func_0x000107c5ebbc();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  uVar6 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = uVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000101c23044(param_1,uVar5);
  if (param_1 != 0) {
    uStack_68 = *(ulong *)(param_1 + 0x10);
    lStack_70 = lVar8 - extraout_x12_00;
    if (uStack_68 != 0) {
      uVar7 = 0;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x101c23044);
          (*pcVar10)();
        }
        (**(code **)(lVar9 + 0x10))
                  (lVar8,param_1 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                                   ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)) +
                         *(long *)(lVar9 + 0x48) * uVar7,lVar1);
        pcVar10 = *(code **)(lVar9 + 0x20);
        uVar2 = uVar6;
        lVar3 = lVar8;
        (*pcVar10)(uVar6,lVar8,lVar1);
        func_0x000107c5ebb4();
        lVar4 = lVar3;
        func_0x000107c5fb1c();
        func_0x000107c6142c(lVar3);
        if ((uVar2 == 0x65646f63) && (lVar4 == -0x1c00000000000000)) {
          func_0x000107c6142c(param_1);
          param_1 = -0x1c00000000000000;
LAB_101c22fdc:
          func_0x000107c6142c(param_1);
          lVar8 = lStack_70;
          (*pcVar10)(lStack_70,uVar6,lVar1);
          func_0x000107c5ebb8();
          (**(code **)(lVar9 + 8))(lVar8,lVar1);
          return;
        }
        func_0x000107c605b8(uVar2,lVar4,0x65646f63,0xe400000000000000,0);
        func_0x000107c6142c(lVar4);
        if ((uVar2 & 1) != 0) goto LAB_101c22fdc;
        uVar7 = uVar7 + 1;
        (**(code **)(lVar9 + 8))(uVar6,lVar1);
      } while (uStack_68 != uVar7);
    }
    func_0x000107c6142c(param_1);
  }
  return;
}



/* Entry: 101c2357c; end: 101c235c7;  */

void FUN_101c2357c(undefined8 param_1)

{
  func_0x0001000285a8(0x112e09758,&UNK_10d9dfbd0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101c2361c,param_1);
  return;
}



/* Entry: 101c235c8; end: 101c2361b;  */

void FUN_101c235c8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_101c238b4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110457890;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}


