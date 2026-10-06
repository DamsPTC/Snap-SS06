/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c07954; end: 101c0799f;  */

void FUN_101c07954(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x1c6) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c079a0,*(undefined8 *)(lVar1 + 0x168),*(undefined8 *)(lVar1 + 0x170));
  return;
}



/* Entry: 101c079a0; end: 101c07ac7;  */

void FUN_101c079a0(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x1c6) != '\x01') {
    func_0x000100083b20(unaff_x22 + 0x108);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar6 = uVar5;
    func_0x000107c49fd4();
    func_0x000107c615e8(uVar5);
    if ((int)uVar6 != 0) {
      func_0x000100083b20(unaff_x22 + 0x60);
      func_0x00010008a7c8(unaff_x22 + 0x110,unaff_x22 + 0x60);
      FUN_101bf24fc(unaff_x22 + 0x60);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
      func_0x000100083b20(unaff_x22 + 0x38);
      func_0x000107c61574(uVar6);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar2 = *(long *)(unaff_x22 + 0x58);
      func_0x0001000a8868(unaff_x22 + 0x38,uVar6);
      piVar4 = *(int **)(lVar2 + 8);
      iVar1 = *piVar4;
      plVar3 = (long *)(ulong)(uint)piVar4[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x198) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_101c07ac8;
                    /* WARNING: Could not recover jumptable at 0x000101c07a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar4))(*(undefined8 *)(unaff_x22 + 0x128),uVar6,lVar2);
      return;
    }
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x160));
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x158));
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101c07ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c07ac8; end: 101c07b27;  */

void FUN_101c07ac8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x198));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x168);
    uVar3 = *(undefined8 *)(lVar4 + 0x170);
    uVar1 = 0x101c0bfd4;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0x168);
    uVar3 = *(undefined8 *)(lVar4 + 0x170);
    uVar1 = 0x101c07ea8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 101c07b28; end: 101c07b7f;  */

void FUN_101c07b28(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1a8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1a0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101c07b80;
  }
  else {
    pcVar1 = (code *)0x101c07d98;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x168),*(undefined8 *)(lVar2 + 0x170));
  return;
}



/* Entry: 101c07b80; end: 101c07ceb;  */

void FUN_101c07b80(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar7 = uVar6;
  (**(code **)(*(long *)(unaff_x22 + 0x150) + 0x30))(uVar6,1,*(undefined8 *)(unaff_x22 + 0x148));
  if ((int)uVar7 == 1) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x160));
    func_0x000101c0bb28(uVar6,0x112e085c8,&UNK_10d9dcfb0);
    func_0x0001000834e4(unaff_x22 + 0x88);
  }
  else {
    FUN_101c00738(uVar6,*(undefined8 *)(unaff_x22 + 0x158));
    uVar3 = unaff_x22 + 0x88;
    func_0x0001000834e4();
    FUN_101c07ef4();
    if ((uVar3 & 1) != 0) {
      func_0x000100083b20(unaff_x22 + 0xd8);
      func_0x00010008a7c8(unaff_x22 + 0x120,unaff_x22 + 0xd8);
      FUN_101bf24fc(unaff_x22 + 0xd8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
      func_0x000100083b20(unaff_x22 + 0xb0);
      func_0x000107c61574(uVar7);
      uVar7 = *(undefined8 *)(unaff_x22 + 200);
      lVar2 = *(long *)(unaff_x22 + 0xd0);
      func_0x0001000a8868(unaff_x22 + 0xb0,uVar7);
      piVar5 = *(int **)(lVar2 + 8);
      iVar1 = *piVar5;
      plVar4 = (long *)(ulong)(uint)piVar5[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x1b0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101c07cec;
                    /* WARNING: Could not recover jumptable at 0x000101c07cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x128),uVar7,lVar2);
      return;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
    func_0x000101c00570(*(undefined8 *)(unaff_x22 + 0x158));
    func_0x000107c61574(uVar7);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x158));
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101c07ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c07cec; end: 101c07d43;  */

void FUN_101c07cec(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1b8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1b0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101c07d44;
  }
  else {
    pcVar1 = FUN_101c07df0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x168),*(undefined8 *)(lVar2 + 0x170));
  return;
}



/* Entry: 101c07d44; end: 101c07def;  */

void FUN_101c07d44(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x160));
  func_0x000101c00570(uVar1);
  func_0x0001000834e4(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x158));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c07d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c07df0; end: 101c07e4f;  */

void FUN_101c07df0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x160));
  func_0x000101c00570(uVar2);
  func_0x0001000834e4(unaff_x22 + 0xb0);
  func_0x000107c614ac(uVar1);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x158));
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101c07e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c07e50; end: 101c07ef3;  */

void FUN_101c07e50(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x160));
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c614ac(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x158));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c07ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c07ef4; end: 101c0812f;  */

uint FUN_101c07ef4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0;
  func_0x000103a82768();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar10 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar8 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar8 - extraout_x12_00;
  FUN_101c0052c();
  lVar3 = lVar10;
  func_0x000107c614c4(lVar10,lVar2);
  if ((int)lVar3 == 0) {
    lVar3 = 0x112e08440;
    func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
    func_0x000107c6142c(*(undefined8 *)(lVar10 + *(int *)(lVar3 + 0x30)));
    func_0x0001003a4c00(lVar10,lVar6);
    FUN_101c0bae0(lVar6,lVar8,0x112d373d8,&UNK_10d9014c0);
    lVar3 = lVar8;
    (**(code **)(lVar11 + 0x30))(lVar8,1,lVar1);
    if ((int)lVar3 == 1) {
      func_0x000101c0bb28(lVar6,0x112d373d8,&UNK_10d9014c0);
      uVar7 = 1;
    }
    else {
      (**(code **)(lVar11 + 0x20))(lVar5,lVar8,lVar1);
      func_0x000107c5eea0(puVar4);
      lVar3 = lVar5;
      func_0x000107c5ee74(lVar5,puVar4);
      uVar7 = (uint)lVar3;
      pcVar9 = *(code **)(lVar11 + 8);
      (*pcVar9)(puVar4,lVar1);
      (*pcVar9)(lVar5,lVar1);
      func_0x000101c0bb28(lVar6,0x112d373d8,&UNK_10d9014c0);
    }
  }
  else {
    func_0x000101c00570(lVar10);
    uVar7 = 0;
  }
  return uVar7 & 1;
}



/* Entry: 101c08130; end: 101c081df;  */

