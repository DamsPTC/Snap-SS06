/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10102a624; end: 10102a6bf;  */

void FUN_10102a624(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 400);
  puVar2 = *(undefined1 **)(unaff_x22 + 0x180);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x188));
  func_0x000107c61574(uVar3);
  func_0x000107c6142c();
  uVar3 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x148);
  FUN_10102de24();
  puVar1 = &UNK_1103789c0;
  func_0x000107c613f8(&UNK_1103789c0,puVar2,0,0);
  *puVar2 = 1;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010102a6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10102a6c0; end: 10102a8b7;  */

void FUN_10102a6c0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 400);
  puVar11 = *(undefined1 **)(unaff_x22 + 0x180);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x188));
  func_0x000107c61574(uVar3);
  func_0x000107c6142c();
  lVar1 = *(long *)(unaff_x22 + 0x50);
  uVar4 = *(ulong *)(unaff_x22 + 0x58);
  *(long *)(unaff_x22 + 0x1a0) = lVar1;
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x68);
  if (uVar4 >> 0x3c < 0xf) {
    lVar13 = *(long *)(unaff_x22 + 0x120);
    func_0x000107c61428(lVar13 + 0x10,unaff_x22 + 0xb8,0,0);
    lVar13 = lVar13 + 0x10;
    func_0x000107c61618();
    if (lVar13 != 0) {
      lVar8 = *(long *)(unaff_x22 + 0x120);
      uVar7 = (undefined4)*(undefined8 *)(unaff_x22 + 0x128);
      FUN_10102aed4();
      func_0x000107c61170(lVar13);
      func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0xd0,0,0);
      lVar8 = lVar8 + 0x10;
      func_0x000107c61618();
      *(long *)(unaff_x22 + 0x1c0) = lVar8;
      if (lVar8 != 0) {
        func_0x00010006c00c(lVar1,uVar4);
        plVar9 = (long *)0x80;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x1c8) = plVar9;
        *plVar9 = unaff_x22;
        plVar9[1] = (long)FUN_10102a8b8;
        plVar9[0xb] = uVar4;
        plVar9[0xc] = lVar8;
        *(undefined1 *)((long)plVar9 + 0x3d) = 0;
        *(undefined4 *)(plVar9 + 0xf) = uVar7;
        plVar9[10] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_10102b140,0,0);
        return;
      }
    }
    puVar11 = (undefined1 *)0x0;
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
    FUN_10102de24();
    puVar10 = &UNK_1103789c0;
    func_0x000107c613f8(&UNK_1103789c0,puVar11,0,0);
    *puVar11 = 2;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar10);
    func_0x00010102e740(uVar2,uVar6,uVar3,uVar5);
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
    FUN_10102de24();
    puVar10 = &UNK_1103789c0;
    func_0x000107c613f8(&UNK_1103789c0,puVar11,0,0);
    *puVar11 = 1;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar10);
  }
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010102a8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10102a8b8; end: 10102a93b;  */

void FUN_10102a8b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  
  lVar6 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar6 + 0x1c0);
  uVar2 = *(undefined8 *)(lVar6 + 0x1b0);
  uVar4 = *(undefined8 *)(lVar6 + 0x1b8);
  uVar3 = *(undefined8 *)(lVar6 + 0x1a0);
  uVar5 = *(undefined8 *)(lVar6 + 0x1a8);
  *(undefined8 *)(lVar6 + 0x1d0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0x1c8));
  func_0x00010102e740(uVar3,uVar5,uVar2,uVar4);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10102a93c,0,0);
  return;
}



/* Entry: 10102a93c; end: 10102aaf7;  */

void FUN_10102a93c(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  lVar8 = *(long *)(unaff_x22 + 0x1d0);
  if (lVar8 == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
    lVar9 = *(long *)(unaff_x22 + 0x148);
    FUN_10102de24();
    puVar7 = &UNK_1103789c0;
    func_0x000107c613f8(&UNK_1103789c0,param_1,0,0);
    *param_1 = 2;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar7);
    func_0x00010102e740(uVar2,uVar4,uVar1,uVar3);
    func_0x000107c61170(uVar10);
  }
  else {
    lVar9 = *(long *)(unaff_x22 + 0x120);
    func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0xe8,0,0);
    puVar5 = (undefined1 *)(lVar9 + 0x10);
    func_0x000107c61618();
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
    lVar9 = *(long *)(unaff_x22 + 0x148);
    if (puVar5 == (undefined1 *)0x0) {
      FUN_10102de24();
      puVar7 = &UNK_1103789c0;
      func_0x000107c613f8(&UNK_1103789c0,puVar5,0,0);
      *puVar5 = 0;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar7);
      func_0x000107c61170(lVar8);
      func_0x00010102e740(uVar2,uVar4,uVar1,uVar3);
      func_0x000107c61170(uVar10);
    }
    else {
      lVar6 = lVar8;
      FUN_10102b328(uVar1,uVar3);
      func_0x000107c61170(puVar5);
      *(long *)(unaff_x22 + 0x108) = lVar6;
      func_0x000100b60084(unaff_x22 + 0x108);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(lVar8);
      func_0x00010102e740(uVar2,uVar4,uVar1,uVar3);
      lVar9 = lVar6;
    }
  }
  func_0x000107c61170(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010102aaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10102aaf8; end: 10102ab13;  */

void FUN_10102aaf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10102ab14,0,0);
  return;
}



/* Entry: 10102ab14; end: 10102ac23;  */

void FUN_10102ab14(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int *piVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
  puVar2 = &UNK_1103785b0;
  func_0x000107c613fc(&UNK_1103785b0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar7);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  *(undefined **)(unaff_x22 + 0x28) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  uVar3 = 0x112d36838;
  func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
  pcVar4 = FUN_10102e620;
  func_0x00010488bc98(FUN_10102e620,unaff_x22 + 0x10,uVar3);
  *(code **)(unaff_x22 + 0x60) = pcVar4;
  func_0x000107c61574(puVar2);
  *(code **)(unaff_x22 + 0x38) = pcVar4;
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar5;
  uVar3 = 0x112d55a38;
  func_0x0001000285a8(0x112d55a38,&UNK_10d91ca18);
  lVar6 = 0x112d55a40;
  FUN_10102e764(0x112d55a40,0x112d55a38,&UNK_10d91ca18);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10102ac24;
  plVar5[3] = unaff_x22 + 0x40;
  uVar12 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar6,uVar3,&UNK_10e821f58,&UNK_10e821f60);
  uVar7 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar8 = 0;
  __ss6ResultOMa(0,uVar12,uVar7,PTR___ss5ErrorWS_11034ee10);
  plVar5[4] = lVar8;
  uVar9 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[5] = uVar9;
  piVar11 = *(int **)(lVar6 + 0x10);
  iVar1 = *piVar11;
  plVar10 = (long *)(ulong)(uint)piVar11[1];
  _swift_task_alloc();
  plVar5[6] = (long)plVar10;
  *plVar10 = (long)plVar5;
  plVar10[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar11))(plVar10,uVar9,uVar3,lVar6);
  return;
}



/* Entry: 10102ac24; end: 10102aceb;  */

void FUN_10102ac24(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
  if (unaff_x20 == 0) {
    uVar1 = 0x10102ac84;
  }
  else {
    func_0x000107c614ac();
    uVar1 = 0x10102acb8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 10102acec; end: 10102ad03;  */

void FUN_10102acec(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10102ad04,0,0);
  return;
}



/* Entry: 10102ad04; end: 10102ae07;  */

void FUN_10102ad04(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar2 = &UNK_1103785b0;
  func_0x000107c613fc(&UNK_1103785b0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar11);
  uVar11 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  uVar3 = 0x10102e75c;
  func_0x00010488bc98(0x10102e75c,puVar2,uVar11);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  func_0x000107c61574(puVar2);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  plVar4 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar4;
  uVar11 = 0x112d55a60;
  func_0x0001000285a8(0x112d55a60,&UNK_10d91ca60);
  lVar5 = 0x112d55a68;
  FUN_10102e764(0x112d55a68,0x112d55a60,&UNK_10d91ca60);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10102ae08;
  plVar4[3] = unaff_x22 + 0x10;
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar5,uVar11,&UNK_10e821f58,&UNK_10e821f60);
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar7 = 0;
  __ss6ResultOMa(0,uVar6,uVar3,PTR___ss5ErrorWS_11034ee10);
  plVar4[4] = lVar7;
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[5] = uVar8;
  piVar10 = *(int **)(lVar5 + 0x10);
  iVar1 = *piVar10;
  plVar9 = (long *)(ulong)(uint)piVar10[1];
  _swift_task_alloc();
  plVar4[6] = (long)plVar9;
  *plVar9 = (long)plVar4;
  plVar9[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(plVar9,uVar8,uVar11,lVar5);
  return;
}



/* Entry: 10102ae08; end: 10102aed3;  */

void FUN_10102ae08(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x38));
  if (unaff_x20 == 0) {
    uVar1 = 0x10102ae68;
  }
  else {
    func_0x000107c614ac();
    uVar1 = 0x10102ae9c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 10102aed4; end: 10102b11b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10102aed4(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar6 = _DAT_11302bad8;
  ppuVar3 = &puStack_70;
  lVar8 = *(long *)(unaff_x20 + _DAT_112d55970);
  uVar7 = *(ulong *)(lVar8 + _DAT_11302bad8);
  puVar2 = &UNK_110378650;
  func_0x000107c613fc(&UNK_110378650,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uStack_50 = 0x10102df00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100ff0b04;
  puStack_58 = &UNK_110378668;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c615f0(uVar7);
  func_0x000107c61574(puVar2);
  uVar5 = uVar7;
  func_0x000107c4e91c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uVar7);
  if (uVar5 != 0) {
    uVar4 = 0;
    FUN_10102e830(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar7 = uVar5;
    func_0x000107c5fc54(uVar5,uVar4);
    func_0x000107c61170(uVar5);
    if (uVar7 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar5 = uVar7;
      }
      func_0x000107c60480();
    }
    if (uVar5 == 0) {
      func_0x000107c6142c(uVar7);
    }
    else {
      if ((uVar7 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10102b11c);
          (*pcVar1)();
        }
        uVar4 = *(undefined8 *)(uVar7 + 0x20);
        func_0x000107c61174(uVar4);
      }
      else {
        uVar4 = 0;
        FUN_10102df74(0,uVar7,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
      }
      func_0x000107c6142c(uVar7);
      lVar6 = *(long *)(lVar8 + lVar6);
      func_0x000107c4e924();
      func_0x000107c61180();
      if (lVar6 != 0) {
        lVar8 = lVar6;
        func_0x000107c4c930();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        if (lVar8 != 0) {
          lVar6 = lVar8;
          func_0x000107c4c9e8();
          func_0x000107c61180();
          if (lVar6 != 0) {
            func_0x000107c61170();
            func_0x000107c61170(lVar8);
            func_0x000107c61170(uVar4);
            return 1;
          }
          lVar6 = lVar8;
          func_0x000107c4c9ec();
          func_0x000107c61180();
          func_0x000107c61170(lVar8);
          func_0x000107c61170(uVar4);
          if (lVar6 == 0) {
            return 0;
          }
          func_0x000107c61170(lVar6);
          return 2;
        }
      }
      func_0x000107c61170(uVar4);
    }
  }
  return 0;
}



/* Entry: 10102b11c; end: 10102b13f;  */

void FUN_10102b11c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x3d) = param_4;
  *(undefined4 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10102b140,0,0);
  return;
}



/* Entry: 10102b140; end: 10102b25f;  */

void FUN_10102b140(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  int *piVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x3d);
  uVar2 = *(undefined4 *)(unaff_x22 + 0x78);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
  puVar4 = &UNK_1103785b0;
  func_0x000107c613fc(&UNK_1103785b0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,uVar9);
  *(undefined **)(unaff_x22 + 0x20) = puVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  *(undefined4 *)(unaff_x22 + 0x38) = uVar2;
  *(undefined1 *)(unaff_x22 + 0x3c) = uVar3;
  uVar5 = 0x112d55a10;
  func_0x0001000285a8(0x112d55a10,&UNK_10d91c9d8);
  pcVar6 = FUN_10102dee4;
  func_0x00010488bc98(FUN_10102dee4,unaff_x22 + 0x10,uVar5);
  *(code **)(unaff_x22 + 0x68) = pcVar6;
  func_0x000107c61574(puVar4);
  *(code **)(unaff_x22 + 0x40) = pcVar6;
  plVar7 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar7;
  uVar5 = 0x112d55a18;
  func_0x0001000285a8(0x112d55a18,&UNK_10d91c9e0);
  lVar8 = 0x112d55a20;
  FUN_10102e764(0x112d55a20,0x112d55a18,&UNK_10d91c9e0);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10102b260;
  plVar7[3] = unaff_x22 + 0x48;
  uVar14 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar8,uVar5,&UNK_10e821f58,&UNK_10e821f60);
  uVar9 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar10 = 0;
  __ss6ResultOMa(0,uVar14,uVar9,PTR___ss5ErrorWS_11034ee10);
  plVar7[4] = lVar10;
  uVar11 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[5] = uVar11;
  piVar13 = *(int **)(lVar8 + 0x10);
  iVar1 = *piVar13;
  plVar12 = (long *)(ulong)(uint)piVar13[1];
  _swift_task_alloc();
  plVar7[6] = (long)plVar12;
  *plVar12 = (long)plVar7;
  plVar12[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar13))(plVar12,uVar11,uVar5,lVar8);
  return;
}



/* Entry: 10102b260; end: 10102b327;  */

void FUN_10102b260(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x70));
  if (unaff_x20 == 0) {
    uVar1 = 0x10102b2c0;
  }
  else {
    func_0x000107c614ac();
    uVar1 = 0x10102b2f4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 10102b328; end: 10102b4af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10102b328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126a6208;
  func_0x000107c610f8(PTR_PTR_1126a6208);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126a6210;
  func_0x000107c610f8(PTR_PTR_1126a6210);
  func_0x000107c495f8(param_1,param_2);
  func_0x000107c532b4(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126b0cc0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = *(long *)(unaff_x20 + _DAT_112d559a8);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c4f560();
    func_0x000107c61180();
  }
  func_0x000107c55900(puVar2);
  func_0x000107c61170(lVar3);
  puVar4 = puVar2;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c61170(puVar2);
  }
  else {
    puVar5 = puVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar4);
    puVar4 = PTR_PTR_1126b3800;
    func_0x000107c610f8(PTR_PTR_1126b3800);
    func_0x00010006c00c(puVar5,param_4);
    puVar6 = puVar5;
    func_0x000107c5ee20(puVar5,param_4);
    func_0x000107c45ae0(puVar4);
    func_0x000107c61170(puVar6);
    func_0x00010006c090(puVar5,param_4);
    func_0x000107c55918(puVar1);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
    func_0x00010006c090(puVar5,param_4);
  }
  return puVar1;
}



/* Entry: 10102b4b0; end: 10102b68b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102b4b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  puVar1 = PTR_PTR_1126bcf20;
  func_0x000107c610f8(PTR_PTR_1126bcf20);
  func_0x000107c453e4();
  func_0x000107c56438();
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar6 = *(long *)(param_3 + _DAT_112d55970);
    func_0x000107c61174();
    func_0x000107c61170(param_3);
    puVar7 = *(undefined **)(lVar6 + _DAT_11302bad8);
    func_0x000107c615f0(puVar7);
    func_0x000107c61170(lVar6);
    puVar2 = puVar7;
    func_0x000107c4ca08();
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar7;
      func_0x000107c4ca6c(puVar7);
      func_0x000107c61180();
      puVar4 = &UNK_1103786c8;
      func_0x000107c613fc(&UNK_1103786c8,0x28,7);
      *(undefined8 *)(puVar4 + 0x10) = param_1;
      *(undefined **)(puVar4 + 0x18) = puVar2;
      *(undefined8 *)(puVar4 + 0x20) = param_4;
      uStack_78 = 0x10102e62c;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      uStack_88 = 0x10102ec58;
      puStack_80 = &UNK_1103786e0;
      ppuVar5 = &puStack_98;
      puStack_70 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar4 = puStack_70;
      func_0x000107c61174(param_4);
      func_0x000107c6157c(param_1);
      func_0x000107c61174(puVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c5dc64(puVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(puVar7);
      func_0x000107c61170(puVar2);
      puVar1 = puVar3;
      goto LAB_10102b66c;
    }
    func_0x000107c615e8(puVar7);
  }
  puStack_98 = (undefined *)0x0;
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  func_0x00010488e5d4(&puStack_98);
LAB_10102b66c:
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10102b68c; end: 10102ba0f;  */

void FUN_10102b68c(long param_1,long param_2,undefined8 param_3,int param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long extraout_x8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_a0;
  ulong uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)&puStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c4e430();
    func_0x000107c61180();
    if (lVar3 != 0) {
      if (param_2 == 0) {
        func_0x000107c4ca5c();
        if (param_4 == 3) {
          func_0x000107c61170(lVar3);
          if (param_5 != 0) {
            func_0x000107c4c0a8(param_5);
            func_0x000107c60a40(&puStack_a0);
            func_0x000107c5edb4(lVar9,param_1);
            puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
            func_0x000107c610f8(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
            puVar5 = puVar4;
            func_0x000107c5ed90();
            func_0x000107c48fd4(puVar4);
            func_0x000107c61170(puVar5);
            (**(code **)(lVar11 + 8))(lVar9,lVar1);
            puVar5 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
            func_0x000107c610f8();
            func_0x000107c457a0();
            func_0x000107c52860();
            puVar10 = *(undefined **)PTR__kCMTimeZero_110348670;
            uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
            uStack_98 = *(ulong *)(PTR__kCMTimeZero_110348670 + 8);
            uVar12 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
            puStack_a0 = puVar10;
            pcStack_90 = (code *)uVar12;
            func_0x000107c57e18(puVar5);
            puVar6 = puVar5;
            puStack_a0 = puVar10;
            uStack_98 = uVar7;
            pcStack_90 = (code *)uVar12;
            func_0x000107c57e14();
            FUN_100f95ddc();
            func_0x000107c613fc();
            *(undefined8 *)(puVar6 + 0x18) = 3;
            *(undefined8 *)(puVar6 + 0x10) = 1;
            puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            func_0x000107c61168();
            func_0x000107c5dc5c();
            func_0x000107c61180();
            *(undefined **)(puVar6 + 0x20) = puVar10;
            uVar7 = 0;
            FUN_10102e830(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
            puVar10 = puVar6;
            func_0x000107c5fc48(puVar6,uVar7);
            func_0x000107c61574(puVar6);
            pcStack_80 = FUN_10102e638;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            pcStack_90 = FUN_100f728b4;
            puStack_88 = &UNK_110378708;
            ppuVar8 = &puStack_a0;
            uStack_78 = param_3;
            func_0x000107c60bc4(ppuVar8);
            uVar7 = uStack_78;
            func_0x000107c6157c(param_3);
            func_0x000107c61574(uVar7);
            func_0x000107c43d9c(puVar5);
            func_0x000107c60bd0(ppuVar8);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar10);
            return;
          }
        }
        else {
          if (param_4 == 2) {
            puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
            func_0x000107c610f8();
            func_0x000107c46110();
            func_0x000107c61170(lVar3);
            uStack_98 = uStack_98 & 0xffffffffffffff00;
            puStack_a0 = puVar4;
            func_0x000107c61174(puVar4);
            func_0x00010488e5d4(&puStack_a0);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar4);
            return;
          }
          func_0x000107c61170(lVar3);
        }
        puStack_a0 = (undefined *)0x0;
        uStack_98 = uStack_98 & 0xffffffffffffff00;
        func_0x00010488e5d4(&puStack_a0);
        func_0x000107c61170(lVar2);
        return;
      }
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
    }
    func_0x000107c61170(lVar2);
  }
  puStack_a0 = (undefined *)0x0;
  uStack_98 = uStack_98 & 0xffffffffffffff00;
  func_0x00010488e5d4(&puStack_a0);
  return;
}



/* Entry: 10102ba10; end: 10102baab;  */

