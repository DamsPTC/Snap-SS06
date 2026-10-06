/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d9fbe0; end: 101d9fc47;  */

void FUN_101d9fbe0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x350);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x370) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9fc48,uVar2,uVar1);
  return;
}



/* Entry: 101d9fc48; end: 101d9fc9b;  */

void FUN_101d9fc48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x368);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x370));
  uVar1 = uVar2;
  func_0x000107c3dfc0();
  *(undefined8 *)(unaff_x22 + 0x378) = uVar1;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9fc9c,0,0);
  return;
}



/* Entry: 101d9fc9c; end: 101d9fdef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9fc9c(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  if (*(char *)(unaff_x22 + 0x440) != '\x01' || *(long *)(unaff_x22 + 0x378) == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x338);
    func_0x0001000d224c(unaff_x22 + 0x160);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x178);
    lVar2 = *(long *)(unaff_x22 + 0x180);
    func_0x0001000a8868(unaff_x22 + 0x160,uVar8);
    piVar5 = *(int **)(lVar2 + 8);
    iVar1 = *piVar5;
    plVar3 = (long *)(ulong)(uint)piVar5[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x380) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101d9fdf0;
                    /* WARNING: Could not recover jumptable at 0x000101d9fd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x330),uVar6,uVar8,lVar2);
    return;
  }
  puVar7 = *(undefined1 **)(unaff_x22 + 0x328);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x338));
  puVar4 = puVar7;
  func_0x000107c6142c();
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar4,0,0);
  *puVar4 = 0x25;
  func_0x000107c61654();
  func_0x000107c6142c(puVar7);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x318));
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101d9fdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d9fdf0; end: 101d9fe37;  */

void FUN_101d9fdf0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x380));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9fe38,0,0);
  return;
}



/* Entry: 101d9fe38; end: 101d9fecf;  */

void FUN_101d9fe38(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x2d8);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x1e8,1,0);
  *(undefined1 *)(lVar5 + 0x10) = 1;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  lVar5 = *(long *)(unaff_x22 + 0x180);
  func_0x0001000a8868(unaff_x22 + 0x160,uVar2);
  piVar4 = *(int **)(lVar5 + 0x20);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x388) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101d9fed0;
                    /* WARNING: Could not recover jumptable at 0x000101d9fecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(uVar2,lVar5);
  return;
}



/* Entry: 101d9fed0; end: 101d9ff23;  */

void FUN_101d9fed0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x390) = param_1;
  *(undefined8 *)(lVar1 + 0x398) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x388));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9ff24,0,0);
  return;
}



/* Entry: 101d9ff24; end: 101da0187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9ff24(void)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  func_0x0001000d224c(unaff_x22 + 0x298);
  lVar5 = *(long *)(unaff_x22 + 0x298);
  *(long *)(unaff_x22 + 0x3a0) = lVar5;
  if (lVar5 == 0) {
    puVar7 = *(undefined1 **)(unaff_x22 + 0x398);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x328);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x338));
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar8 = *(undefined8 *)(unaff_x22 + 800);
    puVar2 = PTR_PTR_1126af4c0;
    func_0x000107c61168();
    func_0x000107c5fadc(uVar8,uVar6);
    func_0x000107c430e8();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0x3a8) = puVar2;
    func_0x000107c61170(uVar8);
    if (puVar2 != (undefined *)0x0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x338);
      lVar9 = *(long *)(unaff_x22 + 0x2e0);
      lVar5 = *(long *)(unaff_x22 + 0x2d0);
      lVar10 = *(long *)(unaff_x22 + 0x2c8);
      func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0x200,1,0);
      uVar8 = *(undefined8 *)(lVar9 + 0x10);
      *(undefined **)(lVar9 + 0x10) = puVar2;
      func_0x000107c615f0(puVar2);
      func_0x000107c615e8(uVar8);
      lVar9 = _DAT_112e2b698;
      *(long *)(unaff_x22 + 0x3b0) = _DAT_112e2b698;
      lVar5 = lVar5 + lVar9;
      uVar8 = *(undefined8 *)(lVar5 + 0x18);
      lVar9 = *(long *)(lVar5 + 0x20);
      func_0x0001000a8868(lVar5,uVar8);
      func_0x000107c61428(lVar10 + 0x10,unaff_x22 + 0x218,0,0);
      uVar11 = *(undefined8 *)(lVar10 + 0x10);
      *(undefined8 *)(unaff_x22 + 0x3b8) = uVar11;
      piVar4 = *(int **)(lVar9 + 8);
      iVar1 = *piVar4;
      plVar3 = (long *)(ulong)(uint)piVar4[1];
      func_0x000107c61174(uVar11);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x3c0) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_101da0188;
                    /* WARNING: Could not recover jumptable at 0x000101da00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar4))
                (puVar2,*(undefined8 *)(unaff_x22 + 0x330),uVar6,*(undefined8 *)(unaff_x22 + 0x390),
                 *(undefined8 *)(unaff_x22 + 0x398),uVar11,uVar8,lVar9);
      return;
    }
    puVar7 = *(undefined1 **)(unaff_x22 + 0x398);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x338);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x328);
    func_0x000107c61170(lVar5);
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c6142c(uVar8);
  func_0x000107c6142c();
  uVar8 = *(undefined8 *)(unaff_x22 + 0x328);
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar7,0,0);
  *puVar7 = 9;
  func_0x000107c61654();
  func_0x000107c6142c(uVar8);
  func_0x0001000834e4(unaff_x22 + 0x160);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x318));
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000101da0184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da0188; end: 101da021b;  */

void FUN_101da0188(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x3c8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x3c0));
  if (unaff_x20 == 0) {
    func_0x000107c61170(*(undefined8 *)(lVar4 + 0x3b8));
    pcVar1 = FUN_101da021c;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x398);
    uVar2 = *(undefined8 *)(lVar4 + 0x338);
    uVar5 = *(undefined8 *)(lVar4 + 0x328);
    func_0x000107c61170(*(undefined8 *)(lVar4 + 0x3b8));
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar5);
    func_0x000107c6142c(uVar3);
    pcVar1 = FUN_101da0df0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101da021c; end: 101da062f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101da021c(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar2 = *(long *)(unaff_x22 + 0x3a8);
  func_0x000107e7774c(lVar2,*(undefined8 *)(unaff_x22 + 0x340));
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5ee94(*(undefined8 *)(unaff_x22 + 0x2f8));
    func_0x000107c61170(lVar2);
  }
  lVar12 = *(long *)(unaff_x22 + 0x308);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2f0);
  (**(code **)(lVar12 + 0x38))(uVar5,lVar2 == 0,1,uVar8);
  func_0x0001003a4c00(uVar5,uVar10);
  pcVar13 = *(code **)(lVar12 + 0x30);
  (*pcVar13)(uVar10,1,uVar8);
  if ((int)uVar10 == 1) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x300);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2f0);
    func_0x000107c5ee88(*(undefined8 *)(unaff_x22 + 0x318),0);
    (*pcVar13)(uVar10,1,uVar5);
    if ((int)uVar10 != 1) {
      func_0x000101da450c(*(undefined8 *)(unaff_x22 + 0x2f0),0x112d373d8,&UNK_10d9014c0);
    }
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x308) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x318),*(undefined8 *)(unaff_x22 + 0x2f0),
               *(undefined8 *)(unaff_x22 + 0x300));
  }
  bVar1 = *(byte *)(unaff_x22 + 0x441);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x310);
  lVar2 = *(long *)(unaff_x22 + 0x308);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x300);
  func_0x000107c5eea0(uVar8);
  uVar10 = 0x112d58e60;
  func_0x000101da4414(0x112d58e60,PTR___s10Foundation4DateVMa_110350bb8,
                      PTR___s10Foundation4DateVSLAAMc_110350bd8);
  uVar5 = uVar8;
  func_0x000107c5fa8c(uVar8,uVar9,uVar11,uVar10);
  bVar7 = (byte)uVar5;
  pcVar13 = *(code **)(lVar2 + 8);
  *(code **)(unaff_x22 + 0x3d0) = pcVar13;
  (*pcVar13)(uVar8,uVar11);
  if ((bVar1 & 1) == 0) {
    lVar2 = *(long *)(unaff_x22 + 0x328);
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x398);
    if (lVar2 == 0) {
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x328));
      goto LAB_101da03f8;
    }
    lVar6 = *(long *)(unaff_x22 + 0x328);
    lVar12 = *(long *)(unaff_x22 + 800);
    if ((lVar12 != *(long *)(unaff_x22 + 0x390)) || (lVar6 != lVar2)) {
      func_0x000107c605b8(lVar12,lVar6,*(long *)(unaff_x22 + 0x390),lVar2,0);
      func_0x000107c6142c(lVar6);
      bVar7 = (byte)lVar12 | bVar7;
      goto LAB_101da03f8;
    }
  }
  func_0x000107c6142c(lVar2);
  bVar7 = 1;
LAB_101da03f8:
  *(byte *)(unaff_x22 + 0x442) = bVar7 & 1;
  lVar6 = *(long *)(unaff_x22 + 0x3c8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2b0);
  lVar2 = *(long *)(unaff_x22 + 0x2d0) + _DAT_112e2b680;
  uVar10 = *(undefined8 *)(lVar2 + 0x18);
  lVar12 = *(long *)(lVar2 + 0x20);
  func_0x0001000a8868(lVar2,uVar10);
  (**(code **)(lVar12 + 8))(unaff_x22 + 0x10,uVar5,uVar10,lVar12);
  if (lVar6 == 0) {
    lVar2 = *(long *)(unaff_x22 + 0x2e8);
    func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x230,1,0);
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    uVar10 = *(undefined8 *)(lVar2 + 0x10);
    uVar8 = *(undefined8 *)(lVar2 + 0x20);
    uVar11 = *(undefined8 *)(lVar2 + 0x38);
    uVar9 = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x90) = uVar8;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar11;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x80) = uVar10;
    uVar5 = *(undefined8 *)(lVar2 + 0x48);
    uVar10 = *(undefined8 *)(lVar2 + 0x40);
    uVar9 = *(undefined8 *)(lVar2 + 0x58);
    uVar8 = *(undefined8 *)(lVar2 + 0x50);
    uVar11 = *(undefined8 *)(lVar2 + 0x60);
    uVar15 = *(undefined8 *)(lVar2 + 0x78);
    uVar14 = *(undefined8 *)(lVar2 + 0x70);
    *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(lVar2 + 0x68);
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar11;
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar5;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar10;
    *(undefined8 *)(unaff_x22 + 200) = uVar9;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar8;
    uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(lVar2 + 0x60) = uVar10;
    *(undefined8 *)(lVar2 + 0x78) = uVar8;
    *(undefined8 *)(lVar2 + 0x70) = uVar5;
    *(undefined8 *)(lVar2 + 0x48) = uVar15;
    *(undefined8 *)(lVar2 + 0x40) = uVar14;
    *(undefined8 *)(lVar2 + 0x58) = uVar11;
    *(undefined8 *)(lVar2 + 0x50) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(lVar2 + 0x20) = uVar8;
    *(undefined8 *)(lVar2 + 0x38) = uVar11;
    *(undefined8 *)(lVar2 + 0x30) = uVar9;
    *(undefined8 *)(lVar2 + 0x18) = uVar5;
    *(undefined8 *)(lVar2 + 0x10) = uVar10;
    func_0x000101da4454(unaff_x22 + 0x10,unaff_x22 + 0xf0);
    func_0x000101da450c(unaff_x22 + 0x80,0x112e2b748,&UNK_10da149a0);
    lVar2 = *(long *)(unaff_x22 + 0x10);
    *(long *)(unaff_x22 + 0x290) = lVar2;
    if (lVar2 == 0) {
      plVar3 = (long *)0x40;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 1000) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_101da0754;
      lVar2 = *(long *)(unaff_x22 + 0x2d0);
      plVar3[2] = unaff_x22 + 0x10;
      plVar3[3] = lVar2;
      pcVar13 = FUN_101da2e6c;
    }
    else {
      lVar12 = *(long *)(unaff_x22 + 0x78);
      func_0x000101da44c4(unaff_x22 + 0x290,unaff_x22 + 0x2a8,0x112d62370,&UNK_10d9daed0);
      plVar3 = (long *)0x60;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x3d8) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_101da0630;
      lVar6 = *(long *)(unaff_x22 + 0x2d0);
      plVar3[5] = lVar12;
      plVar3[6] = lVar6;
      plVar4 = (long *)0xc0;
      func_0x000107c615b8();
      plVar3[7] = (long)plVar4;
      *plVar4 = (long)plVar3;
      plVar4[1] = (long)FUN_101da3a60;
      plVar4[0x11] = lVar2;
      plVar4[0x12] = lVar6;
      pcVar13 = FUN_101da36a0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar13,0,0);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x398);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x300);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x3a8));
  func_0x000107c61170(uVar5);
  func_0x000107c6142c(uVar8);
  func_0x000107c6142c(uVar9);
  func_0x000107c6142c(uVar10);
  (*pcVar13)(uVar11,uVar14);
  func_0x0001000834e4(unaff_x22 + 0x160);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x318));
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000101da04ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da0630; end: 101da0753;  */

