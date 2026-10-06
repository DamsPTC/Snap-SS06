/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10175abd0; end: 10175ac13;  */

void FUN_10175abd0(void)

{
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175ac14,0,0);
  return;
}



/* Entry: 10175ac14; end: 10175ac9b;  */

void FUN_10175ac14(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10175ac9c;
                    /* WARNING: Could not recover jumptable at 0x00010175ac98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x40),
             *(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),
             *(undefined8 *)(unaff_x22 + 0x58),uVar2,lVar3);
  return;
}



/* Entry: 10175ac9c; end: 10175ad13;  */

void FUN_10175ac9c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10175ace4,0,0);
  return;
}



/* Entry: 10175ad14; end: 10175aec3;  */

void FUN_10175ad14(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_90 + -extraout_x8;
  func_0x0001000abe04(param_1,puVar4);
  lVar1 = 0;
  func_0x000107c5fd0c();
  lVar8 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar8 + 0x30))(puVar4,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_10175c2a0(puVar4,0x112d453c8,&UNK_10d90ac60);
    uVar6 = 0x3100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar8 + 8))(puVar4,lVar1);
    uVar6 = (ulong)puVar2 & 0xff | 0x3100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  if (lVar1 == 0) {
    lVar8 = 0;
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(param_3 + 0x18);
    lVar8 = lVar1;
    func_0x000107c614f0();
    func_0x000107c615f0(lVar1);
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar1);
  }
  uVar5 = *unaff_x20;
  puVar3 = &UNK_110403c78;
  func_0x000107c613fc(&UNK_110403c78,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(long *)(puVar3 + 0x18) = param_3;
  puStack_80 = (undefined8 *)0x0;
  if (lVar7 != 0 || lVar8 != 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_80 = &uStack_70;
    lStack_60 = lVar8;
    lStack_58 = lVar7;
  }
  uStack_88 = 1;
  uStack_78 = uVar5;
  func_0x000107c615bc(uVar6,&uStack_88,PTR___sytN_11034f1b0 + 8,&UNK_10d987120,puVar3);
  func_0x000107c61574();
  return;
}



/* Entry: 10175aec4; end: 10175b103;  */

void FUN_10175aec4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x40) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10175af34,in_x3,0);
  return;
}



/* Entry: 10175b104; end: 10175b233;  */

void FUN_10175b104(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  FUN_10175baa4(uVar6,*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68));
  (**(code **)(lVar3 + 0x30))(uVar6,1,uVar2);
  if ((int)uVar6 == 1) {
    FUN_10175c2a0(*(undefined8 *)(unaff_x22 + 0xa0),0x112d36580,&UNK_10d9016d0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010175b1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0,0xf000000000000000);
    return;
  }
  (**(code **)(*(long *)(unaff_x22 + 0xb0) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xa0),
             *(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10175b234;
                    /* WARNING: Could not recover jumptable at 0x00010175b230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0xb8),uVar2,lVar3);
  return;
}



/* Entry: 10175b234; end: 10175b297;  */

void FUN_10175b234(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 200) = param_1;
  *(undefined8 *)(lVar2 + 0xd0) = param_2;
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10175b298;
  }
  else {
    pcVar1 = FUN_10175b5d0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x70),0);
  return;
}



/* Entry: 10175b298; end: 10175b4d7;  */

void FUN_10175b298(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 *puVar14;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar2 = *(long *)(unaff_x22 + 0xd8);
  uVar13 = *(undefined8 *)(unaff_x22 + 200);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar6 = 0;
  func_0x000107c5eb24();
  func_0x000107c613fc();
  func_0x000107c5eb20();
  uVar7 = 0x112dc6c70;
  FUN_10175c8a4(0x112dc6c70,0xff,FUN_10175c268,&UNK_10d987160);
  func_0x000107c5eb1c(uVar3,uVar12,uVar13,uVar11,uVar12,uVar7);
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x22 + 0x90);
    lVar4 = *(long *)(unaff_x22 + 0x98);
    lVar1 = *(long *)(unaff_x22 + 0x80);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c61574(uVar6);
    iVar5 = *(int *)(lVar2 + 0x14);
    func_0x000107c5eea0(uVar7);
    uVar8 = lVar4 + iVar5;
    func_0x000107c5ee78(uVar8,uVar7);
    (**(code **)(lVar1 + 8))(uVar7,uVar11);
    if ((uVar8 & 1) == 0) {
      puVar14 = *(undefined8 **)(unaff_x22 + 0x98);
      func_0x000100083b20(unaff_x22 + 0x38);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar2 = *(long *)(unaff_x22 + 0x58);
      func_0x0001000a8868(unaff_x22 + 0x38,uVar7);
      uVar11 = *puVar14;
      uVar12 = puVar14[1];
      func_0x000107c5ee84();
      piVar10 = *(int **)(lVar2 + 0x10);
      iVar5 = *piVar10;
      plVar9 = (long *)(ulong)(uint)piVar10[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xe0) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_10175b4d8;
                    /* WARNING: Could not recover jumptable at 0x00010175b4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar5 + (long)piVar10))
                (param_1,uVar11,uVar12,*(undefined8 *)(unaff_x22 + 0x60),
                 *(undefined8 *)(unaff_x22 + 0x68),uVar7,lVar2);
      return;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 200);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
    (**(code **)(*(long *)(unaff_x22 + 0xb0) + 8))
              (*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xa8));
    func_0x00010006c090(uVar7,uVar11);
    func_0x00010175c2e0(uVar12);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 200);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
    (**(code **)(*(long *)(unaff_x22 + 0xb0) + 8))
              (*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xa8));
    func_0x00010006c090(uVar7,uVar11);
    func_0x000107c61574(uVar6);
    func_0x000107c614ac(lVar2);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010175b42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0xf000000000000000);
  return;
}



/* Entry: 10175b4d8; end: 10175b523;  */

void FUN_10175b4d8(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175b524,uVar1,0);
  return;
}