void FUN_101c08130(undefined1 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_50 [15];
  undefined1 uStack_41;
  
  lVar1 = 0x112e08e30;
  func_0x0001000285a8(0x112e08e30,&UNK_10d9de598);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0x112e08dc8;
  uStack_41 = param_1;
  func_0x0001000285a8(0x112e08dc8,&UNK_10d9de468);
  func_0x000107c5fd28(auStack_50 + -extraout_x8,&uStack_41,uVar2);
  (**(code **)(lVar3 + 8))(auStack_50 + -extraout_x8,lVar1);
  return;
}



/* Entry: 101c081e0; end: 101c0825f;  */

void FUN_101c081e0(void)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0x112e00a00;
  func_0x0001000285a8(0x112e00a00,&UNK_10d9d5e90);
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5fd24(&stack0xffffffffffffffd0 + -extraout_x8);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffd0 + -extraout_x8,lVar1);
  return;
}



/* Entry: 101c08260; end: 101c0834f;  */

void FUN_101c08260(char *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c52684();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c52684();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
  }
  if (param_2 != 0) {
    func_0x000107c52aa4();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101c08350; end: 101c08417;  */

void FUN_101c08350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  lVar5 = 0x112e00a10;
  func_0x0001000285a8(0x112e00a10,&UNK_10dc12dc0);
  *(long *)(unaff_x22 + 0x30) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  uVar4 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c08418,uVar3,uVar4);
  return;
}



/* Entry: 101c08418; end: 101c08493;  */

void FUN_101c08418(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c08494;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0x70,*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Entry: 101c08494; end: 101c084d7;  */

void FUN_101c08494(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c084d8,*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
  return;
}



/* Entry: 101c084d8; end: 101c08697;  */

void FUN_101c084d8(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (*(char *)(unaff_x22 + 0x70) == '\x01') {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x30));
    func_0x000107c61574(uVar7);
    func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101c08550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar2 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c08690);
    (*pcVar1)();
  }
  lVar3 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c3ec60();
  dVar6 = param_3;
  dVar9 = param_4;
  func_0x000107c61170(lVar2);
  func_0x000107c5f444(param_3,param_4);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c08694);
    (*pcVar1)();
  }
  lVar2 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c515a0();
  dVar8 = dVar6;
  func_0x000107c61170(lVar3);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    dVar6 = param_4 + dVar6 + 23.0;
    uVar7 = 0x4022000000000000;
    dVar10 = dVar6 + 9.0;
    func_0x000107c3ec60();
    func_0x000107c61170(lVar2);
    func_0x000107c609b0(dVar6,uVar7,dVar8,dVar9);
    func_0x000107c54d20(dVar10 / dVar6,uVar5);
    func_0x000107c575ec(uVar5);
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101c08698;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
              (plVar4,(char *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x30));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c08698);
  (*pcVar1)();
}



/* Entry: 101c08698; end: 101c086db;  */

void FUN_101c08698(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x101c0bff0,*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
  return;
}



/* Entry: 101c086dc; end: 101c087a3;  */

void FUN_101c086dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  lVar5 = 0x112e00a10;
  func_0x0001000285a8(0x112e00a10,&UNK_10dc12dc0);
  *(long *)(unaff_x22 + 0x30) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  uVar4 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c087a4,uVar3,uVar4);
  return;
}



/* Entry: 101c087a4; end: 101c0881f;  */

void FUN_101c087a4(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c08820;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0x70,*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Entry: 101c08820; end: 101c08863;  */

void FUN_101c08820(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c08864,*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
  return;
}



/* Entry: 101c08864; end: 101c08a23;  */

void FUN_101c08864(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (*(char *)(unaff_x22 + 0x70) == '\x01') {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x30));
    func_0x000107c61574(uVar7);
    func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101c088dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar2 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c08a1c);
    (*pcVar1)();
  }
  lVar3 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c3ec60();
  dVar6 = param_3;
  dVar9 = param_4;
  func_0x000107c61170(lVar2);
  func_0x000107c5f444(param_3,param_4);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c08a20);
    (*pcVar1)();
  }
  lVar2 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c515a0();
  dVar8 = dVar6;
  func_0x000107c61170(lVar3);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    dVar6 = param_4 + dVar6 + 23.0;
    uVar7 = 0x4022000000000000;
    dVar10 = dVar6 + 9.0;
    func_0x000107c3ec60();
    func_0x000107c61170(lVar2);
    func_0x000107c609b0(dVar6,uVar7,dVar8,dVar9);
    func_0x000107c54d20(dVar10 / dVar6,uVar5);
    func_0x000107c575ec(uVar5);
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101c08a24;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
              (plVar4,(char *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x30));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c08a24);
  (*pcVar1)();
}



/* Entry: 101c08a24; end: 101c08a67;  */

void FUN_101c08a24(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x101c0bff4,*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
  return;
}



/* Entry: 101c08a68; end: 101c08b2f;  */

void FUN_101c08a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  lVar5 = 0x112e00a10;
  func_0x0001000285a8(0x112e00a10,&UNK_10dc12dc0);
  *(long *)(unaff_x22 + 0x30) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  uVar4 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c08b30,uVar3,uVar4);
  return;
}



/* Entry: 101c08b30; end: 101c08bab;  */

void FUN_101c08b30(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c08bac;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0x70,*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Entry: 101c08bac; end: 101c08bef;  */

void FUN_101c08bac(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c08bf0,*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
  return;
}



/* Entry: 101c08bf0; end: 101c08daf;  */

void FUN_101c08bf0(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (*(char *)(unaff_x22 + 0x70) == '\x01') {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x30));
    func_0x000107c61574(uVar7);
    func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101c08c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar2 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c08da8);
    (*pcVar1)();
  }
  lVar3 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c3ec60();
  dVar6 = param_3;
  dVar9 = param_4;
  func_0x000107c61170(lVar2);
  func_0x000107c5f444(param_3,param_4);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c08dac);
    (*pcVar1)();
  }
  lVar2 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c515a0();
  dVar8 = dVar6;
  func_0x000107c61170(lVar3);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    dVar6 = param_4 + dVar6 + 23.0;
    uVar7 = 0x4022000000000000;
    dVar10 = dVar6 + 9.0;
    func_0x000107c3ec60();
    func_0x000107c61170(lVar2);
    func_0x000107c609b0(dVar6,uVar7,dVar8,dVar9);
    func_0x000107c54d20(dVar10 / dVar6,uVar5);
    func_0x000107c575ec(uVar5);
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101c08db0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
              (plVar4,(char *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x30));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c08db0);
  (*pcVar1)();
}



/* Entry: 101c08db0; end: 101c08df3;  */

void FUN_101c08db0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x101c0bff8,*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
  return;
}



/* Entry: 101c08df4; end: 101c08eaf;  */

void FUN_101c08df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_9;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_12;
  *(undefined1 *)(unaff_x22 + 0x24e) = param_10;
  *(undefined4 *)(unaff_x22 + 0x248) = param_8;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x198) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_3;
  *(undefined8 *)(unaff_x22 + 400) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c08eb0,uVar2,uVar3);
  return;
}



