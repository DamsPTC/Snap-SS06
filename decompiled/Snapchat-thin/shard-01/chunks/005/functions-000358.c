/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011886d4; end: 101188797;  */

void FUN_1011886d4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar3 = 0x112d5dfc0;
  FUN_10118a03c(0x112d5dfc0,&PTR__OBJC_CLASS___PHAsset_1126bd898,0x112d627d0,&UNK_10d9285a8);
  func_0x000107c613fc();
  *(long *)(unaff_x22 + 0x90) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 3;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x20) = uVar6;
  plVar7 = (long *)0x160;
  func_0x000107c61174(uVar6);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101188798;
  lVar1 = *(long *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  lVar5 = *(long *)(unaff_x22 + 0x78);
  *(undefined1 *)(plVar7 + 0x2a) = *(undefined1 *)(unaff_x22 + 0xd8);
  plVar7[0x15] = lVar1;
  plVar7[0x16] = lVar2;
  plVar7[0x13] = lVar3;
  plVar7[0x14] = lVar5;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x17] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101188c84,0,0);
  return;
}



/* Entry: 101188798; end: 101188807;  */

void FUN_101188798(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x90);
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xa0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x98));
  func_0x000107c61574(uVar1);
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001011887e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101188808,0,0);
  return;
}



/* Entry: 101188808; end: 101188947;  */

void FUN_101188808(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long unaff_x22;
  
  uVar7 = *(ulong *)(unaff_x22 + 0xa0);
  if (uVar7 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar2 = uVar7;
    }
    func_0x000107c60480();
  }
  if (uVar2 != 0) {
    if ((uVar7 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101188948);
        (*pcVar1)();
      }
      lVar8 = *(long *)(unaff_x22 + 0xa0);
      uVar3 = *(undefined8 *)(lVar8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = 0;
      func_0x00010118a0b4(0,*(undefined8 *)(unaff_x22 + 0xa0));
      lVar8 = *(long *)(unaff_x22 + 0xa0);
    }
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
    lVar6 = *(long *)(unaff_x22 + 0x88);
    func_0x000107c6142c(lVar8);
    plVar9 = *(long **)(lVar6 + 0x10);
    plVar4 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101188948;
    plVar4[5] = unaff_x22 + 0x10;
    plVar4[6] = (long)plVar9;
    lVar6 = *(long *)(*plVar9 + 0x50);
    plVar4[7] = lVar6;
    lVar8 = 0;
    __sSqMa(0,lVar6);
    plVar4[8] = lVar8;
    lVar8 = *(long *)(lVar8 + -8);
    plVar4[9] = lVar8;
    uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar4[10] = uVar7;
    lVar8 = *(long *)(lVar6 + -8);
    plVar4[0xb] = lVar8;
    uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar4[0xc] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  puVar5 = *(undefined8 **)(unaff_x22 + 0xa0);
  func_0x000107c6142c();
  FUN_10118a278();
  func_0x000107c613f8(&UNK_11038b6e0,puVar5,0,0);
  *puVar5 = 0xd000000000000052;
  puVar5[1] = 0x800000010ef29a80;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x00010118892c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101188948; end: 10118898f;  */

void FUN_101188948(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101188990,0,0);
  return;
}



/* Entry: 101188990; end: 101188a87;  */

void FUN_101188990(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x00010118a2d0(unaff_x22 + 0x10,uVar2);
  lVar4 = 0x112d62390;
  FUN_10118a03c(0x112d62390,&PTR_PTR_1126aff40,0x112d62788,&UNK_10d928550);
  func_0x000107c613fc();
  *(long *)(unaff_x22 + 0xb8) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 3;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined8 *)(lVar4 + 0x20) = uVar7;
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c61174(uVar7);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101188a88;
                    /* WARNING: Could not recover jumptable at 0x000101188a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(lVar4,*(undefined8 *)(unaff_x22 + 0x70),uVar2,lVar3);
  return;
}



/* Entry: 101188a88; end: 101188aef;  */

