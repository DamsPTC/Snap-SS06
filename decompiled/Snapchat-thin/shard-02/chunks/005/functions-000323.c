/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d9bb20; end: 101d9bba7;  */

void FUN_101d9bb20(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x50));
  if (unaff_x20 == 0) {
    func_0x000107c615e8(*(undefined8 *)(lVar3 + 0x48));
    *(byte *)(lVar3 + 0x60) = param_1 & 1;
    pcVar1 = FUN_101d9bba8;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x40);
    func_0x000107c615e8(*(undefined8 *)(lVar3 + 0x48));
    func_0x000107c6142c(uVar2);
    pcVar1 = FUN_101d9bc2c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d9bba8; end: 101d9bc2b;  */

void FUN_101d9bba8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  if ((*(byte *)(unaff_x22 + 0x60) & 1) == 0) {
    func_0x000107c5edd0(*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x38),uVar3);
    func_0x000107c6142c(uVar3);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
    func_0x000107c6142c(uVar3);
    lVar1 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(uVar2,1,1,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000101d9bc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d9bc2c; end: 101d9bc37;  */

void FUN_101d9bc2c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101d9bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d9bc38; end: 101d9bca3;  */

void FUN_101d9bc38(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x48) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9bca4,0,0);
  return;
}



/* Entry: 101d9bca4; end: 101d9beb7;  */

/* WARNING: Removing unreachable block (ram,0x000101d9bd1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9bca4(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  long unaff_x22;
  
  uVar6 = *(ulong *)(unaff_x22 + 0x38);
  func_0x000107c5b2d0();
  func_0x000107c61180();
  puVar9 = (undefined1 *)0x0;
  if (uVar6 != 0) {
    uVar7 = uVar6;
    puVar9 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    *(ulong *)(unaff_x22 + 0x68) = uVar7;
    *(undefined1 **)(unaff_x22 + 0x70) = puVar9;
    uVar6 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar9 & 0x2000000000000000) != 0) {
      uVar6 = (ulong)puVar9 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) {
      lVar8 = *(long *)(unaff_x22 + 0x38);
      FUN_101d9c178();
      *(long *)(unaff_x22 + 0x78) = lVar8;
      lVar10 = lVar8;
      func_0x000107c43468();
      func_0x000107c61180();
      if (lVar10 != 0) {
        uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
        lVar5 = *(long *)(unaff_x22 + 0x50);
        func_0x000107c5edb4(uVar2);
        func_0x000107c61170(lVar10);
        (**(code **)(lVar5 + 0x20))(uVar4,uVar2,uVar3);
        func_0x000107c427b8(lVar8);
        func_0x0001000d224c(unaff_x22 + 0x10);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
        lVar10 = *(long *)(unaff_x22 + 0x30);
        func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
        piVar12 = *(int **)(lVar10 + 8);
        iVar1 = *piVar12;
        plVar11 = (long *)(ulong)(uint)piVar12[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x80) = plVar11;
        *plVar11 = unaff_x22;
        plVar11[1] = (long)FUN_101d9beb8;
                    /* WARNING: Could not recover jumptable at 0x000101d9be70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar12))
                  (*(undefined8 *)(unaff_x22 + 0x38),lVar8,uVar2,lVar10);
        return;
      }
      func_0x000107c6142c();
      func_0x000101d9c764();
      func_0x000107c613f8(&UNK_1104827b0,puVar9,0,0);
      *puVar9 = 4;
      func_0x000107c61654();
      func_0x000107c615e8(lVar8);
      goto LAB_101d9bd64;
    }
    func_0x000107c6142c();
  }
  func_0x000101d9c764();
  func_0x000107c613f8(&UNK_1104827b0,puVar9,0,0);
  *puVar9 = 1;
  func_0x000107c61654();
LAB_101d9bd64:
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101d9bd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d9beb8; end: 101d9bf1f;  */

void FUN_101d9beb8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x88) = param_1;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101d9bf20;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x70));
    pcVar1 = FUN_101d9c074;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d9bf20; end: 101d9bf7f;  */

void FUN_101d9bf20(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101d9bf80;
  lVar1 = *(long *)(unaff_x22 + 0x68);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  lVar4 = *(long *)(unaff_x22 + 0x60);
  lVar5 = *(long *)(unaff_x22 + 0x40);
  plVar3[8] = *(long *)(unaff_x22 + 0x88);
  plVar3[9] = lVar5;
  plVar3[6] = lVar2;
  plVar3[7] = lVar4;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9c324,0,0);
  return;
}



/* Entry: 101d9bf80; end: 101d9bff7;  */

void FUN_101d9bf80(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x70);
  *(long *)(lVar3 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x98));
  func_0x000107c6142c(uVar2);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0xa8) = param_1;
    pcVar1 = FUN_101d9bff8;
  }
  else {
    pcVar1 = FUN_101d9c0e0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d9bff8; end: 101d9c073;  */

void FUN_101d9bff8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar4 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c61170(uVar5);
  (**(code **)(lVar4 + 8))(uVar3,uVar2);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d9c070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xa8));
  return;
}



/* Entry: 101d9c074; end: 101d9c0df;  */

void FUN_101d9c074(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(lVar2 + 8))(uVar3,uVar1);
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d9c0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d9c0e0; end: 101d9c14f;  */