/* Entry: 101c08eb0; end: 101c08fcb;  */

void FUN_101c08eb0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x198);
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0x200) = param_1;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar3;
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1e8);
    plVar2 = (long *)(ulong)*(uint *)(
                                     PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x208) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101c08fcc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
    )(plVar2,unaff_x22 + 0x24c,&UNK_1106c66a8,&UNK_1106c66a8,param_1,uVar3,&UNK_10d9de5c8,
      unaff_x22 + 0x110,&UNK_1106c66a8,&UNK_1106c66a8);
    return;
  }
  if (param_1 == 0) {
    param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1e8);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(undefined8 *)(unaff_x22 + 0x218) = uVar3;
  *(long *)(unaff_x22 + 0x210) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c09050,param_1);
  return;
}



/* Entry: 101c08fcc; end: 101c0904f;  */

/* WARNING: Possible PIC construction at 0x000101c09024: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c09028) */
/* WARNING: Removing unreachable block (ram,0x000107c615e0) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0560) */

void FUN_101c08fcc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x208));
  uVar1 = *(undefined8 *)(lVar2 + 0x200);
  if (unaff_x20 != 0) {
    func_0x000107c614ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101c09050; end: 101c090d3;  */

void FUN_101c09050(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = unaff_x22 + 0x10;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1d8);
  lVar2 = lVar1;
  func_0x000107c615ac(lVar1,&UNK_1106c66a8);
  *(long *)(unaff_x22 + 0x188) = lVar1;
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0x220) = lVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x228) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x230) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c090d4,uVar4,uVar3);
  return;
}



/* Entry: 101c090d4; end: 101c092fb;  */

void FUN_101c090d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x22;
  ulong uVar12;
  long lVar13;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
  lVar4 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar7 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar3 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar3);
  lVar4 = 0;
  func_0x000107c5fd0c();
  pcVar8 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  (*pcVar8)(uVar3,1,1,lVar4);
  lVar4 = 0x112e08dc0;
  func_0x0001000285a8(0x112e08dc0,&UNK_10d9de460);
  lVar13 = *(long *)(lVar4 + -8);
  lVar10 = *(long *)(lVar13 + 0x40);
  uVar5 = lVar10 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  (**(code **)(lVar13 + 0x10))();
  uVar9 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  uVar11 = lVar10 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar6 = &UNK_1104560c0;
  func_0x000107c613fc(&UNK_1104560c0,uVar11 + 8,uVar9 | 7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  (**(code **)(lVar13 + 0x20))(puVar6 + uVar12,uVar5,lVar4);
  *(undefined8 *)(puVar6 + uVar11) = uVar1;
  func_0x000107c615c0(uVar5);
  func_0x000107c61174(uVar1);
  FUN_101c09ef0(uVar3,&UNK_10d9de5d0,puVar6);
  func_0x000101c0bb28(uVar3,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar3);
  uVar7 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (*pcVar8)();
  puVar6 = &UNK_1104560e8;
  func_0x000107c613fc(&UNK_1104560e8,0x28,7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  func_0x000107c61174();
  FUN_101c09ef0(uVar7,&UNK_10d9de5d8,puVar6);
  func_0x000101c0bb28(uVar7,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0();
  func_0x000107c5fce8();
  *(ulong *)(unaff_x22 + 0x238) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x24d,unaff_x22 + 0x10,FUN_101c092fc,unaff_x22 + 0x160);
  return;
}



/* Entry: 101c092fc; end: 101c0935f;  */

void FUN_101c092fc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x238));
    *(undefined1 *)(unaff_x22 + 0x24f) = *(undefined1 *)(unaff_x22 + 0x24d);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x228);
    pcVar1 = FUN_101c09360;
  }
  else {
    func_0x000107c614ac();
    uVar3 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x228);
    pcVar1 = FUN_101c094a0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101c09360; end: 101c09403;  */

void FUN_101c09360(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x24f);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x220));
  *(undefined1 *)(unaff_x22 + 0x250) = uVar1;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(unaff_x22 + 0x10,&UNK_1106c66a8,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x240) = plVar3;
  func_0x0001000285a8(0x112e08e20,&UNK_10d9de588);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101c09404;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101c09404; end: 101c0949f;  */

void FUN_101c09404(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x240));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x101c0944c,*(undefined8 *)(lVar1 + 0x210),*(undefined8 *)(lVar1 + 0x218));
  return;
}



/* Entry: 101c094a0; end: 101c0954f;  */

void FUN_101c094a0(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x220);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x238));
  func_0x000107c61574(uVar2);
  *(undefined1 *)(unaff_x22 + 0x250) = 2;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(unaff_x22 + 0x10,&UNK_1106c66a8,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x240) = plVar1;
  func_0x0001000285a8(0x112e08e20,&UNK_10d9de588);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c09404;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101c09550; end: 101c0965b;  */

void FUN_101c09550(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  long unaff_x22;
  
  cVar4 = *(char *)(unaff_x22 + 0x251);
  cVar5 = *(char *)(unaff_x22 + 0x24a);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1e0));
  func_0x0001000285a8(0x112e08dc8,&UNK_10d9de468);
  func_0x000107c5fd2c();
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  func_0x000107c5fd2c();
  func_0x000107c5f1dc();
  if ((cVar4 == '\x01') && (cVar5 != '\x05')) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar7 = *(undefined2 *)(unaff_x22 + 0x24a);
    uVar6 = *(undefined1 *)(unaff_x22 + 0x24e);
    func_0x000100083b20(unaff_x22 + 0x138);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
    lVar3 = *(long *)(unaff_x22 + 0x158);
    func_0x0001000a8868(unaff_x22 + 0x138,uVar2);
    (**(code **)(lVar3 + 8))(2,uVar7,2,2,uVar1,uVar6,uVar2,lVar3);
    func_0x0001000834e4(unaff_x22 + 0x138);
  }
  **(undefined1 **)(unaff_x22 + 400) = *(undefined1 *)(unaff_x22 + 0x251);
                    /* WARNING: Could not recover jumptable at 0x000101c09658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c0965c; end: 101c096fb;  */

void FUN_101c0965c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c096fc,uVar2,uVar3);
  return;
}



/* Entry: 101c096fc; end: 101c099db;  */

