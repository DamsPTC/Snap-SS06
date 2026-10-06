/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10869dd58; end: 10869dedf;  */

void FUN_10869dd58(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lStack_8;
  
  func_0x00010869ef58();
  func_0x00010869ee64();
  lVar9 = (param_2 - param_1) / 0x5d8;
  cVar1 = SBORROW8(lVar9,5);
  cVar2 = lVar9 + -5 < 0;
  switch(lVar9) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010869ef90(*(undefined8 *)(unaff_x20 + -8),1);
    if (cVar2 != cVar1) {
      FUN_10869dee0();
    }
    break;
  case 3:
    FUN_10869d66c();
    break;
  case 4:
    func_0x00010869d6fc();
    break;
  case 5:
    FUN_10869d768();
    break;
  default:
    FUN_10869d66c();
    iVar6 = 0;
    plVar7 = (long *)(unaff_x19 + 0xba8);
    lVar8 = -0xbb0;
    lVar9 = unaff_x19 + 0x1188;
    lVar4 = unaff_x19 + 0xbb0;
    while (lVar3 = lVar9, lVar3 != unaff_x20) {
      if (*(long *)(lVar3 + 0x5d0) < *(long *)(lVar4 + 0x5d0)) {
        func_0x00010869ee34();
        plVar5 = plVar7;
        lVar9 = lVar8;
        do {
          FUN_10869df24(plVar5 + 0xbc,plVar5 + 1);
          if (lVar9 == 0) break;
          lVar4 = *plVar5;
          plVar5 = plVar5 + -0xbb;
          lVar9 = lVar9 + 0x5d8;
        } while (lStack_8 < lVar4);
        func_0x00010869eef8();
        iVar6 = iVar6 + 1;
        func_0x00010869edf8();
        if (iVar6 == 8) break;
      }
      plVar7 = plVar7 + 0xbb;
      lVar8 = lVar8 + -0x5d8;
      lVar4 = lVar3;
      lVar9 = lVar3 + 0x5d8;
    }
  }
  func_0x00010869ee40();
  return;
}



/* Entry: 10869dee0; end: 10869df23;  */

void FUN_10869dee0(void)

{
  func_0x00010869edb0();
  func_0x00010869ef1c();
  func_0x00010869efb0();
  FUN_10869df24();
  func_0x00010869ee58();
  FUN_10869df24();
  func_0x00010869edf8();
  return;
}



/* Entry: 10869df24; end: 10869e09b;  */

void FUN_10869df24(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010869edb0();
  func_0x00010869df80();
  func_0x00010869ef70();
  func_0x000107c3194c();
  FUN_10869e09c(unaff_x20 + 0x38,unaff_x19 + 0x38);
  func_0x00010869dfa4(unaff_x20 + 0x3d8,unaff_x19 + 0x3d8);
  *(undefined8 *)(unaff_x20 + 0x5a0) = *(undefined8 *)(unaff_x19 + 0x5a0);
  func_0x00010869e07c(unaff_x20 + 0x5a8,unaff_x19 + 0x5a8);
  *(undefined8 *)(unaff_x20 + 0x5d0) = *(undefined8 *)(unaff_x19 + 0x5d0);
  return;
}



/* Entry: 10869e09c; end: 10869e0bf;  */

undefined8 FUN_10869e09c(undefined8 param_1)

{
  FUN_10869e0c0();
  return param_1;
}



/* Entry: 10869e0c0; end: 10869e0e7;  */

void FUN_10869e0c0(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 0x398);
  if (cVar1 != *(char *)(param_2 + 0x398)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x398) == '\x01') {
        func_0x000107c27a20();
        *(undefined1 *)(param_1 + 0x398) = 0;
      }
      return;
    }
    func_0x00010069a058();
    *(undefined1 *)(param_1 + 0x398) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010869eda4();
    *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
    func_0x00010869ef70();
    FUN_10869e1ac();
    FUN_10869e26c(unaff_x20 + 0x40,unaff_x19 + 0x40);
    FUN_10869e32c(unaff_x20 + 0x60,unaff_x19 + 0x60);
    func_0x00010869e3ec(unaff_x20 + 0x80,unaff_x19 + 0x80);
    FUN_10869e43c(unaff_x20 + 0x98,unaff_x19 + 0x98);
    *(undefined2 *)(unaff_x20 + 0x2d8) = *(undefined2 *)(unaff_x19 + 0x2d8);
    FUN_10869e800(unaff_x20 + 0x2e0,unaff_x19 + 0x2e0);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x331);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x329);
    uVar4 = *(undefined8 *)(unaff_x19 + 800);
    *(undefined8 *)(unaff_x20 + 0x328) = *(undefined8 *)(unaff_x19 + 0x328);
    *(undefined8 *)(unaff_x20 + 800) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x331) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x329) = uVar2;
    FUN_10869e994(unaff_x20 + 0x340,unaff_x19 + 0x340);
    FUN_10869ea24(unaff_x20 + 0x370,unaff_x19 + 0x370);
    return;
  }
  return;
}



/* Entry: 10869e0e8; end: 10869e187;  */

void FUN_10869e0e8(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010869eda4();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  func_0x00010869ef70();
  FUN_10869e1ac();
  FUN_10869e26c(unaff_x20 + 0x40,unaff_x19 + 0x40);
  FUN_10869e32c(unaff_x20 + 0x60,unaff_x19 + 0x60);
  func_0x00010869e3ec(unaff_x20 + 0x80,unaff_x19 + 0x80);
  FUN_10869e43c(unaff_x20 + 0x98,unaff_x19 + 0x98);
  *(undefined2 *)(unaff_x20 + 0x2d8) = *(undefined2 *)(unaff_x19 + 0x2d8);
  FUN_10869e800(unaff_x20 + 0x2e0,unaff_x19 + 0x2e0);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x331);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x329);
  uVar3 = *(undefined8 *)(unaff_x19 + 800);
  *(undefined8 *)(unaff_x20 + 0x328) = *(undefined8 *)(unaff_x19 + 0x328);
  *(undefined8 *)(unaff_x20 + 800) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x331) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x329) = uVar1;
  FUN_10869e994(unaff_x20 + 0x340,unaff_x19 + 0x340);
  FUN_10869ea24(unaff_x20 + 0x370,unaff_x19 + 0x370);
  return;
}



/* Entry: 10869e188; end: 10869e1ab;  */

void FUN_10869e188(long param_1)

{
  if (*(char *)(param_1 + 0x398) == '\x01') {
    func_0x000107c27a20();
    *(undefined1 *)(param_1 + 0x398) = 0;
  }
  return;
}



/* Entry: 10869e1ac; end: 10869e1cf;  */

undefined8 FUN_10869e1ac(undefined8 param_1)

{
  FUN_10869e1d0();
  return param_1;
}



/* Entry: 10869e1d0; end: 10869e1f7;  */

void FUN_10869e1d0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x000104be1618();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010869edb0();
    func_0x00010869e23c();
    func_0x00010869ed88();
    return;
  }
  return;
}



/* Entry: 10869e1f8; end: 10869e21b;  */

void FUN_10869e1f8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104be1618();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10869e21c; end: 10869e26b;  */

void FUN_10869e21c(void)

{
  func_0x00010869edb0();
  func_0x00010869e23c();
  func_0x00010869ed88();
  return;
}



/* Entry: 10869e26c; end: 10869e28f;  */

undefined8 FUN_10869e26c(undefined8 param_1)

{
  FUN_10869e290();
  return param_1;
}



/* Entry: 10869e290; end: 10869e2b7;  */

void FUN_10869e290(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x000107c27a44();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010869edb0();
    func_0x00010869e2fc();
    func_0x00010869ed88();
    return;
  }
  return;
}



/* Entry: 10869e2b8; end: 10869e2db;  */

void FUN_10869e2b8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c27a44();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10869e2dc; end: 10869e32b;  */

void FUN_10869e2dc(void)

{
  func_0x00010869edb0();
  func_0x00010869e2fc();
  func_0x00010869ed88();
  return;
}



/* Entry: 10869e32c; end: 10869e34f;  */

undefined8 FUN_10869e32c(undefined8 param_1)

{
  FUN_10869e350();
  return param_1;
}



/* Entry: 10869e350; end: 10869e377;  */

void FUN_10869e350(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x000104be1594();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010869edb0();
    func_0x00010869e3bc();
    func_0x00010869ed88();
    return;
  }
  return;
}



/* Entry: 10869e378; end: 10869e39b;  */

void FUN_10869e378(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104be1594();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10869e39c; end: 10869e43b;  */

void FUN_10869e39c(void)

{
  func_0x00010869edb0();
  func_0x00010869e3bc();
  func_0x00010869ed88();
  return;
}



/* Entry: 10869e43c; end: 10869e45f;  */

undefined8 FUN_10869e43c(undefined8 param_1)

{
  FUN_10869e460();
  return param_1;
}



/* Entry: 10869e460; end: 10869e487;  */

undefined4 * FUN_10869e460(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = *(char *)(param_1 + 0x8e);
  if (cVar1 != *(char *)(param_2 + 0x8e)) {
    if (cVar1 != '\0') {
      puVar2 = param_1;
      if (*(char *)(param_1 + 0x8e) == '\x01') {
        puVar2 = param_1 + 2;
        func_0x000104be1500(puVar2);
        *(undefined1 *)(param_1 + 0x8e) = 0;
      }
      return puVar2;
    }
    func_0x000104be6f50();
    *(undefined1 *)(param_1 + 0x8e) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    *param_1 = *param_2;
    FUN_10869e4b0(param_1 + 2,param_2 + 2);
    return param_1;
  }
  return param_1;
}



/* Entry: 10869e488; end: 10869e4af;  */

undefined4 * FUN_10869e488(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_10869e4b0(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10869e4b0; end: 10869e4d3;  */

undefined8 FUN_10869e4b0(undefined8 param_1)

{
  FUN_10869e4d4();
  return param_1;
}



/* Entry: 10869e4d4; end: 10869e4fb;  */

void FUN_10869e4d4(long param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = *(char *)(param_1 + 0x228);
  if (cVar1 != *(char *)(param_2 + 0x228)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x228) == '\x01') {
        func_0x000104be1520();
        *(undefined1 *)(param_1 + 0x228) = 0;
      }
      return;
    }
    func_0x000104be6fd0();
    *(undefined1 *)(param_1 + 0x228) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010869ee64();
    func_0x000107c3194c();
    *(undefined4 *)(unaff_x19 + 0x18) = *(undefined4 *)(unaff_x20 + 0x18);
    FUN_10869e26c(unaff_x19 + 0x20,unaff_x20 + 0x20);
    FUN_10869e32c(unaff_x19 + 0x40,unaff_x20 + 0x40);
    func_0x00010869e3ec(unaff_x19 + 0x60,unaff_x20 + 0x60);
    func_0x000107c3194c(unaff_x19 + 0x78,unaff_x20 + 0x78);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x90);
    *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
    *(undefined8 *)(unaff_x19 + 0x90) = uVar3;
    func_0x000107c3194c(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xb8);
    *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xc0);
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar3;
    func_0x000107c27c54(unaff_x19 + 200,unaff_x20 + 200);
    func_0x000107c28904(unaff_x19 + 0xe8,unaff_x20 + 0xe8);
    FUN_10869e800(unaff_x19 + 0x100,unaff_x20 + 0x100);
    uVar2 = *(undefined1 *)(unaff_x20 + 0x160);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x140);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x158);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x150);
    *(undefined8 *)(unaff_x19 + 0x148) = *(undefined8 *)(unaff_x20 + 0x148);
    *(undefined8 *)(unaff_x19 + 0x140) = uVar5;
    *(undefined8 *)(unaff_x19 + 0x158) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x150) = uVar3;
    *(undefined1 *)(unaff_x19 + 0x160) = uVar2;
    FUN_10869e994(unaff_x19 + 0x168,unaff_x20 + 0x168);
    FUN_10869ea24(unaff_x19 + 0x198,unaff_x20 + 0x198);
    func_0x000107c28e90(unaff_x19 + 0x1c0,unaff_x20 + 0x1c0);
    return;
  }
  return;
}



/* Entry: 10869e4fc; end: 10869e5c7;  */

