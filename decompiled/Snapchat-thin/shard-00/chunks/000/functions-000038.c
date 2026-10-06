/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000ed3ac; end: 1000ed3cb;  */

void FUN_1000ed3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined8 *)(unaff_x22 + 0x60) = param_7;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000ed3cc,0,0);
  return;
}



/* Entry: 1000ed3cc; end: 1000ed8cb;  */

void FUN_1000ed3cc(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x22;
  long lVar15;
  ulong uVar16;
  
  lVar12 = *(long *)(unaff_x22 + 0x40);
  if (lVar12 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010f1edbe0);
    func_0x000107c4acc8(lVar12);
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar5 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar8 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar4 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar4);
  lVar5 = 0;
  func_0x000107c5fd0c();
  pcVar10 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar10)(uVar4,1,1,lVar5);
  lVar5 = 0x112da1578;
  FUN_1000285a8(0x112da1578,&UNK_10dcd5b50);
  lVar15 = *(long *)(lVar5 + -8);
  lVar13 = *(long *)(lVar15 + 0x40);
  uVar6 = lVar13 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar6);
  (**(code **)(lVar15 + 0x10))();
  uVar11 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar16 = uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff);
  uVar14 = lVar13 + uVar16 + 7 & 0xfffffffffffffff8;
  puVar7 = &UNK_110744c18;
  func_0x000107c613fc(&UNK_110744c18,uVar14 + 0x10,uVar11 | 7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  (**(code **)(lVar15 + 0x20))(puVar7 + uVar16,uVar6,lVar5);
  *(undefined8 *)(puVar7 + uVar14) = uVar3;
  *(undefined8 *)(puVar7 + uVar14 + 8) = uVar1;
  func_0x000107c615c0(uVar6);
  func_0x000107c615f0(lVar12);
  func_0x000107c6157c(uVar1);
  FUN_1000ed8cc(uVar4,&UNK_10dcd5f70,puVar7,&UNK_110744bf0,PTR___sytN_11034f1b0 + 8,&UNK_10dcd5f60);
  func_0x0001000edad8(uVar4,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar4);
  uVar4 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar4);
  (*pcVar10)();
  lVar5 = 0x112da1570;
  FUN_1000285a8(0x112da1570,&UNK_10d944870);
  lVar13 = *(long *)(lVar5 + -8);
  lVar15 = *(long *)(lVar13 + 0x40);
  uVar6 = lVar15 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar6);
  (**(code **)(lVar13 + 0x10))();
  uVar11 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar16 = uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff);
  uVar14 = lVar15 + uVar16 + 7 & 0xfffffffffffffff8;
  puVar7 = &UNK_110744c40;
  func_0x000107c613fc(&UNK_110744c40,uVar14 + 0x10,uVar11 | 7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  (**(code **)(lVar13 + 0x20))(puVar7 + uVar16,uVar6,lVar5);
  *(undefined8 *)(puVar7 + uVar14) = uVar3;
  *(undefined8 *)(puVar7 + uVar14 + 8) = uVar1;
  func_0x000107c615c0(uVar6);
  func_0x000107c615f0(lVar12);
  func_0x000107c6157c(uVar1);
  FUN_1000ed8cc(uVar4,&UNK_10dcd5f78,puVar7,&UNK_110744bf0,PTR___sytN_11034f1b0 + 8,&UNK_10dcd5f60);
  func_0x0001000edad8(uVar4,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar4);
  uVar8 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar8);
  (*pcVar10)();
  lVar5 = 0x112da1580;
  FUN_1000285a8(0x112da1580,&UNK_10d944880);
  lVar13 = *(long *)(lVar5 + -8);
  lVar15 = *(long *)(lVar13 + 0x40);
  uVar4 = lVar15 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (**(code **)(lVar13 + 0x10))();
  uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar14 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  uVar11 = lVar15 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar7 = &UNK_110744c68;
  func_0x000107c613fc(&UNK_110744c68,uVar11 + 0x10,uVar6 | 7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  (**(code **)(lVar13 + 0x20))(puVar7 + uVar14,uVar4,lVar5);
  *(undefined8 *)(puVar7 + uVar11) = uVar3;
  *(undefined8 *)(puVar7 + uVar11 + 8) = uVar1;
  func_0x000107c615c0(uVar4);
  func_0x000107c615f0(lVar12);
  func_0x000107c6157c(uVar1);
  FUN_1000ed8cc(uVar8,&UNK_10dcd5f80,puVar7,&UNK_110744bf0,PTR___sytN_11034f1b0 + 8,&UNK_10dcd5f60);
  func_0x0001000edad8(uVar8,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar8);
  iVar2 = 2;
  FUN_100029b9c(2,0x12,0,0);
  if (iVar2 != 0) {
    plVar9 = (long *)(ulong)*(uint *)(
                                     PTR___sScG22awaitAllRemainingTasks9isolationyScA_pSgYi_tYaFTu_11034fbd0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar9;
    uVar3 = 0x112dc6b70;
    FUN_1000285a8(0x112dc6b70,&UNK_10da1df30);
    *plVar9 = unaff_x22;
    plVar9[1] = (long)&UNK_1040bbe90;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG22awaitAllRemainingTasks9isolationyScA_pSgYi_tYaF_11034fbc8)(0,0,uVar3);
    return;
  }
  uVar3 = **(undefined8 **)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x80,uVar3,&UNK_1040bbed8,unaff_x22 + 0x10);
  return;
}



/* Entry: 1000ed8cc; end: 1000eda8f;  */

void FUN_1000ed8cc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d453c8;
  uStack_a0 = param_6;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = (long)&uStack_a0 - extraout_x8;
  FUN_1000eda90(param_1,uVar4,0x112d453c8,&UNK_10d90ac60);
  lVar1 = 0;
  func_0x000107c5fd0c();
  lVar2 = *(long *)(lVar1 + -8);
  uVar5 = uVar4;
  (**(code **)(lVar2 + 0x30))(uVar4,1,lVar1);
  if ((int)uVar5 == 1) {
    func_0x0001000edad8(uVar4,0x112d453c8,&UNK_10d90ac60);
    uVar5 = 0x3100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar2 + 8))(uVar4,lVar1);
    uVar5 = uVar5 & 0xff | 0x3100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  if (lVar1 == 0) {
    lVar2 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_3 + 0x18);
    lVar2 = lVar1;
    func_0x000107c614f0();
    func_0x000107c615f0(lVar1);
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar1);
  }
  uVar3 = *unaff_x20;
  func_0x000107c613fc(param_4,0x20,7);
  *(undefined8 *)(param_4 + 0x10) = param_2;
  *(long *)(param_4 + 0x18) = param_3;
  puStack_90 = (undefined8 *)0x0;
  if (lVar6 != 0 || lVar2 != 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    puStack_90 = &uStack_80;
    lStack_70 = lVar2;
    lStack_68 = lVar6;
  }
  uStack_98 = 1;
  uStack_88 = uVar3;
  func_0x000107c615bc(uVar5,&uStack_98,param_5,uStack_a0,param_4);
  func_0x000107c61574();
  return;
}



/* Entry: 1000eda90; end: 1000edb17;  */

undefined8 FUN_1000eda90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1000edb18; end: 1000edb87;  */

void FUN_1000edb18(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)&UNK_1040be0bc;
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar5,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar4[2] = (long)plVar5;
  *plVar5 = (long)plVar4;
  plVar5[1] = (long)&UNK_10175c218;
                    /* WARNING: Could not recover jumptable at 0x0001000edbe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar5,param_1);
  return;
}



/* Entry: 1000edb88; end: 1000edbeb;  */

void FUN_1000edb88(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)&UNK_10175c218;
                    /* WARNING: Could not recover jumptable at 0x0001000edbe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 1000edbec; end: 1000edcaf;  */

void FUN_1000edbec(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = 0x112da1578;
  FUN_1000285a8(0x112da1578,&UNK_10dcd5b50);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + uVar3);
  lVar5 = *(long *)(unaff_x20 + (uVar3 + 0xf & 0xffffffffffffff8));
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)&UNK_1040be0ec;
  plVar2[9] = lVar4;
  plVar2[10] = lVar5;
  plVar2[8] = unaff_x20 + uVar6;
  lVar4 = 0x113060898;
  FUN_1000285a8(0x113060898,&UNK_10dcd5f68,uVar1);
  plVar2[0xb] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0xc] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xd] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000edd20,0,0);
  return;
}



/* Entry: 1000edcb0; end: 1000edd1f;  */

void FUN_1000edcb0(void)

{
  ulong uVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x40) = in_x3;
  lVar2 = 0x113060898;
  FUN_1000285a8(0x113060898,&UNK_10dcd5f68);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000edd20,0,0);
  return;
}



/* Entry: 1000edd20; end: 1000edd9b;  */

void FUN_1000edd20(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_1000285a8(0x112da1578,&UNK_10dcd5b50);
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000ef158;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0x30,*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 1000edd9c; end: 1000ede5f;  */

void FUN_1000edd9c(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = 0x112da1570;
  FUN_1000285a8(0x112da1570,&UNK_10d944870);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + uVar3);
  lVar5 = *(long *)(unaff_x20 + (uVar3 + 0xf & 0xffffffffffffff8));
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)&UNK_1040be0f0;
  plVar2[0x11] = lVar4;
  plVar2[0x12] = lVar5;
  plVar2[0x10] = unaff_x20 + uVar6;
  lVar4 = 0x113060890;
  FUN_1000285a8(0x113060890,&UNK_10dcd5f50,uVar1);
  plVar2[0x13] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0x14] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x15] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000eded0,0,0);
  return;
}



/* Entry: 1000ede60; end: 1000edecf;  */

void FUN_1000ede60(void)

{
  ulong uVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x90) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x80) = in_x3;
  lVar2 = 0x113060890;
  FUN_1000285a8(0x113060890,&UNK_10dcd5f50);
  *(long *)(unaff_x22 + 0x98) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000eded0,0,0);
  return;
}



/* Entry: 1000eded0; end: 1000edf4b;  */

void FUN_1000eded0(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  FUN_1000285a8(0x112da1570,&UNK_10d944870);
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000edf4c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0x70,*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 1000edf4c; end: 1000edf93;  */

void FUN_1000edf4c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000edf94,0,0);
  return;
}



/* Entry: 1000edf94; end: 1000ee0f7;  */

void FUN_1000edf94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
  cVar2 = *(char *)(unaff_x22 + 0x78);
  *(char *)(unaff_x22 + 0x7a) = cVar2;
  if (*(char *)(unaff_x22 + 0x79) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
    (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x98));
    func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001000edff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(long *)(unaff_x22 + 0x88) != 0) {
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0xe000000000000000;
    func_0x000107c602fc(0x16);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x68));
    *(undefined8 *)(unaff_x22 + 0x50) = 0xd000000000000014;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x800000010f1edc50;
    if (cVar2 == '\x01') {
      param_2 = 0xe300000000000000;
    }
    else {
      FUN_1000e48c0(uVar3);
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000107c5fb78();
    func_0x000107c6142c(param_2);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    func_0x000107c5fadc(uVar3,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c4acc8(uVar4);
    func_0x000107c61170(uVar3);
  }
  if (lRam00000001130606f0 != -1) {
    func_0x000107c61568(0x1130606f0,FUN_1000da650);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000ee0f8,uRam0000000113813118,0);
  return;
}



/* Entry: 1000ee0f8; end: 1000ee2f3;  */

void FUN_1000ee0f8(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x7a);
  lVar8 = *(long *)(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(lVar8 + 0x18);
  puVar9 = *(undefined8 **)(lVar8 + 0x28);
  uVar2 = *(undefined1 *)(lVar8 + 0x30);
  *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined1 *)(lVar8 + 0x20);
  *(char *)(lVar8 + 0x20) = cVar1;
  *(undefined1 *)(lVar8 + 0x30) = uVar2;
  func_0x000107c61434(puVar9);
  FUN_1000ee2f4(uVar7,uVar3,puVar9,uVar2);
  func_0x000107c6142c();
  lVar8 = *(long *)(lVar8 + 200);
  if (cVar1 == '\x01') {
    if (*(char *)(lVar8 + 0x40) == '\x01') goto LAB_1000ee2a8;
  }
  else if (*(char *)(lVar8 + 0x40) != '\x01' && *(int *)(unaff_x22 + 0xb8) == *(int *)(lVar8 + 0x38)
          ) goto LAB_1000ee2a8;
  if (*(char *)(lVar8 + 0x30) != '\x01') {
    uVar7 = *(undefined8 *)(lVar8 + 0x28);
    FUN_1000298f0();
    func_0x000107c61428();
    puVar9 = (undefined8 *)*puVar9;
    func_0x000107c61174();
    FUN_100069b5c(uVar7);
    func_0x000107c61170();
  }
  uVar2 = *(undefined1 *)(unaff_x22 + 0x7a);
  *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined1 *)(lVar8 + 0x40) = uVar2;
  FUN_1000298f0();
  lVar6 = unaff_x22 + 0x10;
  func_0x000107c61428();
  uVar7 = *puVar9;
  if (cVar1 == '\x01') {
    uVar10 = 0x800000010f1edc30;
    func_0x000107c61174(uVar7);
    uVar4 = 0xd000000000000012;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x40) = 0x76697463413a5357;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xee003a6567615065;
    func_0x000107c61174(uVar7);
    FUN_1000e48c0(uVar4);
    func_0x000107c5fb78();
    func_0x000107c6142c(lVar6);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  }
  func_0x000100029b28(uVar4,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar8 + 0x28) = uVar4;
  *(undefined1 *)(lVar8 + 0x30) = 0;
LAB_1000ee2a8:
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1000edf4c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar5,unaff_x22 + 0x70,*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 1000ee2f4; end: 1000ee55f;  */

void FUN_1000ee2f4(int param_1,char param_2,ulong param_3,undefined4 param_4)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  uStack_90 = CONCAT44(uStack_90._4_4_,param_4);
  lVar6 = 0x112e00a00;
  FUN_1000285a8(0x112e00a00,&UNK_10d9d5e90);
  lStack_88 = *(long *)(lVar6 + -8);
  lStack_80 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = (long)&uStack_90 - extraout_x8;
  lVar6 = 0x112e009e8;
  FUN_1000285a8(0x112e009e8,&UNK_10d9d5e80);
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  bVar2 = *(byte *)(unaff_x20 + 0x30);
  if (param_2 == '\x01') {
    if (*(char *)(unaff_x20 + 0x20) != '\x01') goto LAB_1000ee41c;
    func_0x000107c61434(uVar13);
  }
  else {
    if (*(char *)(unaff_x20 + 0x20) == '\x01') goto LAB_1000ee41c;
    uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c61434(uVar13);
    if (param_1 != (int)uVar9) {
      func_0x000107c6142c(uVar13);
      goto LAB_1000ee41c;
    }
  }
  FUN_1000ef64c(param_3,uVar13);
  func_0x000107c6142c(uVar13);
  if (((param_3 & 1) != 0) && ((((uint)uStack_90 ^ bVar2) & 1) == 0)) {
    return;
  }