void FUN_10102ba10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long in_stack_00000000;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  if ((param_4 == 0) || (in_stack_00000000 != 0)) {
    puStack_40 = (undefined *)0x0;
    uStack_38 = 0;
    func_0x00010488e5d4(&puStack_40);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c61174(param_4);
    func_0x000107c45af0(puVar1,param_2,param_4);
    uStack_38 = 0;
    puStack_40 = puVar1;
    func_0x00010488e5d4(&puStack_40);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 10102baac; end: 10102bd0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102baac(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar7 = *(long *)(param_2 + _DAT_112d55978);
    func_0x000107c61174();
    func_0x000107c61170(param_2);
    lVar1 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126b08b0;
      func_0x000107c61168(PTR_PTR_1126b08b0);
      func_0x000107c3f71c();
      func_0x000107c61180();
      lVar7 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      uVar6 = 0x30;
      func_0x000107c613fc();
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      ppuVar3 = &PTR____CFConstantStringClassReference_110db9e38;
      func_0x000107c5faec();
      *(undefined ***)(lVar7 + 0x20) = ppuVar3;
      *(undefined8 *)(lVar7 + 0x28) = uVar6;
      puVar4 = PTR_PTR_1126b17d8;
      func_0x000107c610f8();
      func_0x000107c61174(puVar2);
      lVar5 = lVar7;
      func_0x000107c5fc48(lVar7,PTR___sSSN_11034da80);
      func_0x000107c61574(lVar7);
      func_0x000107c460ec();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar5);
      if (puVar4 != (undefined *)0x0) {
        pcStack_78 = FUN_10102e7a8;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        pcStack_88 = FUN_100f17d9c;
        puStack_80 = &UNK_110378780;
        ppuVar3 = &puStack_98;
        uStack_70 = param_1;
        func_0x000107c60bc4(ppuVar3);
        uVar6 = uStack_70;
        func_0x000107c61174(puVar4);
        func_0x000107c6157c(param_1);
        func_0x000107c61574(uVar6);
        func_0x000107c5078c(lVar1);
        func_0x000107c61180();
        func_0x000107c615e8();
        func_0x000107c60bd0(ppuVar3);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar4);
        return;
      }
      puStack_98 = (undefined *)0x0;
      uStack_90 = 0;
      pcStack_88 = (code *)((ulong)pcStack_88 & 0xffffffffffffff00);
      func_0x00010488e5d4(&puStack_98);
      func_0x000107c61170(puVar2);
      func_0x000107c615e8(lVar1);
      return;
    }
  }
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0;
  pcStack_88 = (code *)((ulong)pcStack_88 & 0xffffffffffffff00);
  func_0x00010488e5d4(&puStack_98);
  return;
}



/* Entry: 10102bd10; end: 10102bdb7;  */

void FUN_10102bd10(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_1;
  func_0x000107c44314();
  if (lVar1 == 0) {
    func_0x000107c4407c();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar1 = 0;
      param_2 = 0;
    }
    else {
      lVar1 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    uStack_38 = 0;
    lStack_48 = lVar1;
    uStack_40 = param_2;
    func_0x000107c61434(param_2);
    func_0x00010488e5d4(&lStack_48);
    func_0x000107c61430(param_2,2);
  }
  else {
    lStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x00010488e5d4(&lStack_48);
  }
  return;
}



/* Entry: 10102bdb8; end: 10102bf9b;  */

/* WARNING: Removing unreachable block (ram,0x00010102bf94) */
/* WARNING: Removing unreachable block (ram,0x00010102bf98) */
/* WARNING: Removing unreachable block (ram,0x00010102bf90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102bdb8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [24];
  
  ppuVar3 = &puStack_c0;
  func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    uStack_b8 = 0xf000000000000000;
    puStack_c0 = (undefined *)0x0;
    pcStack_b0 = (code *)0x0;
    puStack_a8 = (undefined *)0x0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    func_0x00010488e5d4(&puStack_c0);
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + _DAT_112d559b0);
    func_0x000107c61174(uVar4);
    func_0x000107c61170(param_3);
    puVar2 = PTR_PTR_1126dbce8;
    func_0x000107c61168(PTR_PTR_1126dbce8);
    func_0x000107c5fadc(param_6,param_7);
    uStack_a0 = 0x10102e754;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    pcStack_b0 = FUN_10102c020;
    puStack_a8 = &UNK_110378758;
    uStack_98 = param_2;
    func_0x000107c60bc4(&puStack_c0);
    uVar1 = uStack_98;
    func_0x000107c61174(uVar4);
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
    func_0x000107c42d00(param_1,puVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 10102bf9c; end: 10102c01f;  */

void FUN_10102bf9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  if (param_4 >> 0x3c < 0xf) {
    uStack_40 = 0;
    uStack_60 = param_3;
    uStack_58 = param_4;
    uStack_50 = param_1;
    uStack_48 = param_2;
    func_0x00010006c00c();
    func_0x00010488e5d4(&uStack_60);
    func_0x0001000b44c0(param_3,param_4);
  }
  else {
    uStack_58 = 0xf000000000000000;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010488e5d4(&uStack_60);
  }
  return;
}



/* Entry: 10102c020; end: 10102c0bf;  */

void FUN_10102c020(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  pcVar1 = *(code **)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  if (param_4 == 0) {
    func_0x000107c6157c(uVar2);
    lVar4 = -0x1000000000000000;
  }
  else {
    lVar4 = param_4;
    func_0x000107c6157c(uVar2);
    lVar3 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar3);
  }
  (*pcVar1)(param_1,param_2,param_4,lVar4);
  func_0x0001000b44c0(param_4,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10102c0c0; end: 10102c243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102c0c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_98;
  ulong uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + _DAT_112d55980);
    func_0x000107c61174();
    func_0x000107c61170(param_2);
    lVar1 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar1 != 0) {
      func_0x000107c5ee20(param_3,param_4);
      puVar2 = &UNK_110378600;
      func_0x000107c613fc(&UNK_110378600,0x20,7);
      *(long *)(puVar2 + 0x10) = lVar1;
      *(undefined8 *)(puVar2 + 0x18) = param_1;
      uStack_78 = 0x10102def8;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      pcStack_88 = FUN_100f91b08;
      puStack_80 = &UNK_110378618;
      ppuVar3 = &puStack_98;
      puStack_70 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar2 = puStack_70;
      func_0x000107c615f0(lVar1);
      func_0x000107c6157c(param_1);
      func_0x000107c61574(puVar2);
      func_0x000107c40ba4(lVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_3);
      return;
    }
  }
  puStack_98 = (undefined *)0x0;
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  func_0x00010488e5d4(&puStack_98);
  return;
}



/* Entry: 10102c244; end: 10102c29b;  */

void FUN_10102c244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x000107c57bb4(param_3,param_2,param_2);
  uStack_28 = 0;
  uStack_30 = param_1;
  func_0x000107c61174(param_1);
  func_0x00010488e5d4(&uStack_30);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10102c29c; end: 10102c313;  */

/* WARNING: Possible PIC construction at 0x00010102c2f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010102c2fc) */

void FUN_10102c29c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10102c314; end: 10102c3b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10102c314(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126bcf20;
  func_0x000107c610f8(PTR_PTR_1126bcf20);
  func_0x000107c453e4();
  func_0x000107c56438();
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112d55970) + _DAT_11302bad8);
  func_0x000107c4ca08(lVar3,param_2,puVar2);
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61170(puVar2);
    bVar1 = false;
  }
  else {
    lVar4 = lVar3;
    func_0x000107c4ca5c();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar3);
    bVar1 = (int)lVar4 == 2;
  }
  return bVar1;
}



/* Entry: 10102c3b8; end: 10102c4b3;  */