void FUN_101d9c0e0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c61170(uVar4);
  (**(code **)(lVar2 + 8))(uVar3,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d9c14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d9c150; end: 101d9c153;  */

undefined8 FUN_101d9c150(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  puVar1 = &UNK_110482698;
  func_0x000107c613fc(&UNK_110482698,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1104826c0;
  func_0x000107c613fc(&UNK_1104826c0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c61174();
  uVar3 = 0x60;
  func_0x000104887c7c(0x60,0,0x48,4,0xd000000000000024,0x800000010f00f2c0,&UNK_10da143e8,puVar2);
  func_0x000107c61574(puVar2);
  puVar1 = &UNK_1104826e8;
  func_0x000107c613fc(&UNK_1104826e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_110482710;
  func_0x000107c613fc(&UNK_110482710,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101d9c744;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar4 = 0;
  FUN_101d7b40c(0);
  func_0x000107c61174(param_1);
  uVar5 = 0;
  func_0x000100775264(0,1,FUN_101d9c74c,puVar2,uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar2);
  return uVar5;
}



/* Entry: 101d9c154; end: 101d9c177;  */

void FUN_101d9c154(void)

{
  func_0x000107c5aba0();
  return;
}



/* Entry: 101d9c178; end: 101d9c303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_101d9c178(undefined1 *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  undefined **unaff_x23;
  undefined **ppuVar4;
  undefined **ppuStack_38;
  
  func_0x0001000d224c(&ppuStack_38);
  if (ppuStack_38 == (undefined **)0x0) {
    func_0x000101d9c764();
    func_0x000107c613f8(&UNK_1104827b0,param_1,0,0);
    *param_1 = 0;
    func_0x000107c61654();
  }
  else {
    ppuVar1 = ppuStack_38;
    func_0x000107c505f4();
    func_0x000107c61180();
    if (ppuVar1 == (undefined **)0x0) {
      func_0x000101d9c764();
      func_0x000107c613f8(&UNK_1104827b0,ppuVar1,0,0);
      *(undefined1 *)ppuVar1 = 2;
      func_0x000107c61654();
    }
    else {
      ppuVar4 = ppuVar1;
      func_0x000107c49a80();
      if ((int)ppuVar4 == 0) {
        func_0x000101d9c764();
        func_0x000107c613f8(&UNK_1104827b0,ppuVar4,0,0);
        uVar3 = 3;
      }
      else {
        ppuVar4 = &PTR____CFConstantStringClassReference_110f72738;
        ppuVar2 = ppuVar1;
        func_0x000107c43404();
        func_0x000107c61180();
        func_0x000107c61170();
        if (ppuVar2 != (undefined **)0x0) {
          func_0x000107c615e8(ppuStack_38);
          func_0x000107c615e8(ppuVar1);
          return ppuVar2;
        }
        func_0x000101d9c764();
        func_0x000107c613f8(&UNK_1104827b0,ppuVar4,0,0);
        uVar3 = 4;
        unaff_x23 = (undefined **)0x0;
      }
      *(undefined1 *)ppuVar4 = uVar3;
      func_0x000107c61654();
      func_0x000107c615e8(ppuStack_38);
      ppuStack_38 = ppuVar1;
    }
    func_0x000107c615e8(ppuStack_38);
  }
  return unaff_x23;
}



/* Entry: 101d9c304; end: 101d9c323;  */

void FUN_101d9c304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9c324,0,0);
  return;
}



/* Entry: 101d9c324; end: 101d9c437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9c324(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar3 = PTR_PTR_1126b5988;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c5ed90();
  func_0x000107c4b7f4();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x50) = puVar3;
  func_0x000107c61170(puVar4);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar5 = 0;
  FUN_101d962f4(0);
  FUN_101d97604(0,uVar8,uVar2,9,puVar3,uVar1,2,uVar5,&PTR_DAT_110481f28);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar8;
  func_0x000107c615e8(uVar7);
  plVar6 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101d9c438;
                    /* WARNING: Could not recover jumptable at 0x000101d9c434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101d91cac();
  return;
}



/* Entry: 101d9c438; end: 101d9c48b;  */

void FUN_101d9c438(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x68) = param_1;
  *(undefined1 *)(lVar1 + 0x70) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9c48c,0,0);
  return;
}



/* Entry: 101d9c48c; end: 101d9c543;  */

void FUN_101d9c48c(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  if (*(char *)(unaff_x22 + 0x70) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x20,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
    func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101d9c514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d9c540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 101d9c544; end: 101d9c6a3;  */

undefined8 FUN_101d9c544(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  puVar1 = &UNK_110482698;
  func_0x000107c613fc(&UNK_110482698,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1104826c0;
  func_0x000107c613fc(&UNK_1104826c0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c61174();
  uVar3 = 0x60;
  func_0x000104887c7c(0x60,0,0x48,4,0xd000000000000024,0x800000010f00f2c0,&UNK_10da143e8,puVar2);
  func_0x000107c61574(puVar2);
  puVar1 = &UNK_1104826e8;
  func_0x000107c613fc(&UNK_1104826e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_110482710;
  func_0x000107c613fc(&UNK_110482710,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101d9c744;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar4 = 0;
  FUN_101d7b40c(0);
  func_0x000107c61174(param_1);
  uVar5 = 0;
  func_0x000100775264(0,1,FUN_101d9c74c,puVar2,uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar2);
  return uVar5;
}



/* Entry: 101d9c6a4; end: 101d9c707;  */

void FUN_101d9c6a4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101d9c708;
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9ae7c,0,0);
  return;
}



/* Entry: 101d9c708; end: 101d9c743;  */

void FUN_101d9c708(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d9c740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d9c744; end: 101d9c74b;  */

void FUN_101d9c744(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d9c74c; end: 101d9c7a3;  */

void FUN_101d9c74c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d8fac0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101d9c7a4; end: 101d9c91b;  */

int FUN_101d9c7a4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101d9c820;
        goto LAB_101d9c804;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101d9c804:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_101d9c820:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101d9c91c; end: 101d9c9c7;  */

void FUN_101d9c91c(void)

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



/* Entry: 101d9c9c8; end: 101d9ca23;  */

void FUN_101d9c9c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d9ca24; end: 101d9ca63;  */

void FUN_101d9ca24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2b4f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da14488;
  func_0x000107c61520(&UNK_10da14488,&UNK_1104827b0);
  puRam0000000112e2b4f8 = puVar1;
  return;
}



/* Entry: 101d9ca64; end: 101d9ca6b;  */

undefined8 FUN_101d9ca64(void)

{
  return 1;
}



/* Entry: 101d9ca6c; end: 101d9cb0b;  */

void FUN_101d9ca6c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d9cb0c; end: 101d9cb0f;  */

void FUN_101d9cb0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2b500 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da14520;
  func_0x000107c61520(&UNK_10da14520,&UNK_1104828e0);
  puRam0000000112e2b500 = puVar1;
  return;
}



/* Entry: 101d9cb10; end: 101d9cb4f;  */

void FUN_101d9cb10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2b500 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da14520;
  func_0x000107c61520(&UNK_10da14520,&UNK_1104828e0);
  puRam0000000112e2b500 = puVar1;
  return;
}



/* Entry: 101d9cb50; end: 101d9cc4b;  */

void FUN_101d9cb50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d9cc4c; end: 101d9cc97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9cc4c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e2b508) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101d9cc98; end: 101d9ccd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9cc98(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e2b508) = param_1;
  func_0x0001001dfd28();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101d9ccd4; end: 101d9cd2f; -[_TtC33MemoriesBackupUploadStoreServices33MemoriesBackupUploadStoreServices init] */

void FUN_101d9ccd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesBackupUploadStoreServices.MemoriesBackupUploadStoreServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d9cd00);
  (*pcVar1)();
}



/* Entry: 101d9cd30; end: 101d9cd53; -[_TtC33MemoriesBackupUploadStoreServices33MemoriesBackupUploadStoreServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9cd30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2b508));
  return;
}



/* Entry: 101d9cd54; end: 101d9cdff;  */

void FUN_101d9cd54(void)

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



/* Entry: 101d9ce00; end: 101d9ce0f;  */

void FUN_101d9ce00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d9ce10; end: 101d9ce9f;  */

void FUN_101d9ce10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112e2b580,&UNK_10da147d8);
  func_0x000107c6157c(param_2);
  uVar1 = 0x60;
  func_0x000104887c7c(0x60,0,0x48,4,0xd000000000000025,0x800000010f00f590,&UNK_10da147e8,param_2);
  func_0x000107c61574(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101d9cea0; end: 101d9cf63;  */

void FUN_101d9cea0(long param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE_01;
  code *UNRECOVERED_JUMPTABLE_00;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[10] = param_1;
  lVar10 = 0x112d510f8;
  func_0x0001000285a8(0x112d510f8,&UNK_10d917b20);
  unaff_x22[3] = lVar10;
  puVar2 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  unaff_x22[0xb] = (long)puVar2;
  puVar8 = puVar2;
  func_0x000100faa6a0();
  unaff_x22[0xc] = (long)puVar8;
  *puVar2 = unaff_x22;
  puVar2[1] = FUN_101d9cf64;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    puVar2[0xb] = puVar8;
    puVar2[0xc] = unaff_x22 + 4;
    puVar2[9] = unaff_x22 + 3;
    puVar2[10] = &UNK_1107a6f08;
    puVar2[8] = unaff_x22 + 2;
    lVar10 = *param_2;
    puVar2[0xd] = &PTR_DAT_1107a6e88;
    uVar4 = 0x10;
    _swift_task_alloc();
    puVar2[0xe] = uVar4;
    lVar10 = *(long *)(lVar10 + 0x50);
    puVar2[0xf] = lVar10;
    lVar10 = *(long *)(lVar10 + -8);
    puVar2[0x10] = lVar10;
    uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar2[0x11] = uVar5;
    plVar6 = (long *)0x70;
    _swift_task_alloc();
    puVar2[0x12] = plVar6;
    *plVar6 = (long)puVar2;
    plVar6[1] = (long)&UNK_104876614;
    plVar6[5] = uVar5;
    plVar6[6] = (long)param_2;
    lVar9 = *(long *)(*param_2 + 0x50);
    plVar6[7] = lVar9;
    lVar10 = 0;
    __sSqMa(0,lVar9);
    plVar6[8] = lVar10;
    lVar10 = *(long *)(lVar10 + -8);
    plVar6[9] = lVar10;
    uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[10] = uVar5;
    lVar10 = *(long *)(lVar9 + -8);
    plVar6[0xb] = lVar10;
    uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[0xc] = uVar5;
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *unaff_x22;
  plVar6 = (long *)*unaff_x22;
  *(long **)(lVar9 + 0x68) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar9 + 0x58));
  if (param_2 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101d9d004;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101d9d55c;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = plVar6[2];
  lVar12 = plVar6[0xd];
  lVar10 = lVar11;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar11);
  plVar6[5] = lVar10;
  plVar3 = (long *)0x112d51a60;
  func_0x0001000285a8(0x112d51a60,&UNK_10d9189e0);
  func_0x0001048da110(plVar6 + 6);
  if (lVar12 == 0) {
    func_0x000107c615e8(lVar10);
    UNRECOVERED_JUMPTABLE_00 = (code *)plVar6[6];
    plVar6[0xe] = (long)UNRECOVERED_JUMPTABLE_00;
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c614f0();
    UNRECOVERED_JUMPTABLE_01 = (code *)0x50;
    func_0x000107c615b8();
    plVar6[0xf] = (long)UNRECOVERED_JUMPTABLE_01;
    *(long **)UNRECOVERED_JUMPTABLE_01 = plVar6;
    *(code **)(UNRECOVERED_JUMPTABLE_01 + 8) = FUN_101d9d150;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) goto LAB_101d9d14c;
  }
  else {
    lVar11 = plVar6[7];
    func_0x000100faaf10();
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_1107b5fe0;
    func_0x000107c613f8(&UNK_1107b5fe0,plVar3,0,0);
    *plVar3 = lVar11;
    func_0x000107c615e8(lVar10);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar6[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return;
    }
LAB_101d9d14c:
    func_0x000107c60e78();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar9 = *plVar6;
    plVar6 = (long *)*plVar6;
    *(code **)(lVar9 + 0x80) = UNRECOVERED_JUMPTABLE_01;
    *(code **)(lVar9 + 0x88) = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c615c0(*(undefined8 *)(lVar9 + 0x78));
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101d9d1f4;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      UNRECOVERED_JUMPTABLE_00 = (code *)0x101d9d5d4;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = 0x88;
    lVar10 = 0;
    FUN_101d9eb98(0,0x112e2b588,&PTR_PTR_1126d2e68);
    func_0x000107c614e8();
    plVar6[8] = 0;
    func_0x000107c505d0();
    func_0x000107c61180();
    plVar6[0x12] = lVar10;
    lVar9 = plVar6[8];
    if (lVar10 == 0) {
      lVar10 = plVar6[0x10];
      lVar12 = plVar6[0xe];
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(lVar9);
      func_0x000107c61654();
      func_0x000107c615e8(lVar10);
      func_0x000107c615e8(lVar12);
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar6[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else {
      func_0x000107c61174();
      func_0x000107c40b54();
      func_0x000107c61180();
      plVar6[0x13] = lVar10;
      uVar7 = 0x80;
      func_0x0001000285a8(0x112e2b580,&UNK_10da147d8);
      func_0x000103edf20c();
      plVar6[0x14] = lVar10;
      UNRECOVERED_JUMPTABLE_00 = (code *)0x80;
      func_0x000107c615b8();
      plVar6[0x15] = (long)UNRECOVERED_JUMPTABLE_00;
      *(long **)UNRECOVERED_JUMPTABLE_00 = plVar6;
      *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101d9d388;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x70) = lVar10;
        UNRECOVERED_JUMPTABLE_00 = FUN_101d9e1b4;
        goto _swift_task_switch;
      }
    }
    func_0x000107c60e78();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar9 = *plVar6;
    UNRECOVERED_JUMPTABLE_01 = (code *)*plVar6;
    *(code **)(lVar9 + 0xb0) = UNRECOVERED_JUMPTABLE_00;
    *(undefined1 *)(lVar9 + 0xb8) = uVar7;
    func_0x000107c615c0(*(undefined8 *)(lVar9 + 0xa8));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101d9d408;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0xb0);
    if (UNRECOVERED_JUMPTABLE_01[0xb8] == (code)0x1) {
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x48) = uVar4;
      iVar1 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar1 != 0) {
        uVar4 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(UNRECOVERED_JUMPTABLE_01 + 0x48,uVar4,PTR___ss5ErrorWS_11034ee10);
      }
      uVar4 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x98);
      uVar13 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x90);
      uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x80);
      uVar15 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x70);
      func_0x000107c61574(*(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0xa0));
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar13);
      func_0x000107c615e8(uVar14);
      func_0x000107c615e8(uVar15);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_01 + 8);
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    else {
      uVar13 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x98);
      uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x90);
      uVar15 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x80);
      uVar16 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x70);
      puVar8 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_01 + 0x50);
      func_0x000107c61574(*(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0xa0));
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar14);
      func_0x000107c615e8(uVar15);
      func_0x000107c615e8(uVar16);
      *puVar8 = uVar4;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_01 + 8);
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    if (lVar9 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    func_0x000107c60e78();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_01 + 0x60);
    uVar4 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x20);
    func_0x000107c613f8(&UNK_1107a6f08,puVar8,0,0);
    *puVar8 = uVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(UNRECOVERED_JUMPTABLE_01 + 8))();
      return;
    }
    func_0x000107c60e78();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c615e8(*(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x70));
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_01 + 0x88);
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE_01 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    func_0x000107c60e78();
  }
  *(code **)(UNRECOVERED_JUMPTABLE_01 + 0x18) = UNRECOVERED_JUMPTABLE;
  *(code **)(UNRECOVERED_JUMPTABLE_01 + 0x20) = UNRECOVERED_JUMPTABLE_00;
  UNRECOVERED_JUMPTABLE_00 = FUN_101d9d64c;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return;
}