LAB_1000ee41c:
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar10 = *(long *)(unaff_x20 + 0x10);
  puVar11 = (ulong *)(lVar10 + 0x40);
  uStack_90 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if (-uStack_90 < 0x40) {
    uVar14 = ~(-1L << (-uStack_90 & 0x3f));
  }
  uVar14 = uVar14 & *puVar11;
  uVar7 = 0x3f - uStack_90;
  func_0x000107c61438(lVar10,2);
  lVar12 = 0;
  lVar1 = lVar12;
  while( true ) {
    for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar3 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      (**(code **)(lVar15 + 0x10))
                (lVar8 - extraout_x8_00,
                 *(long *)(lVar10 + 0x38) +
                 *(long *)(lVar15 + 0x48) * (LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar1 << 6),
                 lVar6);
      func_0x000107c5fd28(lVar8);
      (**(code **)(lStack_88 + 8))(lVar8,lStack_80);
      (**(code **)(lVar15 + 8))(lVar8 - extraout_x8_00,lVar6);
      lVar12 = lVar1;
    }
    bVar5 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar5) break;
    if ((long)(uVar7 >> 6) <= lVar1) {
      func_0x000107c6142c(lVar10);
      FUN_1000ee560(lVar10,puVar11,~uStack_90,lVar12,0);
      return;
    }
    uVar14 = puVar11[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1000ee560);
  (*pcVar4)();
}



/* Entry: 1000ee560; end: 1000ee567;  */

void FUN_1000ee560(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1000ee568; end: 1000ee62b;  */

void FUN_1000ee568(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = 0x112da1580;
  FUN_1000285a8(0x112da1580,&UNK_10d944880);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + uVar3);
  lVar5 = *(long *)(unaff_x20 + (uVar3 + 0xf & 0xffffffffffffff8));
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)&UNK_1040be0f4;
  plVar2[0xf] = lVar4;
  plVar2[0x10] = lVar5;
  plVar2[0xe] = unaff_x20 + uVar6;
  lVar4 = 0x112e008e8;
  FUN_1000285a8(0x112e008e8,&UNK_10dad6880,uVar1);
  plVar2[0x11] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0x12] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x13] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000ee69c,0,0);
  return;
}



/* Entry: 1000ee62c; end: 1000ee69b;  */

void FUN_1000ee62c(void)

{
  ulong uVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x80) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x70) = in_x3;
  lVar2 = 0x112e008e8;
  FUN_1000285a8(0x112e008e8,&UNK_10dad6880);
  *(long *)(unaff_x22 + 0x88) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000ee69c,0,0);
  return;
}



/* Entry: 1000ee69c; end: 1000ee717;  */

void FUN_1000ee69c(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  FUN_1000285a8(0x112da1580,&UNK_10d944880);
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)&UNK_1040bc024;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0xb0,*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 1000ee718; end: 1000ee723;  */

void FUN_1000ee718(void)

{
  long lVar1;
  long extraout_x8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100083b20(auStack_58);
  FUN_1000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 8))(auStack_60 + -extraout_x8,uStack_40,lStack_38);
  func_0x0001000293e4(auStack_60 + -extraout_x8);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 1000ee724; end: 1000ee7cb;  */

void FUN_1000ee724(void)

{
  long lVar1;
  long extraout_x8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100083b20(auStack_58);
  FUN_1000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 8))(auStack_60 + -extraout_x8,uStack_40,lStack_38);
  func_0x0001000293e4(auStack_60 + -extraout_x8);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 1000ee7cc; end: 1000ee8fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ee7cc(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  undefined1 *puVar6;
  
  lVar1 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar2 = 0;
  FUN_1000ee8fc();
  lVar1 = lVar2;
  func_0x000107c613fc();
  puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3de88();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar4 == (undefined *)0x0) {
    lVar5 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar6,puVar4);
    func_0x000107c61170(puVar4);
    lVar5 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar6,puVar4 == (undefined *)0x0,1);
  FUN_1001021cc(puVar6,lVar1 + _DAT_1137ff4d8);
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1103c75a0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1000ee8fc; end: 1000ee933;  */

void FUN_1000ee8fc(undefined8 param_1)

{
  if (lRam0000000113444600 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e63c18c);
  return;
}



/* Entry: 1000ee934; end: 1000ee9f3;  */

void FUN_1000ee934(long param_1)

{
  long lVar1;
  
  if (lRam0000000112d71a80 == 0) {
    lVar1 = 0xff;
    func_0x000107c5ede0();
    func_0x000107c60188();
    if (lVar1 == 0) {
      lRam0000000112d71a80 = param_1;
    }
  }
  return;
}



/* Entry: 1000ee9f4; end: 1000eea3b;  */

void FUN_1000ee9f4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000eea3c,0,0);
  return;
}



/* Entry: 1000eea3c; end: 1000eeaf7;  */

void FUN_1000eea3c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar1 = 0;
  FUN_1000c2d68();
  uVar2 = uVar3;
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar3,1,lVar1);
  if ((int)uVar2 == 1) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x58));
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001000eeac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  FUN_1000eeaf8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000eeb40,uVar2,0);
  return;
}



/* Entry: 1000eeaf8; end: 1000eeb3f;  */

undefined8 FUN_1000eeaf8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x113060420;
  FUN_1000285a8(0x113060420,&UNK_10dcd58e0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1000eeb40; end: 1000eec7b;  */

void FUN_1000eeb40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x0001000c74f0(unaff_x22 + 0x10);
  lVar6 = *(long *)(unaff_x22 + 0x10);
  lVar4 = lVar6;
  FUN_1000eed88();
  func_0x000107c6142c(lVar6);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  FUN_1000eef6c();
  func_0x000107c5fe14(uVar7,&UNK_1107ad680,lVar6);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar7;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (lVar6 == 0) {
    func_0x000107c6142c(lVar4);
  }
  else {
    do {
      FUN_1000eefac();
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    func_0x000107c6142c(lVar4);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x18);
  }
  lVar6 = *(long *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  uVar7 = 0x113060278;
  FUN_1000285a8(0x113060278,&UNK_10dcd58c0);
  func_0x000107c5fd28(uVar2,(undefined8 *)(unaff_x22 + 0x20),uVar7);
  (**(code **)(lVar6 + 8))(uVar2,uVar3);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar1;
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1000ee9f4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar5,*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 1000eec7c; end: 1000eed6b;  */

undefined * FUN_1000eec7c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000eed6c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x113060260;
    FUN_1000285a8(0x113060260,&UNK_10dcd57f0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1000eed6c; end: 1000eed87;  */

void FUN_1000eed6c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1000eec7c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1000eed88; end: 1000eef6b;  */

undefined * FUN_1000eed88(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    FUN_1000eed6c(0,lVar7,0);
    uVar1 = param_1 + 0x40;
    uVar13 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar11 = 0;
    do {
      if (uVar13 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000eef5c);
        (*pcVar4)();
      }
      uVar12 = uVar13 >> 6;
      uVar9 = 1L << (uVar13 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar12 * 8) & uVar9) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000eef60);
        (*pcVar4)();
      }
      iVar2 = *(int *)(param_1 + 0x24);
      lVar10 = *(ulong *)(puVar3 + 0x10) + 1;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= *(ulong *)(puVar3 + 0x10)) {
        FUN_1000eed6c(1 < *(ulong *)(puVar3 + 0x18),lVar10,1);
      }
      *(long *)(puVar3 + 0x10) = lVar10;
      uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar8 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000eef64);
        (*pcVar4)();
      }
      uVar5 = *(ulong *)(uVar1 + uVar12 * 8);
      if ((uVar5 & uVar9) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000eef68);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000eef6c);
        (*pcVar4)();
      }
      uVar5 = uVar5 & -2L << (uVar13 & 0x3f);
      if (uVar5 == 0) {
        lVar10 = uVar12 << 6;
        puVar6 = (ulong *)(param_1 + 0x48 + uVar12 * 8);
        do {
          uVar12 = uVar12 + 1;
          if (uVar8 + 0x3f >> 6 <= uVar12) {
            func_0x0001040b8640();
            uVar13 = uVar8;
            goto LAB_1000eee20;
          }
          uVar13 = *puVar6;
          lVar10 = lVar10 + 0x40;
          puVar6 = puVar6 + 1;
        } while (uVar13 == 0);
        func_0x0001040b8640();
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + lVar10;
      }
      else {
        uVar12 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar13 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar13 & 0x7fffffffffffffc0;
      }
LAB_1000eee20:
      lVar11 = lVar11 + 1;
    } while (lVar11 != lVar7);
  }
  return puVar3;
}



/* Entry: 1000eef6c; end: 1000eefab;  */

void FUN_1000eef6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113060258 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3d4c8;
  func_0x000107c61520(&UNK_10dd3d4c8,&UNK_1107ad680);
  puRam0000000113060258 = puVar1;
  return;
}



/* Entry: 1000eefac; end: 1000ef157;  */

bool FUN_1000eefac(void)

{
  ulong uVar1;
  ulong uVar2;
  long *unaff_x20;
  long lVar3;
  long alStack_78 [9];
  
  lVar3 = *unaff_x20;
  func_0x000107c6068c(alStack_78,*(undefined8 *)(lVar3 + 0x28));
  uVar2 = 0;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = uVar2 & (-1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f) ^ 0xffffffffffffffffU);
  uVar1 = 1L << (uVar2 & 0x3f) & *(ulong *)(lVar3 + (uVar2 >> 3 & 0xffffffffffffff8) + 0x38);
  if (uVar1 == 0) {
    lVar3 = *unaff_x20;
    func_0x000107c61558(lVar3);
    alStack_78[0] = *unaff_x20;
    func_0x0001000ef05c(uVar2,lVar3);
    *unaff_x20 = alStack_78[0];
  }
  return uVar1 == 0;
}



/* Entry: 1000ef158; end: 1000ef19f;  */

void FUN_1000ef158(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000ef1a0,0,0);
  return;
}



/* Entry: 1000ef1a0; end: 1000ef36f;  */

void FUN_1000ef1a0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x22 + 0x30);
  if (lVar9 == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x58));
    func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001000ef270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0x78) = lVar9;
  if (*(long *)(unaff_x22 + 0x48) != 0) {
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0xe000000000000000;
    func_0x000107c602fc(0x1e);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x28));
    lVar6 = 0;
    uVar4 = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0xd00000000000001c;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x800000010f1edc70;
    lVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    do {
      uVar8 = *(ulong *)(lVar9 + 0x38 + uVar4 * 8);
      if (uVar8 != 0) {
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
        if (uVar8 - lVar7 != lVar6) {
          if ((-lVar6 < 0) || (lVar7 <= (long)(uVar8 - lVar6))) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ef36c);
            (*pcVar2)();
          }
          if ((*(ulong *)(lVar9 + 0x38 + uVar4 * 8) >> (uVar8 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ef370);
            (*pcVar2)();
          }
          uVar5 = 0;
          goto LAB_1000ef2b4;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + -0x40;
    } while (lVar7 + 0x3fU >> 6 != uVar4);
    uVar5 = 0xffffffffffffffff;
LAB_1000ef2b4:
    uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x38) = uVar5;
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
    func_0x000107c5fadc(uVar5,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c4acc8(uVar10);
    func_0x000107c61170(uVar5);
  }
  if (lRam00000001130606f0 != -1) {
    func_0x000107c61568(0x1130606f0,FUN_1000da650);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000ef5dc,uRam0000000113813118,0);
  return;
}



/* Entry: 1000ef370; end: 1000ef5db;  */

void FUN_1000ef370(undefined8 param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar8 = 0x112e00a00;
  FUN_1000285a8(0x112e00a00,&UNK_10d9d5e90);
  lStack_88 = *(long *)(lVar8 + -8);
  lStack_80 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = 0x112e009e8;
  puStack_90 = auStack_a0 + -extraout_x8;
  FUN_1000285a8(0x112e009e8,&UNK_10d9d5e80);
  lVar11 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)(auStack_a0 + -extraout_x8) - extraout_x8_00;
  uVar9 = *(ulong *)(unaff_x20 + 0x28);
  uVar17 = uVar9;
  func_0x000107c61434();
  FUN_1000ef64c();
  func_0x000107c6142c(uVar9);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x30);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined1 *)(unaff_x20 + 0x30) = uVar2;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x000107c61434(param_1);
  FUN_1000ee2f4(uVar10,uVar3,uVar16,uVar2);
  func_0x000107c6142c(uVar16);
  FUN_1000ef75c(param_1);
  if (((uVar17 & 1) != 0) && (*(long *)(unaff_x20 + 0xd0) != 0)) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
    lVar13 = *(long *)(unaff_x20 + 0x10);
    puVar14 = (ulong *)(lVar13 + 0x40);
    uStack_98 = -1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
    uVar17 = 0xffffffffffffffff;
    if (-uStack_98 < 0x40) {
      uVar17 = ~(-1L << (-uStack_98 & 0x3f));
    }
    uVar17 = uVar17 & *puVar14;
    uVar9 = 0x3f - uStack_98;
    func_0x000107c61438(lVar13,2);
    lVar15 = 0;
    lVar1 = lVar15;
    while( true ) {
      for (; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
        uVar4 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        (**(code **)(lVar11 + 0x10))
                  (lVar12,*(long *)(lVar13 + 0x38) +
                          *(long *)(lVar11 + 0x48) *
                          (LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | lVar1 << 6),lVar8);
        puVar5 = puStack_90;
        func_0x000107c5fd28(puStack_90);
        (**(code **)(lStack_88 + 8))(puVar5,lStack_80);
        (**(code **)(lVar11 + 8))(lVar12,lVar8);
        lVar15 = lVar1;
      }
      bVar7 = SCARRY8(lVar1,1);
      lVar1 = lVar1 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000ef5dc);
        (*pcVar6)();
      }
      if ((long)(uVar9 >> 6) <= lVar1) break;
      uVar17 = puVar14[lVar1];
    }
    func_0x000107c6142c(lVar13);
    FUN_1000ee560(lVar13,puVar14,~uStack_98,lVar15,0);
  }
  return;
}