void FUN_101c096fc(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar6 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar2 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar2);
  lVar3 = 0;
  func_0x000107c5fd0c();
  pcVar8 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar8)(uVar2,1,1,lVar3);
  lVar3 = 0x112e08dc0;
  func_0x0001000285a8(0x112e08dc0,&UNK_10d9de460);
  lVar12 = *(long *)(lVar3 + -8);
  lVar13 = *(long *)(lVar12 + 0x40);
  uVar4 = lVar13 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar4);
  (**(code **)(lVar12 + 0x10))();
  uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar15 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  uVar14 = lVar13 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar5 = &UNK_110456070;
  func_0x000107c613fc(&UNK_110456070,uVar14 + 8,uVar9 | 7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  (**(code **)(lVar12 + 0x20))(puVar5 + uVar15,uVar4,lVar3);
  *(undefined8 *)(puVar5 + uVar14) = uVar10;
  func_0x000107c615c0(uVar4);
  func_0x000107c61174(uVar10);
  FUN_101c09ef0(uVar2,&UNK_10d9de5b8,puVar5);
  func_0x000101c0bb28(uVar2,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar2);
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (*pcVar8)();
  puVar5 = &UNK_110456098;
  func_0x000107c613fc(&UNK_110456098,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  func_0x000107c61174();
  FUN_101c09ef0(uVar6,&UNK_10d9de5c0,puVar5);
  func_0x000101c0bb28(uVar6,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0();
  func_0x000107c5fce8();
  *(ulong *)(unaff_x22 + 0x88) = uVar6;
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
    plVar7 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar7;
    uVar11 = 0x112e08e20;
    func_0x0001000285a8(0x112e08e20,&UNK_10d9de588);
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_101c099dc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)
              (unaff_x22 + 0x98,uVar6,uVar10,uVar11);
    return;
  }
  if (uVar6 == 0) {
    uVar6 = 0;
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c614f0(uVar6);
    func_0x000107c5fca8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c09a4c,uVar6,uVar11);
  return;
}



/* Entry: 101c099dc; end: 101c09a4b;  */

void FUN_101c099dc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x90));
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(lVar4 + 0x88));
    *(undefined1 *)(lVar4 + 0x9a) = *(undefined1 *)(lVar4 + 0x98);
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x80);
    pcVar1 = FUN_101c09ac4;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x80);
    pcVar1 = FUN_101c09b4c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101c09a4c; end: 101c09a67;  */

void FUN_101c09a4c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x99,**(undefined8 **)(unaff_x22 + 0x40),FUN_101c09a68,unaff_x22 + 0x10);
  return;
}



/* Entry: 101c09a68; end: 101c09ac3;  */

void FUN_101c09a68(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
    *(undefined1 *)(unaff_x22 + 0x9a) = *(undefined1 *)(unaff_x22 + 0x99);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
    pcVar1 = FUN_101c09ac4;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
    pcVar1 = FUN_101c09b4c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101c09ac4; end: 101c09b4b;  */

void FUN_101c09ac4(void)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  cVar2 = *(char *)(unaff_x22 + 0x9a);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  pcVar1 = *(char **)(unaff_x22 + 0x38);
  uVar4 = **(undefined8 **)(unaff_x22 + 0x40);
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(uVar4,&UNK_1106c66a8,uVar3,PTR___ss5ErrorWS_11034ee10);
  if (cVar2 == '\x02') {
    cVar2 = '\x01';
  }
  *pcVar1 = cVar2;
                    /* WARNING: Could not recover jumptable at 0x000101c09b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c09b4c; end: 101c09bcb;  */

void FUN_101c09b4c(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c61574(uVar2);
  puVar1 = *(undefined1 **)(unaff_x22 + 0x38);
  uVar3 = **(undefined8 **)(unaff_x22 + 0x40);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(uVar3,&UNK_1106c66a8,uVar2,PTR___ss5ErrorWS_11034ee10);
  *puVar1 = 1;
                    /* WARNING: Could not recover jumptable at 0x000101c09bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c09bcc; end: 101c09c3b;  */

void FUN_101c09bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar2 = 0x112e08e28;
  func_0x0001000285a8(0x112e08e28,&UNK_10d9de590);
  *(long *)(unaff_x22 + 0x28) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c09c3c,0,0);
  return;
}



/* Entry: 101c09c3c; end: 101c09cb7;  */

void FUN_101c09c3c(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000285a8(0x112e08dc0,&UNK_10d9de460);
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c09cb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0x58,*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Entry: 101c09cb8; end: 101c09cff;  */

void FUN_101c09cb8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c09d00,0,0);
  return;
}



/* Entry: 101c09d00; end: 101c09ddf;  */

void FUN_101c09d00(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x22;
  
  *(char *)(unaff_x22 + 0x59) = *(char *)(unaff_x22 + 0x58);
  if (*(char *)(unaff_x22 + 0x58) == '\x02') {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    puVar4 = *(undefined1 **)(unaff_x22 + 0x10);
    (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x28));
    *puVar4 = 1;
    func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101c09d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c09de0,uVar2,uVar3);
  return;
}



/* Entry: 101c09de0; end: 101c09e4b;  */

/* WARNING: Removing unreachable block (ram,0x000101c09e10) */

void FUN_101c09de0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c5fd64();
  *(undefined8 *)(unaff_x22 + 0x50) = 0;
  func_0x000107c42018(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c09e4c,0,0);
  return;
}



/* Entry: 101c09e4c; end: 101c09ea7;  */

void FUN_101c09e4c(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  long unaff_x22;
  
  uVar2 = *(undefined1 *)(unaff_x22 + 0x59);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  puVar3 = *(undefined1 **)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x28));
  *puVar3 = uVar2;
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c09ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c09ea8; end: 101c09eef;  */

void FUN_101c09ea8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c09eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c09ef0; end: 101c0a08f;  */

void FUN_101c09ef0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
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
  puVar3 = auStack_90 + -extraout_x8;
  FUN_101c0bae0(param_1,puVar3,0x112d453c8,&UNK_10d90ac60);
  lVar1 = 0;
  func_0x000107c5fd0c();
  lVar6 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar6 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000101c0bb28(puVar3,0x112d453c8,&UNK_10d90ac60);
    uVar4 = 0x3100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar6 + 8))(puVar3,lVar1);
    uVar4 = (ulong)puVar2 & 0xff | 0x3100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  if (lVar1 == 0) {
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_3 + 0x18);
    lVar6 = lVar1;
    func_0x000107c614f0();
    func_0x000107c615f0(lVar1);
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar1);
  }
  uStack_78 = *unaff_x20;
  puStack_80 = (undefined8 *)0x0;
  if (lVar5 != 0 || lVar6 != 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_80 = &uStack_70;
    lStack_60 = lVar6;
    lStack_58 = lVar5;
  }
  uStack_88 = 1;
  func_0x000107c615bc(uVar4,&uStack_88,&UNK_1106c66a8,param_2,param_3);
  func_0x000107c61574();
  return;
}



/* Entry: 101c0a090; end: 101c0a0a7;  */