undefined * FUN_10102c3b8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar4 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100c077e4(0,lVar4,0);
    puVar3 = PTR___sypN_11034f1a8;
    puVar2 = PTR___sSSN_11034da80;
    puVar6 = (undefined8 *)(param_1 + 0x28);
    puVar5 = puStack_58;
    do {
      uStack_88 = puVar6[-1];
      uStack_80 = *puVar6;
      func_0x000107c61434();
      func_0x000107c6147c(auStack_78,&uStack_88,puVar2,puVar3 + 8,7);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puStack_58 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_100c077e4(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = puStack_58;
      puVar6 = puVar6 + 2;
      *(ulong *)(puStack_58 + 0x10) = uVar1 + 1;
      func_0x000100102924(auStack_78,puStack_58 + uVar1 * 0x20 + 0x20);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return puVar5;
}



/* Entry: 10102c4b4; end: 10102c51b;  */

/* WARNING: Removing unreachable block (ram,0x00010102d0ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102c4b4(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  undefined1 *puVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined **ppuVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined1 *puVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long *unaff_x22;
  long *plVar28;
  long lVar29;
  int *piVar30;
  ulong uStack_188;
  undefined *puStack_180;
  long *plStack_170;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x1a] = param_3;
  unaff_x22[0x1b] = param_4;
  unaff_x22[0x19] = param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    UNRECOVERED_JUMPTABLE_00 = FUN_10102c51c;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = unaff_x22[0x19];
  func_0x000107c61428(lVar19 + 0x10,unaff_x22 + 2,0,0);
  lVar19 = lVar19 + 0x10;
  func_0x000107c61618();
  puVar21 = (undefined1 *)0x0;
  if (lVar19 == 0) {
LAB_10102c664:
    FUN_10102de24();
    puVar10 = &UNK_1103789c0;
    uVar18 = 0;
    func_0x000107c613f8(&UNK_1103789c0,puVar21,0);
    *puVar21 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar10);
LAB_10102c698:
    UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
                    /* WARNING: Could not recover jumptable at 0x00010102c6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else {
    puVar21 = *(undefined1 **)(lVar19 + _DAT_112d55990);
    func_0x000107c61174();
    func_0x000107c61170(lVar19);
    puVar4 = puVar21;
    func_0x000107c5c734();
    func_0x000107c61180();
    unaff_x22[0x1c] = (long)puVar4;
    func_0x000107c61170();
    if (puVar4 == (undefined1 *)0x0) goto LAB_10102c664;
    lVar19 = unaff_x22[0x19];
    uVar18 = 0;
    func_0x000107c61428(lVar19 + 0x10,unaff_x22 + 5,0);
    puVar21 = (undefined1 *)(lVar19 + 0x10);
    func_0x000107c61618();
    unaff_x22[0x1d] = (long)puVar21;
    if (puVar21 == (undefined1 *)0x0) {
      lVar19 = unaff_x22[0x1c];
      FUN_10102de24();
      puVar10 = &UNK_1103789c0;
      uVar18 = 0;
      func_0x000107c613f8(&UNK_1103789c0,puVar21,0);
      *puVar21 = 4;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar10);
      func_0x000107c615e8(lVar19);
      goto LAB_10102c698;
    }
    FUN_10102e830(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar19 = 0;
    func_0x000107c60110();
    unaff_x22[0x1e] = lVar19;
    UNRECOVERED_JUMPTABLE_00 = (code *)0x70;
    func_0x000107c615b8();
    unaff_x22[0x1f] = (long)UNRECOVERED_JUMPTABLE_00;
    *(long **)UNRECOVERED_JUMPTABLE_00 = unaff_x22;
    *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_10102c714;
    lVar22 = unaff_x22[0x1b];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
      *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x50) = lVar19;
      *(undefined1 **)(UNRECOVERED_JUMPTABLE_00 + 0x58) = puVar21;
      *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x48) = lVar22;
      UNRECOVERED_JUMPTABLE_00 = FUN_10102ab14;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = *unaff_x22;
  uVar27 = *(undefined8 *)(lVar20 + 0xf0);
  uVar25 = *(undefined8 *)(lVar20 + 0xe8);
  plVar28 = (long *)*unaff_x22;
  *(code **)(lVar20 + 0x100) = UNRECOVERED_JUMPTABLE_00;
  func_0x000107c615c0(*(undefined8 *)(lVar20 + 0xf8));
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar25);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    UNRECOVERED_JUMPTABLE_00 = FUN_10102c7ac;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)plVar28[0x20];
  if (plVar5 == (long *)0x0) {
    lVar22 = plVar28[0x1c];
    lVar20 = plVar28[0x1a];
    FUN_10102de24();
    puVar10 = &UNK_1103789c0;
    uVar18 = 0;
    func_0x000107c613f8(&UNK_1103789c0,plVar5,0);
    *(undefined1 *)plVar5 = 4;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar10);
    func_0x000107c615e8(lVar22);
    plVar14 = plVar5;
LAB_10102c99c:
    UNRECOVERED_JUMPTABLE_00 = (code *)plVar28[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010102c9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else {
    func_0x000107c45164();
    func_0x000107c61180();
    plVar28[0x21] = (long)plVar5;
    if (plVar5 == (long *)0x0) {
LAB_10102c93c:
      lVar22 = plVar28[0x20];
      lVar29 = plVar28[0x1c];
      lVar20 = plVar28[0x1a];
      plVar14 = (long *)0x112d38dd0;
      FUN_10102e830(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c600f0();
      plVar28[0x16] = (long)puVar10;
      func_0x000100b60084(plVar28 + 0x16);
      func_0x000107c615e8(lVar29);
      func_0x000107c61170(lVar22);
      func_0x000107c61170(puVar10);
      goto LAB_10102c99c;
    }
    lVar20 = plVar28[0x19];
    uVar18 = 0;
    func_0x000107c61428(lVar20 + 0x10,plVar28 + 8,0);
    lVar20 = lVar20 + 0x10;
    func_0x000107c61618();
    if (lVar20 == 0) {
      func_0x000107c61170(plVar5);
      goto LAB_10102c93c;
    }
    lVar22 = plVar28[0x19];
    uVar27 = *(undefined8 *)(lVar20 + _DAT_112d55988);
    func_0x000107c6157c(uVar27);
    func_0x000107c61170(lVar20);
    func_0x0001000d224c(plVar28 + 0x14);
    func_0x000107c61574(uVar27);
    lVar20 = plVar28[0x14];
    lVar29 = plVar28[0x15];
    plVar28[0x22] = lVar20;
    plVar14 = plVar28 + 0xb;
    uVar18 = 0;
    func_0x000107c61428(lVar22 + 0x10,plVar14,0);
    lVar22 = lVar22 + 0x10;
    func_0x000107c61618();
    if (lVar22 == 0) {
LAB_10102c9e4:
      uVar27 = 0xce;
    }
    else {
      lVar23 = *(long *)(lVar22 + _DAT_112d55970);
      func_0x000107c61174();
      func_0x000107c61170(lVar22);
      lVar22 = *(long *)(lVar23 + _DAT_11302baa8);
      func_0x000107c61170(lVar23);
      if (((0x39 < lVar22 - 0xcU || (1L << (lVar22 - 0xcU & 0x3f) & 0x22000400800001bU) == 0) &&
          (lVar22 != 0x5a)) && (lVar22 != 0x51)) goto LAB_10102c9e4;
      uVar27 = 0x7f;
    }
    lVar22 = lVar20;
    func_0x000107c614f0();
    piVar30 = *(int **)(lVar29 + 0x10);
    iVar2 = *piVar30;
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulong)(uint)piVar30[1];
    func_0x000107c615b8();
    plVar28[0x23] = (long)UNRECOVERED_JUMPTABLE_00;
    *(long **)UNRECOVERED_JUMPTABLE_00 = plVar28;
    *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_10102ca68;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010102ca60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar2 + (long)piVar30))(plVar5,2,uVar27,lVar22,lVar29);
      return;
    }
  }
  func_0x000107c60e78();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = *plVar28;
  lVar29 = *plVar28;
  *(code **)(lVar22 + 0x120) = UNRECOVERED_JUMPTABLE_00;
  func_0x000107c615c0(*(undefined8 *)(lVar22 + 0x118));
  uVar27 = *(undefined8 *)(lVar22 + 0x110);
  if (lVar20 == 0) {
    func_0x000107c615e8(uVar27);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
      UNRECOVERED_JUMPTABLE_00 = FUN_10102cb30;
      goto LAB_107c615e0;
    }
  }
  else {
    func_0x000107c614ac(lVar20);
    func_0x000107c615e8(uVar27);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
      UNRECOVERED_JUMPTABLE_00 = FUN_10102d0bc;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = *(long **)(lVar29 + 0x120);
  plVar28 = (long *)((ulong)plVar5 >> 0x3e);
  if (plVar28 == (long *)0x0) {
    plVar6 = (long *)((long *)((ulong)plVar5 & 0xffffffffffffff8))[2];
  }
  else {
    plVar6 = (long *)((ulong)plVar5 & 0xffffffffffffff8);
    if (((ulong)plVar5 & 0x8000000000000000) != 0) {
      plVar6 = plVar5;
    }
    func_0x000107c60480();
  }
  if (plVar6 == (long *)0x0) {
    uVar27 = *(undefined8 *)(lVar29 + 0x108);
    func_0x000107c6142c(*(undefined8 *)(lVar29 + 0x120));
    func_0x000107c61170(uVar27);
    uVar27 = *(undefined8 *)(lVar29 + 0x100);
    uVar25 = *(undefined8 *)(lVar29 + 0xe0);
    FUN_10102e830(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
    *(undefined **)(lVar29 + 0xb0) = puVar13;
    func_0x000100b60084(lVar29 + 0xb0);
    func_0x000107c615e8(uVar25);
    func_0x000107c61170(uVar27);
  }
  else {
    plVar1 = plVar6;
    if (2 < (long)plVar6) {
      plVar1 = (long *)0x3;
    }
    plStack_170 = (long *)0x3;
    if (-1 < (long)plVar6) {
      plStack_170 = plVar1;
    }
    if (plVar28 == (long *)0x0) {
      uVar7 = *(ulong *)(((ulong)plVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = (ulong)plVar5 & 0xffffffffffffff8;
      if (((ulong)plVar5 & 0x8000000000000000) != 0) {
        uVar7 = *(ulong *)(lVar29 + 0x120);
      }
      uVar8 = uVar7;
      func_0x000107c60480();
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x10102d0b8);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      func_0x000107c60480();
    }
    if ((long)uVar7 < (long)plStack_170) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x10102d0b4);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    if (((ulong)plVar5 & 0xc000000000000001) == 0) {
      func_0x000107c61434(*(undefined8 *)(lVar29 + 0x120));
      func_0x000107c6142c();
      if (plVar28 != (long *)0x0) goto LAB_10102ce5c;
LAB_10102cc3c:
      uStack_188 = (ulong)plVar5 & 0xffffffffffffff8;
      bVar3 = plVar28 != plStack_170;
      plVar5 = plStack_170;
      plStack_170 = (long *)(uStack_188 + 0x20);
      if (bVar3) {
LAB_10102cc54:
        puStack_180 = PTR___swiftEmptyArrayStorage_11034f1c8;
        plVar6 = plVar28;
LAB_10102cc70:
        if ((long)plVar6 < (long)plVar28) {
LAB_10102cfe8:
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x10102cfec);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        plVar1 = plVar6;
        if ((long)plVar6 <= (long)plVar5) {
          plVar1 = plVar5;
        }
        do {
          if (plVar1 == plVar6) goto LAB_10102cfe8;
          lVar22 = plStack_170[(long)plVar6];
          func_0x000107c61174();
          lVar20 = lVar22;
          func_0x000107c60bb8();
          func_0x000107c61180();
          if (lVar20 != 0) {
            lVar23 = lVar20;
            func_0x000107c5ee30();
            func_0x000107c61170(lVar20);
            lVar20 = lVar23;
            plVar15 = plVar14;
            func_0x000107c5ee20();
            lVar9 = lVar20;
            func_0x00010011df08();
            func_0x000107c61180();
            plVar16 = plVar15;
            if (lVar9 == 0) {
              func_0x000107c5faec();
              plVar16 = plVar15;
              func_0x000107c5fadc();
              func_0x000107c6142c(plVar15);
            }
            uVar18 = *(ulong *)(lVar29 + 0xe0);
            *(undefined8 *)(lVar29 + 0xb8) = 0;
            param_6 = lVar29 + 0xb8;
            param_5 = 0xc;
            func_0x000107c5e908();
            func_0x000107c61180();
            func_0x000107c61170(lVar9);
            func_0x000107c61170(lVar20);
            lVar20 = *(long *)(lVar29 + 0xb8);
            uVar7 = uVar18;
            func_0x000107c5faec();
            func_0x000107c61174();
            func_0x00010006c090(lVar23);
            func_0x000107c61170(uVar18);
            uVar18 = uVar7 & 0xffffffffffff;
            if (((ulong)plVar16 & 0x2000000000000000) != 0) {
              uVar18 = (ulong)plVar16 >> 0x38 & 0xf;
            }
            if (uVar18 != 0 && lVar20 == 0) goto LAB_10102cdc0;
            func_0x000107c6142c(plVar16);
            func_0x000107c61170(lVar20);
          }
          plVar6 = (long *)((long)plVar6 + 1);
          func_0x000107c61170(lVar22);
          if (plVar5 == plVar6) goto LAB_10102cea8;
        } while( true );
      }
    }
    else {
      func_0x000107c61434(*(undefined8 *)(lVar29 + 0x120));
      if (plStack_170 != (long *)0x0) {
        uVar27 = 0;
        FUN_10102e830(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
        plVar6 = (long *)0x0;
        do {
          plVar14 = *(long **)(lVar29 + 0x120);
          plVar1 = (long *)((long)plVar6 + 1);
          func_0x000107c60318(plVar6,plVar14,uVar27);
          plVar6 = plVar1;
        } while (plStack_170 != plVar1);
      }
      func_0x000107c6142c();
      if (plVar28 == (long *)0x0) goto LAB_10102cc3c;
LAB_10102ce5c:
      plVar6 = *(long **)(lVar29 + 0x120);
      plVar28 = (long *)((ulong)plVar5 & 0xffffffffffffff8);
      if (((ulong)plVar5 & 0x8000000000000000) != 0) {
        plVar28 = plVar6;
      }
      uStack_188 = 0;
      func_0x000107c60484();
      plVar14 = plStack_170;
      func_0x000107c6142c(plVar6);
      plVar5 = (long *)(uVar18 >> 1);
      if (plVar28 != plVar5) goto LAB_10102cc54;
    }
    puStack_180 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_10102cea8:
    lVar20 = *(long *)(lVar29 + 200);
    func_0x000107c615e8(uStack_188);
    puVar10 = puStack_180;
    FUN_10102c3b8(puStack_180);
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8();
    puVar11 = puVar10;
    func_0x000107c5fc48(puVar10,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar10);
    func_0x000107c45788();
    func_0x000107c61170(puVar11);
    *(undefined **)(lVar29 + 0xc0) = puVar13;
    func_0x000100b60084(lVar29 + 0xc0);
    func_0x000107c61170(puVar13);
    uVar18 = 0;
    func_0x000107c61428(lVar20 + 0x10,lVar29 + 0x70,0);
    puVar10 = (undefined *)(lVar20 + 0x10);
    func_0x000107c61618();
    lVar20 = _DAT_112d559b8;
    puVar13 = *(undefined **)(lVar29 + 0x100);
    uVar27 = *(undefined8 *)(lVar29 + 0x108);
    uVar25 = *(undefined8 *)(lVar29 + 0xe0);
    if (puVar10 == (undefined *)0x0) {
      func_0x000107c615e8(uVar25);
      func_0x000107c61170(uVar27);
      func_0x000107c6142c(puStack_180);
    }
    else {
      uVar26 = *(undefined8 *)(lVar29 + 0xd8);
      uVar18 = 0;
      func_0x000107c61428(puVar10 + _DAT_112d559b8,lVar29 + 0x88,0x21);
      uVar12 = *(undefined8 *)(puVar10 + lVar20);
      func_0x000107c61558(uVar12);
      uVar24 = *(undefined8 *)(puVar10 + lVar20);
      *(undefined8 *)(puVar10 + lVar20) = 0x8000000000000000;
      FUN_10102e130(puStack_180,uVar26,uVar12);
      *(undefined8 *)(puVar10 + lVar20) = uVar24;
      func_0x000107c614a8(lVar29 + 0x88);
      func_0x000107c615e8(uVar25);
      func_0x000107c61170(uVar27);
      func_0x000107c61170(puVar13);
      puVar13 = puVar10;
    }
  }
  func_0x000107c61170(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010102d0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar29 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61170(*(undefined8 *)(lVar29 + 0x108));
  uVar25 = *(undefined8 *)(lVar29 + 0x100);
  uVar12 = *(undefined8 *)(lVar29 + 0xe0);
  uVar27 = 0x112d38dd0;
  ppuVar17 = &PTR__OBJC_CLASS___NSArray_1126ae530;
  FUN_10102e830(0);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c600f0();
  *(undefined **)(lVar29 + 0xb0) = puVar10;
  func_0x000100b60084();
  func_0x000107c615e8(uVar12);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010102d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar29 + 8))();
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)(lVar29 + 0x78) = param_5;
  *(long *)(lVar29 + 0x80) = param_6;
  *(undefined ***)(lVar29 + 0x68) = ppuVar17;
  *(ulong *)(lVar29 + 0x70) = uVar18;
  *(undefined8 *)(lVar29 + 0x60) = uVar27;
  lVar19 = 0;
  func_0x000107c5ede0();
  *(long *)(lVar29 + 0x88) = lVar19;
  lVar19 = *(long *)(lVar19 + -8);
  *(long *)(lVar29 + 0x90) = lVar19;
  uVar18 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(lVar29 + 0x98) = uVar18;
  UNRECOVERED_JUMPTABLE_00 = FUN_10102d1f0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return;
LAB_10102cdc0:
  func_0x000107c61170(lVar22);
  puVar10 = puStack_180;
  func_0x000107c61558();
  if (((ulong)puVar10 & 1) == 0) {
    plVar14 = (long *)(*(long *)(puStack_180 + 0x10) + 1);
    puStack_180 = (undefined *)0x0;
    func_0x0001000d182c(0,plVar14,1);
  }
  uVar18 = *(ulong *)(puStack_180 + 0x10);
  plVar1 = (long *)(uVar18 + 1);
  if (*(ulong *)(puStack_180 + 0x18) >> 1 <= uVar18) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puStack_180 + 0x18));
    plVar14 = plVar1;
    func_0x0001000d182c(puVar10,plVar1,1,puStack_180);
    puStack_180 = puVar10;
  }
  *(long **)(puStack_180 + 0x10) = plVar1;
  *(ulong *)(puStack_180 + uVar18 * 0x10 + 0x20) = uVar7;
  *(long **)(puStack_180 + uVar18 * 0x10 + 0x28) = plVar16;
  bVar3 = (long *)((long)plVar5 + -1) == plVar6;
  plVar6 = (long *)((long)plVar6 + 1);
  if (bVar3) goto LAB_10102cea8;
  goto LAB_10102cc70;
}



/* Entry: 10102c51c; end: 10102c713;  */

/* WARNING: Removing unreachable block (ram,0x00010102d0ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102c51c(void)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  undefined1 *puVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined **ppuVar17;
  ulong uVar18;
  undefined8 in_x4;
  long in_x5;
  long lVar19;
  undefined1 *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  long *unaff_x22;
  long *plVar28;
  long lVar29;
  int *piVar30;
  ulong uStack_168;
  undefined *puStack_160;
  long *plStack_150;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = unaff_x22[0x19];
  func_0x000107c61428(lVar26 + 0x10,unaff_x22 + 2,0,0);
  lVar26 = lVar26 + 0x10;
  func_0x000107c61618();
  puVar20 = (undefined1 *)0x0;
  if (lVar26 == 0) {
LAB_10102c664:
    FUN_10102de24();
    puVar10 = &UNK_1103789c0;
    uVar18 = 0;
    func_0x000107c613f8(&UNK_1103789c0,puVar20,0);
    *puVar20 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar10);
LAB_10102c698:
    UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010102c6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else {
    puVar20 = *(undefined1 **)(lVar26 + _DAT_112d55990);
    func_0x000107c61174();
    func_0x000107c61170(lVar26);
    puVar4 = puVar20;
    func_0x000107c5c734();
    func_0x000107c61180();
    unaff_x22[0x1c] = (long)puVar4;
    func_0x000107c61170();
    if (puVar4 == (undefined1 *)0x0) goto LAB_10102c664;
    lVar26 = unaff_x22[0x19];
    uVar18 = 0;
    func_0x000107c61428(lVar26 + 0x10,unaff_x22 + 5,0);
    puVar20 = (undefined1 *)(lVar26 + 0x10);
    func_0x000107c61618();
    unaff_x22[0x1d] = (long)puVar20;
    if (puVar20 == (undefined1 *)0x0) {
      lVar26 = unaff_x22[0x1c];
      FUN_10102de24();
      puVar10 = &UNK_1103789c0;
      uVar18 = 0;
      func_0x000107c613f8(&UNK_1103789c0,puVar20,0);
      *puVar20 = 4;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar10);
      func_0x000107c615e8(lVar26);
      goto LAB_10102c698;
    }
    FUN_10102e830(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar26 = 0;
    func_0x000107c60110();
    unaff_x22[0x1e] = lVar26;
    UNRECOVERED_JUMPTABLE_00 = (code *)0x70;
    func_0x000107c615b8();
    unaff_x22[0x1f] = (long)UNRECOVERED_JUMPTABLE_00;
    *(long **)UNRECOVERED_JUMPTABLE_00 = unaff_x22;
    *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_10102c714;
    lVar21 = unaff_x22[0x1b];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
      *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x50) = lVar26;
      *(undefined1 **)(UNRECOVERED_JUMPTABLE_00 + 0x58) = puVar20;
      *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x48) = lVar21;
      UNRECOVERED_JUMPTABLE_00 = FUN_10102ab14;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = *unaff_x22;
  uVar27 = *(undefined8 *)(lVar19 + 0xf0);
  uVar24 = *(undefined8 *)(lVar19 + 0xe8);
  plVar28 = (long *)*unaff_x22;
  *(code **)(lVar19 + 0x100) = UNRECOVERED_JUMPTABLE_00;
  func_0x000107c615c0(*(undefined8 *)(lVar19 + 0xf8));
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar24);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
    UNRECOVERED_JUMPTABLE_00 = FUN_10102c7ac;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)plVar28[0x20];
  if (plVar5 == (long *)0x0) {
    lVar21 = plVar28[0x1c];
    lVar19 = plVar28[0x1a];
    FUN_10102de24();
    puVar10 = &UNK_1103789c0;
    uVar18 = 0;
    func_0x000107c613f8(&UNK_1103789c0,plVar5,0);
    *(undefined1 *)plVar5 = 4;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar10);
    func_0x000107c615e8(lVar21);
    plVar14 = plVar5;
LAB_10102c99c:
    UNRECOVERED_JUMPTABLE_00 = (code *)plVar28[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
                    /* WARNING: Could not recover jumptable at 0x00010102c9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else {
    func_0x000107c45164();
    func_0x000107c61180();
    plVar28[0x21] = (long)plVar5;
    if (plVar5 == (long *)0x0) {
LAB_10102c93c:
      lVar21 = plVar28[0x20];
      lVar29 = plVar28[0x1c];
      lVar19 = plVar28[0x1a];
      plVar14 = (long *)0x112d38dd0;
      FUN_10102e830(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c600f0();
      plVar28[0x16] = (long)puVar10;
      func_0x000100b60084(plVar28 + 0x16);
      func_0x000107c615e8(lVar29);
      func_0x000107c61170(lVar21);
      func_0x000107c61170(puVar10);
      goto LAB_10102c99c;
    }
    lVar19 = plVar28[0x19];
    uVar18 = 0;
    func_0x000107c61428(lVar19 + 0x10,plVar28 + 8,0);
    lVar19 = lVar19 + 0x10;
    func_0x000107c61618();
    if (lVar19 == 0) {
      func_0x000107c61170(plVar5);
      goto LAB_10102c93c;
    }
    lVar21 = plVar28[0x19];
    uVar27 = *(undefined8 *)(lVar19 + _DAT_112d55988);
    func_0x000107c6157c(uVar27);
    func_0x000107c61170(lVar19);
    func_0x0001000d224c(plVar28 + 0x14);
    func_0x000107c61574(uVar27);
    lVar19 = plVar28[0x14];
    lVar29 = plVar28[0x15];
    plVar28[0x22] = lVar19;
    plVar14 = plVar28 + 0xb;
    uVar18 = 0;
    func_0x000107c61428(lVar21 + 0x10,plVar14,0);
    lVar21 = lVar21 + 0x10;
    func_0x000107c61618();
    if (lVar21 == 0) {
LAB_10102c9e4:
      uVar27 = 0xce;
    }
    else {
      lVar22 = *(long *)(lVar21 + _DAT_112d55970);
      func_0x000107c61174();
      func_0x000107c61170(lVar21);
      lVar21 = *(long *)(lVar22 + _DAT_11302baa8);
      func_0x000107c61170(lVar22);
      if (((0x39 < lVar21 - 0xcU || (1L << (lVar21 - 0xcU & 0x3f) & 0x22000400800001bU) == 0) &&
          (lVar21 != 0x5a)) && (lVar21 != 0x51)) goto LAB_10102c9e4;
      uVar27 = 0x7f;
    }
    lVar21 = lVar19;
    func_0x000107c614f0();
    piVar30 = *(int **)(lVar29 + 0x10);
    iVar2 = *piVar30;
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulong)(uint)piVar30[1];
    func_0x000107c615b8();
    plVar28[0x23] = (long)UNRECOVERED_JUMPTABLE_00;
    *(long **)UNRECOVERED_JUMPTABLE_00 = plVar28;
    *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_10102ca68;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
                    /* WARNING: Could not recover jumptable at 0x00010102ca60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar2 + (long)piVar30))(plVar5,2,uVar27,lVar21,lVar29);
      return;
    }
  }
  func_0x000107c60e78();
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *plVar28;
  lVar29 = *plVar28;
  *(code **)(lVar21 + 0x120) = UNRECOVERED_JUMPTABLE_00;
  func_0x000107c615c0(*(undefined8 *)(lVar21 + 0x118));
  uVar27 = *(undefined8 *)(lVar21 + 0x110);
  if (lVar19 == 0) {
    func_0x000107c615e8(uVar27);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
      UNRECOVERED_JUMPTABLE_00 = FUN_10102cb30;
      goto LAB_107c615e0;
    }
  }
  else {
    func_0x000107c614ac(lVar19);
    func_0x000107c615e8(uVar27);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
      UNRECOVERED_JUMPTABLE_00 = FUN_10102d0bc;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = *(long **)(lVar29 + 0x120);
  plVar28 = (long *)((ulong)plVar5 >> 0x3e);
  if (plVar28 == (long *)0x0) {
    plVar6 = (long *)((long *)((ulong)plVar5 & 0xffffffffffffff8))[2];
  }
  else {
    plVar6 = (long *)((ulong)plVar5 & 0xffffffffffffff8);
    if (((ulong)plVar5 & 0x8000000000000000) != 0) {
      plVar6 = plVar5;
    }
    func_0x000107c60480();
  }
  if (plVar6 == (long *)0x0) {
    uVar27 = *(undefined8 *)(lVar29 + 0x108);
    func_0x000107c6142c(*(undefined8 *)(lVar29 + 0x120));
    func_0x000107c61170(uVar27);
    uVar27 = *(undefined8 *)(lVar29 + 0x100);
    uVar24 = *(undefined8 *)(lVar29 + 0xe0);
    FUN_10102e830(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
    *(undefined **)(lVar29 + 0xb0) = puVar13;
    func_0x000100b60084(lVar29 + 0xb0);
    func_0x000107c615e8(uVar24);
    func_0x000107c61170(uVar27);
  }
  else {
    plVar1 = plVar6;
    if (2 < (long)plVar6) {
      plVar1 = (long *)0x3;
    }
    plStack_150 = (long *)0x3;
    if (-1 < (long)plVar6) {
      plStack_150 = plVar1;
    }
    if (plVar28 == (long *)0x0) {
      uVar7 = *(ulong *)(((ulong)plVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = (ulong)plVar5 & 0xffffffffffffff8;
      if (((ulong)plVar5 & 0x8000000000000000) != 0) {
        uVar7 = *(ulong *)(lVar29 + 0x120);
      }
      uVar8 = uVar7;
      func_0x000107c60480();
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x10102d0b8);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      func_0x000107c60480();
    }
    if ((long)uVar7 < (long)plStack_150) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x10102d0b4);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    if (((ulong)plVar5 & 0xc000000000000001) == 0) {
      func_0x000107c61434(*(undefined8 *)(lVar29 + 0x120));
      func_0x000107c6142c();
      if (plVar28 != (long *)0x0) goto LAB_10102ce5c;
LAB_10102cc3c:
      uStack_168 = (ulong)plVar5 & 0xffffffffffffff8;
      bVar3 = plVar28 != plStack_150;
      plVar5 = plStack_150;
      plStack_150 = (long *)(uStack_168 + 0x20);
      if (bVar3) {
LAB_10102cc54:
        puStack_160 = PTR___swiftEmptyArrayStorage_11034f1c8;
        plVar6 = plVar28;
LAB_10102cc70:
        if ((long)plVar6 < (long)plVar28) {
LAB_10102cfe8:
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x10102cfec);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        plVar1 = plVar6;
        if ((long)plVar6 <= (long)plVar5) {
          plVar1 = plVar5;
        }
        do {
          if (plVar1 == plVar6) goto LAB_10102cfe8;
          lVar21 = plStack_150[(long)plVar6];
          func_0x000107c61174();
          lVar19 = lVar21;
          func_0x000107c60bb8();
          func_0x000107c61180();
          if (lVar19 != 0) {
            lVar22 = lVar19;
            func_0x000107c5ee30();
            func_0x000107c61170(lVar19);
            lVar19 = lVar22;
            plVar15 = plVar14;
            func_0x000107c5ee20();
            lVar9 = lVar19;
            func_0x00010011df08();
            func_0x000107c61180();
            plVar16 = plVar15;
            if (lVar9 == 0) {
              func_0x000107c5faec();
              plVar16 = plVar15;
              func_0x000107c5fadc();
              func_0x000107c6142c(plVar15);
            }
            uVar18 = *(ulong *)(lVar29 + 0xe0);
            *(undefined8 *)(lVar29 + 0xb8) = 0;
            in_x5 = lVar29 + 0xb8;
            in_x4 = 0xc;
            func_0x000107c5e908();
            func_0x000107c61180();
            func_0x000107c61170(lVar9);
            func_0x000107c61170(lVar19);
            lVar19 = *(long *)(lVar29 + 0xb8);
            uVar7 = uVar18;
            func_0x000107c5faec();
            func_0x000107c61174();
            func_0x00010006c090(lVar22);
            func_0x000107c61170(uVar18);
            uVar18 = uVar7 & 0xffffffffffff;
            if (((ulong)plVar16 & 0x2000000000000000) != 0) {
              uVar18 = (ulong)plVar16 >> 0x38 & 0xf;
            }
            if (uVar18 != 0 && lVar19 == 0) goto LAB_10102cdc0;
            func_0x000107c6142c(plVar16);
            func_0x000107c61170(lVar19);
          }
          plVar6 = (long *)((long)plVar6 + 1);
          func_0x000107c61170(lVar21);
          if (plVar5 == plVar6) goto LAB_10102cea8;
        } while( true );
      }
    }
    else {
      func_0x000107c61434(*(undefined8 *)(lVar29 + 0x120));
      if (plStack_150 != (long *)0x0) {
        uVar27 = 0;
        FUN_10102e830(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
        plVar6 = (long *)0x0;
        do {
          plVar14 = *(long **)(lVar29 + 0x120);
          plVar1 = (long *)((long)plVar6 + 1);
          func_0x000107c60318(plVar6,plVar14,uVar27);
          plVar6 = plVar1;
        } while (plStack_150 != plVar1);
      }
      func_0x000107c6142c();
      if (plVar28 == (long *)0x0) goto LAB_10102cc3c;
LAB_10102ce5c:
      plVar6 = *(long **)(lVar29 + 0x120);
      plVar28 = (long *)((ulong)plVar5 & 0xffffffffffffff8);
      if (((ulong)plVar5 & 0x8000000000000000) != 0) {
        plVar28 = plVar6;
      }
      uStack_168 = 0;
      func_0x000107c60484();
      plVar14 = plStack_150;
      func_0x000107c6142c(plVar6);
      plVar5 = (long *)(uVar18 >> 1);
      if (plVar28 != plVar5) goto LAB_10102cc54;
    }
    puStack_160 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_10102cea8:
    lVar19 = *(long *)(lVar29 + 200);
    func_0x000107c615e8(uStack_168);
    puVar10 = puStack_160;
    FUN_10102c3b8(puStack_160);
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8();
    puVar11 = puVar10;
    func_0x000107c5fc48(puVar10,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar10);
    func_0x000107c45788();
    func_0x000107c61170(puVar11);
    *(undefined **)(lVar29 + 0xc0) = puVar13;
    func_0x000100b60084(lVar29 + 0xc0);
    func_0x000107c61170(puVar13);
    uVar18 = 0;
    func_0x000107c61428(lVar19 + 0x10,lVar29 + 0x70,0);
    puVar10 = (undefined *)(lVar19 + 0x10);
    func_0x000107c61618();
    lVar19 = _DAT_112d559b8;
    puVar13 = *(undefined **)(lVar29 + 0x100);
    uVar27 = *(undefined8 *)(lVar29 + 0x108);
    uVar24 = *(undefined8 *)(lVar29 + 0xe0);
    if (puVar10 == (undefined *)0x0) {
      func_0x000107c615e8(uVar24);
      func_0x000107c61170(uVar27);
      func_0x000107c6142c(puStack_160);
    }
    else {
      uVar25 = *(undefined8 *)(lVar29 + 0xd8);
      uVar18 = 0;
      func_0x000107c61428(puVar10 + _DAT_112d559b8,lVar29 + 0x88,0x21);
      uVar12 = *(undefined8 *)(puVar10 + lVar19);
      func_0x000107c61558(uVar12);
      uVar23 = *(undefined8 *)(puVar10 + lVar19);
      *(undefined8 *)(puVar10 + lVar19) = 0x8000000000000000;
      FUN_10102e130(puStack_160,uVar25,uVar12);
      *(undefined8 *)(puVar10 + lVar19) = uVar23;
      func_0x000107c614a8(lVar29 + 0x88);
      func_0x000107c615e8(uVar24);
      func_0x000107c61170(uVar27);
      func_0x000107c61170(puVar13);
      puVar13 = puVar10;
    }
  }
  func_0x000107c61170(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
                    /* WARNING: Could not recover jumptable at 0x00010102d0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar29 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61170(*(undefined8 *)(lVar29 + 0x108));
  uVar24 = *(undefined8 *)(lVar29 + 0x100);
  uVar12 = *(undefined8 *)(lVar29 + 0xe0);
  uVar27 = 0x112d38dd0;
  ppuVar17 = &PTR__OBJC_CLASS___NSArray_1126ae530;
  FUN_10102e830(0);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c600f0();
  *(undefined **)(lVar29 + 0xb0) = puVar10;
  func_0x000100b60084();
  func_0x000107c615e8(uVar12);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
                    /* WARNING: Could not recover jumptable at 0x00010102d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar29 + 8))();
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)(lVar29 + 0x78) = in_x4;
  *(long *)(lVar29 + 0x80) = in_x5;
  *(undefined ***)(lVar29 + 0x68) = ppuVar17;
  *(ulong *)(lVar29 + 0x70) = uVar18;
  *(undefined8 *)(lVar29 + 0x60) = uVar27;
  lVar26 = 0;
  func_0x000107c5ede0();
  *(long *)(lVar29 + 0x88) = lVar26;
  lVar26 = *(long *)(lVar26 + -8);
  *(long *)(lVar29 + 0x90) = lVar26;
  uVar18 = *(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(lVar29 + 0x98) = uVar18;
  UNRECOVERED_JUMPTABLE_00 = FUN_10102d1f0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return;
LAB_10102cdc0:
  func_0x000107c61170(lVar21);
  puVar10 = puStack_160;
  func_0x000107c61558();
  if (((ulong)puVar10 & 1) == 0) {
    plVar14 = (long *)(*(long *)(puStack_160 + 0x10) + 1);
    puStack_160 = (undefined *)0x0;
    func_0x0001000d182c(0,plVar14,1);
  }
  uVar18 = *(ulong *)(puStack_160 + 0x10);
  plVar1 = (long *)(uVar18 + 1);
  if (*(ulong *)(puStack_160 + 0x18) >> 1 <= uVar18) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puStack_160 + 0x18));
    plVar14 = plVar1;
    func_0x0001000d182c(puVar10,plVar1,1,puStack_160);
    puStack_160 = puVar10;
  }
  *(long **)(puStack_160 + 0x10) = plVar1;
  *(ulong *)(puStack_160 + uVar18 * 0x10 + 0x20) = uVar7;
  *(long **)(puStack_160 + uVar18 * 0x10 + 0x28) = plVar16;
  bVar3 = (long *)((long)plVar5 + -1) == plVar6;
  plVar6 = (long *)((long)plVar6 + 1);
  if (bVar3) goto LAB_10102cea8;
  goto LAB_10102cc70;
}



/* Entry: 10102c714; end: 10102c7ab;  */

/* WARNING: Removing unreachable block (ram,0x00010102d0ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102c714(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *unaff_x22;
  long *plVar24;
  long lVar25;
  long lVar26;
  int *piVar27;
  ulong uStack_138;
  undefined *puStack_130;
  long *plStack_120;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = *unaff_x22;
  uVar23 = *(undefined8 *)(lVar20 + 0xf0);
  uVar21 = *(undefined8 *)(lVar20 + 0xe8);
  plVar24 = (long *)*unaff_x22;
  *(undefined8 *)(lVar20 + 0x100) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar20 + 0xf8));
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar21);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    UNRECOVERED_JUMPTABLE = FUN_10102c7ac;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)plVar24[0x20];
  if (plVar4 == (long *)0x0) {
    lVar26 = plVar24[0x1c];
    lVar20 = plVar24[0x1a];
    FUN_10102de24();
    puVar9 = &UNK_1103789c0;
    param_4 = 0;
    func_0x000107c613f8(&UNK_1103789c0,plVar4,0);
    *(undefined1 *)plVar4 = 4;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar9);
    func_0x000107c615e8(lVar26);
    plVar13 = plVar4;
LAB_10102c99c:
    UNRECOVERED_JUMPTABLE = (code *)plVar24[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010102c9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    func_0x000107c45164();
    func_0x000107c61180();
    plVar24[0x21] = (long)plVar4;
    if (plVar4 == (long *)0x0) {
LAB_10102c93c:
      lVar26 = plVar24[0x20];
      lVar25 = plVar24[0x1c];
      lVar20 = plVar24[0x1a];
      plVar13 = (long *)0x112d38dd0;
      FUN_10102e830(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c600f0();
      plVar24[0x16] = (long)puVar9;
      func_0x000100b60084(plVar24 + 0x16);
      func_0x000107c615e8(lVar25);
      func_0x000107c61170(lVar26);
      func_0x000107c61170(puVar9);
      goto LAB_10102c99c;
    }
    lVar20 = plVar24[0x19];
    param_4 = 0;
    func_0x000107c61428(lVar20 + 0x10,plVar24 + 8,0);
    lVar20 = lVar20 + 0x10;
    func_0x000107c61618();
    if (lVar20 == 0) {
      func_0x000107c61170(plVar4);
      goto LAB_10102c93c;
    }
    lVar26 = plVar24[0x19];
    uVar23 = *(undefined8 *)(lVar20 + _DAT_112d55988);
    func_0x000107c6157c(uVar23);
    func_0x000107c61170(lVar20);
    func_0x0001000d224c(plVar24 + 0x14);
    func_0x000107c61574(uVar23);
    lVar20 = plVar24[0x14];
    lVar25 = plVar24[0x15];
    plVar24[0x22] = lVar20;
    plVar13 = plVar24 + 0xb;
    param_4 = 0;
    func_0x000107c61428(lVar26 + 0x10,plVar13,0);
    lVar26 = lVar26 + 0x10;
    func_0x000107c61618();
    if (lVar26 == 0) {
LAB_10102c9e4:
      uVar23 = 0xce;
    }
    else {
      lVar18 = *(long *)(lVar26 + _DAT_112d55970);
      func_0x000107c61174();
      func_0x000107c61170(lVar26);
      lVar26 = *(long *)(lVar18 + _DAT_11302baa8);
      func_0x000107c61170(lVar18);
      if (((0x39 < lVar26 - 0xcU || (1L << (lVar26 - 0xcU & 0x3f) & 0x22000400800001bU) == 0) &&
          (lVar26 != 0x5a)) && (lVar26 != 0x51)) goto LAB_10102c9e4;
      uVar23 = 0x7f;
    }
    lVar26 = lVar20;
    func_0x000107c614f0();
    piVar27 = *(int **)(lVar25 + 0x10);
    iVar2 = *piVar27;
    UNRECOVERED_JUMPTABLE = (code *)(ulong)(uint)piVar27[1];
    func_0x000107c615b8();
    plVar24[0x23] = (long)UNRECOVERED_JUMPTABLE;
    *(long **)UNRECOVERED_JUMPTABLE = plVar24;
    *(code **)(UNRECOVERED_JUMPTABLE + 8) = FUN_10102ca68;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010102ca60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar2 + (long)piVar27))(plVar4,2,uVar23,lVar26,lVar25);
      return;
    }
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = *plVar24;
  lVar25 = *plVar24;
  *(code **)(lVar26 + 0x120) = UNRECOVERED_JUMPTABLE;
  func_0x000107c615c0(*(undefined8 *)(lVar26 + 0x118));
  uVar23 = *(undefined8 *)(lVar26 + 0x110);
  if (lVar20 == 0) {
    func_0x000107c615e8(uVar23);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      UNRECOVERED_JUMPTABLE = FUN_10102cb30;
      goto LAB_107c615e0;
    }
  }
  else {
    func_0x000107c614ac(lVar20);
    func_0x000107c615e8(uVar23);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      UNRECOVERED_JUMPTABLE = FUN_10102d0bc;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = *(long **)(lVar25 + 0x120);
  plVar24 = (long *)((ulong)plVar4 >> 0x3e);
  if (plVar24 == (long *)0x0) {
    plVar5 = (long *)((long *)((ulong)plVar4 & 0xffffffffffffff8))[2];
  }
  else {
    plVar5 = (long *)((ulong)plVar4 & 0xffffffffffffff8);
    if (((ulong)plVar4 & 0x8000000000000000) != 0) {
      plVar5 = plVar4;
    }
    func_0x000107c60480();
  }
  if (plVar5 == (long *)0x0) {
    uVar23 = *(undefined8 *)(lVar25 + 0x108);
    func_0x000107c6142c(*(undefined8 *)(lVar25 + 0x120));
    func_0x000107c61170(uVar23);
    uVar23 = *(undefined8 *)(lVar25 + 0x100);
    uVar21 = *(undefined8 *)(lVar25 + 0xe0);
    FUN_10102e830(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
    *(undefined **)(lVar25 + 0xb0) = puVar12;
    func_0x000100b60084(lVar25 + 0xb0);
    func_0x000107c615e8(uVar21);
    func_0x000107c61170(uVar23);
  }
  else {
    plVar1 = plVar5;
    if (2 < (long)plVar5) {
      plVar1 = (long *)0x3;
    }
    plStack_120 = (long *)0x3;
    if (-1 < (long)plVar5) {
      plStack_120 = plVar1;
    }
    if (plVar24 == (long *)0x0) {
      uVar6 = *(ulong *)(((ulong)plVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = (ulong)plVar4 & 0xffffffffffffff8;
      if (((ulong)plVar4 & 0x8000000000000000) != 0) {
        uVar6 = *(ulong *)(lVar25 + 0x120);
      }
      uVar7 = uVar6;
      func_0x000107c60480();
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10102d0b8);
        (*UNRECOVERED_JUMPTABLE)();
      }
      func_0x000107c60480();
    }
    if ((long)uVar6 < (long)plStack_120) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10102d0b4);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (((ulong)plVar4 & 0xc000000000000001) == 0) {
      func_0x000107c61434(*(undefined8 *)(lVar25 + 0x120));
      func_0x000107c6142c();
      if (plVar24 != (long *)0x0) goto LAB_10102ce5c;
LAB_10102cc3c:
      uStack_138 = (ulong)plVar4 & 0xffffffffffffff8;
      bVar3 = plVar24 != plStack_120;
      plVar4 = plStack_120;
      plStack_120 = (long *)(uStack_138 + 0x20);
      if (bVar3) {
LAB_10102cc54:
        puStack_130 = PTR___swiftEmptyArrayStorage_11034f1c8;
        plVar5 = plVar24;
LAB_10102cc70:
        if ((long)plVar5 < (long)plVar24) {
LAB_10102cfe8:
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10102cfec);
          (*UNRECOVERED_JUMPTABLE)();
        }
        plVar1 = plVar5;
        if ((long)plVar5 <= (long)plVar4) {
          plVar1 = plVar4;
        }
        do {
          if (plVar1 == plVar5) goto LAB_10102cfe8;
          lVar26 = plStack_120[(long)plVar5];
          func_0x000107c61174();
          lVar20 = lVar26;
          func_0x000107c60bb8();
          func_0x000107c61180();
          if (lVar20 != 0) {
            lVar18 = lVar20;
            func_0x000107c5ee30();
            func_0x000107c61170(lVar20);
            lVar20 = lVar18;
            plVar14 = plVar13;
            func_0x000107c5ee20();
            lVar8 = lVar20;
            func_0x00010011df08();
            func_0x000107c61180();
            plVar15 = plVar14;
            if (lVar8 == 0) {
              func_0x000107c5faec();
              plVar15 = plVar14;
              func_0x000107c5fadc();
              func_0x000107c6142c(plVar14);
            }
            uVar6 = *(ulong *)(lVar25 + 0xe0);
            *(undefined8 *)(lVar25 + 0xb8) = 0;
            param_6 = lVar25 + 0xb8;
            param_5 = 0xc;
            func_0x000107c5e908();
            func_0x000107c61180();
            func_0x000107c61170(lVar8);
            func_0x000107c61170(lVar20);
            lVar20 = *(long *)(lVar25 + 0xb8);
            uVar7 = uVar6;
            func_0x000107c5faec();
            func_0x000107c61174();
            func_0x00010006c090(lVar18);
            func_0x000107c61170(uVar6);
            uVar6 = uVar7 & 0xffffffffffff;
            if (((ulong)plVar15 & 0x2000000000000000) != 0) {
              uVar6 = (ulong)plVar15 >> 0x38 & 0xf;
            }
            if (uVar6 != 0 && lVar20 == 0) goto LAB_10102cdc0;
            func_0x000107c6142c(plVar15);
            func_0x000107c61170(lVar20);
          }
          plVar5 = (long *)((long)plVar5 + 1);
          func_0x000107c61170(lVar26);
          if (plVar4 == plVar5) goto LAB_10102cea8;
        } while( true );
      }
    }
    else {
      func_0x000107c61434(*(undefined8 *)(lVar25 + 0x120));
      if (plStack_120 != (long *)0x0) {
        uVar23 = 0;
        FUN_10102e830(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
        plVar5 = (long *)0x0;
        do {
          plVar13 = *(long **)(lVar25 + 0x120);
          plVar1 = (long *)((long)plVar5 + 1);
          func_0x000107c60318(plVar5,plVar13,uVar23);
          plVar5 = plVar1;
        } while (plStack_120 != plVar1);
      }
      func_0x000107c6142c();
      if (plVar24 == (long *)0x0) goto LAB_10102cc3c;
LAB_10102ce5c:
      plVar5 = *(long **)(lVar25 + 0x120);
      plVar24 = (long *)((ulong)plVar4 & 0xffffffffffffff8);
      if (((ulong)plVar4 & 0x8000000000000000) != 0) {
        plVar24 = plVar5;
      }
      uStack_138 = 0;
      func_0x000107c60484();
      plVar13 = plStack_120;
      func_0x000107c6142c(plVar5);
      plVar4 = (long *)(param_4 >> 1);
      if (plVar24 != plVar4) goto LAB_10102cc54;
    }
    puStack_130 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_10102cea8:
    lVar20 = *(long *)(lVar25 + 200);
    func_0x000107c615e8(uStack_138);
    puVar9 = puStack_130;
    FUN_10102c3b8(puStack_130);
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8();
    puVar10 = puVar9;
    func_0x000107c5fc48(puVar9,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar9);
    func_0x000107c45788();
    func_0x000107c61170(puVar10);
    *(undefined **)(lVar25 + 0xc0) = puVar12;
    func_0x000100b60084(lVar25 + 0xc0);
    func_0x000107c61170(puVar12);
    param_4 = 0;
    func_0x000107c61428(lVar20 + 0x10,lVar25 + 0x70,0);
    puVar9 = (undefined *)(lVar20 + 0x10);
    func_0x000107c61618();
    lVar20 = _DAT_112d559b8;
    puVar12 = *(undefined **)(lVar25 + 0x100);
    uVar23 = *(undefined8 *)(lVar25 + 0x108);
    uVar21 = *(undefined8 *)(lVar25 + 0xe0);
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c615e8(uVar21);
      func_0x000107c61170(uVar23);
      func_0x000107c6142c(puStack_130);
    }
    else {
      uVar22 = *(undefined8 *)(lVar25 + 0xd8);
      param_4 = 0;
      func_0x000107c61428(puVar9 + _DAT_112d559b8,lVar25 + 0x88,0x21);
      uVar11 = *(undefined8 *)(puVar9 + lVar20);
      func_0x000107c61558(uVar11);
      uVar19 = *(undefined8 *)(puVar9 + lVar20);
      *(undefined8 *)(puVar9 + lVar20) = 0x8000000000000000;
      FUN_10102e130(puStack_130,uVar22,uVar11);
      *(undefined8 *)(puVar9 + lVar20) = uVar19;
      func_0x000107c614a8(lVar25 + 0x88);
      func_0x000107c615e8(uVar21);
      func_0x000107c61170(uVar23);
      func_0x000107c61170(puVar12);
      puVar12 = puVar9;
    }
  }
  func_0x000107c61170(puVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010102d0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar25 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61170(*(undefined8 *)(lVar25 + 0x108));
  uVar21 = *(undefined8 *)(lVar25 + 0x100);
  uVar11 = *(undefined8 *)(lVar25 + 0xe0);
  uVar23 = 0x112d38dd0;
  ppuVar16 = &PTR__OBJC_CLASS___NSArray_1126ae530;
  FUN_10102e830(0);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c600f0();
  *(undefined **)(lVar25 + 0xb0) = puVar9;
  func_0x000100b60084();
  func_0x000107c615e8(uVar11);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010102d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar25 + 8))();
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)(lVar25 + 0x78) = param_5;
  *(long *)(lVar25 + 0x80) = param_6;
  *(undefined ***)(lVar25 + 0x68) = ppuVar16;
  *(ulong *)(lVar25 + 0x70) = param_4;
  *(undefined8 *)(lVar25 + 0x60) = uVar23;
  lVar17 = 0;
  func_0x000107c5ede0();
  *(long *)(lVar25 + 0x88) = lVar17;
  lVar17 = *(long *)(lVar17 + -8);
  *(long *)(lVar25 + 0x90) = lVar17;
  uVar6 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(lVar25 + 0x98) = uVar6;
  UNRECOVERED_JUMPTABLE = FUN_10102d1f0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
LAB_10102cdc0:
  func_0x000107c61170(lVar26);
  puVar9 = puStack_130;
  func_0x000107c61558();
  if (((ulong)puVar9 & 1) == 0) {
    plVar13 = (long *)(*(long *)(puStack_130 + 0x10) + 1);
    puStack_130 = (undefined *)0x0;
    func_0x0001000d182c(0,plVar13,1);
  }
  uVar6 = *(ulong *)(puStack_130 + 0x10);
  plVar1 = (long *)(uVar6 + 1);
  if (*(ulong *)(puStack_130 + 0x18) >> 1 <= uVar6) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puStack_130 + 0x18));
    plVar13 = plVar1;
    func_0x0001000d182c(puVar9,plVar1,1,puStack_130);
    puStack_130 = puVar9;
  }
  *(long **)(puStack_130 + 0x10) = plVar1;
  *(ulong *)(puStack_130 + uVar6 * 0x10 + 0x20) = uVar7;
  *(long **)(puStack_130 + uVar6 * 0x10 + 0x28) = plVar15;
  bVar3 = (long *)((long)plVar4 + -1) == plVar5;
  plVar5 = (long *)((long)plVar5 + 1);
  if (bVar3) goto LAB_10102cea8;
  goto LAB_10102cc70;
}



/* Entry: 10102c7ac; end: 10102ca67;  */

/* WARNING: Removing unreachable block (ram,0x00010102d0ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102c7ac(void)

{
  long *plVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined **ppuVar16;
  ulong in_x3;
  undefined8 in_x4;
  long in_x5;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long *plVar23;
  long *unaff_x22;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  int *piVar27;
  ulong uStack_108;
  undefined *puStack_100;
  long *plStack_f0;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)unaff_x22[0x20];
  if (plVar4 == (long *)0x0) {
    lVar25 = unaff_x22[0x1c];
    lVar21 = unaff_x22[0x1a];
    FUN_10102de24();
    puVar9 = &UNK_1103789c0;
    in_x3 = 0;
    func_0x000107c613f8(&UNK_1103789c0,plVar4,0);
    *(undefined1 *)plVar4 = 4;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar9);
    func_0x000107c615e8(lVar25);
    plVar13 = plVar4;
LAB_10102c99c:
    UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010102c9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    func_0x000107c45164();
    func_0x000107c61180();
    unaff_x22[0x21] = (long)plVar4;
    if (plVar4 == (long *)0x0) {
LAB_10102c93c:
      lVar25 = unaff_x22[0x20];
      lVar24 = unaff_x22[0x1c];
      lVar21 = unaff_x22[0x1a];
      plVar13 = (long *)0x112d38dd0;
      FUN_10102e830(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c600f0();
      unaff_x22[0x16] = (long)puVar9;
      func_0x000100b60084(unaff_x22 + 0x16);
      func_0x000107c615e8(lVar24);
      func_0x000107c61170(lVar25);
      func_0x000107c61170(puVar9);
      goto LAB_10102c99c;
    }
    lVar21 = unaff_x22[0x19];
    in_x3 = 0;
    func_0x000107c61428(lVar21 + 0x10,unaff_x22 + 8,0);
    lVar21 = lVar21 + 0x10;
    func_0x000107c61618();
    if (lVar21 == 0) {
      func_0x000107c61170(plVar4);
      goto LAB_10102c93c;
    }
    lVar25 = unaff_x22[0x19];
    uVar22 = *(undefined8 *)(lVar21 + _DAT_112d55988);
    func_0x000107c6157c(uVar22);
    func_0x000107c61170(lVar21);
    func_0x0001000d224c(unaff_x22 + 0x14);
    func_0x000107c61574(uVar22);
    lVar21 = unaff_x22[0x14];
    lVar24 = unaff_x22[0x15];
    unaff_x22[0x22] = lVar21;
    plVar13 = unaff_x22 + 0xb;
    in_x3 = 0;
    func_0x000107c61428(lVar25 + 0x10,plVar13,0);
    lVar25 = lVar25 + 0x10;
    func_0x000107c61618();
    if (lVar25 == 0) {
LAB_10102c9e4:
      uVar22 = 0xce;
    }
    else {
      lVar18 = *(long *)(lVar25 + _DAT_112d55970);
      func_0x000107c61174();
      func_0x000107c61170(lVar25);
      lVar25 = *(long *)(lVar18 + _DAT_11302baa8);
      func_0x000107c61170(lVar18);
      if (((0x39 < lVar25 - 0xcU || (1L << (lVar25 - 0xcU & 0x3f) & 0x22000400800001bU) == 0) &&
          (lVar25 != 0x5a)) && (lVar25 != 0x51)) goto LAB_10102c9e4;
      uVar22 = 0x7f;
    }
    lVar25 = lVar21;
    func_0x000107c614f0();
    piVar27 = *(int **)(lVar24 + 0x10);
    iVar2 = *piVar27;
    UNRECOVERED_JUMPTABLE = (code *)(ulong)(uint)piVar27[1];
    func_0x000107c615b8();
    unaff_x22[0x23] = (long)UNRECOVERED_JUMPTABLE;
    *(long **)UNRECOVERED_JUMPTABLE = unaff_x22;
    *(code **)(UNRECOVERED_JUMPTABLE + 8) = FUN_10102ca68;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010102ca60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar2 + (long)piVar27))(plVar4,2,uVar22,lVar25,lVar24);
      return;
    }
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = *unaff_x22;
  lVar24 = *unaff_x22;
  *(code **)(lVar25 + 0x120) = UNRECOVERED_JUMPTABLE;
  func_0x000107c615c0(*(undefined8 *)(lVar25 + 0x118));
  uVar22 = *(undefined8 *)(lVar25 + 0x110);
  if (lVar21 == 0) {
    func_0x000107c615e8(uVar22);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      UNRECOVERED_JUMPTABLE = FUN_10102cb30;
      goto LAB_107c615e0;
    }
  }
  else {
    func_0x000107c614ac(lVar21);
    func_0x000107c615e8(uVar22);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      UNRECOVERED_JUMPTABLE = FUN_10102d0bc;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar23 = *(long **)(lVar24 + 0x120);
  plVar4 = (long *)((ulong)plVar23 >> 0x3e);
  if (plVar4 == (long *)0x0) {
    plVar5 = (long *)((long *)((ulong)plVar23 & 0xffffffffffffff8))[2];
  }
  else {
    plVar5 = (long *)((ulong)plVar23 & 0xffffffffffffff8);
    if (((ulong)plVar23 & 0x8000000000000000) != 0) {
      plVar5 = plVar23;
    }
    func_0x000107c60480();
  }
  if (plVar5 == (long *)0x0) {
    uVar22 = *(undefined8 *)(lVar24 + 0x108);
    func_0x000107c6142c(*(undefined8 *)(lVar24 + 0x120));
    func_0x000107c61170(uVar22);
    uVar22 = *(undefined8 *)(lVar24 + 0x100);
    uVar26 = *(undefined8 *)(lVar24 + 0xe0);
    FUN_10102e830(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
    *(undefined **)(lVar24 + 0xb0) = puVar12;
    func_0x000100b60084(lVar24 + 0xb0);
    func_0x000107c615e8(uVar26);
    func_0x000107c61170(uVar22);
  }
  else {
    plVar1 = plVar5;
    if (2 < (long)plVar5) {
      plVar1 = (long *)0x3;
    }
    plStack_f0 = (long *)0x3;
    if (-1 < (long)plVar5) {
      plStack_f0 = plVar1;
    }
    if (plVar4 == (long *)0x0) {
      uVar6 = *(ulong *)(((ulong)plVar23 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = (ulong)plVar23 & 0xffffffffffffff8;
      if (((ulong)plVar23 & 0x8000000000000000) != 0) {
        uVar6 = *(ulong *)(lVar24 + 0x120);
      }
      uVar7 = uVar6;
      func_0x000107c60480();
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10102d0b8);
        (*UNRECOVERED_JUMPTABLE)();
      }
      func_0x000107c60480();
    }
    if ((long)uVar6 < (long)plStack_f0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10102d0b4);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (((ulong)plVar23 & 0xc000000000000001) == 0) {
      func_0x000107c61434(*(undefined8 *)(lVar24 + 0x120));
      func_0x000107c6142c();
      if (plVar4 != (long *)0x0) goto LAB_10102ce5c;
LAB_10102cc3c:
      uStack_108 = (ulong)plVar23 & 0xffffffffffffff8;
      bVar3 = plVar4 != plStack_f0;
      plVar23 = plStack_f0;
      plStack_f0 = (long *)(uStack_108 + 0x20);
      if (bVar3) {
LAB_10102cc54:
        puStack_100 = PTR___swiftEmptyArrayStorage_11034f1c8;
        plVar5 = plVar4;
LAB_10102cc70:
        if ((long)plVar5 < (long)plVar4) {
LAB_10102cfe8:
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10102cfec);
          (*UNRECOVERED_JUMPTABLE)();
        }
        plVar1 = plVar5;
        if ((long)plVar5 <= (long)plVar23) {
          plVar1 = plVar23;
        }
        do {
          if (plVar1 == plVar5) goto LAB_10102cfe8;
          lVar25 = plStack_f0[(long)plVar5];
          func_0x000107c61174();
          lVar21 = lVar25;
          func_0x000107c60bb8();
          func_0x000107c61180();
          if (lVar21 != 0) {
            lVar18 = lVar21;
            func_0x000107c5ee30();
            func_0x000107c61170(lVar21);
            lVar21 = lVar18;
            plVar14 = plVar13;
            func_0x000107c5ee20();
            lVar8 = lVar21;
            func_0x00010011df08();
            func_0x000107c61180();
            plVar15 = plVar14;
            if (lVar8 == 0) {
              func_0x000107c5faec();
              plVar15 = plVar14;
              func_0x000107c5fadc();
              func_0x000107c6142c(plVar14);
            }
            uVar6 = *(ulong *)(lVar24 + 0xe0);
            *(undefined8 *)(lVar24 + 0xb8) = 0;
            in_x5 = lVar24 + 0xb8;
            in_x4 = 0xc;
            func_0x000107c5e908();
            func_0x000107c61180();
            func_0x000107c61170(lVar8);
            func_0x000107c61170(lVar21);
            lVar21 = *(long *)(lVar24 + 0xb8);
            uVar7 = uVar6;
            func_0x000107c5faec();
            func_0x000107c61174();
            func_0x00010006c090(lVar18);
            func_0x000107c61170(uVar6);
            uVar6 = uVar7 & 0xffffffffffff;
            if (((ulong)plVar15 & 0x2000000000000000) != 0) {
              uVar6 = (ulong)plVar15 >> 0x38 & 0xf;
            }
            if (uVar6 != 0 && lVar21 == 0) goto LAB_10102cdc0;
            func_0x000107c6142c(plVar15);
            func_0x000107c61170(lVar21);
          }
          plVar5 = (long *)((long)plVar5 + 1);
          func_0x000107c61170(lVar25);
          if (plVar23 == plVar5) goto LAB_10102cea8;
        } while( true );
      }
    }
    else {
      func_0x000107c61434(*(undefined8 *)(lVar24 + 0x120));
      if (plStack_f0 != (long *)0x0) {
        uVar22 = 0;
        FUN_10102e830(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
        plVar5 = (long *)0x0;
        do {
          plVar13 = *(long **)(lVar24 + 0x120);
          plVar1 = (long *)((long)plVar5 + 1);
          func_0x000107c60318(plVar5,plVar13,uVar22);
          plVar5 = plVar1;
        } while (plStack_f0 != plVar1);
      }
      func_0x000107c6142c();
      if (plVar4 == (long *)0x0) goto LAB_10102cc3c;
LAB_10102ce5c:
      plVar5 = *(long **)(lVar24 + 0x120);
      plVar4 = (long *)((ulong)plVar23 & 0xffffffffffffff8);
      if (((ulong)plVar23 & 0x8000000000000000) != 0) {
        plVar4 = plVar5;
      }
      uStack_108 = 0;
      func_0x000107c60484();
      plVar13 = plStack_f0;
      func_0x000107c6142c(plVar5);
      plVar23 = (long *)(in_x3 >> 1);
      if (plVar4 != plVar23) goto LAB_10102cc54;
    }
    puStack_100 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_10102cea8:
    lVar21 = *(long *)(lVar24 + 200);
    func_0x000107c615e8(uStack_108);
    puVar9 = puStack_100;
    FUN_10102c3b8(puStack_100);
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8();
    puVar10 = puVar9;
    func_0x000107c5fc48(puVar9,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar9);
    func_0x000107c45788();
    func_0x000107c61170(puVar10);
    *(undefined **)(lVar24 + 0xc0) = puVar12;
    func_0x000100b60084(lVar24 + 0xc0);
    func_0x000107c61170(puVar12);
    in_x3 = 0;
    func_0x000107c61428(lVar21 + 0x10,lVar24 + 0x70,0);
    puVar9 = (undefined *)(lVar21 + 0x10);
    func_0x000107c61618();
    lVar21 = _DAT_112d559b8;
    puVar12 = *(undefined **)(lVar24 + 0x100);
    uVar22 = *(undefined8 *)(lVar24 + 0x108);
    uVar26 = *(undefined8 *)(lVar24 + 0xe0);
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c615e8(uVar26);
      func_0x000107c61170(uVar22);
      func_0x000107c6142c(puStack_100);
    }
    else {
      uVar20 = *(undefined8 *)(lVar24 + 0xd8);
      in_x3 = 0;
      func_0x000107c61428(puVar9 + _DAT_112d559b8,lVar24 + 0x88,0x21);
      uVar11 = *(undefined8 *)(puVar9 + lVar21);
      func_0x000107c61558(uVar11);
      uVar19 = *(undefined8 *)(puVar9 + lVar21);
      *(undefined8 *)(puVar9 + lVar21) = 0x8000000000000000;
      FUN_10102e130(puStack_100,uVar20,uVar11);
      *(undefined8 *)(puVar9 + lVar21) = uVar19;
      func_0x000107c614a8(lVar24 + 0x88);
      func_0x000107c615e8(uVar26);
      func_0x000107c61170(uVar22);
      func_0x000107c61170(puVar12);
      puVar12 = puVar9;
    }
  }
  func_0x000107c61170(puVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010102d0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar24 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61170(*(undefined8 *)(lVar24 + 0x108));
  uVar26 = *(undefined8 *)(lVar24 + 0x100);
  uVar11 = *(undefined8 *)(lVar24 + 0xe0);
  uVar22 = 0x112d38dd0;
  ppuVar16 = &PTR__OBJC_CLASS___NSArray_1126ae530;
  FUN_10102e830(0);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c600f0();
  *(undefined **)(lVar24 + 0xb0) = puVar9;
  func_0x000100b60084();
  func_0x000107c615e8(uVar11);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010102d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar24 + 8))();
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)(lVar24 + 0x78) = in_x4;
  *(long *)(lVar24 + 0x80) = in_x5;
  *(undefined ***)(lVar24 + 0x68) = ppuVar16;
  *(ulong *)(lVar24 + 0x70) = in_x3;
  *(undefined8 *)(lVar24 + 0x60) = uVar22;
  lVar17 = 0;
  func_0x000107c5ede0();
  *(long *)(lVar24 + 0x88) = lVar17;
  lVar17 = *(long *)(lVar17 + -8);
  *(long *)(lVar24 + 0x90) = lVar17;
  uVar6 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(lVar24 + 0x98) = uVar6;
  UNRECOVERED_JUMPTABLE = FUN_10102d1f0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
LAB_10102cdc0:
  func_0x000107c61170(lVar25);
  puVar9 = puStack_100;
  func_0x000107c61558();
  if (((ulong)puVar9 & 1) == 0) {
    plVar13 = (long *)(*(long *)(puStack_100 + 0x10) + 1);
    puStack_100 = (undefined *)0x0;
    func_0x0001000d182c(0,plVar13,1);
  }
  uVar6 = *(ulong *)(puStack_100 + 0x10);
  plVar1 = (long *)(uVar6 + 1);
  if (*(ulong *)(puStack_100 + 0x18) >> 1 <= uVar6) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puStack_100 + 0x18));
    plVar13 = plVar1;
    func_0x0001000d182c(puVar9,plVar1,1,puStack_100);
    puStack_100 = puVar9;
  }
  *(long **)(puStack_100 + 0x10) = plVar1;
  *(ulong *)(puStack_100 + uVar6 * 0x10 + 0x20) = uVar7;
  *(long **)(puStack_100 + uVar6 * 0x10 + 0x28) = plVar15;
  bVar3 = (long *)((long)plVar23 + -1) == plVar5;
  plVar5 = (long *)((long)plVar5 + 1);
  if (bVar3) goto LAB_10102cea8;
  goto LAB_10102cc70;
}



/* Entry: 10102ca68; end: 10102cb2f;  */

/* WARNING: Removing unreachable block (ram,0x00010102d0ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102ca68(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x20;
  ulong uVar21;
  long *unaff_x22;
  long lVar22;
  undefined8 uVar23;
  ulong uStack_b8;
  undefined *puStack_b0;
  ulong uStack_a0;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = *unaff_x22;
  lVar22 = *unaff_x22;
  *(undefined8 *)(lVar18 + 0x120) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar18 + 0x118));
  uVar19 = *(undefined8 *)(lVar18 + 0x110);
  if (unaff_x20 == 0) {
    func_0x000107c615e8(uVar19);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
      pcVar1 = FUN_10102cb30;
      goto LAB_107c615e0;
    }
  }
  else {
    func_0x000107c614ac();
    func_0x000107c615e8(uVar19);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
      pcVar1 = FUN_10102d0bc;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = *(ulong *)(lVar22 + 0x120);
  uVar21 = uStack_b8 >> 0x3e;
  if (uVar21 == 0) {
    uVar3 = *(ulong *)((uStack_b8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uStack_b8 & 0xffffffffffffff8;
    if ((uStack_b8 & 0x8000000000000000) != 0) {
      uVar3 = uStack_b8;
    }
    func_0x000107c60480();
  }
  if (uVar3 == 0) {
    uVar19 = *(undefined8 *)(lVar22 + 0x108);
    func_0x000107c6142c(*(undefined8 *)(lVar22 + 0x120));
    func_0x000107c61170(uVar19);
    uVar19 = *(undefined8 *)(lVar22 + 0x100);
    uVar23 = *(undefined8 *)(lVar22 + 0xe0);
    FUN_10102e830(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
    *(undefined **)(lVar22 + 0xb0) = puVar13;
    func_0x000100b60084(lVar22 + 0xb0);
    func_0x000107c615e8(uVar23);
    func_0x000107c61170(uVar19);
  }
  else {
    uVar4 = uVar3;
    if (2 < (long)uVar3) {
      uVar4 = 3;
    }
    uStack_a0 = 3;
    if (-1 < (long)uVar3) {
      uStack_a0 = uVar4;
    }
    if (uVar21 == 0) {
      uVar3 = *(ulong *)((uStack_b8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uStack_b8 & 0xffffffffffffff8;
      if ((uStack_b8 & 0x8000000000000000) != 0) {
        uVar3 = *(ulong *)(lVar22 + 0x120);
      }
      uVar4 = uVar3;
      func_0x000107c60480();
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10102d0b8);
        (*pcVar1)();
      }
      func_0x000107c60480();
    }
    if ((long)uVar3 < (long)uStack_a0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10102d0b4);
      (*pcVar1)();
    }
    if ((uStack_b8 & 0xc000000000000001) == 0) {
      func_0x000107c61434(*(undefined8 *)(lVar22 + 0x120));
      func_0x000107c6142c();
      if (uVar21 != 0) goto LAB_10102ce5c;
LAB_10102cc3c:
      uStack_b8 = uStack_b8 & 0xffffffffffffff8;
      bVar2 = uVar21 != uStack_a0;
      param_4 = uStack_a0;
      uStack_a0 = uStack_b8 + 0x20;
      if (bVar2) {
LAB_10102cc54:
        puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar3 = uVar21;
LAB_10102cc70:
        if ((long)uVar3 < (long)uVar21) {
LAB_10102cfe8:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10102cfec);
          (*pcVar1)();
        }
        uVar4 = uVar3;
        if ((long)uVar3 <= (long)param_4) {
          uVar4 = param_4;
        }
        do {
          if (uVar4 == uVar3) goto LAB_10102cfe8;
          lVar5 = *(long *)(uStack_a0 + uVar3 * 8);
          func_0x000107c61174();
          lVar18 = lVar5;
          func_0x000107c60bb8();
          func_0x000107c61180();
          if (lVar18 != 0) {
            lVar6 = lVar18;
            func_0x000107c5ee30();
            func_0x000107c61170(lVar18);
            lVar18 = lVar6;
            uVar8 = param_2;
            func_0x000107c5ee20();
            lVar7 = lVar18;
            func_0x00010011df08();
            func_0x000107c61180();
            uVar14 = uVar8;
            if (lVar7 == 0) {
              func_0x000107c5faec();
              uVar14 = uVar8;
              func_0x000107c5fadc();
              func_0x000107c6142c(uVar8);
            }
            uVar8 = *(ulong *)(lVar22 + 0xe0);
            *(undefined8 *)(lVar22 + 0xb8) = 0;
            param_6 = lVar22 + 0xb8;
            param_5 = 0xc;
            func_0x000107c5e908();
            func_0x000107c61180();
            func_0x000107c61170(lVar7);
            func_0x000107c61170(lVar18);
            lVar18 = *(long *)(lVar22 + 0xb8);
            uVar9 = uVar8;
            func_0x000107c5faec();
            func_0x000107c61174();
            func_0x00010006c090(lVar6);
            func_0x000107c61170(uVar8);
            uVar8 = uVar9 & 0xffffffffffff;
            if ((uVar14 & 0x2000000000000000) != 0) {
              uVar8 = uVar14 >> 0x38 & 0xf;
            }
            if (uVar8 != 0 && lVar18 == 0) goto LAB_10102cdc0;
            func_0x000107c6142c(uVar14);
            func_0x000107c61170(lVar18);
          }
          uVar3 = uVar3 + 1;
          func_0x000107c61170(lVar5);
          if (param_4 == uVar3) goto LAB_10102cea8;
        } while( true );
      }
    }
    else {
      func_0x000107c61434(*(undefined8 *)(lVar22 + 0x120));
      if (uStack_a0 != 0) {
        uVar19 = 0;
        FUN_10102e830(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
        uVar3 = 0;
        do {
          param_2 = *(ulong *)(lVar22 + 0x120);
          uVar4 = uVar3 + 1;
          func_0x000107c60318(uVar3,param_2,uVar19);
          uVar3 = uVar4;
        } while (uStack_a0 != uVar4);
      }
      func_0x000107c6142c();
      if (uVar21 == 0) goto LAB_10102cc3c;
LAB_10102ce5c:
      uVar3 = *(ulong *)(lVar22 + 0x120);
      uVar21 = uStack_b8 & 0xffffffffffffff8;
      if ((uStack_b8 & 0x8000000000000000) != 0) {
        uVar21 = uVar3;
      }
      uStack_b8 = 0;
      func_0x000107c60484();
      param_2 = uStack_a0;
      func_0x000107c6142c(uVar3);
      param_4 = param_4 >> 1;
      if (uVar21 != param_4) goto LAB_10102cc54;
    }
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_10102cea8:
    lVar18 = *(long *)(lVar22 + 200);
    func_0x000107c615e8(uStack_b8);
    puVar10 = puStack_b0;
    FUN_10102c3b8(puStack_b0);
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8();
    puVar11 = puVar10;
    func_0x000107c5fc48(puVar10,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar10);
    func_0x000107c45788();
    func_0x000107c61170(puVar11);
    *(undefined **)(lVar22 + 0xc0) = puVar13;
    func_0x000100b60084(lVar22 + 0xc0);
    func_0x000107c61170(puVar13);
    param_4 = 0;
    func_0x000107c61428(lVar18 + 0x10,lVar22 + 0x70,0);
    puVar10 = (undefined *)(lVar18 + 0x10);
    func_0x000107c61618();
    lVar18 = _DAT_112d559b8;
    puVar13 = *(undefined **)(lVar22 + 0x100);
    uVar19 = *(undefined8 *)(lVar22 + 0x108);
    uVar23 = *(undefined8 *)(lVar22 + 0xe0);
    if (puVar10 == (undefined *)0x0) {
      func_0x000107c615e8(uVar23);
      func_0x000107c61170(uVar19);
      func_0x000107c6142c(puStack_b0);
    }
    else {
      uVar20 = *(undefined8 *)(lVar22 + 0xd8);
      param_4 = 0;
      func_0x000107c61428(puVar10 + _DAT_112d559b8,lVar22 + 0x88,0x21);
      uVar12 = *(undefined8 *)(puVar10 + lVar18);
      func_0x000107c61558(uVar12);
      uVar17 = *(undefined8 *)(puVar10 + lVar18);
      *(undefined8 *)(puVar10 + lVar18) = 0x8000000000000000;
      FUN_10102e130(puStack_b0,uVar20,uVar12);
      *(undefined8 *)(puVar10 + lVar18) = uVar17;
      func_0x000107c614a8(lVar22 + 0x88);
      func_0x000107c615e8(uVar23);
      func_0x000107c61170(uVar19);
      func_0x000107c61170(puVar13);
      puVar13 = puVar10;
    }
  }
  func_0x000107c61170(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010102d0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar22 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61170(*(undefined8 *)(lVar22 + 0x108));
  uVar23 = *(undefined8 *)(lVar22 + 0x100);
  uVar12 = *(undefined8 *)(lVar22 + 0xe0);
  uVar19 = 0x112d38dd0;
  ppuVar15 = &PTR__OBJC_CLASS___NSArray_1126ae530;
  FUN_10102e830(0);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c600f0();
  *(undefined **)(lVar22 + 0xb0) = puVar10;
  func_0x000100b60084();
  func_0x000107c615e8(uVar12);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010102d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar22 + 8))();
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)(lVar22 + 0x78) = param_5;
  *(long *)(lVar22 + 0x80) = param_6;
  *(undefined ***)(lVar22 + 0x68) = ppuVar15;
  *(ulong *)(lVar22 + 0x70) = param_4;
  *(undefined8 *)(lVar22 + 0x60) = uVar19;
  lVar16 = 0;
  func_0x000107c5ede0();
  *(long *)(lVar22 + 0x88) = lVar16;
  lVar16 = *(long *)(lVar16 + -8);
  *(long *)(lVar22 + 0x90) = lVar16;
  uVar21 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(lVar22 + 0x98) = uVar21;
  pcVar1 = FUN_10102d1f0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
LAB_10102cdc0:
  func_0x000107c61170(lVar5);
  puVar10 = puStack_b0;
  func_0x000107c61558();
  if (((ulong)puVar10 & 1) == 0) {
    param_2 = *(long *)(puStack_b0 + 0x10) + 1;
    puStack_b0 = (undefined *)0x0;
    func_0x0001000d182c(0,param_2,1);
  }
  uVar8 = *(ulong *)(puStack_b0 + 0x10);
  uVar4 = uVar8 + 1;
  if (*(ulong *)(puStack_b0 + 0x18) >> 1 <= uVar8) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puStack_b0 + 0x18));
    param_2 = uVar4;
    func_0x0001000d182c(puVar10,uVar4,1,puStack_b0);
    puStack_b0 = puVar10;
  }
  *(ulong *)(puStack_b0 + 0x10) = uVar4;
  *(ulong *)(puStack_b0 + uVar8 * 0x10 + 0x20) = uVar9;
  *(ulong *)(puStack_b0 + uVar8 * 0x10 + 0x28) = uVar14;
  bVar2 = param_4 - 1 == uVar3;
  uVar3 = uVar3 + 1;
  if (bVar2) goto LAB_10102cea8;
  goto LAB_10102cc70;
}



/* Entry: 10102cb30; end: 10102d0bb;  */

/* WARNING: Removing unreachable block (ram,0x00010102d0ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102cb30(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long unaff_x22;
  long lVar21;
  undefined8 uVar22;
  ulong uStack_88;
  undefined *puStack_80;
  ulong uStack_70;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = *(ulong *)(unaff_x22 + 0x120);
  uVar20 = uStack_88 >> 0x3e;
  if (uVar20 == 0) {
    uVar3 = *(ulong *)((uStack_88 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uStack_88 & 0xffffffffffffff8;
    if ((uStack_88 & 0x8000000000000000) != 0) {
      uVar3 = uStack_88;
    }
    func_0x000107c60480();
  }
  if (uVar3 == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x120));
    func_0x000107c61170(uVar5);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar22 = *(undefined8 *)(unaff_x22 + 0xe0);
    FUN_10102e830(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
    *(undefined **)(unaff_x22 + 0xb0) = puVar11;
    func_0x000100b60084(unaff_x22 + 0xb0);
    func_0x000107c615e8(uVar22);
    func_0x000107c61170(uVar5);
    goto LAB_10102d06c;
  }
  uVar4 = uVar3;
  if (2 < (long)uVar3) {
    uVar4 = 3;
  }
  uStack_70 = 3;
  if (-1 < (long)uVar3) {
    uStack_70 = uVar4;
  }
  if (uVar20 == 0) {
    uVar3 = *(ulong *)((uStack_88 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uStack_88 & 0xffffffffffffff8;
    if ((uStack_88 & 0x8000000000000000) != 0) {
      uVar3 = *(ulong *)(unaff_x22 + 0x120);
    }
    uVar4 = uVar3;
    func_0x000107c60480();
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10102d0b8);
      (*pcVar1)();
    }
    func_0x000107c60480();
  }
  if ((long)uVar3 < (long)uStack_70) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10102d0b4);
    (*pcVar1)();
  }
  if ((uStack_88 & 0xc000000000000001) == 0) {
    func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x120));
    func_0x000107c6142c();
    if (uVar20 == 0) goto LAB_10102cc3c;
LAB_10102ce5c:
    uVar3 = *(ulong *)(unaff_x22 + 0x120);
    uVar20 = uStack_88 & 0xffffffffffffff8;
    if ((uStack_88 & 0x8000000000000000) != 0) {
      uVar20 = uVar3;
    }
    uStack_88 = 0;
    func_0x000107c60484();
    param_2 = uStack_70;
    func_0x000107c6142c(uVar3);
    param_4 = param_4 >> 1;
    if (uVar20 != param_4) {
LAB_10102cc54:
      puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar3 = uVar20;
LAB_10102cc70:
      if ((long)uVar3 < (long)uVar20) {
LAB_10102cfe8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10102cfec);
        (*pcVar1)();
      }
      uVar4 = uVar3;
      if ((long)uVar3 <= (long)param_4) {
        uVar4 = param_4;
      }
      do {
        if (uVar4 == uVar3) goto LAB_10102cfe8;
        lVar6 = *(long *)(uStack_70 + uVar3 * 8);
        func_0x000107c61174();
        lVar21 = lVar6;
        func_0x000107c60bb8();
        func_0x000107c61180();
        if (lVar21 != 0) {
          lVar7 = lVar21;
          func_0x000107c5ee30();
          func_0x000107c61170(lVar21);
          lVar21 = lVar7;
          uVar9 = param_2;
          func_0x000107c5ee20();
          lVar8 = lVar21;
          func_0x00010011df08();
          func_0x000107c61180();
          uVar15 = uVar9;
          if (lVar8 == 0) {
            func_0x000107c5faec();
            uVar15 = uVar9;
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar9);
          }
          uVar9 = *(ulong *)(unaff_x22 + 0xe0);
          *(undefined8 *)(unaff_x22 + 0xb8) = 0;
          param_6 = unaff_x22 + 0xb8;
          param_5 = 0xc;
          func_0x000107c5e908();
          func_0x000107c61180();
          func_0x000107c61170(lVar8);
          func_0x000107c61170(lVar21);
          lVar21 = *(long *)(unaff_x22 + 0xb8);
          uVar10 = uVar9;
          func_0x000107c5faec();
          func_0x000107c61174();
          func_0x00010006c090(lVar7);
          func_0x000107c61170(uVar9);
          uVar9 = uVar10 & 0xffffffffffff;
          if ((uVar15 & 0x2000000000000000) != 0) {
            uVar9 = uVar15 >> 0x38 & 0xf;
          }
          if (uVar9 != 0 && lVar21 == 0) goto LAB_10102cdc0;
          func_0x000107c6142c(uVar15);
          func_0x000107c61170(lVar21);
        }
        uVar3 = uVar3 + 1;
        func_0x000107c61170(lVar6);
        if (param_4 == uVar3) goto LAB_10102cea8;
      } while( true );
    }
  }
  else {
    func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x120));
    if (uStack_70 != 0) {
      uVar5 = 0;
      FUN_10102e830(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
      uVar3 = 0;
      do {
        param_2 = *(ulong *)(unaff_x22 + 0x120);
        uVar4 = uVar3 + 1;
        func_0x000107c60318(uVar3,param_2,uVar5);
        uVar3 = uVar4;
      } while (uStack_70 != uVar4);
    }
    func_0x000107c6142c();
    if (uVar20 != 0) goto LAB_10102ce5c;
LAB_10102cc3c:
    uStack_88 = uStack_88 & 0xffffffffffffff8;
    bVar2 = uVar20 != uStack_70;
    param_4 = uStack_70;
    uStack_70 = uStack_88 + 0x20;
    if (bVar2) goto LAB_10102cc54;
  }
  puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_10102cea8:
  lVar21 = *(long *)(unaff_x22 + 200);
  func_0x000107c615e8(uStack_88);
  puVar11 = puStack_80;
  FUN_10102c3b8(puStack_80);
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  puVar13 = puVar11;
  func_0x000107c5fc48(puVar11,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar11);
  func_0x000107c45788();
  func_0x000107c61170(puVar13);
  *(undefined **)(unaff_x22 + 0xc0) = puVar12;
  func_0x000100b60084(unaff_x22 + 0xc0);
  func_0x000107c61170(puVar12);
  param_4 = 0;
  func_0x000107c61428(lVar21 + 0x10,unaff_x22 + 0x70,0);
  puVar12 = (undefined *)(lVar21 + 0x10);
  func_0x000107c61618();
  lVar21 = _DAT_112d559b8;
  puVar11 = *(undefined **)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xe0);
  if (puVar12 == (undefined *)0x0) {
    func_0x000107c615e8(uVar22);
    func_0x000107c61170(uVar5);
    func_0x000107c6142c(puStack_80);
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x22 + 0xd8);
    param_4 = 0;
    func_0x000107c61428(puVar12 + _DAT_112d559b8,unaff_x22 + 0x88,0x21);
    uVar14 = *(undefined8 *)(puVar12 + lVar21);
    func_0x000107c61558(uVar14);
    uVar18 = *(undefined8 *)(puVar12 + lVar21);
    *(undefined8 *)(puVar12 + lVar21) = 0x8000000000000000;
    FUN_10102e130(puStack_80,uVar19,uVar14);
    *(undefined8 *)(puVar12 + lVar21) = uVar18;
    func_0x000107c614a8(unaff_x22 + 0x88);
    func_0x000107c615e8(uVar22);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar11);
    puVar11 = puVar12;
  }
LAB_10102d06c:
  func_0x000107c61170(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010102d0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x108));
  uVar22 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar5 = 0x112d38dd0;
  ppuVar16 = &PTR__OBJC_CLASS___NSArray_1126ae530;
  FUN_10102e830(0);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c600f0();
  *(undefined **)(unaff_x22 + 0xb0) = puVar11;
  func_0x000100b60084();
  func_0x000107c615e8(uVar14);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    func_0x000107c60e78();
    *(undefined8 *)(unaff_x22 + 0x78) = param_5;
    *(long *)(unaff_x22 + 0x80) = param_6;
    *(undefined ***)(unaff_x22 + 0x68) = ppuVar16;
    *(ulong *)(unaff_x22 + 0x70) = param_4;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar5;
    lVar17 = 0;
    func_0x000107c5ede0();
    *(long *)(unaff_x22 + 0x88) = lVar17;
    lVar17 = *(long *)(lVar17 + -8);
    *(long *)(unaff_x22 + 0x90) = lVar17;
    uVar20 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x98) = uVar20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10102d1f0,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010102d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
LAB_10102cdc0:
  func_0x000107c61170(lVar6);
  puVar11 = puStack_80;
  func_0x000107c61558();
  if (((ulong)puVar11 & 1) == 0) {
    param_2 = *(long *)(puStack_80 + 0x10) + 1;
    puStack_80 = (undefined *)0x0;
    func_0x0001000d182c(0,param_2,1);
  }
  uVar9 = *(ulong *)(puStack_80 + 0x10);
  uVar4 = uVar9 + 1;
  if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar9) {
    puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puStack_80 + 0x18));
    param_2 = uVar4;
    func_0x0001000d182c(puVar11,uVar4,1,puStack_80);
    puStack_80 = puVar11;
  }
  *(ulong *)(puStack_80 + 0x10) = uVar4;
  *(ulong *)(puStack_80 + uVar9 * 0x10 + 0x20) = uVar10;
  *(ulong *)(puStack_80 + uVar9 * 0x10 + 0x28) = uVar15;
  bVar2 = param_4 - 1 == uVar3;
  uVar3 = uVar3 + 1;
  if (bVar2) goto LAB_10102cea8;
  goto LAB_10102cc70;
}



/* Entry: 10102d0bc; end: 10102d187;  */

void FUN_10102d0bc(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x108));
  uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = 0x112d38dd0;
  ppuVar4 = &PTR__OBJC_CLASS___NSArray_1126ae530;
  FUN_10102e830(0);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c600f0();
  *(undefined **)(unaff_x22 + 0xb0) = puVar1;
  func_0x000100b60084();
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010102d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)(unaff_x22 + 0x78) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x80) = in_x5;
  *(undefined ***)(unaff_x22 + 0x68) = ppuVar4;
  *(undefined8 *)(unaff_x22 + 0x70) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  lVar5 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x88) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10102d1f0,0,0);
  return;
}