/* Entry: 1000ef5dc; end: 1000ef64b;  */

void FUN_1000ef5dc(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  FUN_1000ef370(uVar2);
  func_0x000107c6142c(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000f0d0c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0x30,*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 1000ef64c; end: 1000ef75b;  */

undefined8 FUN_1000ef64c(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_98 [72];
  
  if (param_1 == param_2) {
LAB_1000ef730:
    uVar4 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      lVar6 = 0;
      uVar5 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar7 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar7 = ~(-1L << (uVar5 & 0x3f));
      }
      uVar7 = uVar7 & *(ulong *)(param_1 + 0x38);
      do {
        while (uVar7 == 0) {
          bVar2 = SCARRY8(lVar6,1);
          lVar6 = lVar6 + 1;
          if (bVar2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1000ef75c);
            (*pcVar1)();
          }
          if ((long)(uVar5 + 0x3f >> 6) <= lVar6) goto LAB_1000ef730;
          uVar7 = ((ulong *)(param_1 + 0x38))[lVar6];
        }
        uVar7 = uVar7 - 1 & uVar7;
        func_0x000107c6068c(auStack_98,*(undefined8 *)(param_2 + 0x28));
        uVar3 = 0;
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar3 = uVar3 & (-1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f) ^ 0xffffffffffffffffU);
      } while ((*(ulong *)(param_2 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 1000ef75c; end: 1000efbb3;  */

void FUN_1000ef75c(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 **ppuVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x20;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 auStack_a8 [3];
  undefined8 *apuStack_90 [3];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_78,0,0);
  puVar5 = *(undefined8 **)(unaff_x20 + 0x20);
  func_0x000107c61434();
  FUN_1000efbb4();
  if ((ulong)puVar5[2] >> 3 < (ulong)param_1[2]) {
    func_0x000107c61434(puVar5);
    puVar6 = param_1;
    FUN_1000efcb0(param_1,puVar5);
  }
  else {
    apuStack_90[0] = puVar5;
    func_0x000107c61434(puVar5);
    func_0x000100c8a5c4(param_1);
    puVar6 = apuStack_90[0];
  }
  lVar20 = 0;
  uVar14 = 1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(puVar6 + 4) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar18 = uVar18 & puVar6[7];
  while( true ) {
    while (uVar18 != 0) {
      uVar18 = uVar18 - 1 & uVar18;
      ppuVar13 = apuStack_90;
      func_0x000107c61428(unaff_x20 + 0x20,ppuVar13,0x20,0);
      puVar16 = *(undefined8 **)(unaff_x20 + 0x20);
      if (puVar16[2] != 0) {
        puVar7 = puVar16;
        func_0x000107c61434();
        FUN_1000afb9c();
        if (((ulong)ppuVar13 & 1) == 0) {
          func_0x000107c6142c(puVar16);
        }
        else {
          uVar19 = *(undefined8 *)(puVar16[7] + (long)puVar7 * 8);
          func_0x000107c614a8(apuStack_90);
          func_0x000107c6142c();
          FUN_1000298f0();
          func_0x000107c61428();
          uVar8 = *puVar16;
          func_0x000107c61174(uVar8);
          FUN_100069b5c(uVar19);
          func_0x000107c61170(uVar8);
          ppuVar13 = apuStack_90;
          func_0x000107c61428(unaff_x20 + 0x20,ppuVar13,0x21,0);
          uVar19 = *(undefined8 *)(unaff_x20 + 0x20);
          uVar8 = uVar19;
          func_0x000107c61434(uVar19);
          FUN_1000afb9c();
          func_0x000107c6142c(uVar19);
          if (((ulong)ppuVar13 & 1) != 0) {
            iVar4 = (int)*(undefined8 *)(unaff_x20 + 0x20);
            func_0x000107c61558();
            auStack_a8[0] = *(undefined8 *)(unaff_x20 + 0x20);
            *(undefined8 *)(unaff_x20 + 0x20) = 0x8000000000000000;
            if (iVar4 == 0) {
              func_0x0001040be5c0();
            }
            uVar19 = auStack_a8[0];
            func_0x000100c8a6ac(uVar8,auStack_a8[0]);
            *(undefined8 *)(unaff_x20 + 0x20) = uVar19;
          }
        }
      }
      func_0x000107c614a8(apuStack_90);
    }
    bVar3 = SCARRY8(lVar20,1);
    lVar20 = lVar20 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000efb98);
      (*pcVar2)();
    }
    if ((long)(uVar14 + 0x3f >> 6) <= lVar20) break;
    uVar18 = (puVar6 + 7)[lVar20];
  }
  func_0x000107c61574(puVar6);
  if ((ulong)param_1[2] >> 3 < (ulong)puVar5[2]) {
    func_0x000107c61434(param_1);
    puVar6 = puVar5;
    FUN_1000efcb0(puVar5,param_1);
    func_0x000107c6142c();
  }
  else {
    apuStack_90[0] = param_1;
    func_0x000107c61434(param_1);
    func_0x000100c8a5c4(puVar5);
    func_0x000107c6142c();
    puVar6 = apuStack_90[0];
  }
  lVar20 = 0;
  uVar14 = 1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(puVar6 + 4) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar18 = uVar18 & puVar6[7];
  do {
    while (uVar18 == 0) {
      bVar3 = SCARRY8(lVar20,1);
      lVar20 = lVar20 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000efb9c);
        (*pcVar2)();
      }
      if ((long)(uVar14 + 0x3f >> 6) <= lVar20) {
        func_0x000107c61574(puVar6);
        return;
      }
      uVar18 = (puVar6 + 7)[lVar20];
    }
    FUN_1000298f0();
    func_0x000107c61428();
    uVar8 = *puVar5;
    func_0x000107c61174(uVar8);
    uVar19 = 0xd00000000000001a;
    func_0x000100029b28(0xd00000000000001a,0x800000010f1edc90);
    func_0x000107c61170(uVar8);
    puVar5 = auStack_a8;
    func_0x000107c61428(unaff_x20 + 0x20,puVar5,0x21,0);
    uVar9 = *(ulong *)(unaff_x20 + 0x20);
    func_0x000107c61558();
    lVar17 = *(long *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x20) = 0x8000000000000000;
    uVar10 = uVar9;
    FUN_1000afb9c();
    uVar15 = (ulong)~(uint)puVar5 & 1;
    uVar11 = *(long *)(lVar17 + 0x10) + uVar15;
    if (SCARRY8(*(long *)(lVar17 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000efba0);
      (*pcVar2)();
    }
    if (*(long *)(lVar17 + 0x18) < (long)uVar11) {
      func_0x0001000ecb3c();
      uVar12 = (uint)uVar9;
      FUN_1000afb9c();
      uVar10 = uVar11;
      if (((uint)puVar5 & 1) != (uVar12 & 1)) {
        func_0x000107c60624(&UNK_1107ad680);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000efbb4);
        (*pcVar2)();
      }
LAB_1000efb10:
      if (((ulong)puVar5 & 1) != 0) goto LAB_1000efa08;
LAB_1000efb18:
      lVar1 = lVar17 + (uVar10 >> 6) * 8;
      *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar10 & 0x3f);
      *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar10 * 8) = uVar19;
      if (SCARRY8(*(long *)(lVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000efba4);
        (*pcVar2)();
      }
      *(long *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + 1;
    }
    else {
      if ((uVar9 & 1) != 0) goto LAB_1000efb10;
      func_0x0001040be5c0();
      if (((ulong)puVar5 & 1) == 0) goto LAB_1000efb18;
LAB_1000efa08:
      *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar10 * 8) = uVar19;
    }
    uVar18 = uVar18 - 1 & uVar18;
    *(long *)(unaff_x20 + 0x20) = lVar17;
    puVar5 = auStack_a8;
    func_0x000107c614a8();
  } while( true );
}



/* Entry: 1000efbb4; end: 1000efca7;  */

undefined8 FUN_1000efbb4(long param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  lVar5 = param_1;
  FUN_1000eef6c();
  func_0x000107c5fe14(uVar3,&UNK_1107ad680,lVar5);
  lVar5 = 0;
  puVar4 = (ulong *)(param_1 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar8 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar8 = uVar8 & *puVar4;
  lVar6 = lVar5;
  while( true ) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      FUN_1000eefac();
      lVar6 = lVar5;
    }
    bVar2 = SCARRY8(lVar5,1);
    lVar5 = lVar5 + 1;
    if (bVar2) break;
    if ((long)(0x3f - uVar7 >> 6) <= lVar5) {
      FUN_1000efca8(param_1,puVar4,~uVar7,lVar6,0);
      return uVar3;
    }
    uVar8 = puVar4[lVar5];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000efca8);
  (*pcVar1)();
}



/* Entry: 1000efca8; end: 1000efcaf;  */

void FUN_1000efca8(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1000efcb0; end: 1000effa7;  */

/* WARNING: Removing unreachable block (ram,0x0001000eff54) */
/* WARNING: Removing unreachable block (ram,0x0001000eff64) */

undefined * FUN_1000efcb0(long param_1,undefined *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined auStack_f0 [8];
  undefined *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined *puStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  long lStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 0x10) == 0) {
    func_0x000107c61574(param_2);
    param_2 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  else {
    puVar8 = (ulong *)(param_1 + 0x38);
    uVar6 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if (-uVar6 < 0x40) {
      uVar11 = ~(-1L << (-uVar6 & 0x3f));
    }
    uVar11 = uVar11 & *puVar8;
    func_0x000107c61434();
    lVar9 = 0;
    lVar10 = lVar9;
    do {
      while (uVar11 == 0) {
        bVar2 = SCARRY8(lVar9,1);
        lVar9 = lVar9 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000efec4);
          (*pcVar1)();
        }
        if ((long)(0x3f - uVar6 >> 6) <= lVar9) {
          FUN_1000efca8(param_1,puVar8,~uVar6,lVar10,0);
          goto LAB_1000efe84;
        }
        uVar11 = puVar8[lVar9];
      }
      uVar11 = uVar11 - 1 & uVar11;
      lStack_90 = param_1;
      puStack_88 = puVar8;
      uStack_80 = ~uVar6;
      lStack_78 = lVar9;
      uStack_70 = uVar11;
      func_0x000107c6068c(auStack_e0,*(undefined8 *)(param_2 + 0x28));
      uVar4 = 0;
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar4 = uVar4 & (-1L << ((ulong)(byte)param_2[0x20] & 0x3f) ^ 0xffffffffffffffffU);
      lVar10 = lVar9;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) == 0);
    uVar6 = (ulong)(byte)param_2[0x20] & 0x3f;
    uVar7 = (1L << uVar6) + 0x3fU >> 6;
    plStack_c0 = &lStack_90;
    uVar11 = uVar7 << 3;
    puStack_d0 = param_2;
    uStack_c8 = uVar4;
    if ((uint)uVar6 < 0xe) {
LAB_1000efddc:
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      puVar5 = auStack_f0 + -(uVar11 + 0xf & 0x3ffffffffffffff0);
      func_0x000107c610b4(puVar5,param_2 + 0x38);
      FUN_1000effa8(puVar5,uVar7,param_2,uVar4,&lStack_90);
    }
    else {
      iVar3 = 2;
      FUN_100029b9c(2,0xf,4,0);
      if ((iVar3 != 0) && (uVar6 = uVar11, func_0x000107c61594(uVar11,8), (uVar6 & 1) != 0))
      goto LAB_1000efddc;
      func_0x000107c6158c(uVar11,0xffffffffffffffff);
      if (uVar11 == 0) goto LAB_1000eff50;
      func_0x000107c610b4();
      func_0x0001040beb50(&puStack_e8,uVar11,uVar7);
      func_0x000107c61590(uVar11,0xffffffffffffffff,0xffffffffffffffff);
      puVar5 = puStack_e8;
    }
    func_0x000107c61574(param_2);
    FUN_1000efca8(lStack_90,puStack_88,uStack_80,lStack_78,uStack_70);
    param_2 = puVar5;
  }
LAB_1000efe84:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_2;
  }
  func_0x000107c60e78();
LAB_1000eff50:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000eff54);
  (*pcVar1)();
}



/* Entry: 1000effa8; end: 1000f011b;  */

void FUN_1000effa8(long param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_a8 [72];
  
  lVar4 = *(long *)(param_3 + 0x10);
  uVar6 = param_4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(param_1 + uVar6) = *(ulong *)(param_1 + uVar6) & (-1L << (param_4 & 0x3f)) - 1U;
  lVar4 = lVar4 + -1;
  do {
    do {
      lVar1 = *(long *)(param_5 + 0x18);
      uVar6 = *(ulong *)(param_5 + 0x20);
      lVar7 = lVar1;
      if (uVar6 == 0) {
        uVar5 = *(long *)(param_5 + 0x10) + 0x40U >> 6;
        lVar9 = lVar1;
        do {
          lVar7 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000f0118);
            (*pcVar2)();
          }
          if ((long)uVar5 <= lVar7) {
            if ((long)uVar5 <= lVar1 + 1) {
              uVar5 = lVar1 + 1;
            }
            *(ulong *)(param_5 + 0x18) = uVar5 - 1;
            *(undefined8 *)(param_5 + 0x20) = 0;
            func_0x000107c6157c(param_3);
            FUN_1000f011c(param_1,param_2,lVar4,param_3);
            return;
          }
          uVar6 = *(ulong *)(*(long *)(param_5 + 8) + lVar7 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar6 == 0);
      }
      *(long *)(param_5 + 0x18) = lVar7;
      *(ulong *)(param_5 + 0x20) = uVar6 - 1 & uVar6;
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_3 + 0x28));
      uVar6 = 0;
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar6 = uVar6 & (-1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f) ^ 0xffffffffffffffffU);
      uVar5 = uVar6 >> 6;
      uVar6 = 1L << (uVar6 & 0x3f);
    } while (((uVar6 & *(ulong *)(param_3 + 0x38 + uVar5 * 8)) == 0) ||
            (uVar8 = *(ulong *)(param_1 + uVar5 * 8),
            *(ulong *)(param_1 + uVar5 * 8) = uVar8 & (uVar6 ^ 0xffffffffffffffff),
            (uVar8 & uVar6) == 0));
    bVar3 = SBORROW8(lVar4,1);
    lVar4 = lVar4 + -1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000f011c);
      (*pcVar2)();
    }
  } while (lVar4 != 0);
  return;
}