/* Entry: 10175b524; end: 10175b5cf;  */

void FUN_10175b524(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  lVar1 = *(long *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  puVar6 = *(undefined8 **)(unaff_x22 + 0x98);
  func_0x00010006c090(*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0xd0));
  (**(code **)(lVar1 + 8))(uVar2,uVar5);
  func_0x0001000834e4(unaff_x22 + 0x38);
  uVar2 = *puVar6;
  uVar3 = puVar6[1];
  func_0x00010006c00c(uVar2,uVar3);
  func_0x00010175c2e0(puVar6);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010175b5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,uVar3);
  return;
}



/* Entry: 10175b5d0; end: 10175b653;  */

void FUN_10175b5d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  (**(code **)(*(long *)(unaff_x22 + 0xb0) + 8))
            (*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c614ac(uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010175b650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0xf000000000000000);
  return;
}



/* Entry: 10175b654; end: 10175b70b;  */

void FUN_10175b654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  lVar1 = 0;
  FUN_10175c268();
  *(long *)(unaff_x22 + 0x68) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x80) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175b70c);
  return;
}



/* Entry: 10175b70c; end: 10175b92b;  */

/* WARNING: Removing unreachable block (ram,0x00010175b824) */

void FUN_10175b70c(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar6 = *(long *)(unaff_x22 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  FUN_10175baa4(uVar8,*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50));
  (**(code **)(lVar6 + 0x30))(uVar8,1,uVar3);
  if ((int)uVar8 == 1) {
    FUN_10175c2a0(*(undefined8 *)(unaff_x22 + 0x78),0x112d36580,&UNK_10d9016d0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010175b894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  lVar6 = *(long *)(unaff_x22 + 0x68);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x78),
             *(undefined8 *)(unaff_x22 + 0x80));
  iVar1 = *(int *)(lVar6 + 0x14);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))((long)puVar4 + (long)iVar1,uVar9,lVar2);
  *puVar4 = uVar8;
  puVar4[1] = uVar3;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x00010006c00c(uVar8,uVar3);
  func_0x000107c5eb50();
  uVar3 = 0x112dc6c68;
  FUN_10175c8a4(0x112dc6c68,0xff,FUN_10175c268,&UNK_10d987188);
  func_0x000107c5eb4c(puVar4,lVar6,uVar3);
  *(undefined8 **)(unaff_x22 + 0x98) = puVar4;
  *(long *)(unaff_x22 + 0xa0) = lVar6;
  func_0x000107c61574(uVar8);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar3);
  piVar7 = *(int **)(lVar2 + 0x10);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10175b92c;
                    /* WARNING: Could not recover jumptable at 0x00010175b928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (puVar4,lVar6,*(undefined8 *)(unaff_x22 + 0x90),uVar3,lVar2);
  return;
}



/* Entry: 10175b92c; end: 10175b987;  */

void FUN_10175b92c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10175b988;
  }
  else {
    pcVar1 = FUN_10175ba0c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x60),0);
  return;
}



/* Entry: 10175b988; end: 10175ba0b;  */

void FUN_10175b988(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x00010175c2e0(uVar4);
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010175ba08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 10175ba0c; end: 10175baa3;  */

void FUN_10175ba0c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar1 = *(long *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x00010175c2e0(uVar5);
  (**(code **)(lVar1 + 8))(uVar2,uVar4);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c614ac(uVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010175baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10175baa4; end: 10175bd0f;  */

void FUN_10175baa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar11 = lVar7 + 0xfU & 0xfffffffffffffff0;
  lVar7 = (long)&uStack_70 - uVar11;
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3ac48();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c5fc54(puVar4,lVar2);
  func_0x000107c61170(puVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - uVar11;
  if (*(long *)(puVar3 + 0x10) != 0) {
    (**(code **)(lVar10 + 0x10))
              (lVar8,puVar3 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)),lVar2);
    func_0x000107c6142c(puVar3);
    (**(code **)(lVar10 + 0x20))(lVar7,lVar8,lVar2);
    iVar1 = 2;
    func_0x000100029b9c(2,0x10,0,0);
    if (iVar1 == 0) {
      func_0x000107c5ed98(param_1,param_2,param_3,0);
      (**(code **)(lVar10 + 8))(lVar7,lVar2);
    }
    else {
      lVar5 = 0;
      uStack_70 = param_2;
      uStack_68 = param_3;
      func_0x000107c5ed68();
      lVar9 = *(long *)(lVar5 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
      lVar8 = lVar8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
      lVar6 = lVar8;
      (**(code **)(lVar9 + 0x68))
                (lVar8,*(undefined4 *)
                        PTR___s10Foundation3URLV13DirectoryHintO03notC0yA2EmFWC_110345360,lVar5);
      func_0x000100e8b654();
      func_0x000107c5eddc(param_1,&uStack_70,lVar8,PTR___sSSN_11034da80,lVar6);
      (**(code **)(lVar9 + 8))(lVar8,lVar5);
      (**(code **)(lVar10 + 8))(lVar7,lVar2);
    }
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar2);
    return;
  }
  func_0x000107c6142c(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010175bcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 0x38))(param_1,1,1,lVar2);
  return;
}