void FUN_101da0630(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x278) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x280) = param_1;
  *(long *)(lVar2 + 0x288) = unaff_x20;
  *(long *)(lVar2 + 0x3e0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x3d8));
  if (unaff_x20 == 0) {
    uVar1 = 0x101da0698;
  }
  else {
    uVar1 = 0x101da06ec;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101da0754; end: 101da07d3;  */

void FUN_101da0754(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 1000));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x3f0) = param_1;
    pcVar1 = FUN_101da07d4;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x398);
    func_0x000107c6142c(*(undefined8 *)(lVar3 + 0x338));
    func_0x000107c6142c(uVar2);
    *(long *)(lVar3 + 0x3f8) = unaff_x20;
    pcVar1 = FUN_101da098c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101da07d4; end: 101da098b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101da07d4(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x2e0);
  lVar10 = unaff_x22 + 0x248;
  func_0x000107c61428(lVar8 + 0x10,lVar10,0,0);
  lVar8 = *(long *)(lVar8 + 0x10);
  if (lVar8 != 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x3f0);
    func_0x000107c615f0(lVar8);
    FUN_101da3d38(uVar9);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    lVar4 = lVar8;
    func_0x000107c42950();
    func_0x000107c61180();
    if (lVar4 == 0) {
      lVar10 = 0;
    }
    else {
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
    }
    lVar4 = lVar8;
    FUN_101da3ea4(lVar8,unaff_x22 + 0x10);
    func_0x000107c6142c(lVar10);
    func_0x0001000d224c(unaff_x22 + 0x2a0);
    lVar10 = *(long *)(unaff_x22 + 0x2a0);
    puVar5 = puVar2;
    if (lVar10 != 0) {
      func_0x000107c4bba4(lVar10);
      func_0x000107c615e8(lVar8);
      puVar5 = puVar3;
      lVar8 = lVar10;
      puVar3 = puVar2;
    }
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c615e8(lVar8);
  }
  lVar10 = *(long *)(unaff_x22 + 0x2d0) + _DAT_112e2b688;
  uVar9 = *(undefined8 *)(lVar10 + 0x18);
  lVar8 = *(long *)(lVar10 + 0x20);
  func_0x0001000a8868(lVar10,uVar9);
  piVar7 = *(int **)(lVar8 + 8);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x400) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101da0a3c;
                    /* WARNING: Could not recover jumptable at 0x000101da0988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (*(undefined8 *)(unaff_x22 + 0x3f0),*(undefined1 *)(unaff_x22 + 0x442),uVar9,lVar8);
  return;
}



/* Entry: 101da098c; end: 101da0a3b;  */

void FUN_101da098c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(unaff_x22 + 0x3d0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x300);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x3a0));
  func_0x000107c6142c(uVar1);
  func_0x000101da4490(unaff_x22 + 0x10);
  func_0x000107c615e8(uVar2);
  (*pcVar5)(uVar3,uVar4);
  func_0x0001000834e4(unaff_x22 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x318));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101da0a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da0a3c; end: 101da0ab3;  */

void FUN_101da0a3c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x408) = param_1;
  *(long *)(lVar2 + 0x410) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x400));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101da0ab4;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x398);
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x338));
    func_0x000107c6142c(uVar3);
    pcVar1 = FUN_101da0e78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101da0ab4; end: 101da0b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101da0ab4(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x2d0) + _DAT_112e2b690;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  piVar6 = *(int **)(lVar4 + 8);
  iVar2 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x418) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101da0b44;
                    /* WARNING: Could not recover jumptable at 0x000101da0b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 0x408),unaff_x22 + 0x10,uVar3,lVar4);
  return;
}



/* Entry: 101da0b44; end: 101da0bb3;  */

void FUN_101da0b44(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x420) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x418));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101da0bb4;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x398);
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x338));
    func_0x000107c6142c(uVar3);
    pcVar1 = FUN_101da0f34;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101da0bb4; end: 101da0c8f;  */

void FUN_101da0bb4(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x338);
  lVar8 = *(long *)(unaff_x22 + 0x2c8);
  lVar1 = *(long *)(unaff_x22 + 0x2d0) + *(long *)(unaff_x22 + 0x3b0);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x260,0,0);
  uVar9 = *(undefined8 *)(lVar8 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x428) = uVar9;
  piVar6 = *(int **)(lVar4 + 8);
  iVar2 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c61174(uVar9);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x430) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101da0c90;
                    /* WARNING: Could not recover jumptable at 0x000101da0c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 0x3a8),*(undefined8 *)(unaff_x22 + 0x330),uVar7,
             *(undefined8 *)(unaff_x22 + 0x390),*(undefined8 *)(unaff_x22 + 0x398),uVar9,uVar3,lVar4
            );
  return;
}



/* Entry: 101da0c90; end: 101da0d13;  */

void FUN_101da0c90(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x438) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x430));
  uVar2 = *(undefined8 *)(lVar3 + 0x398);
  uVar4 = *(undefined8 *)(lVar3 + 0x338);
  func_0x000107c61170(*(undefined8 *)(lVar3 + 0x428));
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101da0d14;
  }
  else {
    pcVar1 = FUN_101da1004;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101da0d14; end: 101da0def;  */

void FUN_101da0d14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x3f0);
  pcVar10 = *(code **)(unaff_x22 + 0x3d0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2f0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c6142c(uVar5);
  func_0x000101da4490(unaff_x22 + 0x10);
  func_0x000107c615e8(uVar2);
  (*pcVar10)(uVar6,uVar8);
  func_0x0001000834e4(unaff_x22 + 0x160);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101da0dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da0df0; end: 101da0e77;  */

void FUN_101da0df0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x328);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x3a8));
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar1);
  func_0x0001000834e4(unaff_x22 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x318));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101da0e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da0e78; end: 101da0f33;  */

void FUN_101da0e78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  pcVar6 = *(code **)(unaff_x22 + 0x3d0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x300);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x3f0));
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(uVar3);
  func_0x000101da4490(unaff_x22 + 0x10);
  func_0x000107c615e8(uVar2);
  (*pcVar6)(uVar4,uVar5);
  func_0x0001000834e4(unaff_x22 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x318));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101da0f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da0f34; end: 101da1003;  */

void FUN_101da0f34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x3f0);
  pcVar7 = *(code **)(unaff_x22 + 0x3d0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x300);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000101da4490(unaff_x22 + 0x10);
  func_0x000107c615e8(uVar1);
  (*pcVar7)(uVar5,uVar6);
  func_0x0001000834e4(unaff_x22 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x318));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101da1000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da1004; end: 101da10d3;  */

void FUN_101da1004(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x3f0);
  pcVar7 = *(code **)(unaff_x22 + 0x3d0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x300);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000101da4490(unaff_x22 + 0x10);
  func_0x000107c615e8(uVar1);
  (*pcVar7)(uVar5,uVar6);
  func_0x0001000834e4(unaff_x22 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x318));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101da10d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da10d4; end: 101da1187;  */

void FUN_101da10d4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x22;
  long lVar11;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  lVar11 = *(long *)(unaff_x20 + 0x50);
  lVar10 = *(long *)(unaff_x20 + 0x58);
  plVar9 = (long *)0x450;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x101da455c;
  plVar9[0x5d] = lVar10;
  plVar9[0x5c] = lVar11;
  plVar9[0x5b] = lVar5;
  plVar9[0x5a] = lVar2;
  plVar9[0x59] = lVar4;
  plVar9[0x58] = lVar1;
  plVar9[0x57] = lVar3;
  plVar9[0x56] = lVar8;
  lVar8 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar7 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xf;
  uVar6 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x5e] = uVar6;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x5f] = uVar7;
  lVar8 = 0;
  func_0x000107c5eea4();
  plVar9[0x60] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar9[0x61] = lVar8;
  uVar7 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar6 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x62] = uVar6;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[99] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d9f604,0,0);
  return;
}



/* Entry: 101da1188; end: 101da14ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101da1188(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long in_x7;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long in_stack_00000000;
  long alStack_210 [14];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [24];
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000107c61428(in_x7 + 0x10,auStack_f8,0,0);
  lVar7 = *(long *)(in_x7 + 0x10);
  if (lVar7 != 0) {
    func_0x000107c61428(in_stack_00000000 + 0x10,auStack_188,0,0);
    uStack_168 = *(undefined8 *)(in_stack_00000000 + 0x18);
    lVar10 = *(long *)(in_stack_00000000 + 0x10);
    uStack_158 = *(undefined8 *)(in_stack_00000000 + 0x28);
    lStack_160 = *(long *)(in_stack_00000000 + 0x20);
    uStack_128 = *(undefined8 *)(in_stack_00000000 + 0x58);
    uStack_130 = *(undefined8 *)(in_stack_00000000 + 0x50);
    uStack_118 = *(undefined8 *)(in_stack_00000000 + 0x68);
    uStack_120 = *(undefined8 *)(in_stack_00000000 + 0x60);
    uStack_108 = *(undefined8 *)(in_stack_00000000 + 0x78);
    uStack_110 = *(undefined8 *)(in_stack_00000000 + 0x70);
    uStack_148 = *(undefined8 *)(in_stack_00000000 + 0x38);
    uStack_150 = *(undefined8 *)(in_stack_00000000 + 0x30);
    uStack_138 = *(undefined8 *)(in_stack_00000000 + 0x48);
    uStack_140 = *(undefined8 *)(in_stack_00000000 + 0x40);
    lStack_170 = lVar10;
    if (lStack_160 != 0) {
      uStack_a0 = *(undefined8 *)(in_stack_00000000 + 0x50);
      uStack_a8 = *(undefined8 *)(in_stack_00000000 + 0x48);
      uStack_90 = *(undefined8 *)(in_stack_00000000 + 0x60);
      uStack_98 = *(undefined8 *)(in_stack_00000000 + 0x58);
      uStack_80 = *(undefined8 *)(in_stack_00000000 + 0x70);
      uStack_88 = *(undefined8 *)(in_stack_00000000 + 0x68);
      uStack_78 = *(undefined8 *)(in_stack_00000000 + 0x78);
      uStack_d0 = *(undefined8 *)(in_stack_00000000 + 0x20);
      uStack_d8 = *(undefined8 *)(in_stack_00000000 + 0x18);
      uStack_c0 = *(undefined8 *)(in_stack_00000000 + 0x30);
      uStack_c8 = *(undefined8 *)(in_stack_00000000 + 0x28);
      uStack_b0 = *(undefined8 *)(in_stack_00000000 + 0x40);
      uStack_b8 = *(undefined8 *)(in_stack_00000000 + 0x38);
      lStack_e0 = lVar10;
      func_0x000107c61428(param_5 + 0x10,auStack_1a0,0,0);
      if (*(long *)(param_5 + 0x18) != 0) {
        func_0x000107c615f0(lVar7);
        func_0x000101da44c4(&lStack_170,alStack_210,0x112e2b748,&UNK_10da149a0);
        lVar2 = lVar7;
        func_0x000107c42950();
        func_0x000107c61180();
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101da1500);
          (*pcVar1)();
        }
        func_0x000107c61170();
        lVar2 = lVar7;
        FUN_101da3ea4(lVar7,&lStack_e0);
        lVar3 = lVar7;
        func_0x000107c42ba0();
        puVar4 = PTR_PTR_1126af4c0;
        func_0x000107c61168(PTR_PTR_1126af4c0);
        lVar5 = lVar7;
        func_0x000107c6148c(lVar7,puVar4);
        if (lVar5 == 0) {
          func_0x000101da450c(&lStack_170,0x112e2b748,&UNK_10da149a0);
          func_0x000107c61170(lVar2);
          func_0x000107c615e8(lVar7);
        }
        else {
          uVar9 = *(undefined8 *)(param_3 + _DAT_112e2b6a8);
          uVar8 = *(undefined8 *)(param_3 + _DAT_112e2b6d0);
          func_0x000107c615f0(lVar7);
          func_0x0001058b552c(lVar5,uVar9,uVar8);
          if (lVar10 != 0) {
            func_0x000107c61174();
            FUN_101da3d38();
            func_0x000107c61170(lVar10);
          }
          func_0x0001000d224c(alStack_210);
          if (alStack_210[0] == 0) {
            func_0x000101da450c(&lStack_170,0x112e2b748,&UNK_10da149a0);
          }
          else {
            func_0x000107c61174();
            uVar8 = 0;
            func_0x000107c5fadc(0,0xe000000000000000);
            if ((int)lVar3 < 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101da14fc);
              (*pcVar1)();
            }
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8();
            func_0x000107c46ed0();
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8();
            func_0x000107c46ed0();
            func_0x000107c4bba0(alStack_210[0]);
            func_0x000101da450c(&lStack_170,0x112e2b748,&UNK_10da149a0);
            func_0x000107c615e8(alStack_210[0]);
            func_0x000107c61170(uVar8);
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar6);
            func_0x000107c61170(lVar2);
          }
          func_0x000107c61170(lVar2);
          func_0x000107c615ec(lVar7,2);
        }
      }
    }
  }
  puVar4 = PTR_PTR_1126a9510;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar4;
  FUN_101da2ba8(param_3,param_4 + 0x10,param_5 + 0x10,&UNK_110482f10,&UNK_10da149b8);
  return;
}



/* Entry: 101da1500; end: 101da152f;  */

