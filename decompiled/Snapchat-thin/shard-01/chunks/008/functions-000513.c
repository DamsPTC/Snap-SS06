/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014858dc; end: 10148594b;  */

void FUN_1014858dc(void)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  uVar1 = 0x100000000;
  if (*(char *)(unaff_x20 + 0x14) == '\0') {
    uVar1 = 0;
  }
  lVar5 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10148594c;
  plVar4[2] = uVar1 | uVar2;
  plVar4[3] = lVar5;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar5 = lVar3;
  func_0x000107c5fce8();
  plVar4[4] = lVar5;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014856f8,lVar3,lVar5);
  return;
}



/* Entry: 10148594c; end: 101485987;  */

void FUN_10148594c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101485984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101485988; end: 1014859f7;  */

void FUN_101485988(undefined8 param_1)

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
  plVar3[1] = (long)FUN_1014859f8;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1014859f8; end: 1014859fb;  */

void FUN_1014859f8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101485984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1014859fc; end: 101485a8b;  */

uint FUN_1014859fc(void)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = (uint)*(byte *)(unaff_x20 + 0x20);
  if (*(byte *)(unaff_x20 + 0x20) == 2) {
    func_0x00010006c804();
    uVar2 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010ef84750);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    func_0x000100070bfc();
    *(char *)(unaff_x20 + 0x20) = (char)uVar2;
  }
  return uVar2 & 1;
}



/* Entry: 101485a8c; end: 101485ad7;  */

void FUN_101485a8c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101485ad8; end: 101485afb;  */

uint FUN_101485ad8(uint param_1)

{
  FUN_1014859fc();
  return param_1 & 1;
}



/* Entry: 101485afc; end: 101485b87;  */

void FUN_101485afc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126a71a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  *(undefined1 *)(unaff_x20 + 0x34) = 2;
  *(undefined4 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined1 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101485b88; end: 10148628f;  */

void FUN_101485b88(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar8 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar8 + 0x18) = 4;
  *(undefined8 *)(lVar8 + 0x10) = 2;
  *(undefined8 *)(lVar8 + 0x20) = 0x646c6f;
  *(undefined8 *)(lVar8 + 0x28) = 0xe300000000000000;
  iVar7 = (int)param_1;
  if ((param_1 & 0xff00000000) == 0x200000000) {
    uVar3 = 0x6e776f6e6b6e75;
    uVar10 = 0xe700000000000000;
  }
  else if (iVar7 < 2) {
    if (iVar7 == 0) {
      uVar3 = 0x657465442d746f4e;
      uVar10 = 0xee0064656e696d72;
    }
    else if (iVar7 == 1) {
      uVar3 = 0x7463697274736552;
      uVar10 = 0xea00000000006465;
    }
    else {
LAB_10148600c:
      uVar10 = 0xe700000000000000;
      uVar3 = 0x6e776f6e6b6e55;
    }
  }
  else if (iVar7 == 2) {
    uVar10 = 0xe600000000000000;
    uVar3 = 0x6465696e6544;
  }
  else if (iVar7 == 3) {
    uVar10 = 0xe600000000000000;
    uVar3 = 0x737961776c41;
  }
  else {
    if (iVar7 != 4) goto LAB_10148600c;
    uVar3 = 0x2d6e492d6e656857;
    uVar10 = 0xeb00000000657355;
  }
  func_0x000107c5fb78(uVar3,uVar10);
  func_0x000107c6142c(uVar10);
  puVar1 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x38) = 0xe000000000000000;
  *(undefined **)(lVar8 + 0x48) = puVar1;
  *(undefined8 *)(lVar8 + 0x50) = 0x77656e;
  *(undefined8 *)(lVar8 + 0x58) = 0xe300000000000000;
  iVar6 = (int)param_2;
  if (iVar6 < 2) {
    if (iVar6 == 0) {
      uVar3 = 0x657465442d746f4e;
      uVar10 = 0xee0064656e696d72;
    }
    else if (iVar6 == 1) {
      uVar3 = 0x7463697274736552;
      uVar10 = 0xea00000000006465;
    }
    else {
LAB_101485d7c:
      uVar10 = 0xe700000000000000;
      uVar3 = 0x6e776f6e6b6e55;
    }
  }
  else if (iVar6 == 2) {
    uVar10 = 0xe600000000000000;
    uVar3 = 0x6465696e6544;
  }
  else if (iVar6 == 3) {
    uVar10 = 0xe600000000000000;
    uVar3 = 0x737961776c41;
  }
  else {
    if (iVar6 != 4) goto LAB_101485d7c;
    uVar3 = 0x2d6e492d6e656857;
    uVar10 = 0xeb00000000657355;
  }
  param_2 = param_2 & 0x100000000;
  func_0x000107c5fb78(uVar3,uVar10);
  func_0x000107c6142c(uVar10);
  *(undefined **)(lVar8 + 0x78) = puVar1;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(undefined8 *)(lVar8 + 0x68) = 0xe000000000000000;
  lVar5 = lVar8;
  func_0x000100214a84(lVar8);
  func_0x000107c61588(lVar8);
  uVar3 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar8 + 0x20),2,uVar3);
  lVar8 = lVar5;
  func_0x00010018cc3c(lVar5);
  lVar4 = lVar8;
  func_0x000107c5f9dc();
  func_0x000107c6142c(lVar8);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef848d0);
  func_0x000107c2c4c0(0x400000000000,lVar4,uVar3);
  func_0x000107c6142c(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar3);
  if ((param_1 & 0xff00000000) != 0x200000000) {
    uVar3 = 0x6e776f6e6b6e55;
    if (((uint)(param_1 >> 0x20) & 1) != (uint)(param_2 != 0)) {
      if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10148628c);
        (*pcVar2)();
      }
      func_0x0001052f9624(*(long *)(unaff_x20 + 0x18),param_2 != 0,1);
    }
    if (iVar7 == iVar6) goto LAB_101486244;
    lVar8 = *(long *)(unaff_x20 + 0x18);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101486290);
      (*pcVar2)();
    }
    if (iVar6 < 2) {
      if (iVar6 == 0) {
        uVar10 = 0x657465442d746f4e;
        uVar9 = 0xee0064656e696d72;
      }
      else if (iVar6 == 1) {
        uVar10 = 0x7463697274736552;
        uVar9 = 0xea00000000006465;
      }
      else {
LAB_101486134:
        uVar9 = 0xe700000000000000;
        uVar10 = uVar3;
      }
    }
    else if (iVar6 == 2) {
      uVar9 = 0xe600000000000000;
      uVar10 = 0x6465696e6544;
    }
    else if (iVar6 == 3) {
      uVar9 = 0xe600000000000000;
      uVar10 = 0x737961776c41;
    }
    else {
      if (iVar6 != 4) goto LAB_101486134;
      uVar9 = 0xeb00000000657355;
      uVar10 = 0x2d6e492d6e656857;
    }
    func_0x000107c5fadc(uVar10,uVar9);
    func_0x000107c6142c(uVar9);
    if (iVar7 < 2) {
      if (iVar7 == 0) {
        uVar3 = 0x657465442d746f4e;
        uVar9 = 0xee0064656e696d72;
      }
      else if (iVar7 == 1) {
        uVar3 = 0x7463697274736552;
        uVar9 = 0xea00000000006465;
      }
      else {
LAB_101486204:
        uVar9 = 0xe700000000000000;
      }
    }
    else if (iVar7 == 2) {
      uVar9 = 0xe600000000000000;
      uVar3 = 0x6465696e6544;
    }
    else if (iVar7 == 3) {
      uVar9 = 0xe600000000000000;
      uVar3 = 0x737961776c41;
    }
    else {
      if (iVar7 != 4) goto LAB_101486204;
      uVar3 = 0x2d6e492d6e656857;
      uVar9 = 0xeb00000000657355;
    }
    func_0x000107c5fadc(uVar3,uVar9);
    func_0x000107c6142c(uVar9);
    func_0x0001052f973c(lVar8,uVar10,uVar3,1);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar3);
    goto LAB_101486244;
  }
  lVar8 = *(long *)(unaff_x20 + 0x18);
  uVar3 = 0x6e776f6e6b6e55;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101486288);
    (*pcVar2)();
  }
  if (iVar6 < 2) {
    if (iVar6 == 0) {
      uVar3 = 0x657465442d746f4e;
      uVar10 = 0xee0064656e696d72;
    }
    else if (iVar6 == 1) {
      uVar3 = 0x7463697274736552;
      uVar10 = 0xea00000000006465;
    }
    else {
LAB_101486070:
      uVar10 = 0xe700000000000000;
    }
  }
  else if (iVar6 == 2) {
    uVar10 = 0xe600000000000000;
    uVar3 = 0x6465696e6544;
  }
  else if (iVar6 == 3) {
    uVar10 = 0xe600000000000000;
    uVar3 = 0x737961776c41;
  }
  else {
    if (iVar6 != 4) goto LAB_101486070;
    uVar3 = 0x2d6e492d6e656857;
    uVar10 = 0xeb00000000657355;
  }
  func_0x000107c5fb78(uVar3,uVar10);
  func_0x000107c6142c(uVar10);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
  func_0x0001052f9438(lVar8,param_2 != 0,uVar3,1);
  func_0x000107c61170(uVar3);
  lVar5 = 0;
  func_0x0001000b625c();
  func_0x000104472f2c();
  if (lVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101486284);
    (*pcVar2)();
  }
  func_0x0001052fa160(lVar8,lVar5);