void FUN_10869e4fc(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010869ee64();
  func_0x000107c3194c();
  *(undefined4 *)(unaff_x19 + 0x18) = *(undefined4 *)(unaff_x20 + 0x18);
  FUN_10869e26c(unaff_x19 + 0x20,unaff_x20 + 0x20);
  FUN_10869e32c(unaff_x19 + 0x40,unaff_x20 + 0x40);
  func_0x00010869e3ec(unaff_x19 + 0x60,unaff_x20 + 0x60);
  func_0x000107c3194c(unaff_x19 + 0x78,unaff_x20 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
  func_0x000107c3194c(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar2;
  func_0x000107c27c54(unaff_x19 + 200,unaff_x20 + 200);
  func_0x000107c28904(unaff_x19 + 0xe8,unaff_x20 + 0xe8);
  FUN_10869e800(unaff_x19 + 0x100,unaff_x20 + 0x100);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x160);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x158);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x150);
  *(undefined8 *)(unaff_x19 + 0x148) = *(undefined8 *)(unaff_x20 + 0x148);
  *(undefined8 *)(unaff_x19 + 0x140) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x158) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x150) = uVar2;
  *(undefined1 *)(unaff_x19 + 0x160) = uVar1;
  FUN_10869e994(unaff_x19 + 0x168,unaff_x20 + 0x168);
  FUN_10869ea24(unaff_x19 + 0x198,unaff_x20 + 0x198);
  func_0x000107c28e90(unaff_x19 + 0x1c0,unaff_x20 + 0x1c0);
  return;
}



/* Entry: 10869e5c8; end: 10869e5eb;  */

void FUN_10869e5c8(long param_1)

{
  if (*(char *)(param_1 + 0x228) == '\x01') {
    func_0x000104be1520();
    *(undefined1 *)(param_1 + 0x228) = 0;
  }
  return;
}



/* Entry: 10869e5ec; end: 10869e67f;  */

undefined8 * FUN_10869e5ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010869e654(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 10869e680; end: 10869e6a3;  */

undefined8 FUN_10869e680(undefined8 param_1)

{
  FUN_10869e6a4();
  return param_1;
}



/* Entry: 10869e6a4; end: 10869e6cb;  */

void FUN_10869e6a4(long param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  long unaff_x19;
  long unaff_x20;
  
  cVar2 = *(char *)(param_1 + 0x20);
  if (cVar2 != *(char *)(param_2 + 0x20)) {
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        func_0x000107c27a18();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return;
    }
    func_0x000104be71dc();
    func_0x000104be80a4();
    return;
  }
  if (cVar2 != '\0') {
    func_0x00010869edb0();
    FUN_10869e720();
    uVar1 = *(undefined4 *)(unaff_x19 + 0x18);
    *(undefined1 *)(unaff_x20 + 0x1c) = *(undefined1 *)(unaff_x19 + 0x1c);
    *(undefined4 *)(unaff_x20 + 0x18) = uVar1;
    return;
  }
  return;
}



/* Entry: 10869e6cc; end: 10869e6fb;  */

void FUN_10869e6cc(void)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010869edb0();
  FUN_10869e720();
  uVar1 = *(undefined4 *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x1c) = *(undefined1 *)(unaff_x19 + 0x1c);
  *(undefined4 *)(unaff_x20 + 0x18) = uVar1;
  return;
}



/* Entry: 10869e6fc; end: 10869e71f;  */

void FUN_10869e6fc(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c27a18();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10869e720; end: 10869e73f;  */

void FUN_10869e720(void)

{
  func_0x00010869edb0();
  func_0x000107426f80();
  func_0x00010869ed88();
  return;
}



/* Entry: 10869e740; end: 10869e763;  */

undefined8 FUN_10869e740(undefined8 param_1)

{
  FUN_10869e764();
  return param_1;
}



/* Entry: 10869e764; end: 10869e78b;  */

void FUN_10869e764(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x000104be1340();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010869edb0();
    func_0x00010869e7d0();
    func_0x00010869ed88();
    return;
  }
  return;
}



/* Entry: 10869e78c; end: 10869e7af;  */

void FUN_10869e78c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104be1340();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10869e7b0; end: 10869e7ff;  */

void FUN_10869e7b0(void)

{
  func_0x00010869edb0();
  func_0x00010869e7d0();
  func_0x00010869ed88();
  return;
}



/* Entry: 10869e800; end: 10869e823;  */

undefined8 FUN_10869e800(undefined8 param_1)

{
  FUN_10869e824();
  return param_1;
}



/* Entry: 10869e824; end: 10869e84b;  */

void FUN_10869e824(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != *(char *)(param_2 + 0x38)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        func_0x000104be1498();
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      return;
    }
    func_0x000104be7250();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010869edb0();
    FUN_10869e8a0();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x2d);
    *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x2d) = uVar2;
    return;
  }
  return;
}



/* Entry: 10869e84c; end: 10869e87b;  */

void FUN_10869e84c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010869edb0();
  FUN_10869e8a0();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x2d);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x2d) = uVar1;
  return;
}



/* Entry: 10869e87c; end: 10869e89f;  */

void FUN_10869e87c(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000104be1498();
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 10869e8a0; end: 10869e8c3;  */

undefined8 FUN_10869e8a0(undefined8 param_1)

{
  FUN_10869e8c4();
  return param_1;
}



/* Entry: 10869e8c4; end: 10869e8eb;  */

undefined1 * FUN_10869e8c4(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  cVar1 = param_1[0x20];
  if (cVar1 != param_2[0x20]) {
    if (cVar1 != '\0') {
      puVar2 = param_1;
      if (param_1[0x20] == '\x01') {
        puVar2 = param_1 + 8;
        func_0x000104be14c8(puVar2);
        param_1[0x20] = 0;
      }
      return puVar2;
    }
    func_0x000104be72d0();
    func_0x000104be80a4();
    return param_1;
  }
  if (cVar1 != '\0') {
    *param_1 = *param_2;
    func_0x00010869e948(param_1 + 8,param_2 + 8);
    return param_1;
  }
  return param_1;
}



/* Entry: 10869e8ec; end: 10869e993;  */

undefined1 * FUN_10869e8ec(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  func_0x00010869e948(param_1 + 8,param_2 + 8);
  return param_1;
}



/* Entry: 10869e994; end: 10869e9b7;  */

undefined8 FUN_10869e994(undefined8 param_1)

{
  FUN_10869e9b8();
  return param_1;
}



/* Entry: 10869e9b8; end: 10869e9df;  */

void FUN_10869e9b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar2 = *(char *)(param_1 + 5);
  if (cVar2 != *(char *)(param_2 + 5)) {
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 5) == '\x01') {
        func_0x000107c279a4();
        *(undefined1 *)(param_1 + 5) = 0;
      }
      return;
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    if (*(char *)(param_2 + 3) == '\x01') {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar4;
      *param_1 = uVar3;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      *(undefined1 *)(param_1 + 3) = 1;
    }
    uVar1 = *(undefined4 *)(param_2 + 4);
    *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined1 *)(param_1 + 5) = 1;
    return;
  }
  if (cVar2 != '\0') {
    func_0x00010869edb0();
    func_0x000107c27c54();
    func_0x00010869eee0();
    return;
  }
  return;
}



/* Entry: 10869e9e0; end: 10869e9ff;  */

void FUN_10869e9e0(void)

{
  func_0x00010869edb0();
  func_0x000107c27c54();
  func_0x00010869eee0();
  return;
}



/* Entry: 10869ea00; end: 10869ea23;  */

void FUN_10869ea00(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000107c279a4();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 10869ea24; end: 10869ea47;  */

undefined8 FUN_10869ea24(undefined8 param_1)

{
  FUN_10869ea48();
  return param_1;
}



/* Entry: 10869ea48; end: 10869ea6f;  */

void FUN_10869ea48(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        func_0x000107c27914();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return;
    }
    func_0x000104be7364();
    func_0x000104be80a4();
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010869eda4();
    *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
    return;
  }
  return;
}



/* Entry: 10869ea70; end: 10869ea93;  */

void FUN_10869ea70(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010869eda4();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10869ea94; end: 10869eab7;  */

void FUN_10869ea94(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10869eab8; end: 10869eb2b;  */

void FUN_10869eab8(void)

{
  func_0x00010869edb0();
  func_0x00010869ead8();
  func_0x00010869ed88();
  return;
}



/* Entry: 10869eb2c; end: 10869eb4f;  */

void FUN_10869eb2c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10869eb50; end: 10869ebc3;  */

void FUN_10869eb50(void)

{
  func_0x00010869edb0();
  func_0x00010869eb70();
  func_0x00010869ed88();
  return;
}



/* Entry: 10869ebc4; end: 10869ebe7;  */

void FUN_10869ebc4(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 10869ebe8; end: 10869ed03;  */

void FUN_10869ebe8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  ulong uVar8;
  ulong extraout_x9;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_5d8 [1488];
  long lStack_8;
  
  if (1 < param_2) {
    func_0x00010869ef58();
    lVar12 = (param_3 - param_1) / 0x5d8;
    if (lVar12 <= (long)(extraout_x9 >> 1)) {
      uVar4 = lVar12 << 1 | 1;
      lVar11 = param_1 + uVar4 * 0x5d8;
      uVar3 = lVar12 * 2 + 2;
      cVar7 = SBORROW8(uVar3,param_2);
      lVar12 = uVar3 - param_2;
      uVar8 = uVar4;
      if ((long)uVar3 < param_2) {
        lVar9 = *(long *)(lVar11 + 0x5d0);
        lVar10 = *(long *)(lVar11 + 0xba8);
        cVar7 = SBORROW8(lVar9,lVar10);
        lVar12 = lVar9 - lVar10;
        lVar5 = 0x5d8;
        if (lVar10 <= lVar9) {
          lVar5 = 0;
        }
        lVar11 = lVar11 + lVar5;
        uVar8 = uVar3;
        if (lVar10 <= lVar9) {
          uVar8 = uVar4;
        }
      }
      cVar6 = lVar12 < 0;
      func_0x00010869ee70(*(undefined8 *)(lVar11 + 0x5d0));
      if (cVar6 == cVar7) {
        func_0x00010869ee34();
        do {
          lVar12 = lVar11;
          func_0x00010869eec8();
          FUN_10869df24();
          if ((long)(extraout_x9 >> 1) < (long)uVar8) break;
          uVar4 = uVar8 << 1 | 1;
          lVar11 = param_1 + uVar4 * 0x5d8;
          uVar3 = uVar8 * 2 + 2;
          uVar8 = uVar4;
          if ((long)uVar3 < param_2) {
            plVar1 = (long *)(lVar11 + 0x5d0);
            plVar2 = (long *)(lVar11 + 0xba8);
            lVar5 = 0x5d8;
            if (*plVar2 <= *plVar1) {
              lVar5 = 0;
            }
            lVar11 = lVar11 + lVar5;
            uVar8 = uVar3;
            if (*plVar2 <= *plVar1) {
              uVar8 = uVar4;
            }
          }
        } while (lStack_8 <= *(long *)(lVar11 + 0x5d0));
        FUN_10869df24(lVar12,auStack_5d8);
        func_0x00010869edf8();
      }
    }
    func_0x00010869ee40();
  }
  return;
}



/* Entry: 10869ed04; end: 10869ed87;  */

undefined8 * FUN_10869ed04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a635d8;
  func_0x000107c28eb4(param_1 + 0x1c);
  func_0x000107c289f8(param_1 + 0x16);
  func_0x000107c27a70(param_1 + 0x14);
  func_0x000107c288a4(param_1 + 0x12);
  func_0x000107c28800(param_1 + 0x10);
  func_0x000107c28eb8(param_1 + 0xe);
  func_0x000107c28a6c(param_1 + 0xc);
  func_0x000107c27914(param_1 + 8);
  func_0x000107c28ebc(param_1 + 5);
  func_0x000107c28ec0(param_1 + 3);
  func_0x000107c27a64(param_1 + 1);
  return param_1;
}



/* Entry: 10869ed88; end: 10869efbb;  */

void FUN_10869ed88(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 10869efbc; end: 10869f01b;  */

undefined8 FUN_10869efbc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x18;
  func_0x0001006b6618();
  if ((lVar1 == 0) || (param_3 < *(ulong *)(lVar1 + 0x28))) {
    puVar2 = (ulong *)(param_1 + 0x18);
    FUN_10869f01c(puVar2,param_2);
    *puVar2 = param_3;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10869f01c; end: 10869f04f;  */

long FUN_10869f01c(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10869f140(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 10869f050; end: 10869f053;  */

undefined8 * FUN_10869f050(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a63680;
  func_0x00010869f0a4(param_1 + 3);
  func_0x000107c28800(param_1 + 1);
  return param_1;
}



/* Entry: 10869f054; end: 10869f067;  */

void FUN_10869f054(void)

{
  FUN_10869f068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10869f068; end: 10869f127;  */

undefined8 * FUN_10869f068(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a63680;
  func_0x00010869f0a4(param_1 + 3);
  func_0x000107c28800(param_1 + 1);
  return param_1;
}



/* Entry: 10869f128; end: 10869f13f;  */

void FUN_10869f128(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10869f140; end: 10869f37f;  */

undefined1  [16]
FUN_10869f140(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  ulong unaff_x27;
  ulong uVar11;
  undefined1 auVar12 [16];
  long *aplStack_78 [3];
  
  uVar7 = param_2;
  FUN_108848654();
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar11 = uVar10 - 1;
    uVar9 = (uint)uVar10;
    if ((uVar10 & uVar11) == 0) {
      unaff_x27 = uVar9 - 1 & uVar7;
    }
    else {
      unaff_x27 = uVar7;
      if (uVar10 <= uVar7) {
        uVar1 = 0;
        if (uVar9 != 0) {
          uVar1 = (uint)uVar7 / uVar9;
        }
        unaff_x27 = (ulong)((uint)uVar7 - uVar1 * uVar9);
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x27 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10869f214;
          uVar4 = plVar8[1];
          if (uVar4 != uVar7) break;
          plVar6 = plVar8 + 2;
          func_0x000107c28078(plVar6,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            uVar3 = 0;
            goto LAB_10869f34c;
          }
        }
        if ((uVar10 & uVar11) == 0) {
          uVar4 = uVar4 & uVar11;
        }
        else if (uVar10 <= uVar4) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar4 / uVar10;
          }
          uVar4 = uVar4 - uVar2 * uVar10;
        }
      } while (uVar4 == unaff_x27);
    }
  }
LAB_10869f214:
  FUN_10869f380(aplStack_78,param_1,uVar7,param_3,param_4,param_5);
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar11 = 1;
    if (2 < uVar10) {
      uVar11 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar11 = uVar11 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar11 <= uVar10) {
      uVar11 = uVar10;
    }
    FUN_10869f3f8(param_1,uVar11);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x27 = (int)uVar10 - 1 & uVar7;
    }
    else {
      unaff_x27 = uVar7;
      if (uVar10 <= uVar7) {
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar7 / uVar10;
        }
        unaff_x27 = uVar7 - uVar11 * uVar10;
      }
    }
  }
  plVar8 = aplStack_78[0];
  lVar5 = *param_1;
  plVar6 = *(long **)(lVar5 + unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar5 + unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_78[0] + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar7 = uVar7 & uVar10 - 1;
      }
      else if (uVar10 <= uVar7) {
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar7 / uVar10;
        }
        uVar7 = uVar7 - uVar11 * uVar10;
      }
      *(long **)(lVar5 + uVar7 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x00010869f78c();
  uVar3 = 1;
LAB_10869f34c:
  auVar12._8_8_ = uVar3;
  auVar12._0_8_ = plVar8;
  return auVar12;
}