/* Entry: 101d9cf64; end: 101d9d003;  */

void FUN_101d9cf64(void)

{
  int iVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE_01;
  code *UNRECOVERED_JUMPTABLE_00;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *unaff_x22;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *unaff_x22;
  plVar11 = (long *)*unaff_x22;
  *(long *)(lVar6 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0x58));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101d9d004;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101d9d55c;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = plVar11[2];
  lVar9 = plVar11[0xd];
  lVar5 = lVar7;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  plVar11[5] = lVar5;
  plVar2 = (long *)0x112d51a60;
  func_0x0001000285a8(0x112d51a60,&UNK_10d9189e0);
  func_0x0001048da110(plVar11 + 6);
  if (lVar9 == 0) {
    func_0x000107c615e8(lVar5);
    UNRECOVERED_JUMPTABLE_00 = (code *)plVar11[6];
    plVar11[0xe] = (long)UNRECOVERED_JUMPTABLE_00;
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c614f0();
    UNRECOVERED_JUMPTABLE_01 = (code *)0x50;
    func_0x000107c615b8();
    plVar11[0xf] = (long)UNRECOVERED_JUMPTABLE_01;
    *(long **)UNRECOVERED_JUMPTABLE_01 = plVar11;
    *(code **)(UNRECOVERED_JUMPTABLE_01 + 8) = FUN_101d9d150;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) goto LAB_101d9d14c;
  }
  else {
    lVar7 = plVar11[7];
    func_0x000100faaf10();
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_1107b5fe0;
    func_0x000107c613f8(&UNK_1107b5fe0,plVar2,0,0);
    *plVar2 = lVar7;
    func_0x000107c615e8(lVar5);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar11[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return;
    }
LAB_101d9d14c:
    func_0x000107c60e78();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar6 = *plVar11;
    plVar11 = (long *)*plVar11;
    *(code **)(lVar6 + 0x80) = UNRECOVERED_JUMPTABLE_01;
    *(code **)(lVar6 + 0x88) = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c615c0(*(undefined8 *)(lVar6 + 0x78));
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101d9d1f4;
        goto LAB_107c615e0;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      UNRECOVERED_JUMPTABLE_00 = (code *)0x101d9d5d4;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar3 = 0x88;
    lVar5 = 0;
    FUN_101d9eb98(0,0x112e2b588,&PTR_PTR_1126d2e68);
    func_0x000107c614e8();
    plVar11[8] = 0;
    func_0x000107c505d0();
    func_0x000107c61180();
    plVar11[0x12] = lVar5;
    lVar6 = plVar11[8];
    if (lVar5 == 0) {
      lVar5 = plVar11[0x10];
      lVar9 = plVar11[0xe];
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(lVar6);
      func_0x000107c61654();
      func_0x000107c615e8(lVar5);
      func_0x000107c615e8(lVar9);
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar11[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else {
      func_0x000107c61174();
      func_0x000107c40b54();
      func_0x000107c61180();
      plVar11[0x13] = lVar5;
      uVar3 = 0x80;
      func_0x0001000285a8(0x112e2b580,&UNK_10da147d8);
      func_0x000103edf20c();
      plVar11[0x14] = lVar5;
      UNRECOVERED_JUMPTABLE_00 = (code *)0x80;
      func_0x000107c615b8();
      plVar11[0x15] = (long)UNRECOVERED_JUMPTABLE_00;
      *(long **)UNRECOVERED_JUMPTABLE_00 = plVar11;
      *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101d9d388;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x70) = lVar5;
        UNRECOVERED_JUMPTABLE_00 = FUN_101d9e1b4;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar6 = *plVar11;
    UNRECOVERED_JUMPTABLE_01 = (code *)*plVar11;
    *(code **)(lVar6 + 0xb0) = UNRECOVERED_JUMPTABLE_00;
    *(undefined1 *)(lVar6 + 0xb8) = uVar3;
    func_0x000107c615c0(*(undefined8 *)(lVar6 + 0xa8));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101d9d408;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar8 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0xb0);
    if (UNRECOVERED_JUMPTABLE_01[0xb8] == (code)0x1) {
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x48) = uVar8;
      iVar1 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar1 != 0) {
        uVar8 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(UNRECOVERED_JUMPTABLE_01 + 0x48,uVar8,PTR___ss5ErrorWS_11034ee10);
      }
      uVar8 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x98);
      uVar10 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x90);
      uVar12 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x80);
      uVar13 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x70);
      func_0x000107c61574(*(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0xa0));
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar10);
      func_0x000107c615e8(uVar12);
      func_0x000107c615e8(uVar13);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_01 + 8);
      lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    else {
      uVar10 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x98);
      uVar12 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x90);
      uVar13 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x80);
      uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x70);
      puVar4 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_01 + 0x50);
      func_0x000107c61574(*(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0xa0));
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar12);
      func_0x000107c615e8(uVar13);
      func_0x000107c615e8(uVar14);
      *puVar4 = uVar8;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_01 + 8);
      lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    if (lVar6 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    func_0x000107c60e78();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_01 + 0x60);
    uVar8 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x20);
    func_0x000107c613f8(&UNK_1107a6f08,puVar4,0,0);
    *puVar4 = uVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(UNRECOVERED_JUMPTABLE_01 + 8))();
      return;
    }
    func_0x000107c60e78();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c615e8(*(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x70));
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_01 + 0x88);
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE_01 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    func_0x000107c60e78();
  }
  *(code **)(UNRECOVERED_JUMPTABLE_01 + 0x18) = UNRECOVERED_JUMPTABLE;
  *(code **)(UNRECOVERED_JUMPTABLE_01 + 0x20) = UNRECOVERED_JUMPTABLE_00;
  UNRECOVERED_JUMPTABLE_00 = FUN_101d9d64c;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return;
}



/* Entry: 101d9d004; end: 101d9d14f;  */

void FUN_101d9d004(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_01;
  code *UNRECOVERED_JUMPTABLE_00;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x22;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = unaff_x22[2];
  lVar8 = unaff_x22[0xd];
  lVar5 = lVar6;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  unaff_x22[5] = lVar5;
  plVar10 = (long *)0x112d51a60;
  func_0x0001000285a8(0x112d51a60,&UNK_10d9189e0);
  func_0x0001048da110(unaff_x22 + 6);
  if (lVar8 == 0) {
    func_0x000107c615e8(lVar5);
    UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[6];
    unaff_x22[0xe] = (long)UNRECOVERED_JUMPTABLE_00;
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c614f0();
    UNRECOVERED_JUMPTABLE_01 = (code *)0x50;
    func_0x000107c615b8();
    unaff_x22[0xf] = (long)UNRECOVERED_JUMPTABLE_01;
    *(long **)UNRECOVERED_JUMPTABLE_01 = unaff_x22;
    *(code **)(UNRECOVERED_JUMPTABLE_01 + 8) = FUN_101d9d150;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) goto LAB_101d9d14c;
  }
  else {
    lVar6 = unaff_x22[7];
    func_0x000100faaf10();
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_1107b5fe0;
    func_0x000107c613f8(&UNK_1107b5fe0,plVar10,0,0);
    *plVar10 = lVar6;
    func_0x000107c615e8(lVar5);
    UNRECOVERED_JUMPTABLE_01 = (code *)unaff_x22[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return;
    }
LAB_101d9d14c:
    func_0x000107c60e78();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar4 = *unaff_x22;
    plVar10 = (long *)*unaff_x22;
    *(code **)(lVar4 + 0x80) = UNRECOVERED_JUMPTABLE_01;
    *(code **)(lVar4 + 0x88) = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x78));
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101d9d1f4;
        goto LAB_107c615e0;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      UNRECOVERED_JUMPTABLE_00 = (code *)0x101d9d5d4;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar2 = 0x88;
    lVar5 = 0;
    FUN_101d9eb98(0,0x112e2b588,&PTR_PTR_1126d2e68);
    func_0x000107c614e8();
    plVar10[8] = 0;
    func_0x000107c505d0();
    func_0x000107c61180();
    plVar10[0x12] = lVar5;
    lVar4 = plVar10[8];
    if (lVar5 == 0) {
      lVar5 = plVar10[0x10];
      lVar8 = plVar10[0xe];
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(lVar4);
      func_0x000107c61654();
      func_0x000107c615e8(lVar5);
      func_0x000107c615e8(lVar8);
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar10[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else {
      func_0x000107c61174();
      func_0x000107c40b54();
      func_0x000107c61180();
      plVar10[0x13] = lVar5;
      uVar2 = 0x80;
      func_0x0001000285a8(0x112e2b580,&UNK_10da147d8);
      func_0x000103edf20c();
      plVar10[0x14] = lVar5;
      UNRECOVERED_JUMPTABLE_00 = (code *)0x80;
      func_0x000107c615b8();
      plVar10[0x15] = (long)UNRECOVERED_JUMPTABLE_00;
      *(long **)UNRECOVERED_JUMPTABLE_00 = plVar10;
      *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101d9d388;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x70) = lVar5;
        UNRECOVERED_JUMPTABLE_00 = FUN_101d9e1b4;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar4 = *plVar10;
    UNRECOVERED_JUMPTABLE_01 = (code *)*plVar10;
    *(code **)(lVar4 + 0xb0) = UNRECOVERED_JUMPTABLE_00;
    *(undefined1 *)(lVar4 + 0xb8) = uVar2;
    func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xa8));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101d9d408;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0xb0);
    if (UNRECOVERED_JUMPTABLE_01[0xb8] == (code)0x1) {
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x48) = uVar7;
      iVar1 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar1 != 0) {
        uVar7 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(UNRECOVERED_JUMPTABLE_01 + 0x48,uVar7,PTR___ss5ErrorWS_11034ee10);
      }
      uVar7 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x98);
      uVar9 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x90);
      uVar11 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x80);
      uVar12 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x70);
      func_0x000107c61574(*(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0xa0));
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar9);
      func_0x000107c615e8(uVar11);
      func_0x000107c615e8(uVar12);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_01 + 8);
      lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    else {
      uVar9 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x98);
      uVar11 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x90);
      uVar12 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x80);
      uVar13 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x70);
      puVar3 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_01 + 0x50);
      func_0x000107c61574(*(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0xa0));
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar11);
      func_0x000107c615e8(uVar12);
      func_0x000107c615e8(uVar13);
      *puVar3 = uVar7;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_01 + 8);
      lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    if (lVar4 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    func_0x000107c60e78();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_01 + 0x60);
    uVar7 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x20);
    func_0x000107c613f8(&UNK_1107a6f08,puVar3,0,0);
    *puVar3 = uVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(UNRECOVERED_JUMPTABLE_01 + 8))();
      return;
    }
    func_0x000107c60e78();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c615e8(*(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x70));
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_01 + 0x88);
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE_01 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    func_0x000107c60e78();
  }
  *(code **)(UNRECOVERED_JUMPTABLE_01 + 0x18) = UNRECOVERED_JUMPTABLE;
  *(code **)(UNRECOVERED_JUMPTABLE_01 + 0x20) = UNRECOVERED_JUMPTABLE_00;
  UNRECOVERED_JUMPTABLE_00 = FUN_101d9d64c;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return;
}