/* Entry: 10175bd10; end: 10175bd2f;  */

void FUN_10175bd10(void)

{
  func_0x000107c61168(&PTR_PTR_112dc6bb8);
  return;
}



/* Entry: 10175bd30; end: 10175bdcf;  */

void FUN_10175bd30(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  long lVar7;
  long lVar8;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  lVar8 = *(long *)(unaff_x20 + 0x38);
  plVar6 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10175bdd0;
  plVar6[8] = lVar8;
  plVar6[6] = lVar3;
  plVar6[7] = lVar7;
  plVar6[4] = lVar2;
  plVar6[5] = lVar4;
  plVar6[2] = param_2;
  plVar6[3] = lVar1;
  lVar4 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[9] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175aa14,lVar1,0);
  return;
}



/* Entry: 10175bdd0; end: 10175be0b;  */

void FUN_10175bdd0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010175be08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10175be0c; end: 10175beaf;  */

void FUN_10175be0c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar6 = *(long *)(unaff_x20 + 0x40);
  lVar7 = *(long *)(unaff_x20 + 0x48);
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10175cb5c;
  plVar5[0xc] = lVar7;
  plVar5[10] = lVar4;
  plVar5[0xb] = lVar6;
  plVar5[8] = lVar3;
  plVar5[9] = lVar2;
  plVar5[7] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175abd0,lVar1,0);
  return;
}



/* Entry: 10175beb0; end: 10175bf53;  */

void FUN_10175beb0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  long lVar10;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x40);
  lVar10 = *(long *)(unaff_x20 + 0x48);
  plVar8 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x10175cb60;
  plVar8[7] = lVar10;
  plVar8[5] = lVar5;
  plVar8[6] = lVar9;
  plVar8[3] = lVar4;
  plVar8[4] = lVar6;
  plVar8[2] = lVar2;
  lVar6 = 0;
  func_0x000107c5eea4(0,uVar1,uVar3);
  plVar8[8] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar8[9] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[10] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10175af34,lVar2,0);
  return;
}



/* Entry: 10175bf54; end: 10175bf7f;  */

void FUN_10175bf54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 10175bf80; end: 10175bfa7;  */

void FUN_10175bf80(void)

{
  return;
}



/* Entry: 10175bfa8; end: 10175c037;  */

void FUN_10175bfa8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10175c038;
                    /* WARNING: Could not recover jumptable at 0x00010175c034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58),uVar2,lVar3);
  return;
}



/* Entry: 10175c038; end: 10175c10f;  */

void FUN_10175c038(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x38) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x40) = param_1;
  *(undefined8 *)(lVar2 + 0x48) = param_2;
  uVar1 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x70) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10175c08c,uVar1,0);
  return;
}



/* Entry: 10175c110; end: 10175c15b;  */

void FUN_10175c110(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010175c158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return;
}



/* Entry: 10175c15c; end: 10175c1db;  */

void FUN_10175c15c(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x1b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10175c1dc;
  plVar1[0x30] = lVar2;
  plVar1[0x2f] = param_1;
  plVar1[0x2d] = param_4;
  plVar1[0x2e] = param_5;
  plVar1[0x2b] = param_2;
  plVar1[0x2c] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175a524,lVar2,0);
  return;
}



/* Entry: 10175c1dc; end: 10175c257;  */

void FUN_10175c1dc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010175c214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10175c258; end: 10175c267;  */

undefined1  [16] FUN_10175c258(void)

{
  return ZEXT816(0x110403c58);
}



/* Entry: 10175c268; end: 10175c29f;  */

void FUN_10175c268(undefined8 param_1)

{
  if (lRam0000000112dc6cd0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e651778);
  return;
}



/* Entry: 10175c2a0; end: 10175c31b;  */

undefined8 FUN_10175c2a0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10175c31c; end: 10175c38b;  */

void FUN_10175c31c(undefined8 param_1)

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
  plVar3[1] = (long)FUN_10175c38c;
  (*(code *)&UNK_1000edb88)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10175c38c; end: 10175c3c7;  */

void FUN_10175c38c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010175c3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10175c3c8; end: 10175c46b;  */

void FUN_10175c3c8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar6 = *(long *)(unaff_x20 + 0x40);
  lVar7 = *(long *)(unaff_x20 + 0x48);
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10175cb64;
  plVar5[0xc] = lVar7;
  plVar5[10] = lVar4;
  plVar5[0xb] = lVar6;
  plVar5[8] = lVar3;
  plVar5[9] = lVar2;
  plVar5[7] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175abd0,lVar1,0);
  return;
}



/* Entry: 10175c46c; end: 10175c4a7;  */

void FUN_10175c46c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10175c4a8; end: 10175c54b;  */

void FUN_10175c4a8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  long lVar10;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x40);
  lVar10 = *(long *)(unaff_x20 + 0x48);
  plVar8 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x10175cb68;
  plVar8[7] = lVar10;
  plVar8[5] = lVar5;
  plVar8[6] = lVar9;
  plVar8[3] = lVar4;
  plVar8[4] = lVar6;
  plVar8[2] = lVar2;
  lVar6 = 0;
  func_0x000107c5eea4(0,uVar1,uVar3);
  plVar8[8] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar8[9] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[10] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10175af34,lVar2,0);
  return;
}