LAB_101486244:
  func_0x00010006c804();
  *(char *)(unaff_x20 + 0x34) = (char)(param_2 >> 0x20);
  *(int *)(unaff_x20 + 0x30) = iVar6;
  func_0x000100070bfc();
  return;
}



/* Entry: 101486290; end: 1014863c3;  */

void FUN_101486290(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef848b0);
  func_0x000107c2c4c0(0x400000000000,0,uVar3);
  func_0x000107c61170(uVar3);
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x0001052f996c(*(long *)(unaff_x20 + 0x18),1);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar4 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010ef84890);
    uVar3 = uVar4;
    func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee70();
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    func_0x000107c41d58(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x00010006c804();
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    func_0x000100070bfc();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014863c4);
  (*pcVar1)();
}



/* Entry: 1014863c4; end: 1014865ab;  */

void FUN_1014863c4(double param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  double dVar8;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(puVar4);
  func_0x000107c5ee68(param_2);
  pcVar7 = *(code **)(lVar6 + 8);
  (*pcVar7)(puVar4,lVar1);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef84870);
  func_0x000107c2c4c0(0x400000000000,0,uVar2);
  func_0x000107c61170(uVar2);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1014865ac);
    (*pcVar7)();
  }
  func_0x0001052f99e4(lVar6,1);
  func_0x0001052f9a5c(param_1,lVar6);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef84890);
  uVar2 = uVar3;
  func_0x000107c5eea0(puVar4);
  func_0x000107c5ee70();
  (*pcVar7)(puVar4,lVar1);
  func_0x000107c41d64(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  if (120.0 < param_1) {
    dVar8 = ((double)*(long *)(unaff_x20 + 0x38) / param_1) * 60.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1014865a0);
      (*pcVar7)();
    }
    if (dVar8 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1014865a4);
      (*pcVar7)();
    }
    if (9.223372036854776e+18 <= dVar8) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1014865a8);
      (*pcVar7)();
    }
    func_0x0001052f9ae0(lVar6,(long)dVar8);
  }
  func_0x00010006c804();
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  func_0x000100070bfc();
  return;
}



/* Entry: 1014865ac; end: 10148673f;  */

void FUN_1014865ac(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  func_0x00010006c804();
  if (SCARRY8(*(long *)(unaff_x20 + 0x38),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101486738);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + 0x38) = *(long *)(unaff_x20 + 0x38) + 1;
  if ((*(byte *)(unaff_x20 + 0x40) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x40) = 1;
    lVar2 = 0;
    func_0x0001000b625c();
    func_0x000104472f2c();
    if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101486740);
      (*pcVar1)();
    }
    if (lVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10148673c);
      (*pcVar1)();
    }
    func_0x0001052fa1d8();
  }
  func_0x000100070bfc();
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar6 = 0x6e6f697461636f4c;
  *(undefined8 *)(lVar2 + 0x20) = 0x6e6f697461636f6c;
  *(undefined8 *)(lVar2 + 0x28) = 0xe800000000000000;
  uVar3 = 0;
  FUN_101487064();
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  func_0x000107c61174(param_1);
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  FUN_100f15a0c((undefined8 *)(lVar2 + 0x20));
  lVar2 = lVar4;
  func_0x00010018cc3c(lVar4);
  lVar5 = lVar2;
  func_0x000107c5f9dc();
  func_0x000107c6142c(lVar2);
  func_0x000107c5fadc(0x6e6f697461636f4c,0xef65746164705520);
  func_0x000107c2c4c0(0x400000000000,lVar5,uVar6);
  func_0x000107c6142c(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 101486740; end: 101486a47;  */

void FUN_101486740(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar7 = lVar6 - extraout_x12;
  uVar2 = param_2;
  func_0x000107c417b4(param_2);
  func_0x000107c61180();
  func_0x000107c5ee94(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c5eea0(lVar6);
  uVar3 = uVar7;
  func_0x000107c5ee78(uVar7,lVar6);
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(lVar6,lVar1);
  lVar8 = lVar1;
  (*pcVar9)(uVar7,lVar1);
  if ((uVar3 & 1) == 0) {
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x10);
    func_0x000107c6142c(uStack_78);
    uStack_80 = 0x7241207469736956;
    uStack_78 = 0xee00206c61766972;
    uVar2 = param_2;
    func_0x000107c417f0(param_2);
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    func_0x000107c5fb78(uVar4,lVar8);
    func_0x000107c6142c(lVar8);
    uVar2 = uStack_78;
    uVar4 = uStack_80;
    func_0x000107c5fadc(uStack_80,uStack_78);
    func_0x000107c2c4c0(0x400000000000,0,uVar4);
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(uVar4);
    lVar8 = *(long *)(unaff_x20 + 0x18);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x101486a48);
      (*pcVar9)();
    }
    func_0x0001052f9b58(lVar8,1);
    func_0x000107c5eea0(uVar7);
    func_0x000107c3e184(param_2);
    func_0x000107c61180();
    func_0x000107c5ee94(lVar6);
    func_0x000107c61170(param_2);
    func_0x000107c5ee68(lVar6);
    (*pcVar9)(lVar6,lVar1);
    (*pcVar9)(uVar7,lVar1);
    func_0x0001052f9bd0(param_1,lVar8);
  }
  else {
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x12);
    func_0x000107c6142c(uStack_78);
    uStack_80 = 0xd000000000000010;
    uStack_78 = 0x800000010ef847a0;
    func_0x000107c417f0(param_2);
    func_0x000107c61180();
    uVar2 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    func_0x000107c5fb78(uVar2,lVar8);
    func_0x000107c6142c(lVar8);
    uVar2 = uStack_78;
    uVar4 = uStack_80;
    func_0x000107c5fadc(uStack_80,uStack_78);
    func_0x000107c2c4c0(0x400000000000,0,uVar4);
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(uVar4);
    lVar8 = *(long *)(unaff_x20 + 0x18);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x101486a44);
      (*pcVar9)();
    }
    uVar5 = 1;
    lVar1 = lVar8;
    func_0x0001052f9c54(lVar8);
    FUN_10148a964();
    if ((uVar5 & 0xff) != 1) {
      func_0x0001052f9ccc(lVar1,lVar8);
    }
  }
  return;
}



/* Entry: 101486a48; end: 101486b87;  */

void FUN_101486a48(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x16);
  func_0x000107c5fb78(0xd000000000000014,0x800000010ef84780);
  uVar2 = 0x112d393f0;
  uStack_48 = param_1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_48,&uStack_40,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar2 = uStack_38;
  uVar3 = uStack_40;
  func_0x000107c5fadc(uStack_40,uStack_38);
  func_0x000107c2c4c0(0x400000000000,0,uVar3);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c5ed2c();
  lVar6 = *(long *)(unaff_x20 + 0x18);
  if (lVar6 != 0) {
    uVar2 = param_1;
    func_0x000107c3fcb0();
    puVar4 = PTR___sSiN_11034deb0;
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    uStack_40 = uVar2;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar5);
    func_0x0001052f9fec(lVar6,puVar4,1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101486b88);
  (*pcVar1)();
}



/* Entry: 101486b88; end: 101486be3;  */

void FUN_101486b88(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101486be4; end: 101486dcb;  */

void FUN_101486be4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  if (*(long *)(*unaff_x20 + 0x18) != 0) {
    func_0x0001052f93c0(*(long *)(*unaff_x20 + 0x18),1);
    uVar2 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010ef84910);
    func_0x000107c2c4c0(0x400000000000,0,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101486c48);
  (*pcVar1)();
}



/* Entry: 101486dcc; end: 101486dd7;  */

void FUN_101486dcc(ulong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  
  func_0x000107c602fc(0x1e);
  func_0x000107c6142c(0xe000000000000000);
  bVar2 = (param_1 & 1) == 0;
  uVar3 = 0x65757274;
  if (bVar2) {
    uVar3 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef84810);
  func_0x000107c2c4c0(0x400000000000,0,uVar3);
  func_0x000107c6142c(0x800000010ef84810);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101486dd8; end: 101487063;  */

void FUN_101486dd8(void)

{
  FUN_101486740();
  return;
}



/* Entry: 101487064; end: 1014870a7;  */

void FUN_101487064(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da2440 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112da2440 = puVar1;
  return;
}



/* Entry: 1014870a8; end: 101487113;  */

void FUN_1014870a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101487114,uVar1,uVar2);
  return;
}