/* Entry: 101d9d150; end: 101d9d1f3;  */

void FUN_101d9d150(undefined8 param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x22;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *unaff_x22;
  plVar9 = (long *)*unaff_x22;
  *(undefined8 *)(lVar6 + 0x80) = param_1;
  *(long *)(lVar6 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0x78));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      UNRECOVERED_JUMPTABLE = FUN_101d9d1f4;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    UNRECOVERED_JUMPTABLE = (code *)0x101d9d5d4;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = 0x88;
  lVar4 = 0;
  FUN_101d9eb98(0,0x112e2b588,&PTR_PTR_1126d2e68);
  func_0x000107c614e8();
  plVar9[8] = 0;
  func_0x000107c505d0();
  func_0x000107c61180();
  plVar9[0x12] = lVar4;
  lVar6 = plVar9[8];
  if (lVar4 == 0) {
    lVar4 = plVar9[0x10];
    lVar10 = plVar9[0xe];
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar6);
    func_0x000107c61654();
    func_0x000107c615e8(lVar4);
    func_0x000107c615e8(lVar10);
    UNRECOVERED_JUMPTABLE = (code *)plVar9[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    func_0x000107c61174();
    func_0x000107c40b54();
    func_0x000107c61180();
    plVar9[0x13] = lVar4;
    uVar2 = 0x80;
    func_0x0001000285a8(0x112e2b580,&UNK_10da147d8);
    func_0x000103edf20c();
    plVar9[0x14] = lVar4;
    UNRECOVERED_JUMPTABLE = (code *)0x80;
    func_0x000107c615b8();
    plVar9[0x15] = (long)UNRECOVERED_JUMPTABLE;
    *(long **)UNRECOVERED_JUMPTABLE = plVar9;
    *(code **)(UNRECOVERED_JUMPTABLE + 8) = FUN_101d9d388;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      *(long *)(UNRECOVERED_JUMPTABLE + 0x70) = lVar4;
      UNRECOVERED_JUMPTABLE = FUN_101d9e1b4;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *plVar9;
  lVar5 = *plVar9;
  *(code **)(lVar6 + 0xb0) = UNRECOVERED_JUMPTABLE;
  *(undefined1 *)(lVar6 + 0xb8) = uVar2;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0xa8));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    UNRECOVERED_JUMPTABLE = FUN_101d9d408;
  }
  else {
    func_0x000107c60e78();
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = *(undefined8 *)(lVar5 + 0xb0);
    if (*(char *)(lVar5 + 0xb8) == '\x01') {
      *(undefined8 *)(lVar5 + 0x48) = uVar7;
      iVar1 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar1 != 0) {
        uVar7 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(lVar5 + 0x48,uVar7,PTR___ss5ErrorWS_11034ee10);
      }
      uVar7 = *(undefined8 *)(lVar5 + 0x98);
      uVar8 = *(undefined8 *)(lVar5 + 0x90);
      uVar11 = *(undefined8 *)(lVar5 + 0x80);
      uVar12 = *(undefined8 *)(lVar5 + 0x70);
      func_0x000107c61574(*(undefined8 *)(lVar5 + 0xa0));
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      func_0x000107c615e8(uVar11);
      func_0x000107c615e8(uVar12);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
      lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar5 + 0x98);
      uVar11 = *(undefined8 *)(lVar5 + 0x90);
      uVar12 = *(undefined8 *)(lVar5 + 0x80);
      uVar13 = *(undefined8 *)(lVar5 + 0x70);
      puVar3 = *(undefined8 **)(lVar5 + 0x50);
      func_0x000107c61574(*(undefined8 *)(lVar5 + 0xa0));
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar11);
      func_0x000107c615e8(uVar12);
      func_0x000107c615e8(uVar13);
      *puVar3 = uVar7;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
      lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    if (lVar6 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    func_0x000107c60e78();
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = *(undefined8 **)(lVar5 + 0x60);
    uVar7 = *(undefined8 *)(lVar5 + 0x20);
    func_0x000107c613f8(&UNK_1107a6f08,puVar3,0,0);
    *puVar3 = uVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 8))();
      return;
    }
    func_0x000107c60e78();
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c615e8(*(undefined8 *)(lVar5 + 0x70));
    uVar7 = *(undefined8 *)(lVar5 + 0x88);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    func_0x000107c60e78();
    *(code **)(lVar5 + 0x18) = UNRECOVERED_JUMPTABLE;
    *(undefined8 *)(lVar5 + 0x20) = uVar7;
    UNRECOVERED_JUMPTABLE = FUN_101d9d64c;
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 101d9d1f4; end: 101d9d387;  */

void FUN_101d9d1f4(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x22;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 0x88;
  lVar2 = 0;
  FUN_101d9eb98(0,0x112e2b588,&PTR_PTR_1126d2e68);
  func_0x000107c614e8();
  unaff_x22[8] = 0;
  func_0x000107c505d0();
  func_0x000107c61180();
  unaff_x22[0x12] = lVar2;
  lVar3 = unaff_x22[8];
  if (lVar2 == 0) {
    lVar2 = unaff_x22[0x10];
    lVar9 = unaff_x22[0xe];
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar3);
    func_0x000107c61654();
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(lVar9);
    UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    func_0x000107c61174();
    func_0x000107c40b54();
    func_0x000107c61180();
    unaff_x22[0x13] = lVar2;
    uVar4 = 0x80;
    func_0x0001000285a8(0x112e2b580,&UNK_10da147d8);
    func_0x000103edf20c();
    unaff_x22[0x14] = lVar2;
    UNRECOVERED_JUMPTABLE = (code *)0x80;
    func_0x000107c615b8();
    unaff_x22[0x15] = (long)UNRECOVERED_JUMPTABLE;
    *(long **)UNRECOVERED_JUMPTABLE = unaff_x22;
    *(code **)(UNRECOVERED_JUMPTABLE + 8) = FUN_101d9d388;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      *(long *)(UNRECOVERED_JUMPTABLE + 0x70) = lVar2;
      UNRECOVERED_JUMPTABLE = FUN_101d9e1b4;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(code **)(lVar3 + 0xb0) = UNRECOVERED_JUMPTABLE;
  *(undefined1 *)(lVar3 + 0xb8) = uVar4;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xa8));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    UNRECOVERED_JUMPTABLE = FUN_101d9d408;
  }
  else {
    func_0x000107c60e78();
    lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = *(undefined8 *)(lVar6 + 0xb0);
    if (*(char *)(lVar6 + 0xb8) == '\x01') {
      *(undefined8 *)(lVar6 + 0x48) = uVar7;
      iVar1 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar1 != 0) {
        uVar7 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(lVar6 + 0x48,uVar7,PTR___ss5ErrorWS_11034ee10);
      }
      uVar7 = *(undefined8 *)(lVar6 + 0x98);
      uVar8 = *(undefined8 *)(lVar6 + 0x90);
      uVar10 = *(undefined8 *)(lVar6 + 0x80);
      uVar11 = *(undefined8 *)(lVar6 + 0x70);
      func_0x000107c61574(*(undefined8 *)(lVar6 + 0xa0));
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      func_0x000107c615e8(uVar10);
      func_0x000107c615e8(uVar11);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
      lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar6 + 0x98);
      uVar10 = *(undefined8 *)(lVar6 + 0x90);
      uVar11 = *(undefined8 *)(lVar6 + 0x80);
      uVar12 = *(undefined8 *)(lVar6 + 0x70);
      puVar5 = *(undefined8 **)(lVar6 + 0x50);
      func_0x000107c61574(*(undefined8 *)(lVar6 + 0xa0));
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar10);
      func_0x000107c615e8(uVar11);
      func_0x000107c615e8(uVar12);
      *puVar5 = uVar7;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
      lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    if (lVar3 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    func_0x000107c60e78();
    lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = *(undefined8 **)(lVar6 + 0x60);
    uVar7 = *(undefined8 *)(lVar6 + 0x20);
    func_0x000107c613f8(&UNK_1107a6f08,puVar5,0,0);
    *puVar5 = uVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 8))();
      return;
    }
    func_0x000107c60e78();
    lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c615e8(*(undefined8 *)(lVar6 + 0x70));
    uVar7 = *(undefined8 *)(lVar6 + 0x88);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    func_0x000107c60e78();
    *(code **)(lVar6 + 0x18) = UNRECOVERED_JUMPTABLE;
    *(undefined8 *)(lVar6 + 0x20) = uVar7;
    UNRECOVERED_JUMPTABLE = FUN_101d9d64c;
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 101d9d388; end: 101d9d407;  */