void FUN_101188a88(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar3 + 200) = param_1;
  *(long *)(lVar3 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xc0));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101188af0;
  }
  else {
    pcVar2 = FUN_101188bdc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101188af0; end: 101188bdb;  */

void FUN_101188af0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  if (*(long *)(lVar4 + 0x10) == 0) {
    func_0x000107c6142c(lVar4);
    puVar1 = (undefined8 *)(unaff_x22 + 0x10);
    func_0x00010118a2f4();
    FUN_10118a278();
    func_0x000107c613f8(&UNK_11038b6e0,puVar1,0,0);
    *puVar1 = 0xd000000000000052;
    puVar1[1] = 0x800000010ef29a80;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 1;
    func_0x000107c61654();
    func_0x000107c61170(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    FUN_100fb8650(lVar4 + 0x20,unaff_x22 + 0x38);
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(lVar4);
    FUN_100fb8694(unaff_x22 + 0x38,uVar2);
    func_0x00010118a2f4(unaff_x22 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101188bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101188bdc; end: 101188c83;  */

void FUN_101188bdc(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x00010118a2f4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101188c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101188c84; end: 101188d67;  */

void FUN_101188c84(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  
  puVar5 = *(undefined8 **)(unaff_x22 + 0x98);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar1 = *(undefined8 **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar1 = (undefined8 *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < puVar5) {
      puVar1 = puVar5;
    }
    func_0x000107c60480();
  }
  if (puVar1 != (undefined8 *)0x0) {
    plVar6 = *(long **)(*(long *)(unaff_x22 + 0xb0) + 0x20);
    plVar2 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xc0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101188d68;
    plVar2[5] = unaff_x22 + 0x60;
    plVar2[6] = (long)plVar6;
    lVar7 = *(long *)(*plVar6 + 0x50);
    plVar2[7] = lVar7;
    lVar3 = 0;
    __sSqMa(0,lVar7);
    plVar2[8] = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    plVar2[9] = lVar3;
    uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[10] = uVar4;
    lVar3 = *(long *)(lVar7 + -8);
    plVar2[0xb] = lVar3;
    uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  FUN_10118a278();
  func_0x000107c613f8(&UNK_11038b6e0,puVar1,0,0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 3) = 4;
  func_0x000107c61654();
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x000101188d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101188d68; end: 101188daf;  */

void FUN_101188d68(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101188db0,0,0);
  return;
}



/* Entry: 101188db0; end: 101188e4f;  */

void FUN_101188db0(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x60);
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0xb0) + 0x30);
  uVar1 = 0x112d62790;
  func_0x0001000285a8(0x112d62790,&UNK_10d928558);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0xd8) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101188e50;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x78;
  plVar2[9] = unaff_x22 + 0x70;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x68;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_FUN_1107a6e88;
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



/* Entry: 101188e50; end: 101188f77;  */

void FUN_101188e50(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xd0));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x101188ea8;
  }
  else {
    pcVar1 = FUN_101189494;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101188f78; end: 1011890df;  */

void FUN_101188f78(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  lVar9 = *(long *)(unaff_x22 + 0xb0);
  cVar1 = *(char *)(unaff_x22 + 0x150);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = uVar8;
  func_0x000107c3fd4c();
  func_0x000107c615e8(uVar8);
  uVar8 = 0;
  if (cVar1 != '\x01') {
    uVar8 = uVar13;
  }
  func_0x0001000285a8(0x112d62798,&UNK_10d928560);
  uVar13 = *(undefined8 *)(lVar9 + 0x28);
  puVar3 = &UNK_11038b218;
  func_0x000107c613fc(&UNK_11038b218,0x68,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = uVar13;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(puVar3 + 0x20) = uVar10;
  *(undefined8 *)(puVar3 + 0x38) = uVar12;
  *(undefined8 *)(puVar3 + 0x30) = uVar11;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(puVar3 + 0x48) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(puVar3 + 0x40) = uVar10;
  puVar3[0x50] = (char)uVar2;
  *(undefined8 *)(puVar3 + 0x58) = uVar6;
  *(undefined8 *)(puVar3 + 0x60) = uVar8;
  func_0x000107c615f0(uVar5);
  func_0x000107c61174(uVar13);
  func_0x000107c61434(uVar7);
  func_0x000107c615f0(uVar6);
  uVar2 = uVar5;
  func_0x0001048897a0(uVar5,1,0,FUN_10118a2b8,puVar3);
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar2;
  func_0x000107c61574(puVar3);
  func_0x000107c615e8(uVar5);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1011890e0;
                    /* WARNING: Could not recover jumptable at 0x0001011890dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101188560(plVar4,unaff_x22 + 0x10);
  return;
}



/* Entry: 1011890e0; end: 101189143;  */

void FUN_1011890e0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xf0);
  *(long *)(lVar3 + 0x100) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xf8));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101189144;
  }
  else {
    pcVar2 = FUN_101189500;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101189144; end: 1011893af;  */

void FUN_101189144(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined1 uVar14;
  
  func_0x0001000bb420(unaff_x22 + 0x10,unaff_x22 + 0x30);
  plVar2 = (long *)0x112d627a0;
  func_0x0001000285a8(0x112d627a0,&UNK_10d928570);
  lVar3 = unaff_x22 + 0x80;
  func_0x000107c6147c(lVar3,unaff_x22 + 0x30,PTR___sypN_11034f1a8 + 8,plVar2,6);
  if ((int)lVar3 == 0) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar12 = *(undefined8 *)(unaff_x22 + 200);
    plVar13 = (long *)(unaff_x22 + 0x10);
    func_0x00010118a2d0(plVar13,*(undefined8 *)(unaff_x22 + 0x28));
    func_0x000107c614c0();
    uVar14 = 2;
    plVar9 = plVar13;
  }
  else {
    plVar13 = *(long **)(unaff_x22 + 0x80);
    *(long **)(unaff_x22 + 0x108) = plVar13;
    if ((ulong)plVar13 >> 0x3e == 0) {
      plVar9 = *(long **)(((ulong)plVar13 & 0xffffffffffffff8) + 0x10);
    }
    else {
      plVar9 = (long *)((ulong)plVar13 & 0xffffffffffffff8);
      if ((long *)0x7fffffffffffffff < plVar13) {
        plVar9 = plVar13;
      }
      func_0x000107c60480();
    }
    plVar8 = *(long **)(unaff_x22 + 0x98);
    if ((ulong)plVar8 >> 0x3e == 0) {
      plVar10 = *(long **)(((ulong)plVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      plVar10 = (long *)((ulong)plVar8 & 0xffffffffffffff8);
      if ((long *)0x7fffffffffffffff < plVar8) {
        plVar10 = plVar8;
      }
      func_0x000107c60480();
    }
    if (plVar9 == plVar10) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
      *(undefined8 *)(unaff_x22 + 0x88) = plVar13;
      lVar3 = 0;
      func_0x000107c5fd0c();
      (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar11,1,1,lVar3);
      plVar13 = (long *)0xe0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x110) = plVar13;
      lVar4 = 0;
      func_0x00010118a478(0,0x112d62390,&PTR_PTR_1126aff40);
      lVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      lVar5 = lVar3;
      FUN_10118a314();
      *plVar13 = unaff_x22;
      plVar13[1] = (long)FUN_1011893b0;
      puVar1 = PTR___ss5ErrorWS_11034ee10;
      lVar6 = *(long *)(unaff_x22 + 0xb8);
      plVar13[0x16] = unaff_x22 + 0x88;
      plVar13[0x17] = unaff_x22 + 0x90;
      plVar13[0x14] = lVar5;
      plVar13[0x15] = (long)puVar1;
      plVar13[0x12] = lVar4;
      plVar13[0x13] = lVar3;
      plVar13[0x10] = 0;
      plVar13[0x11] = (long)plVar2;
      plVar13[0xe] = lVar6;
      plVar13[0xf] = (long)&UNK_10d928578;
      lVar3 = *(long *)(lVar3 + -8);
      plVar13[0x18] = lVar3;
      uVar7 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar13[0x19] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488ea3c,0,0);
      return;
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar12 = *(undefined8 *)(unaff_x22 + 200);
    func_0x000107c6142c();
    uVar14 = 0;
    plVar2 = plVar10;
  }
  FUN_10118a278();
  func_0x000107c613f8(&UNK_11038b6e0,plVar13,0,0);
  *plVar13 = (long)plVar2;
  plVar13[1] = (long)plVar9;
  plVar13[2] = 0;
  *(undefined1 *)(plVar13 + 3) = uVar14;
  func_0x000107c61654();
  func_0x000107c615e8(uVar11);
  func_0x000107c615e8(uVar12);
  func_0x00010118a2f4(unaff_x22 + 0x10);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010118929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1011893b0; end: 10118943b;  */

void FUN_1011893b0(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x110));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x108);
    *(undefined8 *)(lVar3 + 0x118) = param_1;
    FUN_10118a398(*(undefined8 *)(lVar3 + 0xb8),0x112d453c8,&UNK_10d90ac60);
    func_0x000107c6142c(uVar2);
    pcVar1 = FUN_10118943c;
  }
  else {
    pcVar1 = FUN_101189548;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10118943c; end: 101189493;  */

void FUN_10118943c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c615e8(uVar2);
  func_0x00010118a2f4(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101189490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x118));
  return;
}