/* Entry: 101487114; end: 1014871e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101487114(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  code *pcVar7;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  puVar2 = PTR__OBJC_CLASS___CLLocationManager_1126bc328;
  func_0x000107c610f8();
  func_0x000107c453e4();
  plVar1 = (long *)(lVar3 + _DAT_112da2458);
  func_0x000107c61428(plVar1,unaff_x22 + 0x10,1,0);
  lVar3 = *plVar1;
  *plVar1 = (long)puVar2;
  plVar1[1] = (long)&PTR_DAT_1103c5c70;
  func_0x000107c615e8(lVar3);
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar5 = plVar1[1];
    lVar4 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar7 = *(code **)(lVar5 + 0x10);
    func_0x000107c615f0(lVar3);
    func_0x000107c61174(uVar6);
    (*pcVar7)(uVar6,lVar4,lVar5);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001014871e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1014871e4; end: 10148765f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014871e4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  long alStack_d0 [2];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uStack_b8 = param_2;
  func_0x00010006c804();
  lVar13 = _DAT_112da2498;
  func_0x000107c61428(unaff_x20 + _DAT_112da2498,auStack_78,0,0);
  lVar4 = 0;
  func_0x0001019f4894();
  lVar14 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = -(lVar14 + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_c0 + lVar10;
  FUN_10148962c(unaff_x20 + lVar13,puVar15,&SUB_1019f4894);
  lVar4 = 0x112da24e8;
  func_0x0001000285a8(0x112da24e8,&UNK_10d946a60);
  lVar11 = *(long *)(lVar4 + -8);
  puVar5 = puVar15;
  (**(code **)(lVar11 + 0x30))(puVar15,1,lVar4);
  FUN_1014896d4(puVar15,&SUB_1019f4894);
  if ((int)puVar5 == 1) {
    if ((char)((int *)(unaff_x20 + _DAT_112da2460))[1] != '\x02' &&
        *(int *)(unaff_x20 + _DAT_112da2460) == 3) {
      plVar1 = (long *)(unaff_x20 + _DAT_112da2458);
      func_0x000107c61428(plVar1,auStack_a8,0,0);
      lVar12 = *plVar1;
      if (lVar12 != 0) {
        lVar16 = plVar1[1];
        lVar6 = lVar12;
        func_0x000107c614f0(lVar12);
        pcVar17 = *(code **)(lVar16 + 0xa0);
        func_0x000107c615f0(lVar12);
        (*pcVar17)(1,lVar6,lVar16);
        func_0x000107c615e8(lVar12);
      }
    }
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uVar18 = lVar14 + 0xfU & 0xfffffffffffffff0;
    lVar14 = (long)puVar15 - uVar18;
    func_0x000107c5eea0(lVar14);
    (**(code **)(lVar11 + 0x38))(lVar14,0,1,lVar4);
    func_0x000107c61428(unaff_x20 + lVar13,auStack_90,0x21,0);
    FUN_101489514(lVar14,unaff_x20 + lVar13);
    func_0x000107c614a8(auStack_90);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar4 = (long)puVar15 - uVar18;
    FUN_10148962c(unaff_x20 + lVar13,lVar4,&SUB_1019f4894);
    func_0x0001007d6d78(lVar4);
    FUN_1014896d4(lVar4,&SUB_1019f4894);
    lVar4 = unaff_x20 + _DAT_112da2448;
    uVar8 = *(undefined8 *)(lVar4 + 0x18);
    lVar13 = *(long *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,uVar8);
    (**(code **)(lVar13 + 0x20))(uVar8,lVar13);
    iVar3 = 2;
    func_0x000100029b9c(2,0x11,0,0);
    if (iVar3 != 0) {
      lVar4 = unaff_x20 + _DAT_112da2450;
      uVar18 = *(ulong *)(lVar4 + 0x18);
      lVar13 = *(long *)(lVar4 + 0x20);
      func_0x0001000a8868(lVar4,uVar18);
      (**(code **)(lVar13 + 8))(uVar18,lVar13);
      lVar4 = _DAT_112da2490;
      puVar2 = PTR___sytN_11034f1b0;
      if ((uVar18 & 1) != 0) {
        lVar13 = *(long *)(unaff_x20 + _DAT_112da2490);
        if (lVar13 != 0) {
          func_0x000107c6157c(lVar13);
          uVar8 = 0x112d393f0;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          func_0x000107c5fd50(lVar13,puVar2 + 8,uVar8,PTR___ss5ErrorWS_11034ee10);
          func_0x000107c61574(lVar13);
        }
        puVar7 = &UNK_1103c5a50;
        func_0x000107c613fc(&UNK_1103c5a50,0x18,7);
        func_0x000107c61614(puVar7 + 0x10);
        *(undefined **)((long)alStack_d0 + lVar10) = puVar2 + 8;
        uVar8 = 0x22;
        func_0x000100859150(0x22,0,0x3c,4,0,0,&UNK_10d9469e0,puVar7);
        func_0x000107c61574(puVar7);
        uVar9 = *(undefined8 *)(unaff_x20 + lVar4);
        *(undefined8 *)(unaff_x20 + lVar4) = uVar8;
        func_0x000107c61574(uVar9);
        goto LAB_101487630;
      }
    }
    plVar1 = (long *)(unaff_x20 + _DAT_112da2458);
    func_0x000107c61428(plVar1,auStack_90,0,0);
    lVar4 = *plVar1;
    if (lVar4 != 0) {
      lVar13 = plVar1[1];
      lVar10 = lVar4;
      func_0x000107c614f0(lVar4);
      pcVar17 = *(code **)(lVar13 + 0x58);
      func_0x000107c615f0(lVar4);
      (*pcVar17)(param_1,lVar10,lVar13);
      func_0x000107c615e8(lVar4);
      lVar4 = *plVar1;
      if (lVar4 != 0) {
        lVar13 = plVar1[1];
        lVar10 = lVar4;
        func_0x000107c614f0(lVar4);
        pcVar17 = *(code **)(lVar13 + 0x70);
        func_0x000107c615f0(lVar4);
        (*pcVar17)(uStack_b8,lVar10,lVar13);
        func_0x000107c615e8(lVar4);
        lVar4 = *plVar1;
        if (lVar4 != 0) {
          lVar13 = plVar1[1];
          lVar10 = lVar4;
          func_0x000107c614f0(lVar4);
          pcVar17 = *(code **)(lVar13 + 0xb0);
          func_0x000107c615f0(lVar4);
          (*pcVar17)(lVar10,lVar13);
          func_0x000107c615e8(lVar4);
        }
      }
    }
  }
LAB_101487630:
  func_0x000100070bfc();
  return;
}



/* Entry: 101487660; end: 101487677;  */

void FUN_101487660(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101487678,0,0);
  return;
}



/* Entry: 101487678; end: 1014877fb;  */

void FUN_101487678(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x22;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)(unaff_x22 + 0x28);
  lVar1 = 0;
  func_0x000107c5f090();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  lVar1 = 0;
  func_0x000107c5f094();
  lVar8 = *(long *)(lVar1 + -8);
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar3);
  lVar4 = 0;
  func_0x000107c5f084();
  lVar9 = *(long *)(lVar4 + -8);
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  (**(code **)(lVar9 + 0x68))();
  func_0x000107c5f07c(uVar3,uVar5);
  (**(code **)(lVar9 + 8))(uVar5,lVar4);
  func_0x000107c615c0(uVar5);
  func_0x000107c5f088(uVar2);
  (**(code **)(lVar8 + 8))(uVar3,lVar1);
  func_0x000107c615c0(uVar3);
  lVar1 = 0x112da24f0;
  func_0x0001000285a8(0x112da24f0,&UNK_10d9469e8);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x10,0,0);
  plVar6 = (long *)(ulong)*(uint *)(
                                   PTR___s12CoreLocation16CLLocationUpdateV7UpdatesV8IteratorV4nextACSgyYaKFTu_11034f660
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1014877fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb57e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s12CoreLocation16CLLocationUpdateV7UpdatesV8IteratorV4nextACSgyYaKF_11034f658)
            (plVar6,uVar2);
  return;
}



/* Entry: 1014877fc; end: 101487857;  */

void FUN_1014877fc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101487858;
  }
  else {
    *(long *)(lVar2 + 0x60) = unaff_x20;
    pcVar1 = FUN_101487a40;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101487858; end: 1014879e3;  */

void FUN_101487858(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar1 = 0;
  func_0x000107c5f09c();
  lVar7 = *(long *)(lVar1 + -8);
  (**(code **)(lVar7 + 0x30))(uVar5,1,lVar1);
  if ((int)uVar5 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))
              (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x30));
  }
  else {
    uVar2 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    uVar3 = uVar2;
    (**(code **)(lVar7 + 0x20))();
    func_0x000107c5fd5c();
    if ((uVar3 & 1) == 0) {
      func_0x000107c5f098();
      if (uVar3 != 0) {
        lVar8 = *(long *)(unaff_x22 + 0x28);
        func_0x000107c5f080();
        lVar8 = lVar8 + 0x10;
        func_0x000107c61618();
        if (lVar8 != 0) {
          FUN_101487a98(uVar3);
          func_0x000107c61170(lVar8);
        }
        func_0x000107c61170(uVar3);
      }
      (**(code **)(lVar7 + 8))(uVar2,lVar1);
      func_0x000107c615c0(uVar2);
      plVar4 = (long *)(ulong)*(uint *)(
                                       PTR___s12CoreLocation16CLLocationUpdateV7UpdatesV8IteratorV4nextACSgyYaKFTu_11034f660
                                       + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x58) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1014879e4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb57e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___s12CoreLocation16CLLocationUpdateV7UpdatesV8IteratorV4nextACSgyYaKF_11034f658)
                (plVar4,*(undefined8 *)(unaff_x22 + 0x48));
      return;
    }
    lVar8 = *(long *)(unaff_x22 + 0x38);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(lVar7 + 8))(uVar2,lVar1);
    (**(code **)(lVar8 + 8))(uVar5,uVar6);
    func_0x000107c615c0(uVar2);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101487940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1014879e4; end: 101487a3f;  */