/* Entry: 10102d188; end: 10102d1ef;  */

void FUN_10102d188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x88) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10102d1f0,0,0);
  return;
}



/* Entry: 10102d1f0; end: 10102d38b;  */

/* WARNING: Removing unreachable block (ram,0x00010102d234) */

void FUN_10102d1f0(void)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long unaff_x22;
  
  puVar6 = *(undefined1 **)(unaff_x22 + 0x98);
  func_0x000107c5ed80(puVar6,*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68));
  lVar5 = 0;
  func_0x000107c5ede8();
  *(undefined1 **)(unaff_x22 + 0xa0) = puVar6;
  *(long *)(unaff_x22 + 0xa8) = lVar5;
  lVar7 = *(long *)(unaff_x22 + 0x70);
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))
            (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x10,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x70);
    uVar1 = (undefined4)*(undefined8 *)(unaff_x22 + 0x78);
    FUN_10102aed4();
    func_0x000107c61170(lVar7);
    func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x28,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0xb0) = lVar2;
    if (lVar2 != 0) {
      plVar3 = (long *)0x80;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xb8) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_10102d38c;
      plVar3[0xb] = lVar5;
      plVar3[0xc] = lVar2;
      *(undefined1 *)((long)plVar3 + 0x3d) = 0;
      *(undefined4 *)(plVar3 + 0xf) = uVar1;
      plVar3[10] = (long)puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10102b140,0,0);
      return;
    }
  }
  func_0x00010006c090(puVar6,lVar5);
  FUN_10102de24();
  puVar4 = &UNK_1103789c0;
  func_0x000107c613f8(&UNK_1103789c0,puVar6,0,0);
  *puVar6 = 2;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar4);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010102d388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10102d38c; end: 10102d3e3;  */