void FUN_101da1500(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101da1188(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101da1530; end: 101da166f;  */

undefined8
FUN_101da1530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112e2b740,&UNK_10da14988);
  puVar1 = &UNK_110482e48;
  func_0x000107c613fc(&UNK_110482e48,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c614b0(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c61434(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  uVar2 = 0xa3;
  func_0x000104887c7c(0xa3,0,0x48,4,0xd000000000000014,0x800000010f00f690,&UNK_10da14998,puVar1);
  func_0x000107c61574(puVar1);
  return uVar2;
}



/* Entry: 101da1670; end: 101da16a3;  */

void FUN_101da1670(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101da1530(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101da16a4; end: 101da16e3;  */

void FUN_101da16a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(unaff_x22 + 0x2c0) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x2b8) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x2b0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x2a8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x2a0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x298) = param_4;
  *(undefined8 *)(unaff_x22 + 0x290) = param_3;
  *(undefined8 *)(unaff_x22 + 0x288) = param_2;
  *(undefined8 *)(unaff_x22 + 0x280) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da16e4,0,0);
  return;
}



/* Entry: 101da16e4; end: 101da1f5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101da16e4(void)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  lVar16 = *(long *)(unaff_x22 + 0x298);
  func_0x000107c61428(lVar16 + 0x10,unaff_x22 + 0x160,0,0);
  uVar22 = *(undefined8 *)(lVar16 + 0x10);
  lVar16 = *(long *)(lVar16 + 0x18);
  *(long *)(unaff_x22 + 0x2c8) = lVar16;
  if (lVar16 == 0) {
    lVar15 = *(long *)(unaff_x22 + 0x298);
    lVar16 = *(long *)(unaff_x22 + 0x290);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x288);
    puVar19 = *(undefined8 **)(unaff_x22 + 0x280);
    puVar5 = PTR_PTR_1126a9510;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *puVar19 = puVar5;
    goto LAB_101da1f10;
  }
  uVar21 = *(undefined8 *)(unaff_x22 + 0x2a0);
  puVar5 = PTR_PTR_1126a9510;
  func_0x000107c610f8();
  func_0x000107c61434(lVar16);
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x2d0) = puVar5;
  func_0x000107c614cc(uVar21,unaff_x22 + 0x250,unaff_x22 + 0x178);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x180);
  FUN_101da5a48(uVar12,*(undefined8 *)(unaff_x22 + 0x188));
  *(int *)(unaff_x22 + 0x310) = (int)uVar12;
  puVar5 = PTR_PTR_1126a9518;
  func_0x000107c610f8();
  func_0x000107c45e78();
  *(undefined **)(unaff_x22 + 0x2d8) = puVar5;
  func_0x000107c614cc(uVar21,unaff_x22 + 600,unaff_x22 + 400);
  uVar4 = *(ulong *)(unaff_x22 + 0x198);
  func_0x000101da5adc(uVar4,*(undefined8 *)(unaff_x22 + 0x1a0));
  if ((uVar4 & 1) == 0) {
    lVar17 = *(long *)(unaff_x22 + 0x2a8);
    lVar15 = unaff_x22 + 0x1a8;
    func_0x000107c61428(lVar17 + 0x10,lVar15,0,0);
    puVar6 = *(undefined1 **)(lVar17 + 0x10);
    *(undefined1 **)(unaff_x22 + 0x2e0) = puVar6;
    if (puVar6 == (undefined1 *)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      goto LAB_101da1924;
    }
    func_0x000107c615f0();
    func_0x000107c42950();
    func_0x000107c61180();
    if (puVar6 != (undefined1 *)0x0) {
      lVar20 = *(long *)(unaff_x22 + 0x2b0);
      lVar17 = *(long *)(unaff_x22 + 0x288);
      puVar7 = puVar6;
      func_0x000107c5faec();
      func_0x000107c61170(puVar6);
      *(long *)(unaff_x22 + 0x2e8) = lVar15;
      lVar17 = lVar17 + _DAT_112e2b698;
      uVar21 = *(undefined8 *)(lVar17 + 0x18);
      lVar10 = *(long *)(lVar17 + 0x20);
      func_0x0001000a8868(lVar17,uVar21);
      func_0x000107c61428(lVar20 + 0x10,unaff_x22 + 0x238,0,0);
      uVar18 = *(undefined8 *)(lVar20 + 0x10);
      *(undefined8 *)(unaff_x22 + 0x2f0) = uVar18;
      piVar14 = *(int **)(lVar10 + 0x10);
      iVar2 = *piVar14;
      plVar8 = (long *)(ulong)(uint)piVar14[1];
      func_0x000107c61174(uVar18);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x2f8) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_101da1f5c;
                    /* WARNING: Could not recover jumptable at 0x000101da1910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar2 + (long)piVar14))
                (uVar22,lVar16,puVar7,lVar15,uVar12,uVar18,uVar21,lVar10);
      return;
    }
    func_0x000101b9d5ac();
    puVar5 = &UNK_1106c31f8;
    func_0x000107c613f8(&UNK_1106c31f8,puVar6,0,0);
    *puVar6 = 9;
    func_0x000107c61654();
    *(undefined8 *)(unaff_x22 + 0x278) = puVar5;
    func_0x000107c614b0(puVar5);
    uVar22 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    uVar4 = unaff_x22 + 0x314;
    func_0x000107c6147c(uVar4,(undefined8 *)(unaff_x22 + 0x278),uVar22,&UNK_1106c31f8,6);
    if ((uVar4 & 1) != 0) {
      uVar22 = *(undefined8 *)(unaff_x22 + 0x2e0);
      if (*(char *)(unaff_x22 + 0x314) != '\'') goto LAB_101da1f40;
      uVar12 = *(undefined8 *)(unaff_x22 + 0x2d8);
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ecc();
      func_0x000107c52b88(uVar12);
      func_0x000107c614ac(puVar5);
      func_0x000107c615e8(uVar22);
      goto LAB_101da193c;
    }
    uVar22 = *(undefined8 *)(unaff_x22 + 0x2e0);
LAB_101da1f40:
    func_0x000107c614ac(puVar5);
    func_0x000107c615e8(uVar22);
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
LAB_101da1924:
    func_0x000107c46ecc();
    func_0x000107c52b88(puVar5);
LAB_101da193c:
    func_0x000107c61170(puVar9);
  }
  uVar21 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x2d0);
  lVar16 = *(long *)(unaff_x22 + 0x2c0);
  func_0x000107c614cc(*(undefined8 *)(unaff_x22 + 0x2a0),unaff_x22 + 0x260,unaff_x22 + 0x1c0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1d0);
  func_0x000107c60640(uVar22,uVar12);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar12);
  func_0x000107c5662c(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c54654(uVar18);
  func_0x000107c61428(lVar16 + 0x10,unaff_x22 + 0x1d8,0,0);
  uVar12 = *(undefined8 *)(lVar16 + 0x18);
  uVar22 = *(undefined8 *)(lVar16 + 0x10);
  uVar21 = *(undefined8 *)(lVar16 + 0x20);
  uVar23 = *(undefined8 *)(lVar16 + 0x38);
  uVar18 = *(undefined8 *)(lVar16 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(lVar16 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar21;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar23;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar22;
  uVar12 = *(undefined8 *)(lVar16 + 0x48);
  uVar22 = *(undefined8 *)(lVar16 + 0x40);
  uVar18 = *(undefined8 *)(lVar16 + 0x58);
  uVar21 = *(undefined8 *)(lVar16 + 0x50);
  uVar23 = *(undefined8 *)(lVar16 + 0x60);
  uVar25 = *(undefined8 *)(lVar16 + 0x78);
  uVar24 = *(undefined8 *)(lVar16 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(lVar16 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar23;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar25;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar24;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar22;
  *(undefined8 *)(unaff_x22 + 200) = uVar18;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar21;
  if (*(long *)(unaff_x22 + 0x90) == 0) {
LAB_101da1b3c:
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x2c8));
  }
  else {
    lVar16 = *(long *)(unaff_x22 + 0x80);
    lVar15 = *(long *)(unaff_x22 + 0x2c0);
    lVar17 = *(long *)(unaff_x22 + 0x2a8);
    *(long *)(unaff_x22 + 0x10) = lVar16;
    uVar12 = *(undefined8 *)(lVar15 + 0x50);
    uVar22 = *(undefined8 *)(lVar15 + 0x48);
    uVar18 = *(undefined8 *)(lVar15 + 0x60);
    uVar21 = *(undefined8 *)(lVar15 + 0x58);
    uVar24 = *(undefined8 *)(lVar15 + 0x70);
    uVar23 = *(undefined8 *)(lVar15 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(lVar15 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x68) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar22;
    uVar12 = *(undefined8 *)(lVar15 + 0x30);
    uVar22 = *(undefined8 *)(lVar15 + 0x28);
    uVar18 = *(undefined8 *)(lVar15 + 0x20);
    uVar21 = *(undefined8 *)(lVar15 + 0x18);
    uVar23 = *(undefined8 *)(lVar15 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(lVar15 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x38) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar22;
    func_0x000107c61428(lVar17 + 0x10,unaff_x22 + 0x220,0,0);
    lVar15 = *(long *)(lVar17 + 0x10);
    if (lVar15 == 0) goto LAB_101da1b3c;
    func_0x000107c615f0(lVar15);
    func_0x000101da44c4(unaff_x22 + 0x80,unaff_x22 + 0xf0,0x112e2b748,&UNK_10da149a0);
    lVar17 = lVar15;
    func_0x000107c42950();
    func_0x000107c61180();
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101da1f5c);
      (*pcVar3)();
    }
    uVar1 = *(undefined4 *)(unaff_x22 + 0x310);
    func_0x000107c61170();
    *(undefined4 *)(unaff_x22 + 0x30c) = uVar1;
    puVar5 = PTR___ss5Int32VN_11034ee20;
    puVar13 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                        PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    lVar17 = lVar15;
    FUN_101da3ea4(lVar15,unaff_x22 + 0x10);
    lVar10 = lVar15;
    func_0x000107c42ba0();
    puVar9 = PTR_PTR_1126af4c0;
    func_0x000107c61168(PTR_PTR_1126af4c0);
    lVar20 = lVar15;
    func_0x000107c6148c(lVar15,puVar9);
    if (lVar20 == 0) {
      uVar22 = *(undefined8 *)(unaff_x22 + 0x2c8);
      func_0x000107c6142c(puVar13);
      func_0x000107c6142c(uVar22);
      func_0x000101da450c(unaff_x22 + 0x80,0x112e2b748,&UNK_10da149a0);
      func_0x000107c615e8(lVar15);
LAB_101da1d88:
      func_0x000107c61170(lVar17);
    }
    else {
      uVar22 = *(undefined8 *)(*(long *)(unaff_x22 + 0x288) + _DAT_112e2b6a8);
      uVar12 = *(undefined8 *)(*(long *)(unaff_x22 + 0x288) + _DAT_112e2b6d0);
      func_0x000107c615f0(lVar15);
      func_0x0001058b552c(lVar20,uVar22,uVar12);
      if (lVar16 != 0) {
        func_0x000107c61174(lVar16);
        FUN_101da3d38();
        func_0x000107c61170(lVar16);
      }
      func_0x0001000d224c(unaff_x22 + 0x270);
      lVar16 = *(long *)(unaff_x22 + 0x270);
      if (lVar16 == 0) {
        uVar22 = *(undefined8 *)(unaff_x22 + 0x2c8);
        func_0x000107c6142c(puVar13);
        func_0x000107c6142c(uVar22);
        func_0x000101da450c(unaff_x22 + 0x80,0x112e2b748,&UNK_10da149a0);
        func_0x000107c615ec(lVar15,2);
        goto LAB_101da1d88;
      }
      func_0x000107c61174(lVar17);
      func_0x000107c5fadc(puVar5,puVar13);
      if ((int)lVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101da1f58);
        (*pcVar3)();
      }
      uVar22 = *(undefined8 *)(unaff_x22 + 0x2c8);
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ed0();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ed0();
      func_0x000107c4bba0(lVar16);
      func_0x000107c6142c(uVar22);
      func_0x000107c6142c(puVar13);
      func_0x000101da450c(unaff_x22 + 0x80,0x112e2b748,&UNK_10da149a0);
      func_0x000107c615ec(lVar15,2);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar5);
      func_0x000107c615e8(lVar16);
    }
  }
  iVar2 = *(int *)(unaff_x22 + 0x310);
  lVar16 = *(long *)(unaff_x22 + 0x288);
  if ((iVar2 == 0x2c) && ((*(byte *)(lVar16 + _DAT_112e2b6f8) & 1) != 0)) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x2d8));
  }
  else {
    uVar21 = *(undefined8 *)(unaff_x22 + 0x2d8);
    lVar15 = *(long *)(unaff_x22 + 0x2b8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x2a0);
    func_0x000107c602fc(0x26);
    func_0x000107c6142c(0xe000000000000000);
    *(int *)(unaff_x22 + 0x308) = iVar2;
    puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                        PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    func_0x000107c5fb78(0x202c,0xe200000000000000);
    func_0x000107c614cc(uVar22,unaff_x22 + 0x268,unaff_x22 + 0x1f0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x200);
    FUN_101da5b80(*(undefined8 *)(unaff_x22 + 0x1f8),uVar22);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar22);
    func_0x000107c61428(lVar15 + 0x10,unaff_x22 + 0x208,0,0);
    uVar22 = *(undefined8 *)(lVar15 + 0x10);
    uVar12 = *(undefined8 *)(lVar15 + 0x18);
    func_0x000107c61434(uVar12);
    FUN_101da2cb4(0xd000000000000020,0x800000010f00f6e0,1,uVar22,uVar12);
    func_0x000107c61170(uVar21);
    func_0x000107c6142c(uVar12);
    func_0x000107c6142c(0x800000010f00f6e0);
    *(byte *)(lVar16 + _DAT_112e2b6f8) = iVar2 == 0x2c & *(byte *)(lVar16 + _DAT_112e2b6f8);
  }
  lVar15 = *(long *)(unaff_x22 + 0x298);
  lVar16 = *(long *)(unaff_x22 + 0x290);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x288);
  **(undefined8 **)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x2d0);
LAB_101da1f10:
  FUN_101da2ba8(uVar22,lVar16 + 0x10,lVar15 + 0x10,&UNK_110482ee8,&UNK_10da149b0);
                    /* WARNING: Could not recover jumptable at 0x000101da1f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da1f5c; end: 101da1fdf;  */

void FUN_101da1f5c(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x300) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x2f8));
  uVar2 = *(undefined8 *)(lVar3 + 0x2f0);
  func_0x000107c6142c(*(undefined8 *)(lVar3 + 0x2e8));
  func_0x000107c61170(uVar2);
  if (unaff_x20 == 0) {
    *(byte *)(lVar3 + 0x315) = param_1 & 1;
    pcVar1 = FUN_101da1fe0;
  }
  else {
    pcVar1 = FUN_101da2598;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101da1fe0; end: 101da2597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101da1fe0(void)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2e0);
  if (*(char *)(unaff_x22 + 0x315) == '\x01') {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x2d8);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c52b88(uVar11);
    func_0x000107c615e8(uVar13);
    func_0x000107c61170(puVar4);
  }
  else {
    func_0x000107c615e8(uVar13);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2d0);
  lVar16 = *(long *)(unaff_x22 + 0x2c0);
  func_0x000107c614cc(*(undefined8 *)(unaff_x22 + 0x2a0),unaff_x22 + 0x260,unaff_x22 + 0x1c0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1d0);
  func_0x000107c60640(uVar13,uVar11);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar11);
  func_0x000107c5662c(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c54654(uVar15);
  func_0x000107c61428(lVar16 + 0x10,unaff_x22 + 0x1d8,0,0);
  uVar11 = *(undefined8 *)(lVar16 + 0x18);
  uVar13 = *(undefined8 *)(lVar16 + 0x10);
  uVar12 = *(undefined8 *)(lVar16 + 0x20);
  uVar17 = *(undefined8 *)(lVar16 + 0x38);
  uVar15 = *(undefined8 *)(lVar16 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(lVar16 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar12;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar17;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar13;
  uVar11 = *(undefined8 *)(lVar16 + 0x48);
  uVar13 = *(undefined8 *)(lVar16 + 0x40);
  uVar15 = *(undefined8 *)(lVar16 + 0x58);
  uVar12 = *(undefined8 *)(lVar16 + 0x50);
  uVar17 = *(undefined8 *)(lVar16 + 0x60);
  uVar19 = *(undefined8 *)(lVar16 + 0x78);
  uVar18 = *(undefined8 *)(lVar16 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(lVar16 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar17;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar19;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar18;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar13;
  *(undefined8 *)(unaff_x22 + 200) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar12;
  if (*(long *)(unaff_x22 + 0x90) != 0) {
    lVar16 = *(long *)(unaff_x22 + 0x80);
    lVar10 = *(long *)(unaff_x22 + 0x2c0);
    lVar14 = *(long *)(unaff_x22 + 0x2a8);
    *(long *)(unaff_x22 + 0x10) = lVar16;
    uVar11 = *(undefined8 *)(lVar10 + 0x50);
    uVar13 = *(undefined8 *)(lVar10 + 0x48);
    uVar15 = *(undefined8 *)(lVar10 + 0x60);
    uVar12 = *(undefined8 *)(lVar10 + 0x58);
    uVar18 = *(undefined8 *)(lVar10 + 0x70);
    uVar17 = *(undefined8 *)(lVar10 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(lVar10 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x68) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar13;
    uVar11 = *(undefined8 *)(lVar10 + 0x30);
    uVar13 = *(undefined8 *)(lVar10 + 0x28);
    uVar15 = *(undefined8 *)(lVar10 + 0x20);
    uVar12 = *(undefined8 *)(lVar10 + 0x18);
    uVar17 = *(undefined8 *)(lVar10 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(lVar10 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x38) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
    func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x220,0,0);
    lVar10 = *(long *)(lVar14 + 0x10);
    if (lVar10 != 0) {
      func_0x000107c615f0(lVar10);
      func_0x000101da44c4(unaff_x22 + 0x80,unaff_x22 + 0xf0,0x112e2b748,&UNK_10da149a0);
      lVar14 = lVar10;
      func_0x000107c42950();
      func_0x000107c61180();
      if (lVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101da2598);
        (*pcVar3)();
      }
      uVar1 = *(undefined4 *)(unaff_x22 + 0x310);
      func_0x000107c61170();
      *(undefined4 *)(unaff_x22 + 0x30c) = uVar1;
      puVar4 = PTR___ss5Int32VN_11034ee20;
      puVar9 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
      func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                          PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
      lVar14 = lVar10;
      FUN_101da3ea4(lVar10,unaff_x22 + 0x10);
      lVar5 = lVar10;
      func_0x000107c42ba0();
      puVar6 = PTR_PTR_1126af4c0;
      func_0x000107c61168(PTR_PTR_1126af4c0);
      lVar7 = lVar10;
      func_0x000107c6148c(lVar10,puVar6);
      if (lVar7 == 0) {
        uVar13 = *(undefined8 *)(unaff_x22 + 0x2c8);
        func_0x000107c6142c(puVar9);
        func_0x000107c6142c(uVar13);
        func_0x000101da450c(unaff_x22 + 0x80,0x112e2b748,&UNK_10da149a0);
        func_0x000107c615e8(lVar10);
      }
      else {
        uVar13 = *(undefined8 *)(*(long *)(unaff_x22 + 0x288) + _DAT_112e2b6a8);
        uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x288) + _DAT_112e2b6d0);
        func_0x000107c615f0(lVar10);
        func_0x0001058b552c(lVar7,uVar13,uVar11);
        if (lVar16 != 0) {
          func_0x000107c61174(lVar16);
          FUN_101da3d38();
          func_0x000107c61170(lVar16);
        }
        func_0x0001000d224c(unaff_x22 + 0x270);
        lVar16 = *(long *)(unaff_x22 + 0x270);
        if (lVar16 != 0) {
          func_0x000107c61174(lVar14);
          func_0x000107c5fadc(puVar4,puVar9);
          if ((int)lVar5 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101da2594);
            (*pcVar3)();
          }
          uVar13 = *(undefined8 *)(unaff_x22 + 0x2c8);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c46ed0();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c46ed0();
          func_0x000107c4bba0(lVar16);
          func_0x000107c6142c(uVar13);
          func_0x000107c6142c(puVar9);
          func_0x000101da450c(unaff_x22 + 0x80,0x112e2b748,&UNK_10da149a0);
          func_0x000107c615ec(lVar10,2);
          func_0x000107c61170(lVar14);
          func_0x000107c61170(lVar14);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar4);
          func_0x000107c615e8(lVar16);
          goto LAB_101da23e4;
        }
        uVar13 = *(undefined8 *)(unaff_x22 + 0x2c8);
        func_0x000107c6142c(puVar9);
        func_0x000107c6142c(uVar13);
        func_0x000101da450c(unaff_x22 + 0x80,0x112e2b748,&UNK_10da149a0);
        func_0x000107c615ec(lVar10,2);
      }
      func_0x000107c61170(lVar14);
      goto LAB_101da23e4;
    }
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x2c8));
LAB_101da23e4:
  iVar2 = *(int *)(unaff_x22 + 0x310);
  lVar16 = *(long *)(unaff_x22 + 0x288);
  if ((iVar2 == 0x2c) && ((*(byte *)(lVar16 + _DAT_112e2b6f8) & 1) != 0)) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x2d8));
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x2d8);
    lVar10 = *(long *)(unaff_x22 + 0x2b8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x2a0);
    func_0x000107c602fc(0x26);
    func_0x000107c6142c(0xe000000000000000);
    *(int *)(unaff_x22 + 0x308) = iVar2;
    puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                        PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    func_0x000107c5fb78(0x202c,0xe200000000000000);
    func_0x000107c614cc(uVar13,unaff_x22 + 0x268,unaff_x22 + 0x1f0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x200);
    FUN_101da5b80(*(undefined8 *)(unaff_x22 + 0x1f8),uVar13);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar13);
    func_0x000107c61428(lVar10 + 0x10,unaff_x22 + 0x208,0,0);
    uVar13 = *(undefined8 *)(lVar10 + 0x10);
    uVar11 = *(undefined8 *)(lVar10 + 0x18);
    func_0x000107c61434(uVar11);
    FUN_101da2cb4(0xd000000000000020,0x800000010f00f6e0,1,uVar13,uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c6142c(uVar11);
    func_0x000107c6142c(0x800000010f00f6e0);
    *(byte *)(lVar16 + _DAT_112e2b6f8) = iVar2 == 0x2c & *(byte *)(lVar16 + _DAT_112e2b6f8);
  }
  lVar16 = *(long *)(unaff_x22 + 0x298);
  lVar10 = *(long *)(unaff_x22 + 0x290);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x288);
  **(undefined8 **)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x2d0);
  FUN_101da2ba8(uVar13,lVar10 + 0x10,lVar16 + 0x10,&UNK_110482ee8,&UNK_10da149b0);
                    /* WARNING: Could not recover jumptable at 0x000101da258c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da2598; end: 101da2ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101da2598(void)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x300);
  *(undefined8 *)(unaff_x22 + 0x278) = uVar13;
  func_0x000107c614b0(uVar13);
  uVar12 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar4 = unaff_x22 + 0x314;
  func_0x000107c6147c(uVar4,unaff_x22 + 0x278,uVar12,&UNK_1106c31f8,6);
  if ((uVar4 & 1) == 0) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x2e0);
LAB_101da2658:
    func_0x000107c614ac(uVar13);
    func_0x000107c615e8(uVar12);
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x2e0);
    if (*(char *)(unaff_x22 + 0x314) != '\'') goto LAB_101da2658;
    uVar15 = *(undefined8 *)(unaff_x22 + 0x2d8);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c52b88(uVar15);
    func_0x000107c614ac(uVar13);
    func_0x000107c615e8(uVar12);
    func_0x000107c61170(puVar5);
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2d0);
  lVar17 = *(long *)(unaff_x22 + 0x2c0);
  func_0x000107c614cc(*(undefined8 *)(unaff_x22 + 0x2a0),unaff_x22 + 0x260,unaff_x22 + 0x1c0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1d0);
  func_0x000107c60640(uVar12,uVar13);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar13);
  func_0x000107c5662c(uVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c54654(uVar16);
  func_0x000107c61428(lVar17 + 0x10,unaff_x22 + 0x1d8,0,0);
  uVar13 = *(undefined8 *)(lVar17 + 0x18);
  uVar12 = *(undefined8 *)(lVar17 + 0x10);
  uVar15 = *(undefined8 *)(lVar17 + 0x20);
  uVar18 = *(undefined8 *)(lVar17 + 0x38);
  uVar16 = *(undefined8 *)(lVar17 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(lVar17 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar18;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar12;
  uVar13 = *(undefined8 *)(lVar17 + 0x48);
  uVar12 = *(undefined8 *)(lVar17 + 0x40);
  uVar16 = *(undefined8 *)(lVar17 + 0x58);
  uVar15 = *(undefined8 *)(lVar17 + 0x50);
  uVar18 = *(undefined8 *)(lVar17 + 0x60);
  uVar20 = *(undefined8 *)(lVar17 + 0x78);
  uVar19 = *(undefined8 *)(lVar17 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(lVar17 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar18;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar20;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar19;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar12;
  *(undefined8 *)(unaff_x22 + 200) = uVar16;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar15;
  if (*(long *)(unaff_x22 + 0x90) != 0) {
    lVar17 = *(long *)(unaff_x22 + 0x80);
    lVar11 = *(long *)(unaff_x22 + 0x2c0);
    lVar14 = *(long *)(unaff_x22 + 0x2a8);
    *(long *)(unaff_x22 + 0x10) = lVar17;
    uVar13 = *(undefined8 *)(lVar11 + 0x50);
    uVar12 = *(undefined8 *)(lVar11 + 0x48);
    uVar16 = *(undefined8 *)(lVar11 + 0x60);
    uVar15 = *(undefined8 *)(lVar11 + 0x58);
    uVar19 = *(undefined8 *)(lVar11 + 0x70);
    uVar18 = *(undefined8 *)(lVar11 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(lVar11 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x68) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar12;
    uVar13 = *(undefined8 *)(lVar11 + 0x30);
    uVar12 = *(undefined8 *)(lVar11 + 0x28);
    uVar16 = *(undefined8 *)(lVar11 + 0x20);
    uVar15 = *(undefined8 *)(lVar11 + 0x18);
    uVar18 = *(undefined8 *)(lVar11 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(lVar11 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x38) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
    func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x220,0,0);
    lVar11 = *(long *)(lVar14 + 0x10);
    if (lVar11 != 0) {
      func_0x000107c615f0(lVar11);
      func_0x000101da44c4(unaff_x22 + 0x80,unaff_x22 + 0xf0,0x112e2b748,&UNK_10da149a0);
      lVar14 = lVar11;
      func_0x000107c42950();
      func_0x000107c61180();
      if (lVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101da2ba8);
        (*pcVar3)();
      }
      uVar1 = *(undefined4 *)(unaff_x22 + 0x310);
      func_0x000107c61170();
      *(undefined4 *)(unaff_x22 + 0x30c) = uVar1;
      puVar5 = PTR___ss5Int32VN_11034ee20;
      puVar10 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
      func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                          PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
      lVar14 = lVar11;
      FUN_101da3ea4(lVar11,unaff_x22 + 0x10);
      lVar6 = lVar11;
      func_0x000107c42ba0();
      puVar7 = PTR_PTR_1126af4c0;
      func_0x000107c61168(PTR_PTR_1126af4c0);
      lVar8 = lVar11;
      func_0x000107c6148c(lVar11,puVar7);
      if (lVar8 == 0) {
        uVar12 = *(undefined8 *)(unaff_x22 + 0x2c8);
        func_0x000107c6142c(puVar10);
        func_0x000107c6142c(uVar12);
        func_0x000101da450c(unaff_x22 + 0x80,0x112e2b748,&UNK_10da149a0);
        func_0x000107c615e8(lVar11);
      }
      else {
        uVar12 = *(undefined8 *)(*(long *)(unaff_x22 + 0x288) + _DAT_112e2b6a8);
        uVar13 = *(undefined8 *)(*(long *)(unaff_x22 + 0x288) + _DAT_112e2b6d0);
        func_0x000107c615f0(lVar11);
        func_0x0001058b552c(lVar8,uVar12,uVar13);
        if (lVar17 != 0) {
          func_0x000107c61174(lVar17);
          FUN_101da3d38();
          func_0x000107c61170(lVar17);
        }
        func_0x0001000d224c(unaff_x22 + 0x270);
        lVar17 = *(long *)(unaff_x22 + 0x270);
        if (lVar17 != 0) {
          func_0x000107c61174(lVar14);
          func_0x000107c5fadc(puVar5,puVar10);
          if ((int)lVar6 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101da2ba4);
            (*pcVar3)();
          }
          uVar12 = *(undefined8 *)(unaff_x22 + 0x2c8);
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c46ed0();
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c46ed0();
          func_0x000107c4bba0(lVar17);
          func_0x000107c6142c(uVar12);
          func_0x000107c6142c(puVar10);
          func_0x000101da450c(unaff_x22 + 0x80,0x112e2b748,&UNK_10da149a0);
          func_0x000107c615ec(lVar11,2);
          func_0x000107c61170(lVar14);
          func_0x000107c61170(lVar14);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar5);
          func_0x000107c615e8(lVar17);
          goto LAB_101da29f4;
        }
        uVar12 = *(undefined8 *)(unaff_x22 + 0x2c8);
        func_0x000107c6142c(puVar10);
        func_0x000107c6142c(uVar12);
        func_0x000101da450c(unaff_x22 + 0x80,0x112e2b748,&UNK_10da149a0);
        func_0x000107c615ec(lVar11,2);
      }
      func_0x000107c61170(lVar14);
      goto LAB_101da29f4;
    }
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x2c8));
LAB_101da29f4:
  iVar2 = *(int *)(unaff_x22 + 0x310);
  lVar17 = *(long *)(unaff_x22 + 0x288);
  if ((iVar2 == 0x2c) && ((*(byte *)(lVar17 + _DAT_112e2b6f8) & 1) != 0)) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x2d8));
  }
  else {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x2d8);
    lVar11 = *(long *)(unaff_x22 + 0x2b8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x2a0);
    func_0x000107c602fc(0x26);
    func_0x000107c6142c(0xe000000000000000);
    *(int *)(unaff_x22 + 0x308) = iVar2;
    puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                        PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    func_0x000107c5fb78(0x202c,0xe200000000000000);
    func_0x000107c614cc(uVar12,unaff_x22 + 0x268,unaff_x22 + 0x1f0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x200);
    FUN_101da5b80(*(undefined8 *)(unaff_x22 + 0x1f8),uVar12);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar12);
    func_0x000107c61428(lVar11 + 0x10,unaff_x22 + 0x208,0,0);
    uVar12 = *(undefined8 *)(lVar11 + 0x10);
    uVar13 = *(undefined8 *)(lVar11 + 0x18);
    func_0x000107c61434(uVar13);
    FUN_101da2cb4(0xd000000000000020,0x800000010f00f6e0,1,uVar12,uVar13);
    func_0x000107c61170(uVar15);
    func_0x000107c6142c(uVar13);
    func_0x000107c6142c(0x800000010f00f6e0);
    *(byte *)(lVar17 + _DAT_112e2b6f8) = iVar2 == 0x2c & *(byte *)(lVar17 + _DAT_112e2b6f8);
  }
  lVar17 = *(long *)(unaff_x22 + 0x298);
  lVar11 = *(long *)(unaff_x22 + 0x290);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x288);
  **(undefined8 **)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x2d0);
  FUN_101da2ba8(uVar12,lVar11 + 0x10,lVar17 + 0x10,&UNK_110482ee8,&UNK_10da149b0);
                    /* WARNING: Could not recover jumptable at 0x000101da2b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da2ba8; end: 101da2cb3;  */