/* Entry: 10175c54c; end: 10175c5e7;  */

long * FUN_10175c54c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar4 = *param_2;
    lVar1 = param_2[1];
    func_0x00010006c00c(lVar4,lVar1);
    *param_1 = lVar4;
    param_1[1] = lVar1;
    iVar3 = *(int *)(param_3 + 0x14);
    lVar4 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))
              ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar4);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10175c5e8; end: 10175c62f;  */

void FUN_10175c5e8(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  func_0x00010006c090(*param_1,param_1[1]);
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x00010175c62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)param_1 + (long)iVar1,lVar2);
  return;
}



/* Entry: 10175c630; end: 10175c717;  */

undefined8 * FUN_10175c630(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  iVar3 = *(int *)(param_3 + 0x14);
  lVar4 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))
            ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar4);
  return param_1;
}



/* Entry: 10175c718; end: 10175c7d7;  */

undefined8 * FUN_10175c718(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 10175c7d8; end: 10175c7ef;  */

void FUN_10175c7d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10175c7f0; end: 10175c863;  */

void FUN_10175c7f0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10d987148;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,2,&puStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 10175c864; end: 10175c8a3;  */

void FUN_10175c864(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc6d10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d987284;
  func_0x000107c61520(&UNK_10d987284,&UNK_110403d60);
  puRam0000000112dc6d10 = puVar1;
  return;
}



/* Entry: 10175c8a4; end: 10175c927;  */

void FUN_10175c8a4(long *param_1,undefined8 param_2,code *param_3,long param_4)

{
  if (*param_1 == 0) {
    (*param_3)(param_2);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 10175c928; end: 10175ca8f;  */

int FUN_10175c928(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10175c9a4;
        goto LAB_10175c988;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10175c988:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10175c9a4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10175ca90; end: 10175cacf;  */

void FUN_10175ca90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc6d20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d98725c;
  func_0x000107c61520(&UNK_10d98725c,&UNK_110403d60);
  puRam0000000112dc6d20 = puVar1;
  return;
}



/* Entry: 10175cad0; end: 10175cad3;  */

void FUN_10175cad0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc6d28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9871f4;
  func_0x000107c61520(&UNK_10d9871f4,&UNK_110403d60);
  puRam0000000112dc6d28 = puVar1;
  return;
}



/* Entry: 10175cad4; end: 10175cb13;  */

void FUN_10175cad4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc6d28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9871f4;
  func_0x000107c61520(&UNK_10d9871f4,&UNK_110403d60);
  puRam0000000112dc6d28 = puVar1;
  return;
}



/* Entry: 10175cb14; end: 10175cb17;  */

void FUN_10175cb14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc6d30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9871cc;
  func_0x000107c61520(&UNK_10d9871cc,&UNK_110403d60);
  puRam0000000112dc6d30 = puVar1;
  return;
}



/* Entry: 10175cb18; end: 10175cb57;  */

void FUN_10175cb18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc6d30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9871cc;
  func_0x000107c61520(&UNK_10d9871cc,&UNK_110403d60);
  puRam0000000112dc6d30 = puVar1;
  return;
}



/* Entry: 10175cb58; end: 10175cb8b;  */

void FUN_10175cb58(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010175c158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return;
}



/* Entry: 10175cb8c; end: 10175ccd3;  */

/* WARNING: Removing unreachable block (ram,0x00010175ccfc) */