void FUN_10102d38c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xb0);
  *(undefined8 *)(lVar2 + 0xc0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb8));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10102d3e4,0,0);
  return;
}



/* Entry: 10102d3e4; end: 10102d537;  */

void FUN_10102d3e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0xc0);
  if (lVar5 == 0) {
    puVar3 = *(undefined1 **)(unaff_x22 + 0xa0);
    func_0x00010006c090(puVar3,*(undefined8 *)(unaff_x22 + 0xa8));
    FUN_10102de24();
    puVar4 = &UNK_1103789c0;
    func_0x000107c613f8(&UNK_1103789c0,puVar3,0,0);
    *puVar3 = 2;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar4);
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x70);
    func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x40,0,0);
    puVar3 = (undefined1 *)(lVar6 + 0x10);
    func_0x000107c61618();
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
    if (puVar3 == (undefined1 *)0x0) {
      FUN_10102de24();
      puVar4 = &UNK_1103789c0;
      func_0x000107c613f8(&UNK_1103789c0,puVar3,0,0);
      *puVar3 = 0;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar4);
      func_0x000107c61170(lVar5);
      func_0x00010006c090(uVar1,uVar2);
    }
    else {
      lVar6 = lVar5;
      FUN_10102b328(*(undefined8 *)PTR__CGPointZero_110347540,
                    *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
      func_0x000107c61170(puVar3);
      *(long *)(unaff_x22 + 0x58) = lVar6;
      func_0x000100b60084(unaff_x22 + 0x58);
      func_0x00010006c090(uVar1,uVar2);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar6);
    }
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010102d534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10102d538; end: 10102d5c7;  */