/* Entry: 10869f380; end: 10869f3df;  */

void FUN_10869f380(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10869f3e0(puVar1 + 2,*param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10869f3e0; end: 10869f3f7;  */

void FUN_10869f3e0(long param_1)

{
  func_0x000107c27994();
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10869f3f8; end: 10869f4bf;  */

void FUN_10869f3f8(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_10869f440;
    }
    return;
  }
LAB_10869f440:
  if (param_2 == 0) {
    FUN_10869f5bc(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_10869f5d4(plVar2);
    FUN_10869f5bc(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10869f4c0; end: 10869f5bb;  */

void FUN_10869f4c0(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10869f5bc(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10869f5d4(plVar3);
    FUN_10869f5bc(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10869f5bc; end: 10869f5d3;  */

void FUN_10869f5bc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10869f5d4; end: 10869f5ef;  */

long FUN_10869f5d4(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_10869f614();
  return param_1;
}



/* Entry: 10869f5f0; end: 10869f613;  */

undefined8 FUN_10869f5f0(undefined8 param_1)

{
  FUN_10869f614(param_1,0);
  return param_1;
}



/* Entry: 10869f614; end: 10869f62b;  */

void FUN_10869f614(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107c27914(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10869f62c; end: 10869f66f;  */

void FUN_10869f62c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c27914(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10869f670; end: 10869f7af;  */

void FUN_10869f670(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10869f724;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10869f724;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10869f724:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10869f7b0; end: 10869fae3;  */

long * FUN_10869f7b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                    long param_5,long *param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 in_stack_00000050;
  undefined1 auStack_350 [31];
  undefined1 auStack_331 [9];
  long *plStack_328;
  undefined8 *puStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  undefined4 uStack_308;
  long lStack_300;
  undefined1 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [80];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [264];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long alStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [24];
  undefined8 uStack_10;
  
  func_0x0001086b0888();
  func_0x0001086b0188();
  uStack_10 = extraout_x8_00;
  FUN_108848684(alStack_58);
  uVar3 = *param_1;
  func_0x0001086b045c();
  (*extraout_x8_01)();
  uVar4 = *param_3;
  func_0x0001086b045c();
  (*extraout_x8_02)();
  func_0x000107c27994(&uStack_70,alStack_58);
  func_0x0001086b0870(auStack_28);
  func_0x0001086b0aa8(&uStack_f0,auStack_28);
  uStack_c0 = uStack_e0;
  uStack_c8 = uStack_e8;
  uStack_d0 = uStack_f0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_f8 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  puVar5 = &uStack_d0;
  func_0x0001086b0e58(puVar5);
  if (*(int *)(param_5 + 0x48) == 10) {
    ppuVar11 = *(undefined ***)(*(long *)(param_5 + 0x40) + 0x20);
    ppuVar1 = &PTR_PTR_11326be38;
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar1 = ppuVar11;
    }
    uVar2 = *(int *)(ppuVar1 + 2) - 1U == 2;
    if (*(int *)(ppuVar1 + 2) - 1U < 2) {
      uVar12 = 0x14;
      goto LAB_10869f8fc;
    }
  }
  uVar2 = *param_6 == param_6[1];
  uVar10 = 0;
  if (!(bool)uVar2) {
    uVar10 = 0x1e;
  }
  uVar12 = (ulong)uVar10;
LAB_10869f8fc:
  lVar6 = param_5;
  uStack_2f0 = uVar4;
  uStack_2e8 = uVar3;
  FUN_10869fb90();
  func_0x000107c29ee4(auStack_260,param_2);
  func_0x0001086b0870(auStack_278);
  func_0x00010869fbb8(auStack_2c8,param_5);
  FUN_10867be90(auStack_2e0,param_6);
  FUN_1086a75f4(auStack_240,auStack_260,auStack_278,auStack_2c8,auStack_2e0,2,param_7);
  uStack_38 = uStack_68;
  uStack_40 = uStack_70;
  uStack_30 = uStack_60;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_308 = 3;
  uStack_310 = 0;
  lStack_300 = lVar6;
  puStack_2f8 = auStack_240;
  FUN_1086abd4c(extraout_x8,param_1,&uStack_40,uStack_2f0,puVar5,uVar12,uStack_2e8,0);
  iVar9 = (int)param_1;
  func_0x000107c27914(&uStack_40);
  FUN_1086a7738(auStack_240);
  func_0x000104bee630(auStack_2e0);
  FUN_1088f9cb4(auStack_2c8);
  func_0x000107c27914(auStack_278);
  func_0x000107c2a2e0(auStack_260);
  func_0x000104bee768(&uStack_d0);
  func_0x000104bee7a0(&uStack_138);
  func_0x000104bee7dc(&uStack_120);
  func_0x000104bee864(&uStack_108);
  func_0x000107c27a04(&uStack_f0);
  func_0x0001086b0ab0();
  func_0x000107c27914(&uStack_70);
  plVar7 = alStack_58;
  func_0x000107c27914();
  func_0x0001086aff54(uStack_10);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000107c27914(&uStack_40);
    FUN_1086a7738(auStack_240);
    func_0x000104bee630(auStack_2e0);
    FUN_1088f9cb4(auStack_2c8);
    func_0x000107c27914(auStack_278);
    func_0x000107c2a2e0(auStack_260);
    func_0x000104bee768(&uStack_d0);
    func_0x000104bee7a0(&uStack_138);
    func_0x000104bee7dc(&uStack_120);
    func_0x000104bee864(&uStack_108);
    func_0x000107c27a04(&uStack_f0);
    func_0x0001086b0ab0();
    func_0x000107c27914(&uStack_70);
    plVar8 = alStack_58;
    func_0x000107c27914();
    func_0x0001086b0254();
    pcStack_318 = FUN_10869fae4;
    auStack_331[0] = 0;
    auStack_331._1_8_ = uVar12;
    plStack_328 = plVar7;
    puStack_320 = &stack0x00000050;
    if (((*plVar8 == plVar8[1]) && (iVar9 != 0)) && (plVar8[3] != plVar8[4])) {
      func_0x0001086b0f60();
      func_0x000107c27ab0(auStack_350,(extraout_x9 - extraout_x8_03) / 0x58);
      plVar7 = (long *)plVar8[4];
      for (plVar8 = (long *)plVar8[3]; plVar8 != plVar7; plVar8 = plVar8 + 0xb) {
        func_0x000107c32574();
        func_0x000107c28840();
      }
      FUN_1086a75b4(auStack_331,auStack_350);
      func_0x0001086b0308();
      func_0x000107c27a04();
    }
    else {
      plVar7 = (long *)auStack_331;
      FUN_1086a75b4(plVar7,plVar8);
    }
    return plVar7;
  }
  return plVar7;
}



/* Entry: 10869fae4; end: 10869fb8f;  */

undefined1 * FUN_10869fae4(long *param_1,int param_2)

{
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x9;
  undefined1 *puVar2;
  undefined1 auStack_40 [31];
  undefined1 uStack_21;
  
  uStack_21 = 0;
  if (((*param_1 == param_1[1]) && (param_2 != 0)) && (param_1[3] != param_1[4])) {
    func_0x0001086b0f60();
    func_0x000107c27ab0(auStack_40,(extraout_x9 - extraout_x8) / 0x58);
    puVar1 = (undefined1 *)param_1[4];
    for (puVar2 = (undefined1 *)param_1[3]; puVar2 != puVar1; puVar2 = puVar2 + 0x58) {
      func_0x000107c32574();
      func_0x000107c28840();
    }
    FUN_1086a75b4(&uStack_21,auStack_40);
    func_0x0001086b0308();
    func_0x000107c27a04();
  }
  else {
    puVar1 = &uStack_21;
    FUN_1086a75b4(puVar1,param_1);
  }
  return puVar1;
}



/* Entry: 10869fb90; end: 10869fbc3;  */

undefined8 FUN_10869fb90(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x48) - 4;
  if (uVar1 < 0x20) {
    return *(undefined8 *)(&UNK_10df42908 + (ulong)uVar1 * 8);
  }
  return 0x100000000;
}



/* Entry: 10869fbc4; end: 10869ff9b;  */

undefined1 *
FUN_10869fbc4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined1 auStack_5d8 [72];
  undefined **ppuStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined **ppuStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined4 uStack_530;
  undefined1 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 uStack_4e8;
  undefined1 uStack_4a8;
  undefined1 uStack_4a0;
  undefined1 uStack_460;
  undefined1 uStack_458;
  undefined1 uStack_418;
  undefined1 uStack_410;
  undefined1 uStack_408;
  undefined4 uStack_400;
  undefined1 auStack_3f8 [472];
  undefined1 uStack_220;
  undefined1 uStack_200;
  undefined1 uStack_1f8;
  undefined1 uStack_1c0;
  undefined1 uStack_1b8;
  undefined1 uStack_198;
  undefined1 uStack_190;
  undefined1 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_148;
  undefined1 uStack_140;
  undefined1 uStack_118;
  undefined1 uStack_110;
  undefined1 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7c;
  undefined2 uStack_78;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  func_0x0001086b0888();
  func_0x0001086b0188();
  uStack_18 = extraout_x8;
  FUN_108848684(auStack_68);
  func_0x0001086b045c();
  (*extraout_x8_00)();
  func_0x0001086b045c(*param_3);
  (*extraout_x8_01)();
  if ((*(byte *)(param_8 + 0x48) & 1) == 0) {
    ppuStack_570 = &PTR_FUN_110a96130;
    uStack_568 = 0;
    uStack_530 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_540 = 0;
    uVar2 = *param_2;
    func_0x0001086b045c(uVar2);
    (*extraout_x8_02)();
    FUN_108844cec(param_5,param_1,uVar2,&ppuStack_570);
    if (*(char *)(param_8 + 0x48) == '\x01') {
      FUN_10891d930(param_8,&ppuStack_570);
    }
    else {
      FUN_1086a7798(param_8,&ppuStack_570);
      *(undefined1 *)(param_8 + 0x48) = 1;
    }
    FUN_10891cac8(&ppuStack_570);
  }
  func_0x000107c27994(&ppuStack_590,param_6);
  FUN_10869ff9c(auStack_5d8,param_8);
  uStack_560 = uStack_580;
  uStack_568 = uStack_588;
  ppuStack_570 = ppuStack_590;
  uStack_588 = 0;
  uStack_580 = 0;
  ppuStack_590 = (undefined **)0x0;
  uStack_558 = param_4;
  FUN_10869ff9c(&uStack_550,auStack_5d8);
  uStack_508 = 0;
  uStack_4a8 = 0;
  uStack_4a0 = 0;
  uStack_460 = 0;
  uStack_458 = 0;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 0;
  uStack_400 = 0;
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  uStack_500 = 0;
  uStack_4e8 = 0;
  FUN_1086a7830(auStack_3f8,param_7);
  uStack_220 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  FUN_10891cac8(auStack_5d8);
  func_0x000107c27914(&ppuStack_590);
  FUN_10869ffa8();
  func_0x000107c27994(&uStack_5f0,auStack_68);
  func_0x000107c27994(auStack_30,param_6);
  func_0x0001086b0aa8(&uStack_670,auStack_30);
  uStack_640 = uStack_660;
  uStack_648 = uStack_668;
  uStack_650 = uStack_670;
  uStack_668 = 0;
  uStack_660 = 0;
  uStack_678 = 0;
  uStack_670 = 0;
  uStack_638 = 0;
  uStack_630 = 0;
  uStack_628 = 0;
  uStack_688 = 0;
  uStack_680 = 0;
  uStack_620 = 0;
  uStack_618 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_690 = 0;
  uStack_610 = 0;
  uStack_608 = 0;
  uStack_600 = 0;
  uStack_5f8 = 0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  func_0x0001086b0e58(&uStack_650);
  uVar1 = (int)param_5 == 2;
  uStack_48 = uStack_5e8;
  uStack_50 = uStack_5f0;
  uStack_40 = uStack_5e0;
  uStack_5f0 = 0;
  uStack_5e8 = 0;
  uStack_5e0 = 0;
  func_0x0001086b08d0();
  FUN_1086a7d9c();
  func_0x000107c27914(&uStack_50);
  func_0x000104bee768(&uStack_650);
  func_0x000104bee7a0(&uStack_6b8);
  func_0x000104bee7dc(&uStack_6a0);
  func_0x000104bee864(&uStack_688);
  func_0x0001086b0638();
  func_0x0001086b0640();
  func_0x000107c27914(&uStack_5f0);
  FUN_1086a78f0(&ppuStack_570);
  puVar3 = auStack_68;
  func_0x000107c27914();
  func_0x0001086aff54(uStack_18);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107c27914(&uStack_50);
  func_0x000104bee768(&uStack_650);
  func_0x000104bee7a0(&uStack_6b8);
  func_0x000104bee7dc(&uStack_6a0);
  func_0x000104bee864(&uStack_688);
  func_0x0001086b0638();
  func_0x0001086b0640();
  func_0x000107c27914(&uStack_5f0);
  FUN_1086a78f0(&ppuStack_570);
  puVar3 = auStack_68;
  func_0x000107c27914(puVar3);
  func_0x0001086b0254();
  func_0x0001086b04f4(&UNK_110a96120);
  func_0x0001086b0d1c();
  FUN_1086a77d8();
  return puVar3;
}



/* Entry: 10869ff9c; end: 10869ffa7;  */

undefined8 FUN_10869ff9c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001086b04f4(&UNK_110a96120,param_1,0,param_2);
  func_0x0001086b0d1c();
  FUN_1086a77d8();
  return param_1;
}



/* Entry: 10869ffa8; end: 10869ffcb;  */

void FUN_10869ffa8(long param_1)

{
  undefined4 uStack_14;
  
  uStack_14 = *(undefined4 *)(param_1 + 0x60);
  FUN_1086a758c(&uStack_14);
  return;
}



/* Entry: 10869ffcc; end: 1086a01cb;  */

void FUN_10869ffcc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  undefined1 auStack_1c0 [64];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  
  func_0x000107c324b0();
  func_0x0001086b0188();
  uStack_68 = extraout_x8_00;
  func_0x0001086b02f0(*param_2);
  FUN_108848684(auStack_98);
  func_0x0001086b045c(*param_3);
  (*extraout_x8_01)();
  func_0x000107c27994(auStack_80,param_4);
  func_0x0001086b0aa8(&uStack_120,auStack_80);
  uStack_f0 = uStack_110;
  uStack_f8 = uStack_118;
  uStack_100 = uStack_120;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  func_0x0001086b0e58(&uStack_100);
  uStack_178 = param_5[1];
  uStack_180 = *param_5;
  uStack_170 = param_5[2];
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  FUN_1086a0360(auStack_1c0,param_6);
  func_0x0001086b0314(extraout_x8);
  FUN_1086a01cc();
  FUN_1088f050c(auStack_1c0);
  func_0x000107c27ae4(&uStack_180);
  func_0x000104bee768(&uStack_100);
  func_0x000104bee7a0(&uStack_168);
  func_0x000104bee7dc(&uStack_150);
  func_0x000104bee864(&uStack_138);
  func_0x000107c27a04(&uStack_120);
  func_0x000107c27914(auStack_80);
  func_0x0001086b0960();
  func_0x0001086aff54(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086b0ab8();
  FUN_1088f050c();
  func_0x000107c27ae4(&uStack_180);
  func_0x000104bee768(&uStack_100);
  func_0x000104bee7a0(&uStack_168);
  func_0x000104bee7dc(&uStack_150);
  func_0x000104bee864(&uStack_138);
  func_0x000107c27a04(&uStack_120);
  func_0x000107c27914(auStack_80);
  func_0x0001086b0960();
  do {
    func_0x0001086b0254();
  } while( true );
}



/* Entry: 1086a01cc; end: 1086a035f;  */

void FUN_1086a01cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 extraout_x8;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000064;
  undefined8 in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined1 in_stack_00000080;
  undefined1 auStack_620 [24];
  undefined1 auStack_608 [64];
  undefined1 auStack_5c8 [72];
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 auStack_568 [24];
  undefined1 auStack_550 [1280];
  undefined1 auStack_50 [80];
  
  func_0x0001086b0888();
  FUN_1086a7a7c(auStack_50);
  func_0x000107c27994(auStack_568,in_stack_00000068);
  uStack_578 = in_stack_00000070[1];
  uStack_580 = *in_stack_00000070;
  uStack_570 = in_stack_00000070[2];
  in_stack_00000070[1] = 0;
  in_stack_00000070[2] = 0;
  *in_stack_00000070 = 0;
  FUN_10869ff9c(auStack_5c8,auStack_50);
  FUN_1086a0360(auStack_608,in_stack_00000078);
  FUN_1086a7c80(auStack_550,auStack_568,&uStack_580,auStack_5c8,auStack_608,in_stack_00000080);
  func_0x0001086b0940();
  FUN_10891cac8(auStack_5c8);
  func_0x000107c27ae4(&uStack_580);
  func_0x000107c27914(auStack_568);
  FUN_10869ffa8();
  func_0x0001086b0870(auStack_620);
  FUN_1086a7d9c(extraout_x8,param_2,auStack_620,param_4,param_5,param_6,param_7,param_8,
                in_stack_00000060,in_stack_00000064,4);
  func_0x000107c27914(auStack_620);
  FUN_1086a78f0(auStack_550);
  FUN_10891cac8(auStack_50);
  return;
}



/* Entry: 1086a0360; end: 1086a036b;  */

long FUN_1086a0360(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a8c508,param_1,0,param_2);
  *(undefined4 *)(lVar1 + 0x38) = 0;
  func_0x0001086b08a0();
  *(undefined1 *)(lVar1 + 0x28) = 0;
  FUN_1086a8af0();
  return param_1;
}



/* Entry: 1086a036c; end: 1086a0453;  */

void FUN_1086a036c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [64];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(param_4 + 0x38);
  uVar3 = *(undefined4 *)(param_4 + 0x30);
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  uVar2 = *(undefined8 *)(param_4 + 0x20);
  uVar4 = *(undefined4 *)(param_4 + 0x40);
  uVar5 = *(undefined4 *)(param_4 + 0x28);
  uVar6 = *(undefined4 *)(param_4 + 0x48);
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  FUN_1086a0454(auStack_b8,param_5 + 0x28);
  FUN_1086a01cc(param_1,param_2,param_3,param_4,uVar1,uVar7,uVar3,uVar2,uVar4,uVar5,uVar6,param_5,
                &uStack_78,auStack_b8,1);
  func_0x0001086b0940();
  func_0x000107c27ae4(&uStack_78);
  return;
}



/* Entry: 1086a0454; end: 1086a045f;  */

void FUN_1086a0454(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  uVar2 = 0;
  lVar3 = param_2;
  func_0x0001088f2d98();
  *(undefined8 *)(param_1 + 8) = uVar2;
  *unaff_x19 = &PTR_FUN_110a8c518;
  if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
    func_0x0001088f2cb0();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(unaff_x19 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  uVar4 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(unaff_x19 + 7) = uVar4;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000107c2a26c();
    uVar4 = *(undefined4 *)(unaff_x19 + 7);
  }
  unaff_x19[3] = unaff_x20;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined1 *)(unaff_x19 + 5) = *(undefined1 *)(param_2 + 0x28);
  unaff_x19[4] = uVar2;
  switch(uVar4) {
  case 1:
    func_0x0001088f2e64();
    FUN_1088f2804();
    break;
  case 2:
    func_0x0001088f2e64();
    func_0x0001088f2884();
    break;
  default:
    goto LAB_1088f2c54;
  case 4:
    func_0x0001088f2e64();
    func_0x0001088f28e4();
    break;
  case 5:
    func_0x0001088f2e64();
    func_0x0001088f295c();
    break;
  case 6:
    func_0x0001088f2e64();
    func_0x0001088f29bc();
    break;
  case 9:
    func_0x0001088f2e64();
    func_0x0001088f2a1c();
  }
  unaff_x19[6] = unaff_x20;
LAB_1088f2c54:
  return;
}



/* Entry: 1086a0460; end: 1086a050b;  */

void FUN_1086a0460(undefined8 *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long extraout_x8;
  undefined1 auStack_60 [48];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001086b0f24();
  if (*(int *)(param_2 + 0x38) == 9) {
    func_0x0001086b0594();
    iVar1 = *(int *)(extraout_x8 + 8);
    while (((long)iVar1 & 0x1fffffffffffffffU) != 0) {
      uVar2 = 0;
      FUN_10867b1ac(auStack_60);
      if ((uVar2 & 1) != 0) {
        func_0x000107c32508();
        func_0x000107c28944();
      }
      func_0x0001086b0f78();
    }
  }
  func_0x00010867bb84(auStack_60);
  return;
}



/* Entry: 1086a050c; end: 1086a069f;  */

void FUN_1086a050c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined1 auStack_e08 [96];
  undefined1 auStack_da8 [904];
  undefined1 auStack_a20 [24];
  undefined1 auStack_a08 [2520];
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [24];
  
  func_0x0001086b0888();
  FUN_108848684(auStack_18);
  uVar1 = *param_2;
  func_0x0001086b045c(uVar1);
  (*extraout_x8)();
  func_0x0001086b045c(*param_3);
  (*extraout_x8_00)();
  func_0x000107c27994(auStack_30,auStack_18);
  FUN_10869fae4(param_4,param_6);
  func_0x000107c27994(auStack_a20,auStack_18);
  FUN_108685044(auStack_da8,param_5);
  FUN_1086858d8(auStack_e08,param_4);
  FUN_1086a8b48(auStack_a08,auStack_a20,auStack_da8,uVar1,auStack_e08,param_1);
  func_0x0001086b0314();
  FUN_1086a06a0();
  func_0x0001086a931c(auStack_a08);
  func_0x000104bee768(auStack_e08);
  func_0x000104bee3a8(auStack_da8);
  func_0x000107c27914(auStack_a20);
  func_0x0001086b0640();
  func_0x000107c27914(auStack_18);
  return;
}



/* Entry: 1086a06a0; end: 1086a070f;  */

undefined8 FUN_1086a06a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_1086abfd0(param_1,param_2,&uStack_40);
  func_0x000107c27914(&uStack_40);
  return param_1;
}