void FUN_10175cb8c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100083b20(&lStack_50);
  lVar1 = lStack_50;
  func_0x000107c5ee20(param_1,param_2);
  uVar2 = 2;
  uVar4 = 0x10;
  func_0x000100029b9c(2,0x10,0,0);
  if ((int)uVar2 == 0) {
    func_0x000107c5edc4();
  }
  else {
    uVar2 = 1;
    func_0x000107c5edc0(1);
  }
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar4);
  lStack_50 = 0;
  lVar3 = lVar1;
  func_0x000107c5e910();
  func_0x000107c615e8(lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  if ((int)lVar3 == 0) {
    lVar3 = lStack_50;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar3);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    func_0x000107c5ede8();
                    /* WARNING: Could not recover jumptable at 0x00010175cd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 10175ccd4; end: 10175cd33;  */

/* WARNING: Removing unreachable block (ram,0x00010175ccfc) */

void FUN_10175ccd4(undefined8 param_1)

{
  long unaff_x22;
  
  func_0x000107c5ede8(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010175cd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10175cd34; end: 10175cd7f;  */

/* WARNING: Removing unreachable block (ram,0x00010175cd60) */

void FUN_10175cd34(void)

{
  long unaff_x22;
  
  FUN_10175cb8c();
                    /* WARNING: Could not recover jumptable at 0x00010175cd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10175cd80; end: 10175cd9f;  */

undefined1  [16] FUN_10175cd80(void)

{
  return ZEXT816(0x110403e68);
}



/* Entry: 10175cda0; end: 10175cdff;  */

void FUN_10175cda0(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  FUN_10175e430();
  lVar1 = param_2;
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10175e228();
  *(undefined **)(lVar1 + 0x70) = puVar2;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110403ea0;
  *param_1 = lVar1;
  return;
}



/* Entry: 10175ce00; end: 10175ce43;  */

long FUN_10175ce00(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10175e228();
  *(undefined **)(unaff_x20 + 0x70) = puVar1;
  return unaff_x20;
}



/* Entry: 10175ce44; end: 10175ceeb;  */

void FUN_10175ce44(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  lVar3 = 0x112dc6d48;
  func_0x0001000285a8(0x112dc6d48,&UNK_10d987370);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  lVar3 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x68) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175ceec);
  return;
}



/* Entry: 10175ceec; end: 10175d1a7;  */

void FUN_10175ceec(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  lVar17 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c5eea0(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c61428(lVar17 + 0x70,unaff_x22 + 0x10,0,0);
  lVar13 = *(long *)(lVar17 + 0x70);
  if (*(long *)(lVar13 + 0x10) == 0) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar13 = 0x112dc6d50;
    func_0x0001000285a8(0x112dc6d50,&UNK_10d987378);
    (**(code **)(*(long *)(lVar13 + -8) + 0x38))(uVar11,1,1,lVar13);
LAB_10175d064:
    uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
    (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x68));
    FUN_10175e3d8(uVar11);
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x40);
    uVar8 = *(ulong *)(unaff_x22 + 0x48);
    func_0x000107c61434(lVar13);
    func_0x000100029284(lVar6);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
    bVar1 = (uVar8 & 1) == 0;
    if (bVar1) {
      lVar7 = 0x112dc6d50;
      func_0x0001000285a8(0x112dc6d50,&UNK_10d987378);
      pcVar9 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
    }
    else {
      lVar15 = *(long *)(lVar13 + 0x38);
      lVar7 = 0x112dc6d50;
      func_0x0001000285a8(0x112dc6d50,&UNK_10d987378);
      lVar18 = *(long *)(lVar7 + -8);
      func_0x00010175e4e8(lVar15 + *(long *)(lVar18 + 0x48) * lVar6,uVar11,0x112dc6d50,
                          &UNK_10d987378);
      pcVar9 = *(code **)(lVar18 + 0x38);
    }
    (*pcVar9)(uVar11,bVar1,1,lVar7);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c6142c(lVar13);
    lVar13 = 0x112dc6d50;
    func_0x0001000285a8(0x112dc6d50,&UNK_10d987378);
    (**(code **)(*(long *)(lVar13 + -8) + 0x30))(uVar11,1,lVar13);
    if ((int)uVar11 == 1) goto LAB_10175d064;
    uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar8 = *(ulong *)(unaff_x22 + 0x80);
    puVar10 = *(undefined8 **)(unaff_x22 + 0x60);
    uVar12 = *puVar10;
    uVar14 = puVar10[1];
    (**(code **)(*(long *)(unaff_x22 + 0x70) + 0x20))
              (uVar11,(long)puVar10 + (long)*(int *)(lVar13 + 0x30),
               *(undefined8 *)(unaff_x22 + 0x68));
    func_0x000107c5ee78(uVar8,uVar11);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar13 = *(long *)(unaff_x22 + 0x70);
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(lVar13 + 8);
      (*pcVar9)(uVar11,uVar2);
      (*pcVar9)(uVar4,uVar2);
      goto LAB_10175d088;
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c61428(lVar17 + 0x70,unaff_x22 + 0x28,0x21,0);
    FUN_10175d848(uVar16,uVar3,uVar5);
    func_0x000107c614a8(unaff_x22 + 0x28);
    func_0x00010006c090(uVar12,uVar14);
    FUN_10175e3d8(uVar16);
    pcVar9 = *(code **)(lVar13 + 8);
    (*pcVar9)(uVar11,uVar2);
    (*pcVar9)(uVar4,uVar2);
  }
  uVar12 = 0;
  uVar14 = 0xf000000000000000;
LAB_10175d088:
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010175d0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar12,uVar14);
  return;
}



/* Entry: 10175d1a8; end: 10175d23f;  */

void FUN_10175d1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x58) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  lVar1 = 0x112dc6d48;
  func_0x0001000285a8(0x112dc6d48,&UNK_10d987370);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175d240);
  return;
}



/* Entry: 10175d240; end: 10175d363;  */

void FUN_10175d240(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar6 = *(long *)(unaff_x22 + 0x60);
  lVar11 = *(long *)(unaff_x22 + 0x50);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar10 = 0x112dc6d50;
  func_0x0001000285a8(0x112dc6d50,&UNK_10d987378);
  iVar9 = *(int *)(lVar10 + 0x30);
  *puVar5 = uVar4;
  puVar5[1] = uVar8;
  func_0x000107c61434(uVar7);
  func_0x00010006c00c(uVar4,uVar8);
  func_0x000107c5eea0(uVar1);
  func_0x000107c5ee6c((long)puVar5 + (long)iVar9,uVar12);
  (**(code **)(lVar6 + 8))(uVar1,uVar2);
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(puVar5,0,1,lVar10);
  func_0x000107c61428(lVar11 + 0x70,unaff_x22 + 0x10,0x21,0);
  FUN_10175d364(puVar5,uVar3,uVar7);
  func_0x000107c614a8(unaff_x22 + 0x10);
  func_0x000107c615c0(puVar5);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010175d360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10175d364; end: 10175d507;  */

void FUN_10175d364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112dc6d48;
  uStack_70 = param_2;
  func_0x0001000285a8(0x112dc6d48,&UNK_10d987370);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar5 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  lVar1 = 0x112dc6d50;
  func_0x0001000285a8(0x112dc6d50,&UNK_10d987378);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10175e450(param_1,lVar6,0x112dc6d48,&UNK_10d987370);
  lVar2 = lVar6;
  (**(code **)(lVar4 + 0x30))(lVar6,1,lVar1);
  if ((int)lVar2 == 1) {
    FUN_10175e3d8(lVar6);
    FUN_10175d848(lVar5,uStack_70,param_3);
    func_0x000107c6142c(param_3);
    FUN_10175e3d8(lVar5);
  }
  else {
    FUN_10175e450(lVar6,lVar6 - extraout_x8_00,0x112dc6d50,&UNK_10d987378);
    uVar3 = *unaff_x20;
    func_0x000107c61558(uVar3);
    uStack_68 = *unaff_x20;
    FUN_10175e0ec(lVar6 - extraout_x8_00,uStack_70,param_3,uVar3);
    func_0x000107c6142c(param_3);
    *unaff_x20 = uStack_68;
  }
  return;
}