void FUN_10102d538(undefined8 param_1,long param_2,long param_3)

{
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  if (*(char *)(param_2 + 0x10) == '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_50,1,0);
    *(undefined1 *)(param_2 + 0x10) = 0;
    func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      FUN_10102d5c8();
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 10102d5c8; end: 10102d667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102d5c8(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112d559a0);
  if (lVar4 != 0) {
    func_0x000107c4e454(lVar4);
  }
  puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x000107c61168();
  func_0x000107c43d80();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c448e8();
  if ((int)puVar3 == 0) {
    bVar1 = false;
  }
  else {
    puVar3 = puVar2;
    func_0x000107c3f78c();
    bVar1 = *(long *)(unaff_x20 + _DAT_112d559c0) < (long)puVar3;
  }
  if (lVar4 != 0) {
    func_0x000107c50714(lVar4);
  }
  if (bVar1) {
    FUN_10102d668(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10102d668; end: 10102d923;  */

/* WARNING: Possible PIC construction at 0x00010102d7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010102d8b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010102d7e0) */
/* WARNING: Removing unreachable block (ram,0x00010102d8b4) */
/* WARNING: Removing unreachable block (ram,0x00010102d8bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102d668(ulong param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112d559a0);
  if (lVar5 != 0) {
    func_0x000107c4e454(lVar5);
  }
  uVar3 = param_1;
  func_0x000107c3f78c();
  *(ulong *)(unaff_x20 + _DAT_112d559c0) = uVar3;
  func_0x000107c4a7b0();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_10102e830(0,0x112d55a70,&PTR__OBJC_CLASS___NSItemProvider_1126b3ab0);
  uVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar4);
  func_0x000107c61170(param_1);
  if (lVar5 != 0) {
    func_0x000107c50714(lVar5);
  }
  if (uVar3 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar6 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10102d924);
      (*pcVar1)();
    }
    if ((uVar3 & 0xc000000000000001) == 0) {
      iVar2 = (int)*(undefined8 *)(uVar3 + 0x20);
      func_0x000107c61174();
    }
    else {
      iVar2 = 0;
      FUN_10102df74(0,uVar3,&PTR__OBJC_CLASS___NSItemProvider_1126b3ab0,0x112d55a70);
    }
    uVar4 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010ef20a60);
    func_0x000107c44908();
    func_0x000107c61170(uVar4);
    uVar4 = 0xd000000000000012;
    if (iVar2 == 0) {
      uVar4 = 0x692e63696c627570;
    }
    uVar3 = 0x800000010ef20a60;
    if (iVar2 == 0) {
      uVar3 = 0xec0000006567616d;
    }
    func_0x000107c5fadc(uVar4,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 10102d924; end: 10102dc57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102d924(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    if ((param_2 >> 0x3c < 0xf) && (param_3 == 0)) {
      lVar3 = *(long *)(param_4 + _DAT_112d55980);
      func_0x00010006c00c(param_1,param_2);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x0001000b44c0(param_1,param_2);
      }
      else {
        func_0x000107c5ee20(param_1,param_2);
        puVar1 = &UNK_1103785b0;
        func_0x000107c613fc(&UNK_1103785b0,0x18,7);
        func_0x000107c61614(puVar1 + 0x10,param_4);
        uStack_78 = 0x10102e87c;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        pcStack_88 = FUN_100f91b08;
        puStack_80 = &UNK_110378898;
        ppuVar2 = &puStack_98;
        puStack_70 = puVar1;
        func_0x000107c60bc4(ppuVar2);
        func_0x000107c61574(puStack_70);
        func_0x000107c40ba4(lVar3);
        func_0x0001000b44c0(param_1,param_2);
        func_0x000107c61170(param_4);
        func_0x000107c60bd0(ppuVar2);
        func_0x000107c615e8(lVar3);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10102dc58; end: 10102dcfb;  */

void FUN_10102dc58(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    func_0x000107c6157c(uVar2);
    lVar5 = -0x1000000000000000;
  }
  else {
    lVar5 = param_2;
    func_0x000107c6157c(uVar2);
    lVar3 = param_2;
    func_0x000107c61174(param_2);
    func_0x000107c5ee30(param_2);
    func_0x000107c61170(lVar3);
  }
  uVar4 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,lVar5,param_3);
  func_0x000107c61170(uVar4);
  func_0x0001000b44c0(param_2,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10102dcfc; end: 10102dd73;  */

bool FUN_10102dcfc(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c4c930();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10102dd70);
    (*pcVar1)();
  }
  lVar2 = param_1;
  func_0x000107c4c99c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4c9b4(lVar2);
    func_0x000107c61170(lVar2);
    return lVar3 == param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10102dd74);
  (*pcVar1)();
}



/* Entry: 10102dd74; end: 10102ddbf; -[_TtC33SnapEditorScissorPluginEntryPoint21ScissorPluginProvider init] */

void FUN_10102dd74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorScissorPluginEntryPoint.ScissorPluginProvider",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10102dda0);
  (*pcVar1)();
}