void FUN_101c0a090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0a0a8,0,0);
  return;
}



/* Entry: 101c0a0a8; end: 101c0a137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c0a0a8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x58);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x101c0a0f8;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  *(long *)(lVar2 + _DAT_112e08d90) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101c0a138; end: 101c0a18f;  */

/* WARNING: Removing unreachable block (ram,0x000101c0a15c) */

void FUN_101c0a138(void)

{
  long unaff_x22;
  
  func_0x000107c5fd64();
  **(undefined1 **)(unaff_x22 + 0x50) = 1;
                    /* WARNING: Could not recover jumptable at 0x000101c0a18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c0a190; end: 101c0a247;  */

void FUN_101c0a190(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(unaff_x22 + 0x69) = param_4;
  *(undefined4 *)(unaff_x22 + 0x6c) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  uVar3 = unaff_x20[4];
  uVar4 = unaff_x20[7];
  uVar2 = unaff_x20[6];
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  uVar3 = unaff_x20[8];
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  uVar3 = *(undefined8 *)((long)unaff_x20 + 0x49);
  *(undefined8 *)(unaff_x22 + 0x61) = *(undefined8 *)((long)unaff_x20 + 0x51);
  *(undefined8 *)(unaff_x22 + 0x59) = uVar3;
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar2 = unaff_x20[2];
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0a248,uVar2,uVar3);
  return;
}



/* Entry: 101c0a248; end: 101c0a313;  */

void FUN_101c0a248(undefined8 param_1)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar2 = *(undefined1 *)(unaff_x22 + 0x69);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(uint *)(unaff_x22 + 0x6c);
  FUN_101c026fc();
  *(undefined8 *)(unaff_x22 + 0xd0) = param_1;
  puVar5 = &UNK_10d9de300;
  func_0x000107c614e0();
  *(undefined **)(unaff_x22 + 0xd8) = puVar5;
  *(undefined8 *)(unaff_x22 + 0x70) = puVar5;
  *(undefined8 *)(unaff_x22 + 0x78) = 0;
  *(undefined1 *)(unaff_x22 + 0x80) = 0;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(char *)(unaff_x22 + 0x90) = (char)uVar1;
  *(char *)(unaff_x22 + 0x91) = (char)(uVar1 >> 8);
  *(char *)(unaff_x22 + 0x92) = (char)(uVar1 >> 0x10);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar7;
  *(undefined1 *)(unaff_x22 + 0xa0) = uVar2;
  plVar6 = (long *)0xbb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101c0a314;
  lVar4 = *(long *)(unaff_x22 + 0xa8);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x69);
  plVar6[0x14d] = unaff_x22 + 0x10;
  *(undefined1 *)((long)plVar6 + 0x4cb) = uVar2;
  plVar6[0x14c] = lVar3;
  *(uint *)((long)plVar6 + 0x4cc) = uVar1 & 0xffffff;
  plVar6[0x14b] = lVar4;
  plVar6[0x14a] = unaff_x22 + 0x70;
  lVar3 = 0;
  func_0x000107c5fcec();
  puVar5 = PTR___sScMMa_11034fc70;
  plVar6[0x14e] = lVar3;
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar6[0x14f] = lVar4;
  lVar4 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
  plVar6[0x150] = lVar4;
  func_0x000107c5fca8();
  plVar6[0x151] = lVar3;
  plVar6[0x152] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c02acc,lVar3,lVar4);
  return;
}



/* Entry: 101c0a314; end: 101c0a37b;  */

void FUN_101c0a314(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xd8);
  uVar2 = *(undefined8 *)(lVar3 + 0xd0);
  *(undefined1 *)(lVar3 + 0x6a) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xe0));
  func_0x000107c61574(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c0a37c,*(undefined8 *)(lVar3 + 0xc0),*(undefined8 *)(lVar3 + 200));
  return;
}



/* Entry: 101c0a37c; end: 101c0a3af;  */

void FUN_101c0a37c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x000101c0a3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x6a));
  return;
}



/* Entry: 101c0a3b0; end: 101c0a447;  */

void FUN_101c0a3b0(long param_1,uint param_2,long param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = unaff_x20[4];
  uVar7 = unaff_x20[7];
  uVar6 = unaff_x20[6];
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar6;
  uVar5 = unaff_x20[8];
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
  uVar5 = *(undefined8 *)((long)unaff_x20 + 0x49);
  *(undefined8 *)(unaff_x22 + 0x61) = *(undefined8 *)((long)unaff_x20 + 0x51);
  *(undefined8 *)(unaff_x22 + 0x59) = uVar5;
  uVar5 = *unaff_x20;
  uVar7 = unaff_x20[3];
  uVar6 = unaff_x20[2];
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  plVar4 = (long *)0x1a0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101c0a448;
  plVar4[0x2a] = param_3;
  plVar4[0x2b] = unaff_x22 + 0x10;
  *(undefined1 *)((long)plVar4 + 0x92) = param_4;
  *(uint *)((long)plVar4 + 0x94) = param_2 & 0xffffff;
  plVar4[0x29] = param_1;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0x2c] = lVar3;
  lVar3 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x2d] = lVar2;
  plVar4[0x2e] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c06f68,lVar2,lVar3);
  return;
}



/* Entry: 101c0a448; end: 101c0a48b;  */

void FUN_101c0a448(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000101c0a488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101c0a48c; end: 101c0a523;  */

void FUN_101c0a48c(long param_1,uint param_2,long param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = unaff_x20[4];
  uVar7 = unaff_x20[7];
  uVar6 = unaff_x20[6];
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar6;
  uVar5 = unaff_x20[8];
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
  uVar5 = *(undefined8 *)((long)unaff_x20 + 0x49);
  *(undefined8 *)(unaff_x22 + 0x61) = *(undefined8 *)((long)unaff_x20 + 0x51);
  *(undefined8 *)(unaff_x22 + 0x59) = uVar5;
  uVar5 = *unaff_x20;
  uVar7 = unaff_x20[3];
  uVar6 = unaff_x20[2];
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  plVar4 = (long *)0x210;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101c0bfd0;
  plVar4[0x3a] = param_3;
  plVar4[0x3b] = unaff_x22 + 0x10;
  *(undefined1 *)((long)plVar4 + 0xa9) = param_4;
  *(uint *)((long)plVar4 + 0xac) = param_2 & 0xffffff;
  plVar4[0x39] = param_1;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0x3c] = lVar3;
  lVar3 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x3d] = lVar2;
  plVar4[0x3e] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0733c,lVar2,lVar3);
  return;
}



/* Entry: 101c0a524; end: 101c0a5bb;  */