/* Entry: 101189494; end: 1011894ff;  */

void FUN_101189494(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar3;
  func_0x000107c615e8(uVar2);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x0001011894fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101189500; end: 101189547;  */

void FUN_101189500(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615e8(uVar1);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x000101189544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101189548; end: 1011895c7;  */

void FUN_101189548(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c615e8(uVar1);
  FUN_10118a398(uVar3,0x112d453c8,&UNK_10d90ac60);
  func_0x00010118a2f4(unaff_x22 + 0x10);
  func_0x000107c6142c(uVar2);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x0001011895c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1011895c8; end: 1011895e3;  */

void FUN_1011895c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011895e4,0,0);
  return;
}



/* Entry: 1011895e4; end: 101189683;  */

void FUN_1011895e4(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x40) + 0x18);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10118963c;
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



/* Entry: 101189684; end: 101189703;  */

void FUN_101189684(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x00010118a2d0(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101189704;
                    /* WARNING: Could not recover jumptable at 0x000101189700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x38),uVar2,lVar3);
  return;
}



/* Entry: 101189704; end: 101189783;  */

void FUN_101189704(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x70) = param_3;
    *(undefined8 *)(lVar2 + 0x60) = param_2;
    *(undefined8 *)(lVar2 + 0x68) = param_1;
    pcVar1 = FUN_101189784;
  }
  else {
    pcVar1 = (code *)0x1011897c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101189784; end: 1011897f3;  */

void FUN_101189784(void)

{
  long unaff_x22;
  
  func_0x00010118a2f4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001011897bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x60),
             *(undefined1 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 1011897f4; end: 101189843;  */

void FUN_1011897f4(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101189844;
  plVar1[7] = param_1;
  plVar1[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101187b90,0,0);
  return;
}



/* Entry: 101189844; end: 1011898a3;  */

void FUN_101189844(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001011898a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1011898a4; end: 101189937;  */

void FUN_1011898a4(long param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined1 param_6)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101189938;
  *(undefined1 *)(plVar1 + 0x1b) = param_6;
  plVar1[0x10] = param_5;
  plVar1[0x11] = lVar2;
  plVar1[0xe] = param_3;
  plVar1[0xf] = param_4;
  plVar1[0xc] = param_1;
  plVar1[0xd] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011886d4,0,0);
  return;
}



/* Entry: 101189938; end: 101189973;  */

void FUN_101189938(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101189970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101189974; end: 101189a5b;  */

void FUN_101189974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_78 = param_5[1];
  uStack_80 = *param_5;
  uStack_68 = param_5[3];
  uStack_70 = param_5[2];
  uStack_58 = param_5[5];
  uStack_60 = param_5[4];
  uVar1 = 0;
  func_0x00010118a478(0,0x112d5dfc0,&PTR__OBJC_CLASS___PHAsset_1126bd898);
  func_0x000107c5fc48(param_3,uVar1);
  uVar1 = param_3;
  func_0x000107e6acd8(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar2 = uVar1;
  func_0x000107c40794(uVar1);
  func_0x000107c60234(&uStack_80);
  func_0x000107c615e8(uVar2);
  func_0x000100b60084(&uStack_80);
  func_0x000107c61170(uVar1);
  func_0x00010118a2f4(&uStack_80);
  return;
}



/* Entry: 101189a5c; end: 101189a7b;  */

void FUN_101189a5c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101189a7c,0,0);
  return;
}



/* Entry: 101189a7c; end: 101189b5b;  */

void FUN_101189a7c(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = 0x112d627b0;
  func_0x0001000285a8(0x112d627b0,&UNK_10daabba0);
  func_0x000100759c94(uVar3,0,uVar1);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101189b08;
                    /* WARNING: Could not recover jumptable at 0x000101189b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101189f1c();
  return;
}



/* Entry: 101189b5c; end: 101189c93;  */

/* WARNING: Removing unreachable block (ram,0x000101189c20) */

void FUN_101189b5c(void)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  if (*(char *)(unaff_x22 + 0x58) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
    **(undefined8 **)(unaff_x22 + 0x30) = uVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
    *(undefined8 *)(unaff_x22 + 0x18) = uVar4;
    func_0x0001000285a8(0x112d627b8,&UNK_10d928588);
    func_0x0001048da110(uVar3);
    FUN_10118a364(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101189c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101189c94; end: 101189cb3;  */

void FUN_101189c94(void)

{
  func_0x000107c61168(&PTR_PTR_112d626f0);
  return;
}



/* Entry: 101189cb4; end: 101189ccb;  */

void FUN_101189cb4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101189ccc,0,0);
  return;
}



/* Entry: 101189ccc; end: 101189d93;  */

void FUN_101189ccc(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101189d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101189d94;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11038b2b8;
  func_0x000107c613fc(&UNK_11038b2b8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x10118a4c4,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101189d94; end: 101189dd3;  */

void FUN_101189d94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101189dd4,0,0);
  return;
}



/* Entry: 101189dd4; end: 101189dfb;  */

void FUN_101189dd4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101189de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101189dfc; end: 101189ee7;  */

void FUN_101189dfc(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000104888eec(unaff_x22 + 0x50);
  if (*(char *)(unaff_x22 + 0x70) != -1) {
    puVar4 = *(undefined8 **)(unaff_x22 + 0x78);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x70);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
    puVar4[1] = *(undefined8 *)(unaff_x22 + 0x58);
    *puVar4 = uVar7;
    puVar4[3] = uVar6;
    puVar4[2] = uVar5;
    *(undefined1 *)(puVar4 + 4) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000101189e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  FUN_10118a398(unaff_x22 + 0x50,0x112d627c0,&UNK_10d928598);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar5;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101189ee8;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,0);
  puVar3 = &UNK_11038b268;
  func_0x000107c613fc(&UNK_11038b268,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar2;
  func_0x00010075a04c(0,1,0x10118a3d8,puVar3);
  func_0x000107c61574(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101189ee8; end: 101189f1b;  */

void FUN_101189ee8(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101189f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x22 + 8))();
  return;
}



/* Entry: 101189f1c; end: 101189f33;  */

void FUN_101189f1c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101189f34,0,0);
  return;
}