/* Entry: 1086a0710; end: 1086a0727;  */

void FUN_1086a0710(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  long *plVar9;
  ulong *puVar10;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int iVar11;
  int extraout_w8_05;
  int extraout_w8_06;
  undefined8 *puVar12;
  undefined **extraout_x8;
  undefined **extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar13;
  long lVar14;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined **extraout_x8_05;
  undefined **ppuVar15;
  long extraout_x8_06;
  long *extraout_x9;
  long *extraout_x9_00;
  undefined **extraout_x9_01;
  undefined **extraout_x9_02;
  undefined **ppuVar16;
  undefined **extraout_x9_03;
  undefined **extraout_x9_04;
  undefined **extraout_x9_05;
  undefined **extraout_x9_06;
  undefined **ppuVar17;
  undefined **extraout_x9_07;
  ulong *extraout_x9_08;
  undefined **extraout_x9_09;
  undefined **extraout_x9_10;
  long *plVar18;
  long lVar19;
  undefined *puVar20;
  ulong *puVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  long *plVar24;
  undefined **ppuVar25;
  long lVar26;
  undefined8 *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  ppuVar8 = &PTR_PTR_113284418;
  if (*(undefined ***)(param_1 + 0x48) != (undefined **)0x0) {
    ppuVar8 = *(undefined ***)(param_1 + 0x48);
  }
  ppuVar6 = ppuVar8;
  FUN_1086e97e0();
  ppuVar17 = &PTR_PTR_11326cb58;
  if ((undefined **)ppuVar8[3] != (undefined **)0x0) {
    ppuVar17 = (undefined **)ppuVar8[3];
  }
  switch(*(undefined4 *)(ppuVar8 + 8)) {
  case 4:
    func_0x0001086ebbfc();
    FUN_1086ea1bc();
    break;
  case 5:
    func_0x0001086ebbfc();
    func_0x0001086ea21c();
    break;
  case 6:
    func_0x0001086ebbfc();
    func_0x0001086ea254();
    func_0x0001086ebc6c();
    ppuVar8 = extraout_x9_01;
    if (extraout_w8_00 != 6) {
      ppuVar8 = &PTR_PTR_113286d58;
    }
    if (((ulong)ppuVar8[2] & 1) != 0) {
      func_0x0001086ebc50();
      FUN_108655060();
      func_0x0001086ebcec();
    }
    func_0x0001086ebbfc();
    FUN_1086eac18(ppuVar6 + 0x1b);
    break;
  case 7:
    func_0x0001086ebbfc();
    FUN_1086ea28c();
    break;
  case 8:
    ppuVar8 = &PTR_PTR_113280c30;
    if (*(undefined ***)(param_2 + 0x78) != (undefined **)0x0) {
      ppuVar8 = *(undefined ***)(param_2 + 0x78);
    }
    func_0x000107c29dec();
    if (((ulong)ppuVar8 & 1) == 0) {
      ppuVar8 = &PTR_PTR_113280c30;
      if (*(undefined ***)(param_2 + 0x78) != (undefined **)0x0) {
        ppuVar8 = *(undefined ***)(param_2 + 0x78);
      }
      FUN_10884269c(param_2 + 0x50,*(undefined4 *)(ppuVar8 + 0x15),ppuVar17);
      if (*(char *)(param_2 + 0x120) == '\x01') {
        *(undefined1 *)(param_2 + 0x120) = 0;
      }
      if (*(char *)(param_2 + 300) == '\x01') {
        *(undefined1 *)(param_2 + 300) = 0;
      }
    }
    break;
  case 0xb:
    func_0x0001086ebbfc();
    func_0x0001086ea310();
    break;
  case 0xc:
    func_0x0001086ebbfc();
    func_0x0001086ea348();
    break;
  case 0xd:
    func_0x0001086ebbfc();
    func_0x0001086ebc6c();
    FUN_1086ea380();
    break;
  case 0xf:
    func_0x0001086ebd1c();
    func_0x0001086ebc58();
    if (*(int *)(extraout_x8_01 + 0x1c) == 3) {
      FUN_1086ea460(*(undefined8 *)(extraout_x8_01 + 0x10),param_2);
    }
    break;
  case 0x10:
    func_0x0001086ebd1c();
    ppuVar8 = &PTR_PTR_113286d98;
    ppuVar6 = ppuVar8;
    if (extraout_x8 != (undefined **)0x0) {
      ppuVar6 = extraout_x8;
    }
    if (((ulong)ppuVar6[2] & 1) != 0) {
      func_0x0001086ebbfc();
      func_0x0001086ebc6c();
      bVar5 = extraout_w8_01 == 0x10;
      ppuVar6 = extraout_x9_03;
      if (!bVar5) {
        ppuVar6 = &PTR_PTR_113286d10;
      }
      func_0x0001086ebce0(ppuVar6);
      if (!bVar5) {
        ppuVar8 = extraout_x8_00;
      }
      func_0x0001086ebcc4(ppuVar8);
      FUN_1086ea4e8();
    }
    break;
  case 0x11:
    if (((int)ppuVar6 == 0) || ((ppuVar8[7][0x10] & 1) == 0)) {
      func_0x0001086ebbfc();
      FUN_1086ea6dc();
    }
    else {
      func_0x0001086ebbfc();
      ppuVar16 = ppuVar6;
      func_0x0001086ebc6c();
      bVar5 = extraout_w8_06 == 0x11;
      ppuVar8 = extraout_x9_09;
      if (!bVar5) {
        ppuVar8 = &PTR_PTR_113286d38;
      }
      func_0x0001086ebce0(ppuVar8);
      ppuVar8 = &PTR_PTR_11326ae28;
      if (!bVar5) {
        ppuVar8 = extraout_x8_05;
      }
      ppuVar23 = ppuVar16 + 0x18;
      func_0x0001086ebc0c(*ppuVar23);
      ppuVar22 = ppuVar23;
      if (!bVar5) {
        ppuVar22 = extraout_x9_10;
      }
      ppuVar25 = ppuVar22 + *(int *)(ppuVar16 + 0x19);
      for (lVar14 = (long)*(int *)(ppuVar16 + 0x19) << 3; ppuVar16 = ppuVar25, lVar14 != 0;
          lVar14 = lVar14 + -8) {
        puVar20 = *ppuVar22;
        ppuVar15 = *(undefined ***)(puVar20 + 0x18);
        ppuVar16 = &PTR_PTR_11326cb58;
        if (ppuVar15 != (undefined **)0x0) {
          ppuVar16 = ppuVar15;
        }
        ppuVar15 = ppuVar17;
        func_0x000107c287e8(ppuVar17,ppuVar16);
        if ((int)ppuVar15 != 0) {
          ppuVar15 = *(undefined ***)(puVar20 + 0x20);
          ppuVar16 = &PTR_PTR_11326ae28;
          if (ppuVar15 != (undefined **)0x0) {
            ppuVar16 = ppuVar15;
          }
          ppuVar15 = ppuVar8;
          FUN_1086ead74(ppuVar8,ppuVar16);
          ppuVar16 = ppuVar22;
          if (((ulong)ppuVar15 & 1) != 0) break;
        }
        ppuVar22 = ppuVar22 + 1;
      }
      func_0x0001086ebbec(ppuVar6[0x18]);
      if (ppuVar16 != (undefined **)(extraout_x8_06 + (long)*(int *)(ppuVar6 + 0x19) * 8)) {
        FUN_1086eacd4(ppuVar23,ppuVar16);
      }
    }
    break;
  case 0x12:
    func_0x0001086ebbfc();
    bVar5 = *(int *)(ppuVar8 + 8) == 0x12;
    ppuVar8 = (undefined **)ppuVar8[7];
    if (!bVar5) {
      ppuVar8 = &PTR_PTR_113286db8;
    }
    ppuVar22 = ppuVar6 + 0x1b;
    ppuVar16 = ppuVar6;
    func_0x0001086ebc0c(*ppuVar22);
    ppuVar17 = ppuVar22;
    if (!bVar5) {
      ppuVar17 = extraout_x9_02;
    }
    ppuVar23 = ppuVar17 + *(int *)(ppuVar16 + 0x1c);
    lVar14 = (long)*(int *)(ppuVar16 + 0x1c) << 3;
    while ((ppuVar25 = ppuVar23, lVar14 != 0 &&
           (func_0x0001086ebc34(*(undefined8 *)(*ppuVar17 + 0x30)), ppuVar25 = ppuVar17,
           ((ulong)ppuVar16 & 1) == 0))) {
      ppuVar17 = ppuVar17 + 1;
      lVar14 = lVar14 + -8;
    }
    func_0x0001086ebbec(ppuVar6[0x1b]);
    uVar4 = ppuVar25 == (undefined **)(extraout_x8_02 + (long)*(int *)(ppuVar6 + 0x1c) * 8);
    if ((bool)uVar4) {
      func_0x0001086eae18(ppuVar22);
      func_0x0001086eae08();
      func_0x0001086ebd44();
code_r0x0001086ea09c:
      func_0x000107c303b4(ppuVar22 + 3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    }
    else {
      puVar20 = *ppuVar25;
      puVar21 = (ulong *)(puVar20 + 0x18);
      func_0x0001086ebc0c(*puVar21);
      if (!(bool)uVar4) {
        puVar21 = extraout_x9_08;
      }
      for (lVar14 = (long)*(int *)(puVar20 + 0x20) << 3; lVar14 != 0; lVar14 = lVar14 + -8) {
        uVar13 = *puVar21;
        func_0x000107c278d0(uVar13,(ulong)ppuVar8[2] & 0xfffffffffffffffc);
        if ((uVar13 & 1) != 0) break;
        puVar21 = puVar21 + 1;
      }
      func_0x0001086ebbec(*(undefined8 *)(puVar20 + 0x18));
      func_0x0001086ebd80();
      if ((bool)uVar4) {
        ppuVar22 = (undefined **)*ppuVar25;
        goto code_r0x0001086ea09c;
      }
    }
    *(undefined1 *)(param_2 + 0x140) = 0;
    break;
  case 0x13:
    func_0x0001086ebb80(*(undefined8 *)(param_2 + 0x78));
    if (extraout_w8 == 5) {
      puVar20 = ppuVar8[7];
      uVar4 = *(undefined ***)(puVar20 + 0x30) == (undefined **)0x0;
      ppuVar8 = &PTR_PTR_113280230;
      if (!(bool)uVar4) {
        ppuVar8 = *(undefined ***)(puVar20 + 0x30);
      }
      lVar14 = param_2 + 0x50;
      FUN_108667a24();
      func_0x000108655070();
      func_0x0001086eba74();
      FUN_1086eae94(lVar14 + 0x10,ppuVar8 + 2);
      lVar14 = lVar14 + 0x28;
      func_0x0001086eaea4(lVar14,ppuVar8 + 5);
      func_0x0001086ebbfc();
      plVar18 = (long *)(puVar20 + 0x18);
      func_0x0001086ebc0c(*plVar18);
      if (!(bool)uVar4) {
        plVar18 = extraout_x9;
      }
      plVar9 = plVar18 + *(int *)(puVar20 + 0x20);
      for (; uVar4 = plVar18 == plVar9, !(bool)uVar4; plVar18 = plVar18 + 1) {
        lVar19 = *plVar18;
        func_0x0001086ebc0c(*(undefined8 *)(lVar14 + 0xd8));
        plVar2 = (long *)(lVar14 + 0xd8);
        if (!(bool)uVar4) {
          plVar2 = extraout_x9_00;
        }
        plVar1 = plVar2 + *(int *)(lVar14 + 0xe0);
        for (lVar26 = (long)*(int *)(lVar14 + 0xe0) << 3; plVar24 = plVar1, lVar26 != 0;
            lVar26 = lVar26 + -8) {
          ppuVar8 = &PTR_PTR_11326cb58;
          if (*(undefined ***)(*plVar2 + 0x30) != (undefined **)0x0) {
            ppuVar8 = *(undefined ***)(*plVar2 + 0x30);
          }
          uVar4 = *(undefined ***)(lVar19 + 0x30) == (undefined **)0x0;
          ppuVar6 = &PTR_PTR_11326cb58;
          if (!(bool)uVar4) {
            ppuVar6 = *(undefined ***)(lVar19 + 0x30);
          }
          func_0x000107c287e8(ppuVar8,ppuVar6);
          plVar24 = plVar2;
          if (((ulong)ppuVar8 & 1) != 0) break;
          plVar2 = plVar2 + 1;
        }
        func_0x0001086ebbec(*(undefined8 *)(lVar14 + 0xd8));
        func_0x0001086ebd80();
        if (!(bool)uVar4) {
          lVar26 = *plVar24;
          puVar21 = (ulong *)(lVar26 + 0x18);
          puVar10 = (ulong *)(lVar19 + 0x18);
          if (*(int *)(lVar26 + 0x20) != 1 || *(int *)(lVar19 + 0x20) != 1) {
            if ((*puVar10 & 1) != 0) {
              puVar10 = (ulong *)(*puVar10 + 7);
            }
            FUN_1086eaf4c(auStack_88,puVar10,puVar10 + *(int *)(lVar19 + 0x20));
            uVar13 = (ulong)(*(int *)(lVar26 + 0x20) - 1);
            iVar11 = 0;
            do {
              lVar19 = (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3) + 8;
              while( true ) {
                if ((int)uVar13 < iVar11) {
                  if (*(int *)(lVar26 + 0x20) == 0) {
                    func_0x0001086ebd68();
                  }
                  FUN_1086af8b0(auStack_88);
                  goto code_r0x0001086e9af0;
                }
                puVar10 = puVar21;
                if ((*puVar21 & 1) != 0) {
                  puVar10 = (ulong *)(*puVar21 + lVar19 + -1);
                }
                puVar12 = (undefined8 *)*puVar10;
                lStack_90 = (long)*(char *)((long)puVar12 + 0x17);
                puStack_98 = puVar12;
                if (lStack_90 < 0) {
                  puStack_98 = (undefined8 *)*puVar12;
                  lStack_90 = puVar12[1];
                }
                puVar7 = auStack_88;
                FUN_1086eb2ac(puVar7,&puStack_98);
                if (puVar7 == (undefined1 *)0x0) break;
                FUN_1086eb3a0(puVar21);
                uVar13 = (ulong)((int)uVar13 - 1);
                lVar19 = lVar19 + -8;
              }
              func_0x0001053a9198(puVar21,iVar11,uVar13);
              iVar11 = iVar11 + 1;
            } while( true );
          }
          if ((*puVar21 & 1) != 0) {
            puVar21 = (ulong *)(*puVar21 + 7);
          }
          uVar13 = *puVar21;
          if ((*puVar10 & 1) != 0) {
            puVar10 = (ulong *)(*puVar10 + 7);
          }
          func_0x000107c278d0(uVar13,*puVar10);
          if ((int)uVar13 != 0) {
            func_0x0001086ebd68();
          }
        }
code_r0x0001086e9af0:
      }
    }
    break;
  case 0x14:
    func_0x0001086ebc50();
    FUN_1086eb3c8();
    func_0x0001086ebc6c();
    func_0x0001086ebd8c();
    break;
  case 0x15:
    ppuVar16 = *(undefined ***)(ppuVar8[7] + 0x18);
    ppuVar17 = &PTR_PTR_113386730;
    if (ppuVar16 != (undefined **)0x0) {
      ppuVar17 = ppuVar16;
    }
    puVar20 = ppuVar17[8];
    uVar3 = *(undefined4 *)(ppuVar8[7] + 0x20);
    func_0x0001086ebc50();
    FUN_1086eb3c8();
    func_0x0001086eb44c();
    ppuVar6 = ppuVar6 + 2;
    FUN_1086eb4c4();
    ppuVar8 = ppuVar6;
    FUN_1086eb480();
    ppuVar8[2] = puVar20;
    *(undefined4 *)(ppuVar6 + 4) = uVar3;
    break;
  case 0x16:
    func_0x0001086ebc50();
    iVar11 = *(int *)(ppuVar6 + 0x18);
    func_0x0001086ebc50();
    if (iVar11 == 0xe) {
      func_0x0001086eb578();
    }
    else {
      if (*(int *)(ppuVar6 + 0x18) != 0xd) break;
      func_0x0001086ebc50();
      func_0x0001086eb608();
    }
    *(undefined4 *)(ppuVar6 + 2) = 2;
    break;
  case 0x17:
    func_0x0001086ebc50();
    func_0x0001086ebc6c();
    ppuVar8 = extraout_x9_04;
    if (extraout_w8_02 != 0x17) {
      ppuVar8 = &PTR_PTR_113286ca0;
    }
    puVar20 = ppuVar6[1];
    if (((ulong)puVar20 & 1) != 0) {
      puVar20 = *(undefined **)((ulong)puVar20 & 0xfffffffffffffffe);
    }
    ppuVar6 = ppuVar6 + 0xc;
    func_0x000107c30248(ppuVar6,(ulong)ppuVar8[3] & 0xfffffffffffffffc,puVar20);
    func_0x0001086ebc6c();
    ppuVar8 = extraout_x9_05;
    if (extraout_w8_03 != 0x17) {
      ppuVar8 = &PTR_PTR_113286ca0;
    }
    ppuVar17 = extraout_x9_05;
    iVar11 = extraout_w8_03;
    if (((ulong)ppuVar8[2] & 1) != 0) {
      func_0x0001086ebc50();
      FUN_108655060();
      func_0x0001086ebcec();
      func_0x0001086ebc6c();
      ppuVar17 = extraout_x9_06;
      iVar11 = extraout_w8_04;
    }
    if (iVar11 != 0x17) {
      ppuVar17 = &PTR_PTR_113286ca0;
    }
    if ((*(byte *)(ppuVar17 + 2) >> 1 & 1) != 0) {
      puVar20 = ppuVar17[5];
      func_0x0001086ebbfc();
      ppuVar6 = ppuVar6 + 0xc;
      FUN_1086e95f8(ppuVar6,puVar20 + 0x10);
    }
    func_0x0001086ebbfc();
    *(undefined1 *)((long)ppuVar6 + 0x141) = 1;
    func_0x0001086ebc6c();
    ppuVar8 = extraout_x9_07;
    if (extraout_w8_05 != 0x17) {
      ppuVar8 = &PTR_PTR_113286ca0;
    }
    if ((*(byte *)(ppuVar8 + 2) >> 2 & 1) != 0) {
      func_0x0001086ebbfc();
      *(uint *)(ppuVar6 + 2) = *(uint *)(ppuVar6 + 2) | 4;
      puVar20 = ppuVar6[0x23];
      if (puVar20 == (undefined *)0x0) {
        puVar20 = ppuVar6[1];
        if (((ulong)puVar20 & 1) != 0) {
          func_0x0001086ebc18();
        }
        func_0x0001086d1018();
        ppuVar6[0x23] = puVar20;
      }
      FUN_108927a18();
      func_0x0001086ebbfc();
      puVar20[0x141] = 0;
    }
    break;
  case 0x18:
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) | 0x40;
    uVar13 = *(ulong *)(param_2 + 0x98);
    if (uVar13 == 0) {
      uVar13 = *(ulong *)(param_2 + 0x58);
      if ((uVar13 & 1) != 0) {
        func_0x0001086ebc18();
      }
      func_0x0001086eb690();
      *(ulong *)(param_2 + 0x98) = uVar13;
    }
    *(undefined1 *)(uVar13 + 0x1c) = 1;
    break;
  case 0x19:
    func_0x0001086ebbfc();
    *(undefined1 *)((long)ppuVar6 + 0x142) = 1;
    break;
  case 0x1a:
    func_0x0001086ebc50();
    FUN_1086ea75c();
    break;
  case 0x1b:
    puVar20 = ppuVar8[7];
    plVar18 = (long *)(param_2 + 0x50);
    FUN_1086eb714();
    if (*(int *)((long)plVar18 + 0x34) == 4) {
code_r0x0001086ea014:
      FUN_1086eb724(plVar18,puVar20);
    }
    else {
      if (*(int *)((long)plVar18 + 0x34) == 5) {
        plVar9 = plVar18;
        plVar18 = (long *)plVar18[5];
      }
      else {
        if ((*(int *)((long)plVar18 + 0x24) == 1) || (*(int *)((long)plVar18 + 0x24) != 2))
        goto code_r0x0001086ea014;
        FUN_10891a790(plVar18);
        *(undefined4 *)((long)plVar18 + 0x34) = 5;
        plVar9 = (long *)plVar18[1];
        if (((ulong)plVar9 & 1) != 0) {
          func_0x0001086ebc18();
        }
        func_0x0001086eb8b4();
        plVar18[5] = (long)plVar9;
        plVar18 = plVar9;
      }
      uVar13 = 0;
      puVar21 = (ulong *)(plVar18 + 2);
      while ((int)uVar13 < (int)plVar18[3]) {
        puVar10 = puVar21;
        if ((*puVar21 & 1) != 0) {
          puVar10 = (ulong *)(*puVar21 + uVar13 * 8 + 7);
        }
        func_0x0001086ebc34(*(undefined8 *)(*puVar10 + 0x18));
        if ((int)plVar9 == 0) {
          uVar13 = (ulong)((int)uVar13 + 1);
        }
        else {
          func_0x0001053a9198(puVar21,uVar13,(int)plVar18[3] + -1);
          lVar14 = (long)(int)plVar18[3] + -1;
          *(int *)(plVar18 + 3) = (int)lVar14;
          puVar10 = puVar21;
          if ((plVar18[2] & 1U) != 0) {
            puVar10 = (ulong *)(plVar18[2] + lVar14 * 8 + 7);
          }
          plVar9 = (long *)*puVar10;
          (**(code **)(*plVar9 + 0x18))();
        }
      }
      if ((puVar20[0x10] & 1) != 0) {
        func_0x000107c303b0(puVar21,0x1086eb8e8);
        puVar10 = puVar21;
        func_0x0001086ebc8c();
        if (puVar10 == (ulong *)0x0) {
          uVar13 = puVar21[1];
          if ((uVar13 & 1) != 0) {
            func_0x0001086ebc18();
          }
          func_0x000107c287e0();
          puVar21[3] = uVar13;
        }
        func_0x0001086ebd44();
        func_0x0001086ebd74(*(undefined8 *)(puVar20 + 0x18));
        *(undefined4 *)(puVar21 + 4) = *(undefined4 *)(extraout_x8_03 + 0x10);
      }
    }
  }
  func_0x0001086ebd04(*(undefined8 *)(param_2 + 0x80));
  *(undefined8 *)(param_2 + 0xe8) = extraout_x8_04;
  return;
}