void FUN_1014879e4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101487858;
  }
  else {
    *(long *)(lVar2 + 0x60) = unaff_x20;
    pcVar1 = FUN_101487a40;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101487a40; end: 101487a97;  */

void FUN_101487a40(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))
            (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c614ac(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101487a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101487a98; end: 101487f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101487a98(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *puVar7;
  long extraout_x12;
  undefined8 *puVar8;
  long unaff_x20;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined *apuStack_c0 [5];
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  lVar2 = 0;
  func_0x0001019f3ea0();
  lVar13 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)apuStack_c0 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = (undefined8 *)(lVar10 - extraout_x12);
  puVar9 = PTR____NSArray0__struct_11034ab48;
  func_0x000107c6117c();
  func_0x000107c61180();
  apuStack_c0[4] = (undefined *)param_2;
  if (puVar9 != (undefined *)0x0) {
    uVar3 = 0;
    FUN_10148a2e8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar4 = puVar9;
    func_0x000107c5fc54(puVar9,uVar3);
    func_0x000107c61170(puVar9);
    if ((ulong)puVar4 >> 0x3e == 0) {
      puVar9 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar9 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar4) {
        puVar9 = puVar4;
      }
      func_0x000107c60480();
    }
    if (puVar9 != (undefined *)0x0) {
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        puVar7 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
        if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101487f38);
          (*pcVar1)();
        }
        if (SBORROW8((long)puVar9,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101487f3c);
          (*pcVar1)();
        }
        if (puVar7 <= puVar9 + -1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101487f40);
          (*pcVar1)();
        }
        uVar3 = *(undefined8 *)(puVar4 + 0x20);
        puVar7 = *(undefined **)((long)(puVar4 + 0x20) + (puVar9 + -1) * 8);
        func_0x000107c61174();
        func_0x000107c61174();
      }
      else {
        uVar3 = 0;
        FUN_10148974c(0,puVar4,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
        puVar7 = puVar9 + -1;
        if (SBORROW8((long)puVar9,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101487f44);
          (*pcVar1)();
        }
        FUN_10148974c(puVar7,puVar4,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
      }
      apuStack_c0[0] = puVar7;
      apuStack_c0[1] = (undefined *)uVar3;
      func_0x000107c6142c(puVar4);
      func_0x000107c4223c(uVar3);
      uVar3 = param_1;
      func_0x000107c4223c(puVar7);
      puVar4 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
      func_0x000107c610f8();
      func_0x000107c470f8(param_1,uVar3);
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112da2478);
      func_0x000107c6157c(uVar3);
      func_0x000100075034(FUN_10148a39c,apuStack_c0 + 2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar3);
      *puVar8 = puVar4;
      func_0x000107c6159c(puVar8,lVar2,0);
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112da24a0);
      FUN_10148962c(puVar8,lVar10,&SUB_1019f3ea0);
      uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
      uVar12 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
      puVar9 = &UNK_1103c5ac8;
      func_0x000107c613fc(&UNK_1103c5ac8,uVar12 + lVar11,uVar6 | 7);
      *(long *)(puVar9 + 0x10) = unaff_x20;
      func_0x000101489670(lVar10,puVar9 + uVar12);
      pcStack_90 = FUN_10148a3b0;
      apuStack_c0[2] = PTR___NSConcreteStackBlock_11034bd00;
      apuStack_c0[3] = (undefined *)0x42000000;
      apuStack_c0[4] = &UNK_1000f6b44;
      puStack_98 = &UNK_1103c5ae0;
      ppuVar5 = apuStack_c0 + 2;
      puStack_88 = puVar9;
      func_0x000107c60bc4(ppuVar5);
      puVar9 = puStack_88;
      func_0x000107c61174(puVar4);
      func_0x000107c61174();
      func_0x000107c61574(puVar9);
      func_0x000107c4e524(uVar3);
      func_0x000107c61170(apuStack_c0[1]);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(apuStack_c0[0]);
      FUN_1014896d4(puVar8,&SUB_1019f3ea0);
      return;
    }
    func_0x000107c6142c(puVar4);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112da2478);
  func_0x000107c6157c(uVar3);
  func_0x000100075034(FUN_1014895e8,apuStack_c0 + 2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar3);
  *puVar8 = param_2;
  func_0x000107c6159c(puVar8,lVar2,0);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112da24a0);
  FUN_10148962c(puVar8,lVar10,&SUB_1019f3ea0);
  uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar9 = &UNK_1103c5a78;
  func_0x000107c613fc(&UNK_1103c5a78,uVar12 + lVar11,uVar6 | 7);
  *(long *)(puVar9 + 0x10) = unaff_x20;
  func_0x000101489670(lVar10,puVar9 + uVar12);
  pcStack_90 = FUN_1014896b4;
  apuStack_c0[2] = PTR___NSConcreteStackBlock_11034bd00;
  apuStack_c0[3] = (undefined *)0x42000000;
  apuStack_c0[4] = &UNK_1000f6b44;
  puStack_98 = &UNK_1103c5a90;
  ppuVar5 = apuStack_c0 + 2;
  puStack_88 = puVar9;
  func_0x000107c60bc4(ppuVar5);
  puVar9 = puStack_88;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar9);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar5);
  FUN_1014896d4(puVar8,&SUB_1019f3ea0);
  lVar2 = unaff_x20 + _DAT_112da2448;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar10 = *(long *)(lVar2 + 0x20);
  func_0x0001000a8868(lVar2,uVar3);
  (**(code **)(lVar10 + 0x40))(param_2,uVar3,lVar10);
  return;
}