/* Entry: 101189f34; end: 101189ffb;  */

void FUN_101189f34(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101189f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101189ffc;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11038b240;
  func_0x000107c613fc(&UNK_11038b240,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x10118a378,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101189ffc; end: 10118a03b;  */

void FUN_101189ffc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10118a574,0,0);
  return;
}



/* Entry: 10118a03c; end: 10118a277;  */

void FUN_10118a03c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x00010118a478(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10118a278; end: 10118a2b7;  */

void FUN_10118a278(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d62780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d928808;
  func_0x000107c61520(&UNK_10d928808,&UNK_11038b6e0);
  puRam0000000112d62780 = puVar1;
  return;
}



/* Entry: 10118a2b8; end: 10118a313;  */

void FUN_10118a2b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = 0;
  func_0x00010118a478(0,0x112d5dfc0,&PTR__OBJC_CLASS___PHAsset_1126bd898);
  func_0x000107c5fc48(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x000107e6acd8(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar1;
  func_0x000107c40794(uVar1);
  func_0x000107c60234(&uStack_80);
  func_0x000107c615e8(uVar2);
  func_0x000100b60084(&uStack_80);
  func_0x000107c61170(uVar1);
  func_0x00010118a2f4(&uStack_80);
  return;
}



/* Entry: 10118a314; end: 10118a363;  */

void FUN_10118a314(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d627a8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d627a0;
  func_0x00010002969c(0x112d627a0,&UNK_10d928570);
  puVar2 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar1);
  puRam0000000112d627a8 = puVar2;
  return;
}



/* Entry: 10118a364; end: 10118a397;  */

void FUN_10118a364(undefined8 param_1,char param_2)

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



/* Entry: 10118a398; end: 10118a4b7;  */

undefined8 FUN_10118a398(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10118a4b8; end: 10118a4cf;  */

void FUN_10118a4b8(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0001000d224c(&puStack_58,param_1,*(undefined8 *)(unaff_x20 + 0x10));
  puVar2 = puStack_58;
  if (puStack_58 == (undefined8 *)0x0) {
    FUN_10118a534();
    puVar7 = &UNK_1106c4d48;
    func_0x000107c613f8(&UNK_1106c4d48,param_1,0,0);
    *param_1 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar7);
    return;
  }
  puVar6 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar6[3] = 2;
  puVar6[2] = 1;
  puVar6[4] = uVar1;
  puVar6[5] = uVar8;
  func_0x000107c61434(uVar8);
  puVar4 = puVar6;
  func_0x000107c5fc48(puVar6,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar6);
  puVar6 = puVar2;
  func_0x000107c4310c();
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar6 != (undefined8 *)0x0) {
    uVar5 = 0x112d508c0;
    func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
    puVar4 = puVar6;
    func_0x000107c5fc54(puVar6,uVar5);
    func_0x000107c61170(puVar6);
    if ((ulong)puVar4 >> 0x3e == 0) {
      puVar6 = *(undefined8 **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined8 *)((ulong)puVar4 & 0xffffffffffffff8);
      if ((undefined8 *)0x7fffffffffffffff < puVar4) {
        puVar6 = puVar4;
      }
      func_0x000107c60480();
    }
    if (puVar6 != (undefined8 *)0x0) {
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101188560);
          (*pcVar3)();
        }
        puVar6 = (undefined8 *)puVar4[4];
        func_0x000107c615f0(puVar6);
      }
      else {
        puVar6 = (undefined8 *)0x0;
        FUN_100fb0ba0(0,puVar4);
      }
      func_0x000107c6142c(puVar4);
      puStack_58 = puVar6;
      func_0x000100b60084(&puStack_58);
      func_0x000107c615e8(puVar6);
      goto LAB_101188524;
    }
    func_0x000107c6142c();
  }
  FUN_10118a278();
  puVar7 = &UNK_11038b6e0;
  func_0x000107c613f8(&UNK_11038b6e0,puVar4,0,0);
  *puVar4 = uVar1;
  puVar4[1] = uVar8;
  puVar4[2] = 0;
  *(undefined1 *)(puVar4 + 3) = 3;
  func_0x000107c61434(uVar8);
  func_0x00010488ade0(puVar7);
  func_0x000107c614ac(puVar7);