/* Entry: 1086a0728; end: 1086a09eb;  */

void FUN_1086a0728(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *unaff_x19;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong unaff_x26;
  long *plVar13;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  
  func_0x0001086b0b64();
  func_0x0001086b0c58();
  FUN_1086ac7cc();
  lVar5 = *param_2;
  lVar1 = param_2[1];
  plVar12 = unaff_x19 + 2;
  do {
    puVar3 = PTR___ZSt7nothrow_1103469d8;
    uVar4 = lVar5 - lVar1 < 0;
    if (lVar5 == lVar1) {
      do {
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) {
          return;
        }
        in_stack_00000018 = (long *)0x0;
        in_stack_00000020 = (long *)0x0;
        uVar10 = (plVar12[4] - plVar12[3]) / 0xa8;
        if (0 < plVar12[4] - plVar12[3]) {
          for (; 0 < (long)uVar10; uVar10 = uVar10 >> 1) {
            lVar5 = uVar10 * 0xa8;
            __ZnwmRKSt9nothrow_t(lVar5,puVar3);
            if (lVar5 != 0) goto LAB_1086a0974;
          }
          lVar5 = 0;
LAB_1086a0974:
          in_stack_00000008 = 0;
          in_stack_00000010 = uVar10;
          FUN_1086acc18(&stack0x00000018,lVar5);
          in_stack_00000020 = (long *)uVar10;
          FUN_1086acc30(&stack0x00000008);
        }
        func_0x0001086b08dc();
        FUN_1086ac9a8();
        FUN_1086acc30(&stack0x00000018);
      } while( true );
    }
    uVar11 = *(ulong *)(lVar5 + 0x18);
    uVar10 = unaff_x19[1];
    if (uVar10 != 0) {
      uVar6 = uVar10 - 1;
      if ((uVar10 & uVar6) == 0) {
        unaff_x26 = uVar6 & uVar11;
        uVar4 = false;
      }
      else {
        uVar4 = (long)(uVar11 - uVar10) < 0;
        unaff_x26 = uVar11;
        if (uVar10 <= uVar11) {
          uVar8 = 0;
          if (uVar10 != 0) {
            uVar8 = uVar11 / uVar10;
          }
          unaff_x26 = uVar11 - uVar8 * uVar10;
        }
      }
      plVar13 = *(long **)(*unaff_x19 + unaff_x26 * 8);
      if (plVar13 != (long *)0x0) {
        do {
          while( true ) {
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) goto LAB_1086a0800;
            uVar8 = plVar13[1];
            if (uVar8 != uVar11) break;
            uVar4 = (long)(plVar13[2] - uVar11) < 0;
            if (plVar13[2] == uVar11) goto LAB_1086a08f8;
          }
          if ((uVar10 & uVar6) == 0) {
            uVar8 = uVar8 & uVar6;
          }
          else if (uVar10 <= uVar8) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar2 * uVar10;
          }
          uVar4 = (long)(uVar8 - unaff_x26) < 0;
        } while (uVar8 == unaff_x26);
      }
    }