/* Entry: 10102ddc0; end: 10102dde3;  */

undefined8
FUN_10102ddc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112d55a00,&UNK_10d91c9b8);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  puVar2 = &UNK_1103785b0;
  func_0x000107c613fc(&UNK_1103785b0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar4);
  puVar3 = &UNK_110378740;
  func_0x000107c613fc(&UNK_110378740,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(long *)(puVar3 + 0x38) = lVar1;
  *(undefined8 *)(puVar3 + 0x40) = param_4;
  func_0x00010006c00c(param_2,param_3);
  func_0x000107c61174(param_6);
  func_0x000107c6157c(lVar1);
  func_0x000107c61174(param_4);
  uVar4 = 2;
  func_0x0001001ca524(2,2,0x2c,3,0,0,&UNK_10d91ca38,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  uVar4 = uVar5;
  func_0x000107c6157c(uVar5);
  func_0x000103edf0bc();
  func_0x000107c61574(lVar1);
  func_0x000107c61574(uVar5);
  return uVar4;
}



/* Entry: 10102dde4; end: 10102de23;  */

void FUN_10102dde4(void)

{
  FUN_101029bb4();
  return;
}



/* Entry: 10102de24; end: 10102de63;  */

void FUN_10102de24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d55a08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91cafc;
  func_0x000107c61520(&UNK_10d91cafc,&UNK_1103789c0);
  puRam0000000112d55a08 = puVar1;
  return;
}



/* Entry: 10102de64; end: 10102dee3;  */

void FUN_10102de64(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x10102ec5c;
  plVar6[0xf] = lVar3;
  plVar6[0x10] = lVar7;
  plVar6[0xd] = lVar2;
  plVar6[0xe] = lVar1;
  plVar6[0xc] = lVar4;
  lVar4 = 0;
  func_0x000107c5ede0();
  plVar6[0x11] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar6[0x12] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x13] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10102d1f0,0,0);
  return;
}



/* Entry: 10102dee4; end: 10102df07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102dee4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_98;
  ulong uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar6 = *(long *)(lVar1 + _DAT_112d55980);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar1 != 0) {
      func_0x000107c5ee20(uVar2,uVar5);
      puVar3 = &UNK_110378600;
      func_0x000107c613fc(&UNK_110378600,0x20,7);
      *(long *)(puVar3 + 0x10) = lVar1;
      *(undefined8 *)(puVar3 + 0x18) = param_1;
      uStack_78 = 0x10102def8;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      pcStack_88 = FUN_100f91b08;
      puStack_80 = &UNK_110378618;
      ppuVar4 = &puStack_98;
      puStack_70 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_70;
      func_0x000107c615f0(lVar1);
      func_0x000107c6157c(param_1);
      func_0x000107c61574(puVar3);
      func_0x000107c40ba4(lVar1);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar2);
      return;
    }
  }
  puStack_98 = (undefined *)0x0;
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  func_0x00010488e5d4(&puStack_98);
  return;
}



/* Entry: 10102df08; end: 10102df73;  */

/* WARNING: Removing unreachable block (ram,0x00010102d0ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102df08(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  undefined1 *puVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined **ppuVar18;
  ulong uVar19;
  undefined8 in_x4;
  long in_x5;
  long lVar20;
  long lVar21;
  undefined1 *puVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  long unaff_x20;
  long lVar29;
  long unaff_x22;
  int *piVar30;
  ulong uStack_188;
  undefined *puStack_180;
  long *plStack_170;
  
  lVar27 = *(long *)(unaff_x20 + 0x10);
  lVar21 = *(long *)(unaff_x20 + 0x18);
  lVar29 = *(long *)(unaff_x20 + 0x20);
  plVar14 = (long *)0x130;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar14;
  *plVar14 = unaff_x22;
  plVar14[1] = 0x10102ec60;
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14[0x1a] = lVar21;
  plVar14[0x1b] = lVar29;
  plVar14[0x19] = lVar27;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    UNRECOVERED_JUMPTABLE_00 = FUN_10102c51c;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78(param_1);
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar27 = plVar14[0x19];
  func_0x000107c61428(lVar27 + 0x10,plVar14 + 2,0,0);
  lVar27 = lVar27 + 0x10;
  func_0x000107c61618();
  puVar22 = (undefined1 *)0x0;
  if (lVar27 == 0) {
LAB_10102c664:
    FUN_10102de24();
    puVar10 = &UNK_1103789c0;
    uVar19 = 0;
    func_0x000107c613f8(&UNK_1103789c0,puVar22,0);
    *puVar22 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar10);
LAB_10102c698:
    UNRECOVERED_JUMPTABLE_00 = (code *)plVar14[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
                    /* WARNING: Could not recover jumptable at 0x00010102c6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else {
    puVar22 = *(undefined1 **)(lVar27 + _DAT_112d55990);
    func_0x000107c61174();
    func_0x000107c61170(lVar27);
    puVar4 = puVar22;
    func_0x000107c5c734();
    func_0x000107c61180();
    plVar14[0x1c] = (long)puVar4;
    func_0x000107c61170();
    if (puVar4 == (undefined1 *)0x0) goto LAB_10102c664;
    lVar27 = plVar14[0x19];
    uVar19 = 0;
    func_0x000107c61428(lVar27 + 0x10,plVar14 + 5,0);
    puVar22 = (undefined1 *)(lVar27 + 0x10);
    func_0x000107c61618();
    plVar14[0x1d] = (long)puVar22;
    if (puVar22 == (undefined1 *)0x0) {
      lVar27 = plVar14[0x1c];
      FUN_10102de24();
      puVar10 = &UNK_1103789c0;
      uVar19 = 0;
      func_0x000107c613f8(&UNK_1103789c0,puVar22,0);
      *puVar22 = 4;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar10);
      func_0x000107c615e8(lVar27);
      goto LAB_10102c698;
    }
    FUN_10102e830(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar27 = 0;
    func_0x000107c60110();
    plVar14[0x1e] = lVar27;
    UNRECOVERED_JUMPTABLE_00 = (code *)0x70;
    func_0x000107c615b8();
    plVar14[0x1f] = (long)UNRECOVERED_JUMPTABLE_00;
    *(long **)UNRECOVERED_JUMPTABLE_00 = plVar14;
    *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_10102c714;
    lVar20 = plVar14[0x1b];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
      *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x50) = lVar27;
      *(undefined1 **)(UNRECOVERED_JUMPTABLE_00 + 0x58) = puVar22;
      *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x48) = lVar20;
      UNRECOVERED_JUMPTABLE_00 = FUN_10102ab14;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *plVar14;
  uVar28 = *(undefined8 *)(lVar21 + 0xf0);
  uVar25 = *(undefined8 *)(lVar21 + 0xe8);
  plVar14 = (long *)*plVar14;
  *(code **)(lVar21 + 0x100) = UNRECOVERED_JUMPTABLE_00;
  func_0x000107c615c0(*(undefined8 *)(lVar21 + 0xf8));
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar25);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
    UNRECOVERED_JUMPTABLE_00 = FUN_10102c7ac;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)plVar14[0x20];
  if (plVar5 == (long *)0x0) {
    lVar20 = plVar14[0x1c];
    lVar21 = plVar14[0x1a];
    FUN_10102de24();
    puVar10 = &UNK_1103789c0;
    uVar19 = 0;
    func_0x000107c613f8(&UNK_1103789c0,plVar5,0);
    *(undefined1 *)plVar5 = 4;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar10);
    func_0x000107c615e8(lVar20);
    plVar15 = plVar5;
LAB_10102c99c:
    UNRECOVERED_JUMPTABLE_00 = (code *)plVar14[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
                    /* WARNING: Could not recover jumptable at 0x00010102c9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else {
    func_0x000107c45164();
    func_0x000107c61180();
    plVar14[0x21] = (long)plVar5;
    if (plVar5 == (long *)0x0) {
LAB_10102c93c:
      lVar20 = plVar14[0x20];
      lVar29 = plVar14[0x1c];
      lVar21 = plVar14[0x1a];
      plVar15 = (long *)0x112d38dd0;
      FUN_10102e830(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c600f0();
      plVar14[0x16] = (long)puVar10;
      func_0x000100b60084(plVar14 + 0x16);
      func_0x000107c615e8(lVar29);
      func_0x000107c61170(lVar20);
      func_0x000107c61170(puVar10);
      goto LAB_10102c99c;
    }
    lVar21 = plVar14[0x19];
    uVar19 = 0;
    func_0x000107c61428(lVar21 + 0x10,plVar14 + 8,0);
    lVar21 = lVar21 + 0x10;
    func_0x000107c61618();
    if (lVar21 == 0) {
      func_0x000107c61170(plVar5);
      goto LAB_10102c93c;
    }
    lVar20 = plVar14[0x19];
    uVar28 = *(undefined8 *)(lVar21 + _DAT_112d55988);
    func_0x000107c6157c(uVar28);
    func_0x000107c61170(lVar21);
    func_0x0001000d224c(plVar14 + 0x14);
    func_0x000107c61574(uVar28);
    lVar21 = plVar14[0x14];
    lVar29 = plVar14[0x15];
    plVar14[0x22] = lVar21;
    plVar15 = plVar14 + 0xb;
    uVar19 = 0;
    func_0x000107c61428(lVar20 + 0x10,plVar15,0);
    lVar20 = lVar20 + 0x10;
    func_0x000107c61618();
    if (lVar20 == 0) {
LAB_10102c9e4:
      uVar28 = 0xce;
    }
    else {
      lVar23 = *(long *)(lVar20 + _DAT_112d55970);
      func_0x000107c61174();
      func_0x000107c61170(lVar20);
      lVar20 = *(long *)(lVar23 + _DAT_11302baa8);
      func_0x000107c61170(lVar23);
      if (((0x39 < lVar20 - 0xcU || (1L << (lVar20 - 0xcU & 0x3f) & 0x22000400800001bU) == 0) &&
          (lVar20 != 0x5a)) && (lVar20 != 0x51)) goto LAB_10102c9e4;
      uVar28 = 0x7f;
    }
    lVar20 = lVar21;
    func_0x000107c614f0();
    piVar30 = *(int **)(lVar29 + 0x10);
    iVar2 = *piVar30;
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulong)(uint)piVar30[1];
    func_0x000107c615b8();
    plVar14[0x23] = (long)UNRECOVERED_JUMPTABLE_00;
    *(long **)UNRECOVERED_JUMPTABLE_00 = plVar14;
    *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_10102ca68;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
                    /* WARNING: Could not recover jumptable at 0x00010102ca60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar2 + (long)piVar30))(plVar5,2,uVar28,lVar20,lVar29);
      return;
    }
  }
  func_0x000107c60e78();
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = *plVar14;
  lVar29 = *plVar14;
  *(code **)(lVar20 + 0x120) = UNRECOVERED_JUMPTABLE_00;
  func_0x000107c615c0(*(undefined8 *)(lVar20 + 0x118));
  uVar28 = *(undefined8 *)(lVar20 + 0x110);
  if (lVar21 == 0) {
    func_0x000107c615e8(uVar28);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
      UNRECOVERED_JUMPTABLE_00 = FUN_10102cb30;
      goto LAB_107c615e0;
    }
  }
  else {
    func_0x000107c614ac(lVar21);
    func_0x000107c615e8(uVar28);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
      UNRECOVERED_JUMPTABLE_00 = FUN_10102d0bc;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = *(long **)(lVar29 + 0x120);
  plVar14 = (long *)((ulong)plVar5 >> 0x3e);
  if (plVar14 == (long *)0x0) {
    plVar6 = (long *)((long *)((ulong)plVar5 & 0xffffffffffffff8))[2];
  }
  else {
    plVar6 = (long *)((ulong)plVar5 & 0xffffffffffffff8);
    if (((ulong)plVar5 & 0x8000000000000000) != 0) {
      plVar6 = plVar5;
    }
    func_0x000107c60480();
  }
  if (plVar6 == (long *)0x0) {
    uVar28 = *(undefined8 *)(lVar29 + 0x108);
    func_0x000107c6142c(*(undefined8 *)(lVar29 + 0x120));
    func_0x000107c61170(uVar28);
    uVar28 = *(undefined8 *)(lVar29 + 0x100);
    uVar25 = *(undefined8 *)(lVar29 + 0xe0);
    FUN_10102e830(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
    *(undefined **)(lVar29 + 0xb0) = puVar13;
    func_0x000100b60084(lVar29 + 0xb0);
    func_0x000107c615e8(uVar25);
    func_0x000107c61170(uVar28);
  }
  else {
    plVar1 = plVar6;
    if (2 < (long)plVar6) {
      plVar1 = (long *)0x3;
    }
    plStack_170 = (long *)0x3;
    if (-1 < (long)plVar6) {
      plStack_170 = plVar1;
    }
    if (plVar14 == (long *)0x0) {
      uVar7 = *(ulong *)(((ulong)plVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = (ulong)plVar5 & 0xffffffffffffff8;
      if (((ulong)plVar5 & 0x8000000000000000) != 0) {
        uVar7 = *(ulong *)(lVar29 + 0x120);
      }
      uVar8 = uVar7;
      func_0x000107c60480();
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x10102d0b8);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      func_0x000107c60480();
    }
    if ((long)uVar7 < (long)plStack_170) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x10102d0b4);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    if (((ulong)plVar5 & 0xc000000000000001) == 0) {
      func_0x000107c61434(*(undefined8 *)(lVar29 + 0x120));
      func_0x000107c6142c();
      if (plVar14 != (long *)0x0) goto LAB_10102ce5c;
LAB_10102cc3c:
      uStack_188 = (ulong)plVar5 & 0xffffffffffffff8;
      bVar3 = plVar14 != plStack_170;
      plVar5 = plStack_170;
      plStack_170 = (long *)(uStack_188 + 0x20);
      if (bVar3) {
LAB_10102cc54:
        puStack_180 = PTR___swiftEmptyArrayStorage_11034f1c8;
        plVar6 = plVar14;
LAB_10102cc70:
        if ((long)plVar6 < (long)plVar14) {
LAB_10102cfe8:
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x10102cfec);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        plVar1 = plVar6;
        if ((long)plVar6 <= (long)plVar5) {
          plVar1 = plVar5;
        }
        do {
          if (plVar1 == plVar6) goto LAB_10102cfe8;
          lVar20 = plStack_170[(long)plVar6];
          func_0x000107c61174();
          lVar21 = lVar20;
          func_0x000107c60bb8();
          func_0x000107c61180();
          if (lVar21 != 0) {
            lVar23 = lVar21;
            func_0x000107c5ee30();
            func_0x000107c61170(lVar21);
            lVar21 = lVar23;
            plVar16 = plVar15;
            func_0x000107c5ee20();
            lVar9 = lVar21;
            func_0x00010011df08();
            func_0x000107c61180();
            plVar17 = plVar16;
            if (lVar9 == 0) {
              func_0x000107c5faec();
              plVar17 = plVar16;
              func_0x000107c5fadc();
              func_0x000107c6142c(plVar16);
            }
            uVar19 = *(ulong *)(lVar29 + 0xe0);
            *(undefined8 *)(lVar29 + 0xb8) = 0;
            in_x5 = lVar29 + 0xb8;
            in_x4 = 0xc;
            func_0x000107c5e908();
            func_0x000107c61180();
            func_0x000107c61170(lVar9);
            func_0x000107c61170(lVar21);
            lVar21 = *(long *)(lVar29 + 0xb8);
            uVar7 = uVar19;
            func_0x000107c5faec();
            func_0x000107c61174();
            func_0x00010006c090(lVar23);
            func_0x000107c61170(uVar19);
            uVar19 = uVar7 & 0xffffffffffff;
            if (((ulong)plVar17 & 0x2000000000000000) != 0) {
              uVar19 = (ulong)plVar17 >> 0x38 & 0xf;
            }
            if (uVar19 != 0 && lVar21 == 0) goto LAB_10102cdc0;
            func_0x000107c6142c(plVar17);
            func_0x000107c61170(lVar21);
          }
          plVar6 = (long *)((long)plVar6 + 1);
          func_0x000107c61170(lVar20);
          if (plVar5 == plVar6) goto LAB_10102cea8;
        } while( true );
      }
    }
    else {
      func_0x000107c61434(*(undefined8 *)(lVar29 + 0x120));
      if (plStack_170 != (long *)0x0) {
        uVar28 = 0;
        FUN_10102e830(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
        plVar6 = (long *)0x0;
        do {
          plVar15 = *(long **)(lVar29 + 0x120);
          plVar1 = (long *)((long)plVar6 + 1);
          func_0x000107c60318(plVar6,plVar15,uVar28);
          plVar6 = plVar1;
        } while (plStack_170 != plVar1);
      }
      func_0x000107c6142c();
      if (plVar14 == (long *)0x0) goto LAB_10102cc3c;
LAB_10102ce5c:
      plVar6 = *(long **)(lVar29 + 0x120);
      plVar14 = (long *)((ulong)plVar5 & 0xffffffffffffff8);
      if (((ulong)plVar5 & 0x8000000000000000) != 0) {
        plVar14 = plVar6;
      }
      uStack_188 = 0;
      func_0x000107c60484();
      plVar15 = plStack_170;
      func_0x000107c6142c(plVar6);
      plVar5 = (long *)(uVar19 >> 1);
      if (plVar14 != plVar5) goto LAB_10102cc54;
    }
    puStack_180 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_10102cea8:
    lVar21 = *(long *)(lVar29 + 200);
    func_0x000107c615e8(uStack_188);
    puVar10 = puStack_180;
    FUN_10102c3b8(puStack_180);
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8();
    puVar11 = puVar10;
    func_0x000107c5fc48(puVar10,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar10);
    func_0x000107c45788();
    func_0x000107c61170(puVar11);
    *(undefined **)(lVar29 + 0xc0) = puVar13;
    func_0x000100b60084(lVar29 + 0xc0);
    func_0x000107c61170(puVar13);
    uVar19 = 0;
    func_0x000107c61428(lVar21 + 0x10,lVar29 + 0x70,0);
    puVar10 = (undefined *)(lVar21 + 0x10);
    func_0x000107c61618();
    lVar21 = _DAT_112d559b8;
    puVar13 = *(undefined **)(lVar29 + 0x100);
    uVar28 = *(undefined8 *)(lVar29 + 0x108);
    uVar25 = *(undefined8 *)(lVar29 + 0xe0);
    if (puVar10 == (undefined *)0x0) {
      func_0x000107c615e8(uVar25);
      func_0x000107c61170(uVar28);
      func_0x000107c6142c(puStack_180);
    }
    else {
      uVar26 = *(undefined8 *)(lVar29 + 0xd8);
      uVar19 = 0;
      func_0x000107c61428(puVar10 + _DAT_112d559b8,lVar29 + 0x88,0x21);
      uVar12 = *(undefined8 *)(puVar10 + lVar21);
      func_0x000107c61558(uVar12);
      uVar24 = *(undefined8 *)(puVar10 + lVar21);
      *(undefined8 *)(puVar10 + lVar21) = 0x8000000000000000;
      FUN_10102e130(puStack_180,uVar26,uVar12);
      *(undefined8 *)(puVar10 + lVar21) = uVar24;
      func_0x000107c614a8(lVar29 + 0x88);
      func_0x000107c615e8(uVar25);
      func_0x000107c61170(uVar28);
      func_0x000107c61170(puVar13);
      puVar13 = puVar10;
    }
  }
  func_0x000107c61170(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
                    /* WARNING: Could not recover jumptable at 0x00010102d0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar29 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61170(*(undefined8 *)(lVar29 + 0x108));
  uVar25 = *(undefined8 *)(lVar29 + 0x100);
  uVar12 = *(undefined8 *)(lVar29 + 0xe0);
  uVar28 = 0x112d38dd0;
  ppuVar18 = &PTR__OBJC_CLASS___NSArray_1126ae530;
  FUN_10102e830(0);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c600f0();
  *(undefined **)(lVar29 + 0xb0) = puVar10;
  func_0x000100b60084();
  func_0x000107c615e8(uVar12);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
                    /* WARNING: Could not recover jumptable at 0x00010102d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar29 + 8))();
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)(lVar29 + 0x78) = in_x4;
  *(long *)(lVar29 + 0x80) = in_x5;
  *(undefined ***)(lVar29 + 0x68) = ppuVar18;
  *(ulong *)(lVar29 + 0x70) = uVar19;
  *(undefined8 *)(lVar29 + 0x60) = uVar28;
  lVar27 = 0;
  func_0x000107c5ede0();
  *(long *)(lVar29 + 0x88) = lVar27;
  lVar27 = *(long *)(lVar27 + -8);
  *(long *)(lVar29 + 0x90) = lVar27;
  uVar19 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(lVar29 + 0x98) = uVar19;
  UNRECOVERED_JUMPTABLE_00 = FUN_10102d1f0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return;
LAB_10102cdc0:
  func_0x000107c61170(lVar20);
  puVar10 = puStack_180;
  func_0x000107c61558();
  if (((ulong)puVar10 & 1) == 0) {
    plVar15 = (long *)(*(long *)(puStack_180 + 0x10) + 1);
    puStack_180 = (undefined *)0x0;
    func_0x0001000d182c(0,plVar15,1);
  }
  uVar19 = *(ulong *)(puStack_180 + 0x10);
  plVar1 = (long *)(uVar19 + 1);
  if (*(ulong *)(puStack_180 + 0x18) >> 1 <= uVar19) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puStack_180 + 0x18));
    plVar15 = plVar1;
    func_0x0001000d182c(puVar10,plVar1,1,puStack_180);
    puStack_180 = puVar10;
  }
  *(long **)(puStack_180 + 0x10) = plVar1;
  *(ulong *)(puStack_180 + uVar19 * 0x10 + 0x20) = uVar7;
  *(long **)(puStack_180 + uVar19 * 0x10 + 0x28) = plVar17;
  bVar3 = (long *)((long)plVar5 + -1) == plVar6;
  plVar6 = (long *)((long)plVar6 + 1);
  if (bVar3) goto LAB_10102cea8;
  goto LAB_10102cc70;
}



/* Entry: 10102df74; end: 10102e12f;  */