LAB_101188524:
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 10118a4d0; end: 10118a51f;  */

void FUN_10118a4d0(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 10118a520; end: 10118a533;  */

void FUN_10118a520(undefined8 param_1,char param_2)

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



/* Entry: 10118a534; end: 10118a573;  */

void FUN_10118a534(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d627e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc44648;
  func_0x000107c61520(&UNK_10dc44648,&UNK_1106c4d48);
  puRam0000000112d627e0 = puVar1;
  return;
}



/* Entry: 10118a574; end: 10118a577;  */

void FUN_10118a574(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101189de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 10118a578; end: 10118a74b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118a578(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  func_0x000107c613fc();
  uVar5 = *(undefined8 *)(param_3 + _DAT_11305e778);
  func_0x000107c6157c(uVar5);
  uVar1 = 0x112d51718;
  func_0x0001000285a8(0x112d51718,&UNK_10d918540);
  pcVar2 = FUN_10118a74c;
  func_0x0001000cb480(FUN_10118a74c,0,uVar1);
  func_0x000107c61574(uVar5);
  puVar3 = &UNK_11038b2e8;
  func_0x000107c613fc(&UNK_11038b2e8,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(code **)(puVar3 + 0x20) = pcVar2;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  *(undefined8 *)(puVar3 + 0x30) = param_5;
  *(undefined8 *)(puVar3 + 0x38) = param_6;
  *(undefined8 *)(puVar3 + 0x40) = param_7;
  func_0x0001000285a8(0x112d627e8,&UNK_10d9285c8);
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(pcVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  pcVar4 = FUN_10118a940;
  func_0x0001000bdd8c(FUN_10118a940,puVar3);
  FUN_10118be7c(0);
  func_0x000107c610f8();
  func_0x00010118bdc0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61574(pcVar2);
  *(code **)(unaff_x20 + 0x10) = pcVar4;
  return;
}



/* Entry: 10118a74c; end: 10118a79f;  */

void FUN_10118a74c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  uVar3 = 2;
  func_0x000100774b74(2,0xc,0,uVar1,uVar2,param_2);
  *param_1 = uVar3;
  return;
}



/* Entry: 10118a7a0; end: 10118a93f;  */

/* WARNING: Possible PIC construction at 0x00010118a834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118a838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118a7a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d629e0);
  puVar1 = &UNK_11038b310;
  func_0x000107c613fc(&UNK_11038b310,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112d628c8,&UNK_10d928618);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 10118a940; end: 10118a943;  */

/* WARNING: Possible PIC construction at 0x00010118a834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118a838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118a940(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d629e0);
  puVar2 = &UNK_11038b310;
  func_0x000107c613fc(&UNK_11038b310,0x18,7,*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  func_0x0001000285a8(0x112d628c8,&UNK_10d928618);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 10118a944; end: 10118a997;  */

void FUN_10118a944(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10118a998; end: 10118a9b3;  */

/* WARNING: Possible PIC construction at 0x00010118a834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118a838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118a998(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d629e0);
  puVar2 = &UNK_11038b310;
  func_0x000107c613fc(&UNK_11038b310,0x18,7,*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  func_0x0001000285a8(0x112d628c8,&UNK_10d928618);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 10118a9b4; end: 10118aa53;  */

void FUN_10118a9b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10118aa54; end: 10118aa5f;  */

void FUN_10118aa54(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10118aa60; end: 10118aa7f;  */

void FUN_10118aa60(void)

{
  func_0x00010391b8c8();
  return;
}



/* Entry: 10118aa80; end: 10118aa8b; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider memoriesMashupSnapDocFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118aa80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d628d0;
  func_0x000107c61428(param_1 + _DAT_112d628d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118aa8c; end: 10118aa97; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider setMemoriesMashupSnapDocFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118aa8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d628d0;
  func_0x000107c61428(param_1 + _DAT_112d628d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118aa98; end: 10118aaa3; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider memoriesSnapDocProvisionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118aa98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d628d8;
  func_0x000107c61428(param_1 + _DAT_112d628d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118aaa4; end: 10118aaaf; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider setMemoriesSnapDocProvisionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118aaa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d628d8;
  func_0x000107c61428(param_1 + _DAT_112d628d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118aab0; end: 10118aabb; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider asyncQueueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118aab0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d628e0;
  func_0x000107c61428(param_1 + _DAT_112d628e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118aabc; end: 10118aac7; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider setAsyncQueueServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118aabc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d628e0;
  func_0x000107c61428(param_1 + _DAT_112d628e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118aac8; end: 10118aad3; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider mediaVideoImportServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118aac8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d628e8;
  func_0x000107c61428(param_1 + _DAT_112d628e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118aad4; end: 10118aadf; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider setMediaVideoImportServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118aad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d628e8;
  func_0x000107c61428(param_1 + _DAT_112d628e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118aae0; end: 10118aaeb; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider temporaryFileWriterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118aae0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d628f0;
  func_0x000107c61428(param_1 + _DAT_112d628f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118aaec; end: 10118aaf7; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider setTemporaryFileWriterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118aaec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d628f0;
  func_0x000107c61428(param_1 + _DAT_112d628f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118aaf8; end: 10118ab03; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider memoriesExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118aaf8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d628f8;
  func_0x000107c61428(param_1 + _DAT_112d628f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118ab04; end: 10118ab0f; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider setMemoriesExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118ab04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d628f8;
  func_0x000107c61428(param_1 + _DAT_112d628f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118ab10; end: 10118ab1b; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider memoriesMergedDataSourceServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118ab10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62900;
  func_0x000107c61428(param_1 + _DAT_112d62900,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118ab1c; end: 10118ab5f;  */

void FUN_10118ab1c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10118ab60; end: 10118ab6b; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider setMemoriesMergedDataSourceServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118ab60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62900;
  func_0x000107c61428(param_1 + _DAT_112d62900,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118ab6c; end: 10118abbf;  */

void FUN_10118ab6c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118abc0; end: 10118af13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118abc0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  
  lVar1 = unaff_x20;
  func_0x000107c4cbc8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4cc94();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c3e274();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4ca78();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c5c804();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            lVar1 = lVar4;
          }
          else {
            lVar6 = unaff_x20;
            func_0x000107c4cb8c();
            func_0x000107c61180();
            if (lVar6 == 0) {
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              lVar1 = lVar5;
            }
            else {
              lVar7 = unaff_x20;
              func_0x000107c4cbe0();
              func_0x000107c61180();
              if (lVar7 != 0) {
                lVar8 = 0;
                func_0x00010118a9d8();
                func_0x000107c613fc();
                uVar13 = *(undefined8 *)(lVar3 + _DAT_11305e778);
                func_0x000107c6157c(uVar13);
                uVar12 = 0x112d51718;
                func_0x0001000285a8(0x112d51718,&UNK_10d918540);
                pcVar9 = FUN_10118a74c;
                func_0x0001000cb480(FUN_10118a74c,0,uVar12);
                func_0x000107c61574(uVar13);
                puVar10 = &UNK_11038b350;
                func_0x000107c613fc(&UNK_11038b350,0x48,7);
                *(long *)(puVar10 + 0x10) = lVar1;
                *(long *)(puVar10 + 0x18) = lVar2;
                *(code **)(puVar10 + 0x20) = pcVar9;
                *(long *)(puVar10 + 0x28) = lVar4;
                *(long *)(puVar10 + 0x30) = lVar5;
                *(long *)(puVar10 + 0x38) = lVar6;
                *(long *)(puVar10 + 0x40) = lVar7;
                func_0x0001000285a8(0x112d627e8,&UNK_10d9285c8);
                func_0x000107c613fc();
                func_0x000107c61174(lVar1);
                func_0x000107c61174(lVar2);
                func_0x000107c6157c(pcVar9);
                func_0x000107c61174(lVar4);
                func_0x000107c61174(lVar5);
                func_0x000107c61174(lVar6);
                func_0x000107c61174(lVar7);
                pcVar11 = FUN_10118af14;
                func_0x0001000bdd8c(FUN_10118af14,puVar10);
                uVar12 = 0;
                FUN_10118be7c(0);
                func_0x000107c610f8();
                func_0x00010118bdc0(pcVar11,uVar12);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar1);
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                func_0x000107c61170(lVar6);
                func_0x000107c61170(lVar7);
                func_0x000107c61574(pcVar9);
                *(code **)(lVar8 + 0x10) = pcVar11;
                uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d62908);
                *(long *)(unaff_x20 + _DAT_112d62908) = lVar8;
                func_0x000107c6157c(lVar8);
                func_0x000107c61574(uVar12);
                func_0x000107c61174(*(undefined8 *)(lVar8 + 0x10));
                func_0x000107c61574(lVar8);
                return;
              }
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar5);
              lVar1 = lVar6;
            }
          }
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10118af14; end: 10118af27;  */

/* WARNING: Possible PIC construction at 0x00010118a834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118a838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118af14(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d629e0);
  puVar2 = &UNK_11038b310;
  func_0x000107c613fc(&UNK_11038b310,0x18,7,*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  func_0x0001000285a8(0x112d628c8,&UNK_10d928618);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 10118af28; end: 10118afb3; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider provide] */

void FUN_10118af28(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_10118abc0();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "MemoriesMashupSourceSnapDocProvisionServicesImpl/SCMemoriesMashupSourceSnapDocProvisionServiceProvider.swift"
                      ,0x6c,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10118afb4);
  (*pcVar1)();
}



/* Entry: 10118afb4; end: 10118afe7; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider __safeProvide] */

void FUN_10118afb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10118abc0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10118afe8; end: 10118b02b; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider end] */