LAB_1086a0800:
    func_0x0001086b0a2c();
    in_stack_00000028 = 1;
    *param_1 = 0;
    param_1[1] = uVar11;
    param_1[2] = uVar11;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    in_stack_00000018 = param_1;
    in_stack_00000020 = plVar12;
    func_0x0001086b0124();
    if ((uVar10 == 0) || (func_0x0001086b0a10(), (bool)uVar4)) {
      func_0x0001086b00f0(uVar10 << 1);
      FUN_1086ac7cc();
      uVar10 = unaff_x19[1];
      if ((uVar10 & uVar10 - 1) == 0) {
        unaff_x26 = uVar10 - 1 & uVar11;
      }
      else {
        unaff_x26 = uVar11;
        if (uVar10 <= uVar11) {
          uVar6 = 0;
          if (uVar10 != 0) {
            uVar6 = uVar11 / uVar10;
          }
          unaff_x26 = uVar11 - uVar6 * uVar10;
        }
      }
    }
    plVar13 = in_stack_00000018;
    lVar7 = *unaff_x19;
    plVar9 = *(long **)(lVar7 + unaff_x26 * 8);
    if (plVar9 == (long *)0x0) {
      *in_stack_00000018 = *plVar12;
      *plVar12 = (long)in_stack_00000018;
      *(long **)(lVar7 + unaff_x26 * 8) = plVar12;
      if (*in_stack_00000018 != 0) {
        uVar11 = *(ulong *)(*in_stack_00000018 + 8);
        if ((uVar10 & uVar10 - 1) == 0) {
          uVar11 = uVar11 & uVar10 - 1;
        }
        else if (uVar10 <= uVar11) {
          uVar6 = 0;
          if (uVar10 != 0) {
            uVar6 = uVar11 / uVar10;
          }
          uVar11 = uVar11 - uVar6 * uVar10;
        }
        *(long **)(lVar7 + uVar11 * 8) = in_stack_00000018;
      }
    }
    else {
      *in_stack_00000018 = *plVar9;
      *plVar9 = (long)in_stack_00000018;
    }
    in_stack_00000018 = (long *)0x0;
    func_0x0001086b0b44();
    FUN_1086ac938(&stack0x00000018);