void FUN_101da2ba8(undefined8 param_1,char *param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2,auStack_58,0,0);
  cVar3 = *param_2;
  func_0x000107c61428(param_3,auStack_70,0,0);
  if (cVar3 == '\x01') {
    lVar2 = param_3[1];
    uVar4 = 0;
    if (lVar2 != 0) {
      uVar4 = *param_3;
    }
    lVar1 = -0x2000000000000000;
    if (lVar2 != 0) {
      lVar1 = lVar2;
    }
    func_0x000107c613fc(param_4,0x28,7);
    *(undefined8 *)(param_4 + 0x10) = param_1;
    *(undefined8 *)(param_4 + 0x18) = uVar4;
    *(long *)(param_4 + 0x20) = lVar1;
    func_0x000107c61438(lVar2,2);
    func_0x000107c61174(param_1);
    uVar4 = 0xa3;
    func_0x000100859150(0xa3,0,0x48,4,0,0,param_5,param_4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(param_4);
    func_0x000107c61574(uVar4);
    func_0x000107c6142c(lVar2);
  }
  return;
}



/* Entry: 101da2cb4; end: 101da2de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101da2cb4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e2b6a8);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e2b700);
  puVar1 = &UNK_110482e70;
  func_0x000107c613fc(&UNK_110482e70,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110482e98;
  func_0x000107c613fc(&UNK_110482e98,0x40,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar2[0x28] = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  pcStack_70 = FUN_101da42e0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100288f10;
  puStack_78 = &UNK_110482eb0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar1);
  func_0x000108ec0f10(uVar4,uVar5,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101da2de4; end: 101da2e3f; -[_TtC37MemoriesSnapDocRenderStepServicesImpl25MemoriesSnapDocRenderStep renderSnapDocWithStepData:] */