void FUN_10118afe8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118b02c; end: 10118b3db;  */

void FUN_10118b02c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_2 != -0x2fffffffffffffdc || param_3 != -0x7ffffffef10e2180) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000024,0x800000010ef1de80,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef10d6400)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000020,0x800000010ef29c00,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10ed650)) ||
             (func_0x000107c605b8(0xd000000000000012,0x800000010ef129b0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c52954();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10d7140)) ||
               (func_0x000107c605b8(0xd000000000000018,0x800000010ef28ec0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c564a8();
            }
            else {
              uVar2 = 0xd00000000000001b;
              if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10df490)) ||
                 (func_0x000107c605b8(0xd00000000000001b,0x800000010ef20b70,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c59c58();
              }
              else {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10e20c0)) ||
                   (func_0x000107c605b8(0xd00000000000001a,0x800000010ef1df40,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c56550();
                }
                else {
                  if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef10e2080)) {
                    uVar2 = 0;
                    func_0x000107c605b8(0xd000000000000020,0x800000010ef1df80,param_2,param_3,0);
                    if ((uVar2 & 1) == 0) {
                      func_0x000107c602fc(0x15);
                      func_0x000107c6142c(0xe000000000000000);
                      func_0x000107c5fb78(param_2,param_3);
                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                          "MemoriesMashupSourceSnapDocProvisionServicesImpl/SCMemoriesMashupSourceSnapDocProvisionServiceProvider.swift"
                                          ,0x6c,2,0x47,0);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x10118b3dc);
                      (*pcVar1)();
                    }
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c56578();
                }
              }
            }
          }
          goto LAB_10118b0bc;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c565d4();
      goto LAB_10118b0bc;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c56570();