/* Entry: 101487f44; end: 1014882d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101487f44(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  func_0x0001019f4894();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar9 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar9 - extraout_x12;
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lStack_b0 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112da2488);
  func_0x00010006c804();
  lVar6 = _DAT_112da2498;
  func_0x000107c61428(unaff_x20 + _DAT_112da2498,auStack_78,0,0);
  FUN_10148962c(unaff_x20 + lVar6,lVar10,&SUB_1019f4894);
  lVar3 = 0x112da24e8;
  func_0x0001000285a8(0x112da24e8,&UNK_10d946a60);
  lVar7 = *(long *)(lVar3 + -8);
  lVar11 = lVar10;
  (**(code **)(lVar7 + 0x30))(lVar10,1,lVar3);
  lVar2 = lStack_b0;
  if ((int)lVar11 == 1) {
    FUN_1014896d4(lVar10,&SUB_1019f4894);
  }
  else {
    lStack_c8 = lVar8;
    lStack_c0 = lVar4;
    uStack_b8 = uVar12;
    (**(code **)(lVar8 + 0x20))(lStack_b0,lVar10,lVar4);
    lVar11 = unaff_x20 + _DAT_112da2448;
    uVar12 = *(undefined8 *)(lVar11 + 0x18);
    lVar4 = *(long *)(lVar11 + 0x20);
    func_0x0001000a8868(lVar11,uVar12);
    (**(code **)(lVar4 + 0x28))(lVar2,uVar12,lVar4);
    (**(code **)(lVar7 + 0x38))(puVar9,1,1,lVar3);
    func_0x000107c61428(unaff_x20 + lVar6,auStack_90,0x21,0);
    FUN_101489514(puVar9,unaff_x20 + lVar6);
    func_0x000107c614a8(auStack_90);
    FUN_10148962c(unaff_x20 + lVar6,puVar9,&SUB_1019f4894);
    func_0x0001007d6d78(puVar9);
    FUN_1014896d4(puVar9,&SUB_1019f4894);
    plVar1 = (long *)(unaff_x20 + _DAT_112da2458);
    func_0x000107c61428(plVar1,auStack_90,0,0);
    lVar3 = *plVar1;
    if (lVar3 != 0) {
      lVar11 = plVar1[1];
      lVar6 = lVar3;
      func_0x000107c614f0(lVar3);
      pcVar5 = *(code **)(lVar11 + 0xa0);
      func_0x000107c615f0(lVar3);
      (*pcVar5)(0,lVar6,lVar11);
      func_0x000107c615e8(lVar3);
    }
    lVar3 = _DAT_112da2490;
    lVar6 = *(long *)(unaff_x20 + _DAT_112da2490);
    if (lVar6 == 0) {
      func_0x000107c61428(plVar1,auStack_a8,0x20,0);
      lVar6 = lStack_c0;
      lVar3 = lStack_c8;
      lVar11 = *plVar1;
      if (lVar11 == 0) {
        (**(code **)(lStack_c8 + 8))(lVar2,lStack_c0);
        func_0x000107c614a8(auStack_a8);
      }
      else {
        lVar7 = plVar1[1];
        func_0x000107c614a8(auStack_a8);
        lVar4 = lVar11;
        func_0x000107c614f0(lVar11);
        pcVar5 = *(code **)(lVar7 + 0xb8);
        func_0x000107c615f0(lVar11);
        (*pcVar5)(lVar4,lVar7);
        func_0x000107c615e8(lVar11);
        (**(code **)(lVar3 + 8))(lVar2,lVar6);
      }
    }
    else {
      func_0x000107c6157c(lVar6);
      uVar12 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c5fd50(lVar6,PTR___sytN_11034f1b0 + 8,uVar12,PTR___ss5ErrorWS_11034ee10);
      func_0x000107c61574(lVar6);
      (**(code **)(lStack_c8 + 8))(lVar2,lStack_c0);
      uVar12 = *(undefined8 *)(unaff_x20 + lVar3);
      *(undefined8 *)(unaff_x20 + lVar3) = 0;
      func_0x000107c61574(uVar12);
    }
  }
  func_0x000100070bfc();
  return;
}



/* Entry: 1014882d4; end: 1014883e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014882d4(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_58 [24];
  
  if ((char)((int *)(unaff_x20 + _DAT_112da2460))[1] == '\x02' ||
      *(int *)(unaff_x20 + _DAT_112da2460) != 3) {
    FUN_1014894d4();
    func_0x000107c613f8(&UNK_11042ac00,param_1,0,0);
    func_0x000107c61654();
  }
  else {
    lVar4 = unaff_x20 + _DAT_112da2448;
    uVar2 = *(undefined8 *)(lVar4 + 0x18);
    lVar3 = *(long *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,uVar2);
    (**(code **)(lVar3 + 0x50))(1,uVar2,lVar3);
    plVar1 = (long *)(unaff_x20 + _DAT_112da2458);
    func_0x000107c61428(plVar1,auStack_58,0,0);
    lVar4 = *plVar1;
    if (lVar4 != 0) {
      lVar5 = plVar1[1];
      lVar3 = lVar4;
      func_0x000107c614f0(lVar4);
      pcVar6 = *(code **)(lVar5 + 0xd8);
      func_0x000107c615f0(lVar4);
      (*pcVar6)(lVar3,lVar5);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 1014883e8; end: 1014884fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014883e8(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_58 [24];
  
  if ((char)((int *)(unaff_x20 + _DAT_112da2460))[1] == '\x02' ||
      *(int *)(unaff_x20 + _DAT_112da2460) != 3) {
    FUN_1014894d4();
    func_0x000107c613f8(&UNK_11042ac00,param_1,0,0);
    func_0x000107c61654();
  }
  else {
    lVar4 = unaff_x20 + _DAT_112da2448;
    uVar2 = *(undefined8 *)(lVar4 + 0x18);
    lVar3 = *(long *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,uVar2);
    (**(code **)(lVar3 + 0x58))(1,uVar2,lVar3);
    plVar1 = (long *)(unaff_x20 + _DAT_112da2458);
    func_0x000107c61428(plVar1,auStack_58,0,0);
    lVar4 = *plVar1;
    if (lVar4 != 0) {
      lVar5 = plVar1[1];
      lVar3 = lVar4;
      func_0x000107c614f0(lVar4);
      pcVar6 = *(code **)(lVar5 + 0xe8);
      func_0x000107c615f0(lVar4);
      (*pcVar6)(lVar3,lVar5);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 1014884fc; end: 10148855b; -[_TtC26CoreLocationImplementation19CoreLocationManager init] */

void FUN_1014884fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CoreLocationImplementation.CoreLocationManager",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101488528);
  (*pcVar1)();
}



/* Entry: 10148855c; end: 10148862b; -[_TtC26CoreLocationImplementation19CoreLocationManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10148855c(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112da2448);
  func_0x0001000834e4(param_1 + _DAT_112da2450);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da2458));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da2468));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da2470));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da2478));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da2480));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da2488));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da2490));
  FUN_1014896d4(param_1 + _DAT_112da2498,&SUB_1019f4894);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da24a0));
  return;
}



/* Entry: 10148862c; end: 101488633;  */

void FUN_10148862c(void)

{
  if (lRam0000000112da24d0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e63b75c);
  return;
}



/* Entry: 101488634; end: 10148866b;  */

void FUN_101488634(undefined8 param_1)

{
  if (lRam0000000112da24d0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e63b75c);
  return;
}



/* Entry: 10148866c; end: 101488723;  */

void FUN_10148866c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_80 = &UNK_10d946968;
  puStack_78 = &UNK_10d946968;
  puStack_70 = &UNK_10d946980;
  puStack_68 = &UNK_10d946998;
  puStack_60 = PTR___sBoWV_11034d678 + 0x40;
  puStack_38 = &UNK_10d9469b0;
  lVar1 = 0x13f;
  puStack_58 = puStack_60;
  puStack_50 = puStack_60;
  puStack_48 = puStack_60;
  puStack_40 = puStack_60;
  func_0x0001019f4894();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBOWV_11034d658 + 0x40;
    func_0x000107c61630(param_1,0x100,0xc,&puStack_80,param_1 + 0x50);
  }
  return;
}



/* Entry: 101488724; end: 101488883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101488724(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_48 [24];
  
  lVar5 = *unaff_x20;
  lVar4 = lVar5 + _DAT_112da2448;
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  (**(code **)(lVar3 + 0x10))(uVar2,lVar3);
  plVar1 = (long *)(lVar5 + _DAT_112da2458);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar5 = plVar1[1];
    lVar3 = lVar4;
    func_0x000107c614f0(lVar4);
    pcVar6 = *(code **)(lVar5 + 0x28);
    func_0x000107c615f0(lVar4);
    (*pcVar6)(lVar3,lVar5);
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 101488884; end: 1014888cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101488884(void)

{
  long *unaff_x20;
  
  return (ulong)*(uint5 *)(*unaff_x20 + _DAT_112da2460);
}



/* Entry: 1014888cc; end: 101488983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014888cc(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0x112da24f8;
  func_0x0001000285a8(0x112da24f8,&UNK_10d9469f0);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffc0 + -extraout_x8;
  (**(code **)(lVar3 + 0x68))
            (puVar2,*(undefined4 *)
                     PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             lVar1);
  func_0x0001000d52ec(param_1,puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 101488984; end: 101488997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101488984(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + _DAT_112da2470));
  return;
}



/* Entry: 101488998; end: 101488a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101488998(void)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(*unaff_x20 + _DAT_112da2478);
  puStack_40 = &uStack_38;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(0x101489710,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  return uStack_38;
}



/* Entry: 101488a10; end: 101488a2f;  */

void FUN_101488a10(void)

{
  FUN_1014871e4();
  return;
}



/* Entry: 101488a30; end: 101488a4f;  */

void FUN_101488a30(void)

{
  FUN_101487f44();
  return;
}



/* Entry: 101488a50; end: 101488bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101488a50(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_48 [24];
  
  lVar5 = *unaff_x20;
  lVar4 = lVar5 + _DAT_112da2448;
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  (**(code **)(lVar3 + 0x48))(1,uVar2,lVar3);
  plVar1 = (long *)(lVar5 + _DAT_112da2458);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar5 = plVar1[1];
    lVar3 = lVar4;
    func_0x000107c614f0(lVar4);
    pcVar6 = *(code **)(lVar5 + 200);
    func_0x000107c615f0(lVar4);
    (*pcVar6)(lVar3,lVar5);
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 101488bb8; end: 101488bd7;  */

void FUN_101488bb8(void)

{
  FUN_1014882d4();
  return;
}



/* Entry: 101488bd8; end: 101488c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101488bd8(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_48 [24];
  
  lVar5 = *unaff_x20;
  lVar4 = lVar5 + _DAT_112da2448;
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  (**(code **)(lVar3 + 0x50))(0,uVar2,lVar3);
  plVar1 = (long *)(lVar5 + _DAT_112da2458);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar5 = plVar1[1];
    lVar3 = lVar4;
    func_0x000107c614f0(lVar4);
    pcVar6 = *(code **)(lVar5 + 0xe0);
    func_0x000107c615f0(lVar4);
    (*pcVar6)(lVar3,lVar5);
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 101488c8c; end: 101488cab;  */

void FUN_101488c8c(void)

{
  FUN_1014883e8();
  return;
}



/* Entry: 101488cac; end: 101488d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101488cac(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_48 [24];
  
  lVar5 = *unaff_x20;
  lVar4 = lVar5 + _DAT_112da2448;
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  (**(code **)(lVar3 + 0x58))(0,uVar2,lVar3);
  plVar1 = (long *)(lVar5 + _DAT_112da2458);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar5 = plVar1[1];
    lVar3 = lVar4;
    func_0x000107c614f0(lVar4);
    pcVar6 = *(code **)(lVar5 + 0xf0);
    func_0x000107c615f0(lVar4);
    (*pcVar6)(lVar3,lVar5);
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 101488d60; end: 101488d63; -[_TtC26CoreLocationImplementation19CoreLocationManager locationManager:didChangeAuthorizationStatus:] */

void FUN_101488d60(void)

{
  return;
}