void FUN_101da2de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101d9f140(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101da2e40; end: 101da2e47; -[_TtC37MemoriesSnapDocRenderStepServicesImpl25MemoriesSnapDocRenderStep shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_101da2e40(void)

{
  return 0;
}



/* Entry: 101da2e48; end: 101da2e6b; -[_TtC37MemoriesSnapDocRenderStepServicesImpl25MemoriesSnapDocRenderStep pushToValdiMarshaller:] */

void FUN_101da2e48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105f5fe80(param_3,param_1);
  func_0x000105f5fe68();
  func_0x000105f5fe60();
  func_0x000105f5fdfc();
  func_0x000105f5fe18();
  return;
}



/* Entry: 101da2e6c; end: 101da3037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101da2e6c(undefined1 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int *piVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)(unaff_x22 + 0x10);
  lVar8 = *(long *)(lVar10 + 0x40);
  if (*(long *)(lVar8 + 0x10) == 0) {
    uVar6 = 0x2f;
  }
  else {
    lVar7 = *(long *)(lVar10 + 0x60);
    if (lVar7 != 0) {
      lVar11 = *(long *)(unaff_x22 + 0x18);
      uVar9 = *(undefined8 *)(lVar10 + 0x58);
      puVar2 = PTR_PTR_1126bf8d0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(unaff_x22 + 0x20) = puVar2;
      func_0x00010102c3b8(lVar8);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar10 = lVar8;
      func_0x000107c5fc48(lVar8,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(lVar8);
      func_0x000107c45788(puVar3);
      func_0x000107c61170(lVar10);
      func_0x000107c59588(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c5fadc(uVar9,lVar7);
      func_0x000107c55d70(puVar2);
      func_0x000107c61170(uVar9);
      func_0x000107c5356c(puVar2);
      lVar11 = lVar11 + _DAT_112e2b6e8;
      uVar9 = *(undefined8 *)(lVar11 + 0x18);
      lVar8 = *(long *)(lVar11 + 0x20);
      func_0x0001000a8868(lVar11,uVar9);
      piVar5 = *(int **)(lVar8 + 8);
      iVar1 = *piVar5;
      plVar4 = (long *)(ulong)(uint)piVar5[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x28) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101da3038;
                    /* WARNING: Could not recover jumptable at 0x000101da2fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar5))(puVar2,uVar9,lVar8);
      return;
    }
    uVar6 = 0x30;
  }
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,param_1,0,0);
  *param_1 = uVar6;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101da3034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da3038; end: 101da30a3;  */

void FUN_101da3038(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x38) = param_1;
    pcVar1 = FUN_101da30a4;
  }
  else {
    pcVar1 = (code *)0x101da30dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101da30a4; end: 101da310f;  */

void FUN_101da30a4(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000101da30d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Entry: 101da3110; end: 101da31db;  */

void FUN_101da3110(undefined1 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1 != (undefined1 *)0x0) {
    func_0x000107c5b198();
    func_0x000107c61180();
    func_0x000107c61170();
    if (param_2 == 0) {
      **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = param_4;
      func_0x000107c61174(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_3);
      return;
    }
  }
  func_0x000101b9d5ac();
  puVar1 = &UNK_1106c31f8;
  func_0x000107c613f8(&UNK_1106c31f8,param_1,0,0);
  *param_1 = 0x28;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar2);
  return;
}