void FUN_101c0a524(long param_1,uint param_2,long param_3,undefined1 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = unaff_x20[4];
  uVar8 = unaff_x20[7];
  uVar7 = unaff_x20[6];
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
  uVar6 = unaff_x20[8];
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar6;
  uVar6 = *(undefined8 *)((long)unaff_x20 + 0x49);
  *(undefined8 *)(unaff_x22 + 0x61) = *(undefined8 *)((long)unaff_x20 + 0x51);
  *(undefined8 *)(unaff_x22 + 0x59) = uVar6;
  uVar6 = *unaff_x20;
  uVar8 = unaff_x20[3];
  uVar7 = unaff_x20[2];
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  plVar5 = (long *)0x1d0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c0a5bc;
  plVar5[0x26] = param_3;
  plVar5[0x27] = unaff_x22 + 0x10;
  *(undefined1 *)((long)plVar5 + 0x1c4) = param_4;
  *(uint *)(plVar5 + 0x38) = param_2 & 0xffffff;
  plVar5[0x25] = param_1;
  lVar3 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x28] = uVar2;
  lVar3 = 0;
  func_0x000103a82768();
  plVar5[0x29] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[0x2a] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x2b] = uVar2;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar4;
  func_0x000107c5fce8();
  plVar5[0x2c] = lVar3;
  lVar3 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar5[0x2d] = lVar4;
  plVar5[0x2e] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c07694,lVar4,lVar3);
  return;
}



/* Entry: 101c0a5bc; end: 101c0a5f7;  */

void FUN_101c0a5bc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000101c0a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c0a5f8; end: 101c0a5fb; -[_TtC42MusicProviderConnectionSheetImplementation40MusicProviderConnectionSheetTrayDelegate tray:positionDidChange:] */

void FUN_101c0a5f8(void)

{
  return;
}



/* Entry: 101c0a5fc; end: 101c0a61b; -[_TtC42MusicProviderConnectionSheetImplementation40MusicProviderConnectionSheetTrayDelegate trayDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c0a5fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e08d90);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + _DAT_112e08d90) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar1);
    return;
  }
  return;
}



/* Entry: 101c0a61c; end: 101c0a663; -[_TtC42MusicProviderConnectionSheetImplementation40MusicProviderConnectionSheetTrayDelegate init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c0a61c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e08d90) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c0a664; end: 101c0a697;  */

void FUN_101c0a664(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c0a698; end: 101c0a8b7;  */

void FUN_101c0a698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  lVar2 = 0x112e08dd0;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112e08dd0,&UNK_10d9de470);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + -extraout_x8;
  lVar3 = 0x112e08dc0;
  func_0x0001000285a8(0x112e08dc0,&UNK_10d9de460);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar11 - extraout_x8_00;
  lVar4 = 0x112e08e38;
  func_0x0001000285a8(0x112e08e38,&UNK_10d9de5a8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  lVar4 = 0x112e08dc8;
  func_0x0001000285a8(0x112e08dc8,&UNK_10d9de468);
  lVar10 = *(long *)(lVar4 + -8);
  (**(code **)(lVar10 + 0x38))(lVar9,1,1,lVar4);
  (**(code **)(lVar6 + 0x10))(puVar11,uStack_90,lVar2);
  lStack_70 = lVar9;
  func_0x000107c5fd48(lVar7,&UNK_1106c66a8,puVar11,FUN_101c0b400,auStack_80,&UNK_1106c66a8);
  (**(code **)(lVar5 + 0x10))(uStack_88,lVar7,lVar3);
  FUN_101c0bae0(lVar9,lVar8,0x112e08e38,&UNK_10d9de5a8);
  lVar2 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar5 + 8))(lVar7,lVar3);
    (**(code **)(lVar10 + 0x20))(uStack_98,lVar8,lVar4);
    func_0x000101c0bb28(lVar9,0x112e08e38,&UNK_10d9de5a8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c0a8b8);
  (*pcVar1)();
}



/* Entry: 101c0a8b8; end: 101c0a933;  */

void FUN_101c0a8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  
  func_0x000101c0bb28(param_2,param_3,param_4);
  func_0x0001000285a8(param_5,param_6);
  lVar1 = *(long *)(param_5 + -8);
  (**(code **)(lVar1 + 0x10))(param_2,param_1,param_5);
                    /* WARNING: Could not recover jumptable at 0x000101c0a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x38))(param_2,0,1,param_5);
  return;
}



/* Entry: 101c0a934; end: 101c0aa77;  */

undefined * FUN_101c0a934(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101c0aa78);
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
    puVar3 = (undefined *)0x112e08d88;
    func_0x0001000285a8(0x112e08d88,&UNK_10d9dec90);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e08e88;
    func_0x0001000285a8(0x112e08e88,&UNK_10d9de678);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101c0aa78; end: 101c0ab87;  */

double FUN_101c0aa78(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                    undefined8 param_5,long param_6)

{
  code *pcVar1;
  long lVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar2 = param_6;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c0ab80);
    (*pcVar1)();
  }
  func_0x000107c3ec60();
  dVar3 = param_3;
  dVar6 = param_4;
  func_0x000107c61170(lVar2);
  func_0x000107c5f444(param_3,param_4);
  lVar2 = param_6;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c515a0();
    dVar5 = dVar3;
    func_0x000107c61170(lVar2);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (param_6 != 0) {
      dVar3 = param_4 + dVar3 + 23.0;
      uVar4 = 0x4022000000000000;
      dVar7 = dVar3 + 9.0;
      func_0x000107c3ec60();
      func_0x000107c61170(param_6);
      func_0x000107c609b0(dVar3,uVar4,dVar5,dVar6);
      return dVar7 / dVar3;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c0ab88);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c0ab84);
  (*pcVar1)();
}



/* Entry: 101c0ab88; end: 101c0abbb;  */

undefined8 FUN_101c0ab88(undefined8 param_1)

{
  (*(code *)(undefined *)0x101c0e574)();
  return param_1;
}



/* Entry: 101c0abbc; end: 101c0abcb;  */

undefined1  [16] FUN_101c0abbc(void)

{
  return ZEXT816(0x110455ec0);
}



/* Entry: 101c0abcc; end: 101c0ac63;  */

long FUN_101c0abcc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c0ac64; end: 101c0ad47;  */

undefined8 * FUN_101c0ac64(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar1 = param_2[2];
  uVar6 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar6;
  uVar2 = param_2[4];
  uVar7 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar7;
  uVar3 = param_2[6];
  uVar8 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar8;
  uVar4 = param_2[8];
  uVar9 = param_2[9];
  param_1[8] = uVar4;
  uVar11 = param_2[10];
  uVar10 = *(undefined1 *)(param_2 + 0xb);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar4);
  func_0x0001000ab9d4(uVar9,uVar11,uVar10);
  param_1[9] = uVar9;
  param_1[10] = uVar11;
  *(undefined1 *)(param_1 + 0xb) = uVar10;
  return param_1;
}