/* Entry: 1000f011c; end: 1000f02ef;  */

undefined * FUN_1000f011c(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_a8 [72];
  
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      return param_4;
    }
    FUN_1000285a8(0x112da15a8,&UNK_10d9448b0);
    puVar3 = param_3;
    func_0x000107c602e8();
    if (param_2 < 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = *param_1;
    }
    lVar8 = 0;
    do {
      while (uVar9 == 0) {
        bVar2 = SCARRY8(lVar8,1);
        lVar8 = lVar8 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f02e8);
          (*pcVar1)();
        }
        if (param_2 <= lVar8) goto LAB_1000f0198;
        uVar9 = param_1[lVar8];
      }
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar3 + 0x28));
      uVar4 = 0;
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar7 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar4 = uVar4 & (uVar7 ^ 0xffffffffffffffff);
      uVar5 = uVar4 >> 6;
      uVar6 = -1L << (uVar4 & 0x3f) & (*(ulong *)(puVar3 + uVar5 * 8 + 0x38) ^ 0xffffffffffffffff);
      if (uVar6 == 0) {
        bVar2 = false;
        uVar6 = 0x3f - uVar7 >> 6;
        do {
          uVar4 = uVar5 + 1;
          if ((uVar4 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f02ec);
            (*pcVar1)();
          }
          uVar5 = 0;
          if (uVar4 != uVar6) {
            uVar5 = uVar4;
          }
          bVar2 = (bool)(uVar4 == uVar6 | bVar2);
        } while (*(ulong *)(puVar3 + uVar5 * 8 + 0x38) == 0xffffffffffffffff);
        uVar6 = ~*(ulong *)(puVar3 + uVar5 * 8 + 0x38);
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 << 6;
      }
      else {
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar4 & 0x7fffffffffffffc0;
      }
      uVar5 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar5 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(puVar3 + uVar5 + 0x38);
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      bVar2 = SBORROW8((long)param_3,1);
      param_3 = param_3 + -1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f02f0);
        (*pcVar1)();
      }
      uVar9 = uVar9 - 1 & uVar9;
    } while (param_3 != (undefined *)0x0);
  }
LAB_1000f0198:
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1000f02f0; end: 1000f0b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f02f0(long param_1,undefined *param_2)

{
  undefined8 *****pppppuVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  short *psVar9;
  short *psVar10;
  undefined4 uVar11;
  undefined8 unaff_x20;
  undefined *unaff_x21;
  long lVar12;
  undefined *unaff_x22;
  long lVar13;
  undefined8 ****ppppuStack_188;
  long lStack_180;
  byte bStack_171;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  short *psStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  char cStack_119;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char cStack_101;
  undefined4 uStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  short *psStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char cStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_89;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x20);
  if (lVar13 == 0) goto LAB_1000f09dc;
  func_0x000107c3ac4c(*(undefined8 *)(lVar13 + _DAT_11278eb10));
  FUN_1000f0b84();
  lVar12 = (long)_DAT_11278eb14;
  uVar4 = 0x88;
  func_0x000107c60e20(0x88);
  uVar5 = *(undefined8 *)(lVar13 + _DAT_11278eb10);
  func_0x000107c3ac4c(uVar5);
  FUN_1000e45c8(uVar4,uVar5,6);
  FUN_1000fed50(lVar13 + lVar12,uVar4);
  func_0x000107c6133c(*(undefined8 *)(*(long *)(lVar13 + _DAT_11278eb14) + 0x58),0x1000fed78,0);
  uVar4 = *(undefined8 *)(*(long *)(lVar13 + _DAT_11278eb14) + 0x58);
  func_0x000107c6137c(uVar4,&UNK_10f516c88,0,0,0);
  if ((int)uVar4 == 0xb || (int)uVar4 == 0x1a) {
LAB_1000f03d4:
    uVar4 = *(undefined8 *)(*(long *)(lVar13 + _DAT_11278eb14) + 0x58);
    func_0x000107c61380(uVar4);
    uVar5 = *(undefined8 *)(*(long *)(lVar13 + _DAT_11278eb14) + 0x58);
    func_0x000107c61374(uVar5);
    FUN_10002b838(auStack_e0,uVar5);
    FUN_10002b838(auStack_f8,&UNK_10f780aa9);
    func_0x000107c310c4(&psStack_c8,1,5,uVar4,auStack_e0,auStack_f8,0);
    if (cStack_e1 < '\0') {
      func_0x000107c60e14(auStack_f8[0]);
    }
    if (cStack_c9 < '\0') {
      func_0x000107c60e14(auStack_e0[0]);
    }
    uVar4 = *(undefined8 *)(lVar13 + _DAT_11278eb18);
    psStack_140 = psStack_c8;
    uStack_138 = uStack_c0;
    if (cStack_a1 < '\0') {
      FUN_100033dac(&uStack_130,uStack_b8,uStack_b0);
    }
    else {
      uStack_128 = uStack_b0;
      uStack_130 = uStack_b8;
      cStack_119 = cStack_a1;
    }
    if (cStack_89 < '\0') {
      FUN_100033dac(&uStack_118,uStack_a0,uStack_98);
    }
    else {
      uStack_110 = uStack_98;
      uStack_118 = uStack_a0;
      cStack_101 = cStack_89;
    }
    uStack_100 = uStack_88;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110de5c78;
    uVar5 = *(undefined8 *)(lVar13 + _DAT_11278eb10);
    func_0x000107c4aa34();
    func_0x000107c61180();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar5;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c421dc(uVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar5);
    if (cStack_101 < '\0') {
      func_0x000107c60e14(uStack_118);
    }
    if (cStack_119 < '\0') {
      func_0x000107c60e14(uStack_130);
    }
    FUN_1000fed50(lVar13 + _DAT_11278eb14,0);
    func_0x000107c306cc(*(undefined8 *)(lVar13 + _DAT_11278eb1c));
    uVar5 = *(undefined8 *)(lVar13 + _DAT_11278eb10);
    func_0x000107c61174(uVar5);
    puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c415e0();
    func_0x000107c61180();
    uVar4 = uVar5;
    func_0x000107c5c170(uVar5);
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c43418();
    if ((int)puVar7 != 0) {
      func_0x000107c4ff4c(puVar6);
    }
    uVar8 = uVar5;
    func_0x000107c5c170(uVar5);
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c43418();
    if ((int)puVar7 != 0) {
      func_0x000107c4ff4c(puVar6);
    }
    puVar7 = puVar6;
    func_0x000107c43418();
    if ((int)puVar7 != 0) {
      uStack_80 = 0;
      func_0x000107c4ff4c(puVar6);
    }
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c3ac4c(*(undefined8 *)(lVar13 + _DAT_11278eb10));
    FUN_1000f0b84();
    lVar12 = (long)_DAT_11278eb14;
    uVar4 = 0x88;
    func_0x000107c60e20(0x88);
    uVar5 = *(undefined8 *)(lVar13 + _DAT_11278eb10);
    func_0x000107c3ac4c(uVar5);
    FUN_1000e45c8(uVar4,uVar5,6);
    FUN_1000fed50(lVar13 + lVar12,uVar4);
    func_0x000107c6133c(*(undefined8 *)(*(long *)(lVar13 + _DAT_11278eb14) + 0x58),0x1000fed78,0);
    func_0x000107c6137c(*(undefined8 *)(*(long *)(lVar13 + _DAT_11278eb14) + 0x58),&UNK_10f516c88,0,
                        0,0);
    lVar12 = *(long *)(lVar13 + _DAT_11278eb1c);
    func_0x000107c60d88(lVar12 + 0x28);
    *(undefined1 *)(lVar12 + 0x68) = 1;
    func_0x000107c60d8c(lVar12 + 0x28);
    if (cStack_89 < '\0') {
      func_0x000107c60e14(uStack_a0);
    }
    if (cStack_a1 < '\0') {
      func_0x000107c60e14(uStack_b8);
    }
  }
  else if ((*(byte *)(lVar13 + _DAT_11278eb64) & 1) == 0) {
    uVar5 = *(undefined8 *)(lVar13 + _DAT_11278eb10);
    func_0x000107c5c16c();
    func_0x000107c61180();
    uVar4 = uVar5;
    func_0x000107c61178();
    iVar3 = (int)uVar4;
    func_0x000107c3ac4c();
    func_0x000107c60ec0();
    if (iVar3 == 0) {
      func_0x000107c61178(uVar5);
      func_0x000107c3ac4c();
      func_0x000107c616a4();
    }
    *(bool *)(lVar13 + _DAT_11278eb68) = iVar3 == 0;
    *(undefined1 *)(lVar13 + _DAT_11278eb64) = 1;
    bVar2 = *(byte *)(lVar13 + _DAT_11278eb68);
    func_0x000107c61170(uVar5);
    if ((bVar2 & 1) != 0) goto LAB_1000f07e4;
  }
  else if (*(char *)(lVar13 + _DAT_11278eb68) == '\x01') {
LAB_1000f07e4:
    uVar4 = *(undefined8 *)(*(long *)(lVar13 + _DAT_11278eb14) + 0x58);
    func_0x000107c613a0(uVar4,&UNK_10f780aa9,0xffffffff,&psStack_c8,0);
    if ((int)uVar4 == 0xb || (int)uVar4 == 0x1a) goto LAB_1000f03d4;
    psVar9 = psStack_c8;
    func_0x000107c613a8();
    iVar3 = (int)psVar9;
    if ((iVar3 != 0) && (iVar3 != 0x65)) {
      if (iVar3 == 100) {
        psVar9 = psStack_c8;
        func_0x000107c6135c(psStack_c8,0);
        psVar10 = psStack_c8;
        func_0x000107c61350(psStack_c8,0);
        if (((int)psVar10 == 2) && (*psVar9 == 0x6b6f)) goto LAB_1000f0870;
      }
      func_0x000107c61388(psStack_c8);
      goto LAB_1000f03d4;
    }
LAB_1000f0870:
    func_0x000107c61388(psStack_c8);
  }
  param_2 = &UNK_10f780abc;
  func_0x000107c6137c(*(undefined8 *)(*(long *)(lVar13 + _DAT_11278eb14) + 0x58),&UNK_10f780abc,0,0,
                      0);
  unaff_x20 = *(undefined8 *)(lVar13 + _DAT_11278eb10);
  func_0x000107c61174(unaff_x20);
  unaff_x21 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c43474();
  func_0x000107c61180();
  func_0x000107c57e54();
  unaff_x22 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar4 = unaff_x20;
  func_0x000107c5c170(unaff_x20);
  func_0x000107c61180();
  func_0x000107c43474();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c57e54(unaff_x22);
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar4 = unaff_x20;
  func_0x000107c5c170(unaff_x20);
  func_0x000107c61180();
  func_0x000107c43474(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c57e54(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(unaff_x22);
  func_0x000107c61170(unaff_x21);
  func_0x000107c61170(unaff_x20);
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c61160();
  param_1 = *(long *)(lVar13 + _DAT_11278eb20);
  *(undefined **)(lVar13 + _DAT_11278eb20) = puVar6;
  func_0x000107c61170();
LAB_1000f09dc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    func_0x000107c61170(unaff_x20);
    lVar13 = param_1;
    func_0x000107c60bd8(param_1);
    pcStack_148 = FUN_1000f0b84;
    if (param_2 < (undefined *)0x3) {
      uVar11 = *(undefined4 *)(&UNK_10e5d1ed8 + (long)param_2 * 4);
    }
    else {
      uVar11 = 3;
    }
    puStack_170 = unaff_x22;
    puStack_168 = unaff_x21;
    uStack_160 = unaff_x20;
    lStack_158 = param_1;
    puStack_150 = &stack0xfffffffffffffff0;
    func_0x000107c611c8(lVar13,0x201,uVar11,0);
    func_0x000107c60f10();
    FUN_10002b838(&ppppuStack_188,lVar13);
    func_0x000107c60c5c(&ppppuStack_188,&DAT_10f40a0a9,4);
    pppppuVar1 = (undefined8 *****)ppppuStack_188;
    if (-1 < (char)bStack_171) {
      pppppuVar1 = &ppppuStack_188;
    }
    if (param_2 < (undefined *)0x3) {
      uVar11 = *(undefined4 *)(&UNK_10e5d1ed8 + (long)param_2 * 4);
    }
    else {
      uVar11 = 3;
    }
    func_0x000107c611c8(pppppuVar1,0x201,uVar11,0);
    func_0x000107c60f10();
    pppppuVar1 = (undefined8 *****)ppppuStack_188;
    lVar13 = (long)ppppuStack_188 + lStack_180;
    if (-1 < (char)bStack_171) {
      pppppuVar1 = &ppppuStack_188;
      lVar13 = (long)&ppppuStack_188 + (ulong)bStack_171;
    }
    func_0x000107c60c7c(&ppppuStack_188,(lVar13 - (long)pppppuVar1) + -3,3,&UNK_10f780b70,3);
    pppppuVar1 = (undefined8 *****)ppppuStack_188;
    if (-1 < (char)bStack_171) {
      pppppuVar1 = &ppppuStack_188;
    }
    if (param_2 < (undefined *)0x3) {
      uVar11 = *(undefined4 *)(&UNK_10e5d1ed8 + (long)param_2 * 4);
    }
    else {
      uVar11 = 3;
    }
    func_0x000107c611c8(pppppuVar1,0x201,uVar11,0);
    func_0x000107c60f10();
    if ((char)bStack_171 < '\0') {
      func_0x000107c60e14(ppppuStack_188);
    }
    return;
  }
  return;
}



/* Entry: 1000f0b84; end: 1000f0d0b;  */