/* Entry: 101488d64; end: 101488f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101488d64(undefined8 param_1)

{
  ulong *puVar1;
  long lVar2;
  uint5 *puVar3;
  long lVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  code *pcVar11;
  ulong uVar12;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined1 auStack_78 [24];
  
  puVar1 = (ulong *)(unaff_x20 + _DAT_112da2458);
  func_0x000107c61428(puVar1,auStack_78,0,0);
  uVar10 = *puVar1;
  if (uVar10 != 0) {
    uVar12 = puVar1[1];
    uVar6 = uVar10;
    func_0x000107c614f0();
    pcVar11 = *(code **)(uVar12 + 0x30);
    func_0x000107c615f0(uVar10);
    uVar7 = uVar6;
    (*pcVar11)(uVar6,uVar12);
    (**(code **)(uVar12 + 0x40))(uVar6,uVar12);
    lVar2 = unaff_x20 + _DAT_112da2448;
    uVar9 = *(undefined8 *)(lVar2 + 0x18);
    lVar4 = *(long *)(lVar2 + 0x20);
    func_0x0001000a8868(lVar2,uVar9);
    puVar3 = (uint5 *)(unaff_x20 + _DAT_112da2460);
    uVar12 = 0x100000000;
    if (uVar6 != 0) {
      uVar12 = 0;
    }
    (**(code **)(lVar4 + 0x18))((ulong)*puVar3,uVar12 | uVar7 & 0xffffffff,uVar9,lVar4);
    func_0x00010006c804();
    uVar5 = (undefined1)(uVar12 >> 0x20);
    *(undefined1 *)((long)puVar3 + 4) = uVar5;
    *(int *)puVar3 = (int)uVar7;
    func_0x000100070bfc();
    uStack_80 = (int)uVar7;
    uStack_7c = uVar5;
    func_0x0001007d6d78(&uStack_80);
    puVar8 = &UNK_1103c5bb8;
    func_0x000107c613fc(&UNK_1103c5bb8,0x18,7);
    *(undefined8 *)(puVar8 + 0x10) = param_1;
    func_0x000107c61174(param_1);
    uVar9 = 0x22;
    func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10d946a00,puVar8,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(uVar10);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(uVar9);
  }
  return;
}



/* Entry: 101488f28; end: 101488f3f;  */

void FUN_101488f28(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101488f40,0,0);
  return;
}



/* Entry: 101488f40; end: 101489133;  */

void FUN_101488f40(void)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x22;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x48);
  func_0x000107c4d108();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_10148a2e8(0,0x112da2500,&PTR__OBJC_CLASS___CLRegion_1126a71a8);
  uVar5 = uVar4;
  FUN_10148a328();
  uVar6 = uVar3;
  func_0x000107c5fe10(uVar3,uVar4,uVar5);
  func_0x000107c61170();
  if ((uVar6 & 0xc000000000000001) == 0) {
    lVar11 = 0;
    uVar10 = -1L << ((ulong)*(byte *)(uVar6 + 0x20) & 0x3f);
    puVar8 = (ulong *)(uVar6 + 0x38);
    uVar7 = ~uVar10;
    uVar10 = -uVar10;
    uVar9 = 0xffffffffffffffff;
    if (uVar10 < 0x40) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *puVar8;
  }
  else {
    uVar3 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar3 = uVar6;
    }
    func_0x000107c60288();
    func_0x000107c5fe30(unaff_x22 + 0x10);
    uVar6 = *(ulong *)(unaff_x22 + 0x10);
    puVar8 = *(ulong **)(unaff_x22 + 0x18);
    uVar7 = *(ulong *)(unaff_x22 + 0x20);
    lVar11 = *(long *)(unaff_x22 + 0x28);
    uVar9 = *(ulong *)(unaff_x22 + 0x30);
  }
  uVar10 = uVar9;
  lVar12 = lVar11;
  if ((long)uVar6 < 0) goto LAB_10148908c;
  while( true ) {
    while (uVar9 != 0) {
      uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = *(ulong *)(*(long *)(uVar6 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 8 +
                        lVar11 * 0x200);
      func_0x000107c61174(uVar3);
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        if (uVar3 == 0) goto LAB_1014890f4;
        func_0x000107c5be40(*(undefined8 *)(unaff_x22 + 0x48));
        func_0x000107c61170();
        uVar10 = uVar9;
        lVar12 = lVar11;
        if (-1 < (long)uVar6) break;
LAB_10148908c:
        func_0x000107c602ac();
        lVar12 = lVar11;
        if (uVar3 == 0) goto LAB_1014890f4;
        *(ulong *)(unaff_x22 + 0x40) = uVar3;
        func_0x000107c6147c(unaff_x22 + 0x38,unaff_x22 + 0x40,PTR___syXlN_11034f1a0 + 8,uVar4,7);
        uVar3 = *(ulong *)(unaff_x22 + 0x38);
        uVar9 = uVar10;
      }
    }
    bVar2 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101489134);
      (*pcVar1)();
    }
    if ((long)(uVar7 + 0x40 >> 6) <= lVar11) break;
    uVar9 = puVar8[lVar11];
  }
  uVar10 = 0;