LAB_1086a08f8:
    param_1 = plVar13 + 3;
    func_0x0001086a9430(param_1,lVar5);
    lVar5 = lVar5 + 0xa8;
  } while( true );
}



/* Entry: 1086a09ec; end: 1086a0a57;  */

void FUN_1086a09ec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long alStack_40 [2];
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1086ad3ac(alStack_40,param_1,param_2 + 0x18);
    if (alStack_40[0] != 0) {
      lVar1 = *(long *)(alStack_40[0] + 0x20);
      for (lVar2 = *(long *)(alStack_40[0] + 0x18); lVar2 != lVar1; lVar2 = lVar2 + 0xa8) {
        func_0x0001086b0314();
        FUN_1086a0710();
      }
    }
    FUN_1086ad5b8(alStack_40);
  }
  return;
}



/* Entry: 1086a0a58; end: 1086a1083;  */

long * FUN_1086a0a58(undefined8 param_1,undefined8 param_2)

{
  long ****pppplVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  long ***ppplVar9;
  long ***ppplVar10;
  long *plVar11;
  undefined8 extraout_x8;
  ulong uVar12;
  long ****extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long ****pppplVar13;
  long ****extraout_x9;
  long ****pppplVar14;
  long ****extraout_x9_00;
  ulong extraout_x9_01;
  undefined8 *puVar15;
  long ***extraout_x10;
  long ****extraout_x11;
  ulong uVar16;
  long *unaff_x19;
  long *plVar17;
  long unaff_x20;
  long ****pppplVar18;
  long lVar19;
  long ****unaff_x21;
  long ****pppplVar20;
  long ****unaff_x22;
  long ****unaff_x23;
  long ***ppplVar21;
  undefined8 *puVar22;
  long ***ppplStack_188;
  long ***ppplStack_180;
  long ***ppplStack_178;
  long *plStack_170;
  undefined1 *puStack_160;
  code *pcStack_158;
  long ***ppplStack_148;
  long ***ppplStack_140;
  long ***ppplStack_128;
  long ***ppplStack_120;
  long alStack_110 [3];
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined1 auStack_e0 [72];
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long **pplStack_80;
  long ***ppplStack_78;
  undefined8 uStack_70;
  
  func_0x000107c32538();
  func_0x0001086b0138();
  uStack_70 = extraout_x8;
  func_0x0001086b067c();
  func_0x000107c27994(alStack_110,unaff_x20 + 0x40);
  func_0x000107c27994(&ppplStack_98);
  func_0x00010868c9c4(auStack_e0,&ppplStack_98,1);
  FUN_108862300(&ppplStack_128);
  func_0x0001086b0638();
  func_0x0001086b0960();
  pppplVar1 = (long ****)(unaff_x19 + 2);
  ppplStack_148 = ppplStack_120;
  pppplVar18 = (long ****)ppplStack_128;
  do {
    uVar7 = pppplVar18 == (long ****)ppplStack_120;
    if ((bool)uVar7) {
      func_0x0001086a9978(&ppplStack_128);
      plVar17 = alStack_110;
      func_0x000107c27914();
      func_0x0001086aff54(uStack_70);
      if ((bool)uVar7) {
        return plVar17;
      }
      ___stack_chk_fail();
      func_0x0001086b0638();
      func_0x0001086b0960();
      func_0x000107c27914(alStack_110);
      plVar11 = unaff_x19;
      func_0x0001086a9a34();
      func_0x0001086b025c();
      pcStack_158 = FUN_1086a1084;
      if ((char)plVar11[5] == '\x01') {
        ppplStack_188 = (long ***)unaff_x23;
        ppplStack_180 = (long ***)unaff_x22;
        ppplStack_178 = (long ***)unaff_x21;
        plStack_170 = plVar17;
        puStack_160 = &stack0xfffffffffffffff0;
        func_0x000107c324b0();
        plVar17 = plVar11 + 4;
        FUN_1086ad600();
        plVar11 = (long *)0x0;
        if (unaff_x19 != (long *)0x0) {
          lVar2 = unaff_x19[4];
          for (lVar19 = unaff_x19[3]; lVar19 != lVar2; lVar19 = lVar19 + 0x48) {
            func_0x0001086b0ac4();
            FUN_1086e981c();
          }
          func_0x0001086b0500();
          plVar17 = (long *)*plVar17;
          FUN_1086ad6cc(&ppplStack_188);
          FUN_1086a9830(&ppplStack_188);
          return plVar17;
        }
      }
      return plVar11;
    }
    if (*(int *)(pppplVar18 + 0xc) == 9) {
      FUN_1086a7a7c(auStack_e0,alStack_110,pppplVar18[0x10],pppplVar18 + 5);
      pppplVar14 = pppplVar18 + 5;
      ppplStack_140 = (long ***)pppplVar18;
      FUN_1086a0460(&puStack_f8);
      puVar4 = puStack_f0;
      for (puVar22 = puStack_f8; uVar7 = (long)puVar22 - (long)puVar4 < 0, puVar22 != puVar4;
          puVar22 = puVar22 + 1) {
        pppplVar20 = (long ****)*puVar22;
        unaff_x22 = (long ****)unaff_x19[1];
        if (unaff_x22 != (long ****)0x0) {
          uVar12 = (long)unaff_x22 - 1;
          if (((ulong)unaff_x22 & uVar12) == 0) {
            pppplVar18 = (long ****)(uVar12 & (ulong)pppplVar20);
            uVar7 = false;
          }
          else {
            uVar7 = (long)pppplVar20 - (long)unaff_x22 < 0;
            pppplVar18 = pppplVar20;
            if (unaff_x22 <= pppplVar20) {
              uVar16 = 0;
              if (unaff_x22 != (long ****)0x0) {
                uVar16 = (ulong)pppplVar20 / (ulong)unaff_x22;
              }
              pppplVar18 = (long ****)((long)pppplVar20 - uVar16 * (long)unaff_x22);
            }
          }
          unaff_x23 = *(long *****)(*unaff_x19 + (long)pppplVar18 * 8);
          if (unaff_x23 != (long ****)0x0) {
            do {
              while( true ) {
                unaff_x23 = (long ****)*unaff_x23;
                if (unaff_x23 == (long ****)0x0) goto LAB_1086a0bcc;
                pppplVar13 = (long ****)unaff_x23[1];
                if (pppplVar13 != pppplVar20) break;
                uVar7 = (long)unaff_x23[2] - (long)pppplVar20 < 0;
                if ((long ****)unaff_x23[2] == pppplVar20) goto LAB_1086a0e1c;
              }
              if (((ulong)unaff_x22 & uVar12) == 0) {
                pppplVar13 = (long ****)((ulong)pppplVar13 & uVar12);
              }
              else if (unaff_x22 <= pppplVar13) {
                uVar16 = 0;
                if (unaff_x22 != (long ****)0x0) {
                  uVar16 = (ulong)pppplVar13 / (ulong)unaff_x22;
                }
                pppplVar13 = (long ****)((long)pppplVar13 - uVar16 * (long)unaff_x22);
              }
              uVar7 = (long)pppplVar13 - (long)pppplVar18 < 0;
            } while (pppplVar13 == pppplVar18);
          }
        }
LAB_1086a0bcc:
        func_0x0001086b0a2c();
        ppplStack_88 = (long ***)0x1;
        ppplStack_98 = (long ***)pppplVar14;
        ppplStack_90 = (long ***)pppplVar1;
        *pppplVar14 = (long ***)0x0;
        pppplVar14[1] = (long ***)pppplVar20;
        pppplVar14[2] = (long ***)pppplVar20;
        pppplVar14[3] = (long ***)0x0;
        pppplVar14[4] = (long ***)0x0;
        pppplVar14[5] = (long ***)0x0;
        func_0x0001086b0124();
        if ((unaff_x22 == (long ****)0x0) ||
           (func_0x0001086b0a10(param_1,param_2,(float)unaff_x22), (bool)uVar7)) {
          bVar6 = (long ****)0x2 < unaff_x22;
          bVar8 = unaff_x22 == (long ****)0x3;
          func_0x0001086b00f0((long)unaff_x22 << 1);
          pppplVar18 = extraout_x8_00;
          if (!bVar6 || bVar8) {
            pppplVar18 = extraout_x9;
          }
          if ((long)pppplVar18 - 1U == 0) {
            pppplVar18 = (long ****)0x2;
          }
          else if (((ulong)pppplVar18 & (long)pppplVar18 - 1U) != 0) {
            func_0x000107c32594();
            unaff_x22 = (long ****)unaff_x19[1];
            pppplVar18 = pppplVar14;
          }
          if (unaff_x22 < pppplVar18) {
LAB_1086a0c44:
            if ((ulong)pppplVar18 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_1086a0fdc;
            }
            lVar19 = (long)pppplVar18 << 3;
            __Znwm(lVar19);
            FUN_1086a9818(unaff_x19,lVar19);
            pppplVar14 = (long ****)0x0;
            unaff_x19[1] = (long)pppplVar18;
            lVar19 = *unaff_x19;
            while (pppplVar18 != pppplVar14) {
              func_0x000107c3258c();
              lVar19 = extraout_x8_01;
              pppplVar14 = extraout_x9_00;
            }
            ppplVar9 = *pppplVar1;
            unaff_x22 = pppplVar18;
            if (ppplVar9 != (long ***)0x0) {
              pppplVar14 = (long ****)ppplVar9[1];
              uVar16 = (long)pppplVar18 - 1;
              uVar12 = 0;
              if (pppplVar18 != (long ****)0x0) {
                uVar12 = (ulong)pppplVar14 / (ulong)pppplVar18;
              }
              pppplVar13 = pppplVar14;
              if (pppplVar18 <= pppplVar14) {
                pppplVar13 = (long ****)((long)pppplVar14 - uVar12 * (long)pppplVar18);
              }
              if (((ulong)pppplVar18 & uVar16) == 0) {
                pppplVar13 = (long ****)((ulong)pppplVar14 & uVar16);
              }
              *(long *****)(lVar19 + (long)pppplVar13 * 8) = pppplVar1;
              while (ppplVar10 = ppplVar9, ppplVar9 = (long ***)*ppplVar10,
                    ppplVar9 != (long ***)0x0) {
                pppplVar14 = (long ****)ppplVar9[1];
                if (((ulong)pppplVar18 & uVar16) == 0) {
                  pppplVar14 = (long ****)((ulong)pppplVar14 & uVar16);
                }
                else if (pppplVar18 <= pppplVar14) {
                  uVar12 = 0;
                  if (pppplVar18 != (long ****)0x0) {
                    uVar12 = (ulong)pppplVar14 / (ulong)pppplVar18;
                  }
                  pppplVar14 = (long ****)((long)pppplVar14 - uVar12 * (long)pppplVar18);
                }
                if (pppplVar14 != pppplVar13) {
                  if (*(long *)(lVar19 + (long)pppplVar14 * 8) == 0) {
                    *(long ****)(lVar19 + (long)pppplVar14 * 8) = ppplVar10;
                    pppplVar13 = pppplVar14;
                  }
                  else {
                    *ppplVar10 = *ppplVar9;
                    func_0x000107c32458();
                    lVar19 = extraout_x8_02;
                    uVar16 = extraout_x9_01;
                    ppplVar9 = extraout_x10;
                    pppplVar13 = extraout_x11;
                  }
                }
              }
            }
          }
          else if (pppplVar18 < unaff_x22) {
            func_0x0001086b01dc();
            if ((unaff_x22 < (long ****)0x3) || (((ulong)unaff_x22 & (long)unaff_x22 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long ****)0x1 < pppplVar14) {
              pppplVar14 = (long ****)(1L << (-LZCOUNT((long)pppplVar14 + -1) & 0x3fU));
            }
            if (pppplVar18 <= pppplVar14) {
              pppplVar18 = pppplVar14;
            }
            if (pppplVar18 < unaff_x22) {
              if (pppplVar18 != (long ****)0x0) goto LAB_1086a0c44;
              FUN_1086a9818(unaff_x19,0);
              unaff_x19[1] = 0;
              unaff_x22 = (long ****)0x0;
            }
            else {
              unaff_x22 = (long ****)unaff_x19[1];
            }
          }
          if (((ulong)unaff_x22 & (long)unaff_x22 - 1U) == 0) {
            pppplVar18 = (long ****)((long)unaff_x22 - 1U & (ulong)pppplVar20);
          }
          else {
            pppplVar18 = pppplVar20;
            if (unaff_x22 <= pppplVar20) {
              uVar12 = 0;
              if (unaff_x22 != (long ****)0x0) {
                uVar12 = (ulong)pppplVar20 / (ulong)unaff_x22;
              }
              pppplVar18 = (long ****)((long)pppplVar20 - uVar12 * (long)unaff_x22);
            }
          }
        }
        unaff_x23 = (long ****)ppplStack_98;
        lVar19 = *unaff_x19;
        puVar15 = *(undefined8 **)(lVar19 + (long)pppplVar18 * 8);
        if (puVar15 == (undefined8 *)0x0) {
          *ppplStack_98 = (long **)*pppplVar1;
          *pppplVar1 = ppplStack_98;
          *(long *****)(lVar19 + (long)pppplVar18 * 8) = pppplVar1;
          if ((long ***)*ppplStack_98 != (long ***)0x0) {
            pppplVar18 = (long ****)(*ppplStack_98)[1];
            if (((ulong)unaff_x22 & (long)unaff_x22 - 1U) == 0) {
              pppplVar18 = (long ****)((ulong)pppplVar18 & (long)unaff_x22 - 1U);
            }
            else if (unaff_x22 <= pppplVar18) {
              uVar12 = 0;
              if (unaff_x22 != (long ****)0x0) {
                uVar12 = (ulong)pppplVar18 / (ulong)unaff_x22;
              }
              pppplVar18 = (long ****)((long)pppplVar18 - uVar12 * (long)unaff_x22);
            }
            *(long ****)(lVar19 + (long)pppplVar18 * 8) = ppplStack_98;
          }
        }
        else {
          *ppplStack_98 = (long **)*puVar15;
          *puVar15 = ppplStack_98;
        }
        ppplStack_98 = (long ***)0x0;
        func_0x0001086b0b44();
        FUN_1086a9830(&ppplStack_98);
LAB_1086a0e1c:
        pppplVar18 = unaff_x23 + 5;
        unaff_x21 = (long ****)unaff_x23[4];
        if (unaff_x21 < *pppplVar18) {
          pppplVar14 = unaff_x21;
          FUN_1086a7798(unaff_x21,auStack_e0);
          pppplVar18 = unaff_x21 + 9;
          unaff_x23[4] = (long ***)pppplVar18;
        }
        else {
          lVar19 = (long)unaff_x21 - (long)unaff_x23[3];
          uVar12 = lVar19 / 0x48 + 1;
          if (0x38e38e38e38e38e < uVar12) {
            FUN_1086a9928();
LAB_1086a0fdc:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1086a0fe0);
            (*pcVar5)();
          }
          uVar3 = ((long)*pppplVar18 - (long)unaff_x23[3]) / 0x48;
          uVar16 = uVar3 * 2;
          if (uVar16 < uVar12 || uVar16 - uVar12 == 0) {
            uVar16 = uVar12;
          }
          if (0x1c71c71c71c71c6 < uVar3) {
            uVar16 = 0x38e38e38e38e38e;
          }
          ppplStack_78 = (long ***)pppplVar18;
          if (uVar16 == 0) {
            ppplVar9 = (long ***)0x0;
          }
          else {
            if (0x38e38e38e38e38e < uVar16) {
              func_0x000104bd35f4();
              goto LAB_1086a0fdc;
            }
            ppplVar9 = (long ***)(uVar16 * 0x48);
            __Znwm();
          }
          lVar19 = (long)ppplVar9 + lVar19;
          ppplStack_98 = ppplVar9;
          ppplStack_90 = (long ***)lVar19;
          ppplStack_88 = (long ***)lVar19;
          pplStack_80 = (long **)(ppplVar9 + uVar16 * 9);
          FUN_1086a7798(lVar19,auStack_e0);
          unaff_x21 = (long ****)unaff_x23[3];
          pppplVar18 = (long ****)unaff_x23[4];
          ppplVar21 = (long ***)(lVar19 + (((long)pppplVar18 - (long)unaff_x21) / -0x48) * 0x48);
          ppplVar10 = ppplVar21;
          for (unaff_x22 = unaff_x21; unaff_x22 != pppplVar18; unaff_x22 = unaff_x22 + 9) {
            FUN_10869ff9c(ppplVar10,unaff_x22);
            ppplVar10 = ppplVar10 + 9;
          }
          for (; unaff_x21 != pppplVar18; unaff_x21 = unaff_x21 + 9) {
            FUN_10891cac8(unaff_x21);
          }
          pppplVar18 = (long ****)(lVar19 + 0x48);
          ppplStack_98 = unaff_x23[3];
          unaff_x23[3] = ppplVar21;
          unaff_x23[4] = (long ***)pppplVar18;
          pplStack_80 = (long **)unaff_x23[5];
          unaff_x23[5] = ppplVar9 + uVar16 * 9;
          pppplVar14 = &ppplStack_98;
          ppplStack_90 = ppplStack_98;
          ppplStack_88 = ppplStack_98;
          FUN_1086a9934();
        }
        unaff_x23[4] = (long ***)pppplVar18;
      }
      func_0x000107c27ae4(&puStack_f8);
      FUN_10891cac8(auStack_e0);
      pppplVar18 = (long ****)ppplStack_140;
      ppplStack_120 = ppplStack_148;
    }
    pppplVar18 = pppplVar18 + 0x15;
  } while( true );
}