LAB_10118b0bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10118b3dc; end: 10118b487; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider setValue:forIvarName:] */

void FUN_10118b3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10118b02c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10118b488; end: 10118b55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118b488(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d628d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d628d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d628e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d628e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d628f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d628f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62900,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d62908) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10118b560; end: 10118b57f; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider init] */

void FUN_10118b560(void)

{
  FUN_10118b488();
  return;
}



/* Entry: 10118b580; end: 10118b5b3;  */

void FUN_10118b580(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10118b5b4; end: 10118b64b; -[SCMemoriesMashupSourceSnapDocProvisionServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118b5b4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d628d0);
  func_0x000107c61610(param_1 + _DAT_112d628d8);
  func_0x000107c61610(param_1 + _DAT_112d628e0);
  func_0x000107c61610(param_1 + _DAT_112d628e8);
  func_0x000107c61610(param_1 + _DAT_112d628f0);
  func_0x000107c61610(param_1 + _DAT_112d628f8);
  func_0x000107c61610(param_1 + _DAT_112d62900);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d62908));
  return;
}



/* Entry: 10118b64c; end: 10118b66b;  */

void FUN_10118b64c(void)

{
  func_0x000107c61168(&PTR_PTR_112d62950);
  return;
}



/* Entry: 10118b66c; end: 10118b72f;  */