/* Entry: 101da31dc; end: 101da31f7;  */

void FUN_101da31dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da31f8,0,0);
  return;
}



/* Entry: 101da31f8; end: 101da329f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101da31f8(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x38) + _DAT_112e2b6b8);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101da3258;
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



/* Entry: 101da32a0; end: 101da331f;  */

void FUN_101da32a0(void)

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
  *(long **)(unaff_x22 + 0x58) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101da3320;
                    /* WARNING: Could not recover jumptable at 0x000101da331c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48),uVar2,lVar3);
  return;
}



/* Entry: 101da3320; end: 101da33e3;  */

void FUN_101da3320(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    uVar1 = 0x101da337c;
  }
  else {
    uVar1 = 0x101da33b0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101da33e4; end: 101da34db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101da33e4(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                  undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((param_1 & 1) != 0) {
      func_0x000107c5fadc(param_3,param_4);
      uVar1 = *(undefined8 *)(param_2 + _DAT_112e2b6b0);
      if (param_7 == 0) {
        func_0x000107c61174(uVar1);
        param_6 = 0;
      }
      else {
        func_0x000107c61174(uVar1);
        func_0x000107c5fadc(param_6,param_7);
      }
      func_0x000107e675d4(param_3,param_5 & 1,uVar1,0,param_6);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(uVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101da34dc; end: 101da34fb;  */

void FUN_101da34dc(void)

{
  func_0x000107c61168(&PTR_PTR_112804018);
  return;
}



/* Entry: 101da34fc; end: 101da3523;  */

void FUN_101da34fc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110482e08;
  if (lRam0000000112e2b730 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e2b730 = param_1;
  }
  return;
}



/* Entry: 101da3524; end: 101da3567;  */

void FUN_101da3524(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101da3568; end: 101da3597;  */

bool FUN_101da3568(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101da3598; end: 101da364b;  */

void FUN_101da3598(long param_1)

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
  long lVar9;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x50);
  lVar8 = *(long *)(unaff_x20 + 0x58);
  plVar7 = (long *)0x320;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101da364c;
  plVar7[0x58] = lVar8;
  plVar7[0x57] = lVar9;
  plVar7[0x56] = lVar6;
  plVar7[0x55] = lVar3;
  plVar7[0x54] = lVar5;
  plVar7[0x53] = lVar2;
  plVar7[0x52] = lVar4;
  plVar7[0x51] = lVar1;
  plVar7[0x50] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da16e4,0,0);
  return;
}



/* Entry: 101da364c; end: 101da3687;  */

void FUN_101da364c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101da3684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101da3688; end: 101da369f;  */

void FUN_101da3688(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da36a0,0,0);
  return;
}



/* Entry: 101da36a0; end: 101da390f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101da36a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x98) = puVar2;
  puVar3 = puVar2;
  func_0x00010011df08();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  lVar8 = *(long *)(unaff_x22 + 0x90);
  puVar4 = PTR_PTR_1126b25b8;
  func_0x000107c610f8();
  func_0x000107c46814();
  *(undefined **)(unaff_x22 + 0xa0) = puVar4;
  func_0x000107c61170(puVar3);
  puVar5 = *(undefined1 **)(lVar8 + _DAT_112e2b6d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0xa8) = puVar5;
  if (puVar5 != (undefined1 *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x90) + _DAT_112e2b700);
    uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0x90) + _DAT_112e2b6e0);
    uVar6 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f00f770);
    func_0x000107e6121c(puVar4,uVar1,uVar7,puVar5,uVar10,puVar2,uVar6);
    func_0x000107c61170(uVar6);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101da3910;
    lVar8 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar8,1);
    func_0x000107c43bf4(puVar2);
    func_0x000107c61180();
    puVar3 = &UNK_110482f38;
    func_0x000107c613fc(&UNK_110482f38,0x20,7);
    puVar9 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar3 + 0x10) = lVar8;
    *(undefined8 *)(puVar3 + 0x18) = uVar1;
    *(code **)(unaff_x22 + 0x70) = FUN_101da454c;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_101383914;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110482f50;
    func_0x000107c60bc4(puVar9);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c61174(uVar1);
    func_0x000107c61574(uVar6);
    func_0x000107c5dc64(puVar2);
    func_0x000107c60bd0(puVar9);
    func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar5,0,0);
  *puVar5 = 0;
  func_0x000107c61654();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x000101da390c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da3910; end: 101da397b;  */

void FUN_101da3910(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xb8) = *(undefined8 *)(lVar2 + 0x80);
    pcVar1 = FUN_101da397c;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101da39c8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101da397c; end: 101da39c7;  */

void FUN_101da397c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101da39c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xb8));
  return;
}



/* Entry: 101da39c8; end: 101da3a0f;  */

void FUN_101da39c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101da3a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da3a10; end: 101da3a5f;  */

void FUN_101da3a10(long param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(long *)(unaff_x22 + 0x30) = unaff_x20;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101da3a60;
  plVar1[0x11] = param_1;
  plVar1[0x12] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da36a0,0,0);
  return;
}



/* Entry: 101da3a60; end: 101da3ac7;  */

void FUN_101da3a60(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101da3aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da3ac8,0,0);
  return;
}



/* Entry: 101da3ac8; end: 101da3bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101da3ac8(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x28);
  if ((lVar7 != 0) && (lVar6 = lVar7, func_0x000107c449a0(), (int)lVar6 != 0)) {
    lVar6 = lVar7;
    func_0x000107c4d1e4();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar1 = lVar6;
      func_0x000107c449a4();
      func_0x000107c61170(lVar6);
      if ((int)lVar1 != 0) {
        func_0x000107c4d1e4();
        func_0x000107c61180();
        if (lVar7 != 0) {
          lVar6 = lVar7;
          func_0x000107c4d1f0();
          func_0x000107c61180();
          *(long *)(unaff_x22 + 0x48) = lVar6;
          func_0x000107c61170(lVar7);
          if (lVar6 != 0) {
            plVar8 = *(long **)(*(long *)(unaff_x22 + 0x30) + _DAT_112e2b6f0);
            uVar2 = 0x112d62360;
            func_0x0001000285a8(0x112d62360,&UNK_10da149e0);
            *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
            plVar3 = (long *)0xa0;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x50) = plVar3;
            plVar5 = plVar3;
            func_0x000100faa6a0();
            *(long **)(unaff_x22 + 0x58) = plVar5;
            *plVar3 = unaff_x22;
            plVar3[1] = (long)FUN_101da3c00;
            plVar3[0xb] = (long)plVar5;
            plVar3[0xc] = unaff_x22 + 0x20;
            plVar3[9] = unaff_x22 + 0x18;
            plVar3[10] = (long)&UNK_1107a6f08;
            plVar3[8] = unaff_x22 + 0x10;
            lVar6 = *plVar8;
            plVar3[0xd] = (long)&PTR_DAT_1107a6e88;
            lVar7 = 0x10;
            _swift_task_alloc();
            plVar3[0xe] = lVar7;
            lVar7 = *(long *)(lVar6 + 0x50);
            plVar3[0xf] = lVar7;
            lVar7 = *(long *)(lVar7 + -8);
            plVar3[0x10] = lVar7;
            uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
            _swift_task_alloc();
            plVar3[0x11] = uVar4;
            plVar5 = (long *)0x70;
            _swift_task_alloc();
            plVar3[0x12] = (long)plVar5;
            *plVar5 = (long)plVar3;
            plVar5[1] = (long)&UNK_104876614;
            plVar5[5] = uVar4;
            plVar5[6] = (long)plVar8;
            lVar6 = *(long *)(*plVar8 + 0x50);
            plVar5[7] = lVar6;
            lVar7 = 0;
            __sSqMa(0,lVar6);
            plVar5[8] = lVar7;
            lVar7 = *(long *)(lVar7 + -8);
            plVar5[9] = lVar7;
            uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
            _swift_task_alloc();
            plVar5[10] = uVar4;
            lVar7 = *(long *)(lVar6 + -8);
            plVar5[0xb] = lVar7;
            uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
            _swift_task_alloc();
            plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101da3bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Entry: 101da3c00; end: 101da3c57;  */