void FUN_1000f0b84(undefined8 param_1,ulong param_2)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 **ppuStack_48;
  long lStack_40;
  byte bStack_31;
  
  if (param_2 < 3) {
    uVar3 = *(undefined4 *)(&UNK_10e5d1ed8 + param_2 * 4);
  }
  else {
    uVar3 = 3;
  }
  func_0x000107c611c8(param_1,0x201,uVar3,0);
  func_0x000107c60f10();
  FUN_10002b838(&ppuStack_48,param_1);
  func_0x000107c60c5c(&ppuStack_48,&DAT_10f40a0a9,4);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    pppuVar1 = &ppuStack_48;
  }
  if (param_2 < 3) {
    uVar3 = *(undefined4 *)(&UNK_10e5d1ed8 + param_2 * 4);
  }
  else {
    uVar3 = 3;
  }
  func_0x000107c611c8(pppuVar1,0x201,uVar3,0);
  func_0x000107c60f10();
  pppuVar1 = (undefined8 ***)ppuStack_48;
  lVar2 = (long)ppuStack_48 + lStack_40;
  if (-1 < (char)bStack_31) {
    pppuVar1 = &ppuStack_48;
    lVar2 = (long)&ppuStack_48 + (ulong)bStack_31;
  }
  func_0x000107c60c7c(&ppuStack_48,(lVar2 - (long)pppuVar1) + -3,3,&UNK_10f780b70,3);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    pppuVar1 = &ppuStack_48;
  }
  if (param_2 < 3) {
    uVar3 = *(undefined4 *)(&UNK_10e5d1ed8 + param_2 * 4);
  }
  else {
    uVar3 = 3;
  }
  func_0x000107c611c8(pppuVar1,0x201,uVar3,0);
  func_0x000107c60f10();
  if ((char)bStack_31 < '\0') {
    func_0x000107c60e14(ppuStack_48);
  }
  return;
}



/* Entry: 1000f0d0c; end: 1000f0d53;  */

void FUN_1000f0d0c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000f0d54,0,0);
  return;
}



/* Entry: 1000f0d54; end: 1000f0f23;  */

void FUN_1000f0d54(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x22 + 0x30);
  if (lVar9 == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x58));
    func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001000f0e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0x78) = lVar9;
  if (*(long *)(unaff_x22 + 0x48) != 0) {
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0xe000000000000000;
    func_0x000107c602fc(0x1e);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x28));
    lVar6 = 0;
    uVar4 = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0xd00000000000001c;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x800000010f1edc70;
    lVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    do {
      uVar8 = *(ulong *)(lVar9 + 0x38 + uVar4 * 8);
      if (uVar8 != 0) {
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
        if (uVar8 - lVar7 != lVar6) {
          if ((-lVar6 < 0) || (lVar7 <= (long)(uVar8 - lVar6))) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000f0f20);
            (*pcVar2)();
          }
          if ((*(ulong *)(lVar9 + 0x38 + uVar4 * 8) >> (uVar8 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000f0f24);
            (*pcVar2)();
          }
          uVar5 = 0;
          goto LAB_1000f0e68;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + -0x40;
    } while (lVar7 + 0x3fU >> 6 != uVar4);
    uVar5 = 0xffffffffffffffff;
LAB_1000f0e68:
    uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x38) = uVar5;
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
    func_0x000107c5fadc(uVar5,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c4acc8(uVar10);
    func_0x000107c61170(uVar5);
  }
  if (lRam00000001130606f0 != -1) {
    func_0x000107c61568(0x1130606f0,FUN_1000da650);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000ef5dc,uRam0000000113813118,0);
  return;
}



/* Entry: 1000f0f24; end: 1000f11af;  */

void FUN_1000f0f24(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  code *pcVar14;
  undefined8 uVar15;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar2 = *(long *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined1 *)(unaff_x22 + 200);
  FUN_1000298f0();
  *(undefined8 **)(unaff_x22 + 0xa8) = param_1;
  func_0x000107c61428();
  uVar7 = *param_1;
  func_0x000107c61174();
  FUN_10007c170(uVar15,uVar8,uVar6);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar8);
  func_0x000107c5fb78(0x6c75646568637323,0xe900000000000065);
  uVar8 = 0x3a5357;
  func_0x000100029b28(0x3a5357,0xe300000000000000);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar8;
  func_0x000107c6142c(0xe300000000000000);
  func_0x000107c61170();
  FUN_1000f11b0();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar7;
  FUN_1000eda90(uVar3,uVar13,0x112d453c8,&UNK_10d90ac60);
  pcVar14 = *(code **)(lVar2 + 0x30);
  (*pcVar14)(uVar13,1,uVar9);
  if ((int)uVar13 == 1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000107c5fd60(*(undefined8 *)(unaff_x22 + 0x98));
    (*pcVar14)(uVar9,1,uVar8);
    if ((int)uVar9 != 1) {
      func_0x0001000edad8(*(undefined8 *)(unaff_x22 + 0x80),0x112d453c8,&UNK_10d90ac60);
    }
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x90) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x80),
               *(undefined8 *)(unaff_x22 + 0x88));
  }
  lVar2 = *(long *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar1 = *(long *)(unaff_x22 + 0x70);
  lVar4 = *(long *)(unaff_x22 + 0x78);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(lVar1 + 0xb0);
  lVar5 = *(long *)(lVar1 + 0xb8);
  uVar6 = *(undefined1 *)(unaff_x22 + 200);
  FUN_1000a8868(lVar1 + 0x98,uVar8);
  (**(code **)(lVar5 + 0x20))(uVar9,uVar7,uVar6,uVar3,uVar8,lVar5);
  uVar9 = *(undefined8 *)(lVar1 + 0x38);
  uVar7 = *(undefined8 *)(lVar1 + 0x40);
  uVar8 = *(undefined8 *)(lVar1 + 0x48);
  uVar13 = *(undefined8 *)(lVar1 + 0x50);
  (**(code **)(lVar2 + 0x10))(lVar4,uVar3,uVar15);
  (**(code **)(lVar2 + 0x38))(lVar4,0,1,uVar15);
  lVar10 = lVar4;
  FUN_1000f1650(lVar4,uVar9,uVar7,uVar8,uVar13);
  func_0x0001000edad8(lVar4,0x112d453c8,&UNK_10d90ac60);
  lVar2 = *(long *)(lVar1 + 0x78);
  lVar4 = *(long *)(lVar1 + 0x80);
  plVar11 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)&UNK_1040bd5e4;
  lVar12 = *(long *)(unaff_x22 + 0x70);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  lVar5 = *(long *)(unaff_x22 + 0x60);
  uVar6 = *(undefined1 *)(unaff_x22 + 200);
  plVar11[0xb] = lVar4;
  plVar11[0xc] = lVar12;
  plVar11[9] = lVar10;
  plVar11[10] = lVar2;
  *(undefined1 *)((long)plVar11 + 0x21) = uVar6;
  plVar11[7] = lVar1;
  plVar11[8] = lVar5;
  if (lRam00000001130606f0 != -1) {
    func_0x000107c61568(0x1130606f0,FUN_1000da650);
  }
  lVar2 = lRam0000000113813118;
  plVar11[0xd] = lRam0000000113813118;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000f1b1c,lVar2,0);
  return;
}



/* Entry: 1000f11b0; end: 1000f11b7;  */

ulong FUN_1000f11b0(void)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  func_0x000107c60f0c();
  if (-1 < (long)uVar2) {
    return uVar2 / 1000;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000aa0a8);
  (*pcVar1)();
}



/* Entry: 1000f11b8; end: 1000f15b3;  */

undefined1  [16] FUN_1000f11b8(void)

{
  undefined1 *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5fd0c();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puStack_78 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_70 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12_00;
  lStack_68 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar6 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar11 = lVar14 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = uVar11 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar15 - extraout_x12_05;
  pcVar9 = *(code **)(lVar12 + 0x10);
  (*pcVar9)(lVar7);
  lVar4 = lVar15;
  (*pcVar9)(lVar15,lVar7,lVar3);
  func_0x000107c5fcf0(uVar11);
  FUN_1000f160c();
  uVar5 = uVar11;
  func_0x000107c5fab8(uVar11,lVar15,lVar3,lVar4);
  pcVar13 = *(code **)(lVar12 + 8);
  (*pcVar13)(uVar11,lVar3);
  (*pcVar13)(lVar15,lVar3);
  if ((uVar5 & 1) == 0) {
    (*pcVar9)(lVar14,lVar7,lVar3);
    func_0x000107c5fd00(uVar11);
    uVar5 = uVar11;
    func_0x000107c5fab8(uVar11,lVar14,lVar3,lVar4);
    (*pcVar13)(uVar11,lVar3);
    (*pcVar13)(lVar14,lVar3);
    if ((uVar5 & 1) == 0) {
      (*pcVar9)(lVar6,lVar7,lVar3);
      func_0x000107c5fcf8(uVar11);
      uVar5 = uVar11;
      func_0x000107c5fab8(uVar11,lVar6,lVar3,lVar4);
      (*pcVar13)(uVar11,lVar3);
      (*pcVar13)(lVar6,lVar3);
      lVar6 = lStack_68;
      if ((uVar5 & 1) == 0) {
        (*pcVar9)(lStack_68,lVar7,lVar3);
        func_0x000107c5fd04(uVar11,0x15);
        uVar5 = uVar11;
        func_0x000107c5fab8(uVar11,lVar6,lVar3,lVar4);
        (*pcVar13)(uVar11,lVar3);
        (*pcVar13)(lVar6,lVar3);
        lVar6 = lStack_70;
        if ((uVar5 & 1) == 0) {
          (*pcVar9)(lStack_70,lVar7,lVar3);
          func_0x000107c5fcfc(uVar11);
          uVar5 = uVar11;
          func_0x000107c5fab8(uVar11,lVar6,lVar3,lVar4);
          (*pcVar13)(uVar11,lVar3);
          (*pcVar13)(lVar6,lVar3);
          puVar1 = puStack_78;
          if ((uVar5 & 1) == 0) {
            (*pcVar9)(puStack_78,lVar7,lVar3);
            func_0x000107c5fcf4(uVar11);
            uVar5 = uVar11;
            func_0x000107c5fab8(uVar11,puVar1,lVar3,lVar4);
            (*pcVar13)(uVar11,lVar3);
            (*pcVar13)(puVar1,lVar3);
            bVar2 = (uVar5 & 1) == 0;
            uVar10 = 0x74696e4972657375;
            if (bVar2) {
              uVar10 = 0x746c7561666564;
            }
            uVar8 = 0xed00006465746169;
            if (bVar2) {
              uVar8 = 0xe700000000000000;
            }
          }
          else {
            uVar8 = 0xe400000000000000;
            uVar10 = 0x68676968;
          }
        }
        else {
          uVar8 = 0xe600000000000000;
          uVar10 = 0x6d756964656d;
        }
      }
      else {
        uVar8 = 0xe300000000000000;
        uVar10 = 0x776f6c;
      }
    }
    else {
      uVar8 = 0xe700000000000000;
      uVar10 = 0x7974696c697475;
    }
  }
  else {
    uVar8 = 0xea0000000000646e;
    uVar10 = 0x756f72676b636162;
  }
  (*pcVar13)(lVar7,lVar3);
  auVar16._8_8_ = uVar8;
  auVar16._0_8_ = uVar10;
  return auVar16;
}



/* Entry: 1000f15b4; end: 1000f160b;  */

void FUN_1000f15b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  FUN_1000f11b8();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  FUN_10007e02c(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1000f160c; end: 1000f164f;  */

void FUN_1000f160c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130606d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5fd0c(0xff);
  puVar2 = PTR___sScPSQsMc_11034fcc0;
  func_0x000107c61520(PTR___sScPSQsMc_11034fcc0,uVar1);
  puRam00000001130606d0 = puVar2;
  return;
}



/* Entry: 1000f1650; end: 1000f19a3;  */

undefined8
FUN_1000f1650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  code *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x112d453c8;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_3;
  uStack_68 = param_2;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_90 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5fd0c();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar6 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_88 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar6 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = lVar14 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = uVar12 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar9 - extraout_x12_03;
  FUN_1000abe04(param_1,puVar8);
  pcVar7 = *(code **)(lVar10 + 0x30);
  puVar3 = puVar8;
  (*pcVar7)(puVar8,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x000107c5fd04(lVar11,0x15);
    puVar3 = puVar8;
    (*pcVar7)(puVar8,1,lVar2);
    if ((int)puVar3 != 1) {
      func_0x0001000abe54(puVar8);
    }
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar11,puVar8,lVar2);
  }
  pcVar13 = *(code **)(lVar10 + 0x10);
  lVar4 = lVar9;
  (*pcVar13)(lVar9,lVar11,lVar2);
  func_0x000107c5fcf8(uVar12);
  FUN_1000f160c();
  uVar5 = uVar12;
  func_0x000107c5fab8(uVar12,lVar9,lVar2,lVar4);
  pcVar7 = *(code **)(lVar10 + 8);
  (*pcVar7)(uVar12,lVar2);
  (*pcVar7)(lVar9,lVar2);
  if ((uVar5 & 1) == 0) {
    (*pcVar13)(lVar14,lVar11,lVar2);
    func_0x000107c5fd04(uVar12,0x15);
    uVar5 = uVar12;
    func_0x000107c5fab8(uVar12,lVar14,lVar2,lVar4);
    (*pcVar7)(uVar12,lVar2);
    (*pcVar7)(lVar14,lVar2);
    if ((uVar5 & 1) == 0) {
      (*pcVar13)(lVar6,lVar11,lVar2);
      func_0x000107c5fcfc(uVar12);
      uVar5 = uVar12;
      func_0x000107c5fab8(uVar12,lVar6,lVar2,lVar4);
      (*pcVar7)(uVar12,lVar2);
      (*pcVar7)(lVar6,lVar2);
      lVar6 = lStack_88;
      if ((uVar5 & 1) == 0) {
        (*pcVar13)(lStack_88,lVar11,lVar2);
        func_0x000107c5fcf4(uVar12);
        uVar5 = uVar12;
        func_0x000107c5fab8(uVar12,lVar6,lVar2,lVar4);
        (*pcVar7)(uVar12,lVar2);
        (*pcVar7)(lVar6,lVar2);
        (*pcVar7)(lVar11,lVar2);
        puVar1 = &uStack_78;
        if ((uVar5 & 1) == 0) {
          puVar1 = &uStack_70;
        }
        uStack_68 = *puVar1;
      }
      else {
        (*pcVar7)(lVar11,lVar2);
        uStack_68 = uStack_80;
      }
    }
    else {
      (*pcVar7)(lVar11,lVar2);
      uStack_68 = uStack_70;
    }
  }
  else {
    (*pcVar7)(lVar11,lVar2);
  }
  return uStack_68;
}



/* Entry: 1000f19a4; end: 1000f1a1b;  */

void FUN_1000f19a4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined1 *)(unaff_x22 + 0x21) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  if (lRam00000001130606f0 != -1) {
    func_0x000107c61568(0x1130606f0,FUN_1000da650);
  }
  uVar1 = uRam0000000113813118;
  *(undefined8 *)(unaff_x22 + 0x68) = uRam0000000113813118;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000f1b1c,uVar1,0);
  return;
}



/* Entry: 1000f1a1c; end: 1000f1b1b;  */