ulong FUN_10102df74(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10102e058);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10102e05c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10102e830(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10102e130);
  (*pcVar2)();
}



/* Entry: 10102e130; end: 10102e25f;  */

void FUN_10102e130(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_100f89a68();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10102e1f4);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_10102e3bc(lVar5);
    uVar2 = param_2;
    FUN_100f89a68();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___ss5Int64VN_11034ee50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10102e1c0);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_10102e260();
    lVar5 = *unaff_x20;
    goto joined_r0x00010102e208;
  }
  lVar5 = *unaff_x20;
joined_r0x00010102e208:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10102e260);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 10102e260; end: 10102e3bb;  */

void FUN_10102e260(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112d55a30,&UNK_10d91ca10);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_10102e33c;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61434();
        if (uVar6 != 0) break;
LAB_10102e33c:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10102e3bc);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_10102e394;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_10102e394:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10102e3bc; end: 10102e61f;  */

void FUN_10102e3bc(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112d55a30;
  func_0x0001000285a8(0x112d55a30,&UNK_10d91ca10);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_10102e5ec:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10102e61c);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar12,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_10102e5ec;
        }
        uVar16 = puVar12[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar13);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10102e620);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 10102e620; end: 10102e637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102e620(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = PTR_PTR_1126bcf20;
  func_0x000107c610f8(PTR_PTR_1126bcf20);
  func_0x000107c453e4();
  func_0x000107c56438();
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar8 = *(long *)(lVar2 + _DAT_112d55970);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    puVar9 = *(undefined **)(lVar8 + _DAT_11302bad8);
    func_0x000107c615f0(puVar9);
    func_0x000107c61170(lVar8);
    puVar3 = puVar9;
    func_0x000107c4ca08();
    func_0x000107c61180();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar9;
      func_0x000107c4ca6c(puVar9);
      func_0x000107c61180();
      puVar5 = &UNK_1103786c8;
      func_0x000107c613fc(&UNK_1103786c8,0x28,7);
      *(undefined8 *)(puVar5 + 0x10) = param_1;
      *(undefined **)(puVar5 + 0x18) = puVar3;
      *(undefined8 *)(puVar5 + 0x20) = uVar7;
      uStack_78 = 0x10102e62c;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      uStack_88 = 0x10102ec58;
      puStack_80 = &UNK_1103786e0;
      ppuVar6 = &puStack_98;
      puStack_70 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar5 = puStack_70;
      func_0x000107c61174(uVar7);
      func_0x000107c6157c(param_1);
      func_0x000107c61174(puVar3);
      func_0x000107c61574(puVar5);
      func_0x000107c5dc64(puVar4);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(puVar9);
      func_0x000107c61170(puVar3);
      puVar1 = puVar4;
      goto LAB_10102b66c;
    }
    func_0x000107c615e8(puVar9);
  }
  puStack_98 = (undefined *)0x0;
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  func_0x00010488e5d4(&puStack_98);
LAB_10102b66c:
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10102e638; end: 10102e65b;  */

void FUN_10102e638(void)

{
  FUN_10102ba10();
  return;
}



/* Entry: 10102e65c; end: 10102e6ef;  */

void FUN_10102e65c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0x1e0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10102e6f0;
  plVar7[0x27] = lVar6;
  plVar7[0x28] = lVar8;
  plVar7[0x25] = lVar5;
  plVar7[0x26] = lVar3;
  plVar7[0x23] = lVar4;
  plVar7[0x24] = lVar2;
  plVar7[0x22] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10102a0ec,0,0);
  return;
}



/* Entry: 10102e6f0; end: 10102e72b;  */

void FUN_10102e6f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010102e728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10102e72c; end: 10102e763;  */

/* WARNING: Removing unreachable block (ram,0x00010102bf94) */
/* WARNING: Removing unreachable block (ram,0x00010102bf98) */
/* WARNING: Removing unreachable block (ram,0x00010102bf90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102e72c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  ppuVar4 = &puStack_c0;
  func_0x000107c61428(lVar1 + 0x10,auStack_88,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uStack_b8 = 0xf000000000000000;
    puStack_c0 = (undefined *)0x0;
    pcStack_b0 = (code *)0x0;
    puStack_a8 = (undefined *)0x0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    func_0x00010488e5d4(&puStack_c0);
  }
  else {
    uVar6 = *(undefined8 *)(lVar1 + _DAT_112d559b0);
    func_0x000107c61174(uVar6);
    func_0x000107c61170(lVar1);
    puVar2 = PTR_PTR_1126dbce8;
    func_0x000107c61168(PTR_PTR_1126dbce8);
    func_0x000107c5fadc(uVar3,uVar5);
    uStack_a0 = 0x10102e754;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    pcStack_b0 = FUN_10102c020;
    puStack_a8 = &UNK_110378758;
    uStack_98 = param_1;
    func_0x000107c60bc4(&puStack_c0);
    uVar5 = uStack_98;
    func_0x000107c61174(uVar6);
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar5);
    func_0x000107c42d00(uVar7,puVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 10102e764; end: 10102e7a7;  */

void FUN_10102e764(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = &DAT_10dd3cdf8;
    func_0x000107c61520(&DAT_10dd3cdf8,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 10102e7a8; end: 10102e7af;  */

void FUN_10102e7a8(long param_1)

{
  undefined8 unaff_x20;
  long lVar1;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_1;
  func_0x000107c44314();
  if (lVar1 == 0) {
    func_0x000107c4407c();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar1 = 0;
      unaff_x20 = 0;
    }
    else {
      lVar1 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    uStack_38 = 0;
    lStack_48 = lVar1;
    uStack_40 = unaff_x20;
    func_0x000107c61434(unaff_x20);
    func_0x00010488e5d4(&lStack_48);
    func_0x000107c61430(unaff_x20,2);
  }
  else {
    lStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x00010488e5d4(&lStack_48);
  }
  return;
}



/* Entry: 10102e7b0; end: 10102e827;  */

void FUN_10102e7b0(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,1,0);
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 10102e828; end: 10102e82f;  */

void FUN_10102e828(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  if (*(char *)(lVar1 + 0x10) == '\x01') {
    func_0x000107c61428(lVar1 + 0x10,auStack_50,1,0);
    *(undefined1 *)(lVar1 + 0x10) = 0;
    func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_10102d5c8();
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 10102e830; end: 10102e86f;  */

void FUN_10102e830(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10102e870; end: 10102e883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102e870(undefined8 param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if ((param_2 >> 0x3c < 0xf) && (param_3 == 0)) {
      lVar4 = *(long *)(lVar3 + _DAT_112d55980);
      func_0x00010006c00c(param_1,param_2);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x0001000b44c0(param_1,param_2);
      }
      else {
        func_0x000107c5ee20(param_1,param_2);
        puVar1 = &UNK_1103785b0;
        func_0x000107c613fc(&UNK_1103785b0,0x18,7);
        func_0x000107c61614(puVar1 + 0x10,lVar3);
        uStack_78 = 0x10102e87c;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        pcStack_88 = FUN_100f91b08;
        puStack_80 = &UNK_110378898;
        ppuVar2 = &puStack_98;
        puStack_70 = puVar1;
        func_0x000107c60bc4(ppuVar2);
        func_0x000107c61574(puStack_70);
        func_0x000107c40ba4(lVar4);
        func_0x0001000b44c0(param_1,param_2);
        func_0x000107c61170(lVar3);
        func_0x000107c60bd0(ppuVar2);
        func_0x000107c615e8(lVar4);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10102e884; end: 10102e8af;  */

long FUN_10102e884(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10102e8b0; end: 10102e8bb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10102e8b0(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10102e8bc; end: 10102e95b;  */

undefined8 * FUN_10102e8bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar2,uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 10102e95c; end: 10102e99b;  */

undefined8 * FUN_10102e95c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  return param_1;
}



/* Entry: 10102e99c; end: 10102ebb7;  */

int FUN_10102e99c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10102ebb8; end: 10102ebf7;  */

void FUN_10102ebb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d55a78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91cad4;
  func_0x000107c61520(&UNK_10d91cad4,&UNK_1103789c0);
  puRam0000000112d55a78 = puVar1;
  return;
}



/* Entry: 10102ebf8; end: 10102ec63;  */

void FUN_10102ebf8(long param_1,long param_2)

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



/* Entry: 10102ec64; end: 10102f07b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102ec64(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puVar11;
  long extraout_x8;
  long unaff_x20;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  uStack_a8 = param_1;
  func_0x000107c5f804();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_112d55a80);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d55a88);
  func_0x000107c5b034();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d55a90);
  uStack_b8 = uVar4;
  func_0x000107c410ec();
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d55a98) + _DAT_112e98970);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d55aa0);
  uStack_c0 = uVar5;
  func_0x000107c6157c(uVar13);
  func_0x000107c5c800();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d55aa8) + _DAT_113091b70);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d55ab0);
  uStack_c8 = uVar4;
  func_0x000107c615f0(uVar14);
  func_0x000107c3dd40();
  func_0x000107c61180();
  lVar6 = 0;
  uStack_d0 = uVar5;
  func_0x00010102dda0();
  lStack_d8 = lVar6;
  func_0x000107c610f8();
  lVar1 = _DAT_112d559a8;
  puVar7 = PTR_PTR_1126bb1d0;
  func_0x000107c610f8();
  func_0x000107c45db0();
  *(undefined **)(lVar6 + lVar1) = puVar7;
  lVar1 = _DAT_112d559b0;
  ppuVar12 = &PTR____CFConstantStringClassReference_110f27c18;
  (**(code **)(lVar15 + 0x68))
            (auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3
            );
  puVar7 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f27c18);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(ppuVar12);
  (**(code **)(lVar15 + 8))(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  *(undefined **)(lVar6 + lVar1) = puVar7;
  lVar1 = _DAT_112d559b8;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10102f1d4();
  *(undefined **)(lVar6 + lVar1) = puVar7;
  *(undefined8 *)(lVar6 + _DAT_112d559c0) = 0;
  lVar1 = _DAT_112d559c8;
  puVar7 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar6 + lVar1) = puVar7;
  lVar1 = _DAT_112d559d0;
  puVar7 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = uStack_b0;
  uVar8 = uStack_b8;
  uVar9 = uStack_c0;
  uVar5 = uStack_c8;
  uVar4 = uStack_d0;
  *(undefined **)(lVar6 + lVar1) = puVar7;
  *(undefined8 *)(lVar6 + _DAT_112d55970) = uStack_b0;
  *(undefined8 *)(lVar6 + _DAT_112d55978) = uStack_b8;
  *(undefined8 *)(lVar6 + _DAT_112d55980) = uStack_c0;
  *(undefined8 *)(lVar6 + _DAT_112d55988) = uVar13;
  *(undefined8 *)(lVar6 + _DAT_112d55990) = uStack_c8;
  *(undefined8 *)(lVar6 + _DAT_112d55998) = uVar14;
  *(undefined8 *)(lVar6 + _DAT_112d559a0) = uStack_d0;
  puVar7 = PTR_s_init_1125d9248;
  lStack_68 = lStack_d8;
  lStack_70 = lVar6;
  func_0x000107c6157c(uVar13);
  func_0x000107c615f0(uVar14);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c615f0(uVar4);
  plVar10 = &lStack_70;
  func_0x000107c61154(plVar10,puVar7);
  FUN_1010292e0();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61574(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar14);
  func_0x000107c615e8(uVar4);
  puVar7 = &UNK_110378a40;
  func_0x000107c613fc(&UNK_110378a40,0x18,7);
  *(long **)(puVar7 + 0x10) = plVar10;
  puVar11 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_80 = FUN_10102f2d8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_101016bdc;
  puStack_88 = &UNK_110378a58;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c61174(plVar10);
  func_0x000107c46b38(puVar11);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61574(puStack_78);
  func_0x000107c58c54(uStack_a8);
  func_0x000107c61170(plVar10);
  func_0x000107c61170(puVar11);
  return;
}



/* Entry: 10102f07c; end: 10102f0cb; -[_TtC33SnapEditorScissorPluginEntryPoint23SnapEditorScissorPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x00010102f0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010102f0b8) */

void FUN_10102f07c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10102ec64(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10102f0cc; end: 10102f12b; -[_TtC33SnapEditorScissorPluginEntryPoint23SnapEditorScissorPlugin init] */

void FUN_10102f0cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorScissorPluginEntryPoint.SnapEditorScissorPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10102f0f8);
  (*pcVar1)();
}



/* Entry: 10102f12c; end: 10102f1b3; -[_TtC33SnapEditorScissorPluginEntryPoint23SnapEditorScissorPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010102f148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010102f168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010102f188: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010102f16c) */
/* WARNING: Removing unreachable block (ram,0x00010102f14c) */
/* WARNING: Removing unreachable block (ram,0x00010102f18c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102f12c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d55a80));
  return;
}



/* Entry: 10102f1b4; end: 10102f1d3;  */

void FUN_10102f1b4(void)

{
  func_0x000107c61168(&PTR_PTR_1127a9440);
  return;
}



/* Entry: 10102f1d4; end: 10102f2d7;  */

undefined * FUN_10102f1d4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112d55a30);
  puVar2 = puVar8;
  func_0x000107c60498();
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar9;
  FUN_100f89a68();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar7 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar9;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10102f2d8);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61434();
        return puVar2;
      }
      uVar9 = puVar6[-1];
      uVar4 = *puVar6;
      func_0x000107c61434();
      uVar3 = uVar9;
      FUN_100f89a68();
      puVar6 = puVar6 + 2;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10102f2a8);
  (*pcVar1)();
}



/* Entry: 10102f2d8; end: 10102f2f7;  */

void FUN_10102f2d8(void)

{
  FUN_1010296f4();
  return;
}



/* Entry: 10102f2f8; end: 10102f313;  */

void FUN_10102f2f8(long param_1,long param_2)

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



/* Entry: 10102f314; end: 10102f5ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10102f314(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(long *)(unaff_x20 + _DAT_112d55ae0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d55ae8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d55af0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d55af8) = param_5;
  lVar4 = _DAT_112e98a08;
  uVar7 = *(undefined8 *)(param_6 + _DAT_112e98a08);
  *(undefined8 *)(unaff_x20 + _DAT_112d55b00) = uVar7;
  *(undefined8 *)(unaff_x20 + _DAT_112d55b08) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d55b10) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d55b18) = param_9;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar2 = auStack_70;
  func_0x000107c61154(puVar2,puVar1);
  iVar6 = (int)*(undefined8 *)(param_3 + _DAT_11302ecd0);
  func_0x000107c61174();
  func_0x000107c4a478();
  if (iVar6 != 0) {
    uVar7 = *(undefined8 *)(param_1 + _DAT_11302ba70);
    uVar8 = *(undefined8 *)(param_6 + lVar4);
    lVar3 = 0;
    FUN_10102f1b4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112d55a80) = param_2;
    *(undefined8 *)(lVar4 + _DAT_112d55a88) = param_5;
    *(undefined8 *)(lVar4 + _DAT_112d55a90) = param_4;
    *(undefined8 *)(lVar4 + _DAT_112d55a98) = uVar8;
    *(undefined8 *)(lVar4 + _DAT_112d55aa0) = param_7;
    *(undefined8 *)(lVar4 + _DAT_112d55aa8) = param_8;
    *(undefined8 *)(lVar4 + _DAT_112d55ab0) = param_9;
    puVar1 = PTR_s_init_1125d9248;
    lStack_80 = lVar4;
    lStack_78 = lVar3;
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_9);
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar8);
    plVar5 = &lStack_80;
    func_0x000107c61154(plVar5,puVar1);
    func_0x000107c4fba8(uVar7);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(plVar5);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(puVar2);
  return puVar2;
}



/* Entry: 10102f600; end: 10102f65f; -[_TtC33SnapEditorScissorPluginEntryPoint33SnapEditorScissorPluginEntryPoint init] */

void FUN_10102f600(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorScissorPluginEntryPoint.SnapEditorScissorPluginEntryPoint",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10102f62c);
  (*pcVar1)();
}



/* Entry: 10102f660; end: 10102f6f7; -[_TtC33SnapEditorScissorPluginEntryPoint33SnapEditorScissorPluginEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010102f67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010102f69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010102f6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010102f6dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010102f6c0) */
/* WARNING: Removing unreachable block (ram,0x00010102f6a0) */
/* WARNING: Removing unreachable block (ram,0x00010102f680) */
/* WARNING: Removing unreachable block (ram,0x00010102f6e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102f660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d55ae0));
  return;
}



/* Entry: 10102f6f8; end: 10102f703;  */

void FUN_10102f6f8(void)

{
  return;
}



/* Entry: 10102f704; end: 10102f723;  */

void FUN_10102f704(void)

{
  func_0x000107c61168(&PTR_PTR_1127a9530);
  return;
}



/* Entry: 10102f724; end: 10102f72f; -[SCSnapEditorScissorPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102f724(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55b48;
  func_0x000107c61428(param_1 + _DAT_112d55b48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10102f730; end: 10102f73b; -[SCSnapEditorScissorPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102f730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55b48;
  func_0x000107c61428(param_1 + _DAT_112d55b48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10102f73c; end: 10102f747; -[SCSnapEditorScissorPluginEntryPoint scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102f73c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55b50;
  func_0x000107c61428(param_1 + _DAT_112d55b50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10102f748; end: 10102f753; -[SCSnapEditorScissorPluginEntryPoint setScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102f748(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55b50;
  func_0x000107c61428(param_1 + _DAT_112d55b50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10102f754; end: 10102f75f; -[SCSnapEditorScissorPluginEntryPoint creativeToolsABServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102f754(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55b58;
  func_0x000107c61428(param_1 + _DAT_112d55b58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10102f760; end: 10102f76b; -[SCSnapEditorScissorPluginEntryPoint setCreativeToolsABServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102f760(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55b58;
  func_0x000107c61428(param_1 + _DAT_112d55b58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10102f76c; end: 10102f777; -[SCSnapEditorScissorPluginEntryPoint customStickerManagerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102f76c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55b60;
  func_0x000107c61428(param_1 + _DAT_112d55b60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10102f778; end: 10102f783; -[SCSnapEditorScissorPluginEntryPoint setCustomStickerManagerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102f778(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55b60;
  func_0x000107c61428(param_1 + _DAT_112d55b60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10102f784; end: 10102f78f; -[SCSnapEditorScissorPluginEntryPoint contentDeliveryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102f784(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55b68;
  func_0x000107c61428(param_1 + _DAT_112d55b68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10102f790; end: 10102f79b; -[SCSnapEditorScissorPluginEntryPoint setContentDeliveryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102f790(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55b68;
  func_0x000107c61428(param_1 + _DAT_112d55b68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10102f79c; end: 10102f7a7; -[SCSnapEditorScissorPluginEntryPoint contentRecognitionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102f79c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55b70;
  func_0x000107c61428(param_1 + _DAT_112d55b70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10102f7a8; end: 10102f7b3; -[SCSnapEditorScissorPluginEntryPoint setContentRecognitionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102f7a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55b70;
  func_0x000107c61428(param_1 + _DAT_112d55b70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10102f7b4; end: 10102f7bf; -[SCSnapEditorScissorPluginEntryPoint temporaryFileWriterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102f7b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55b78;
  func_0x000107c61428(param_1 + _DAT_112d55b78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