void FUN_101da3c00(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101da3c58;
  }
  else {
    pcVar1 = FUN_101da3ccc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101da3c58; end: 101da3ccb;  */

void FUN_101da3c58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = uVar4;
  func_0x000107c5d61c(uVar4,param_2,uVar1,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101da3cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 101da3ccc; end: 101da3d37;  */

void FUN_101da3ccc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar3,0,0);
  *puVar3 = uVar4;
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101da3d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da3d38; end: 101da3ea3;  */

undefined1  [16] FUN_101da3d38(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  ulong uStack_58;
  
  func_0x000107c4ca10();
  func_0x000107c61180();
  if (param_1 != 0) {
    uStack_58 = 0;
    uVar4 = 0;
    FUN_101da42a0(0,0x112d512f8,&PTR_PTR_1126b25d8);
    func_0x000107c5fc50(param_1,&uStack_58,uVar4);
    func_0x000107c61170(param_1);
    uVar1 = uStack_58;
    if (uStack_58 != 0) {
      if (uStack_58 >> 0x3e == 0) {
        uVar8 = *(ulong *)((uStack_58 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar8 = uStack_58;
        if (-1 < (long)uStack_58) {
          uVar8 = uStack_58 & 0xffffffffffffff8;
        }
        func_0x000107c60480();
      }
      if (uVar8 != 0) {
        if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101da3ea4);
          (*pcVar2)();
        }
        lVar9 = 0;
        lVar7 = 0;
        uVar10 = 0;
        do {
          if ((uVar1 & 0xc000000000000001) == 0) {
            uVar5 = *(ulong *)(uVar1 + uVar10 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar10;
            func_0x000100fb10dc(uVar10,uVar1);
          }
          uVar6 = uVar5;
          func_0x000107c4ca5c();
          if ((int)uVar6 == 2) {
            func_0x000107c61170(uVar5);
            bVar3 = SCARRY8(lVar7,1);
            lVar7 = lVar7 + 1;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101da3e58);
              (*pcVar2)();
            }
          }
          else {
            uVar6 = uVar5;
            func_0x000107c4ca5c();
            func_0x000107c61170(uVar5);
            if (((int)uVar6 == 3) && (bVar3 = SCARRY8(lVar9,1), lVar9 = lVar9 + 1, bVar3)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101da3e48);
              (*pcVar2)();
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar8 != uVar10);
        func_0x000107c6142c(uVar1);
        goto LAB_101da3e7c;
      }
      func_0x000107c6142c(uVar1);
    }
  }
  lVar7 = 0;
  lVar9 = 0;
LAB_101da3e7c:
  auVar11._8_8_ = lVar9;
  auVar11._0_8_ = lVar7;
  return auVar11;
}



/* Entry: 101da3ea4; end: 101da429f;  */

undefined * FUN_101da3ea4(double param_1,long param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  long alStack_c0 [6];
  undefined1 auStack_90 [8];
  long lStack_88;
  int iStack_7c;
  long *plStack_78;
  
  lVar5 = 0;
  func_0x000107c5eec8();
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar13 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112d373d8;
  puVar14 = &UNK_10d9014c0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar15 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar15 - extraout_x12;
  lVar6 = *param_3;
  plStack_78 = param_3;
  if (lVar6 != 0) {
    func_0x000107e64248();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar11 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
      goto LAB_101da3fa4;
    }
  }
  lVar11 = 0;
  puVar14 = (undefined *)0x0;
LAB_101da3fa4:
  lVar6 = param_2;
  func_0x000107c42ed4();
  func_0x000107c61180();
  bVar1 = lVar6 == 0;
  if (bVar1) {
    func_0x000107c5eea4();
  }
  else {
    func_0x000107c5ee94(lVar15);
    func_0x000107c61170(lVar6);
    lVar6 = 0;
    func_0x000107c5eea4();
  }
  lVar12 = *(long *)(lVar6 + -8);
  (**(code **)(lVar12 + 0x38))(lVar15,bVar1,1,lVar6);
  func_0x0001003a4c00(lVar15,lVar10);
  func_0x000107c5eea4(0);
  lVar15 = lVar10;
  (**(code **)(lVar12 + 0x30))(lVar10,1,lVar6);
  if ((int)lVar15 == 1) {
    func_0x000101da450c(lVar10,0x112d373d8,&UNK_10d9014c0);
    param_1 = 0.0;
  }
  else {
    func_0x000107c5ee8c();
    (**(code **)(lVar12 + 8))(lVar10,lVar6);
  }
  puVar7 = PTR_PTR_1126af4c0;
  func_0x000107c61168();
  lVar6 = param_2;
  func_0x000107c6148c();
  if (lVar6 != 0) {
    func_0x000107c615f0(param_2);
  }
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101da4294);
    (*pcVar3)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101da4298);
    (*pcVar3)();
  }
  if (param_1 < 9.223372036854776e+18) {
    lVar15 = param_2;
    func_0x000107c42ba0();
    iVar4 = (int)lVar15;
    if (-1 < iVar4) {
      func_0x000107c5c7d8();
      func_0x000107c61180();
      lStack_88 = lVar6;
      iStack_7c = iVar4;
      if (param_2 == 0) {
        lVar6 = 0;
        puVar16 = (undefined *)0x0;
        puVar8 = puVar7;
      }
      else {
        lVar6 = param_2;
        func_0x000107c5faec();
        puVar8 = puVar7;
        func_0x000107c61170();
        puVar16 = puVar7;
      }
      func_0x000107c5eec4(puVar13);
      func_0x000107c5eeac();
      (**(code **)(lVar9 + 8))(puVar13,lVar5);
      if (puVar14 == (undefined *)0x0) {
        lVar11 = 0;
      }
      else {
        func_0x000107c5fadc(lVar11,puVar14);
        func_0x000107c6142c(puVar14);
      }
      if (puVar16 == (undefined *)0x0) {
        lVar6 = 0;
      }
      else {
        func_0x000107c5fadc(lVar6,puVar16);
        func_0x000107c6142c(puVar16);
      }
      lVar5 = plStack_78[5];
      lVar15 = plStack_78[6];
      lVar9 = plStack_78[9];
      lVar12 = plStack_78[10];
      func_0x000107c5fadc(param_2,puVar8);
      func_0x000107c6142c(puVar8);
      func_0x000107c5fadc(lVar5,lVar15);
      if (lVar12 == 0) {
        lVar9 = 0;
      }
      else {
        func_0x000107c5fadc(lVar9,lVar12);
      }
      uVar2 = *(uint *)(plStack_78 + 7);
      puVar14 = PTR_PTR_1126c39b0;
      func_0x000107c610f8(PTR_PTR_1126c39b0);
      *(long *)(lVar10 + -0x10) = lVar9;
      *(undefined8 *)(lVar10 + -8) = 0;
      *(ulong *)(lVar10 + -0x20) = (ulong)uVar2;
      *(long *)(lVar10 + -0x18) = lVar5;
      *(undefined8 *)(lVar10 + -0x30) = 0;
      *(long *)(lVar10 + -0x28) = param_2;
      lVar10 = lStack_88;
      func_0x000107c46ac8();
      func_0x000107c615e8(lVar10);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(param_2);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar9);
      return puVar14;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101da42a0);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101da429c);
  (*pcVar3)();
}



/* Entry: 101da42a0; end: 101da42df;  */

void FUN_101da42a0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101da42e0; end: 101da430f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101da42e0(ulong param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar1 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if ((param_1 & 1) != 0) {
      func_0x000107c5fadc(uVar4,uVar6);
      uVar6 = *(undefined8 *)(lVar3 + _DAT_112e2b6b0);
      if (lVar1 == 0) {
        func_0x000107c61174(uVar6);
        uVar5 = 0;
      }
      else {
        func_0x000107c61174(uVar6);
        func_0x000107c5fadc(uVar5,lVar1);
      }
      func_0x000107e675d4(uVar4,bVar2 & 1,uVar6,0,uVar5);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar6);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101da4310; end: 101da437b;  */

void FUN_101da4310(void)

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
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101da4560;
  plVar3[8] = lVar2;
  plVar3[9] = lVar4;
  plVar3[7] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da31f8,0,0);
  return;
}



/* Entry: 101da437c; end: 101da43a7;  */

void FUN_101da437c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101da43a8; end: 101da4413;  */

void FUN_101da43a8(void)

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
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101da4564;
  plVar3[8] = lVar2;
  plVar3[9] = lVar4;
  plVar3[7] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da31f8,0,0);
  return;
}



/* Entry: 101da4414; end: 101da454b;  */

void FUN_101da4414(long *param_1,code *param_2,long param_3)

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



/* Entry: 101da454c; end: 101da4567;  */

void FUN_101da454c(undefined1 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 != (undefined1 *)0x0) {
    func_0x000107c5b198();
    func_0x000107c61180();
    func_0x000107c61170();
    if (param_2 == 0) {
      **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = uVar3;
      func_0x000107c61174(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar1);
      return;
    }
  }
  func_0x000101b9d5ac();
  puVar2 = &UNK_1106c31f8;
  func_0x000107c613f8(&UNK_1106c31f8,param_1,0,0);
  *param_1 = 0x28;
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar4 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar1,uVar3);
  return;
}



/* Entry: 101da4568; end: 101da52ef;  */

void FUN_101da4568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_16;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  return;
}



/* Entry: 101da52f0; end: 101da5307;  */

undefined8 * FUN_101da52f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101da5308; end: 101da5357;  */

void FUN_101da5308(void)

{
  long unaff_x20;
  
  func_0x000101da4c00(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),unaff_x20 + 0x88,
                      *(undefined8 *)(unaff_x20 + 0xb0));
  return;
}



/* Entry: 101da5358; end: 101da546f;  */