undefined4 FUN_1000f1a1c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  ulong uVar3;
  
  if (*(char *)(unaff_x20 + 0xc0) == '\x01') {
    if (*(code **)(unaff_x20 + 0xd0) == (code *)0x0) {
      uVar3 = *(ulong *)(unaff_x20 + 0x28);
      func_0x000107c61434(uVar3);
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    else {
      uVar3 = param_1;
      (**(code **)(unaff_x20 + 0xd0))();
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    if (lVar2 != 0) {
      uVar1 = uVar3;
      FUN_1000ade28(uVar3,param_1,param_2,param_3);
      func_0x000107c6142c(uVar3);
      if ((uVar1 & 1) != 0) {
        return 5;
      }
      return 6;
    }
    func_0x000107c6142c(uVar3);
    if (*(char *)(unaff_x20 + 0x20) == '\x01') {
      return 0;
    }
    uVar3 = *(ulong *)(unaff_x20 + 0x18);
    func_0x000100257288(param_1,param_2,param_3);
    if (param_1 != 0) {
      func_0x000100877840(uVar3,param_1);
      func_0x000107c6142c(param_1);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
    }
  }
  return 6;
}



/* Entry: 1000f1b1c; end: 1000f1d1f;  */

void FUN_1000f1b1c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long unaff_x22;
  
  uVar10 = *(ulong *)(unaff_x22 + 0x38);
  FUN_1000f1a1c(uVar10,*(undefined8 *)(unaff_x22 + 0x40),*(undefined1 *)(unaff_x22 + 0x21));
  uVar15 = (uint)uVar10 & 0xff;
  lVar12 = *(long *)(unaff_x22 + 0x60);
  if (uVar15 != 6) {
    uVar4 = *(undefined8 *)(lVar12 + 0xb0);
    lVar14 = *(long *)(lVar12 + 0xb8);
    FUN_1000a8868(lVar12 + 0x98,uVar4);
    pcVar6 = "CriticalSectionAllowListed";
    uVar7 = 0xd00000000000001d;
    if (uVar15 != 4) {
      pcVar6 = "completed.scopeGraphLaunch";
      uVar7 = 0xd00000000000001a;
    }
    uVar3 = 0xe900000000000064;
    uVar8 = 0x656c6c65636e6143;
    if (uVar15 != 3) {
      uVar3 = (ulong)pcVar6 | 0x8000000000000000;
      uVar8 = uVar7;
    }
    uVar1 = 0x800000010f1edba0;
    uVar7 = 0xd000000000000011;
    if (uVar15 != 1) {
      uVar1 = 0xee00646568636165;
      uVar7 = 0x5274756f656d6954;
    }
    uVar2 = 0xef746e6176656c65;
    uVar9 = 0x52747865746e6f43;
    if ((uVar10 & 0xff) != 0) {
      uVar2 = uVar1;
      uVar9 = uVar7;
    }
    if (uVar15 < 3) {
      uVar3 = uVar2;
      uVar8 = uVar9;
    }
    (**(code **)(lVar14 + 8))
              (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
               *(undefined1 *)(unaff_x22 + 0x21),uVar8,uVar3,uVar4,lVar14);
    func_0x000107c6142c(uVar3);
LAB_1000f1cfc:
                    /* WARNING: Could not recover jumptable at 0x0001000f1d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar15,0);
    return;
  }
  if (*(char *)(lVar12 + 0x58) == '\x01') {
    func_0x000107c5fd5c();
    if (((uVar10 & 1) != 0) ||
       (*(undefined8 *)(unaff_x22 + 0x70) = 0, *(long *)(unaff_x22 + 0x50) == 0)) {
      uVar15 = 4;
      goto LAB_1000f1cfc;
    }
    plVar11 = (long *)0x1e0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar11;
    puVar13 = &UNK_1040bc6b4;
  }
  else {
    plVar11 = (long *)0x1e0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd0) = plVar11;
    puVar13 = &UNK_1040bcd70;
  }
  *plVar11 = unaff_x22;
  plVar11[1] = (long)puVar13;
  lVar16 = *(long *)(unaff_x22 + 0x60);
  lVar12 = *(long *)(unaff_x22 + 0x40);
  lVar14 = *(long *)(unaff_x22 + 0x38);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x21);
  plVar11[0x31] = *(long *)(unaff_x22 + 0x48);
  plVar11[0x32] = lVar16;
  *(undefined1 *)((long)plVar11 + 0x1d2) = uVar5;
  plVar11[0x2f] = lVar14;
  plVar11[0x30] = lVar12;
  if (lRam00000001130606f0 != -1) {
    func_0x000107c61568(0x1130606f0,FUN_1000da650);
  }
  lVar12 = lRam0000000113813118;
  plVar11[0x33] = lRam0000000113813118;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000f1dd4,lVar12,0);
  return;
}



/* Entry: 1000f1d20; end: 1000f1dd3;  */

void FUN_1000f1d20(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x188) = param_4;
  *(undefined8 *)(unaff_x22 + 400) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x1d2) = param_3;
  *(undefined8 *)(unaff_x22 + 0x178) = param_1;
  *(undefined8 *)(unaff_x22 + 0x180) = param_2;
  if (lRam00000001130606f0 != -1) {
    func_0x000107c61568(0x1130606f0,FUN_1000da650);
  }
  uVar1 = uRam0000000113813118;
  *(undefined8 *)(unaff_x22 + 0x198) = uRam0000000113813118;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000f1dd4,uVar1,0);
  return;
}



/* Entry: 1000f1dd4; end: 1000f1eef;  */

void FUN_1000f1dd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar3 = *(undefined8 *)(unaff_x22 + 400);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x1d2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  func_0x0001000f1d94();
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar4;
  *(undefined1 *)(unaff_x22 + 0x138) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar3;
  iVar6 = 2;
  FUN_100029b9c(2,0x12,0,0);
  lVar8 = *(long *)(unaff_x22 + 0x198);
  if (iVar6 != 0) {
    plVar7 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1a8) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)&UNK_1040bcf18;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )(plVar7,unaff_x22 + 0x1d0,&UNK_110744d00,&UNK_110744d00,lVar8,param_1,&UNK_10dcd5ea8,
      unaff_x22 + 0x110,&UNK_110744d00,&UNK_110744d00);
    return;
  }
  if (lVar8 == 0) {
    lVar8 = 0;
    param_1 = 0;
  }
  else {
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0x1b0) = lVar8;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_1040bcf60,lVar8);
  return;
}



/* Entry: 1000f1ef0; end: 1000f1efb;  */

void FUN_1000f1ef0(void)

{
  return;
}



/* Entry: 1000f1efc; end: 1000f1f8f;  */

void FUN_1000f1efc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar4 = (long *)0xa0;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)&UNK_100c963b0;
  *(undefined1 *)((long)plVar4 + 0x91) = uVar3;
  plVar4[0xb] = lVar5;
  plVar4[0xc] = lVar6;
  plVar4[9] = lVar1;
  plVar4[10] = lVar2;
  plVar4[7] = param_1;
  plVar4[8] = param_2;
  if (lRam00000001130606f0 != -1) {
    func_0x000107c61568(0x1130606f0,FUN_1000da650);
  }
  lVar1 = lRam0000000113813118;
  plVar4[0xd] = lRam0000000113813118;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000f2008,lVar1,0);
  return;
}



/* Entry: 1000f1f90; end: 1000f2007;  */

void FUN_1000f1f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x91) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_7;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  if (lRam00000001130606f0 != -1) {
    func_0x000107c61568(0x1130606f0,FUN_1000da650);
  }
  uVar1 = uRam0000000113813118;
  *(undefined8 *)(unaff_x22 + 0x68) = uRam0000000113813118;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000f2008,uVar1,0);
  return;
}



/* Entry: 1000f2008; end: 1000f22c7;  */

void FUN_1000f2008(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  code *pcVar12;
  long unaff_x22;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x91);
  lVar7 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar9 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar6 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar6);
  lVar7 = 0;
  func_0x000107c5fd0c();
  pcVar12 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  (*pcVar12)(uVar6,1,1,lVar7);
  puVar8 = &UNK_110744b28;
  func_0x000107c613fc(&UNK_110744b28,0x48,7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  *(undefined8 *)(puVar8 + 0x20) = uVar1;
  *(undefined8 *)(puVar8 + 0x28) = uVar3;
  *(undefined8 *)(puVar8 + 0x30) = uVar11;
  puVar8[0x38] = uVar4;
  *(undefined8 *)(puVar8 + 0x40) = uVar2;
  FUN_1000ab9d4(uVar3,uVar11,uVar4);
  func_0x000107c6157c(uVar2);
  FUN_1000ed8cc(uVar6,&UNK_10dcd5f00,puVar8,&UNK_110744b00,&UNK_110744d00,&UNK_10dcd5ef8);
  func_0x0001000edad8(uVar6,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar6);
  uVar9 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (*pcVar12)();
  puVar8 = &UNK_110744b50;
  func_0x000107c613fc(&UNK_110744b50,0x39,7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  *(undefined8 *)(puVar8 + 0x20) = uVar2;
  *(undefined8 *)(puVar8 + 0x28) = uVar3;
  *(undefined8 *)(puVar8 + 0x30) = uVar11;
  puVar8[0x38] = uVar4;
  FUN_1000ab9d4(uVar3,uVar11,uVar4);
  func_0x000107c6157c(uVar2);
  FUN_1000ed8cc(uVar9,&UNK_10dcd5f08,puVar8,&UNK_110744b00,&UNK_110744d00,&UNK_10dcd5ef8);
  func_0x0001000edad8(uVar9,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0();
  func_0x0001000f1d94();
  iVar5 = 2;
  FUN_100029b9c(2,0x12,0,0);
  lVar7 = *(long *)(unaff_x22 + 0x68);
  if (iVar5 != 0) {
    plVar10 = (long *)(ulong)*(uint *)(PTR___sScG4next9isolationxSgScA_pSgYi_tYaFTu_11034fbf0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x70) = plVar10;
    uVar11 = 0x113060888;
    FUN_1000285a8(0x113060888,&UNK_10dcd5ed0);
    *plVar10 = unaff_x22;
    plVar10[1] = (long)&UNK_100c8d028;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG4next9isolationxSgScA_pSgYi_tYaF_11034fbe8)
              (unaff_x22 + 0x90,lVar7,uVar9,uVar11);
    return;
  }
  if (lVar7 == 0) {
    lVar7 = 0;
    uVar9 = 0;
  }
  else {
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0x78) = lVar7;
  *(ulong *)(unaff_x22 + 0x80) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_1040bd368,lVar7);
  return;
}



/* Entry: 1000f22c8; end: 1000f22d7;  */

undefined1  [16] FUN_1000f22c8(void)

{
  return ZEXT816(0x110744d00);
}



/* Entry: 1000f22d8; end: 1000f2347;  */

void FUN_1000f22d8(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)&UNK_100c8ced4;
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar5,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar4[2] = (long)plVar5;
  *plVar5 = (long)plVar4;
  plVar5[1] = (long)&UNK_100c8ce94;
                    /* WARNING: Could not recover jumptable at 0x0001000f23a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar5,param_1);
  return;
}



/* Entry: 1000f2348; end: 1000f23ab;  */

void FUN_1000f2348(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)&UNK_100c8ce94;
                    /* WARNING: Could not recover jumptable at 0x0001000f23a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 1000f23ac; end: 1000f2443;  */

void FUN_1000f23ac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x40);
  plVar5 = (long *)0xc0;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)&UNK_100c964c4;
  plVar5[8] = lVar6;
  plVar5[9] = lVar7;
  *(undefined1 *)((long)plVar5 + 0x21) = uVar3;
  plVar5[6] = lVar1;
  plVar5[7] = lVar2;
  plVar5[5] = param_1;
  uVar4 = 2;
  FUN_100029b9c(2,0x10,0,0);
  *(undefined4 *)((long)plVar5 + 0x24) = uVar4;
  plVar5[10] = *(long *)(lVar7 + 0xd0);
  plVar5[0xb] = *(long *)(lVar7 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000f24b4,0,0);
  return;
}



/* Entry: 1000f2444; end: 1000f24b3;  */

void FUN_1000f2444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,long param_8)

{
  undefined4 uVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(long *)(unaff_x22 + 0x48) = param_8;
  *(undefined1 *)(unaff_x22 + 0x21) = param_7;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  *(undefined4 *)(unaff_x22 + 0x24) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(param_8 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(param_8 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000f24b4,0,0);
  return;
}



/* Entry: 1000f24b4; end: 1000f2663;  */

void FUN_1000f24b4(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  long unaff_x22;
  ulong uVar9;
  long lVar10;
  
  if (*(int *)(unaff_x22 + 0x24) != 0) {
    uVar9 = *(ulong *)(unaff_x22 + 0x30);
    lVar3 = 0;
    func_0x000107c603b4();
    *(long *)(unaff_x22 + 0x60) = lVar3;
    lVar10 = *(long *)(lVar3 + -8);
    uVar5 = *(long *)(lVar10 + 0x40) + 0xf;
    uVar4 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x68) = uVar4;
    uVar5 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar5);
    func_0x000107c603ac(uVar5);
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar9;
    func_0x000107c603b0(uVar4,uVar9 * 1000000000000000,SUB168(auVar1 * ZEXT816(1000000000000000),8))
    ;
    pcVar8 = *(code **)(lVar10 + 8);
    *(code **)(unaff_x22 + 0x70) = pcVar8;
    (*pcVar8)(uVar5,lVar3);
    func_0x000107c615c0(uVar5);
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined1 *)(unaff_x22 + 0x20) = 1;
    lVar3 = 0;
    func_0x000107c603bc();
    *(long *)(unaff_x22 + 0x78) = lVar3;
    lVar10 = *(long *)(lVar3 + -8);
    *(long *)(unaff_x22 + 0x80) = lVar10;
    uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x88) = uVar5;
    func_0x000107c60630(uVar5);
    plVar6 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep5until9tolerance5clocky7InstantQyd___8DurationQyd__Sgqd__tYaKs5ClockRd__lFZTu_11034fe18
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar6;
    plVar7 = plVar6;
    FUN_1000da454();
    *plVar6 = unaff_x22;
    plVar6[1] = (long)&UNK_100c963b4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___sScTss5NeverORszABRs_rlE5sleep5until9tolerance5clocky7InstantQyd___8DurationQyd__Sgqd__tYaKs5ClockRd__lFZ_11034fe10
    )(uVar4,(undefined8 *)(unaff_x22 + 0x10),uVar5,lVar3,plVar7);
    return;
  }
  uVar5 = *(ulong *)(unaff_x22 + 0x30);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar5;
  if (SUB168(auVar2 * ZEXT816(1000000),8) == 0) {
    plVar7 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)&UNK_1040bd3cc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
              (uVar5 * 1000000);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1000f2664);
  (*pcVar8)();
}