void FUN_101d9d388(undefined8 param_1,undefined1 param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x22;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *unaff_x22;
  lVar7 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0xb0) = param_1;
  *(undefined1 *)(lVar4 + 0xb8) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xa8));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101d9d408;
  }
  else {
    func_0x000107c60e78();
    lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar5 = *(undefined8 *)(lVar7 + 0xb0);
    if (*(char *)(lVar7 + 0xb8) == '\x01') {
      *(undefined8 *)(lVar7 + 0x48) = uVar5;
      iVar1 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar1 != 0) {
        uVar5 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(lVar7 + 0x48,uVar5,PTR___ss5ErrorWS_11034ee10);
      }
      uVar5 = *(undefined8 *)(lVar7 + 0x98);
      uVar6 = *(undefined8 *)(lVar7 + 0x90);
      uVar8 = *(undefined8 *)(lVar7 + 0x80);
      uVar9 = *(undefined8 *)(lVar7 + 0x70);
      func_0x000107c61574(*(undefined8 *)(lVar7 + 0xa0));
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c615e8(uVar8);
      func_0x000107c615e8(uVar9);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar7 + 8);
      lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar7 + 0x98);
      uVar8 = *(undefined8 *)(lVar7 + 0x90);
      uVar9 = *(undefined8 *)(lVar7 + 0x80);
      uVar10 = *(undefined8 *)(lVar7 + 0x70);
      puVar2 = *(undefined8 **)(lVar7 + 0x50);
      func_0x000107c61574(*(undefined8 *)(lVar7 + 0xa0));
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar8);
      func_0x000107c615e8(uVar9);
      func_0x000107c615e8(uVar10);
      *puVar2 = uVar5;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar7 + 8);
      lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    if (lVar4 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    func_0x000107c60e78();
    lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = *(undefined8 **)(lVar7 + 0x60);
    uVar5 = *(undefined8 *)(lVar7 + 0x20);
    func_0x000107c613f8(&UNK_1107a6f08,puVar2,0,0);
    *puVar2 = uVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 8))();
      return;
    }
    func_0x000107c60e78();
    lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c615e8(*(undefined8 *)(lVar7 + 0x70));
    uVar5 = *(undefined8 *)(lVar7 + 0x88);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar7 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    func_0x000107c60e78();
    *(code **)(lVar7 + 0x18) = UNRECOVERED_JUMPTABLE_00;
    *(undefined8 *)(lVar7 + 0x20) = uVar5;
    UNRECOVERED_JUMPTABLE_00 = FUN_101d9d64c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return;
}



/* Entry: 101d9d408; end: 101d9d55b;  */

void FUN_101d9d408(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  if (*(char *)(unaff_x22 + 0xb8) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x48) = uVar5;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x48,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(uVar7);
    func_0x000107c615e8(uVar8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 8);
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
    puVar2 = *(undefined8 **)(unaff_x22 + 0x50);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(uVar8);
    func_0x000107c615e8(uVar9);
    *puVar2 = uVar5;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 8);
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  if (lVar4 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  func_0x000107c60e78();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined8 **)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar2,0,0);
  *puVar2 = uVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x70));
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  func_0x000107c60e78();
  *(code **)(unaff_x22 + 0x18) = UNRECOVERED_JUMPTABLE_00;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9d64c,0,0);
  return;
}



/* Entry: 101d9d55c; end: 101d9d633;  */

void FUN_101d9d55c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined8 **)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x70));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000107c60e78();
  *(code **)(unaff_x22 + 0x18) = UNRECOVERED_JUMPTABLE;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9d64c,0,0);
  return;
}



/* Entry: 101d9d634; end: 101d9d64b;  */

void FUN_101d9d634(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9d64c,0,0);
  return;
}



/* Entry: 101d9d64c; end: 101d9d713;  */

void FUN_101d9d64c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112d51a50,&UNK_10d9189d0);
  puVar1 = &UNK_110482aa8;
  func_0x000107c613fc(&UNK_110482aa8,0x20,7);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x000107c615f0(uVar2);
  uVar2 = 0;
  func_0x0001048897a0(0,1,0,FUN_101d9eb08,puVar1);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000107c61574(puVar1);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101d9d714;
                    /* WARNING: Could not recover jumptable at 0x000101d9d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100fab58c)();
  return;
}



/* Entry: 101d9d714; end: 101d9d767;  */

void FUN_101d9d714(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined1 *)(lVar1 + 0x40) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9d768,0,0);
  return;
}



/* Entry: 101d9d768; end: 101d9d813;  */

void FUN_101d9d768(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  if (*(char *)(unaff_x22 + 0x40) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101d9d7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000101d9d810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 101d9d814; end: 101d9d88f; -[_TtC38MemoriesComposerClusteringServicesImpl33MemoriesComposerClusteringManager init] */

void FUN_101d9d814(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesComposerClusteringServicesImpl.MemoriesComposerClusteringManager",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d9d840);
  (*pcVar1)();
}



/* Entry: 101d9d890; end: 101d9d8b7; -[_TtC38MemoriesComposerClusteringServicesImpl33MemoriesComposerClusteringManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9d890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2b538));
  return;
}



/* Entry: 101d9d8b8; end: 101d9d92f;  */

/* WARNING: Removing unreachable block (ram,0x000101d9d8dc) */

void FUN_101d9d8b8(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c5fd64();
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_11034fe28 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101d9d930;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_11034fe20)();
  return;
}



/* Entry: 101d9d930; end: 101d9da43;  */

void FUN_101d9d930(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101d9d978,0,0);
  return;
}



/* Entry: 101d9da44; end: 101d9dbbb;  */

void FUN_101d9da44(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  if (*(char *)(unaff_x22 + 0x70) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x18) = uVar6;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x18,uVar6,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000101d9dad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  FUN_101d9e76c(uVar5);
  func_0x0001000285a8(0x112e2b540,&UNK_10da14688);
  uVar2 = 0;
  FUN_101d9eb98(0,0x112e2b548,&PTR_PTR_1126a9508);
  uVar3 = uVar5;
  func_0x000107c5fc48(uVar5,uVar2);
  func_0x000107c6142c(uVar5);
  func_0x000107c3fc70();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar6;
  func_0x000103edf20c();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
  func_0x000107c61170(uVar6);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101d9dbbc;
                    /* WARNING: Could not recover jumptable at 0x000101d9dbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101d9e2bc();
  return;
}



/* Entry: 101d9dbbc; end: 101d9dc0f;  */

void FUN_101d9dbbc(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x68) = param_1;
  *(undefined1 *)(lVar1 + 0x71) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9dc10,0,0);
  return;
}



/* Entry: 101d9dc10; end: 101d9dce3;  */

void FUN_101d9dc10(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  if (*(char *)(unaff_x22 + 0x71) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x20,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x70);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
    FUN_101d9e8bc(uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101d9dca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  FUN_101d9e8bc(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101d9dce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 101d9dce4; end: 101d9df63;  */

void FUN_101d9dce4(undefined8 *param_1,double param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined8 *puStack_68;
  
  lVar1 = 0x112d373d8;
  puVar4 = &UNK_10d9014c0;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar6 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar7 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar10 = *param_3;
  lVar1 = lVar10;
  func_0x000107c4b800();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    puStack_68 = param_1;
    func_0x000107c5fadc();
    param_1 = puStack_68;
    func_0x000107c6142c(puVar4);
  }
  func_0x000107c40c4c();
  func_0x000107c61180();
  if (lVar10 != 0) {
    func_0x000107c5ee94(lVar8);
    func_0x000107c61170(lVar10);
  }
  (**(code **)(lVar5 + 0x38))(lVar8,lVar10 == 0,1,lVar2);
  func_0x0001003a4c00(lVar8,puVar6);
  pcVar9 = *(code **)(lVar5 + 0x30);
  puVar3 = puVar6;
  (*pcVar9)(puVar6,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x000107c5eea0(lVar7);
    puVar3 = puVar6;
    (*pcVar9)(puVar6,1,lVar2);
    if ((int)puVar3 != 1) {
      func_0x0001000d1dcc(puVar6);
    }
  }
  else {
    (**(code **)(lVar5 + 0x20))(lVar7,puVar6,lVar2);
  }
  func_0x000107c5ee8c();
  (**(code **)(lVar5 + 8))(lVar7,lVar2);
  param_2 = param_2 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x101d9df5c);
    (*pcVar9)();
  }
  if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x101d9df60);
    (*pcVar9)();
  }
  if (param_2 < 9.223372036854776e+18) {
    puVar4 = PTR_PTR_1126a9508;
    func_0x000107c610f8();
    func_0x000107c46fdc((double)(long)param_2);
    func_0x000107c61170(lVar1);
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x101d9df64);
  (*pcVar9)();
}



/* Entry: 101d9df64; end: 101d9dfb3;  */

void FUN_101d9df64(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101d9dfb4;
  plVar1[5] = param_1;
  plVar1[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9d8b8,0,0);
  return;
}