/* Entry: 101c0ad48; end: 101c0ae77;  */

undefined8 * FUN_101c0ad48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar6);
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar6);
  uVar6 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar6);
  uVar6 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar6);
  uVar6 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar6);
  uVar6 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar6);
  uVar6 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6157c();
  func_0x000107c61574(uVar6);
  uVar6 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6157c();
  func_0x000107c61574(uVar6);
  uVar6 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6157c();
  func_0x000107c61574(uVar6);
  uVar6 = param_2[9];
  uVar2 = param_2[10];
  uVar4 = *(undefined1 *)(param_2 + 0xb);
  func_0x0001000ab9d4(uVar6,uVar2,uVar4);
  uVar1 = param_1[9];
  uVar3 = param_1[10];
  param_1[9] = uVar6;
  param_1[10] = uVar2;
  uVar5 = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar4;
  func_0x00010007d980(uVar1,uVar3,uVar5);
  return param_1;
}



/* Entry: 101c0ae78; end: 101c0af27;  */

undefined8 * FUN_101c0ae78(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c61574(*param_1);
  uVar3 = param_1[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  func_0x000107c61574(uVar3);
  func_0x000107c61574(param_1[2]);
  uVar3 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x000107c61574(uVar3);
  func_0x000107c61574(param_1[4]);
  uVar3 = param_1[5];
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  func_0x000107c61574(uVar3);
  func_0x000107c61574(param_1[6]);
  uVar3 = param_1[7];
  uVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  func_0x000107c61574(uVar3);
  uVar3 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61574(uVar3);
  uVar1 = *(undefined1 *)(param_2 + 0xb);
  uVar3 = param_1[9];
  uVar4 = param_1[10];
  uVar5 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  func_0x00010007d980(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 101c0af28; end: 101c0afd7;  */

int FUN_101c0af28(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x59) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c0afd8; end: 101c0aff7;  */

void FUN_101c0afd8(void)

{
  func_0x000107c61168(&PTR_PTR_1127fc958);
  return;
}



/* Entry: 101c0aff8; end: 101c0b073;  */

void FUN_101c0aff8(long *param_1,code *param_2,long param_3)

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



/* Entry: 101c0b074; end: 101c0b083;  */

void FUN_101c0b074(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_50 [15];
  undefined1 uStack_41;
  
  lVar2 = 0x112e08dc8;
  func_0x0001000285a8(0x112e08dc8,&UNK_10d9de468);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = 0x112e08e30;
  func_0x0001000285a8(uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff),0x112e08e30,&UNK_10d9de598);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = 0x112e08dc8;
  uStack_41 = param_1;
  func_0x0001000285a8(0x112e08dc8,&UNK_10d9de468);
  func_0x000107c5fd28(auStack_50 + -extraout_x8,&uStack_41,uVar1);
  (**(code **)(lVar4 + 8))(auStack_50 + -extraout_x8,lVar2);
  return;
}



/* Entry: 101c0b084; end: 101c0b0d3;  */

void FUN_101c0b084(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e08e18 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e08e10;
  func_0x00010002969c(0x112e08e10,&UNK_10d9de528);
  puVar2 = PTR___s7Combine9PublishedV9PublisherVyx_GAadAMc_11034ae78;
  func_0x000107c61520(PTR___s7Combine9PublishedV9PublisherVyx_GAadAMc_11034ae78,uVar1);
  puRam0000000112e08e18 = puVar2;
  return;
}



/* Entry: 101c0b0d4; end: 101c0b1a7;  */

void FUN_101c0b0d4(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar5 = 0x112e009e0;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar8 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  lVar2 = uVar8 + *(long *)(*(long *)(lVar5 + -8) + 0x40);
  uVar4 = lVar2 + 0x67U & 0xfffffffffffffff8;
  lVar5 = *(long *)(unaff_x20 + uVar4);
  lVar6 = *(long *)(unaff_x20 + uVar4 + 8);
  lVar7 = *(long *)(unaff_x20 + (uVar4 + 0x17 & 0xffffffffffffff8));
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101c0b1a8;
  plVar3[4] = lVar6;
  plVar3[5] = lVar7;
  plVar3[2] = unaff_x20 + uVar8;
  plVar3[3] = lVar5;
  lVar5 = 0x112e00a10;
  func_0x0001000285a8(0x112e00a10,&UNK_10dc12dc0,unaff_x20 + (lVar2 + 7U & 0xfffffffffffffff8));
  plVar3[6] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar3[7] = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[8] = uVar4;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar5 = lVar2;
  func_0x000107c5fce8();
  plVar3[9] = lVar5;
  lVar5 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar3[10] = lVar2;
  plVar3[0xb] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c08b30,lVar2,lVar5);
  return;
}



/* Entry: 101c0b1a8; end: 101c0b1e3;  */

void FUN_101c0b1a8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c0b1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c0b1e4; end: 101c0b217;  */

undefined8 FUN_101c0b1e4(undefined8 param_1,undefined8 param_2)

{
  FUN_101c0ac64(param_2,param_1,&UNK_110455f38);
  return param_2;
}



/* Entry: 101c0b218; end: 101c0b2db;  */

void FUN_101c0b218(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  uint3 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar12 = *(long *)(unaff_x20 + 0x48);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x50);
  uVar6 = *(uint3 *)(unaff_x20 + 0x40);
  lVar11 = *(long *)(unaff_x20 + 0x58);
  plVar10 = (long *)0x260;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = 0x101c0bffc;
  plVar10[0x39] = lVar12;
  plVar10[0x3a] = lVar11;
  *(undefined1 *)((long)plVar10 + 0x24e) = uVar5;
  *(uint *)(plVar10 + 0x49) = (uint)uVar6;
  plVar10[0x37] = lVar1;
  plVar10[0x38] = lVar4;
  plVar10[0x35] = lVar8;
  plVar10[0x36] = lVar3;
  plVar10[0x33] = lVar9;
  plVar10[0x34] = lVar2;
  plVar10[0x32] = param_1;
  lVar8 = 0;
  func_0x000107c5fcec();
  puVar7 = PTR___sScMMa_11034fc70;
  plVar10[0x3b] = lVar8;
  lVar9 = lVar8;
  func_0x000107c5fce8();
  plVar10[0x3c] = lVar9;
  lVar9 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar7,PTR___sScMScAsMc_11034fc78);
  plVar10[0x3d] = lVar9;
  func_0x000107c5fca8();
  plVar10[0x3e] = lVar8;
  plVar10[0x3f] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c08eb0,lVar8,lVar9);
  return;
}