/* Entry: 1000f2664; end: 1000f26f3;  */

void FUN_1000f2664(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  long lVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x30;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)&UNK_100c8ce54;
  plVar6[2] = param_1;
  plVar7 = (long *)0xd0;
  func_0x000107c615b8(0xd0,uVar1,uVar3);
  plVar6[3] = (long)plVar7;
  *plVar7 = (long)plVar6;
  plVar7[1] = (long)&UNK_100c8cc70;
  plVar7[6] = lVar8;
  plVar7[7] = lVar2;
  *(undefined1 *)((long)plVar7 + 0xc9) = uVar5;
  plVar7[5] = lVar4;
  if (lRam00000001130606f0 != -1) {
    func_0x000107c61568(0x1130606f0,FUN_1000da650);
  }
  lVar2 = lRam0000000113813118;
  plVar7[8] = lRam0000000113813118;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000f27d8,lVar2,0);
  return;
}



/* Entry: 1000f26f4; end: 1000f2763;  */

void FUN_1000f26f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,undefined1 param_7)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar2 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)&UNK_100c8cc70;
  plVar2[6] = param_6;
  plVar2[7] = param_4;
  *(undefined1 *)((long)plVar2 + 0xc9) = param_7;
  plVar2[5] = param_5;
  if (lRam00000001130606f0 != -1) {
    func_0x000107c61568(0x1130606f0,FUN_1000da650);
  }
  lVar1 = lRam0000000113813118;
  plVar2[8] = lRam0000000113813118;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000f27d8,lVar1,0);
  return;
}



/* Entry: 1000f2764; end: 1000f27d7;  */

void FUN_1000f2764(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0xc9) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  if (lRam00000001130606f0 != -1) {
    func_0x000107c61568(0x1130606f0,FUN_1000da650);
  }
  uVar1 = uRam0000000113813118;
  *(undefined8 *)(unaff_x22 + 0x40) = uRam0000000113813118;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000f27d8,uVar1,0);
  return;
}



/* Entry: 1000f27d8; end: 1000f2ba3;  */

void FUN_1000f27d8(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  long unaff_x22;
  ulong uVar14;
  long lVar15;
  long lVar16;
  
  lVar2 = 0x112e009e0;
  FUN_1000285a8(0x112e009e0,&UNK_10d9d0d50);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  lVar9 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar9;
  uVar3 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  lVar9 = 0x112e009e8;
  FUN_1000285a8(0x112e009e8,&UNK_10d9d5e80);
  *(long *)(unaff_x22 + 0x60) = lVar9;
  lVar10 = *(long *)(lVar9 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar10;
  uVar4 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar4;
  lVar6 = 0x112e009f0;
  FUN_1000285a8(0x112e009f0,&UNK_10d9d0d60);
  lVar13 = *(long *)(lVar6 + -8);
  puVar5 = (undefined8 *)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  *puVar5 = 1;
  (**(code **)(lVar13 + 0x68))();
  iVar1 = 2;
  FUN_100029b9c(2,0x11,0,0);
  if (iVar1 == 0) {
    func_0x000101b0eb4c(uVar3,uVar4,puVar5);
  }
  else {
    func_0x000107c5fd10(uVar3,uVar4,PTR___sytN_11034f1b0 + 8,puVar5,PTR___sytN_11034f1b0 + 8);
  }
  lVar15 = *(long *)(unaff_x22 + 0x38);
  (**(code **)(lVar13 + 8))(puVar5,lVar6);
  func_0x000107c615c0(puVar5);
  lVar6 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x78) = lVar6;
  lVar13 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar13;
  lVar16 = *(long *)(lVar13 + 0x40);
  uVar3 = lVar16 + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar4;
  func_0x000107c5eec4(uVar4);
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar4);
  pcVar12 = *(code **)(lVar13 + 0x10);
  (*pcVar12)();
  uVar11 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar14 = uVar11 + 0x18 & (uVar11 ^ 0xffffffffffffffff);
  puVar7 = &UNK_110744ab0;
  func_0x000107c613fc(&UNK_110744ab0,uVar14 + lVar16,uVar11 | 7);
  *(long *)(puVar7 + 0x10) = lVar15;
  (**(code **)(lVar13 + 0x20))(puVar7 + uVar14,uVar4,lVar6);
  func_0x000107c615c0(uVar4);
  func_0x000107c6157c(lVar15);
  func_0x000107c5fd1c(&UNK_100c8ca74,puVar7,lVar9);
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar3);
  (*pcVar12)();
  lVar6 = 0x112e00a18;
  FUN_1000285a8(0x112e00a18,&UNK_10d9de5a0);
  uVar4 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar4);
  (**(code **)(lVar10 + 0x10))();
  (**(code **)(lVar10 + 0x38))(uVar4,0,1,lVar9);
  func_0x000107c61428(lVar15 + 0x10,unaff_x22 + 0x10,0x21,0);
  FUN_1000f2ba4(uVar4,uVar3);
  func_0x000107c614a8(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar3);
  lVar9 = 0x112e00a00;
  FUN_1000285a8(0x112e00a00,&UNK_10d9d5e90);
  lVar6 = *(long *)(lVar9 + -8);
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar3);
  func_0x000107c5fd28(uVar3);
  (**(code **)(lVar6 + 8))(uVar3,lVar9);
  func_0x000107c615c0(uVar3);
  lVar9 = 0x112e00a10;
  FUN_1000285a8(0x112e00a10,&UNK_10dc12dc0);
  *(long *)(unaff_x22 + 0x90) = lVar9;
  lVar6 = *(long *)(lVar9 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
  func_0x000107c5fd34(uVar3,lVar2);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(lVar15 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(lVar15 + 0xd8);
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1000f33cc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)(plVar8,unaff_x22 + 200,lVar9);
  return;
}



/* Entry: 1000f2ba4; end: 1000f2d63;  */

void FUN_1000f2ba4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar2 = 0x112e00a18;
  FUN_1000285a8(0x112e00a18,&UNK_10d9de5a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0x112e009e8;
  FUN_1000285a8(0x112e009e8,&UNK_10d9d5e80);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f2d64(param_1,lVar5);
  lVar1 = lVar5;
  (**(code **)(lVar6 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000100c95ed0(lVar5,0x112e00a18,&UNK_10d9de5a0);
    func_0x000100c95f10(puVar4,param_2);
    lVar2 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_2,lVar2);
    func_0x000100c95ed0(puVar4,0x112e00a18,&UNK_10d9de5a0);
  }
  else {
    (**(code **)(lVar6 + 0x20))(lVar5 - extraout_x8_00,lVar5,lVar2);
    uVar3 = *unaff_x20;
    func_0x000107c61558(uVar3);
    uStack_58 = *unaff_x20;
    FUN_1000f2db4(lVar5 - extraout_x8_00,param_2,uVar3);
    lVar2 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_2,lVar2);
    *unaff_x20 = uStack_58;
  }
  return;
}



/* Entry: 1000f2d64; end: 1000f2db3;  */

undefined8 FUN_1000f2d64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e00a18;
  FUN_1000285a8(0x112e00a18,&UNK_10d9de5a0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000f2db4; end: 1000f3307;  */

void FUN_1000f2db4(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar2 = 0;
  uVar4 = param_2;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = *unaff_x20;
  uVar3 = param_2;
  FUN_1000c8928(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar4 & 1;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f2ee4);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < (long)(lVar5 + uVar6)) {
    param_3 = param_3 & 1;
    func_0x0001000f2f48();
    uVar3 = param_2;
    FUN_1000c8928(param_2);
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      func_0x000107c60624(lVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f2f48);
      (*pcVar1)();
    }
    lVar5 = *unaff_x20;
  }
  else if ((param_3 & 1) == 0) {
    func_0x000101b4585c();
    lVar5 = *unaff_x20;
  }
  else {
    lVar5 = *unaff_x20;
  }
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(lVar5 + 0x38);
    lVar2 = 0x112e009e8;
    FUN_1000285a8(0x112e009e8,&UNK_10d9d5e80);
                    /* WARNING: Could not recover jumptable at 0x0001000f2edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 0x28))
              (lVar5 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * uVar3,param_1,lVar2);
    return;
  }
  (**(code **)(lVar8 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
  FUN_1000f3308(uVar3,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,
                lVar5);
  return;
}



/* Entry: 1000f3308; end: 1000f33cb;  */

void FUN_1000f3308(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (param_1 & 0x3f);
  lVar3 = *(long *)(param_4 + 0x30);
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_2,lVar2);
  lVar3 = *(long *)(param_4 + 0x38);
  lVar2 = 0x112e009e8;
  FUN_1000285a8(0x112e009e8,&UNK_10d9d5e80);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_3,lVar2);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f33cc);
  (*pcVar1)();
}



/* Entry: 1000f33cc; end: 1000f3417;  */

void FUN_1000f33cc(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000f3418,uVar1,0);
  return;
}



/* Entry: 1000f3418; end: 1000f3667;  */

void FUN_1000f3418(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x22;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [72];
  
  if (*(char *)(unaff_x22 + 200) == '\x01') {
    uStack_a4 = 3;
  }
  else {
    if (*(code **)(unaff_x22 + 0xa8) == (code *)0x0) {
      param_1 = *(ulong *)(*(long *)(unaff_x22 + 0x38) + 0x28);
      func_0x000107c61434(param_1);
    }
    else {
      (**(code **)(unaff_x22 + 0xa8))();
    }
    uVar14 = param_1;
    FUN_1000ade28(param_1,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),
                  *(undefined1 *)(unaff_x22 + 0xc9));
    func_0x000107c6142c(param_1);
    if ((uVar14 & 1) == 0) {
LAB_1000f3608:
      plVar11 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xc0) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_10087a028;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                (plVar11,(char *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0x90));
      return;
    }
    if (*(char *)(*(long *)(unaff_x22 + 0x38) + 0x20) == '\x01') {
      uStack_a4 = 0;
    }
    else {
      uVar14 = *(ulong *)(*(long *)(unaff_x22 + 0x38) + 0x18);
      lVar10 = *(long *)(unaff_x22 + 0x28);
      func_0x000100257288(lVar10,*(undefined8 *)(unaff_x22 + 0x30),*(undefined1 *)(unaff_x22 + 0xc9)
                         );
      if (lVar10 != 0) {
        if (*(long *)(lVar10 + 0x10) != 0) {
          func_0x000107c6068c(auStack_a0,*(undefined8 *)(lVar10 + 0x28));
          uVar12 = uVar14;
          func_0x000107c60690();
          func_0x000107c606a8();
          uVar13 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
          uVar12 = uVar12 & (uVar13 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar10 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0) {
            do {
              if ((int)*(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar12 * 8) == (int)uVar14) {
                func_0x000107c6142c();
                uStack_a4 = 0;
                goto LAB_1000f3454;
              }
              uVar12 = uVar12 + 1 & ~uVar13;
            } while ((*(ulong *)(lVar10 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0);
          }
        }
        func_0x000107c6142c();
      }
      if ((*(byte *)(*(long *)(unaff_x22 + 0x38) + 0x30) & 1) == 0) goto LAB_1000f3608;
      uStack_a4 = 1;
    }
  }
LAB_1000f3454:
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  lVar10 = *(long *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar9 = *(long *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x90));
  (**(code **)(lVar6 + 8))(uVar1,uVar2);
  (**(code **)(lVar10 + 8))(uVar7,uVar8);
  (**(code **)(lVar9 + 8))(uVar3,uVar4);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001000f34f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uStack_a4);
  return;
}



/* Entry: 1000f3668; end: 1000f3767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1000f3668(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)0x0;
  FUN_1000c2ae4();
  FUN_1000d4f60();
  plVar2 = plVar1;
  func_0x0001000f36f8();
  func_0x000107c61574();
  func_0x0001000d4e14();
  if ((*(char *)(*plVar1 + _DAT_11307c8d0) == '\x01') &&
     (func_0x0001000f39a4(), ((ulong)plVar1 & 1) == 0)) {
    FUN_1000eefac();
  }
  return plVar2;
}



/* Entry: 1000f3768; end: 1000f394b;  */

undefined * FUN_1000f3768(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    FUN_1000eed6c(0,lVar7,0);
    uVar1 = param_1 + 0x40;
    uVar13 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar11 = 0;
    do {
      if (uVar13 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000f393c);
        (*pcVar4)();
      }
      uVar12 = uVar13 >> 6;
      uVar9 = 1L << (uVar13 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar12 * 8) & uVar9) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000f3940);
        (*pcVar4)();
      }
      iVar2 = *(int *)(param_1 + 0x24);
      lVar10 = *(ulong *)(puVar3 + 0x10) + 1;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= *(ulong *)(puVar3 + 0x10)) {
        FUN_1000eed6c(1 < *(ulong *)(puVar3 + 0x18),lVar10,1);
      }
      *(long *)(puVar3 + 0x10) = lVar10;
      uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar8 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000f3944);
        (*pcVar4)();
      }
      uVar5 = *(ulong *)(uVar1 + uVar12 * 8);
      if ((uVar5 & uVar9) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000f3948);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000f394c);
        (*pcVar4)();
      }
      uVar5 = uVar5 & -2L << (uVar13 & 0x3f);
      if (uVar5 == 0) {
        lVar10 = uVar12 << 6;
        puVar6 = (ulong *)(param_1 + 0x48 + uVar12 * 8);
        do {
          uVar12 = uVar12 + 1;
          if (uVar8 + 0x3f >> 6 <= uVar12) {
            func_0x0001040b8640();
            uVar13 = uVar8;
            goto LAB_1000f3800;
          }
          uVar13 = *puVar6;
          lVar10 = lVar10 + 0x40;
          puVar6 = puVar6 + 1;
        } while (uVar13 == 0);
        func_0x0001040b8640();
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + lVar10;
      }
      else {
        uVar12 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar13 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar13 & 0x7fffffffffffffc0;
      }
LAB_1000f3800:
      lVar11 = lVar11 + 1;
    } while (lVar11 != lVar7);
  }
  return puVar3;
}



/* Entry: 1000f394c; end: 1000f3a47;  */

void FUN_1000f394c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_1000eef6c();
  func_0x000107c5fe14(lVar1,&UNK_1107ad680,param_1);
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    FUN_1000eefac();
  }
  return;
}