/* Entry: 101d9dfb4; end: 101d9dffb;  */

void FUN_101d9dfb4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d9dff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d9dffc; end: 101d9e15b;  */

void FUN_101d9dffc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uStack_40 = 0x101d9eb14;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100f1c768;
  puStack_48 = &UNK_110482ac0;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c440d8(param_2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101d9e15c; end: 101d9e19b;  */

void FUN_101d9e15c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101d9ec3c,0,0);
  return;
}



/* Entry: 101d9e19c; end: 101d9e1b3;  */

void FUN_101d9e19c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9e1b4,0,0);
  return;
}



/* Entry: 101d9e1b4; end: 101d9e27b;  */

void FUN_101d9e1b4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101d9e1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101d9e27c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110482b20;
  func_0x000107c613fc(&UNK_110482b20,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101d9ec40,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d9e27c; end: 101d9e2bb;  */

void FUN_101d9e27c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101d9ec38,0,0);
  return;
}



/* Entry: 101d9e2bc; end: 101d9e2d3;  */

void FUN_101d9e2bc(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9e2d4,0,0);
  return;
}



/* Entry: 101d9e2d4; end: 101d9e39b;  */

void FUN_101d9e2d4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101d9e31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101d9e39c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110482af8;
  func_0x000107c613fc(&UNK_110482af8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101d9eb38,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d9e39c; end: 101d9e3db;  */

void FUN_101d9e39c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9e3dc,0,0);
  return;
}



/* Entry: 101d9e3dc; end: 101d9e3eb;  */

void FUN_101d9e3dc(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101d9e3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101d9e3ec; end: 101d9e407;  */

void FUN_101d9e3ec(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101d9e408();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101d9e408; end: 101d9e53b;  */

undefined * FUN_101d9e408(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101d9e53c);
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
    puVar3 = param_1;
    FUN_101d9e53c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_101d9eb98(0,0x112e2b548,&PTR_PTR_1126a9508);
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



/* Entry: 101d9e53c; end: 101d9e5a7;  */

void FUN_101d9e53c(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_101d9eb98(0,0x112e2b548,&PTR_PTR_1126a9508);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e2b590;
  plVar5 = (long *)&UNK_10da14810;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101d9e5a8; end: 101d9e76b;  */

ulong FUN_101d9e5a8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d9e68c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d9e690);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    func_0x000107c61168(PTR__OBJC_CLASS___PHAsset_1126bd898);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    func_0x000107c61168(PTR__OBJC_CLASS___PHAsset_1126bd898);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101d9eb98(0,0x112d5dfc0,&PTR__OBJC_CLASS___PHAsset_1126bd898);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d9e76c);
  (*pcVar2)();
}



/* Entry: 101d9e76c; end: 101d9e8bb;  */

undefined * FUN_101d9e76c(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    FUN_101d9e3ec(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101d9e8bc);
      (*pcVar3)();
    }
    uVar6 = 0;
    do {
      puVar2 = puStack_68;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) <= (long)uVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d9e8a0);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar6;
        FUN_101d9e5a8(uVar6,param_1);
      }
      uStack_78 = uVar4;
      FUN_101d9dce4(&uStack_70,&uStack_78);
      func_0x000107c61170(uVar4);
      uVar1 = uStack_70;
      uVar4 = *(ulong *)(puVar2 + 0x10);
      puStack_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        FUN_101d9e3ec(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      uVar6 = uVar6 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puStack_68 + uVar4 * 8 + 0x20) = uVar1;
    } while (uVar5 != uVar6);
  }
  return puStack_68;
}



/* Entry: 101d9e8bc; end: 101d9e8d3;  */

void FUN_101d9e8bc(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 101d9e8d4; end: 101d9e913;  */

void FUN_101d9e8d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2b550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da14698;
  func_0x000107c61520(&UNK_10da14698,&UNK_110482a88);
  puRam0000000112e2b550 = puVar1;
  return;
}



/* Entry: 101d9e914; end: 101d9ea77;  */

int FUN_101d9e914(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101d9e990;
        goto LAB_101d9e974;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101d9e974:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101d9e990:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101d9ea78; end: 101d9eacb;  */

void FUN_101d9ea78(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE_01;
  code *UNRECOVERED_JUMPTABLE_00;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101d9eacc;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4[10] = param_1;
  lVar10 = 0x112d510f8;
  func_0x0001000285a8(0x112d510f8,&UNK_10d917b20);
  plVar4[3] = lVar10;
  puVar2 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar4[0xb] = (long)puVar2;
  puVar8 = puVar2;
  func_0x000100faa6a0();
  plVar4[0xc] = (long)puVar8;
  *puVar2 = plVar4;
  puVar2[1] = FUN_101d9cf64;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    puVar2[0xb] = puVar8;
    puVar2[0xc] = plVar4 + 4;
    puVar2[9] = plVar4 + 3;
    puVar2[10] = &UNK_1107a6f08;
    puVar2[8] = plVar4 + 2;
    lVar10 = *unaff_x20;
    puVar2[0xd] = &PTR_DAT_1107a6e88;
    uVar5 = 0x10;
    _swift_task_alloc();
    puVar2[0xe] = uVar5;
    lVar10 = *(long *)(lVar10 + 0x50);
    puVar2[0xf] = lVar10;
    lVar10 = *(long *)(lVar10 + -8);
    puVar2[0x10] = lVar10;
    uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar2[0x11] = uVar6;
    plVar4 = (long *)0x70;
    _swift_task_alloc();
    puVar2[0x12] = plVar4;
    *plVar4 = (long)puVar2;
    plVar4[1] = (long)&UNK_104876614;
    plVar4[5] = uVar6;
    plVar4[6] = (long)unaff_x20;
    lVar9 = *(long *)(*unaff_x20 + 0x50);
    plVar4[7] = lVar9;
    lVar10 = 0;
    __sSqMa(0,lVar9);
    plVar4[8] = lVar10;
    lVar10 = *(long *)(lVar10 + -8);
    plVar4[9] = lVar10;
    uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar4[10] = uVar6;
    lVar10 = *(long *)(lVar9 + -8);
    plVar4[0xb] = lVar10;
    uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar4[0xc] = uVar6;
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_104875f90;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *plVar4;
  plVar4 = (long *)*plVar4;
  *(long **)(lVar9 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar9 + 0x58));
  if (unaff_x20 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101d9d004;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101d9d55c;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = plVar4[2];
  lVar12 = plVar4[0xd];
  lVar10 = lVar11;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar11);
  plVar4[5] = lVar10;
  plVar3 = (long *)0x112d51a60;
  func_0x0001000285a8(0x112d51a60,&UNK_10d9189e0);
  func_0x0001048da110(plVar4 + 6);
  if (lVar12 == 0) {
    func_0x000107c615e8(lVar10);
    UNRECOVERED_JUMPTABLE_00 = (code *)plVar4[6];
    plVar4[0xe] = (long)UNRECOVERED_JUMPTABLE_00;
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c614f0();
    UNRECOVERED_JUMPTABLE_01 = (code *)0x50;
    func_0x000107c615b8();
    plVar4[0xf] = (long)UNRECOVERED_JUMPTABLE_01;
    *(long **)UNRECOVERED_JUMPTABLE_01 = plVar4;
    *(code **)(UNRECOVERED_JUMPTABLE_01 + 8) = FUN_101d9d150;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) goto LAB_101d9d14c;
  }
  else {
    lVar11 = plVar4[7];
    func_0x000100faaf10();
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_1107b5fe0;
    func_0x000107c613f8(&UNK_1107b5fe0,plVar3,0,0);
    *plVar3 = lVar11;
    func_0x000107c615e8(lVar10);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar4[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return;
    }
LAB_101d9d14c:
    func_0x000107c60e78();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar9 = *plVar4;
    plVar4 = (long *)*plVar4;
    *(code **)(lVar9 + 0x80) = UNRECOVERED_JUMPTABLE_01;
    *(code **)(lVar9 + 0x88) = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c615c0(*(undefined8 *)(lVar9 + 0x78));
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101d9d1f4;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      UNRECOVERED_JUMPTABLE_00 = (code *)0x101d9d5d4;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = 0x88;
    lVar10 = 0;
    FUN_101d9eb98(0,0x112e2b588,&PTR_PTR_1126d2e68);
    func_0x000107c614e8();
    plVar4[8] = 0;
    func_0x000107c505d0();
    func_0x000107c61180();
    plVar4[0x12] = lVar10;
    lVar9 = plVar4[8];
    if (lVar10 == 0) {
      lVar10 = plVar4[0x10];
      lVar12 = plVar4[0xe];
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(lVar9);
      func_0x000107c61654();
      func_0x000107c615e8(lVar10);
      func_0x000107c615e8(lVar12);
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar4[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else {
      func_0x000107c61174();
      func_0x000107c40b54();
      func_0x000107c61180();
      plVar4[0x13] = lVar10;
      uVar7 = 0x80;
      func_0x0001000285a8(0x112e2b580,&UNK_10da147d8);
      func_0x000103edf20c();
      plVar4[0x14] = lVar10;
      UNRECOVERED_JUMPTABLE_00 = (code *)0x80;
      func_0x000107c615b8();
      plVar4[0x15] = (long)UNRECOVERED_JUMPTABLE_00;
      *(long **)UNRECOVERED_JUMPTABLE_00 = plVar4;
      *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101d9d388;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x70) = lVar10;
        UNRECOVERED_JUMPTABLE_00 = FUN_101d9e1b4;
        goto _swift_task_switch;
      }
    }
    func_0x000107c60e78();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar9 = *plVar4;
    UNRECOVERED_JUMPTABLE_01 = (code *)*plVar4;
    *(code **)(lVar9 + 0xb0) = UNRECOVERED_JUMPTABLE_00;
    *(undefined1 *)(lVar9 + 0xb8) = uVar7;
    func_0x000107c615c0(*(undefined8 *)(lVar9 + 0xa8));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101d9d408;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar5 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0xb0);
    if (UNRECOVERED_JUMPTABLE_01[0xb8] == (code)0x1) {
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x48) = uVar5;
      iVar1 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar1 != 0) {
        uVar5 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(UNRECOVERED_JUMPTABLE_01 + 0x48,uVar5,PTR___ss5ErrorWS_11034ee10);
      }
      uVar5 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x98);
      uVar13 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x90);
      uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x80);
      uVar15 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x70);
      func_0x000107c61574(*(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0xa0));
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar13);
      func_0x000107c615e8(uVar14);
      func_0x000107c615e8(uVar15);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_01 + 8);
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    else {
      uVar13 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x98);
      uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x90);
      uVar15 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x80);
      uVar16 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x70);
      puVar8 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_01 + 0x50);
      func_0x000107c61574(*(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0xa0));
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar14);
      func_0x000107c615e8(uVar15);
      func_0x000107c615e8(uVar16);
      *puVar8 = uVar5;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_01 + 8);
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    if (lVar9 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    func_0x000107c60e78();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = *(undefined8 **)(UNRECOVERED_JUMPTABLE_01 + 0x60);
    uVar5 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x20);
    func_0x000107c613f8(&UNK_1107a6f08,puVar8,0,0);
    *puVar8 = uVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(UNRECOVERED_JUMPTABLE_01 + 8))();
      return;
    }
    func_0x000107c60e78();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c615e8(*(undefined8 *)(UNRECOVERED_JUMPTABLE_01 + 0x70));
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_01 + 0x88);
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE_01 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x000101d9d62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    func_0x000107c60e78();
  }
  *(code **)(UNRECOVERED_JUMPTABLE_01 + 0x18) = UNRECOVERED_JUMPTABLE;
  *(code **)(UNRECOVERED_JUMPTABLE_01 + 0x20) = UNRECOVERED_JUMPTABLE_00;
  UNRECOVERED_JUMPTABLE_00 = FUN_101d9d64c;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return;
}