LAB_1014890f4:
  FUN_10148a37c(uVar6,puVar8,uVar7,lVar12,uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010148912c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101489134; end: 101489183; -[_TtC26CoreLocationImplementation19CoreLocationManager locationManagerDidChangeAuthorization:] */

/* WARNING: Possible PIC construction at 0x00010148916c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101489170) */

void FUN_101489134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101488d64(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101489184; end: 101489213; -[_TtC26CoreLocationImplementation19CoreLocationManager locationManager:didFailWithError:] */

/* WARNING: Possible PIC construction at 0x0001014891f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014891f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101489184(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  lVar1 = param_1 + _DAT_112da2448;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  pcVar4 = *(code **)(lVar3 + 0x68);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*pcVar4)(param_4,uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 101489214; end: 101489333; -[_TtC26CoreLocationImplementation19CoreLocationManager locationManager:didUpdateLocations:] */

void FUN_101489214(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = 0;
  FUN_10148a2e8(0,0x112da2440,&PTR__OBJC_CLASS___CLLocation_1126b30c8);
  func_0x000107c5fc54(param_4,uVar2);
  if (param_4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_4) {
      uVar3 = param_4;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    uVar4 = uVar3 - 1;
    if (SBORROW8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014892fc);
      (*pcVar1)();
    }
    if ((param_4 & 0xc000000000000001) == 0) {
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101489330);
        (*pcVar1)();
      }
      if (*(ulong *)((param_4 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101489334);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + uVar4 * 8 + 0x20);
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar4);
    }
    else {
      func_0x000107c61174(param_1);
      FUN_10148974c(uVar4,param_4,&PTR__OBJC_CLASS___CLLocation_1126b30c8,0x112da2440);
    }
    FUN_101487a98();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 101489334; end: 10148939b; -[_TtC26CoreLocationImplementation19CoreLocationManager locationManagerDidPauseLocationUpdates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101489334(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  lVar1 = param_1 + _DAT_112da2448;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  pcVar4 = *(code **)(lVar3 + 0x30);
  func_0x000107c61174(param_1);
  (*pcVar4)(uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10148939c; end: 101489403; -[_TtC26CoreLocationImplementation19CoreLocationManager locationManagerDidResumeLocationUpdates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10148939c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  lVar1 = param_1 + _DAT_112da2448;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  pcVar4 = *(code **)(lVar3 + 0x38);
  func_0x000107c61174(param_1);
  (*pcVar4)(uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101489404; end: 10148946b; -[_TtC26CoreLocationImplementation19CoreLocationManager locationManager:didUpdateHeading:] */

/* WARNING: Possible PIC construction at 0x00010148944c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101489450) */

void FUN_101489404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101489908(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10148946c; end: 1014894d3; -[_TtC26CoreLocationImplementation19CoreLocationManager locationManager:didVisit:] */

/* WARNING: Possible PIC construction at 0x0001014894b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014894b8) */

void FUN_10148946c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101489a80(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1014894d4; end: 101489513;  */

void FUN_1014894d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da24e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b43a8;
  func_0x000107c61520(&UNK_10d9b43a8,&UNK_11042ac00);
  puRam0000000112da24e0 = puVar1;
  return;
}



/* Entry: 101489514; end: 101489557;  */

undefined8 FUN_101489514(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001019f4894();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101489558; end: 1014895ab;  */

void FUN_101489558(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1014895ac;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101487678,0,0);
  return;
}



/* Entry: 1014895ac; end: 1014895e7;  */

void FUN_1014895ac(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001014895e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1014895e8; end: 10148962b;  */

void FUN_1014895e8(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 10148962c; end: 1014896b3;  */

undefined8 FUN_10148962c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1014896b4; end: 1014896d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014896b4(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x0001019f3ea0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  func_0x0001002a64a8(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112da2470),
                      unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 1014896d4; end: 10148974b;  */

undefined8 FUN_1014896d4(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10148974c; end: 101489907;  */

ulong FUN_10148974c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101489830);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101489834);
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
  FUN_10148a2e8(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101489908);
  (*pcVar2)();
}



/* Entry: 101489908; end: 101489a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101489908(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *apuStack_80 [4];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x0001019f3ea0();
  lVar8 = *(long *)(lVar1 + -8);
  lVar1 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)apuStack_80 - (lVar1 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = (undefined8 *)(lVar7 - extraout_x12);
  *puVar5 = param_1;
  func_0x000107c6159c(puVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112da24a0);
  FUN_10148962c(puVar5,lVar7,&SUB_1019f3ea0);
  uVar4 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
  puVar2 = &UNK_1103c5b68;
  func_0x000107c613fc(&UNK_1103c5b68,uVar9 + lVar1,uVar4 | 7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  func_0x000101489670(lVar7,puVar2 + uVar9);
  uStack_60 = 0x10148a3b8;
  apuStack_80[0] = PTR___NSConcreteStackBlock_11034bd00;
  apuStack_80[1] = (undefined *)0x42000000;
  apuStack_80[2] = &UNK_1000f6b44;
  apuStack_80[3] = &UNK_1103c5b80;
  ppuVar3 = apuStack_80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar6);
  func_0x000107c60bd0(ppuVar3);
  FUN_1014896d4(puVar5,&SUB_1019f3ea0);
  return;
}



/* Entry: 101489a80; end: 10148a207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101489a80(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  ulong uVar12;
  long extraout_x12;
  long lVar13;
  long unaff_x20;
  undefined8 uVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_180 [8];
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  lVar3 = 0;
  func_0x000107c5eec8();
  lStack_158 = *(long *)(lVar3 + -8);
  lStack_150 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_158 + 0x40));
  lVar3 = 0;
  puStack_160 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea4();
  lStack_178 = *(long *)(lVar3 + -8);
  lStack_168 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_178 + 0x40));
  lVar11 = (long)(auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_170 = lVar11;
  func_0x0001019f3ea0();
  lVar17 = *(long *)(lVar4 + -8);
  lVar13 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar11 - extraout_x12;
  lVar3 = unaff_x20 + _DAT_112da2448;
  uVar14 = *(undefined8 *)(lVar3 + 0x18);
  lVar10 = *(long *)(lVar3 + 0x20);
  func_0x0001000a8868(lVar3,uVar14);
  (**(code **)(lVar10 + 0x60))(param_1,uVar14,lVar10);
  func_0x000107c61174(param_1);
  FUN_10148aacc(lVar18);
  func_0x000107c6159c(lVar18,lVar4,2);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112da24a0);
  FUN_10148962c(lVar18,lVar11,&SUB_1019f3ea0);
  uVar12 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar15 = uVar12 + 0x18 & (uVar12 ^ 0xffffffffffffffff);
  puVar5 = &UNK_1103c5b18;
  func_0x000107c613fc(&UNK_1103c5b18,uVar15 + lVar13,uVar12 | 7);
  *(long *)(puVar5 + 0x10) = unaff_x20;
  func_0x000101489670(lVar11,puVar5 + uVar15);
  uStack_78 = 0x10148a3b4;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_1103c5b30;
  ppuVar6 = &puStack_98;
  puStack_70 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar5 = puStack_70;
  func_0x000107c61174();
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(uVar14);
  func_0x000107c60bd0(ppuVar6);
  FUN_1014896d4(lVar18,&SUB_1019f3ea0);
  iVar2 = (int)lVar18;
  func_0x0001090224b0();
  if (iVar2 != 0) {
    puVar7 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar14 = 0x797979792f642f4d;
    func_0x000107c5fadc(0x797979792f642f4d,0xed00006d6d3a4820);
    func_0x000107c53e28(puVar7);
    func_0x000107c61170(uVar14);
    puVar8 = PTR__OBJC_CLASS___UNMutableNotificationContent_1126bc388;
    func_0x000107c610f8(PTR__OBJC_CLASS___UNMutableNotificationContent_1126bc388);
    func_0x000107c453e4();
    uVar14 = 0x2074697369564c43;
    func_0x000107c5fadc(0x2074697369564c43,0xee00657461647055);
    func_0x000107c59e18(puVar8);
    func_0x000107c61170(uVar14);
    uVar14 = param_1;
    func_0x000107c3e184(param_1);
    func_0x000107c61180();
    lVar3 = lStack_170;
    func_0x000107c5ee94(lStack_170);
    func_0x000107c61170(uVar14);
    func_0x000107c5ee70();
    lVar10 = lStack_168;
    pcVar16 = *(code **)(lStack_178 + 8);
    lVar4 = lStack_168;
    (*pcVar16)(lVar3);
    puVar5 = puVar7;
    func_0x000107c5c1b8();
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    puVar9 = puVar5;
    func_0x000107c5faec();
    func_0x000107c61170(puVar5);
    puStack_98 = puVar9;
    lStack_90 = lVar4;
    func_0x000107c5fb78(0x202d20,0xe300000000000000);
    func_0x000107c417b4(param_1);
    func_0x000107c61180();
    func_0x000107c5ee94(lVar3);
    func_0x000107c61170(param_1);
    func_0x000107c5ee70();
    (*pcVar16)(lVar3,lVar10);
    puVar5 = puVar7;
    func_0x000107c5c1b8(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    puVar9 = puVar5;
    func_0x000107c5faec(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c5fb78(puVar9,lVar10);
    func_0x000107c6142c(lVar10);
    lVar3 = lStack_90;
    puVar5 = puStack_98;
    func_0x000107c5fadc(puStack_98,lStack_90);
    func_0x000107c6142c(lVar3);
    func_0x000107c52dcc(puVar8);
    func_0x000107c61170(puVar5);
    lVar3 = 0x112d39140;
    func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 4;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    puVar9 = PTR___sSSSHsWP_11034da90;
    puVar5 = PTR___sSSN_11034da80;
    puStack_98 = (undefined *)0x65707974;
    lStack_90 = 0xe400000000000000;
    func_0x000107c602d4(lVar3 + 0x20,&puStack_98,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    *(undefined **)(lVar3 + 0x60) = puVar5;
    *(undefined8 *)(lVar3 + 0x48) = 0x6c5f657461647075;
    *(undefined8 *)(lVar3 + 0x50) = 0xef6e6f697461636f;
    puStack_98 = (undefined *)0xd000000000000011;
    lStack_90 = 0x800000010ef84940;
    func_0x000107c602d4(lVar3 + 0x68,&puStack_98,puVar5,puVar9);
    *(undefined **)(lVar3 + 0xa8) = puVar5;
    *(undefined8 *)(lVar3 + 0x90) = 0x31;
    *(undefined8 *)(lVar3 + 0x98) = 0xe100000000000000;
    lVar10 = lVar3;
    FUN_100dfa3f0(lVar3);
    func_0x000107c61588(lVar3);
    uVar14 = 0x112d377a0;
    func_0x0001000285a8(0x112d377a0,&UNK_10d9016e0);
    func_0x000107c61408(lVar3 + 0x20,2,uVar14);
    lVar3 = lVar10;
    puVar5 = PTR___ss11AnyHashableVN_11034e448;
    func_0x000107c5f9dc(lVar10,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar10);
    func_0x000107c5a360(puVar8);
    func_0x000107c61170(lVar3);
    puVar1 = puStack_160;
    func_0x000107c5eec4(puStack_160);
    func_0x000107c5eeac();
    (**(code **)(lStack_158 + 8))(puVar1,lStack_150);
    func_0x000107c61174(puVar8);
    func_0x000107c5fadc(lVar3,puVar5);
    func_0x000107c6142c(puVar5);
    puVar5 = PTR__OBJC_CLASS___UNNotificationRequest_1126bc390;
    func_0x000107c61168(PTR__OBJC_CLASS___UNNotificationRequest_1126bc390);
    func_0x000107c50454();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(lVar3);
    puVar9 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
    func_0x000107c61168(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
    func_0x000107c40f90();
    func_0x000107c61180();
    func_0x000107c3d794();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar9);
  }
  return;
}



/* Entry: 10148a208; end: 10148a253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10148a208(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x0001019f3ea0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  func_0x0001002a64a8(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112da2470),
                      unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 10148a254; end: 10148a2ab;  */

void FUN_10148a254(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10148a2ac;
  plVar1[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101488f40,0,0);
  return;
}



/* Entry: 10148a2ac; end: 10148a2e7;  */

void FUN_10148a2ac(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010148a2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10148a2e8; end: 10148a327;  */

void FUN_10148a2e8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10148a328; end: 10148a37b;  */

void FUN_10148a328(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112da2508 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10148a2e8(0xff,0x112da2500,&PTR__OBJC_CLASS___CLRegion_1126a71a8);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam0000000112da2508 = puVar2;
  return;
}



/* Entry: 10148a37c; end: 10148a39b;  */

void FUN_10148a37c(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10148a39c; end: 10148a3af;  */

void FUN_10148a39c(void)

{
  FUN_1014895e8();
  return;
}



/* Entry: 10148a3b0; end: 10148a3bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10148a3b0(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x0001019f3ea0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  func_0x0001002a64a8(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112da2470),
                      unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 10148a3bc; end: 10148a3f7;  */

void FUN_10148a3bc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010148a3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10148a3f8; end: 10148a407;  */

undefined1  [16] FUN_10148a3f8(void)

{
  return ZEXT816(0x1103c5c10);
}



/* Entry: 10148a408; end: 10148a823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10148a408(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 auStack_b0 [3];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  lVar3 = param_3;
  func_0x000107c614f0();
  lVar4 = 0;
  func_0x000107c5f804();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar13 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x0001019f4894();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar14 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar6 = 0;
  func_0x000101486bc4();
  ppuStack_68 = &PTR_DAT_1103c5940;
  uVar7 = 0;
  auStack_88[0] = param_1;
  uStack_70 = uVar6;
  func_0x000101485ab8();
  ppuStack_90 = &PTR_DAT_1103c5928;
  puVar8 = (undefined8 *)(param_3 + _DAT_112da2458);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar1 = (undefined4 *)(param_3 + _DAT_112da2460);
  *(undefined1 *)(puVar1 + 1) = 2;
  *puVar1 = 0;
  lVar5 = _DAT_112da2468;
  uStack_b8 = CONCAT35(uStack_b8._5_3_,0x200000000);
  auStack_b0[0] = param_2;
  uStack_98 = uVar7;
  func_0x0001000285a8(0x112da2518,&UNK_10d946a48);
  func_0x000107c613fc();
  puVar8 = &uStack_b8;
  func_0x00010042e6a0();
  *(undefined8 **)(param_3 + lVar5) = puVar8;
  lVar5 = _DAT_112da2470;
  uVar6 = 0x112da2520;
  func_0x0001000285a8(0x112da2520,&UNK_10d946a50);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_3 + lVar5) = uVar6;
  lVar5 = _DAT_112da2478;
  uStack_b8 = 0;
  func_0x0001000285a8(0x112da2528,&UNK_10d946a58);
  func_0x000107c613fc();
  puVar8 = &uStack_b8;
  func_0x00010006c248();
  *(undefined8 **)(param_3 + lVar5) = puVar8;
  lVar2 = _DAT_112da2480;
  lVar5 = 0x112da24e8;
  func_0x0001000285a8(0x112da24e8,&UNK_10d946a60);
  pcVar16 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar16)(lVar14,1,1,lVar5);
  func_0x0001000285a8(0x112da2530,&UNK_10d946a68);
  func_0x000107c613fc();
  lVar9 = lVar14;
  func_0x00010042e6a0();
  *(long *)(param_3 + lVar2) = lVar9;
  lVar2 = _DAT_112da2488;
  uVar6 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(param_3 + lVar2) = uVar6;
  *(undefined8 *)(param_3 + _DAT_112da2490) = 0;
  (*pcVar16)(param_3 + _DAT_112da2498,1,1,lVar5);
  lVar5 = _DAT_112da24a0;
  (**(code **)(lVar15 + 0x68))
            (puVar13,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
             lVar4);
  puVar10 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar6 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef849c0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar6);
  (**(code **)(lVar15 + 8))(puVar13,lVar4);
  *(undefined **)(param_3 + lVar5) = puVar10;
  FUN_10148a824(auStack_88,param_3 + _DAT_112da2448);
  FUN_10148a824(auStack_b0,param_3 + _DAT_112da2450);
  plVar11 = &lStack_c8;
  lStack_c8 = param_3;
  lStack_c0 = lVar3;
  func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
  puVar10 = &UNK_1103c5c30;
  func_0x000107c613fc(&UNK_1103c5c30,0x18,7);
  *(long **)(puVar10 + 0x10) = plVar11;
  puVar12 = &UNK_1103c5c58;
  func_0x000107c613fc(&UNK_1103c5c58,0x20,7);
  *(undefined **)(puVar12 + 0x10) = &UNK_10d946a70;
  *(undefined **)(puVar12 + 0x18) = puVar10;
  func_0x000107c61174(plVar11);
  func_0x000107c61174();
  *(undefined **)(lVar14 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar6 = 0x22;
  func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10d946a80,puVar12);
  func_0x000107c61170(plVar11);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(uVar6);
  func_0x0001000834e4(auStack_b0);
  func_0x0001000834e4(auStack_88);
  return plVar11;
}



/* Entry: 10148a824; end: 10148a867;  */

long FUN_10148a824(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10148a868; end: 10148a8ef;  */

void FUN_10148a868(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10148a8b4;
  plVar2[5] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[6] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101487114,lVar1,lVar3);
  return;
}



/* Entry: 10148a8f0; end: 10148a95f;  */

void FUN_10148a8f0(undefined8 param_1)

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
  plVar3[1] = (long)FUN_10148a960;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10148a960; end: 10148a963;  */

void FUN_10148a960(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010148a8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10148a964; end: 10148aacb;  */

undefined1  [16] FUN_10148a964(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = (long)puVar6 - extraout_x12;
  uVar3 = unaff_x20;
  func_0x000107c417b4();
  func_0x000107c61180();
  func_0x000107c5ee94(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c5eea0(puVar6);
  uVar4 = uVar5;
  func_0x000107c5ee78(uVar5,puVar6);
  pcVar8 = *(code **)(lVar7 + 8);
  (*pcVar8)(puVar6,lVar2);
  (*pcVar8)(uVar5,lVar2);
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    param_1 = 0;
  }
  else {
    uVar3 = unaff_x20;
    func_0x000107c417b4();
    func_0x000107c61180();
    func_0x000107c5ee94(uVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c3e184();
    func_0x000107c61180();
    func_0x000107c5ee94(puVar6);
    func_0x000107c61170(unaff_x20);
    func_0x000107c5ee68(puVar6);
    (*pcVar8)(puVar6,lVar2);
    (*pcVar8)(uVar5,lVar2);
  }
  auVar9[8] = bVar1;
  auVar9._0_8_ = param_1;
  auVar9._9_7_ = 0;
  return auVar9;
}



/* Entry: 10148aacc; end: 10148acff;  */

void FUN_10148aacc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = (long)puVar7 - extraout_x12;
  lVar6 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = uVar8 - extraout_x8_00;
  uVar3 = param_4;
  func_0x000107c417b4(param_4);
  func_0x000107c61180();
  func_0x000107c5ee94(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c5eea0(puVar7);
  uVar4 = uVar8;
  func_0x000107c5ee78(uVar8,puVar7);
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(puVar7,lVar2);
  (*pcVar10)(uVar8,lVar2);
  bVar1 = (uVar4 & 1) == 0;
  if (!bVar1) {
    uVar3 = param_4;
    func_0x000107c417b4(param_4);
    func_0x000107c61180();
    func_0x000107c5ee94(lVar6);
    func_0x000107c61170(uVar3);
  }
  (**(code **)(lVar9 + 0x38))(lVar6,bVar1,1,lVar2);
  func_0x000107c4077c(param_4);
  uVar11 = param_2;
  func_0x000107c44f00(param_4);
  uVar3 = param_4;
  func_0x000107c3e184(param_4);
  func_0x000107c61180();
  lVar9 = 0;
  func_0x0001019f4920();
  func_0x000107c5ee94((long)param_1 + (long)*(int *)(lVar9 + 0x18),uVar3);
  func_0x000107c61170(uVar3);
  lVar2 = (long)param_1 + (long)*(int *)(lVar9 + 0x1c);
  func_0x0001009f0578(lVar6);
  uVar3 = param_4;
  func_0x000107c417f0();
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x0001000d1dcc(lVar6);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = uVar11;
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x20));
  *param_1 = uVar5;
  param_1[1] = lVar2;
  return;
}



/* Entry: 10148ad00; end: 10148ad1b;  */

void FUN_10148ad00(void)

{
  func_0x000107c4168c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10148ad1c; end: 10148adb3;  */

void FUN_10148ad1c(undefined8 param_1)

{
  func_0x000107c53fcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10148adb4; end: 10148adcb;  */

void FUN_10148adb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c136fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10148adcc; end: 10148ade3;  */

void FUN_10148adcc(void)

{
  func_0x000107c614e8();
                    /* WARNING: Could not recover jumptable at 0x00010bf10fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10148ade4; end: 10148adeb;  */

void FUN_10148ade4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10148adec; end: 10148ae07;  */

void FUN_10148adec(void)

{
  func_0x000107c4b88c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10148ae08; end: 10148ae17;  */

void FUN_10148ae08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10148ae18; end: 10148ae4f;  */

undefined1  [16] FUN_10148ae18(undefined8 param_1,undefined8 *param_2)

{
  undefined8 unaff_x20;
  undefined1 auVar1 [16];
  
  param_2[1] = unaff_x20;
  func_0x000107c41820();
  *param_2 = param_1;
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = FUN_10148ae50;
  return auVar1;
}



/* Entry: 10148ae50; end: 10148ae73;  */

void FUN_10148ae50(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*param_1,param_1[1],PTR_s_setDesiredAccuracy__112640a90);
  return;
}



/* Entry: 10148ae74; end: 10148aeab;  */

undefined1  [16] FUN_10148ae74(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined1 auVar1 [16];
  
  param_1[1] = unaff_x20;
  func_0x000107c3d1e8();
  *param_1 = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_10148aeac;
  return auVar1;
}



/* Entry: 10148aeac; end: 10148aeb7;  */

void FUN_10148aeac(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c162e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1[1],PTR_s_setActivityType__1126365b8,*param_1);
  return;
}



/* Entry: 10148aeb8; end: 10148aecf;  */

void FUN_10148aeb8(void)

{
  func_0x000107c4e488();
  return;
}