/* Entry: 1000f3a48; end: 1000f3a53; -[SCCameraHardwareRequestHandler _activateQueue] */

void FUN_1000f3a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2104b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setSuspended__112661b50,0);
  return;
}



/* Entry: 1000f3a54; end: 1000f3a9f;  */

void FUN_1000f3a54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1000f3aa0; end: 1000f3adb;  */

void FUN_1000f3aa0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1000f3adc; end: 1000f3aeb;  */

void FUN_1000f3adc(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  
  if ((param_1 & 1) != 0) {
    uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar4 = *(long *)(unaff_x20 + 0x18);
    puVar1 = PTR_PTR_1126b00d0;
    func_0x000107c61168(PTR_PTR_1126b00d0);
    puVar2 = puVar1;
    func_0x000107c4968c();
    func_0x000107c61180();
    uVar3 = uVar11;
    func_0x000107c5c2bc(uVar11);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar3);
    lVar4 = *(long *)(lVar4 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c5bca8();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      uVar6 = 0;
      FUN_1000d2da4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar7 = 0;
      FUN_1000d2da4(0,0x112da0578,&PTR_PTR_1126b7120);
      uVar8 = uVar7;
      FUN_100120cb0();
      lVar9 = lVar5;
      func_0x000107c5f9e8(lVar5,uVar6,uVar7,uVar8);
      func_0x000107c61170(lVar5);
      lVar4 = 0x112da0580;
      FUN_1000285a8(0x112da0580,&UNK_10da23000);
      func_0x000107c61534();
      *(undefined8 *)(lVar4 + 0x18) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 2;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ed0();
      *(undefined8 *)(lVar4 + 0x20) = puVar2;
      *(undefined8 *)(lVar4 + 0x28) = 0x50555452415453;
      *(undefined8 *)(lVar4 + 0x30) = 0xe700000000000000;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ed0();
      *(undefined **)(lVar4 + 0x38) = puVar2;
      *(undefined8 *)(lVar4 + 0x40) = 0x50555452415453;
      *(undefined8 *)(lVar4 + 0x48) = 0xe700000000000000;
      lVar5 = lVar4;
      FUN_100121358(lVar4);
      func_0x000107c61588(lVar4);
      uVar3 = 0x112da0588;
      FUN_1000285a8(0x112da0588,&UNK_10d9432f0);
      func_0x000107c61408((undefined8 *)(lVar4 + 0x20),2,uVar3);
      lVar4 = lVar9;
      func_0x000107c5f9dc(lVar9,uVar6,uVar7,uVar8);
      func_0x000107c6142c(lVar9);
      puStack_c0 = &UNK_101454a78;
      uStack_b8 = 0;
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0x42000000;
      puStack_d0 = &UNK_100ff4e14;
      puStack_c8 = &UNK_1103bdb10;
      ppuVar10 = &puStack_e0;
      func_0x000107c60bc4(ppuVar10);
      func_0x000107c61574(uStack_b8);
      lVar9 = lVar5;
      func_0x000107c5f9dc(lVar5,uVar6,PTR___sSSN_11034da80,uVar8);
      func_0x000107c6142c(lVar5);
      func_0x000107c5d464(puVar1);
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(lVar4);
      func_0x000107c5c2bc(uVar11);
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      func_0x000107c61170(uVar11);
    }
    return;
  }
  return;
}



/* Entry: 1000f3aec; end: 1000f3db7;  */

void FUN_1000f3aec(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  
  puVar1 = PTR_PTR_1126b00d0;
  func_0x000107c61168(PTR_PTR_1126b00d0);
  puVar2 = puVar1;
  func_0x000107c4968c();
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c5c2bc(param_1);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  lVar4 = *(long *)(param_2 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5bca8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    uVar6 = 0;
    FUN_1000d2da4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar7 = 0;
    FUN_1000d2da4(0,0x112da0578,&PTR_PTR_1126b7120);
    uVar8 = uVar7;
    FUN_100120cb0();
    lVar9 = lVar5;
    func_0x000107c5f9e8(lVar5,uVar6,uVar7,uVar8);
    func_0x000107c61170(lVar5);
    lVar4 = 0x112da0580;
    FUN_1000285a8(0x112da0580,&UNK_10da23000);
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 4;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    *(undefined8 *)(lVar4 + 0x20) = puVar2;
    *(undefined8 *)(lVar4 + 0x28) = 0x50555452415453;
    *(undefined8 *)(lVar4 + 0x30) = 0xe700000000000000;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    *(undefined **)(lVar4 + 0x38) = puVar2;
    *(undefined8 *)(lVar4 + 0x40) = 0x50555452415453;
    *(undefined8 *)(lVar4 + 0x48) = 0xe700000000000000;
    lVar5 = lVar4;
    FUN_100121358(lVar4);
    func_0x000107c61588(lVar4);
    uVar3 = 0x112da0588;
    FUN_1000285a8(0x112da0588,&UNK_10d9432f0);
    func_0x000107c61408((undefined8 *)(lVar4 + 0x20),2,uVar3);
    lVar4 = lVar9;
    func_0x000107c5f9dc(lVar9,uVar6,uVar7,uVar8);
    func_0x000107c6142c(lVar9);
    puStack_c0 = &UNK_101454a78;
    uStack_b8 = 0;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_100ff4e14;
    puStack_c8 = &UNK_1103bdb10;
    ppuVar10 = &puStack_e0;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61574(uStack_b8);
    lVar9 = lVar5;
    func_0x000107c5f9dc(lVar5,uVar6,PTR___sSSN_11034da80,uVar8);
    func_0x000107c6142c(lVar5);
    func_0x000107c5d464(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(lVar4);
    func_0x000107c5c2bc(param_1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1000f3db8; end: 1000f3e13; +[SCCameraHardwareRequest initializeWithDevicePosition:isMultiCamSessionRequired:] */

void FUN_1000f3db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b00d0;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  puVar2[0x18] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1000f3e14; end: 1000f3e57; -[SCCameraHardwareRequest internalInit] */

void FUN_1000f3e14(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_112702ba8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000f3e58; end: 1000f3edf; -[SCCameraHardwareRequestHandler submitHardwareRequest:] */

void FUN_1000f3e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c5d6fc(param_1);
  func_0x000107c61180();
  func_0x000107c4df9c(uVar2,param_2,param_3,param_1,lVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar1);
  func_0x000107c3d7d0(*(undefined8 *)(param_1 + 0x10),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1000f3ee0; end: 1000f4203; -[SCCameraHardwareOperationFactory operationForHardwareRequest:delegate:updatesObservable:] */

void FUN_1000f3ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  puStack_78 = &UNK_1054cc4a8;
  puStack_70 = &UNK_1054cc4b8;
  uStack_68 = 0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_4);
  func_0x000107c4c678(param_3);
  uVar1 = puStack_88[5];
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c60bcc(&uStack_90,8);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000f4204; end: 1000f4477; -[SCCameraHardwareRequest matchInitialize:start:stop:activateDevices:setDeviceParameters:setStabilizationMode:updateDeviceFormat:updateFrameRateOnly:updateSessionPhotoOutputIfNeeded:turnARSessionOn:turnARSessionOff:] */

/* WARNING: Possible PIC construction at 0x0001000f4408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f4418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f4428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f4438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f4448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000f443c) */
/* WARNING: Removing unreachable block (ram,0x0001000f442c) */
/* WARNING: Removing unreachable block (ram,0x0001000f441c) */
/* WARNING: Removing unreachable block (ram,0x0001000f440c) */
/* WARNING: Removing unreachable block (ram,0x0001000f444c) */

void FUN_1000f4204(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    if (param_3 == 0) break;
    uVar2 = *(ulong *)(param_1 + 0x10);
    uVar3 = *(undefined1 *)(param_1 + 0x18);
    pcVar6 = *(code **)(param_3 + 0x10);
    param_12 = param_3;
    goto code_r0x0001000f43e4;
  case 1:
    if (param_4 == 0) break;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    pcVar6 = *(code **)(param_4 + 0x10);
    goto code_r0x0001000f43a4;
  case 2:
    if (param_5 == 0) break;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    pcVar6 = *(code **)(param_5 + 0x10);
    goto code_r0x0001000f433c;
  case 3:
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))
                (param_6,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                 *(undefined8 *)(param_1 + 0x58));
    }
    break;
  case 4:
    if (param_7 == 0) break;
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    pcVar6 = *(code **)(param_7 + 0x10);
    param_5 = param_7;
code_r0x0001000f433c:
    (*pcVar6)(param_5,uVar1);
    break;
  case 5:
    if (param_8 == 0) break;
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    pcVar6 = *(code **)(param_8 + 0x10);
    param_4 = param_8;
code_r0x0001000f43a4:
    (*pcVar6)(param_4,uVar1,uVar4);
    break;
  case 6:
    if (param_9 == 0) break;
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    pcVar6 = *(code **)(param_9 + 0x10);
    param_10 = param_9;
    goto code_r0x0001000f43c0;
  case 7:
    if (param_10 == 0) break;
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    pcVar6 = *(code **)(param_10 + 0x10);
code_r0x0001000f43c0:
    (*pcVar6)(param_10,uVar1,uVar4,uVar5);
    break;
  case 8:
    if (param_11 != 0) {
      (**(code **)(param_11 + 0x10))
                (param_11,*(undefined1 *)(param_1 + 0xa8),*(undefined1 *)(param_1 + 0xa9));
    }
    break;
  case 9:
    if (param_12 == 0) break;
    uVar3 = *(undefined1 *)(param_1 + 0xaf);
    pcVar6 = *(code **)(param_12 + 0x10);
    uVar2 = (ulong)*(uint5 *)(param_1 + 0xaa);
    goto code_r0x0001000f43e4;
  case 10:
    if (param_13 == 0) break;
    uVar3 = *(undefined1 *)(param_1 + 0xb5);
    pcVar6 = *(code **)(param_13 + 0x10);
    uVar2 = (ulong)*(uint5 *)(param_1 + 0xb0);
    param_12 = param_13;
code_r0x0001000f43e4:
    (*pcVar6)(param_12,uVar2,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_13);
  return;
}



/* Entry: 1000f4478; end: 1000f46d7; -[SCExperimentPreferenceStore initWithFilePath:logger:metrics:heuristicRecoveryManager:forcedDefaultsTweak:safeModeOptOutKeys:appStartExperimentReader:] */

undefined1 *
FUN_1000f4478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126f8ce0;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR___dispatch_queue_attr_concurrent_11034be28;
    func_0x000107c60f4c(PTR___dispatch_queue_attr_concurrent_11034be28,0x15,0);
    func_0x000107c61180();
    puVar4 = &UNK_10f40550b;
    func_0x000107c60f50(&UNK_10f40550b,puVar3);
    uVar6 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined **)((long)puVar2 + 0x18) = puVar4;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined **)((long)puVar2 + 0x10) = puVar4;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_3);
    uVar6 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = param_3;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_4);
    uVar6 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x28) = param_4;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_5);
    uVar6 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined8 *)((long)puVar2 + 0x30) = param_5;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_6);
    uVar6 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined8 *)((long)puVar2 + 0x38) = param_6;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_9);
    uVar6 = *(undefined8 *)((long)puVar2 + 0x40);
    *(undefined8 *)((long)puVar2 + 0x40) = param_9;
    func_0x000107c61170(uVar6);
    func_0x000107c54794(*(undefined8 *)((long)puVar2 + 0x38));
    uVar5 = *(ulong *)((long)puVar2 + 0x40);
    func_0x000107c3ebd4();
    if ((uVar5 & 1) == 0) {
      puVar4 = PTR_PTR_1126b7870;
      func_0x000107c43fd4();
      func_0x000107c61180();
      puVar3 = puVar4;
      func_0x000107c44a10();
      if (((ulong)puVar3 & 1) == 0) {
        uVar6 = *(undefined8 *)((long)puVar2 + 0x20);
        FUN_1000f746c();
        func_0x000107c61180();
        uVar7 = *(undefined8 *)((long)puVar2 + 8);
        *(undefined8 *)((long)puVar2 + 8) = uVar6;
        func_0x000107c61170(uVar7);
      }
      func_0x000107c61170(puVar4);
    }
    if ((param_7 & 1) == 0) {
      uVar1 = (undefined1)*(undefined8 *)((long)puVar2 + 0x38);
      func_0x000107c4a368();
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)((long)puVar2 + 0x48) = uVar1;
    func_0x000107c61174(param_8);
    uVar6 = *(undefined8 *)((long)puVar2 + 0x50);
    *(undefined8 *)((long)puVar2 + 0x50) = param_8;
    func_0x000107c61170(uVar6);
    func_0x000107c3b054(puVar2);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1000f46d8; end: 1000f471f; -[SCConfigHeuristicRecoveryManagerImpl setExperimentLogger:] */

void FUN_1000f46d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1000f4720(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1000f4720; end: 1000f47fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f4720(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (lRam00000001130841f8 != -1) {
    func_0x000107c61568(0x1130841f8,FUN_10006c7c8);
  }
  FUN_10006c804();
  if (lRam0000000113084208 != -1) {
    func_0x000107c61568(0x113084208,FUN_10006c80c);
  }
  uVar1 = uRam0000000113084210;
  func_0x000107c61604(unaff_x20 + _DAT_113084218,param_1);
  if (*(char *)(unaff_x20 + _DAT_113084220) == '\x01') {
    func_0x000107c61174(uVar1);
    func_0x00010452ee38();
    func_0x000107c61170(uVar1);
  }
  FUN_100070bfc();
  return;
}



/* Entry: 1000f47fc; end: 1000f484f; +[SCAppStartExperimentReaderConstants getCrashRecoveryUserDefaults] */

void FUN_1000f47fc(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fc258 != -1) {
    FUN_10002a2fc(0x1137fc258,&PTR___NSConcreteGlobalBlock_110d66a48);
  }
  uVar1 = uRam00000001137fc250;
  func_0x000107c61174(uRam00000001137fc250);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000f4850; end: 1000f488b;  */

void FUN_1000f4850(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c610f4();
  func_0x000107c48b70();
  uVar1 = puRam00000001137fc250;
  puRam00000001137fc250 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000f488c; end: 1000f4963;  */

/* WARNING: Possible PIC construction at 0x0001000f493c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000f4940) */

void FUN_1000f488c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b9d78;
  func_0x000107c610f4();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c464c0();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1000f4964; end: 1000f499b;  */

void FUN_1000f4964(long param_1)

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