/* Entry: 101d9eacc; end: 101d9eb07;  */

void FUN_101d9eacc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d9eb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d9eb08; end: 101d9eb37;  */

void FUN_101d9eb08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar3 = &puStack_60;
  uStack_40 = 0x101d9eb14;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100f1c768;
  puStack_48 = &UNK_110482ac0;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60,uVar1,*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c440d8(uVar1);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101d9eb38; end: 101d9eb83;  */

void FUN_101d9eb38(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101d9eb84(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101d9eb84; end: 101d9eb97;  */

void FUN_101d9eb84(undefined8 param_1,char param_2)

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



/* Entry: 101d9eb98; end: 101d9ebd7;  */

void FUN_101d9eb98(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101d9ebd8; end: 101d9ec23;  */

void FUN_101d9ebd8(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101d9ec24(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101d9ec24; end: 101d9ec43;  */

void FUN_101d9ec24(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 101d9ec44; end: 101d9ed07;  */

undefined8 FUN_101d9ec44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  FUN_101d9ed48(param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101d9ed08; end: 101d9ed17;  */

void FUN_101d9ed08(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d9ed18; end: 101d9ed3b;  */

void FUN_101d9ed18(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d9ed3c; end: 101d9ed47;  */

void FUN_101d9ed3c(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101d9ed48; end: 101d9ef07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9ed48(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_2 + _DAT_112ff4aa8);
  func_0x0001000285a8(0x112d3b7c0,&UNK_10d904cb0);
  func_0x000107c6157c(uVar7);
  uVar6 = param_1;
  func_0x0001000bda74(param_1);
  lVar1 = 0;
  func_0x000101d9d870();
  lVar2 = lVar1;
  func_0x000107c610f8();
  func_0x0001000285a8(0x112e2b668,&UNK_10da14868);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar6);
  pcVar3 = FUN_101d9ef84;
  func_0x0001000bdd8c(FUN_101d9ef84,uVar6);
  *(code **)(lVar2 + _DAT_112e2b538) = pcVar3;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  puVar5 = &UNK_110482bb0;
  func_0x000107c613fc(&UNK_110482bb0,0x18,7);
  *(long **)(puVar5 + 0x10) = plVar4;
  func_0x0001000285a8(0x112e2b670,&UNK_10da14870);
  func_0x000107c613fc();
  func_0x000107c61174(plVar4);
  pcVar3 = FUN_101d9ef8c;
  func_0x0001000bdd8c(FUN_101d9ef8c,puVar5);
  uVar6 = 0;
  func_0x00010028a344(0);
  func_0x000107c610f8();
  func_0x000103a6b2fc(pcVar3,uVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(plVar4);
  func_0x000107c61574(uVar7);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return;
}



/* Entry: 101d9ef08; end: 101d9ef83;  */

void FUN_101d9ef08(undefined8 param_1)

{
  if (lRam0000000112e2b5c0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e68fec0);
  return;
}



/* Entry: 101d9ef84; end: 101d9ef8b;  */

void FUN_101d9ef84(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112e2b580,&UNK_10da147d8);
  func_0x000107c6157c();
  uVar1 = 0x60;
  func_0x000104887c7c(0x60,0,0x48,4,0xd000000000000025,0x800000010f00f590,&UNK_10da147e8);
  func_0x000107c61574();
  *param_1 = uVar1;
  return;
}



/* Entry: 101d9ef8c; end: 101d9efc7;  */

void FUN_101d9ef8c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  func_0x000101d9d870();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1104829f8;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 101d9efc8; end: 101d9f027; -[_TtC37MemoriesSnapDocRenderStepServicesImpl25MemoriesSnapDocRenderStep init] */

void FUN_101d9efc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapDocRenderStepServicesImpl.MemoriesSnapDocRenderStep",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d9eff4);
  (*pcVar1)();
}



/* Entry: 101d9f028; end: 101d9f13f; -[_TtC37MemoriesSnapDocRenderStepServicesImpl25MemoriesSnapDocRenderStep .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d9f0a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d9f0e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d9f0a8) */
/* WARNING: Removing unreachable block (ram,0x000101d9f0e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9f028(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112e2b680);
  func_0x0001000834e4(param_1 + _DAT_112e2b688);
  func_0x0001000834e4(param_1 + _DAT_112e2b690);
  func_0x0001000834e4(param_1 + _DAT_112e2b698);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2b6a0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e2b6a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e2b6b0));
  return;
}



/* Entry: 101d9f140; end: 101d9f53f;  */

undefined * FUN_101d9f140(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar15;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  char *pcStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar15 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  func_0x000107c5eec4(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eeac();
  uStack_70 = param_2;
  (**(code **)(lVar15 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  puVar5 = &UNK_110482cc8;
  puVar4 = puVar5;
  func_0x000107c613fc(&UNK_110482cc8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  func_0x000107c613fc(&UNK_110482cc8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  puVar6 = &UNK_110482cf0;
  func_0x000107c613fc(&UNK_110482cf0,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  puVar7 = &UNK_110482d18;
  func_0x000107c613fc(&UNK_110482d18,0x11,7);
  puVar7[0x10] = 0;
  puVar8 = &UNK_110482d40;
  func_0x000107c613fc(&UNK_110482d40,0x18,7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  puVar9 = &UNK_110482d68;
  func_0x000107c613fc(&UNK_110482d68,0x80,7);
  *(undefined8 *)(puVar9 + 0x18) = 0;
  *(undefined8 *)(puVar9 + 0x10) = 0;
  *(undefined8 *)(puVar9 + 0x28) = 0;
  *(undefined8 *)(puVar9 + 0x20) = 0;
  *(undefined8 *)(puVar9 + 0x38) = 0;
  *(undefined8 *)(puVar9 + 0x30) = 0;
  *(undefined8 *)(puVar9 + 0x48) = 0;
  *(undefined8 *)(puVar9 + 0x40) = 0;
  *(undefined8 *)(puVar9 + 0x58) = 0;
  *(undefined8 *)(puVar9 + 0x50) = 0;
  *(undefined8 *)(puVar9 + 0x68) = 0;
  *(undefined8 *)(puVar9 + 0x60) = 0;
  *(undefined8 *)(puVar9 + 0x78) = 0;
  *(undefined8 *)(puVar9 + 0x70) = 0;
  uVar11 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  pcStack_88 = "sImpl.MemoriesSnapDocRenderStep";
  puVar10 = &UNK_110482d90;
  uStack_78 = uVar11;
  func_0x000107c613fc(&UNK_110482d90,0x60,7);
  uVar1 = uStack_70;
  *(undefined8 *)(puVar10 + 0x10) = param_1;
  *(undefined **)(puVar10 + 0x18) = puVar4;
  *(undefined **)(puVar10 + 0x20) = puVar5;
  *(undefined **)(puVar10 + 0x28) = puVar6;
  *(undefined8 *)(puVar10 + 0x30) = unaff_x20;
  *(undefined **)(puVar10 + 0x38) = puVar7;
  *(long *)(puVar10 + 0x40) = lVar3;
  *(undefined8 *)(puVar10 + 0x48) = uStack_70;
  *(undefined **)(puVar10 + 0x50) = puVar8;
  *(undefined **)(puVar10 + 0x58) = puVar9;
  puStack_98 = puVar8;
  lStack_80 = lVar3;
  puStack_68 = puVar6;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar6);
  func_0x000107c61174();
  uStack_90 = unaff_x20;
  func_0x000107c6157c(puVar7);
  func_0x000107c61434(uVar1);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(puVar9);
  uVar11 = 0xa3;
  func_0x000104887c7c(0xa3,0,0x48,4,0xd000000000000014,(ulong)pcStack_88 | 0x8000000000000000,
                      &UNK_10da14880,puVar10);
  uStack_78 = uVar11;
  func_0x000107c61574(puVar10);
  puVar6 = &UNK_110482db8;
  func_0x000107c613fc(&UNK_110482db8,0x50,7);
  puVar8 = puStack_98;
  *(undefined8 *)(puVar6 + 0x10) = uStack_90;
  *(undefined **)(puVar6 + 0x18) = puVar7;
  *(undefined **)(puVar6 + 0x20) = puVar4;
  *(long *)(puVar6 + 0x28) = lVar3;
  *(undefined8 *)(puVar6 + 0x30) = uVar1;
  *(undefined **)(puVar6 + 0x38) = puVar5;
  *(undefined **)(puVar6 + 0x40) = puStack_98;
  *(undefined **)(puVar6 + 0x48) = puVar9;
  uVar12 = 0;
  FUN_101da42a0(0,0x112e2b678,&PTR_PTR_1126a9510);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar5);
  uVar13 = uStack_90;
  func_0x000107c61174();
  func_0x000107c6157c(puVar7);
  func_0x000107c61434(uVar1);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(puVar9);
  uVar11 = uStack_78;
  uVar14 = 0;
  func_0x000100775264(0,1,FUN_101da1500,puVar6,uVar12);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110482de0;
  func_0x000107c613fc(&UNK_110482de0,0x58,7);
  puVar10 = puStack_68;
  *(undefined8 *)(puVar6 + 0x10) = uVar13;
  *(undefined **)(puVar6 + 0x18) = puVar7;
  *(undefined **)(puVar6 + 0x20) = puVar4;
  *(undefined **)(puVar6 + 0x28) = puVar8;
  *(undefined **)(puVar6 + 0x30) = puStack_68;
  *(long *)(puVar6 + 0x38) = lStack_80;
  *(undefined8 *)(puVar6 + 0x40) = uVar1;
  *(undefined **)(puVar6 + 0x48) = puVar5;
  *(undefined **)(puVar6 + 0x50) = puVar9;
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar10);
  func_0x000107c61174(uVar13);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(puVar9);
  uVar11 = 0;
  func_0x000104889f74(0,1,FUN_101da1670,puVar6);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(puVar6);
  func_0x000103edf0bc();
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar11);
  return puVar6;
}



/* Entry: 101d9f540; end: 101d9f603;  */

void FUN_101d9f540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(unaff_x22 + 0x2e8) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x2e0) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x2d8) = param_7;
  *(undefined8 *)(unaff_x22 + 0x2d0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x2c8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x2c0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x2b8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x2b0) = param_2;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x2f0) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x2f8) = uVar2;
  lVar3 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x300) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x308) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x310) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x318) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9f604,0,0);
  return;
}