/* Entry: 10175d508; end: 10175d52b;  */

void FUN_10175d508(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 10175d52c; end: 10175d537;  */

void FUN_10175d52c(void)

{
  return;
}



/* Entry: 10175d538; end: 10175d597;  */

void FUN_10175d538(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *unaff_x20;
  plVar4 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10175d598;
  plVar4[9] = param_2;
  plVar4[10] = lVar5;
  plVar4[8] = param_1;
  lVar3 = 0x112dc6d48;
  func_0x0001000285a8(0x112dc6d48,&UNK_10d987370);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xb] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xc] = uVar2;
  lVar3 = 0;
  func_0x000107c5eea4();
  plVar4[0xd] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0xe] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xf] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175ceec,lVar5,0);
  return;
}



/* Entry: 10175d598; end: 10175d5e3;  */

void FUN_10175d598(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010175d5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return;
}



/* Entry: 10175d5e4; end: 10175d677;  */

void FUN_10175d5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x50) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  lVar1 = 0x112dc6d48;
  func_0x0001000285a8(0x112dc6d48,&UNK_10d987370);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  uVar3 = *unaff_x20;
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175d678,uVar3,0);
  return;
}



/* Entry: 10175d678; end: 10175d79b;  */

void FUN_10175d678(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x68);
  lVar5 = *(long *)(unaff_x22 + 0x70);
  lVar2 = *(long *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar10 = 0x112dc6d50;
  func_0x0001000285a8(0x112dc6d50,&UNK_10d987378);
  iVar9 = *(int *)(lVar10 + 0x30);
  *puVar1 = uVar4;
  puVar1[1] = uVar8;
  func_0x000107c61434(uVar7);
  func_0x00010006c00c(uVar4,uVar8);
  func_0x000107c5eea0(uVar6);
  func_0x000107c5ee6c((long)puVar1 + (long)iVar9,uVar12);
  (**(code **)(lVar2 + 8))(uVar6,uVar11);
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(puVar1,0,1,lVar10);
  func_0x000107c61428(lVar5 + 0x70,unaff_x22 + 0x10,0x21,0);
  FUN_10175d364(puVar1,uVar3,uVar7);
  func_0x000107c614a8(unaff_x22 + 0x10);
  func_0x000107c615c0(puVar1);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010175d798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10175d79c; end: 10175d847;  */

void FUN_10175d79c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar4 = *(long *)(param_5 + 0x38);
  lVar3 = 0x112dc6d50;
  func_0x0001000285a8(0x112dc6d50,&UNK_10d987378);
  FUN_10175e450(param_4,lVar4 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_1,0x112dc6d50,
                &UNK_10d987378);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10175d848);
  (*pcVar2)();
}



/* Entry: 10175d848; end: 10175e0eb;  */

void FUN_10175d848(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x000100029284();
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0x112dc6d50;
    func_0x0001000285a8(0x112dc6d50,&UNK_10d987378);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x00010175db78();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0x112dc6d50;
    func_0x0001000285a8(0x112dc6d50,&UNK_10d987378);
    lVar6 = *(long *)(lVar4 + -8);
    FUN_10175e450(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1,0x112dc6d50,&UNK_10d987378);
    func_0x00010175d990(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010175d97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 10175e0ec; end: 10175e227;  */

ulong FUN_10175e0ec(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  func_0x000100029284(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10175e1e4);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    func_0x00010175dda4(lVar4,param_4 & 1);
    uVar6 = param_3;
    func_0x000100029284(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10175e18c);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010175db78();
    lVar4 = *unaff_x20;
    goto joined_r0x00010175e1f8;
  }
  lVar4 = *unaff_x20;
joined_r0x00010175e1f8:
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar4 = 0x112dc6d50;
    func_0x0001000285a8(0x112dc6d50,&UNK_10d987378);
    uVar3 = lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * lVar2;
    lVar4 = 0x112dc6d50;
    func_0x0001000285a8(0x112dc6d50,&UNK_10d987378);
    (**(code **)(*(long *)(lVar4 + -8) + 0x28))(uVar3,param_1,lVar4);
    return uVar3;
  }
  FUN_10175d79c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return param_3;
}



/* Entry: 10175e228; end: 10175e3d7;  */