/* Entry: 101c0b2dc; end: 101c0b2e7;  */

void FUN_101c0b2dc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_dismissAnimated__1125be608,0);
  return;
}



/* Entry: 101c0b2e8; end: 101c0b393;  */

void FUN_101c0b2e8(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar4 = 0x112e08dc0;
  func_0x0001000285a8(0x112e08dc0,&UNK_10d9de460);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar3 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar3 + 7 & 0xffffffffffffff8));
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101c0c000;
  plVar2[3] = unaff_x20 + uVar3;
  plVar2[4] = lVar4;
  plVar2[2] = param_1;
  lVar4 = 0x112e08e28;
  func_0x0001000285a8(0x112e08e28,&UNK_10d9de590,uVar1);
  plVar2[5] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[6] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[7] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c09c3c,0,0);
  return;
}



/* Entry: 101c0b394; end: 101c0b3ff;  */

void FUN_101c0b394(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101c0c008;
  plVar1[10] = param_1;
  plVar1[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0a0a8,0,0);
  return;
}



/* Entry: 101c0b400; end: 101c0b437;  */

void FUN_101c0b400(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101c0a8b8(param_1,*(undefined8 *)(unaff_x20 + 0x10),0x112e08e38,&UNK_10d9de5a8,0x112e08dc8,
                &UNK_10d9de468);
  return;
}



/* Entry: 101c0b438; end: 101c0b4e3;  */

void FUN_101c0b438(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar4 = 0x112e08dc0;
  func_0x0001000285a8(0x112e08dc0,&UNK_10d9de460);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar3 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar3 + 7 & 0xffffffffffffff8));
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101c0c004;
  plVar2[3] = unaff_x20 + uVar3;
  plVar2[4] = lVar4;
  plVar2[2] = param_1;
  lVar4 = 0x112e08e28;
  func_0x0001000285a8(0x112e08e28,&UNK_10d9de590,uVar1);
  plVar2[5] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[6] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[7] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c09c3c,0,0);
  return;
}



/* Entry: 101c0b4e4; end: 101c0b54f;  */

void FUN_101c0b4e4(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101c0c020;
  plVar1[10] = param_1;
  plVar1[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0a0a8,0,0);
  return;
}



/* Entry: 101c0b550; end: 101c0b5cb;  */

void FUN_101c0b550(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101c0c00c;
  plVar4[10] = lVar2;
  plVar4[0xb] = lVar5;
  plVar4[8] = param_2;
  plVar4[9] = lVar3;
  plVar4[7] = param_1;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  plVar4[0xc] = lVar2;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0xd] = lVar3;
  lVar3 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  plVar4[0xe] = lVar3;
  func_0x000107c5fca8();
  plVar4[0xf] = lVar2;
  plVar4[0x10] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c096fc,lVar2,lVar3);
  return;
}



/* Entry: 101c0b5cc; end: 101c0b677;  */

void FUN_101c0b5cc(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar4 = 0x112e08dc0;
  func_0x0001000285a8(0x112e08dc0,&UNK_10d9de460);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar3 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar3 + 7 & 0xffffffffffffff8));
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101c0c010;
  plVar2[3] = unaff_x20 + uVar3;
  plVar2[4] = lVar4;
  plVar2[2] = param_1;
  lVar4 = 0x112e08e28;
  func_0x0001000285a8(0x112e08e28,&UNK_10d9de590,uVar1);
  plVar2[5] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[6] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[7] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c09c3c,0,0);
  return;
}



/* Entry: 101c0b678; end: 101c0b6e3;  */

void FUN_101c0b678(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101c0c014;
  plVar1[10] = param_1;
  plVar1[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0a0a8,0,0);
  return;
}



/* Entry: 101c0b6e4; end: 101c0b71f;  */

undefined8 FUN_101c0b6e4(undefined8 param_1,undefined8 param_2)

{
  FUN_101c11548(param_2,param_1);
  return param_2;
}



/* Entry: 101c0b720; end: 101c0b7f3;  */

void FUN_101c0b720(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar5 = 0x112e009e0;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar8 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  lVar2 = uVar8 + *(long *)(*(long *)(lVar5 + -8) + 0x40);
  uVar4 = lVar2 + 0x67U & 0xfffffffffffffff8;
  lVar5 = *(long *)(unaff_x20 + uVar4);
  lVar6 = *(long *)(unaff_x20 + uVar4 + 8);
  lVar7 = *(long *)(unaff_x20 + (uVar4 + 0x17 & 0xffffffffffffff8));
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101c0c030;
  plVar3[4] = lVar6;
  plVar3[5] = lVar7;
  plVar3[2] = unaff_x20 + uVar8;
  plVar3[3] = lVar5;
  lVar5 = 0x112e00a10;
  func_0x0001000285a8(0x112e00a10,&UNK_10dc12dc0,unaff_x20 + (lVar2 + 7U & 0xfffffffffffffff8));
  plVar3[6] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar3[7] = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[8] = uVar4;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar5 = lVar2;
  func_0x000107c5fce8();
  plVar3[9] = lVar5;
  lVar5 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar3[10] = lVar2;
  plVar3[0xb] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c087a4,lVar2,lVar5);
  return;
}



/* Entry: 101c0b7f4; end: 101c0b8b7;  */

void FUN_101c0b7f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  uint3 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar12 = *(long *)(unaff_x20 + 0x48);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x50);
  uVar6 = *(uint3 *)(unaff_x20 + 0x40);
  lVar11 = *(long *)(unaff_x20 + 0x58);
  plVar10 = (long *)0x260;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = 0x101c0c018;
  plVar10[0x39] = lVar12;
  plVar10[0x3a] = lVar11;
  *(undefined1 *)((long)plVar10 + 0x24e) = uVar5;
  *(uint *)(plVar10 + 0x49) = (uint)uVar6;
  plVar10[0x37] = lVar1;
  plVar10[0x38] = lVar4;
  plVar10[0x35] = lVar8;
  plVar10[0x36] = lVar3;
  plVar10[0x33] = lVar9;
  plVar10[0x34] = lVar2;
  plVar10[0x32] = param_1;
  lVar8 = 0;
  func_0x000107c5fcec();
  puVar7 = PTR___sScMMa_11034fc70;
  plVar10[0x3b] = lVar8;
  lVar9 = lVar8;
  func_0x000107c5fce8();
  plVar10[0x3c] = lVar9;
  lVar9 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar7,PTR___sScMScAsMc_11034fc78);
  plVar10[0x3d] = lVar9;
  func_0x000107c5fca8();
  plVar10[0x3e] = lVar8;
  plVar10[0x3f] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c08eb0,lVar8,lVar9);
  return;
}