/* Entry: 101d9f604; end: 101d9fb8b;  */

/* WARNING: Removing unreachable block (ram,0x000101d9f694) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9f604(undefined8 param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  
  puVar2 = *(undefined1 **)(unaff_x22 + 0x2b0);
  func_0x000107c4188c();
  func_0x000107c61180();
  puVar4 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
LAB_101d9f75c:
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar4,0,0);
    *puVar4 = 0x24;
    func_0x000107c61654();
    goto LAB_101d9f78c;
  }
  func_0x000107c5ee30();
  func_0x000107c61170(puVar2);
  func_0x000107c610f8(PTR_PTR_1126d7f28);
  func_0x00010006c00c(puVar4,param_2);
  puVar2 = puVar4;
  FUN_101d6b26c(puVar4,param_2);
  puVar12 = param_2;
  func_0x00010006c090(puVar4);
  if (puVar2 == (undefined1 *)0x0) {
    func_0x00010006c090(puVar4,param_2);
    puVar8 = (undefined1 *)0x0;
    goto LAB_101d9f6ac;
  }
  puVar8 = puVar2;
  func_0x000107c44b10();
  if (((ulong)puVar8 & 1) == 0) {
    func_0x000107c61170(puVar2);
    func_0x00010006c090(puVar4,param_2);
    goto LAB_101d9f75c;
  }
  puVar8 = puVar2;
  func_0x000107c5b2c8();
  func_0x000107c61180();
  if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d9fb7c);
    (*pcVar1)();
  }
  puVar3 = puVar8;
  func_0x000107c42edc();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  if (puVar3 == (undefined1 *)0x0) {
    puVar11 = (undefined1 *)0x0;
    puVar8 = (undefined1 *)0x0;
    puVar14 = puVar12;
  }
  else {
    puVar11 = puVar3;
    func_0x000107c5faec();
    puVar14 = puVar12;
    func_0x000107c61170(puVar3);
    puVar8 = puVar12;
  }
  *(undefined1 **)(unaff_x22 + 0x328) = puVar8;
  *(undefined1 **)(unaff_x22 + 800) = puVar11;
  puVar12 = puVar2;
  func_0x000107c5b2c8();
  func_0x000107c61180();
  if (puVar12 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d9fb80);
    (*pcVar1)();
  }
  puVar3 = puVar12;
  func_0x000107c44fd8();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  if (puVar3 == (undefined1 *)0x0) {
    puVar12 = (undefined1 *)0x0;
    puVar14 = (undefined1 *)0x0;
  }
  else {
    puVar12 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
  }
  lVar16 = *(long *)(unaff_x22 + 0x2b8);
  lVar7 = unaff_x22 + 0x188;
  func_0x000107c61428(lVar16 + 0x10,lVar7,1,0);
  uVar9 = *(undefined8 *)(lVar16 + 0x18);
  *(undefined1 **)(lVar16 + 0x10) = puVar12;
  *(undefined1 **)(lVar16 + 0x18) = puVar14;
  func_0x000107c6142c(uVar9);
  puVar12 = puVar2;
  func_0x000107c429a0();
  func_0x000107c61180();
  if (puVar12 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d9fb84);
    (*pcVar1)();
  }
  puVar3 = puVar12;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  if (puVar3 == (undefined1 *)0x0) {
    puVar12 = (undefined1 *)0x0;
    lVar7 = 0;
  }
  else {
    puVar12 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
  }
  lVar15 = *(long *)(unaff_x22 + 0x2c0);
  func_0x000107c61428(lVar15 + 0x10,unaff_x22 + 0x1a0,1,0);
  uVar9 = *(undefined8 *)(lVar15 + 0x18);
  *(undefined1 **)(lVar15 + 0x10) = puVar12;
  *(long *)(lVar15 + 0x18) = lVar7;
  func_0x000107c6142c(uVar9);
  puVar12 = puVar2;
  func_0x000107c5b2c8();
  func_0x000107c61180();
  if (puVar12 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d9fb88);
    (*pcVar1)();
  }
  puVar3 = puVar12;
  func_0x000107c44890();
  func_0x000107c61170(puVar12);
  if ((int)puVar3 == 0) {
    func_0x00010006c090(puVar4,param_2);
    puVar12 = (undefined1 *)0x0;
  }
  else {
    puVar3 = puVar2;
    func_0x000107c5b2c8();
    func_0x000107c61180();
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d9fb8c);
      (*pcVar1)();
    }
    puVar12 = puVar3;
    func_0x000107c42d70();
    func_0x000107c61180();
    func_0x00010006c090(puVar4,param_2);
    func_0x000107c61170(puVar3);
  }
  lVar7 = *(long *)(unaff_x22 + 0x2c8);
  func_0x000107c61170(puVar2);
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x1b8,1,0);
  puVar4 = *(undefined1 **)(lVar7 + 0x10);
  *(undefined1 **)(lVar7 + 0x10) = puVar12;
  func_0x000107c61170();
  if (puVar8 == (undefined1 *)0x0) {
LAB_101d9f6ac:
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar4,0,0);
    uVar6 = 0x24;
  }
  else {
    lVar7 = *(long *)(unaff_x22 + 0x2b8);
    puVar4 = (undefined1 *)(lVar7 + 0x10);
    func_0x000107c61428(puVar4,unaff_x22 + 0x1d0,0,0);
    *(undefined8 *)(unaff_x22 + 0x330) = *(undefined8 *)(lVar7 + 0x10);
    lVar7 = *(long *)(lVar16 + 0x18);
    *(long *)(unaff_x22 + 0x338) = lVar7;
    if (lVar7 == 0) goto LAB_101d9f6ac;
    uVar13 = *(undefined8 *)(*(long *)(unaff_x22 + 0x2d0) + _DAT_112e2b6a8);
    *(undefined8 *)(unaff_x22 + 0x340) = uVar13;
    func_0x000107c61434(puVar8);
    func_0x000107c61434(lVar7);
    uVar10 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f001da0);
    uVar9 = uVar13;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar10);
    if ((int)uVar9 != 0) {
      uVar9 = 0xd000000000000029;
      func_0x000107c5fadc(0xd000000000000029,0x800000010f00f710);
      uVar10 = uVar13;
      func_0x000107c3ebd4();
      *(char *)(unaff_x22 + 0x440) = (char)uVar10;
      func_0x000107c61170(uVar9);
      uVar9 = 0xd00000000000002e;
      func_0x000107c5fadc(0xd00000000000002e,0x800000010f00f740);
      func_0x000107c3ebd4();
      *(char *)(unaff_x22 + 0x441) = (char)uVar13;
      func_0x000107c61170(uVar9);
      puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168();
      *(undefined **)(unaff_x22 + 0x348) = puVar5;
      uVar10 = 0;
      func_0x000107c5fcec();
      puVar5 = PTR___sScMMa_11034fc70;
      *(undefined8 *)(unaff_x22 + 0x350) = uVar10;
      uVar9 = uVar10;
      func_0x000107c5fce8();
      *(undefined8 *)(unaff_x22 + 0x358) = uVar9;
      uVar9 = 0x112d45220;
      FUN_101da4414(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
      *(undefined8 *)(unaff_x22 + 0x360) = uVar9;
      func_0x000107c5fca8(uVar10,uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9fb8c,uVar10,uVar9);
      return;
    }
    func_0x000107c6142c(lVar7);
    puVar4 = puVar8;
    func_0x000107c6142c();
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar4,0,0);
    uVar6 = 0x23;
  }
  *puVar4 = uVar6;
  func_0x000107c61654();
  func_0x000107c6142c(puVar8);
LAB_101d9f78c:
  uVar9 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x318));
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000101d9f7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d9fb8c; end: 101d9fbdf;  */

void FUN_101d9fb8c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x348);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x358));
  func_0x000107c5a9c4();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x368) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9fbe0,0,0);
  return;
}