undefined * FUN_10175e228(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong auStack_70 [2];
  
  lVar5 = 0x112dc6e30;
  func_0x0001000285a8(0x112dc6e30,&UNK_10d987430);
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)((long)auStack_70 + -extraout_x8);
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112dc6e28,&UNK_10d987428);
    puVar6 = puVar10;
    func_0x000107c60498();
    auStack_70[1] = (ulong)*(int *)(lVar5 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    auStack_70[0] = *(ulong *)(lVar11 + 0x48);
    func_0x000107c6157c();
    do {
      func_0x00010175e4e8(param_1,puVar9,0x112dc6e30,&UNK_10d987430);
      uVar2 = *puVar9;
      uVar3 = *(ulong *)((long)auStack_70 + -extraout_x8 + 8);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10175e3d4);
        (*pcVar4)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar11 = *(long *)(puVar6 + 0x38);
      lVar5 = 0x112dc6d50;
      func_0x0001000285a8(0x112dc6d50,&UNK_10d987378);
      func_0x00010175e450((long)puVar9 + auStack_70[1],
                          lVar11 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar7,0x112dc6d50,
                          &UNK_10d987378);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10175e3d8);
        (*pcVar4)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + auStack_70[0];
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 10175e3d8; end: 10175e41f;  */

undefined8 FUN_10175e3d8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112dc6d48;
  func_0x0001000285a8(0x112dc6d48,&UNK_10d987370);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10175e420; end: 10175e42f;  */

undefined1  [16] FUN_10175e420(void)

{
  return ZEXT816(0x110403ec8);
}



/* Entry: 10175e430; end: 10175e44f;  */

void FUN_10175e430(void)

{
  func_0x000107c61168(&PTR_PTR_112dc6d98);
  return;
}



/* Entry: 10175e450; end: 10175e52f;  */

undefined8 FUN_10175e450(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10175e530; end: 10175e597; -[_TtC60CTPInfoStickerPresentationModelProviderFactoryImplementation50CTPInfoStickerPresentationModelProviderFactoryImpl infoStickerPresentationModelProviderWithRenderingContext:infoStickerDataProvider:] */

void FUN_10175e530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ba8d0;
  func_0x000107c610f8();
  func_0x000107c615f0(param_4);
  func_0x000107c48304(puVar2,param_2,param_3,param_4);
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10175e598);
  (*pcVar1)();
}



/* Entry: 10175e598; end: 10175e5d3; -[_TtC60CTPInfoStickerPresentationModelProviderFactoryImplementation50CTPInfoStickerPresentationModelProviderFactoryImpl init] */

void FUN_10175e598(undefined8 param_1)

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



/* Entry: 10175e5d4; end: 10175e627;  */

void FUN_10175e5d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10175e628; end: 10175e657;  */