void FUN_101da5358(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar2 = &puStack_80;
  ppuVar4 = &puStack_80;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  pcStack_60 = FUN_101da547c;
  puStack_58 = (undefined *)0x0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = (undefined *)0x101da54cc;
  puStack_68 = &UNK_110483020;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  puVar3 = &UNK_110483058;
  func_0x000107c613fc(&UNK_110483058,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  pcStack_60 = FUN_101da597c;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100ba5314;
  puStack_68 = &UNK_110483070;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar3);
  func_0x000107c42c14(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101da5470; end: 101da547b;  */

void FUN_101da5470(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar3 = &puStack_80;
  ppuVar5 = &puStack_80;
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x18);
  pcStack_60 = FUN_101da547c;
  puStack_58 = (undefined *)0x0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = (undefined *)0x101da54cc;
  puStack_68 = &UNK_110483020;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  puVar4 = &UNK_110483058;
  func_0x000107c613fc(&UNK_110483058,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  pcStack_60 = FUN_101da597c;
  puStack_80 = puVar2;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100ba5314;
  puStack_68 = &UNK_110483070;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c42c14(uVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101da547c; end: 101da554f;  */

void FUN_101da547c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101dac20c();
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000101dac17c();
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 101da5550; end: 101da56ff;  */

void FUN_101da5550(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  long lStack_50;
  
  puVar2 = &uStack_70;
  if (*(long *)(param_1 + 0x10) == 1) {
    FUN_101da5700(auStack_68);
    if (lStack_50 == 0) {
      param_1 = auStack_68;
      func_0x000100a119cc();
    }
    else {
      uVar1 = 0x112e2b8a8;
      func_0x0001000285a8(0x112e2b8a8,&UNK_10da14ac0);
      func_0x000107c6147c(&uStack_70,auStack_68,PTR___ss11AnyHashableVN_11034e448,uVar1,6);
      param_1 = (undefined1 *)puVar2;
      if (((ulong)puVar2 & 1) != 0) {
        func_0x0001000285a8(0x112e2b8b0,&UNK_10da14ac8);
        uVar1 = uStack_70;
        func_0x000107c4cc64();
        func_0x000107c61180();
        uVar3 = uVar1;
        func_0x0001000bda74();
        func_0x000107c61170(uVar1);
        func_0x000100b60084(auStack_68);
        func_0x000107c61574(uVar3);
        func_0x0001000285a8(0x112d51728,&UNK_10d918550);
        uVar1 = uStack_70;
        func_0x000107c4cd6c();
        func_0x000107c61180();
        uVar3 = uVar1;
        func_0x0001000bda74();
        func_0x000107c61170(uVar1);
        func_0x000100b60084(auStack_68);
        func_0x000107c61574(uVar3);
        func_0x000107c615e8(uStack_70);
        return;
      }
    }
  }
  func_0x000101b9d5ac();
  puVar5 = &UNK_1106c31f8;
  puVar4 = puVar5;
  puVar6 = param_1;
  func_0x000107c613f8(&UNK_1106c31f8,param_1,0,0);
  *puVar6 = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar4);
  func_0x000107c613f8(&UNK_1106c31f8,param_1,0,0);
  *param_1 = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar5);
  return;
}



/* Entry: 101da5700; end: 101da5773;  */

undefined8 * FUN_101da5700(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_2 + 0x38);
  func_0x000107c60268(puVar2,~(-1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f)));
  if (puVar2 == (undefined8 *)(1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f))) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return puVar2;
  }
  if ((ulong)puVar2 >> ((ulong)*(byte *)(param_2 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101da59cc);
    (*pcVar1)();
  }
  if ((*(ulong *)(param_2 + ((ulong)puVar2 >> 3 & 0xffffffffffffff8) + 0x38) >>
       ((ulong)puVar2 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101da59d0);
    (*pcVar1)();
  }
  if (*(int *)(param_2 + 0x24) == *(int *)(param_2 + 0x24)) {
    (**(code **)(*(long *)(PTR___ss11AnyHashableVN_11034e448 + -8) + 0x10))
              (param_1,*(long *)(param_2 + 0x30) + (long)puVar2 * 0x28);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101da59d4);
  (*pcVar1)();
}



/* Entry: 101da5774; end: 101da578f;  */

void FUN_101da5774(long param_1,long param_2)

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



/* Entry: 101da5790; end: 101da5957;  */

/* WARNING: Possible PIC construction at 0x000101da579c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101da57ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101da57bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101da57cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101da57dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101da57ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101da57fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101da57f0) */
/* WARNING: Removing unreachable block (ram,0x000101da57e0) */
/* WARNING: Removing unreachable block (ram,0x000101da57d0) */
/* WARNING: Removing unreachable block (ram,0x000101da57c0) */
/* WARNING: Removing unreachable block (ram,0x000101da57b0) */
/* WARNING: Removing unreachable block (ram,0x000101da57a0) */
/* WARNING: Removing unreachable block (ram,0x000101da5800) */

void FUN_101da5790(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101da5958; end: 101da597b;  */

void FUN_101da5958(undefined8 *param_1,undefined8 param_2)

{
  func_0x000101da46bc();
  *param_1 = param_2;
  return;
}



/* Entry: 101da597c; end: 101da59f3;  */

void FUN_101da597c(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  long lStack_50;
  
  puVar2 = &uStack_70;
  if (*(long *)(param_1 + 0x10) == 1) {
    FUN_101da5700(auStack_68,param_1,*(undefined8 *)(unaff_x20 + 0x10),
                  *(undefined8 *)(unaff_x20 + 0x18));
    if (lStack_50 == 0) {
      param_1 = auStack_68;
      func_0x000100a119cc();
    }
    else {
      uVar1 = 0x112e2b8a8;
      func_0x0001000285a8(0x112e2b8a8,&UNK_10da14ac0);
      func_0x000107c6147c(&uStack_70,auStack_68,PTR___ss11AnyHashableVN_11034e448,uVar1,6);
      param_1 = (undefined1 *)puVar2;
      if (((ulong)puVar2 & 1) != 0) {
        func_0x0001000285a8(0x112e2b8b0,&UNK_10da14ac8);
        uVar1 = uStack_70;
        func_0x000107c4cc64();
        func_0x000107c61180();
        uVar3 = uVar1;
        func_0x0001000bda74();
        func_0x000107c61170(uVar1);
        func_0x000100b60084(auStack_68);
        func_0x000107c61574(uVar3);
        func_0x0001000285a8(0x112d51728,&UNK_10d918550);
        uVar1 = uStack_70;
        func_0x000107c4cd6c();
        func_0x000107c61180();
        uVar3 = uVar1;
        func_0x0001000bda74();
        func_0x000107c61170(uVar1);
        func_0x000100b60084(auStack_68);
        func_0x000107c61574(uVar3);
        func_0x000107c615e8(uStack_70);
        return;
      }
    }
  }
  func_0x000101b9d5ac();
  puVar5 = &UNK_1106c31f8;
  puVar4 = puVar5;
  puVar6 = param_1;
  func_0x000107c613f8(&UNK_1106c31f8,param_1,0,0);
  *puVar6 = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar4);
  func_0x000107c613f8(&UNK_1106c31f8,param_1,0,0);
  *param_1 = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar5);
  return;
}



/* Entry: 101da59f4; end: 101da5a37;  */

long FUN_101da59f4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101da5a38; end: 101da5a47;  */

void FUN_101da5a38(long param_1,long param_2)

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



/* Entry: 101da5a48; end: 101da5b7f;  */

void FUN_101da5a48(long param_1)

{
  long extraout_x8;
  long extraout_x12;
  undefined1 auStack_30 [15];
  undefined1 uStack_21;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))(auStack_30 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c6147c(&uStack_21,auStack_30 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,
                      &UNK_1106c31f8,6);
  return;
}



/* Entry: 101da5b80; end: 101da61f3;  */

void FUN_101da5b80(ulong param_1)

{
  FUN_101da5a48();
                    /* WARNING: Could not recover jumptable at 0x000101da5bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10da14ad0 + (param_1 & 0xffffffff) * 2) * 4 + 0x101da5bcc))
            (0x206e776f6e6b6e55,0xed0000726f727265);
  return;
}



/* Entry: 101da61f4; end: 101da62f7;  */

undefined1 FUN_101da61f4(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **unaff_x20;
  
  ppuVar2 = unaff_x20;
  func_0x000107c42210();
  func_0x000107c61180();
  ppuVar3 = ppuVar2;
  func_0x000107c5faec();
  lVar4 = param_2;
  func_0x000107c61170(ppuVar2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e877f8;
  func_0x000107c5faec();
  if ((ppuVar3 == ppuVar2) && (param_2 == lVar4)) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar4);
  }
  else {
    func_0x000107c605b8(ppuVar3,param_2,ppuVar2,lVar4,0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar4);
    if (((ulong)ppuVar3 & 1) == 0) {
      return 0x3d;
    }
  }
  func_0x000107c3fcb0();
  if (((long)unaff_x20 - 3U < 0x21) && ((0x1fffffffdU >> ((long)unaff_x20 - 3U & 0x3f) & 1) != 0)) {
    return (&UNK_10da14c51)[(long)unaff_x20];
  }
  func_0x0001000285a8(0x112e2b8b8,&UNK_10da14b58);
  func_0x000107c605b4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101da62f8);
  (*pcVar1)();
}



/* Entry: 101da62f8; end: 101da6343;  */

void FUN_101da62f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101da6344; end: 101da635f;  */

void FUN_101da6344(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da6360,0,0);
  return;
}



/* Entry: 101da6360; end: 101da63d7;  */

void FUN_101da6360(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 200) + 0x10) + 0x10);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
  plVar1 = (long *)0x80;
  func_0x000107c6157c(uVar2);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101da63d8;
                    /* WARNING: Could not recover jumptable at 0x000101da63d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101da6cf4();
  return;
}



/* Entry: 101da63d8; end: 101da642b;  */

void FUN_101da63d8(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xe0) = param_1;
  *(undefined1 *)(lVar1 + 0x130) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da642c,0,0);
  return;
}



/* Entry: 101da642c; end: 101da6513;  */

void FUN_101da642c(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x130) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0xe0);
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x90,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 200);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
    uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0x18) + 0x10);
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar5;
    plVar4 = (long *)0x80;
    UNRECOVERED_JUMPTABLE = FUN_101da6b94;
    func_0x000107c6157c(uVar5);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xf0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101da6514;
  }
                    /* WARNING: Could not recover jumptable at 0x000101da6510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101da6514; end: 101da6567;  */

void FUN_101da6514(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xf8) = param_1;
  *(undefined1 *)(lVar1 + 0x131) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101da6568,0,0);
  return;
}



/* Entry: 101da6568; end: 101da683b;  */

void FUN_101da6568(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  undefined8 uVar11;
  
  if (*(char *)(unaff_x22 + 0x131) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0xf8);
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
    if (iVar3 != 0) {
      uVar9 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x98,uVar9,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar7);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x130);
  }
  else {
    puVar4 = *(undefined1 **)(unaff_x22 + 0xe8);
    func_0x000107c61574();
    func_0x0001000d224c(unaff_x22 + 0xa0);
    lVar8 = *(long *)(unaff_x22 + 0xa0);
    *(long *)(unaff_x22 + 0x100) = lVar8;
    if (lVar8 != 0) {
      lVar6 = *(long *)(unaff_x22 + 0xb8);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c490d4();
      *(undefined **)(unaff_x22 + 0x108) = puVar5;
      func_0x000107e64248();
      func_0x000107c61180();
      if (lVar6 == 0) {
        lVar10 = 0;
        param_2 = 0;
      }
      else {
        lVar10 = lVar6;
        func_0x000107c5faec();
        func_0x000107c61170(lVar6);
      }
      lVar6 = *(long *)(unaff_x22 + 0xc0);
      uVar7 = *(undefined8 *)(lVar6 + 0x40);
      uVar9 = *(undefined8 *)(lVar6 + 0x48);
      uVar11 = *(undefined8 *)(lVar6 + 0x50);
      func_0x000103bd5d30(0);
      func_0x000107c610f8();
      func_0x000107c61434(uVar11);
      func_0x000107c61434(uVar7);
      func_0x000107c61174(puVar5);
      func_0x000103bd5a20(uVar7,PTR___swiftEmptyArrayStorage_11034f1c8,puVar5,0,0,lVar10,param_2,
                          uVar9,uVar11);
      *(undefined8 *)(unaff_x22 + 0x110) = uVar7;
      uVar9 = *(undefined8 *)(lVar6 + 8);
      func_0x000107c5fadc(uVar9,*(undefined8 *)(lVar6 + 0x10));
      *(undefined8 *)(unaff_x22 + 0x118) = uVar9;
      uVar9 = *(undefined8 *)(lVar6 + 0x28);
      uVar11 = *(undefined8 *)(lVar6 + 0x30);
      func_0x000107c61174(uVar7);
      func_0x000107c5fadc(uVar9,uVar11);
      *(undefined8 *)(unaff_x22 + 0x120) = uVar9;
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa8;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_101da683c;
      lVar6 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar6,1);
      uVar7 = 0x112e2b968;
      func_0x0001000285a8(0x112e2b968,&UNK_10da14d00);
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar7;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_101da6a4c;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_1104830c0;
      *(long *)(unaff_x22 + 0x70) = lVar6;
      func_0x000107c3d870(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x131);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x130);
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar4,0,0);
    *puVar4 = 0;
    func_0x000107c61654();
    func_0x000101da6e24(uVar9,uVar2);
  }
  func_0x000101da6e24(uVar7,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101da66dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da683c; end: 101da6893;  */

void FUN_101da683c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x128) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101da6894;
  }
  else {
    pcVar1 = FUN_101da6994;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101da6894; end: 101da6993;  */

void FUN_101da6894(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x0001000d224c(unaff_x22 + 0xb0);
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x131);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x130);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  if (lVar5 == 0) {
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    func_0x000101da6e24(uVar7,uVar3);
    func_0x000101da6e24(uVar6,uVar4);
  }
  else {
    func_0x000107c4fd80(lVar5);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    func_0x000101da6e24(uVar7,uVar3);
    func_0x000101da6e24(uVar6,uVar4);
    func_0x000107c615e8(lVar5);
  }
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x000101da6990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101da6994; end: 101da6a4b;  */

void FUN_101da6994(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x131);
  uVar7 = *(undefined1 *)(unaff_x22 + 0x130);
  func_0x000107c61654();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000101da6e24(uVar8,uVar6);
  func_0x000101da6e24(uVar9,uVar7);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101da6a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