/* Entry: 1086a1084; end: 1086a10f7;  */

long FUN_1086a1084(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long lVar3;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000107c324b0();
    plVar2 = (long *)(param_1 + 0x20);
    FUN_1086ad600();
    param_1 = 0;
    if (unaff_x19 != 0) {
      lVar1 = *(long *)(unaff_x19 + 0x20);
      for (lVar3 = *(long *)(unaff_x19 + 0x18); lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
        func_0x0001086b0ac4();
        FUN_1086e981c();
      }
      func_0x0001086b0500();
      lVar3 = *plVar2;
      FUN_1086ad6cc(&stack0xffffffffffffffc8);
      FUN_1086a9830(&stack0xffffffffffffffc8);
      return lVar3;
    }
  }
  return param_1;
}



/* Entry: 1086a10f8; end: 1086a1147;  */

long FUN_1086a10f8(long param_1)

{
  if ((*(byte *)(param_1 + 0xd8) & 1) == 0) {
    func_0x0001086aff84();
    func_0x0001086aff98();
    func_0x0001086b00c4();
    func_0x0001086b03f4();
    func_0x0001086b0354();
  }
  return param_1 + 8;
}



/* Entry: 1086a1148; end: 1086a125b;  */

void FUN_1086a1148(void)

{
  undefined1 uVar1;
  long extraout_x8;
  undefined1 auStack_300 [216];
  byte bStack_228;
  undefined8 auStack_220 [27];
  byte bStack_148;
  undefined1 auStack_140 [232];
  undefined1 auStack_58 [24];
  
  func_0x000107c32538();
  func_0x000107c316c8(auStack_58,&UNK_10f4b09fc);
  func_0x000107c32568(extraout_x8);
  func_0x000107c29f64();
  uVar1 = *(char *)(extraout_x8 + 0x1d0) == '\x01';
  if ((bool)uVar1) {
    func_0x000107c32568(auStack_140);
    func_0x000107c29fa8();
    func_0x000107c28ee8(auStack_220,auStack_140);
    func_0x000107c3257c(auStack_300);
    while ((((bStack_148 & 1) != 0 || ((bStack_228 & 1) != 0)) &&
           (func_0x0001086b0c28(auStack_220[0]), !(bool)uVar1))) {
      FUN_1086a10f8(auStack_220);
      func_0x0001086b0834();
      func_0x000107c28fdc(auStack_220);
    }
    func_0x000107c324f8(auStack_300);
    func_0x000107c324f8(auStack_220);
    func_0x000107c28fcc(auStack_140);
  }
  func_0x0001086b0520();
  return;
}



/* Entry: 1086a125c; end: 1086a132f;  */

void FUN_1086a125c(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  byte bStack_1b0;
  undefined8 auStack_1a8 [22];
  byte bStack_f8;
  undefined1 auStack_f0 [192];
  
  func_0x0001086b03e8();
  func_0x000107c28a9c(extraout_x8);
  func_0x0001086b0588(auStack_f0);
  FUN_108864dac();
  func_0x000107c28ef4(auStack_1a8,auStack_f0);
  func_0x000107c32530();
  while ((((bStack_f8 & 1) != 0 || ((bStack_1b0 & 1) != 0)) &&
         (func_0x0001086b0c28(auStack_1a8[0]), !(bool)in_ZR))) {
    FUN_1086a1330(auStack_1a8);
    FUN_1086a0710();
    func_0x000107c28ff0(auStack_1a8);
  }
  func_0x000107c32484();
  func_0x000107c324dc(auStack_1a8);
  func_0x000107c28fe8(auStack_f0);
  return;
}



/* Entry: 1086a1330; end: 1086a137f;  */

long FUN_1086a1330(long param_1)

{
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    func_0x0001086aff84();
    func_0x0001086aff98();
    func_0x0001086b00c4();
    func_0x0001086b03f4();
    func_0x0001086b0354();
  }
  return param_1 + 8;
}



/* Entry: 1086a1380; end: 1086a13f7;  */

void FUN_1086a1380(void)

{
  undefined8 extraout_x8;
  undefined8 *unaff_x21;
  undefined1 auStack_1d8 [40];
  byte bStack_1b0;
  
  func_0x0001086b0468();
  FUN_1086a125c(auStack_1d8);
  if ((bStack_1b0 & 1) == 0) {
    FUN_1086e0ad4(extraout_x8,*unaff_x21,auStack_1d8);
  }
  else {
    func_0x000107c29260(extraout_x8,*unaff_x21,auStack_1d8);
  }
  func_0x0001086b09d0();
  return;
}



/* Entry: 1086a13f8; end: 1086a152f;  */

void FUN_1086a13f8(void)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x21;
  long lVar3;
  undefined1 auStack_6c0 [64];
  long lStack_638;
  long lStack_630;
  undefined8 uStack_628;
  code *pcStack_620;
  undefined **ppuStack_618;
  long *plStack_610;
  undefined8 uStack_48;
  
  func_0x0001086b0468();
  func_0x0001086b0138();
  lStack_638 = 0;
  lStack_630 = 0;
  uStack_628 = 0;
  pcStack_620 = FUN_1086adc18;
  ppuStack_618 = &PTR_DAT_110a63748;
  plStack_610 = &lStack_638;
  uStack_48 = extraout_x8;
  FUN_1086a1530();
  func_0x0001086b040c(ppuStack_618);
  func_0x0001086b0a34();
  func_0x000104be6ea0();
  lVar1 = lStack_630;
  for (lVar3 = lStack_638; uVar2 = lVar3 == lVar1, !(bool)uVar2; lVar3 = lVar3 + 0x1a8) {
    if ((*(byte *)(lVar3 + 0x28) & 1) == 0) {
      FUN_1086e0ad4(&pcStack_620,*unaff_x21,lVar3);
      func_0x0001086b0da8();
    }
    else {
      func_0x000107c29260(&pcStack_620,*unaff_x21,lVar3);
      func_0x0001086b0da8();
    }
    func_0x000107c27a10();
  }
  func_0x0001086b0664();
  func_0x0001086aff54(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000107c27a08();
    func_0x0001086b0664();
    func_0x0001086b025c();
    func_0x0001086b0104();
    func_0x0001086b03fc();
    func_0x0001086b060c();
    func_0x0001086b05f8();
    func_0x0001086b05b8();
    func_0x0001086b065c();
    func_0x0001086b07a4(auStack_6c0);
    FUN_1086adbb4();
    func_0x0001086b0604();
    func_0x0001086b0520();
    return;
  }
  return;
}