void FUN_10175e628(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010175e608();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 10175e658; end: 10175e667;  */

undefined1  [16] FUN_10175e658(void)

{
  return ZEXT816(0x110403f80);
}



/* Entry: 10175e668; end: 10175e697;  */

void FUN_10175e668(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10175e698; end: 10175e6bb;  */

void FUN_10175e698(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10175e6bc; end: 10175e703;  */

undefined1  [16] FUN_10175e6bc(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000107c50520(uStack_28);
  func_0x000107c61170(uStack_28);
  return ZEXT816(0);
}



/* Entry: 10175e704; end: 10175e75f;  */

undefined ** FUN_10175e704(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 10175e760; end: 10175e7e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175e760(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_113091ae0);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_38);
  puVar3 = PTR_PTR_1126a7b20;
  func_0x000107c610f8();
  func_0x000107c48610();
  func_0x000107c61170(uVar2);
  if (puVar3 != (undefined *)0x0) {
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10175e7e4);
  (*pcVar1)();
}



/* Entry: 10175e7e4; end: 10175e9af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10175e7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  func_0x000100083b20(&lStack_68);
  lVar7 = lStack_68;
  lVar2 = lStack_68;
  func_0x000107c3e464(lStack_68);
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c61168(PTR_PTR_1126b86c0);
  func_0x000107c496bc();
  func_0x000100083b20(&lStack_68);
  lVar7 = lStack_68;
  uVar3 = *(undefined8 *)(lStack_68 + _DAT_11307e0b8);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lVar7);
  func_0x000100083b20(&lStack_70);
  uVar4 = *(undefined8 *)(lStack_70 + _DAT_113091ae0);
  func_0x000107c61174(uVar4);
  func_0x000107c61170(lStack_70);
  puVar5 = PTR_PTR_1126a7b20;
  func_0x000107c610f8();
  func_0x000107c48610();
  func_0x000107c61170(uVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar6 = PTR_PTR_1126a7b28;
    func_0x000107c610f8(PTR_PTR_1126a7b28);
    func_0x000107c487f8();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar5);
    func_0x000100083b20(&lStack_68);
    lVar7 = lStack_68;
    func_0x000107c43f90(lStack_68);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_68);
    func_0x000107c5d948(lVar7);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61170(lVar2);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10175e9b0);
  (*pcVar1)();
}



/* Entry: 10175e9b0; end: 10175ea07;  */

void FUN_10175e9b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10175ea08; end: 10175ec83;  */

void FUN_10175ea08(long param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = &UNK_110404480;
  func_0x000107c613fc(&UNK_110404480,0x20,7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  uVar7 = 0x112dc70e0;
  func_0x0001000285a8(0x112dc70e0,&UNK_10d9878b0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar6);
  pcVar2 = FUN_10175ed00;
  func_0x0001000b64ac(FUN_10175ed00,puVar1);
  puVar5 = PTR___sSbSQsWP_11034dd50;
  puVar3 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  puVar1 = &UNK_1104044a8;
  func_0x000107c613fc(&UNK_1104044a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = 0xd000000000000012;
  *(undefined8 *)(puVar1 + 0x18) = 0x800000010efbad70;
  uVar6 = 0x10175ed08;
  func_0x00010487e4e0(0x10175ed08,puVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar1);
  uVar4 = 1;
  func_0x00010487fe40(1);
  func_0x000107c61574();
  func_0x000102797b10();
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar4);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  puVar1 = &UNK_1104044d0;
  func_0x000107c613fc(&UNK_1104044d0,0x28,7);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  func_0x000107c613fc(uVar7,0x28,7);
  func_0x000107c61174(uVar6);
  func_0x000107c615f0(uVar4);
  uVar7 = 0x10175ed0c;
  func_0x0001000b64ac(0x10175ed0c,puVar1);
  func_0x0001000c2068(puVar5);
  puVar1 = &UNK_1104044f8;
  func_0x000107c613fc(&UNK_1104044f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = 0x746142776f4c7369;
  *(undefined8 *)(puVar1 + 0x18) = 0xec00000079726574;
  uVar6 = 0x10175ed18;
  func_0x00010487e4e0(0x10175ed18,puVar1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar1);
  uVar4 = 1;
  func_0x00010487fe40(1);
  func_0x000107c61574();
  func_0x000102797b10();
  func_0x000107c61574(uVar7);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(uVar4);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar6;
  return;
}



/* Entry: 10175ec84; end: 10175ecaf;  */

void FUN_10175ec84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10175ecb0; end: 10175ecbf;  */

void FUN_10175ecb0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10175ecc0; end: 10175ecff;  */

void FUN_10175ecc0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101c6a488(param_1,*unaff_x20,&PTR_DAT_110404450);
  return;
}



/* Entry: 10175ed00; end: 10175ed1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10175ed00(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined1 auVar12 [16];
  long lStack_68;
  long lStack_60;
  undefined1 uStack_51;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = &UNK_110404580;
  func_0x000107c613fc(&UNK_110404580,0x28,7);
  *(long *)(puVar4 + 0x10) = param_1;
  *(code **)(puVar4 + 0x18) = pcVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar3;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c();
  (*pcVar2)();
  if (param_1 == 0) {
    func_0x0001000b6d30();
    func_0x000107c613fc();
    uVar8 = 0;
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar5 = 0;
    FUN_10175f49c();
    lVar6 = lVar5;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar6 + _DAT_112dc71c0);
    *puVar1 = FUN_10175f4bc;
    puVar1[1] = puVar4;
    puVar11 = PTR_s_init_1125d9248;
    lStack_68 = lVar6;
    lStack_60 = lVar5;
    func_0x000107c6157c(puVar4);
    plVar7 = &lStack_68;
    func_0x000107c61154(plVar7,puVar11);
    func_0x000107c3d740(param_1);
    puVar11 = &UNK_1104045a8;
    func_0x000107c613fc(&UNK_1104045a8,0x20,7);
    *(long *)(puVar11 + 0x10) = param_1;
    *(long **)(puVar11 + 0x18) = plVar7;
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    uVar8 = 0x10175f4c8;
  }
  func_0x0001000b6d50(uVar8,puVar11);
  uVar9 = uVar8;
  (*pcVar2)();
  if (uVar9 == 0) {
    uStack_51 = 0;
  }
  else {
    uVar10 = uVar9;
    func_0x000107c51b18();
    if ((int)uVar10 == 0) {
      uStack_51 = 0;
    }
    else {
      uVar10 = uVar9;
      func_0x000107c5dad4();
      if ((uVar10 & 1) == 0) {
        uVar10 = uVar9;
        func_0x000107c5dacc();
        uStack_51 = (undefined1)uVar10;
      }
      else {
        uStack_51 = 1;
      }
    }
    func_0x000107c615e8(uVar9);
  }
  func_0x000100087f6c(&uStack_51);
  func_0x000107c61574(puVar4);
  auVar12._8_8_ = &PTR_DAT_1107aaa40;
  auVar12._0_8_ = uVar8;
  return auVar12;
}



/* Entry: 10175ed1c; end: 10175ed67;  */

void FUN_10175ed1c(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10175ede0,param_1);
  return;
}



/* Entry: 10175ed68; end: 10175eddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175ed68(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10175f164();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112dc70e8) = 0;
  *(long *)(lVar3 + _DAT_112dc70f0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10175ede0; end: 10175ede7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175ede0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10175f164();
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112dc70e8) = 0;
  *(long *)(lVar2 + _DAT_112dc70f0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10175ede8; end: 10175ee3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175ede8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc70e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dc70f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10175ee40; end: 10175eea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10175ee40(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dc70e8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dc70e8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10175eea4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar3;
}



/* Entry: 10175eea4; end: 10175efe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10175eea4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c52030();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  puVar2 = &UNK_110404558;
  func_0x000107c613fc(&UNK_110404558,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  lVar3 = 0;
  func_0x00010175f408();
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x10) = 0x10175f184;
  *(undefined **)(lVar3 + 0x18) = puVar2;
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168();
  func_0x000107c61174(uVar1);
  func_0x000107c41570();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  func_0x000107c40efc();
  func_0x000107c61180();
  lVar5 = 0;
  func_0x00010175fb1c();
  func_0x000107c61534();
  *(undefined **)(lVar5 + 0x10) = puVar2;
  *(undefined **)(lVar5 + 0x18) = puVar4;
  *(undefined ***)(lVar5 + 0x20) = &PTR_DAT_1104045c0;
  func_0x00010175ece0(0);
  func_0x000107c613fc();
  FUN_10175ea08(lVar3,lVar5);
  func_0x000107c61170(uVar1);
  return lVar3;
}