void FUN_10118b66c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d62378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9286a8;
  func_0x000107c61520(&UNK_10d9286a8,&UNK_11038b4c0);
  puRam0000000112d62378 = puVar1;
  return;
}



/* Entry: 10118b730; end: 10118b7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118b730(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d629e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10118b7c8; end: 10118b827; -[MemoriesMashupSnapDocFactoryServices init] */

void FUN_10118b7c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesMashupSnapDocFactoryServicesAPI.MemoriesMashupSnapDocFactoryServices"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10118b7f4);
  (*pcVar1)();
}



/* Entry: 10118b828; end: 10118b837; -[MemoriesMashupSnapDocFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118b828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d629e0));
  return;
}



/* Entry: 10118b838; end: 10118b8ff;  */

void FUN_10118b838(void)

{
  func_0x000107c61168(&PTR_PTR_1127b3780);
  return;
}



/* Entry: 10118b900; end: 10118b9a7;  */

void FUN_10118b900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_6 + 0x18);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10118b9a8;
                    /* WARNING: Could not recover jumptable at 0x00010118b9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,param_2,param_3,param_4,0,1,param_5,param_6);
  return;
}



/* Entry: 10118b9a8; end: 10118b9e3;  */

void FUN_10118b9a8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010118b9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10118b9e4; end: 10118badb;  */

void FUN_10118b9e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d62780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d928808;
  func_0x000107c61520(&UNK_10d928808,&UNK_11038b6e0);
  puRam0000000112d62780 = puVar1;
  return;
}



/* Entry: 10118badc; end: 10118bb23;  */

/* WARNING: Possible PIC construction at 0x00010118bb04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118bb08) */
/* WARNING: Removing unreachable block (ram,0x000107c614b0) */
/* WARNING: Removing unreachable block (ram,0x00010bdc01a0) */

void FUN_10118badc(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 != '\x03') && (param_4 != '\x01')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}


